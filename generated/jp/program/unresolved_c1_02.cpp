// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C1/C19DB5-jp.asm (unresolved).
bool execute_unresolved_c1_c19db5_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC19DBD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:11 END_STACK_VARS
    case 0xC19DBF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:11 END_STACK_VARS
    case 0xC19DC0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:11 END_STACK_VARS
    case 0xC19DC1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:11 END_STACK_VARS
    case 0xC19DC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC19DC2.
    case 0xC19DC4: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:11 END_STACK_VARS
    case 0xC19DC5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:11 END_STACK_VARS
    case 0xC19DC6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5-jp.asm:13 STA @LOCAL04
    case 0xC19DC7: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:13 STA @LOCAL04
    // Overlapping static entry reached from 0xC19DC4.
    case 0xC19DC8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5-jp.asm:14 JSR SET_INSTANT_PRINTING
    case 0xC19DC9: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:15 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC19DCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:15 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC19DCC.
    case 0xC19DCE: cpu.execute_instruction<0x9F>(0x08B122, 4); return true;
    // src/unknown/C1/C19DB5-jp.asm:16 JSL UNKNOWN_C20A20
    case 0xC19DCF: cpu.execute_instruction<0x22>(0xC208B1, 4); return true;
    // src/unknown/C1/C19DB5-jp.asm:16 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC19DCE.
    case 0xC19DD2: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:17 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0C
    case 0xC19DD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:17 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0C
    // Overlapping static entry reached from 0xC19DD2.
    case 0xC19DD4: cpu.execute_instruction<0x0C>(0x002000, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:17 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0C
    // Overlapping static entry reached from 0xC19DD3.
    case 0xC19DD5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:17 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0C
    case 0xC19DD6: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:17 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0C
    // Overlapping static entry reached from 0xC19DD4.
    case 0xC19DD7: cpu.execute_instruction<0xE4>(0x000006, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:18 LDA #5
    case 0xC19DD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:18 LDA #5
    // Overlapping static entry reached from 0xC19DD9.
    case 0xC19DDB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:19 JSR UNKNOWN_C10EB4
    case 0xC19DDC: cpu.execute_instruction<0x20>(0x001495, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:20 LDA #0
    case 0xC19DDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:20 LDA #0
    // Overlapping static entry reached from 0xC19DDF.
    case 0xC19DE1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:21 STA @VIRTUAL04
    case 0xC19DE2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:22 STA @LOCAL03
    case 0xC19DE4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:23 JMP @UNKNOWN3
    case 0xC19DE6: cpu.execute_instruction<0x4C>(0x009E98, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:25 LDA @LOCAL04
    case 0xC19DE9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC19DEB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC19DED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC19DEE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC19DF0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC19DF1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:27 LDX @LOCAL03
    case 0xC19DF3: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:28 STX @VIRTUAL04
    case 0xC19DF5: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:29 CLC
    case 0xC19DF7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5-jp.asm:30 ADC @VIRTUAL04
    case 0xC19DF8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:31 TAX
    case 0xC19DFA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5-jp.asm:32 LDA f:STORE_TABLE,X
    case 0xC19DFB: cpu.execute_instruction<0xBF>(0xD587D0, 4); return true;
    // src/unknown/C1/C19DB5-jp.asm:33 AND #$00FF
    case 0xC19DFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC19DFF.
    case 0xC19E01: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:34 TAY
    case 0xC19E02: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5-jp.asm:35 STY @LOCAL02
    case 0xC19E03: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:36 BEQL @UNKNOWN2
    case 0xC19E05: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:36 BEQL @UNKNOWN2
    case 0xC19E07: cpu.execute_instruction<0x4C>(0x009E92, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:37 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19E0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:37 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19E0A.
    case 0xC19E0C: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:37 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19E0D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:37 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19E0C.
    case 0xC19E0E: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:37 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19E0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:37 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19E0E.
    case 0xC19E10: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:37 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19E0F.
    case 0xC19E11: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:37 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19E12: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:38 TYA
    case 0xC19E14: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19E15: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19E17: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19E18: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19E1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19E1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19E1C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5-jp.asm:40 STA @VIRTUAL02
    case 0xC19E1D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC19E1F: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC19E21: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC19E23: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC19E25: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:42 CLC
    case 0xC19E27: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5-jp.asm:43 ADC @VIRTUAL0A
    case 0xC19E28: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:44 STA @VIRTUAL0A
    case 0xC19E2A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:45 STA @LOCAL00
    case 0xC19E2C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:46 LDA @VIRTUAL0A+2
    case 0xC19E2E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:47 STA @LOCAL00+2
    case 0xC19E30: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:48 LDX #.SIZEOF(item::name)
    case 0xC19E32: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:48 LDX #.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC19E32.
    case 0xC19E34: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:49 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC19E35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:49 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC19E35.
    case 0xC19E37: cpu.execute_instruction<0x9F>(0x8EC322, 4); return true;
    // src/unknown/C1/C19DB5-jp.asm:50 JSL MEMCPY16
    case 0xC19E38: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C1/C19DB5-jp.asm:50 JSL MEMCPY16
    // Overlapping static entry reached from 0xC19E37.
    case 0xC19E3B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC19E3C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:51 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC19E3B.
    case 0xC19E3D: cpu.execute_instruction<0x20>(0x00549C, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:52 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    case 0xC19E3E: cpu.execute_instruction<0x9C>(0x009F54, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:52 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC19E3D.
    case 0xC19E40: cpu.execute_instruction<0x9F>(0xA920C2, 4); return true;
    // src/unknown/C1/C19DB5-jp.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC19E41: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:54 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL0A
    case 0xC19E43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:54 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC19E40.
    case 0xC19E44: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:54 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC19E43.
    case 0xC19E45: cpu.execute_instruction<0x9F>(0x8B0A85, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:54 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL0A
    case 0xC19E46: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:54 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL0A
    case 0xC19E48: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:54 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL0A
    case 0xC19E49: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:54 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL0A
    case 0xC19E4B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:54 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL0A
    case 0xC19E4C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:54 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL0A
    case 0xC19E4E: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC19E50: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:56 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC19E52: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:56 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC19E54: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:56 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC19E56: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:56 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC19E58: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:57 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19E5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:57 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19E5A.
    case 0xC19E5C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:57 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19E5D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:57 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19E5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:57 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19E5F.
    case 0xC19E61: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:57 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19E62: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:58 LDY @LOCAL02
    case 0xC19E64: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:59 TYA
    case 0xC19E66: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5-jp.asm:60 JSR UNKNOWN_C115F4
    case 0xC19E67: cpu.execute_instruction<0x20>(0x001BB0, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:61 LDA @LOCAL03
    case 0xC19E6A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:62 STA @VIRTUAL04
    case 0xC19E6C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:63 LDX @VIRTUAL04
    case 0xC19E6E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:64 LDA #0
    case 0xC19E70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:64 LDA #0
    // Overlapping static entry reached from 0xC19E70.
    case 0xC19E72: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:65 JSR UNKNOWN_C438A5
    case 0xC19E73: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:66 LDA @VIRTUAL02
    case 0xC19E76: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:67 CLC
    case 0xC19E78: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5-jp.asm:68 ADC #11
    case 0xC19E79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:68 ADC #11
    // Overlapping static entry reached from 0xC19E79.
    case 0xC19E7B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:69 CLC
    case 0xC19E7C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5-jp.asm:70 ADC @VIRTUAL06
    case 0xC19E7D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:71 STA @VIRTUAL06
    case 0xC19E7F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:72 LDA [@VIRTUAL06]
    case 0xC19E81: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:73 STORE_INT1632 @VIRTUAL06
    case 0xC19E83: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:73 STORE_INT1632 @VIRTUAL06
    case 0xC19E85: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19E87: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19E89: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19E8B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19E8D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:75 JSR UNKNOWN_C11404
    case 0xC19E8F: cpu.execute_instruction<0x20>(0x001404, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:77 INC @VIRTUAL04
    case 0xC19E92: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:78 LDA @VIRTUAL04
    case 0xC19E94: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:79 STA @LOCAL03
    case 0xC19E96: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:81 LDA @VIRTUAL04
    case 0xC19E98: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:82 CMP #7
    case 0xC19E9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:82 CMP #7
    // Overlapping static entry reached from 0xC19E9A.
    case 0xC19E9C: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:83 BCCL @UNKNOWN0
    case 0xC19E9D: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:83 BCCL @UNKNOWN0
    case 0xC19E9F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:83 BCCL @UNKNOWN0
    case 0xC19EA1: cpu.execute_instruction<0x4C>(0x009DE9, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:84 LDX #0
    case 0xC19EA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:84 LDX #0
    // Overlapping static entry reached from 0xC19EA4.
    case 0xC19EA6: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:85 TXA
    case 0xC19EA7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5-jp.asm:86 JSR UNKNOWN_C438A5
    case 0xC19EA8: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:87 LDY #0
    case 0xC19EAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:87 LDY #0
    // Overlapping static entry reached from 0xC19EAB.
    case 0xC19EAD: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:88 TYX
    case 0xC19EAE: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5-jp.asm:89 LDA #1
    case 0xC19EAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:89 LDA #1
    // Overlapping static entry reached from 0xC19EAF.
    case 0xC19EB1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:90 JSR UNKNOWN_C1180D
    case 0xC19EB2: cpu.execute_instruction<0x20>(0x001FA6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:91 LOADPTR SET_HPPP_WINDOW_MODE_ITEM, @LOCAL00
    case 0xC19EB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004B, 2); else cpu.execute_instruction<0xA9>(0x009B4B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:91 LOADPTR SET_HPPP_WINDOW_MODE_ITEM, @LOCAL00
    // Overlapping static entry reached from 0xC19EB5.
    case 0xC19EB7: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:91 LOADPTR SET_HPPP_WINDOW_MODE_ITEM, @LOCAL00
    case 0xC19EB8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:91 LOADPTR SET_HPPP_WINDOW_MODE_ITEM, @LOCAL00
    case 0xC19EBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:91 LOADPTR SET_HPPP_WINDOW_MODE_ITEM, @LOCAL00
    // Overlapping static entry reached from 0xC19EBA.
    case 0xC19EBC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:91 LOADPTR SET_HPPP_WINDOW_MODE_ITEM, @LOCAL00
    case 0xC19EBD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:92 JSR UNKNOWN_C11F5A
    case 0xC19EBF: cpu.execute_instruction<0x20>(0x00267B, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:93 JSR UNKNOWN_C19CDD
    case 0xC19EC2: cpu.execute_instruction<0x20>(0x009CE5, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:94 LDA #1
    case 0xC19EC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:94 LDA #1
    // Overlapping static entry reached from 0xC19EC5.
    case 0xC19EC7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:95 JSR SELECTION_MENU
    case 0xC19EC8: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:96 TAX
    case 0xC19ECB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5-jp.asm:97 STX @LOCAL02
    case 0xC19ECC: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:98 JSR UNKNOWN_C19D49
    case 0xC19ECE: cpu.execute_instruction<0x20>(0x009D51, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:99 JSR CLOSE_FOCUS_WINDOW
    case 0xC19ED1: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:100 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC19ED4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:100 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC19ED4.
    case 0xC19ED6: cpu.execute_instruction<0x9F>(0x094D22, 4); return true;
    // src/unknown/C1/C19DB5-jp.asm:101 JSL UNKNOWN_C20ABC
    case 0xC19ED7: cpu.execute_instruction<0x22>(0xC2094D, 4); return true;
    // src/unknown/C1/C19DB5-jp.asm:101 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC19ED6.
    case 0xC19EDA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:102 JSR CLEAR_INSTANT_PRINTING
    case 0xC19EDB: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:102 JSR CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC19EDA.
    case 0xC19EDC: cpu.execute_instruction<0xED>(0x00A600, 3); return true;
    // src/unknown/C1/C19DB5-jp.asm:103 LDX @LOCAL02
    case 0xC19EDE: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:103 LDX @LOCAL02
    // Overlapping static entry reached from 0xC19EDC.
    case 0xC19EDF: cpu.execute_instruction<0x16>(0x00008A, 2); return true;
    // src/unknown/C1/C19DB5-jp.asm:104 TXA
    case 0xC19EE0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:105 END_C_FUNCTION
    case 0xC19EE1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19DB5-jp.asm:105 END_C_FUNCTION
    case 0xC19EE2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19F29-jp.asm (unresolved).
bool execute_unresolved_c1_c19f29_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19F29-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC19F30: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19F29-jp.asm:12 END_STACK_VARS
    case 0xC19F32: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C19F29-jp.asm:12 END_STACK_VARS
    case 0xC19F33: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19F29-jp.asm:12 END_STACK_VARS
    case 0xC19F34: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19F29-jp.asm:12 END_STACK_VARS
    case 0xC19F35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19F29-jp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC19F35.
    case 0xC19F37: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19F29-jp.asm:12 END_STACK_VARS
    case 0xC19F38: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C19F29-jp.asm:12 END_STACK_VARS
    case 0xC19F39: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:13 TAX
    case 0xC19F3A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:14 DEC
    case 0xC19F3B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:15 STA @VIRTUAL02
    case 0xC19F3C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:16 STA @LOCAL05
    case 0xC19F3E: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:17 JSR SET_INSTANT_PRINTING
    case 0xC19F40: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19F29-jp.asm:18 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU
    case 0xC19F43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19F29-jp.asm:18 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU
    // Overlapping static entry reached from 0xC19F43.
    case 0xC19F45: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C19F29-jp.asm:18 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU
    case 0xC19F46: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:19 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC19F49: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:20 AND #$00FF
    case 0xC19F4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC19F4C.
    case 0xC19F4E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:21 CMP #1
    case 0xC19F4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:21 CMP #1
    // Overlapping static entry reached from 0xC19F4F.
    case 0xC19F51: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:22 BEQ @UNKNOWN0
    case 0xC19F52: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:23 LDA #6
    case 0xC19F54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:23 LDA #6
    // Overlapping static entry reached from 0xC19F54.
    case 0xC19F56: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:24 STA PAGINATION_WINDOW
    case 0xC19F57: cpu.execute_instruction<0x8D>(0x0061F2, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:26 LDA @VIRTUAL02
    case 0xC19F5A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:27 LDY #.SIZEOF(char_struct)
    case 0xC19F5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:27 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19F5C.
    case 0xC19F5E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:28 JSL MULT168
    case 0xC19F5F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:29 CLC
    case 0xC19F63: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:30 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC19F64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:30 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC19F64.
    case 0xC19F66: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19F29-jp.asm:31 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19F67: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19F29-jp.asm:31 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19F69: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19F29-jp.asm:31 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19F6A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19F29-jp.asm:31 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19F6C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19F29-jp.asm:31 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19F6D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19F29-jp.asm:31 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19F6F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC19F71: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19F29-jp.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19F73: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19F29-jp.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19F75: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19F29-jp.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19F77: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19F29-jp.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19F79: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:34 LDX #.SIZEOF(char_struct::name)
    case 0xC19F7B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:34 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC19F7B.
    case 0xC19F7D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:35 LDA #6
    case 0xC19F7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:35 LDA #6
    // Overlapping static entry reached from 0xC19F7E.
    case 0xC19F80: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:36 JSL SET_WINDOW_TITLE
    case 0xC19F81: cpu.execute_instruction<0x22>(0xC2030C, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:37 LDY #0
    case 0xC19F85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:37 LDY #0
    // Overlapping static entry reached from 0xC19F85.
    case 0xC19F87: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:38 STY @LOCAL04
    case 0xC19F88: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:39 JMP @UNKNOWN14
    case 0xC19F8A: cpu.execute_instruction<0x4C>(0x00A10D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:41 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC19F8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BE, 2); else cpu.execute_instruction<0xA9>(0x0039BE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:41 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    // Overlapping static entry reached from 0xC19F8D.
    case 0xC19F8F: cpu.execute_instruction<0x39>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19F29-jp.asm:41 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC19F90: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:41 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC19F92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:41 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    // Overlapping static entry reached from 0xC19F92.
    case 0xC19F94: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19F29-jp.asm:41 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC19F95: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:42 TYA
    case 0xC19F97: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C1/C19F29-jp.asm:43 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC19F98: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C1/C19F29-jp.asm:43 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC19F99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:44 CLC
    case 0xC19F9A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:45 ADC @VIRTUAL06
    case 0xC19F9B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:46 STA @VIRTUAL06
    case 0xC19F9D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:47 STA @LOCAL00
    case 0xC19F9F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:48 LDA @VIRTUAL06+2
    case 0xC19FA1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:49 STA @LOCAL00+2
    case 0xC19FA3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:50 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19FA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:50 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19FA5.
    case 0xC19FA7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C19F29-jp.asm:50 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19FA8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:50 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19FAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:50 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19FAA.
    case 0xC19FAC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C19F29-jp.asm:50 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19FAD: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:51 TYX
    case 0xC19FAF: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:52 LDA #0
    case 0xC19FB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:52 LDA #0
    // Overlapping static entry reached from 0xC19FB0.
    case 0xC19FB2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:53 JSR UNKNOWN_C114B1
    case 0xC19FB3: cpu.execute_instruction<0x20>(0x001AE6, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:54 LDY @LOCAL04
    case 0xC19FB6: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:55 TYA
    case 0xC19FB8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:56 BEQ @UNKNOWN4
    case 0xC19FB9: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:57 CMP #1
    case 0xC19FBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:57 CMP #1
    // Overlapping static entry reached from 0xC19FBB.
    case 0xC19FBD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:58 BEQ @UNKNOWN5
    case 0xC19FBE: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:59 CMP #2
    case 0xC19FC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:59 CMP #2
    // Overlapping static entry reached from 0xC19FC0.
    case 0xC19FC2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:60 BEQ @UNKNOWN6
    case 0xC19FC3: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:61 CMP #3
    case 0xC19FC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:61 CMP #3
    // Overlapping static entry reached from 0xC19FC5.
    case 0xC19FC7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:62 BEQ @UNKNOWN7
    case 0xC19FC8: cpu.execute_instruction<0xF0>(0x00004A, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:63 BRA @UNKNOWN8
    case 0xC19FCA: cpu.execute_instruction<0x80>(0x00005E, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:65 LDA @LOCAL05
    case 0xC19FCC: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:66 STA @VIRTUAL02
    case 0xC19FCE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:67 LDY #.SIZEOF(char_struct)
    case 0xC19FD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:67 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19FD0.
    case 0xC19FD2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:68 JSL MULT168
    case 0xC19FD3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:69 TAX
    case 0xC19FD7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:70 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC19FD8: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:71 AND #$00FF
    case 0xC19FDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC19FDB.
    case 0xC19FDD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:72 STA @VIRTUAL04
    case 0xC19FDE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:73 STA @LOCAL03
    case 0xC19FE0: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:74 BRA @UNKNOWN8
    case 0xC19FE2: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:76 LDA @LOCAL05
    case 0xC19FE4: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:77 STA @VIRTUAL02
    case 0xC19FE6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:78 LDY #.SIZEOF(char_struct)
    case 0xC19FE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:78 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19FE8.
    case 0xC19FEA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:79 JSL MULT168
    case 0xC19FEB: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:80 TAX
    case 0xC19FEF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:81 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC19FF0: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:82 AND #$00FF
    case 0xC19FF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC19FF3.
    case 0xC19FF5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:83 STA @VIRTUAL04
    case 0xC19FF6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:84 STA @LOCAL03
    case 0xC19FF8: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:85 BRA @UNKNOWN8
    case 0xC19FFA: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:87 LDA @LOCAL05
    case 0xC19FFC: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:88 STA @VIRTUAL02
    case 0xC19FFE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:89 LDY #.SIZEOF(char_struct)
    case 0xC1A000: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:89 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A000.
    case 0xC1A002: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:90 JSL MULT168
    case 0xC1A003: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:91 TAX
    case 0xC1A007: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:92 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC1A008: cpu.execute_instruction<0xBD>(0x009CB1, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:93 AND #$00FF
    case 0xC1A00B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:93 AND #$00FF
    // Overlapping static entry reached from 0xC1A00B.
    case 0xC1A00D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:94 STA @VIRTUAL04
    case 0xC1A00E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:95 STA @LOCAL03
    case 0xC1A010: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:96 BRA @UNKNOWN8
    case 0xC1A012: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:98 LDA @LOCAL05
    case 0xC1A014: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:99 STA @VIRTUAL02
    case 0xC1A016: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:100 LDY #.SIZEOF(char_struct)
    case 0xC1A018: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:100 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A018.
    case 0xC1A01A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:101 JSL MULT168
    case 0xC1A01B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:102 TAX
    case 0xC1A01F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:103 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC1A020: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:104 AND #$00FF
    case 0xC1A023: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:104 AND #$00FF
    // Overlapping static entry reached from 0xC1A023.
    case 0xC1A025: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:105 STA @VIRTUAL04
    case 0xC1A026: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:106 STA @LOCAL03
    case 0xC1A028: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:108 LDA @LOCAL03
    case 0xC1A02A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:109 STA @VIRTUAL04
    case 0xC1A02C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C19F29-jp.asm:110 BEQL @UNKNOWN12
    case 0xC1A02E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C19F29-jp.asm:110 BEQL @UNKNOWN12
    case 0xC1A030: cpu.execute_instruction<0x4C>(0x00A0C1, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:111 LDA @VIRTUAL04
    case 0xC1A033: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:112 DEC
    case 0xC1A035: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:113 PHA
    case 0xC1A036: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:114 LDA @LOCAL05
    case 0xC1A037: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:115 STA @VIRTUAL02
    case 0xC1A039: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:116 LDY #.SIZEOF(char_struct)
    case 0xC1A03B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:116 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A03B.
    case 0xC1A03D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:117 JSL MULT168
    case 0xC1A03E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:118 CLC
    case 0xC1A042: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:119 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1A043: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:119 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1A043.
    case 0xC1A045: cpu.execute_instruction<0x9C>(0x00847A, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:120 PLY
    case 0xC1A046: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:121 STY @VIRTUAL02
    case 0xC1A047: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:121 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC1A045.
    case 0xC1A048: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:122 CLC
    case 0xC1A049: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:123 ADC @VIRTUAL02
    case 0xC1A04A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:124 TAX
    case 0xC1A04C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:125 LDA __BSS_START__,X
    case 0xC1A04D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:126 AND #$00FF
    case 0xC1A050: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:126 AND #$00FF
    // Overlapping static entry reached from 0xC1A050.
    case 0xC1A052: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:127 STA @LOCAL02
    case 0xC1A053: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:128 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A055: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:128 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A055.
    case 0xC1A057: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19F29-jp.asm:128 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A058: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19F29-jp.asm:128 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A057.
    case 0xC1A059: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:128 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A05A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:128 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A059.
    case 0xC1A05B: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:128 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A05A.
    case 0xC1A05C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19F29-jp.asm:128 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A05D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:129 LDA @LOCAL02
    case 0xC1A05F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C19F29-jp.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A061: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C19F29-jp.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A063: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C19F29-jp.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A064: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C19F29-jp.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A066: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C19F29-jp.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A067: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C19F29-jp.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A068: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:131 CLC
    case 0xC1A069: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:132 ADC @VIRTUAL06
    case 0xC1A06A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:133 STA @VIRTUAL06
    case 0xC1A06C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:134 STA @LOCAL00
    case 0xC1A06E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:135 LDA @VIRTUAL06+2
    case 0xC1A070: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:136 STA @LOCAL00+2
    case 0xC1A072: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:137 LDX #.SIZEOF(item::name)
    case 0xC1A074: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:137 LDX #.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC1A074.
    case 0xC1A076: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:138 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1A077: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:138 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1A077.
    case 0xC1A079: cpu.execute_instruction<0x9F>(0x8EC322, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:139 JSL MEMCPY16
    case 0xC1A07A: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:139 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1A079.
    case 0xC1A07D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:140 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A07E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:140 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1A07D.
    case 0xC1A07F: cpu.execute_instruction<0x20>(0x00549C, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:141 STZ TEMPORARY_TEXT_BUFFER + 10
    case 0xC1A080: cpu.execute_instruction<0x9C>(0x009F54, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:141 STZ TEMPORARY_TEXT_BUFFER + 10
    // Overlapping static entry reached from 0xC1A07F.
    case 0xC1A082: cpu.execute_instruction<0x9F>(0xA520C2, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:142 REP #PROC_FLAGS::ACCUM8
    case 0xC1A083: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:143 LDA @LOCAL03
    case 0xC1A085: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:143 LDA @LOCAL03
    // Overlapping static entry reached from 0xC1A082.
    case 0xC1A086: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:144 STA @VIRTUAL04
    case 0xC1A087: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:145 LDX @VIRTUAL04
    case 0xC1A089: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:146 LDA @LOCAL05
    case 0xC1A08B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:147 STA @VIRTUAL02
    case 0xC1A08D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:148 INC
    case 0xC1A08F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:149 JSL CHECK_ITEM_EQUIPPED
    case 0xC1A090: cpu.execute_instruction<0x22>(0xC3E560, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:150 CMP #0
    case 0xC1A094: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:150 CMP #0
    // Overlapping static entry reached from 0xC1A094.
    case 0xC1A096: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:151 BEQ @UNKNOWN13
    case 0xC1A097: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:152 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A099: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:152 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A099.
    case 0xC1A09B: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19F29-jp.asm:152 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A09C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19F29-jp.asm:152 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A09E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19F29-jp.asm:152 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A09F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19F29-jp.asm:152 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A0A1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19F29-jp.asm:152 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A0A2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19F29-jp.asm:152 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A0A4: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:153 REP #PROC_FLAGS::ACCUM8
    case 0xC1A0A6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19F29-jp.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A0A8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19F29-jp.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A0AA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19F29-jp.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A0AC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19F29-jp.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A0AE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:155 JSL STRLEN
    case 0xC1A0B0: cpu.execute_instruction<0x22>(0xC08F13, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:156 TAX
    case 0xC1A0B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A0B5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:159 LDA #$22
    case 0xC1A0B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x009D22, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:160 STA TEMPORARY_TEXT_BUFFER,X
    case 0xC1A0B9: cpu.execute_instruction<0x9D>(0x009F4A, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:160 STA TEMPORARY_TEXT_BUFFER,X
    // Overlapping static entry reached from 0xC1A0B7.
    case 0xC1A0BA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:160 STA TEMPORARY_TEXT_BUFFER,X
    // Overlapping static entry reached from 0xC1A0BA.
    case 0xC1A0BB: cpu.execute_instruction<0x9F>(0x9F4B9E, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:161 STZ TEMPORARY_TEXT_BUFFER + 1,X
    case 0xC1A0BC: cpu.execute_instruction<0x9E>(0x009F4B, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:162 BRA @UNKNOWN13
    case 0xC1A0BF: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:165 LOADPTR STATUS_EQUIP_WINDOW_TEXT_12, @LOCAL00
    case 0xC1A0C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0039CE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:165 LOADPTR STATUS_EQUIP_WINDOW_TEXT_12, @LOCAL00
    // Overlapping static entry reached from 0xC1A0C1.
    case 0xC1A0C3: cpu.execute_instruction<0x39>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19F29-jp.asm:165 LOADPTR STATUS_EQUIP_WINDOW_TEXT_12, @LOCAL00
    case 0xC1A0C4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:165 LOADPTR STATUS_EQUIP_WINDOW_TEXT_12, @LOCAL00
    case 0xC1A0C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:165 LOADPTR STATUS_EQUIP_WINDOW_TEXT_12, @LOCAL00
    // Overlapping static entry reached from 0xC1A0C6.
    case 0xC1A0C8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19F29-jp.asm:165 LOADPTR STATUS_EQUIP_WINDOW_TEXT_12, @LOCAL00
    case 0xC1A0C9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:166 LDX #4
    case 0xC1A0CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:166 LDX #4
    // Overlapping static entry reached from 0xC1A0CB.
    case 0xC1A0CD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:167 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1A0CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:167 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1A0CE.
    case 0xC1A0D0: cpu.execute_instruction<0x9F>(0x8EC322, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:168 JSL MEMCPY16
    case 0xC1A0D1: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:168 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1A0D0.
    case 0xC1A0D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:169 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A0D5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:169 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1A0D4.
    case 0xC1A0D6: cpu.execute_instruction<0x20>(0x004E9C, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:170 STZ TEMPORARY_TEXT_BUFFER+4
    case 0xC1A0D7: cpu.execute_instruction<0x9C>(0x009F4E, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:170 STZ TEMPORARY_TEXT_BUFFER+4
    // Overlapping static entry reached from 0xC1A0D6.
    case 0xC1A0D9: cpu.execute_instruction<0x9F>(0xBB1AA4, 4); return true;
    // src/unknown/C1/C19F29-jp.asm:172 LDY @LOCAL04
    case 0xC1A0DA: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:173 TYX
    case 0xC1A0DC: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:174 REP #PROC_FLAGS::ACCUM8
    case 0xC1A0DD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:175 LDA #4
    case 0xC1A0DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:175 LDA #4
    // Overlapping static entry reached from 0xC1A0DF.
    case 0xC1A0E1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:176 JSR UNKNOWN_C438A5
    case 0xC1A0E2: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:177 LDA #CHAR::COLON
    case 0xC1A0E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005B, 2); else cpu.execute_instruction<0xA9>(0x00005B, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:177 LDA #CHAR::COLON
    // Overlapping static entry reached from 0xC1A0E5.
    case 0xC1A0E7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:178 JSR PRINT_LETTER
    case 0xC1A0E8: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:179 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A0EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19F29-jp.asm:179 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A0EB.
    case 0xC1A0ED: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19F29-jp.asm:179 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A0EE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19F29-jp.asm:179 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A0F0: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19F29-jp.asm:179 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A0F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19F29-jp.asm:179 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A0F3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19F29-jp.asm:179 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A0F4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19F29-jp.asm:179 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A0F6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:180 REP #PROC_FLAGS::ACCUM8
    case 0xC1A0F8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19F29-jp.asm:181 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A0FA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19F29-jp.asm:181 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A0FC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19F29-jp.asm:181 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A0FE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19F29-jp.asm:181 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A100: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:182 LDA #10
    case 0xC1A102: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:182 LDA #10
    // Overlapping static entry reached from 0xC1A102.
    case 0xC1A104: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:183 JSR PRINT_STRING
    case 0xC1A105: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:184 LDY @LOCAL04
    case 0xC1A108: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:185 INY
    case 0xC1A10A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:186 STY @LOCAL04
    case 0xC1A10B: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:188 STY @VIRTUAL02
    case 0xC1A10D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:189 LDA #PLAYER_CHAR_COUNT
    case 0xC1A10F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:189 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC1A10F.
    case 0xC1A111: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C19F29-jp.asm:190 CLC
    case 0xC1A112: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29-jp.asm:191 SBC @VIRTUAL02
    case 0xC1A113: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C1/C19F29-jp.asm:192 JUMPGTS @UNKNOWN1
    case 0xC1A115: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C1/C19F29-jp.asm:192 JUMPGTS @UNKNOWN1
    case 0xC1A117: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C1/C19F29-jp.asm:192 JUMPGTS @UNKNOWN1
    case 0xC1A119: cpu.execute_instruction<0x4C>(0x009F8D, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C1/C19F29-jp.asm:192 JUMPGTS @UNKNOWN1
    case 0xC1A11C: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C1/C19F29-jp.asm:192 JUMPGTS @UNKNOWN1
    case 0xC1A11E: cpu.execute_instruction<0x4C>(0x009F8D, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:193 JSR PRINT_MENU_ITEMS
    case 0xC1A121: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // src/unknown/C1/C19F29-jp.asm:194 JSR CLEAR_INSTANT_PRINTING
    case 0xC1A124: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19F29-jp.asm:195 END_C_FUNCTION
    case 0xC1A127: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19F29-jp.asm:195 END_C_FUNCTION
    case 0xC1A128: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1A1D8-jp.asm (unresolved).
bool execute_unresolved_c1_c1a1d8_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1A129: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:10 END_STACK_VARS
    case 0xC1A12B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:10 END_STACK_VARS
    case 0xC1A12C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:10 END_STACK_VARS
    case 0xC1A12D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:10 END_STACK_VARS
    case 0xC1A12E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1A12E.
    case 0xC1A130: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:10 END_STACK_VARS
    case 0xC1A131: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:10 END_STACK_VARS
    case 0xC1A132: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:11 TAX
    case 0xC1A133: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:12 TXY
    case 0xC1A134: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:13 DEY
    case 0xC1A135: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:14 STY @LOCAL03
    case 0xC1A136: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:15 JSR SET_INSTANT_PRINTING
    case 0xC1A138: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:16 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2D
    case 0xC1A13B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002D, 2); else cpu.execute_instruction<0xA9>(0x00002D, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:16 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2D
    // Overlapping static entry reached from 0xC1A13B.
    case 0xC1A13D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:16 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2D
    case 0xC1A13E: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:17 LDA #2
    case 0xC1A141: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:17 LDA #2
    // Overlapping static entry reached from 0xC1A141.
    case 0xC1A143: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:18 JSR UNKNOWN_C10EB4
    case 0xC1A144: cpu.execute_instruction<0x20>(0x001495, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:19 LDX #0
    case 0xC1A147: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:19 LDX #0
    // Overlapping static entry reached from 0xC1A147.
    case 0xC1A149: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:20 LDA #1
    case 0xC1A14A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:20 LDA #1
    // Overlapping static entry reached from 0xC1A14A.
    case 0xC1A14C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:21 JSR UNKNOWN_C438A5
    case 0xC1A14D: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:22 LOADPTR STATUS_EQUIP_WINDOW_TEXT_8, @LOCAL00
    case 0xC1A150: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B1, 2); else cpu.execute_instruction<0xA9>(0x0039B1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:22 LOADPTR STATUS_EQUIP_WINDOW_TEXT_8, @LOCAL00
    // Overlapping static entry reached from 0xC1A150.
    case 0xC1A152: cpu.execute_instruction<0x39>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:22 LOADPTR STATUS_EQUIP_WINDOW_TEXT_8, @LOCAL00
    case 0xC1A153: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:22 LOADPTR STATUS_EQUIP_WINDOW_TEXT_8, @LOCAL00
    case 0xC1A155: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:22 LOADPTR STATUS_EQUIP_WINDOW_TEXT_8, @LOCAL00
    // Overlapping static entry reached from 0xC1A155.
    case 0xC1A157: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:22 LOADPTR STATUS_EQUIP_WINDOW_TEXT_8, @LOCAL00
    case 0xC1A158: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:23 LDA #6
    case 0xC1A15A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:23 LDA #6
    // Overlapping static entry reached from 0xC1A15A.
    case 0xC1A15C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:24 JSR PRINT_STRING
    case 0xC1A15D: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:25 LDY @LOCAL03
    case 0xC1A160: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:26 TYA
    case 0xC1A162: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:27 LDY #.SIZEOF(char_struct)
    case 0xC1A163: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:27 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A163.
    case 0xC1A165: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:28 JSL MULT168
    case 0xC1A166: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:29 TAX
    case 0xC1A16A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:30 LDA PARTY_CHARACTERS+char_struct::base_offense,X
    case 0xC1A16B: cpu.execute_instruction<0xBD>(0x009C9A, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:31 AND #$00FF
    case 0xC1A16E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC1A16E.
    case 0xC1A170: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:32 STA @LOCAL02
    case 0xC1A171: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:33 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC1A173: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:34 AND #$00FF
    case 0xC1A176: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC1A176.
    case 0xC1A178: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:35 BEQ @UNKNOWN1
    case 0xC1A179: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:36 LDA #0
    case 0xC1A17B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1A17B.
    case 0xC1A17D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:37 STA @VIRTUAL02
    case 0xC1A17E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:38 LDY @LOCAL03
    case 0xC1A180: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:39 CPY #3
    case 0xC1A182: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:39 CPY #3
    // Overlapping static entry reached from 0xC1A182.
    case 0xC1A184: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:40 BNE @UNKNOWN0
    case 0xC1A185: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:41 LDA #1
    case 0xC1A187: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:41 LDA #1
    // Overlapping static entry reached from 0xC1A187.
    case 0xC1A189: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:42 STA @VIRTUAL02
    case 0xC1A18A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:44 TYA
    case 0xC1A18C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:45 LDY #.SIZEOF(char_struct)
    case 0xC1A18D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:45 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A18D.
    case 0xC1A18F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:46 JSL MULT168
    case 0xC1A190: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:47 TAX
    case 0xC1A194: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:48 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC1A195: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:49 AND #$00FF
    case 0xC1A198: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC1A198.
    case 0xC1A19A: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:50 DEC
    case 0xC1A19B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:51 STA @VIRTUAL04
    case 0xC1A19C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:52 TXA
    case 0xC1A19E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:53 CLC
    case 0xC1A19F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:54 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC1A1A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:54 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC1A1A0.
    case 0xC1A1A2: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:55 CLC
    case 0xC1A1A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:56 ADC @VIRTUAL04
    case 0xC1A1A4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:56 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC1A1A2.
    case 0xC1A1A5: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:57 TAX
    case 0xC1A1A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:58 LDA __BSS_START__,X
    case 0xC1A1A7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:59 AND #$00FF
    case 0xC1A1AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC1A1AA.
    case 0xC1A1AC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A1AD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A1AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A1B0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A1B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A1B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A1B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:61 CLC
    case 0xC1A1B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:62 ADC @VIRTUAL02
    case 0xC1A1B6: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:63 CLC
    case 0xC1A1B8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:64 ADC #item::params + item_parameters::strength
    case 0xC1A1B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:64 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A1B9.
    case 0xC1A1BB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:65 TAX
    case 0xC1A1BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A1BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:67 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A1BF: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC1A1C3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:69 SEC
    case 0xC1A1C5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:70 AND #$00FF
    case 0xC1A1C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC1A1C6.
    case 0xC1A1C8: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:71 SBC #$0080
    case 0xC1A1C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:71 SBC #$0080
    // Overlapping static entry reached from 0xC1A1C9.
    case 0xC1A1CB: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:72 EOR #$FF80
    case 0xC1A1CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:72 EOR #$FF80
    // Overlapping static entry reached from 0xC1A1CC.
    case 0xC1A1CE: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:73 STA @VIRTUAL02
    case 0xC1A1CF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:74 LDA @LOCAL02
    case 0xC1A1D1: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:74 LDA @LOCAL02
    // Overlapping static entry reached from 0xC1A1CE.
    case 0xC1A1D2: cpu.execute_instruction<0x14>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:75 CLC
    case 0xC1A1D3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:76 ADC @VIRTUAL02
    case 0xC1A1D4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:77 STA @LOCAL02
    case 0xC1A1D6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:79 LDA @LOCAL02
    case 0xC1A1D8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:80 STA @VIRTUAL02
    case 0xC1A1DA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:81 LDA #0
    case 0xC1A1DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:81 LDA #0
    // Overlapping static entry reached from 0xC1A1DC.
    case 0xC1A1DE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:82 CLC
    case 0xC1A1DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:83 SBC @VIRTUAL02
    case 0xC1A1E0: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:84 BRANCHLTEQS @UNKNOWN4
    case 0xC1A1E2: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:84 BRANCHLTEQS @UNKNOWN4
    case 0xC1A1E4: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:84 BRANCHLTEQS @UNKNOWN4
    case 0xC1A1E6: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:84 BRANCHLTEQS @UNKNOWN4
    case 0xC1A1E8: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:85 LDA #0
    case 0xC1A1EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:85 LDA #0
    // Overlapping static entry reached from 0xC1A1EA.
    case 0xC1A1EC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:86 BRA @UNKNOWN9
    case 0xC1A1ED: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:88 LDA @LOCAL02
    case 0xC1A1EF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:89 CLC
    case 0xC1A1F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:90 SBC #$00FF
    case 0xC1A1F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000FF, 2); else cpu.execute_instruction<0xE9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:90 SBC #$00FF
    // Overlapping static entry reached from 0xC1A1F2.
    case 0xC1A1F4: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:91 BRANCHLTEQS @UNKNOWN7
    case 0xC1A1F5: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:91 BRANCHLTEQS @UNKNOWN7
    case 0xC1A1F7: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:91 BRANCHLTEQS @UNKNOWN7
    case 0xC1A1F9: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:91 BRANCHLTEQS @UNKNOWN7
    case 0xC1A1FB: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:92 LDX #$00FF
    case 0xC1A1FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:92 LDX #$00FF
    // Overlapping static entry reached from 0xC1A1FD.
    case 0xC1A1FF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:93 BRA @UNKNOWN8
    case 0xC1A200: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:95 LDA @LOCAL02
    case 0xC1A202: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:96 REP #PROC_FLAGS::ACCUM8
    case 0xC1A204: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:97 AND #$00FF
    case 0xC1A206: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC1A206.
    case 0xC1A208: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:98 TAX
    case 0xC1A209: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:100 TXA
    case 0xC1A20A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:102 STORE_INT1632S @VIRTUAL06
    case 0xC1A20B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:102 STORE_INT1632S @VIRTUAL06
    case 0xC1A20D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:102 STORE_INT1632S @VIRTUAL06
    case 0xC1A20F: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:102 STORE_INT1632S @VIRTUAL06
    case 0xC1A211: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A213: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A215: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A217: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A219: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:104 JSR PRINT_NUMBER
    case 0xC1A21B: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:105 LDX #1
    case 0xC1A21E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:105 LDX #1
    // Overlapping static entry reached from 0xC1A21E.
    case 0xC1A220: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:106 LDA #0
    case 0xC1A221: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:106 LDA #0
    // Overlapping static entry reached from 0xC1A221.
    case 0xC1A223: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:107 JSR UNKNOWN_C438A5
    case 0xC1A224: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:108 LOADPTR STATUS_EQUIP_WINDOW_TEXT_9, @LOCAL00
    case 0xC1A227: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B7, 2); else cpu.execute_instruction<0xA9>(0x0039B7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:108 LOADPTR STATUS_EQUIP_WINDOW_TEXT_9, @LOCAL00
    // Overlapping static entry reached from 0xC1A227.
    case 0xC1A229: cpu.execute_instruction<0x39>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:108 LOADPTR STATUS_EQUIP_WINDOW_TEXT_9, @LOCAL00
    case 0xC1A22A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:108 LOADPTR STATUS_EQUIP_WINDOW_TEXT_9, @LOCAL00
    case 0xC1A22C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:108 LOADPTR STATUS_EQUIP_WINDOW_TEXT_9, @LOCAL00
    // Overlapping static entry reached from 0xC1A22C.
    case 0xC1A22E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:108 LOADPTR STATUS_EQUIP_WINDOW_TEXT_9, @LOCAL00
    case 0xC1A22F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:109 LDA #7
    case 0xC1A231: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:109 LDA #7
    // Overlapping static entry reached from 0xC1A231.
    case 0xC1A233: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:110 JSR PRINT_STRING
    case 0xC1A234: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:111 LDY @LOCAL03
    case 0xC1A237: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:112 TYA
    case 0xC1A239: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:113 LDY #.SIZEOF(char_struct)
    case 0xC1A23A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:113 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A23A.
    case 0xC1A23C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:114 JSL MULT168
    case 0xC1A23D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:115 TAX
    case 0xC1A241: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:116 LDA PARTY_CHARACTERS+char_struct::base_defense,X
    case 0xC1A242: cpu.execute_instruction<0xBD>(0x009C9B, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:117 AND #$00FF
    case 0xC1A245: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC1A245.
    case 0xC1A247: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:118 STA @LOCAL02
    case 0xC1A248: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:119 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC1A24A: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:120 AND #$00FF
    case 0xC1A24D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:120 AND #$00FF
    // Overlapping static entry reached from 0xC1A24D.
    case 0xC1A24F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:121 BEQ @UNKNOWN12
    case 0xC1A250: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:122 LDA #0
    case 0xC1A252: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:122 LDA #0
    // Overlapping static entry reached from 0xC1A252.
    case 0xC1A254: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:123 STA @VIRTUAL02
    case 0xC1A255: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:124 LDY @LOCAL03
    case 0xC1A257: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:125 CPY #3
    case 0xC1A259: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:125 CPY #3
    // Overlapping static entry reached from 0xC1A259.
    case 0xC1A25B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:126 BNE @UNKNOWN11
    case 0xC1A25C: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:127 LDA #1
    case 0xC1A25E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:127 LDA #1
    // Overlapping static entry reached from 0xC1A25E.
    case 0xC1A260: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:128 STA @VIRTUAL02
    case 0xC1A261: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:130 TYA
    case 0xC1A263: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:131 LDY #.SIZEOF(char_struct)
    case 0xC1A264: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:131 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A264.
    case 0xC1A266: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:132 JSL MULT168
    case 0xC1A267: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:133 TAX
    case 0xC1A26B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:134 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC1A26C: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:135 AND #$00FF
    case 0xC1A26F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:135 AND #$00FF
    // Overlapping static entry reached from 0xC1A26F.
    case 0xC1A271: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:136 DEC
    case 0xC1A272: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:137 STA @VIRTUAL04
    case 0xC1A273: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:138 TXA
    case 0xC1A275: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:139 CLC
    case 0xC1A276: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:140 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC1A277: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:140 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC1A277.
    case 0xC1A279: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:141 CLC
    case 0xC1A27A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:142 ADC @VIRTUAL04
    case 0xC1A27B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:142 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC1A279.
    case 0xC1A27C: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:143 TAX
    case 0xC1A27D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:144 LDA __BSS_START__,X
    case 0xC1A27E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:145 AND #$00FF
    case 0xC1A281: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC1A281.
    case 0xC1A283: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:146 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A284: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:146 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A286: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:146 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A287: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:146 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A289: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:146 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A28A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:146 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A28B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:147 CLC
    case 0xC1A28C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:148 ADC @VIRTUAL02
    case 0xC1A28D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:149 CLC
    case 0xC1A28F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:150 ADC #item::params + item_parameters::strength
    case 0xC1A290: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:150 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A290.
    case 0xC1A292: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:151 TAX
    case 0xC1A293: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:152 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A294: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:153 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A296: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:154 REP #PROC_FLAGS::ACCUM8
    case 0xC1A29A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:155 SEC
    case 0xC1A29C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:156 AND #$00FF
    case 0xC1A29D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:156 AND #$00FF
    // Overlapping static entry reached from 0xC1A29D.
    case 0xC1A29F: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:157 SBC #$0080
    case 0xC1A2A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:157 SBC #$0080
    // Overlapping static entry reached from 0xC1A2A0.
    case 0xC1A2A2: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:158 EOR #$FF80
    case 0xC1A2A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:158 EOR #$FF80
    // Overlapping static entry reached from 0xC1A2A3.
    case 0xC1A2A5: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:159 STA @VIRTUAL02
    case 0xC1A2A6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:160 LDA @LOCAL02
    case 0xC1A2A8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:160 LDA @LOCAL02
    // Overlapping static entry reached from 0xC1A2A5.
    case 0xC1A2A9: cpu.execute_instruction<0x14>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:161 CLC
    case 0xC1A2AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:162 ADC @VIRTUAL02
    case 0xC1A2AB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:163 STA @LOCAL02
    case 0xC1A2AD: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:165 LDY @LOCAL03
    case 0xC1A2AF: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:166 TYA
    case 0xC1A2B1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:167 LDY #.SIZEOF(char_struct)
    case 0xC1A2B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:167 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A2B2.
    case 0xC1A2B4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:168 JSL MULT168
    case 0xC1A2B5: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:169 TAX
    case 0xC1A2B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:170 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC1A2BA: cpu.execute_instruction<0xBD>(0x009CB1, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:171 AND #$00FF
    case 0xC1A2BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC1A2BD.
    case 0xC1A2BF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:172 BEQ @UNKNOWN14
    case 0xC1A2C0: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:173 LDA #0
    case 0xC1A2C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:173 LDA #0
    // Overlapping static entry reached from 0xC1A2C2.
    case 0xC1A2C4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:174 STA @VIRTUAL02
    case 0xC1A2C5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:175 LDY @LOCAL03
    case 0xC1A2C7: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:176 CPY #3
    case 0xC1A2C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:176 CPY #3
    // Overlapping static entry reached from 0xC1A2C9.
    case 0xC1A2CB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:177 BNE @UNKNOWN13
    case 0xC1A2CC: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:178 LDA #1
    case 0xC1A2CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:178 LDA #1
    // Overlapping static entry reached from 0xC1A2CE.
    case 0xC1A2D0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:179 STA @VIRTUAL02
    case 0xC1A2D1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:181 TYA
    case 0xC1A2D3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:182 LDY #.SIZEOF(char_struct)
    case 0xC1A2D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:182 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A2D4.
    case 0xC1A2D6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:183 JSL MULT168
    case 0xC1A2D7: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:184 TAX
    case 0xC1A2DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:185 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC1A2DC: cpu.execute_instruction<0xBD>(0x009CB1, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:186 AND #$00FF
    case 0xC1A2DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:186 AND #$00FF
    // Overlapping static entry reached from 0xC1A2DF.
    case 0xC1A2E1: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:187 DEC
    case 0xC1A2E2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:188 STA @VIRTUAL04
    case 0xC1A2E3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:189 TXA
    case 0xC1A2E5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:190 CLC
    case 0xC1A2E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:191 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC1A2E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:191 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC1A2E7.
    case 0xC1A2E9: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:192 CLC
    case 0xC1A2EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:193 ADC @VIRTUAL04
    case 0xC1A2EB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:193 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC1A2E9.
    case 0xC1A2EC: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:194 TAX
    case 0xC1A2ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:195 LDA __BSS_START__,X
    case 0xC1A2EE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:196 AND #$00FF
    case 0xC1A2F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:196 AND #$00FF
    // Overlapping static entry reached from 0xC1A2F1.
    case 0xC1A2F3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:197 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A2F4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:197 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A2F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:197 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A2F7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:197 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A2F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:197 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A2FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:197 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A2FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:198 CLC
    case 0xC1A2FC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:199 ADC @VIRTUAL02
    case 0xC1A2FD: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:200 CLC
    case 0xC1A2FF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:201 ADC #item::params + item_parameters::strength
    case 0xC1A300: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:201 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A300.
    case 0xC1A302: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:202 TAX
    case 0xC1A303: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:203 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A304: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:204 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A306: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:205 REP #PROC_FLAGS::ACCUM8
    case 0xC1A30A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:206 SEC
    case 0xC1A30C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:207 AND #$00FF
    case 0xC1A30D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:207 AND #$00FF
    // Overlapping static entry reached from 0xC1A30D.
    case 0xC1A30F: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:208 SBC #$0080
    case 0xC1A310: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:208 SBC #$0080
    // Overlapping static entry reached from 0xC1A310.
    case 0xC1A312: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:209 EOR #$FF80
    case 0xC1A313: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:209 EOR #$FF80
    // Overlapping static entry reached from 0xC1A313.
    case 0xC1A315: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:210 STA @VIRTUAL02
    case 0xC1A316: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:211 LDA @LOCAL02
    case 0xC1A318: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:211 LDA @LOCAL02
    // Overlapping static entry reached from 0xC1A315.
    case 0xC1A319: cpu.execute_instruction<0x14>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:212 CLC
    case 0xC1A31A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:213 ADC @VIRTUAL02
    case 0xC1A31B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:214 STA @LOCAL02
    case 0xC1A31D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:216 LDY @LOCAL03
    case 0xC1A31F: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:217 TYA
    case 0xC1A321: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:218 LDY #.SIZEOF(char_struct)
    case 0xC1A322: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:218 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A322.
    case 0xC1A324: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:219 JSL MULT168
    case 0xC1A325: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:220 TAX
    case 0xC1A329: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:221 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC1A32A: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:222 AND #$00FF
    case 0xC1A32D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:222 AND #$00FF
    // Overlapping static entry reached from 0xC1A32D.
    case 0xC1A32F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:223 BEQ @UNKNOWN16
    case 0xC1A330: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:224 LDA #0
    case 0xC1A332: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:224 LDA #0
    // Overlapping static entry reached from 0xC1A332.
    case 0xC1A334: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:225 STA @VIRTUAL02
    case 0xC1A335: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:226 LDY @LOCAL03
    case 0xC1A337: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:227 CPY #3
    case 0xC1A339: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:227 CPY #3
    // Overlapping static entry reached from 0xC1A339.
    case 0xC1A33B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:228 BNE @UNKNOWN15
    case 0xC1A33C: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:229 LDA #1
    case 0xC1A33E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:229 LDA #1
    // Overlapping static entry reached from 0xC1A33E.
    case 0xC1A340: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:230 STA @VIRTUAL02
    case 0xC1A341: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:232 TYA
    case 0xC1A343: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:233 LDY #.SIZEOF(char_struct)
    case 0xC1A344: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:233 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A344.
    case 0xC1A346: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:234 JSL MULT168
    case 0xC1A347: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:235 TAX
    case 0xC1A34B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:236 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC1A34C: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:237 AND #$00FF
    case 0xC1A34F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:237 AND #$00FF
    // Overlapping static entry reached from 0xC1A34F.
    case 0xC1A351: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:238 DEC
    case 0xC1A352: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:239 STA @VIRTUAL04
    case 0xC1A353: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:240 TXA
    case 0xC1A355: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:241 CLC
    case 0xC1A356: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:242 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC1A357: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:242 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC1A357.
    case 0xC1A359: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:243 CLC
    case 0xC1A35A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:244 ADC @VIRTUAL04
    case 0xC1A35B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:244 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC1A359.
    case 0xC1A35C: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:245 TAX
    case 0xC1A35D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:246 LDA __BSS_START__,X
    case 0xC1A35E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:247 AND #$00FF
    case 0xC1A361: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:247 AND #$00FF
    // Overlapping static entry reached from 0xC1A361.
    case 0xC1A363: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:248 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A364: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:248 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A366: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:248 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A367: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:248 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A369: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:248 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A36A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:248 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A36B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:249 CLC
    case 0xC1A36C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:250 ADC @VIRTUAL02
    case 0xC1A36D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:251 CLC
    case 0xC1A36F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:252 ADC #item::params + item_parameters::strength
    case 0xC1A370: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:252 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A370.
    case 0xC1A372: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:253 TAX
    case 0xC1A373: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:254 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A374: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:255 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A376: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:256 REP #PROC_FLAGS::ACCUM8
    case 0xC1A37A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:257 SEC
    case 0xC1A37C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:258 AND #$00FF
    case 0xC1A37D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:258 AND #$00FF
    // Overlapping static entry reached from 0xC1A37D.
    case 0xC1A37F: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:259 SBC #$0080
    case 0xC1A380: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:259 SBC #$0080
    // Overlapping static entry reached from 0xC1A380.
    case 0xC1A382: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:260 EOR #$FF80
    case 0xC1A383: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:260 EOR #$FF80
    // Overlapping static entry reached from 0xC1A383.
    case 0xC1A385: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:261 STA @VIRTUAL02
    case 0xC1A386: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:262 LDA @LOCAL02
    case 0xC1A388: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:262 LDA @LOCAL02
    // Overlapping static entry reached from 0xC1A385.
    case 0xC1A389: cpu.execute_instruction<0x14>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:263 CLC
    case 0xC1A38A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:264 ADC @VIRTUAL02
    case 0xC1A38B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:265 STA @LOCAL02
    case 0xC1A38D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:267 LDA @LOCAL02
    case 0xC1A38F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:268 STA @VIRTUAL02
    case 0xC1A391: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:269 LDA #0
    case 0xC1A393: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:269 LDA #0
    // Overlapping static entry reached from 0xC1A393.
    case 0xC1A395: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:270 CLC
    case 0xC1A396: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:271 SBC @VIRTUAL02
    case 0xC1A397: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:272 BRANCHLTEQS @UNKNOWN19
    case 0xC1A399: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:272 BRANCHLTEQS @UNKNOWN19
    case 0xC1A39B: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:272 BRANCHLTEQS @UNKNOWN19
    case 0xC1A39D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:272 BRANCHLTEQS @UNKNOWN19
    case 0xC1A39F: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:273 LDA #0
    case 0xC1A3A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:273 LDA #0
    // Overlapping static entry reached from 0xC1A3A1.
    case 0xC1A3A3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:274 BRA @UNKNOWN24
    case 0xC1A3A4: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:276 LDA @LOCAL02
    case 0xC1A3A6: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:277 CLC
    case 0xC1A3A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:278 SBC #$00FF
    case 0xC1A3A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000FF, 2); else cpu.execute_instruction<0xE9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:278 SBC #$00FF
    // Overlapping static entry reached from 0xC1A3A9.
    case 0xC1A3AB: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:279 BRANCHLTEQS @UNKNOWN22
    case 0xC1A3AC: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:279 BRANCHLTEQS @UNKNOWN22
    case 0xC1A3AE: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:279 BRANCHLTEQS @UNKNOWN22
    case 0xC1A3B0: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:279 BRANCHLTEQS @UNKNOWN22
    case 0xC1A3B2: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:280 LDX #$00FF
    case 0xC1A3B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:280 LDX #$00FF
    // Overlapping static entry reached from 0xC1A3B4.
    case 0xC1A3B6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:281 BRA @UNKNOWN23
    case 0xC1A3B7: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:283 LDA @LOCAL02
    case 0xC1A3B9: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:284 REP #PROC_FLAGS::ACCUM8
    case 0xC1A3BB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:285 AND #$00FF
    case 0xC1A3BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:285 AND #$00FF
    // Overlapping static entry reached from 0xC1A3BD.
    case 0xC1A3BF: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:286 TAX
    case 0xC1A3C0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:288 TXA
    case 0xC1A3C1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:290 STORE_INT1632S @VIRTUAL06
    case 0xC1A3C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:290 STORE_INT1632S @VIRTUAL06
    case 0xC1A3C4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:290 STORE_INT1632S @VIRTUAL06
    case 0xC1A3C6: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:290 STORE_INT1632S @VIRTUAL06
    case 0xC1A3C8: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:291 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A3CA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:291 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A3CC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:291 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A3CE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:291 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A3D0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:292 JSR PRINT_NUMBER
    case 0xC1A3D2: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:293 LDA COMPARE_EQUIPMENT_MODE
    case 0xC1A3D5: cpu.execute_instruction<0xAD>(0x009F7F, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:294 BEQL @UNKNOWN53
    case 0xC1A3D8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:294 BEQL @UNKNOWN53
    case 0xC1A3DA: cpu.execute_instruction<0x4C>(0x00A661, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:295 LDX #0
    case 0xC1A3DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:295 LDX #0
    // Overlapping static entry reached from 0xC1A3DD.
    case 0xC1A3DF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:296 LDA #10
    case 0xC1A3E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:296 LDA #10
    // Overlapping static entry reached from 0xC1A3E0.
    case 0xC1A3E2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:297 JSR UNKNOWN_C438A5
    case 0xC1A3E3: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:298 LDA #1
    case 0xC1A3E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:298 LDA #1
    // Overlapping static entry reached from 0xC1A3E6.
    case 0xC1A3E8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:299 JSR UNKNOWN_C10FEA
    case 0xC1A3E9: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:300 LDA #$014E
    case 0xC1A3EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00014E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:300 LDA #$014E
    // Overlapping static entry reached from 0xC1A3EC.
    case 0xC1A3EE: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:301 JSR PRINT_LETTER
    case 0xC1A3EF: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:301 JSR PRINT_LETTER
    // Overlapping static entry reached from 0xC1A3EE.
    case 0xC1A3F0: cpu.execute_instruction<0xEC>(0x00A911, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:302 LDA #0
    case 0xC1A3F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:302 LDA #0
    // Overlapping static entry reached from 0xC1A3F0.
    case 0xC1A3F3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:302 LDA #0
    // Overlapping static entry reached from 0xC1A3F2.
    case 0xC1A3F4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:303 JSR UNKNOWN_C10FEA
    case 0xC1A3F5: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:304 LDY @LOCAL03
    case 0xC1A3F8: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:305 TYA
    case 0xC1A3FA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:306 LDY #.SIZEOF(char_struct)
    case 0xC1A3FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:306 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A3FB.
    case 0xC1A3FD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:307 JSL MULT168
    case 0xC1A3FE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:308 TAX
    case 0xC1A402: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:309 LDA PARTY_CHARACTERS+char_struct::base_offense,X
    case 0xC1A403: cpu.execute_instruction<0xBD>(0x009C9A, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:310 AND #$00FF
    case 0xC1A406: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:310 AND #$00FF
    // Overlapping static entry reached from 0xC1A406.
    case 0xC1A408: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:311 STA @LOCAL02
    case 0xC1A409: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:312 LDA TEMPORARY_WEAPON
    case 0xC1A40B: cpu.execute_instruction<0xAD>(0x009F7B, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:313 AND #$00FF
    case 0xC1A40E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:313 AND #$00FF
    // Overlapping static entry reached from 0xC1A40E.
    case 0xC1A410: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:314 BEQ @UNKNOWN28
    case 0xC1A411: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:315 LDX #0
    case 0xC1A413: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:315 LDX #0
    // Overlapping static entry reached from 0xC1A413.
    case 0xC1A415: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:316 STX @LOCAL01
    case 0xC1A416: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:317 LDY @LOCAL03
    case 0xC1A418: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:318 CPY #3
    case 0xC1A41A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:318 CPY #3
    // Overlapping static entry reached from 0xC1A41A.
    case 0xC1A41C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:319 BNE @UNKNOWN27
    case 0xC1A41D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:320 LDX #1
    case 0xC1A41F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:320 LDX #1
    // Overlapping static entry reached from 0xC1A41F.
    case 0xC1A421: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:321 STX @LOCAL01
    case 0xC1A422: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:323 LDA TEMPORARY_WEAPON
    case 0xC1A424: cpu.execute_instruction<0xAD>(0x009F7B, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:324 AND #$00FF
    case 0xC1A427: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:324 AND #$00FF
    // Overlapping static entry reached from 0xC1A427.
    case 0xC1A429: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:325 DEC
    case 0xC1A42A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:326 STA @VIRTUAL04
    case 0xC1A42B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:327 TYA
    case 0xC1A42D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:328 LDY #.SIZEOF(char_struct)
    case 0xC1A42E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:328 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A42E.
    case 0xC1A430: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:329 JSL MULT168
    case 0xC1A431: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:330 CLC
    case 0xC1A435: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:331 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1A436: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:331 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1A436.
    case 0xC1A438: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:332 CLC
    case 0xC1A439: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:333 ADC @VIRTUAL04
    case 0xC1A43A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:333 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC1A438.
    case 0xC1A43B: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:334 TAX
    case 0xC1A43C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:335 LDA __BSS_START__,X
    case 0xC1A43D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:336 AND #$00FF
    case 0xC1A440: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:336 AND #$00FF
    // Overlapping static entry reached from 0xC1A440.
    case 0xC1A442: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:337 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A443: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:337 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A445: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:337 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A446: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:337 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A448: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:337 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A449: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:337 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A44A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:338 LDX @LOCAL01
    case 0xC1A44B: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:339 STX @VIRTUAL04
    case 0xC1A44D: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:340 CLC
    case 0xC1A44F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:341 ADC @VIRTUAL04
    case 0xC1A450: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:342 CLC
    case 0xC1A452: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:343 ADC #item::params + item_parameters::strength
    case 0xC1A453: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:343 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A453.
    case 0xC1A455: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:344 TAX
    case 0xC1A456: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:345 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A457: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:346 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A459: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:347 REP #PROC_FLAGS::ACCUM8
    case 0xC1A45D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:348 SEC
    case 0xC1A45F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:349 AND #$00FF
    case 0xC1A460: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:349 AND #$00FF
    // Overlapping static entry reached from 0xC1A460.
    case 0xC1A462: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:350 SBC #$0080
    case 0xC1A463: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:350 SBC #$0080
    // Overlapping static entry reached from 0xC1A463.
    case 0xC1A465: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:351 EOR #$FF80
    case 0xC1A466: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:351 EOR #$FF80
    // Overlapping static entry reached from 0xC1A466.
    case 0xC1A468: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:352 STA @VIRTUAL02
    case 0xC1A469: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:353 LDA @LOCAL02
    case 0xC1A46B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:353 LDA @LOCAL02
    // Overlapping static entry reached from 0xC1A468.
    case 0xC1A46C: cpu.execute_instruction<0x14>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:354 CLC
    case 0xC1A46D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:355 ADC @VIRTUAL02
    case 0xC1A46E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:356 STA @LOCAL02
    case 0xC1A470: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:358 LDA @LOCAL02
    case 0xC1A472: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:359 STA @VIRTUAL02
    case 0xC1A474: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:360 LDA #0
    case 0xC1A476: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:360 LDA #0
    // Overlapping static entry reached from 0xC1A476.
    case 0xC1A478: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:361 CLC
    case 0xC1A479: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:362 SBC @VIRTUAL02
    case 0xC1A47A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:363 BRANCHLTEQS @UNKNOWN31
    case 0xC1A47C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:363 BRANCHLTEQS @UNKNOWN31
    case 0xC1A47E: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:363 BRANCHLTEQS @UNKNOWN31
    case 0xC1A480: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:363 BRANCHLTEQS @UNKNOWN31
    case 0xC1A482: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:364 LDA #0
    case 0xC1A484: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:364 LDA #0
    // Overlapping static entry reached from 0xC1A484.
    case 0xC1A486: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:365 BRA @UNKNOWN36
    case 0xC1A487: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:367 LDA @LOCAL02
    case 0xC1A489: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:368 CLC
    case 0xC1A48B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:369 SBC #$00FF
    case 0xC1A48C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000FF, 2); else cpu.execute_instruction<0xE9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:369 SBC #$00FF
    // Overlapping static entry reached from 0xC1A48C.
    case 0xC1A48E: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:370 BRANCHLTEQS @UNKNOWN34
    case 0xC1A48F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:370 BRANCHLTEQS @UNKNOWN34
    case 0xC1A491: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:370 BRANCHLTEQS @UNKNOWN34
    case 0xC1A493: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:370 BRANCHLTEQS @UNKNOWN34
    case 0xC1A495: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:371 LDX #$00FF
    case 0xC1A497: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:371 LDX #$00FF
    // Overlapping static entry reached from 0xC1A497.
    case 0xC1A499: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:372 BRA @UNKNOWN35
    case 0xC1A49A: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:374 LDA @LOCAL02
    case 0xC1A49C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:375 REP #PROC_FLAGS::ACCUM8
    case 0xC1A49E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:376 AND #$00FF
    case 0xC1A4A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:376 AND #$00FF
    // Overlapping static entry reached from 0xC1A4A0.
    case 0xC1A4A2: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:377 TAX
    case 0xC1A4A3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:379 TXA
    case 0xC1A4A4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:381 STORE_INT1632S @VIRTUAL06
    case 0xC1A4A5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:381 STORE_INT1632S @VIRTUAL06
    case 0xC1A4A7: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:381 STORE_INT1632S @VIRTUAL06
    case 0xC1A4A9: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:381 STORE_INT1632S @VIRTUAL06
    case 0xC1A4AB: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:382 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A4AD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:382 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A4AF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:382 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A4B1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:382 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A4B3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:383 JSR PRINT_NUMBER
    case 0xC1A4B5: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:384 LDX #1
    case 0xC1A4B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:384 LDX #1
    // Overlapping static entry reached from 0xC1A4B8.
    case 0xC1A4BA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:385 LDA #10
    case 0xC1A4BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:385 LDA #10
    // Overlapping static entry reached from 0xC1A4BB.
    case 0xC1A4BD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:386 JSR UNKNOWN_C438A5
    case 0xC1A4BE: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:387 LDA #1
    case 0xC1A4C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:387 LDA #1
    // Overlapping static entry reached from 0xC1A4C1.
    case 0xC1A4C3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:388 JSR UNKNOWN_C10FEA
    case 0xC1A4C4: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:389 LDA #$014E
    case 0xC1A4C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00014E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:389 LDA #$014E
    // Overlapping static entry reached from 0xC1A4C7.
    case 0xC1A4C9: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:390 JSR PRINT_LETTER
    case 0xC1A4CA: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:390 JSR PRINT_LETTER
    // Overlapping static entry reached from 0xC1A4C9.
    case 0xC1A4CB: cpu.execute_instruction<0xEC>(0x00A911, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:391 LDA #0
    case 0xC1A4CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:391 LDA #0
    // Overlapping static entry reached from 0xC1A4CB.
    case 0xC1A4CE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:391 LDA #0
    // Overlapping static entry reached from 0xC1A4CD.
    case 0xC1A4CF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:392 JSR UNKNOWN_C10FEA
    case 0xC1A4D0: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:393 LDY @LOCAL03
    case 0xC1A4D3: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:394 TYA
    case 0xC1A4D5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:395 LDY #.SIZEOF(char_struct)
    case 0xC1A4D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:395 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A4D6.
    case 0xC1A4D8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:396 JSL MULT168
    case 0xC1A4D9: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:397 TAX
    case 0xC1A4DD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:398 LDA PARTY_CHARACTERS+char_struct::base_defense,X
    case 0xC1A4DE: cpu.execute_instruction<0xBD>(0x009C9B, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:399 AND #$00FF
    case 0xC1A4E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:399 AND #$00FF
    // Overlapping static entry reached from 0xC1A4E1.
    case 0xC1A4E3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:400 STA @LOCAL02
    case 0xC1A4E4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:401 LDA TEMPORARY_BODY_GEAR
    case 0xC1A4E6: cpu.execute_instruction<0xAD>(0x009F7C, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:402 AND #$00FF
    case 0xC1A4E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:402 AND #$00FF
    // Overlapping static entry reached from 0xC1A4E9.
    case 0xC1A4EB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:403 BEQ @UNKNOWN39
    case 0xC1A4EC: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:404 LDX #0
    case 0xC1A4EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:404 LDX #0
    // Overlapping static entry reached from 0xC1A4EE.
    case 0xC1A4F0: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:405 STX @LOCAL01
    case 0xC1A4F1: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:406 LDY @LOCAL03
    case 0xC1A4F3: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:407 CPY #3
    case 0xC1A4F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:407 CPY #3
    // Overlapping static entry reached from 0xC1A4F5.
    case 0xC1A4F7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:408 BNE @UNKNOWN38
    case 0xC1A4F8: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:409 LDX #1
    case 0xC1A4FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:409 LDX #1
    // Overlapping static entry reached from 0xC1A4FA.
    case 0xC1A4FC: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:410 STX @LOCAL01
    case 0xC1A4FD: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:412 LDA TEMPORARY_BODY_GEAR
    case 0xC1A4FF: cpu.execute_instruction<0xAD>(0x009F7C, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:413 AND #$00FF
    case 0xC1A502: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC1A502.
    case 0xC1A504: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:414 DEC
    case 0xC1A505: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:415 STA @VIRTUAL04
    case 0xC1A506: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:416 TYA
    case 0xC1A508: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:417 LDY #.SIZEOF(char_struct)
    case 0xC1A509: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:417 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A509.
    case 0xC1A50B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:418 JSL MULT168
    case 0xC1A50C: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:419 CLC
    case 0xC1A510: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:420 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1A511: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:420 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1A511.
    case 0xC1A513: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:421 CLC
    case 0xC1A514: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:422 ADC @VIRTUAL04
    case 0xC1A515: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:422 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC1A513.
    case 0xC1A516: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:423 TAX
    case 0xC1A517: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:424 LDA __BSS_START__,X
    case 0xC1A518: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:425 AND #$00FF
    case 0xC1A51B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:425 AND #$00FF
    // Overlapping static entry reached from 0xC1A51B.
    case 0xC1A51D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:426 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A51E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:426 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A520: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:426 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A521: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:426 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A523: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:426 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A524: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:426 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A525: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:427 LDX @LOCAL01
    case 0xC1A526: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:428 STX @VIRTUAL04
    case 0xC1A528: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:429 CLC
    case 0xC1A52A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:430 ADC @VIRTUAL04
    case 0xC1A52B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:431 CLC
    case 0xC1A52D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:432 ADC #item::params + item_parameters::strength
    case 0xC1A52E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:432 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A52E.
    case 0xC1A530: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:433 TAX
    case 0xC1A531: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:434 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A532: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:435 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A534: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:436 REP #PROC_FLAGS::ACCUM8
    case 0xC1A538: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:437 SEC
    case 0xC1A53A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:438 AND #$00FF
    case 0xC1A53B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:438 AND #$00FF
    // Overlapping static entry reached from 0xC1A53B.
    case 0xC1A53D: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:439 SBC #$0080
    case 0xC1A53E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:439 SBC #$0080
    // Overlapping static entry reached from 0xC1A53E.
    case 0xC1A540: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:440 EOR #$FF80
    case 0xC1A541: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:440 EOR #$FF80
    // Overlapping static entry reached from 0xC1A541.
    case 0xC1A543: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:441 STA @VIRTUAL02
    case 0xC1A544: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:442 LDA @LOCAL02
    case 0xC1A546: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:442 LDA @LOCAL02
    // Overlapping static entry reached from 0xC1A543.
    case 0xC1A547: cpu.execute_instruction<0x14>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:443 CLC
    case 0xC1A548: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:444 ADC @VIRTUAL02
    case 0xC1A549: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:445 STA @LOCAL02
    case 0xC1A54B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:447 LDA TEMPORARY_ARMS_GEAR
    case 0xC1A54D: cpu.execute_instruction<0xAD>(0x009F7D, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:448 AND #$00FF
    case 0xC1A550: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:448 AND #$00FF
    // Overlapping static entry reached from 0xC1A550.
    case 0xC1A552: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:449 BEQ @UNKNOWN41
    case 0xC1A553: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:450 LDX #0
    case 0xC1A555: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:450 LDX #0
    // Overlapping static entry reached from 0xC1A555.
    case 0xC1A557: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:451 STX @LOCAL01
    case 0xC1A558: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:452 LDY @LOCAL03
    case 0xC1A55A: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:453 CPY #3
    case 0xC1A55C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:453 CPY #3
    // Overlapping static entry reached from 0xC1A55C.
    case 0xC1A55E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:454 BNE @UNKNOWN40
    case 0xC1A55F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:455 LDX #1
    case 0xC1A561: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:455 LDX #1
    // Overlapping static entry reached from 0xC1A561.
    case 0xC1A563: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:456 STX @LOCAL01
    case 0xC1A564: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:458 LDA TEMPORARY_ARMS_GEAR
    case 0xC1A566: cpu.execute_instruction<0xAD>(0x009F7D, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:459 AND #$00FF
    case 0xC1A569: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:459 AND #$00FF
    // Overlapping static entry reached from 0xC1A569.
    case 0xC1A56B: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:460 DEC
    case 0xC1A56C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:461 STA @VIRTUAL04
    case 0xC1A56D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:462 TYA
    case 0xC1A56F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:463 LDY #.SIZEOF(char_struct)
    case 0xC1A570: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:463 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A570.
    case 0xC1A572: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:464 JSL MULT168
    case 0xC1A573: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:465 CLC
    case 0xC1A577: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:466 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1A578: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:466 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1A578.
    case 0xC1A57A: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:467 CLC
    case 0xC1A57B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:468 ADC @VIRTUAL04
    case 0xC1A57C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:468 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC1A57A.
    case 0xC1A57D: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:469 TAX
    case 0xC1A57E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:470 LDA __BSS_START__,X
    case 0xC1A57F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:471 AND #$00FF
    case 0xC1A582: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:471 AND #$00FF
    // Overlapping static entry reached from 0xC1A582.
    case 0xC1A584: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:472 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A585: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:472 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A587: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:472 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A588: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:472 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A58A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:472 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A58B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:472 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A58C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:473 LDX @LOCAL01
    case 0xC1A58D: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:474 STX @VIRTUAL04
    case 0xC1A58F: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:475 CLC
    case 0xC1A591: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:476 ADC @VIRTUAL04
    case 0xC1A592: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:477 CLC
    case 0xC1A594: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:478 ADC #item::params + item_parameters::strength
    case 0xC1A595: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:478 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A595.
    case 0xC1A597: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:479 TAX
    case 0xC1A598: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:480 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A599: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:481 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A59B: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:482 REP #PROC_FLAGS::ACCUM8
    case 0xC1A59F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:483 SEC
    case 0xC1A5A1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:484 AND #$00FF
    case 0xC1A5A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:484 AND #$00FF
    // Overlapping static entry reached from 0xC1A5A2.
    case 0xC1A5A4: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:485 SBC #$0080
    case 0xC1A5A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:485 SBC #$0080
    // Overlapping static entry reached from 0xC1A5A5.
    case 0xC1A5A7: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:486 EOR #$FF80
    case 0xC1A5A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:486 EOR #$FF80
    // Overlapping static entry reached from 0xC1A5A8.
    case 0xC1A5AA: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:487 STA @VIRTUAL02
    case 0xC1A5AB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:488 LDA @LOCAL02
    case 0xC1A5AD: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:488 LDA @LOCAL02
    // Overlapping static entry reached from 0xC1A5AA.
    case 0xC1A5AE: cpu.execute_instruction<0x14>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:489 CLC
    case 0xC1A5AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:490 ADC @VIRTUAL02
    case 0xC1A5B0: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:491 STA @LOCAL02
    case 0xC1A5B2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:493 LDA TEMPORARY_OTHER_GEAR
    case 0xC1A5B4: cpu.execute_instruction<0xAD>(0x009F7E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:494 AND #$00FF
    case 0xC1A5B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:494 AND #$00FF
    // Overlapping static entry reached from 0xC1A5B7.
    case 0xC1A5B9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:495 BEQ @UNKNOWN43
    case 0xC1A5BA: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:496 LDX #0
    case 0xC1A5BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:496 LDX #0
    // Overlapping static entry reached from 0xC1A5BC.
    case 0xC1A5BE: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:497 STX @LOCAL01
    case 0xC1A5BF: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:498 LDY @LOCAL03
    case 0xC1A5C1: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:499 CPY #3
    case 0xC1A5C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:499 CPY #3
    // Overlapping static entry reached from 0xC1A5C3.
    case 0xC1A5C5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:500 BNE @UNKNOWN42
    case 0xC1A5C6: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:501 LDX #1
    case 0xC1A5C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:501 LDX #1
    // Overlapping static entry reached from 0xC1A5C8.
    case 0xC1A5CA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:502 STX @LOCAL01
    case 0xC1A5CB: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:504 LDA TEMPORARY_OTHER_GEAR
    case 0xC1A5CD: cpu.execute_instruction<0xAD>(0x009F7E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:505 AND #$00FF
    case 0xC1A5D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:505 AND #$00FF
    // Overlapping static entry reached from 0xC1A5D0.
    case 0xC1A5D2: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:506 DEC
    case 0xC1A5D3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:507 STA @VIRTUAL04
    case 0xC1A5D4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:508 TYA
    case 0xC1A5D6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:509 LDY #.SIZEOF(char_struct)
    case 0xC1A5D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:509 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A5D7.
    case 0xC1A5D9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:510 JSL MULT168
    case 0xC1A5DA: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:511 CLC
    case 0xC1A5DE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:512 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1A5DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:512 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1A5DF.
    case 0xC1A5E1: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:513 CLC
    case 0xC1A5E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:514 ADC @VIRTUAL04
    case 0xC1A5E3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:514 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC1A5E1.
    case 0xC1A5E4: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:515 TAX
    case 0xC1A5E5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:516 LDA __BSS_START__,X
    case 0xC1A5E6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:517 AND #$00FF
    case 0xC1A5E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:517 AND #$00FF
    // Overlapping static entry reached from 0xC1A5E9.
    case 0xC1A5EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:518 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A5EC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:518 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A5EE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:518 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A5EF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:518 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A5F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:518 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A5F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:518 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A5F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:519 LDX @LOCAL01
    case 0xC1A5F4: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:520 STX @VIRTUAL04
    case 0xC1A5F6: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:521 CLC
    case 0xC1A5F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:522 ADC @VIRTUAL04
    case 0xC1A5F9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:523 CLC
    case 0xC1A5FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:524 ADC #item::params + item_parameters::strength
    case 0xC1A5FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:524 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A5FC.
    case 0xC1A5FE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:525 TAX
    case 0xC1A5FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:526 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A600: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:527 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A602: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:528 REP #PROC_FLAGS::ACCUM8
    case 0xC1A606: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:529 SEC
    case 0xC1A608: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:530 AND #$00FF
    case 0xC1A609: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:530 AND #$00FF
    // Overlapping static entry reached from 0xC1A609.
    case 0xC1A60B: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:531 SBC #$0080
    case 0xC1A60C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:531 SBC #$0080
    // Overlapping static entry reached from 0xC1A60C.
    case 0xC1A60E: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:532 EOR #$FF80
    case 0xC1A60F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:532 EOR #$FF80
    // Overlapping static entry reached from 0xC1A60F.
    case 0xC1A611: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/unknown/C1/C1A1D8-jp.asm:533 STA @VIRTUAL02
    case 0xC1A612: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:534 LDA @LOCAL02
    case 0xC1A614: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:534 LDA @LOCAL02
    // Overlapping static entry reached from 0xC1A611.
    case 0xC1A615: cpu.execute_instruction<0x14>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:535 CLC
    case 0xC1A616: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:536 ADC @VIRTUAL02
    case 0xC1A617: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:537 STA @LOCAL02
    case 0xC1A619: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:539 LDA @LOCAL02
    case 0xC1A61B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:540 STA @VIRTUAL02
    case 0xC1A61D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:541 LDA #0
    case 0xC1A61F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:541 LDA #0
    // Overlapping static entry reached from 0xC1A61F.
    case 0xC1A621: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:542 CLC
    case 0xC1A622: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:543 SBC @VIRTUAL02
    case 0xC1A623: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:544 BRANCHLTEQS @UNKNOWN46
    case 0xC1A625: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:544 BRANCHLTEQS @UNKNOWN46
    case 0xC1A627: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:544 BRANCHLTEQS @UNKNOWN46
    case 0xC1A629: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:544 BRANCHLTEQS @UNKNOWN46
    case 0xC1A62B: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:545 LDA #0
    case 0xC1A62D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:545 LDA #0
    // Overlapping static entry reached from 0xC1A62D.
    case 0xC1A62F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:546 BRA @UNKNOWN51
    case 0xC1A630: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:548 LDA @LOCAL02
    case 0xC1A632: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:549 CLC
    case 0xC1A634: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:550 SBC #$00FF
    case 0xC1A635: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000FF, 2); else cpu.execute_instruction<0xE9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:550 SBC #$00FF
    // Overlapping static entry reached from 0xC1A635.
    case 0xC1A637: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:551 BRANCHLTEQS @UNKNOWN49
    case 0xC1A638: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:551 BRANCHLTEQS @UNKNOWN49
    case 0xC1A63A: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:551 BRANCHLTEQS @UNKNOWN49
    case 0xC1A63C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:551 BRANCHLTEQS @UNKNOWN49
    case 0xC1A63E: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:552 LDX #$00FF
    case 0xC1A640: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:552 LDX #$00FF
    // Overlapping static entry reached from 0xC1A640.
    case 0xC1A642: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:553 BRA @UNKNOWN50
    case 0xC1A643: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:555 LDA @LOCAL02
    case 0xC1A645: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:556 REP #PROC_FLAGS::ACCUM8
    case 0xC1A647: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:557 AND #$00FF
    case 0xC1A649: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:557 AND #$00FF
    // Overlapping static entry reached from 0xC1A649.
    case 0xC1A64B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:558 TAX
    case 0xC1A64C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8-jp.asm:560 TXA
    case 0xC1A64D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:562 STORE_INT1632S @VIRTUAL06
    case 0xC1A64E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:562 STORE_INT1632S @VIRTUAL06
    case 0xC1A650: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:562 STORE_INT1632S @VIRTUAL06
    case 0xC1A652: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:562 STORE_INT1632S @VIRTUAL06
    case 0xC1A654: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:563 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A656: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:563 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A658: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:563 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A65A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:563 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A65C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A1D8-jp.asm:564 JSR PRINT_NUMBER
    case 0xC1A65E: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1A1D8-jp.asm:566 JSR CLEAR_INSTANT_PRINTING
    case 0xC1A661: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:567 END_C_FUNCTION
    case 0xC1A664: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1A1D8-jp.asm:567 END_C_FUNCTION
    case 0xC1A665: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1A778.asm (unresolved).
bool execute_unresolved_c1_c1a778_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1A778.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1A666: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    case 0xC1A668: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    case 0xC1A669: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    case 0xC1A66A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    case 0xC1A66B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1A66B.
    case 0xC1A66D: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    case 0xC1A66E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    case 0xC1A66F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1A778.asm:8 TAX
    case 0xC1A670: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A778.asm:9 STX @LOCAL00
    case 0xC1A671: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1A778.asm:10 STZ COMPARE_EQUIPMENT_MODE
    case 0xC1A673: cpu.execute_instruction<0x9C>(0x009F7F, 3); return true;
    // src/unknown/C1/C1A778.asm:11 TXA
    case 0xC1A676: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1A778.asm:12 JSR UNKNOWN_C19F29
    case 0xC1A677: cpu.execute_instruction<0x20>(0x009F30, 3); return true;
    // src/unknown/C1/C1A778.asm:13 LDX @LOCAL00
    case 0xC1A67A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1A778.asm:14 TXA
    case 0xC1A67C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1A778.asm:15 JSL UNKNOWN_C1A1D8
    case 0xC1A67D: cpu.execute_instruction<0x22>(0xC1A129, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1A778.asm:16 END_C_FUNCTION
    case 0xC1A681: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1A778.asm:16 END_C_FUNCTION
    case 0xC1A682: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1A795-jp.asm (unresolved).
bool execute_unresolved_c1_c1a795_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1A795-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1A683: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1A795-jp.asm:14 END_STACK_VARS
    case 0xC1A685: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1A795-jp.asm:14 END_STACK_VARS
    case 0xC1A686: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1A795-jp.asm:14 END_STACK_VARS
    case 0xC1A687: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1A795-jp.asm:14 END_STACK_VARS
    case 0xC1A688: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1A795-jp.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC1A688.
    case 0xC1A68A: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1A795-jp.asm:14 END_STACK_VARS
    case 0xC1A68B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1A795-jp.asm:14 END_STACK_VARS
    case 0xC1A68C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:15 TAX
    case 0xC1A68D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:16 DEC
    case 0xC1A68E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:17 STA @LOCAL07
    case 0xC1A68F: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:18 LDA #1
    case 0xC1A691: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:18 LDA #1
    // Overlapping static entry reached from 0xC1A691.
    case 0xC1A693: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:19 STA @LOCAL06
    case 0xC1A694: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:21 LDA #4
    case 0xC1A696: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:21 LDA #4
    // Overlapping static entry reached from 0xC1A696.
    case 0xC1A698: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:22 JSR UNKNOWN_C193E7
    case 0xC1A699: cpu.execute_instruction<0x20>(0x00949C, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:23 LDA #6
    case 0xC1A69C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:23 LDA #6
    // Overlapping static entry reached from 0xC1A69C.
    case 0xC1A69E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:24 JSR SET_WINDOW_FOCUS
    case 0xC1A69F: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:25 LDA @LOCAL06
    case 0xC1A6A2: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:26 DEC
    case 0xC1A6A4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:27 JSR UNKNOWN_C11887
    case 0xC1A6A5: cpu.execute_instruction<0x20>(0x002022, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:28 LDA #1
    case 0xC1A6A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:28 LDA #1
    // Overlapping static entry reached from 0xC1A6A8.
    case 0xC1A6AA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:29 JSR SELECTION_MENU
    case 0xC1A6AB: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:30 STA @LOCAL06
    case 0xC1A6AE: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:31 JSR UNKNOWN_C19437
    case 0xC1A6B0: cpu.execute_instruction<0x20>(0x0094E5, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:32 LDA @LOCAL06
    case 0xC1A6B3: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1A795-jp.asm:33 BEQL @UNKNOWN23
    case 0xC1A6B5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:33 BEQL @UNKNOWN23
    case 0xC1A6B7: cpu.execute_instruction<0x4C>(0x00A8FD, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1A795-jp.asm:34 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    case 0xC1A6BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1A795-jp.asm:34 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    // Overlapping static entry reached from 0xC1A6BA.
    case 0xC1A6BC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1A795-jp.asm:34 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    case 0xC1A6BD: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:35 LOADPTR STATUS_EQUIP_WINDOW_TEXT_11, @VIRTUAL06
    case 0xC1A6C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BE, 2); else cpu.execute_instruction<0xA9>(0x0039BE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:35 LOADPTR STATUS_EQUIP_WINDOW_TEXT_11, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A6C0.
    case 0xC1A6C2: cpu.execute_instruction<0x39>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795-jp.asm:35 LOADPTR STATUS_EQUIP_WINDOW_TEXT_11, @VIRTUAL06
    case 0xC1A6C3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:35 LOADPTR STATUS_EQUIP_WINDOW_TEXT_11, @VIRTUAL06
    case 0xC1A6C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:35 LOADPTR STATUS_EQUIP_WINDOW_TEXT_11, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A6C5.
    case 0xC1A6C7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795-jp.asm:35 LOADPTR STATUS_EQUIP_WINDOW_TEXT_11, @VIRTUAL06
    case 0xC1A6C8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:36 LDA @LOCAL06
    case 0xC1A6CA: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:37 DEC
    case 0xC1A6CC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:38 ASL
    case 0xC1A6CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:39 ASL
    case 0xC1A6CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:40 CLC
    case 0xC1A6CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:41 ADC @VIRTUAL06
    case 0xC1A6D0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:42 STA @VIRTUAL06
    case 0xC1A6D2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:43 STA @LOCAL00
    case 0xC1A6D4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:44 LDA @VIRTUAL06+2
    case 0xC1A6D6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:45 STA @LOCAL00+2
    case 0xC1A6D8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:46 LDX #4
    case 0xC1A6DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:46 LDX #4
    // Overlapping static entry reached from 0xC1A6DA.
    case 0xC1A6DC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:47 LDA #7
    case 0xC1A6DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:47 LDA #7
    // Overlapping static entry reached from 0xC1A6DD.
    case 0xC1A6DF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:48 JSL SET_WINDOW_TITLE
    case 0xC1A6E0: cpu.execute_instruction<0x22>(0xC2030C, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:49 LDA #0
    case 0xC1A6E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:49 LDA #0
    // Overlapping static entry reached from 0xC1A6E4.
    case 0xC1A6E6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:50 STA @VIRTUAL04
    case 0xC1A6E7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:51 STA @LOCAL05
    case 0xC1A6E9: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:52 LDA #.LOWORD(-1)
    case 0xC1A6EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:52 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1A6EB.
    case 0xC1A6ED: cpu.execute_instruction<0xFF>(0xA91A85, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:53 STA @LOCAL04
    case 0xC1A6EE: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:54 LDA #0
    case 0xC1A6F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:54 LDA #0
    // Overlapping static entry reached from 0xC1A6ED.
    case 0xC1A6F1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:54 LDA #0
    // Overlapping static entry reached from 0xC1A6F0.
    case 0xC1A6F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:55 STA @VIRTUAL02
    case 0xC1A6F3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:56 JMP @UNKNOWN10
    case 0xC1A6F5: cpu.execute_instruction<0x4C>(0x00A7EE, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:58 LDA @LOCAL07
    case 0xC1A6F8: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:59 LDY #.SIZEOF(char_struct)
    case 0xC1A6FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:59 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A6FA.
    case 0xC1A6FC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:60 JSL MULT168
    case 0xC1A6FD: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:61 CLC
    case 0xC1A701: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:62 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1A702: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:62 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1A702.
    case 0xC1A704: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:63 CLC
    case 0xC1A705: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:64 ADC @VIRTUAL02
    case 0xC1A706: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:64 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1A704.
    case 0xC1A707: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:65 TAX
    case 0xC1A708: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:66 LDA __BSS_START__,X
    case 0xC1A709: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:67 AND #$00FF
    case 0xC1A70C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC1A70C.
    case 0xC1A70E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:68 STA @LOCAL03
    case 0xC1A70F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1A795-jp.asm:69 BEQL @UNKNOWN9
    case 0xC1A711: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:69 BEQL @UNKNOWN9
    case 0xC1A713: cpu.execute_instruction<0x4C>(0x00A7EC, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:70 LDA @LOCAL03
    case 0xC1A716: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:71 JSR GET_ITEM_TYPE
    case 0xC1A718: cpu.execute_instruction<0x20>(0x009EE3, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:72 CMP #2
    case 0xC1A71B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:72 CMP #2
    // Overlapping static entry reached from 0xC1A71B.
    case 0xC1A71D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1A795-jp.asm:73 BNEL @UNKNOWN9
    case 0xC1A71E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:73 BNEL @UNKNOWN9
    case 0xC1A720: cpu.execute_instruction<0x4C>(0x00A7EC, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:74 LDA @LOCAL03
    case 0xC1A723: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:75 JSL GET_ITEM_SUBTYPE
    case 0xC1A725: cpu.execute_instruction<0x22>(0xC22388, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:76 CMP @LOCAL06
    case 0xC1A729: cpu.execute_instruction<0xC5>(0x00001E, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1A795-jp.asm:77 BNEL @UNKNOWN9
    case 0xC1A72B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:77 BNEL @UNKNOWN9
    case 0xC1A72D: cpu.execute_instruction<0x4C>(0x00A7EC, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:78 LDY @LOCAL07
    case 0xC1A730: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:79 INY
    case 0xC1A732: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:80 STY @LOCAL02
    case 0xC1A733: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:81 LDX @LOCAL03
    case 0xC1A735: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:82 TYA
    case 0xC1A737: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:83 JSL UNKNOWN_C3EE14
    case 0xC1A738: cpu.execute_instruction<0x22>(0xC3E9DA, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:84 CMP #0
    case 0xC1A73C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:84 CMP #0
    // Overlapping static entry reached from 0xC1A73C.
    case 0xC1A73E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1A795-jp.asm:85 BEQL @UNKNOWN9
    case 0xC1A73F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:85 BEQL @UNKNOWN9
    case 0xC1A741: cpu.execute_instruction<0x4C>(0x00A7EC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:86 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A744: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:86 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A744.
    case 0xC1A746: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795-jp.asm:86 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A747: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795-jp.asm:86 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A746.
    case 0xC1A748: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:86 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A749: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:86 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A748.
    case 0xC1A74A: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:86 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A749.
    case 0xC1A74B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795-jp.asm:86 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A74C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:87 LDA @LOCAL03
    case 0xC1A74E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C1A795-jp.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A750: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C1A795-jp.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A752: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C1A795-jp.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A753: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C1A795-jp.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A755: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C1A795-jp.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A756: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C1A795-jp.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1A757: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:89 CLC
    case 0xC1A758: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:90 ADC @VIRTUAL06
    case 0xC1A759: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:91 STA @VIRTUAL06
    case 0xC1A75B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:92 STA @LOCAL00
    case 0xC1A75D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:93 LDA @VIRTUAL06+2
    case 0xC1A75F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:94 STA @LOCAL00+2
    case 0xC1A761: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:95 LDX #.SIZEOF(item::name)
    case 0xC1A763: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:95 LDX #.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC1A763.
    case 0xC1A765: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:96 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1A766: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:96 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1A766.
    case 0xC1A768: cpu.execute_instruction<0x9F>(0x8EC322, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:97 JSL MEMCPY16
    case 0xC1A769: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:97 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1A768.
    case 0xC1A76C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:98 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A76D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:98 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1A76C.
    case 0xC1A76E: cpu.execute_instruction<0x20>(0x00549C, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:99 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    case 0xC1A76F: cpu.execute_instruction<0x9C>(0x009F54, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:99 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC1A76E.
    case 0xC1A771: cpu.execute_instruction<0x9F>(0xE802A6, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:100 LDX @VIRTUAL02
    case 0xC1A772: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:101 INX
    case 0xC1A774: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:102 LDY @LOCAL02
    case 0xC1A775: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:103 REP #PROC_FLAGS::ACCUM8
    case 0xC1A777: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:104 TYA
    case 0xC1A779: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:105 JSL CHECK_ITEM_EQUIPPED
    case 0xC1A77A: cpu.execute_instruction<0x22>(0xC3E560, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:106 CMP #0
    case 0xC1A77E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:106 CMP #0
    // Overlapping static entry reached from 0xC1A77E.
    case 0xC1A780: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:107 BEQ @UNKNOWN8
    case 0xC1A781: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:108 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A783: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:108 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A783.
    case 0xC1A785: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:108 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A786: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1A795-jp.asm:108 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A788: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1A795-jp.asm:108 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A789: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1A795-jp.asm:108 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A78B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:108 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A78C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1A795-jp.asm:108 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A78E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:109 REP #PROC_FLAGS::ACCUM8
    case 0xC1A790: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1A795-jp.asm:110 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A792: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:110 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A794: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1A795-jp.asm:110 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A796: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1A795-jp.asm:110 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A798: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:111 JSL STRLEN
    case 0xC1A79A: cpu.execute_instruction<0x22>(0xC08F13, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:112 TAX
    case 0xC1A79E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A79F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:114 LDA #34
    case 0xC1A7A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x009D22, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:115 STA TEMPORARY_TEXT_BUFFER,X
    case 0xC1A7A3: cpu.execute_instruction<0x9D>(0x009F4A, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:115 STA TEMPORARY_TEXT_BUFFER,X
    // Overlapping static entry reached from 0xC1A7A1.
    case 0xC1A7A4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:115 STA TEMPORARY_TEXT_BUFFER,X
    // Overlapping static entry reached from 0xC1A7A4.
    case 0xC1A7A5: cpu.execute_instruction<0x9F>(0x9F4B9E, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:116 STZ TEMPORARY_TEXT_BUFFER+1,X
    case 0xC1A7A6: cpu.execute_instruction<0x9E>(0x009F4B, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC1A7A9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:118 LDA @LOCAL05
    case 0xC1A7AB: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:119 STA @VIRTUAL04
    case 0xC1A7AD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:120 STA @LOCAL04
    case 0xC1A7AF: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:122 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A7B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:122 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A7B1.
    case 0xC1A7B3: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:122 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A7B4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1A795-jp.asm:122 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A7B6: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1A795-jp.asm:122 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A7B7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1A795-jp.asm:122 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A7B9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:122 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A7BA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1A795-jp.asm:122 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A7BC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC1A7BE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1A795-jp.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A7C0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A7C2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1A795-jp.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A7C4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1A795-jp.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A7C6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:125 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A7C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:125 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A7C8.
    case 0xC1A7CA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:125 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A7CB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:125 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A7CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:125 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A7CD.
    case 0xC1A7CF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1A795-jp.asm:125 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A7D0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:126 LDA @VIRTUAL02
    case 0xC1A7D2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:127 INC
    case 0xC1A7D4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:128 JSR UNKNOWN_C115F4
    case 0xC1A7D5: cpu.execute_instruction<0x20>(0x001BB0, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:129 TAX
    case 0xC1A7D8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A7D9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:131 LDA #115
    case 0xC1A7DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000073, 2); else cpu.execute_instruction<0xA9>(0x009D73, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:132 STA __BSS_START__+14,X
    case 0xC1A7DD: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:132 STA __BSS_START__+14,X
    // Overlapping static entry reached from 0xC1A7DB.
    case 0xC1A7DE: cpu.execute_instruction<0x0E>(0x00C200, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC1A7E0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:133 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1A7DE.
    case 0xC1A7E1: cpu.execute_instruction<0x20>(0x001CA5, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:134 LDA @LOCAL05
    case 0xC1A7E2: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:135 STA @VIRTUAL04
    case 0xC1A7E4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:136 INC @VIRTUAL04
    case 0xC1A7E6: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:137 LDA @VIRTUAL04
    case 0xC1A7E8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:138 STA @LOCAL05
    case 0xC1A7EA: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:140 INC @VIRTUAL02
    case 0xC1A7EC: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:142 LDA @VIRTUAL02
    case 0xC1A7EE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:143 CMP #14
    case 0xC1A7F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:143 CMP #14
    // Overlapping static entry reached from 0xC1A7F0.
    case 0xC1A7F2: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C1/C1A795-jp.asm:144 BCCL @UNKNOWN2
    case 0xC1A7F3: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C1/C1A795-jp.asm:144 BCCL @UNKNOWN2
    case 0xC1A7F5: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:144 BCCL @UNKNOWN2
    case 0xC1A7F7: cpu.execute_instruction<0x4C>(0x00A6F8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:145 LOADPTR STATUS_EQUIP_WINDOW_TEXT_13, @LOCAL00
    case 0xC1A7FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D2, 2); else cpu.execute_instruction<0xA9>(0x0039D2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:145 LOADPTR STATUS_EQUIP_WINDOW_TEXT_13, @LOCAL00
    // Overlapping static entry reached from 0xC1A7FA.
    case 0xC1A7FC: cpu.execute_instruction<0x39>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795-jp.asm:145 LOADPTR STATUS_EQUIP_WINDOW_TEXT_13, @LOCAL00
    case 0xC1A7FD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:145 LOADPTR STATUS_EQUIP_WINDOW_TEXT_13, @LOCAL00
    case 0xC1A7FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:145 LOADPTR STATUS_EQUIP_WINDOW_TEXT_13, @LOCAL00
    // Overlapping static entry reached from 0xC1A7FF.
    case 0xC1A801: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795-jp.asm:145 LOADPTR STATUS_EQUIP_WINDOW_TEXT_13, @LOCAL00
    case 0xC1A802: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:146 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A804: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:146 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A804.
    case 0xC1A806: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1A795-jp.asm:146 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A807: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:146 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A809: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:146 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A809.
    case 0xC1A80B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1A795-jp.asm:146 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A80C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:147 LDA #.LOWORD(-1)
    case 0xC1A80E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:147 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1A80E.
    case 0xC1A810: cpu.execute_instruction<0xFF>(0x1BB020, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:148 JSR UNKNOWN_C115F4
    case 0xC1A811: cpu.execute_instruction<0x20>(0x001BB0, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:149 LDY @LOCAL04
    case 0xC1A814: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:150 LDX #0
    case 0xC1A816: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:150 LDX #0
    // Overlapping static entry reached from 0xC1A816.
    case 0xC1A818: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:151 LDA #1
    case 0xC1A819: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:151 LDA #1
    // Overlapping static entry reached from 0xC1A819.
    case 0xC1A81B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:152 JSR UNKNOWN_C1181B
    case 0xC1A81C: cpu.execute_instruction<0x20>(0x001FB3, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:153 LDA @LOCAL07
    case 0xC1A81F: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A821: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:155 INC
    case 0xC1A823: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:156 STA CHARACTER_FOR_EQUIP_MENU
    case 0xC1A824: cpu.execute_instruction<0x8D>(0x009F81, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:157 REP #PROC_FLAGS::ACCUM8
    case 0xC1A827: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:158 LDA @LOCAL06
    case 0xC1A829: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:159 CMP #1
    case 0xC1A82B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:159 CMP #1
    // Overlapping static entry reached from 0xC1A82B.
    case 0xC1A82D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:160 BEQ @UNKNOWN12
    case 0xC1A82E: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:161 CMP #2
    case 0xC1A830: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:161 CMP #2
    // Overlapping static entry reached from 0xC1A830.
    case 0xC1A832: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:162 BEQ @UNKNOWN13
    case 0xC1A833: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:163 CMP #3
    case 0xC1A835: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:163 CMP #3
    // Overlapping static entry reached from 0xC1A835.
    case 0xC1A837: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:164 BEQ @UNKNOWN14
    case 0xC1A838: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:165 CMP #4
    case 0xC1A83A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:165 CMP #4
    // Overlapping static entry reached from 0xC1A83A.
    case 0xC1A83C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:166 BEQ @UNKNOWN15
    case 0xC1A83D: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:167 BRA @UNKNOWN16
    case 0xC1A83F: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:169 LOADPTR UNKNOWN_C22562, @LOCAL00
    case 0xC1A841: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x00241D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:169 LOADPTR UNKNOWN_C22562, @LOCAL00
    // Overlapping static entry reached from 0xC1A841.
    case 0xC1A843: cpu.execute_instruction<0x24>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795-jp.asm:169 LOADPTR UNKNOWN_C22562, @LOCAL00
    case 0xC1A844: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795-jp.asm:169 LOADPTR UNKNOWN_C22562, @LOCAL00
    // Overlapping static entry reached from 0xC1A843.
    case 0xC1A845: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:169 LOADPTR UNKNOWN_C22562, @LOCAL00
    case 0xC1A846: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:169 LOADPTR UNKNOWN_C22562, @LOCAL00
    // Overlapping static entry reached from 0xC1A846.
    case 0xC1A848: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795-jp.asm:169 LOADPTR UNKNOWN_C22562, @LOCAL00
    case 0xC1A849: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:170 JSR UNKNOWN_C11F5A
    case 0xC1A84B: cpu.execute_instruction<0x20>(0x00267B, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:171 BRA @UNKNOWN16
    case 0xC1A84E: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:173 LOADPTR UNKNOWN_C225AC, @LOCAL00
    case 0xC1A850: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000067, 2); else cpu.execute_instruction<0xA9>(0x002467, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:173 LOADPTR UNKNOWN_C225AC, @LOCAL00
    // Overlapping static entry reached from 0xC1A850.
    case 0xC1A852: cpu.execute_instruction<0x24>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795-jp.asm:173 LOADPTR UNKNOWN_C225AC, @LOCAL00
    case 0xC1A853: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795-jp.asm:173 LOADPTR UNKNOWN_C225AC, @LOCAL00
    // Overlapping static entry reached from 0xC1A852.
    case 0xC1A854: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:173 LOADPTR UNKNOWN_C225AC, @LOCAL00
    case 0xC1A855: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:173 LOADPTR UNKNOWN_C225AC, @LOCAL00
    // Overlapping static entry reached from 0xC1A855.
    case 0xC1A857: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795-jp.asm:173 LOADPTR UNKNOWN_C225AC, @LOCAL00
    case 0xC1A858: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:174 JSR UNKNOWN_C11F5A
    case 0xC1A85A: cpu.execute_instruction<0x20>(0x00267B, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:175 BRA @UNKNOWN16
    case 0xC1A85D: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:177 LOADPTR UNKNOWN_C2260D, @LOCAL00
    case 0xC1A85F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0024C8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:177 LOADPTR UNKNOWN_C2260D, @LOCAL00
    // Overlapping static entry reached from 0xC1A85F.
    case 0xC1A861: cpu.execute_instruction<0x24>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795-jp.asm:177 LOADPTR UNKNOWN_C2260D, @LOCAL00
    case 0xC1A862: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795-jp.asm:177 LOADPTR UNKNOWN_C2260D, @LOCAL00
    // Overlapping static entry reached from 0xC1A861.
    case 0xC1A863: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:177 LOADPTR UNKNOWN_C2260D, @LOCAL00
    case 0xC1A864: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:177 LOADPTR UNKNOWN_C2260D, @LOCAL00
    // Overlapping static entry reached from 0xC1A864.
    case 0xC1A866: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795-jp.asm:177 LOADPTR UNKNOWN_C2260D, @LOCAL00
    case 0xC1A867: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:178 JSR UNKNOWN_C11F5A
    case 0xC1A869: cpu.execute_instruction<0x20>(0x00267B, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:179 BRA @UNKNOWN16
    case 0xC1A86C: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:181 LOADPTR UNKNOWN_C22673, @LOCAL00
    case 0xC1A86E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00252E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:181 LOADPTR UNKNOWN_C22673, @LOCAL00
    // Overlapping static entry reached from 0xC1A86E.
    case 0xC1A870: cpu.execute_instruction<0x25>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795-jp.asm:181 LOADPTR UNKNOWN_C22673, @LOCAL00
    case 0xC1A871: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795-jp.asm:181 LOADPTR UNKNOWN_C22673, @LOCAL00
    // Overlapping static entry reached from 0xC1A870.
    case 0xC1A872: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:181 LOADPTR UNKNOWN_C22673, @LOCAL00
    case 0xC1A873: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795-jp.asm:181 LOADPTR UNKNOWN_C22673, @LOCAL00
    // Overlapping static entry reached from 0xC1A873.
    case 0xC1A875: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795-jp.asm:181 LOADPTR UNKNOWN_C22673, @LOCAL00
    case 0xC1A876: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:182 JSR UNKNOWN_C11F5A
    case 0xC1A878: cpu.execute_instruction<0x20>(0x00267B, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:184 LDA #1
    case 0xC1A87B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:184 LDA #1
    // Overlapping static entry reached from 0xC1A87B.
    case 0xC1A87D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:185 STA COMPARE_EQUIPMENT_MODE
    case 0xC1A87E: cpu.execute_instruction<0x8D>(0x009F7F, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:186 JSR UNKNOWN_C193E7
    case 0xC1A881: cpu.execute_instruction<0x20>(0x00949C, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:187 LDA #1
    case 0xC1A884: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:187 LDA #1
    // Overlapping static entry reached from 0xC1A884.
    case 0xC1A886: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:188 JSR SELECTION_MENU
    case 0xC1A887: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:189 TAX
    case 0xC1A88A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:190 STX @LOCAL04
    case 0xC1A88B: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:191 JSR UNKNOWN_C19437
    case 0xC1A88D: cpu.execute_instruction<0x20>(0x0094E5, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:192 JSR UNKNOWN_C11F8A
    case 0xC1A890: cpu.execute_instruction<0x20>(0x0026AB, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:193 LDX @LOCAL04
    case 0xC1A893: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:194 CPX #.LOWORD(-1)
    case 0xC1A895: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:194 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1A895.
    case 0xC1A897: cpu.execute_instruction<0xFF>(0xA548D0, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:195 BNE @UNKNOWN21
    case 0xC1A898: cpu.execute_instruction<0xD0>(0x000048, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:196 LDA @LOCAL06
    case 0xC1A89A: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:196 LDA @LOCAL06
    // Overlapping static entry reached from 0xC1A897.
    case 0xC1A89B: cpu.execute_instruction<0x1E>(0x0001C9, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:197 CMP #1
    case 0xC1A89C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:197 CMP #1
    // Overlapping static entry reached from 0xC1A89C.
    case 0xC1A89E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:198 BEQ @UNKNOWN17
    case 0xC1A89F: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:199 CMP #2
    case 0xC1A8A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:199 CMP #2
    // Overlapping static entry reached from 0xC1A8A1.
    case 0xC1A8A3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:200 BEQ @UNKNOWN18
    case 0xC1A8A4: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:201 CMP #3
    case 0xC1A8A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:201 CMP #3
    // Overlapping static entry reached from 0xC1A8A6.
    case 0xC1A8A8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:202 BEQ @UNKNOWN19
    case 0xC1A8A9: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:203 CMP #4
    case 0xC1A8AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:203 CMP #4
    // Overlapping static entry reached from 0xC1A8AB.
    case 0xC1A8AD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:204 BEQ @UNKNOWN20
    case 0xC1A8AE: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:205 BRA @UNKNOWN22
    case 0xC1A8B0: cpu.execute_instruction<0x80>(0x00003B, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:207 LDX #0
    case 0xC1A8B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:207 LDX #0
    // Overlapping static entry reached from 0xC1A8B2.
    case 0xC1A8B4: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:208 LDA @LOCAL07
    case 0xC1A8B5: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:209 INC
    case 0xC1A8B7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:210 JSL CHANGE_EQUIPPED_WEAPON
    case 0xC1A8B8: cpu.execute_instruction<0x22>(0xC4357B, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:211 BRA @UNKNOWN22
    case 0xC1A8BC: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:213 LDX #0
    case 0xC1A8BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:213 LDX #0
    // Overlapping static entry reached from 0xC1A8BE.
    case 0xC1A8C0: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:214 LDA @LOCAL07
    case 0xC1A8C1: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:215 INC
    case 0xC1A8C3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:216 JSL CHANGE_EQUIPPED_BODY
    case 0xC1A8C4: cpu.execute_instruction<0x22>(0xC435C8, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:217 BRA @UNKNOWN22
    case 0xC1A8C8: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:219 LDX #0
    case 0xC1A8CA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:219 LDX #0
    // Overlapping static entry reached from 0xC1A8CA.
    case 0xC1A8CC: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:220 LDA @LOCAL07
    case 0xC1A8CD: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:221 INC
    case 0xC1A8CF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:222 JSL CHANGE_EQUIPPED_ARMS
    case 0xC1A8D0: cpu.execute_instruction<0x22>(0xC43613, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:223 BRA @UNKNOWN22
    case 0xC1A8D4: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:225 LDX #0
    case 0xC1A8D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:225 LDX #0
    // Overlapping static entry reached from 0xC1A8D6.
    case 0xC1A8D8: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:226 LDA @LOCAL07
    case 0xC1A8D9: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:227 INC
    case 0xC1A8DB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:228 JSL CHANGE_EQUIPPED_OTHER
    case 0xC1A8DC: cpu.execute_instruction<0x22>(0xC4365E, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:229 BRA @UNKNOWN22
    case 0xC1A8E0: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:231 CPX #0
    case 0xC1A8E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:231 CPX #0
    // Overlapping static entry reached from 0xC1A8E2.
    case 0xC1A8E4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:232 BEQ @UNKNOWN22
    case 0xC1A8E5: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:233 LDA @LOCAL07
    case 0xC1A8E7: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:234 INC
    case 0xC1A8E9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:235 JSR EQUIP_ITEM
    case 0xC1A8EA: cpu.execute_instruction<0x20>(0x00911F, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:237 LDA #WINDOW::EQUIP_MENU_ITEMLIST
    case 0xC1A8ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:237 LDA #WINDOW::EQUIP_MENU_ITEMLIST
    // Overlapping static entry reached from 0xC1A8ED.
    case 0xC1A8EF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:238 JSR CLOSE_WINDOW
    case 0xC1A8F0: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/unknown/C1/C1A795-jp.asm:239 LDA @LOCAL07
    case 0xC1A8F3: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C1/C1A795-jp.asm:240 INC
    case 0xC1A8F5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795-jp.asm:241 JSL UNKNOWN_C1A778
    case 0xC1A8F6: cpu.execute_instruction<0x22>(0xC1A666, 4); return true;
    // src/unknown/C1/C1A795-jp.asm:242 JMP @UNKNOWN0
    case 0xC1A8FA: cpu.execute_instruction<0x4C>(0x00A696, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1A795-jp.asm:244 END_C_FUNCTION
    case 0xC1A8FD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1A795-jp.asm:244 END_C_FUNCTION
    case 0xC1A8FE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AA18-jp.asm (unresolved).
bool execute_unresolved_c1_c1aa18_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1A8FF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:6 END_STACK_VARS
    case 0xC1A901: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:6 END_STACK_VARS
    case 0xC1A902: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:6 END_STACK_VARS
    case 0xC1A903: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC1A903.
    case 0xC1A905: cpu.execute_instruction<0xFF>(0x35A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:6 END_STACK_VARS
    case 0xC1A906: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1AA18-jp.asm:7 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1A907: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C1AA18-jp.asm:7 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1A907.
    case 0xC1A909: cpu.execute_instruction<0x9F>(0x08B122, 4); return true;
    // src/unknown/C1/C1AA18-jp.asm:8 JSL UNKNOWN_C20A20
    case 0xC1A90A: cpu.execute_instruction<0x22>(0xC208B1, 4); return true;
    // src/unknown/C1/C1AA18-jp.asm:8 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC1A909.
    case 0xC1A90D: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:9 CREATE_WINDOW_NEAR #WINDOW::CARRIED_MONEY
    case 0xC1A90E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:9 CREATE_WINDOW_NEAR #WINDOW::CARRIED_MONEY
    // Overlapping static entry reached from 0xC1A90D.
    case 0xC1A90F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:9 CREATE_WINDOW_NEAR #WINDOW::CARRIED_MONEY
    // Overlapping static entry reached from 0xC1A90E.
    case 0xC1A910: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:9 CREATE_WINDOW_NEAR #WINDOW::CARRIED_MONEY
    case 0xC1A911: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C1AA18-jp.asm:10 LDA #5
    case 0xC1A914: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C1/C1AA18-jp.asm:10 LDA #5
    // Overlapping static entry reached from 0xC1A914.
    case 0xC1A916: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AA18-jp.asm:11 JSR UNKNOWN_C10EB4
    case 0xC1A917: cpu.execute_instruction<0x20>(0x001495, 3); return true;
    // src/unknown/C1/C1AA18-jp.asm:12 JSR SET_INSTANT_PRINTING
    case 0xC1A91A: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/unknown/C1/C1AA18-jp.asm:13 JSR UNKNOWN_C10FA3
    case 0xC1A91D: cpu.execute_instruction<0x20>(0x00155D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:14 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC1A920: cpu.execute_instruction<0xAD>(0x009AE2, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:14 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC1A923: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:14 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC1A925: cpu.execute_instruction<0xAD>(0x009AE4, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:14 MOVE_INT GAME_STATE+game_state::money_carried, @VIRTUAL06
    case 0xC1A928: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A92A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A92C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A92E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A930: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1AA18-jp.asm:16 JSR UNKNOWN_C11404
    case 0xC1A932: cpu.execute_instruction<0x20>(0x001404, 3); return true;
    // src/unknown/C1/C1AA18-jp.asm:17 JSR CLEAR_INSTANT_PRINTING
    case 0xC1A935: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/unknown/C1/C1AA18-jp.asm:18 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1A938: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C1AA18-jp.asm:18 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1A938.
    case 0xC1A93A: cpu.execute_instruction<0x9F>(0x094D22, 4); return true;
    // src/unknown/C1/C1AA18-jp.asm:19 JSL UNKNOWN_C20ABC
    case 0xC1A93B: cpu.execute_instruction<0x22>(0xC2094D, 4); return true;
    // src/unknown/C1/C1AA18-jp.asm:19 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1A93A.
    case 0xC1A93E: cpu.execute_instruction<0xC2>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:20 END_C_FUNCTION
    case 0xC1A93F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AA18-jp.asm:20 END_C_FUNCTION
    case 0xC1A940: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AA5D-jp.asm (unresolved).
bool execute_unresolved_c1_c1aa5d_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1A941: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:9 END_STACK_VARS
    case 0xC1A943: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:9 END_STACK_VARS
    case 0xC1A944: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:9 END_STACK_VARS
    case 0xC1A945: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1A945.
    case 0xC1A947: cpu.execute_instruction<0xFF>(0x35A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:9 END_STACK_VARS
    case 0xC1A948: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D-jp.asm:10 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1A949: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:10 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1A949.
    case 0xC1A94B: cpu.execute_instruction<0x9F>(0x08B122, 4); return true;
    // src/unknown/C1/C1AA5D-jp.asm:11 JSL UNKNOWN_C20A20
    case 0xC1A94C: cpu.execute_instruction<0x22>(0xC208B1, 4); return true;
    // src/unknown/C1/C1AA5D-jp.asm:11 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC1A94B.
    case 0xC1A94F: cpu.execute_instruction<0xC2>(0x0000AD, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:12 LDA GAME_STATE + game_state::party_members
    case 0xC1A950: cpu.execute_instruction<0xAD>(0x009B20, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:12 LDA GAME_STATE + game_state::party_members
    // Overlapping static entry reached from 0xC1A94F.
    case 0xC1A951: cpu.execute_instruction<0x20>(0x00299B, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:13 AND #$00FF
    case 0xC1A953: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC1A951.
    case 0xC1A954: cpu.execute_instruction<0xFF>(0x86AA00, 4); return true;
    // src/unknown/C1/C1AA5D-jp.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC1A953.
    case 0xC1A955: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:14 TAX
    case 0xC1A956: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D-jp.asm:15 STX @LOCAL02
    case 0xC1A957: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:15 STX @LOCAL02
    // Overlapping static entry reached from 0xC1A954.
    case 0xC1A958: cpu.execute_instruction<0x16>(0x0000A6, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:17 LDX @LOCAL02
    case 0xC1A959: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:17 LDX @LOCAL02
    // Overlapping static entry reached from 0xC1A958.
    case 0xC1A95A: cpu.execute_instruction<0x16>(0x00008A, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:18 TXA
    case 0xC1A95B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D-jp.asm:19 JSL UNKNOWN_C1A778
    case 0xC1A95C: cpu.execute_instruction<0x22>(0xC1A666, 4); return true;
    // src/unknown/C1/C1AA5D-jp.asm:20 LDA GAME_STATE + game_state::player_controlled_party_count
    case 0xC1A960: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:21 AND #$00FF
    case 0xC1A963: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC1A963.
    case 0xC1A965: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:22 CMP #1
    case 0xC1A966: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:22 CMP #1
    // Overlapping static entry reached from 0xC1A966.
    case 0xC1A968: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:23 BEQ @UNKNOWN2
    case 0xC1A969: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:24 LDA #0
    case 0xC1A96B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:24 LDA #0
    // Overlapping static entry reached from 0xC1A96B.
    case 0xC1A96D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:25 JSR UNKNOWN_C193E7
    case 0xC1A96E: cpu.execute_instruction<0x20>(0x00949C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:26 LOADPTR UNKNOWN_C1A778, @LOCAL00
    case 0xC1A971: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000066, 2); else cpu.execute_instruction<0xA9>(0x00A666, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:26 LOADPTR UNKNOWN_C1A778, @LOCAL00
    // Overlapping static entry reached from 0xC1A971.
    case 0xC1A973: cpu.execute_instruction<0xA6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:26 LOADPTR UNKNOWN_C1A778, @LOCAL00
    case 0xC1A974: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:26 LOADPTR UNKNOWN_C1A778, @LOCAL00
    // Overlapping static entry reached from 0xC1A973.
    case 0xC1A975: cpu.execute_instruction<0x0E>(0x00C1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:26 LOADPTR UNKNOWN_C1A778, @LOCAL00
    case 0xC1A976: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:26 LOADPTR UNKNOWN_C1A778, @LOCAL00
    // Overlapping static entry reached from 0xC1A976.
    case 0xC1A978: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:26 LOADPTR UNKNOWN_C1A778, @LOCAL00
    case 0xC1A979: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:27 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A97B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:27 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A97B.
    case 0xC1A97D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:27 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A97E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:27 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A980: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:27 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A980.
    case 0xC1A982: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:27 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A983: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:28 LDX #1
    case 0xC1A985: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:28 LDX #1
    // Overlapping static entry reached from 0xC1A985.
    case 0xC1A987: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:29 LDA #0
    case 0xC1A988: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:29 LDA #0
    // Overlapping static entry reached from 0xC1A988.
    case 0xC1A98A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:30 JSR CHAR_SELECT_PROMPT
    case 0xC1A98B: cpu.execute_instruction<0x20>(0x002EE7, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:31 TAX
    case 0xC1A98E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D-jp.asm:32 STX @LOCAL02
    case 0xC1A98F: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:33 JSR UNKNOWN_C19437
    case 0xC1A991: cpu.execute_instruction<0x20>(0x0094E5, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:34 BRA @UNKNOWN3
    case 0xC1A994: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:36 LDA GAME_STATE + game_state::party_members
    case 0xC1A996: cpu.execute_instruction<0xAD>(0x009B20, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:37 AND #$00FF
    case 0xC1A999: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC1A999.
    case 0xC1A99B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:38 TAX
    case 0xC1A99C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D-jp.asm:39 STX @LOCAL02
    case 0xC1A99D: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:40 LDA #0
    case 0xC1A99F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:40 LDA #0
    // Overlapping static entry reached from 0xC1A99F.
    case 0xC1A9A1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:41 JSR UNKNOWN_C43573
    case 0xC1A9A2: cpu.execute_instruction<0x20>(0x000C40, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:43 LDX @LOCAL02
    case 0xC1A9A5: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:44 BEQ @UNKNOWN4
    case 0xC1A9A7: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:45 TXA
    case 0xC1A9A9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D-jp.asm:46 JSR UNKNOWN_C1A795
    case 0xC1A9AA: cpu.execute_instruction<0x20>(0x00A683, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:47 LDA GAME_STATE + game_state::player_controlled_party_count
    case 0xC1A9AD: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:48 AND #$00FF
    case 0xC1A9B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC1A9B0.
    case 0xC1A9B2: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:49 CMP #1
    case 0xC1A9B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:49 CMP #1
    // Overlapping static entry reached from 0xC1A9B3.
    case 0xC1A9B5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:50 BNE @UNKNOWN0
    case 0xC1A9B6: cpu.execute_instruction<0xD0>(0x0000A1, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:52 LDA #WINDOW::UNKNOWN2D
    case 0xC1A9B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002D, 2); else cpu.execute_instruction<0xA9>(0x00002D, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:52 LDA #WINDOW::UNKNOWN2D
    // Overlapping static entry reached from 0xC1A9B8.
    case 0xC1A9BA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:53 JSR CLOSE_WINDOW
    case 0xC1A9BB: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:54 LDA #WINDOW::EQUIP_MENU
    case 0xC1A9BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:54 LDA #WINDOW::EQUIP_MENU
    // Overlapping static entry reached from 0xC1A9BE.
    case 0xC1A9C0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:55 JSR CLOSE_WINDOW
    case 0xC1A9C1: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:56 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1A9C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C1AA5D-jp.asm:56 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1A9C4.
    case 0xC1A9C6: cpu.execute_instruction<0x9F>(0x094D22, 4); return true;
    // src/unknown/C1/C1AA5D-jp.asm:57 JSL UNKNOWN_C20ABC
    case 0xC1A9C7: cpu.execute_instruction<0x22>(0xC2094D, 4); return true;
    // src/unknown/C1/C1AA5D-jp.asm:57 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1A9C6.
    case 0xC1A9CA: cpu.execute_instruction<0xC2>(0x0000A6, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:58 LDX @LOCAL02
    case 0xC1A9CB: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:58 LDX @LOCAL02
    // Overlapping static entry reached from 0xC1A9CA.
    case 0xC1A9CC: cpu.execute_instruction<0x16>(0x00008A, 2); return true;
    // src/unknown/C1/C1AA5D-jp.asm:59 TXA
    case 0xC1A9CD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:60 END_C_FUNCTION
    case 0xC1A9CE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AA5D-jp.asm:60 END_C_FUNCTION
    case 0xC1A9CF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AAFA.asm (unresolved).
bool execute_unresolved_c1_c1aafa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AAFA.asm:3 BEGIN_C_FUNCTION
    case 0xC1A9D0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AAFA.asm:10 END_STACK_VARS
    case 0xC1A9D2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AAFA.asm:10 END_STACK_VARS
    case 0xC1A9D3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AAFA.asm:10 END_STACK_VARS
    case 0xC1A9D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AAFA.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1A9D4.
    case 0xC1A9D6: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AAFA.asm:10 END_STACK_VARS
    case 0xC1A9D7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:11 LDA #0
    case 0xC1A9D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1AAFA.asm:11 LDA #0
    // Overlapping static entry reached from 0xC1A9D8.
    case 0xC1A9DA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1AAFA.asm:12 STA @VIRTUAL02
    case 0xC1A9DB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1AAFA.asm:13 LDA #2
    case 0xC1A9DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1AAFA.asm:13 LDA #2
    // Overlapping static entry reached from 0xC1A9DD.
    case 0xC1A9DF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AAFA.asm:14 JSR UNKNOWN_C193E7
    case 0xC1A9E0: cpu.execute_instruction<0x20>(0x00949C, 3); return true;
    // src/unknown/C1/C1AAFA.asm:15 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1A9E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C1AAFA.asm:15 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1A9E3.
    case 0xC1A9E5: cpu.execute_instruction<0x9F>(0x08B122, 4); return true;
    // src/unknown/C1/C1AAFA.asm:16 JSL UNKNOWN_C20A20
    case 0xC1A9E6: cpu.execute_instruction<0x22>(0xC208B1, 4); return true;
    // src/unknown/C1/C1AAFA.asm:16 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC1A9E5.
    case 0xC1A9E9: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1AAFA.asm:17 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    case 0xC1A9EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1AAFA.asm:17 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    // Overlapping static entry reached from 0xC1A9E9.
    case 0xC1A9EB: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1AAFA.asm:17 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    // Overlapping static entry reached from 0xC1A9EA.
    case 0xC1A9EC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1AAFA.asm:17 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    case 0xC1A9ED: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:18 LOADPTR STATUS_EQUIP_WINDOW_TEXT_14, @LOCAL00
    case 0xC1A9F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x0039D9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:18 LOADPTR STATUS_EQUIP_WINDOW_TEXT_14, @LOCAL00
    // Overlapping static entry reached from 0xC1A9F0.
    case 0xC1A9F2: cpu.execute_instruction<0x39>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1AAFA.asm:18 LOADPTR STATUS_EQUIP_WINDOW_TEXT_14, @LOCAL00
    case 0xC1A9F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:18 LOADPTR STATUS_EQUIP_WINDOW_TEXT_14, @LOCAL00
    case 0xC1A9F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:18 LOADPTR STATUS_EQUIP_WINDOW_TEXT_14, @LOCAL00
    // Overlapping static entry reached from 0xC1A9F5.
    case 0xC1A9F7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:18 LOADPTR STATUS_EQUIP_WINDOW_TEXT_14, @LOCAL00
    case 0xC1A9F8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1AAFA.asm:19 LDX #3
    case 0xC1A9FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/unknown/C1/C1AAFA.asm:19 LDX #3
    // Overlapping static entry reached from 0xC1A9FA.
    case 0xC1A9FC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1AAFA.asm:20 LDA #5
    case 0xC1A9FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C1/C1AAFA.asm:20 LDA #5
    // Overlapping static entry reached from 0xC1A9FD.
    case 0xC1A9FF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1AAFA.asm:21 JSL SET_WINDOW_TITLE
    case 0xC1AA00: cpu.execute_instruction<0x22>(0xC2030C, 4); return true;
    // src/unknown/C1/C1AAFA.asm:22 LDY #1
    case 0xC1AA04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C1AAFA.asm:22 LDY #1
    // Overlapping static entry reached from 0xC1AA04.
    case 0xC1AA06: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C1AAFA.asm:23 STY @LOCAL03
    case 0xC1AA07: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C1/C1AAFA.asm:24 BRA @UNKNOWN2
    case 0xC1AA09: cpu.execute_instruction<0x80>(0x000062, 2); return true;
    // src/unknown/C1/C1AAFA.asm:26 LDA @VIRTUAL00
    case 0xC1AA0B: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1AAFA.asm:27 AND #$00FF
    case 0xC1AA0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AAFA.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1AA0D.
    case 0xC1AA0F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1AAFA.asm:28 BEQ @UNKNOWN1
    case 0xC1AA10: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/unknown/C1/C1AAFA.asm:29 LDA @LOCAL02
    case 0xC1AA12: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C1AAFA.asm:30 CLC
    case 0xC1AA14: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:31 ADC #psi_teleport_destination::event_flag
    case 0xC1AA15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/C1/C1AAFA.asm:31 ADC #psi_teleport_destination::event_flag
    // Overlapping static entry reached from 0xC1AA15.
    case 0xC1AA17: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1AAFA.asm:32 CLC
    case 0xC1AA18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:33 ADC @VIRTUAL06
    case 0xC1AA19: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1AAFA.asm:34 STA @VIRTUAL06
    case 0xC1AA1B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1AAFA.asm:35 LDA [@VIRTUAL06]
    case 0xC1AA1D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1AAFA.asm:36 JSL GET_EVENT_FLAG
    case 0xC1AA1F: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C1/C1AAFA.asm:37 CMP #0
    case 0xC1AA23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1AAFA.asm:37 CMP #0
    // Overlapping static entry reached from 0xC1AA23.
    case 0xC1AA25: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1AAFA.asm:38 BEQ @UNKNOWN1
    case 0xC1AA26: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AAFA.asm:40 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1AA28: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:40 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1AA2A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:40 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1AA2C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:40 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1AA2E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1AAFA.asm:45 LDX #.SIZEOF(psi_teleport_destination::name)
    case 0xC1AA30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C1/C1AAFA.asm:45 LDX #.SIZEOF(psi_teleport_destination::name)
    // Overlapping static entry reached from 0xC1AA30.
    case 0xC1AA32: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1AAFA.asm:46 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1AA33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // src/unknown/C1/C1AAFA.asm:46 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1AA33.
    case 0xC1AA35: cpu.execute_instruction<0x9F>(0x8EC322, 4); return true;
    // src/unknown/C1/C1AAFA.asm:47 JSL MEMCPY16
    case 0xC1AA36: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C1/C1AAFA.asm:47 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1AA35.
    case 0xC1AA39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/unknown/C1/C1AAFA.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AA3A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1AAFA.asm:48 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1AA39.
    case 0xC1AA3B: cpu.execute_instruction<0x20>(0x00549C, 3); return true;
    // src/unknown/C1/C1AAFA.asm:49 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(psi_teleport_destination::name)
    case 0xC1AA3C: cpu.execute_instruction<0x9C>(0x009F54, 3); return true;
    // src/unknown/C1/C1AAFA.asm:49 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(psi_teleport_destination::name)
    // Overlapping static entry reached from 0xC1AA3B.
    case 0xC1AA3E: cpu.execute_instruction<0x9F>(0xA920C2, 4); return true;
    // src/unknown/C1/C1AAFA.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC1AA3F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AA41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AA3E.
    case 0xC1AA42: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AA41.
    case 0xC1AA43: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AA44: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AA46: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AA47: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AA49: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AA4A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AA4C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1AAFA.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC1AA4E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AAFA.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AA50: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AA52: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AA54: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AA56: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1AAFA.asm:54 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1AA58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1AAFA.asm:54 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1AA58.
    case 0xC1AA5A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:54 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1AA5B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1AAFA.asm:54 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1AA5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1AAFA.asm:54 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1AA5D.
    case 0xC1AA5F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:54 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1AA60: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1AAFA.asm:55 LDY @LOCAL03
    case 0xC1AA62: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C1AAFA.asm:56 TYA
    case 0xC1AA64: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:57 JSR UNKNOWN_C115F4
    case 0xC1AA65: cpu.execute_instruction<0x20>(0x001BB0, 3); return true;
    // src/unknown/C1/C1AAFA.asm:59 LDY @LOCAL03
    case 0xC1AA68: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C1AAFA.asm:60 INY
    case 0xC1AA6A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:61 STY @LOCAL03
    case 0xC1AA6B: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC1AA6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00899E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AA6D.
    case 0xC1AA6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC1AA70: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AA6F.
    case 0xC1AA71: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC1AA72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AA71.
    case 0xC1AA73: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AA72.
    case 0xC1AA74: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC1AA75: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1AAFA.asm:64 TYA
    case 0xC1AA77: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C1/C1AAFA.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC1AA78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C1/C1AAFA.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC1AA79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C1/C1AAFA.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC1AA7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C1/C1AAFA.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC1AA7B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:66 STA @LOCAL02
    case 0xC1AA7C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1AAFA.asm:67 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1AA7E: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:67 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1AA80: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:67 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1AA82: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:67 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1AA84: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1AAFA.asm:68 CLC
    case 0xC1AA86: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:69 ADC @VIRTUAL0A
    case 0xC1AA87: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1AAFA.asm:70 STA @VIRTUAL0A
    case 0xC1AA89: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1AAFA.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AA8B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1AAFA.asm:72 LDA [@VIRTUAL0A]
    case 0xC1AA8D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1AAFA.asm:73 STA @VIRTUAL00
    case 0xC1AA8F: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1AAFA.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC1AA91: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1AAFA.asm:75 LDA @VIRTUAL00
    case 0xC1AA93: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1AAFA.asm:76 AND #$00FF
    case 0xC1AA95: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AAFA.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC1AA95.
    case 0xC1AA97: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1AAFA.asm:77 BNEL @UNKNOWN0
    case 0xC1AA98: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:77 BNEL @UNKNOWN0
    case 0xC1AA9A: cpu.execute_instruction<0x4C>(0x00AA0B, 3); return true;
    // src/unknown/C1/C1AAFA.asm:78 LDA #0
    case 0xC1AA9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1AAFA.asm:78 LDA #0
    // Overlapping static entry reached from 0xC1AA9D.
    case 0xC1AA9F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AAFA.asm:79 JSR UNKNOWN_C12BD5
    case 0xC1AAA0: cpu.execute_instruction<0x20>(0x0032DB, 3); return true;
    // src/unknown/C1/C1AAFA.asm:80 CMP #0
    case 0xC1AAA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1AAFA.asm:80 CMP #0
    // Overlapping static entry reached from 0xC1AAA3.
    case 0xC1AAA5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1AAFA.asm:81 BEQ @UNKNOWN4
    case 0xC1AAA6: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C1/C1AAFA.asm:82 LDY #1
    case 0xC1AAA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C1AAFA.asm:82 LDY #1
    // Overlapping static entry reached from 0xC1AAA8.
    case 0xC1AAAA: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1AAFA.asm:83 LDX #0
    case 0xC1AAAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1AAFA.asm:83 LDX #0
    // Overlapping static entry reached from 0xC1AAAB.
    case 0xC1AAAD: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C1/C1AAFA.asm:84 TYA
    case 0xC1AAAE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:85 JSR UNKNOWN_C1180D
    case 0xC1AAAF: cpu.execute_instruction<0x20>(0x001FA6, 3); return true;
    // src/unknown/C1/C1AAFA.asm:86 LDA #1
    case 0xC1AAB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1AAFA.asm:86 LDA #1
    // Overlapping static entry reached from 0xC1AAB2.
    case 0xC1AAB4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AAFA.asm:87 JSR SELECTION_MENU
    case 0xC1AAB5: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C1AAFA.asm:88 STA @VIRTUAL02
    case 0xC1AAB8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1AAFA.asm:90 JSR CLOSE_FOCUS_WINDOW
    case 0xC1AABA: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/unknown/C1/C1AAFA.asm:91 JSR UNKNOWN_C19437
    case 0xC1AABD: cpu.execute_instruction<0x20>(0x0094E5, 3); return true;
    // src/unknown/C1/C1AAFA.asm:92 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1AAC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C1AAFA.asm:92 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1AAC0.
    case 0xC1AAC2: cpu.execute_instruction<0x9F>(0x094D22, 4); return true;
    // src/unknown/C1/C1AAFA.asm:93 JSL UNKNOWN_C20ABC
    case 0xC1AAC3: cpu.execute_instruction<0x22>(0xC2094D, 4); return true;
    // src/unknown/C1/C1AAFA.asm:93 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1AAC2.
    case 0xC1AAC6: cpu.execute_instruction<0xC2>(0x0000A5, 2); return true;
    // src/unknown/C1/C1AAFA.asm:94 LDA @VIRTUAL02
    case 0xC1AAC7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1AAFA.asm:94 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1AAC6.
    case 0xC1AAC8: cpu.execute_instruction<0x02>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AAFA.asm:95 END_C_FUNCTION
    case 0xC1AAC9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AAFA.asm:95 END_C_FUNCTION
    case 0xC1AACA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AC00.asm (unresolved).
bool execute_unresolved_c1_c1ac00_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AC00.asm:3 BEGIN_C_FUNCTION
    case 0xC1AACB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AC00.asm:8 END_STACK_VARS
    case 0xC1AACD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AC00.asm:8 END_STACK_VARS
    case 0xC1AACE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AC00.asm:8 END_STACK_VARS
    case 0xC1AACF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AC00.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AACF.
    case 0xC1AAD1: cpu.execute_instruction<0xFF>(0xEE205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AC00.asm:8 END_STACK_VARS
    case 0xC1AAD2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1AC00.asm:9 JSR UNKNOWN_C19441
    case 0xC1AAD3: cpu.execute_instruction<0x20>(0x0094EE, 3); return true;
    // src/unknown/C1/C1AC00.asm:9 JSR UNKNOWN_C19441
    // Overlapping static entry reached from 0xC1AAD1.
    case 0xC1AAD5: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // src/unknown/C1/C1AC00.asm:10 STA @LOCAL01
    case 0xC1AAD6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1AC00.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC1AAD5.
    case 0xC1AAD7: cpu.execute_instruction<0x12>(0x0000C9, 2); return true;
    // src/unknown/C1/C1AC00.asm:11 CMP #0
    case 0xC1AAD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1AC00.asm:11 CMP #0
    // Overlapping static entry reached from 0xC1AAD7.
    case 0xC1AAD9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1AC00.asm:11 CMP #0
    // Overlapping static entry reached from 0xC1AAD8.
    case 0xC1AADA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1AC00.asm:12 BEQ @UNKNOWN0
    case 0xC1AADB: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AC00.asm:13 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL0A
    case 0xC1AADD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x008AAE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AC00.asm:13 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AADD.
    case 0xC1AADF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1AC00.asm:13 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL0A
    case 0xC1AAE0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AC00.asm:13 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL0A
    case 0xC1AAE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AC00.asm:13 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AAE2.
    case 0xC1AAE4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1AC00.asm:13 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL0A
    case 0xC1AAE5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1AC00.asm:14 LDA @LOCAL01
    case 0xC1AAE7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C1/C1AC00.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    case 0xC1AAE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C1/C1AC00.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    case 0xC1AAEA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C1/C1AC00.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    case 0xC1AAEB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C1/C1AC00.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    case 0xC1AAEC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1AC00.asm:16 CLC
    case 0xC1AAED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1AC00.asm:17 ADC #telephone_contact::text
    case 0xC1AAEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/unknown/C1/C1AC00.asm:17 ADC #telephone_contact::text
    // Overlapping static entry reached from 0xC1AAEE.
    case 0xC1AAF0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1AC00.asm:18 CLC
    case 0xC1AAF1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1AC00.asm:19 ADC @VIRTUAL0A
    case 0xC1AAF2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1AC00.asm:20 STA @VIRTUAL0A
    case 0xC1AAF4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AAF6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AAF6.
    case 0xC1AAF8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AAF9: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AAFB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AAFC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AAFE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AB00: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AC00.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB02: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AC00.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB04: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AC00.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB06: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AC00.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB08: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1AC00.asm:23 JSL DISPLAY_TEXT
    case 0xC1AB0A: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/unknown/C1/C1AC00.asm:25 LDA @LOCAL01
    case 0xC1AB0E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AC00.asm:26 END_C_FUNCTION
    case 0xC1AB10: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AC00.asm:26 END_C_FUNCTION
    case 0xC1AB11: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AC4A.asm (unresolved).
bool execute_unresolved_c1_c1ac4a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AC4A.asm:3 BEGIN_C_FUNCTION
    case 0xC1AB12: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    case 0xC1AB14: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    case 0xC1AB15: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    case 0xC1AB16: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    case 0xC1AB17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AB17.
    case 0xC1AB19: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    case 0xC1AB1A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    case 0xC1AB1B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1AC4A.asm:12 STX @LOCAL03
    case 0xC1AB1C: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C1AC4A.asm:12 STX @LOCAL03
    // Overlapping static entry reached from 0xC1AB19.
    case 0xC1AB1D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1AC4A.asm:13 STA @LOCAL02
    case 0xC1AB1E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AB20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x009F82, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AB20.
    case 0xC1AB22: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AB23: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AB25: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AB26: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AB28: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AB29: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AB2B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1AC4A.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC1AB2D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AC4A.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB2F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AC4A.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB31: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AC4A.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB33: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AC4A.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB35: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1AC4A.asm:17 LDA @LOCAL02
    case 0xC1AB37: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1AC4A.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AB39: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1AC4A.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AB3B: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1AC4A.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AB3C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1AC4A.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AB3E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1AC4A.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AB3F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1AC4A.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AB41: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1AC4A.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC1AB43: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AC4A.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AB45: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AC4A.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AB47: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AC4A.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AB49: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AC4A.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AB4B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1AC4A.asm:21 TXA
    case 0xC1AB4D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1AC4A.asm:22 JSL MEMCPY24
    case 0xC1AB4E: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/unknown/C1/C1AC4A.asm:23 LDX @LOCAL03
    case 0xC1AB52: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C1AC4A.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AB54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1AC4A.asm:25 STZ BATTLE_ATTACKER_NAME,X
    case 0xC1AB56: cpu.execute_instruction<0x9E>(0x009F82, 3); return true;
    // src/unknown/C1/C1AC4A.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC1AB59: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AC4A.asm:31 END_C_FUNCTION
    case 0xC1AB5B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AC4A.asm:31 END_C_FUNCTION
    case 0xC1AB5C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AC4A_redirect.asm (unresolved).
bool execute_unresolved_c1_c1ac4a_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AC4A_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DB4D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1AC4A_redirect.asm:5 JSR UNKNOWN_C1AC4A
    case 0xC1DB4F: cpu.execute_instruction<0x20>(0x00AB12, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1AC4A_redirect.asm:6 END_C_FUNCTION
    case 0xC1DB52: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1ACA1.asm (unresolved).
bool execute_unresolved_c1_c1aca1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1ACA1.asm:3 BEGIN_C_FUNCTION
    case 0xC1AB63: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    case 0xC1AB65: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    case 0xC1AB66: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    case 0xC1AB67: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    case 0xC1AB68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AB68.
    case 0xC1AB6A: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    case 0xC1AB6B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    case 0xC1AB6C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1ACA1.asm:12 STX @LOCAL03
    case 0xC1AB6D: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C1ACA1.asm:12 STX @LOCAL03
    // Overlapping static entry reached from 0xC1AB6A.
    case 0xC1AB6E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1ACA1.asm:13 STA @LOCAL02
    case 0xC1AB6F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1AB71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x009F90, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AB71.
    case 0xC1AB73: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1AB74: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1AB76: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1AB77: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1AB79: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1AB7A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1AB7C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1ACA1.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC1AB7E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1ACA1.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB80: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1ACA1.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB82: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1ACA1.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB84: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1ACA1.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB86: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1ACA1.asm:17 LDA @LOCAL02
    case 0xC1AB88: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1ACA1.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AB8A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1ACA1.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AB8C: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1ACA1.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AB8D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1ACA1.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AB8F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1ACA1.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AB90: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1ACA1.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AB92: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1ACA1.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC1AB94: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1ACA1.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AB96: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1ACA1.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AB98: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1ACA1.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AB9A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1ACA1.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AB9C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1ACA1.asm:21 TXA
    case 0xC1AB9E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1ACA1.asm:22 JSL MEMCPY24
    case 0xC1AB9F: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/unknown/C1/C1ACA1.asm:23 LDX @LOCAL03
    case 0xC1ABA3: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C1ACA1.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ABA5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1ACA1.asm:25 STZ BATTLE_TARGET_NAME,X
    case 0xC1ABA7: cpu.execute_instruction<0x9E>(0x009F90, 3); return true;
    // src/unknown/C1/C1ACA1.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC1ABAA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1ACA1.asm:31 END_C_FUNCTION
    case 0xC1ABAC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1ACA1.asm:31 END_C_FUNCTION
    case 0xC1ABAD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1ACA1_redirect.asm (unresolved).
bool execute_unresolved_c1_c1aca1_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1ACA1_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DB53: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1ACA1_redirect.asm:5 JSR UNKNOWN_C1ACA1
    case 0xC1DB55: cpu.execute_instruction<0x20>(0x00AB63, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1ACA1_redirect.asm:6 END_C_FUNCTION
    case 0xC1DB58: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1ACF8.asm (unresolved).
bool execute_unresolved_c1_c1acf8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1ACF8.asm:3 BEGIN_C_FUNCTION
    case 0xC1ABB4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1ACF8.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ABB6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1ACF8.asm:6 STA CITEM
    case 0xC1ABB8: cpu.execute_instruction<0x8D>(0x009F9C, 3); return true;
    // src/unknown/C1/C1ACF8.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xC1ABBB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1ACF8.asm:8 END_C_FUNCTION
    case 0xC1ABBD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1ACF8_redirect.asm (unresolved).
bool execute_unresolved_c1_c1acf8_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1ACF8_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DB59: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1ACF8_redirect.asm:5 JSR UNKNOWN_C1ACF8
    case 0xC1DB5B: cpu.execute_instruction<0x20>(0x00ABB4, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1ACF8_redirect.asm:6 END_C_FUNCTION
    case 0xC1DB5E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AD02.asm (unresolved).
bool execute_unresolved_c1_c1ad02_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AD02.asm:3 BEGIN_C_FUNCTION
    case 0xC1ABBE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1AD02.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ABC0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1AD02.asm:6 LDA CITEM
    case 0xC1ABC2: cpu.execute_instruction<0xAD>(0x009F9C, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AD02.asm:7 END_C_FUNCTION
    case 0xC1ABC5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AD0A.asm (unresolved).
bool execute_unresolved_c1_c1ad0a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AD0A.asm:3 BEGIN_C_FUNCTION
    case 0xC1ABC6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AD0A.asm:6 END_STACK_VARS
    case 0xC1ABC8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AD0A.asm:6 END_STACK_VARS
    case 0xC1ABC9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD0A.asm:6 END_STACK_VARS
    case 0xC1ABCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD0A.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC1ABCA.
    case 0xC1ABCC: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AD0A.asm:6 END_STACK_VARS
    case 0xC1ABCD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AD0A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1ABCE: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AD0A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1ABD0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AD0A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1ABD2: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AD0A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1ABD4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AD0A.asm:8 MOVE_INT @VIRTUAL06, CNUM
    case 0xC1ABD6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AD0A.asm:8 MOVE_INT @VIRTUAL06, CNUM
    case 0xC1ABD8: cpu.execute_instruction<0x8D>(0x009F9D, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AD0A.asm:8 MOVE_INT @VIRTUAL06, CNUM
    case 0xC1ABDB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AD0A.asm:8 MOVE_INT @VIRTUAL06, CNUM
    case 0xC1ABDD: cpu.execute_instruction<0x8D>(0x009F9F, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AD0A.asm:9 END_C_FUNCTION
    case 0xC1ABE0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AD0A.asm:9 END_C_FUNCTION
    case 0xC1ABE1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AD26.asm (unresolved).
bool execute_unresolved_c1_c1ad26_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AD26.asm:3 BEGIN_C_FUNCTION
    case 0xC1ABE2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AD26.asm:6 END_STACK_VARS
    case 0xC1ABE4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AD26.asm:6 END_STACK_VARS
    case 0xC1ABE5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD26.asm:6 END_STACK_VARS
    case 0xC1ABE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD26.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC1ABE6.
    case 0xC1ABE8: cpu.execute_instruction<0xFF>(0x9DAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AD26.asm:6 END_STACK_VARS
    case 0xC1ABE9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AD26.asm:7 MOVE_INT CNUM, @VIRTUAL06
    case 0xC1ABEA: cpu.execute_instruction<0xAD>(0x009F9D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AD26.asm:7 MOVE_INT CNUM, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ABE8.
    case 0xC1ABEC: cpu.execute_instruction<0x9F>(0xAD0685, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AD26.asm:7 MOVE_INT CNUM, @VIRTUAL06
    case 0xC1ABED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AD26.asm:7 MOVE_INT CNUM, @VIRTUAL06
    case 0xC1ABEF: cpu.execute_instruction<0xAD>(0x009F9F, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AD26.asm:7 MOVE_INT CNUM, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ABEC.
    case 0xC1ABF0: cpu.execute_instruction<0x9F>(0x08859F, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AD26.asm:7 MOVE_INT CNUM, @VIRTUAL06
    case 0xC1ABF2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AD26.asm:8 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1ABF4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AD26.asm:8 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1ABF6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AD26.asm:8 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1ABF8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AD26.asm:8 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1ABFA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AD26.asm:9 END_C_FUNCTION
    case 0xC1ABFC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AD26.asm:9 END_C_FUNCTION
    case 0xC1ABFD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AD42.asm (unresolved).
bool execute_unresolved_c1_c1ad42_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AD42.asm:3 BEGIN_C_FUNCTION
    case 0xC1ABFE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AD42.asm:5 END_STACK_VARS
    case 0xC1AC00: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AD42.asm:5 END_STACK_VARS
    case 0xC1AC01: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD42.asm:5 END_STACK_VARS
    case 0xC1AC02: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD42.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AC02.
    case 0xC1AC04: cpu.execute_instruction<0xFF>(0x00225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AD42.asm:5 END_STACK_VARS
    case 0xC1AC05: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1AD42.asm:6 JSL FIND_NEARBY_CHECKABLE_TPT_ENTRY
    case 0xC1AC06: cpu.execute_instruction<0x22>(0xC04500, 4); return true;
    // src/unknown/C1/C1AD42.asm:6 JSL FIND_NEARBY_CHECKABLE_TPT_ENTRY
    // Overlapping static entry reached from 0xC1AC04.
    case 0xC1AC08: cpu.execute_instruction<0x45>(0x0000C0, 2); return true;
    // src/unknown/C1/C1AD42.asm:7 LDA INTERACTING_NPC_ID
    case 0xC1AC0A: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // src/unknown/C1/C1AD42.asm:8 BEQ @UNKNOWN0
    case 0xC1AC0D: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C1/C1AD42.asm:9 LDA INTERACTING_NPC_ID
    case 0xC1AC0F: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // src/unknown/C1/C1AD42.asm:10 CMP #.LOWORD(-1)
    case 0xC1AC12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1AD42.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1AC12.
    case 0xC1AC14: cpu.execute_instruction<0xFF>(0xAD08F0, 4); return true;
    // src/unknown/C1/C1AD42.asm:11 BEQ @UNKNOWN0
    case 0xC1AC15: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C1/C1AD42.asm:12 LDA INTERACTING_NPC_ID
    case 0xC1AC17: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // src/unknown/C1/C1AD42.asm:12 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC1AC14.
    case 0xC1AC18: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1AD42.asm:12 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC1AC18.
    case 0xC1AC19: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C1/C1AD42.asm:13 CMP #.LOWORD(-2)
    case 0xC1AC1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FE, 2); else cpu.execute_instruction<0xC9>(0x00FFFE, 3); return true;
    // src/unknown/C1/C1AD42.asm:13 CMP #.LOWORD(-2)
    // Overlapping static entry reached from 0xC1AC1A.
    case 0xC1AC1C: cpu.execute_instruction<0xFF>(0xE206D0, 4); return true;
    // src/unknown/C1/C1AD42.asm:14 BNE @UNKNOWN1
    case 0xC1AC1D: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C1/C1AD42.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AC1F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1AD42.asm:16 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1AC1C.
    case 0xC1AC20: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C1/C1AD42.asm:17 LDA #0
    case 0xC1AC21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C1/C1AD42.asm:18 BRA @UNKNOWN2
    case 0xC1AC23: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C1/C1AD42.asm:18 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC1AC21.
    case 0xC1AC24: cpu.execute_instruction<0x12>(0x0000AD, 2); return true;
    // src/unknown/C1/C1AD42.asm:20 LDA INTERACTING_NPC_ID
    case 0xC1AC25: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // src/unknown/C1/C1AD42.asm:20 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC1AC24.
    case 0xC1AC26: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1AD42.asm:20 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC1AC26.
    case 0xC1AC27: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/unknown/C1/C1AD42.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1AC28: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/unknown/C1/C1AD42.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1AC2A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/unknown/C1/C1AD42.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1AC2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/unknown/C1/C1AD42.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1AC2C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/unknown/C1/C1AD42.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1AC2D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/unknown/C1/C1AD42.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1AC2E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1AD42.asm:22 TAX
    case 0xC1AC30: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1AD42.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AC31: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1AD42.asm:24 LDA f:NPC_CONFIG_TABLE,X
    case 0xC1AC33: cpu.execute_instruction<0xBF>(0xCF89C1, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AD42.asm:26 END_C_FUNCTION
    case 0xC1AC37: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AD42.asm:26 END_C_FUNCTION
    case 0xC1AC38: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AD7D.asm (unresolved).
bool execute_unresolved_c1_c1ad7d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AD7D.asm:3 BEGIN_C_FUNCTION
    case 0xC1AC39: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AD7D.asm:7 END_STACK_VARS
    case 0xC1AC3B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AD7D.asm:7 END_STACK_VARS
    case 0xC1AC3C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD7D.asm:7 END_STACK_VARS
    case 0xC1AC3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD7D.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AC3D.
    case 0xC1AC3F: cpu.execute_instruction<0xFF>(0x2CAE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AD7D.asm:7 END_STACK_VARS
    case 0xC1AC40: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1AD7D.asm:8 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC1AC41: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C1/C1AD7D.asm:8 LDX GAME_STATE+game_state::leader_y_coord
    // Overlapping static entry reached from 0xC1AC3F.
    case 0xC1AC43: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1AD7D.asm:9 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1AC44: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C1/C1AD7D.asm:10 JSL LOAD_SECTOR_ATTRS
    case 0xC1AC47: cpu.execute_instruction<0x22>(0xC00AB3, 4); return true;
    // src/unknown/C1/C1AD7D.asm:11 TAX
    case 0xC1AC4B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1AD7D.asm:12 STX @LOCAL00
    case 0xC1AC4C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1AD7D.asm:13 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xC1AC4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x000049, 3); return true;
    // src/unknown/C1/C1AD7D.asm:13 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xC1AC4E.
    case 0xC1AC50: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1AD7D.asm:14 JSL GET_EVENT_FLAG
    case 0xC1AC51: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C1/C1AD7D.asm:15 CMP #0
    case 0xC1AC55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1AD7D.asm:15 CMP #0
    // Overlapping static entry reached from 0xC1AC55.
    case 0xC1AC57: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1AD7D.asm:16 BEQ @UNKNOWN0
    case 0xC1AC58: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C1/C1AD7D.asm:17 LDX @LOCAL00
    case 0xC1AC5A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1AD7D.asm:18 TXA
    case 0xC1AC5C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1AD7D.asm:19 AND #$0007
    case 0xC1AC5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C1/C1AD7D.asm:19 AND #$0007
    // Overlapping static entry reached from 0xC1AC5D.
    case 0xC1AC5F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1AD7D.asm:20 BNE @UNKNOWN0
    case 0xC1AC60: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1AD7D.asm:21 LDA #ITEM::BICYCLE
    case 0xC1AC62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B0, 2); else cpu.execute_instruction<0xA9>(0x0000B0, 3); return true;
    // src/unknown/C1/C1AD7D.asm:21 LDA #ITEM::BICYCLE
    // Overlapping static entry reached from 0xC1AC62.
    case 0xC1AC64: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1AD7D.asm:22 BRA @UNKNOWN1
    case 0xC1AC65: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C1/C1AD7D.asm:24 LDX @LOCAL00
    case 0xC1AC67: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1AD7D.asm:25 TXA
    case 0xC1AC69: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1AD7D.asm:26 XBA
    case 0xC1AC6A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C1/C1AD7D.asm:27 AND #$00FF
    case 0xC1AC6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AD7D.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1AC6B.
    case 0xC1AC6D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AD7D.asm:29 END_C_FUNCTION
    case 0xC1AC6E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AD7D.asm:29 END_C_FUNCTION
    case 0xC1AC6F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1B5B6-jp.asm (unresolved).
bool execute_unresolved_c1_c1b5b6_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1B47D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:16 END_STACK_VARS
    case 0xC1B47F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:16 END_STACK_VARS
    case 0xC1B480: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:16 END_STACK_VARS
    case 0xC1B481: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D7, 2); else cpu.execute_instruction<0x69>(0x00FFD7, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC1B481.
    case 0xC1B483: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:16 END_STACK_VARS
    case 0xC1B484: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B485: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:18 LDA #$00FF
    case 0xC1B487: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:19 STA @VIRTUAL01
    case 0xC1B489: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:19 STA @VIRTUAL01
    // Overlapping static entry reached from 0xC1B487.
    case 0xC1B48A: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1B48B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:20 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1B48A.
    case 0xC1B48C: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:21 LDA #0
    case 0xC1B48D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:21 LDA #0
    // Overlapping static entry reached from 0xC1B48D.
    case 0xC1B48F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:22 STA @VIRTUAL02
    case 0xC1B490: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:24 JSR UNKNOWN_C1C3B6
    case 0xC1B492: cpu.execute_instruction<0x20>(0x00C21D, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:26 CMP #1
    case 0xC1B495: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:26 CMP #1
    // Overlapping static entry reached from 0xC1B495.
    case 0xC1B497: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:27 BNE @UNKNOWN2
    case 0xC1B498: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:28 LDA @VIRTUAL01
    case 0xC1B49A: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:29 AND #$00FF
    case 0xC1B49C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1B49C.
    case 0xC1B49E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:30 BEQL @UNKNOWN36
    case 0xC1B49F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:30 BEQL @UNKNOWN36
    case 0xC1B4A1: cpu.execute_instruction<0x4C>(0x00B9B3, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:31 JSR UNKNOWN_C1C373
    case 0xC1B4A4: cpu.execute_instruction<0x20>(0x00C1D5, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:32 DEC
    case 0xC1B4A7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:33 CLC
    case 0xC1B4A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:34 ADC #.LOWORD(GAME_STATE)
    case 0xC1B4A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:34 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1B4A9.
    case 0xC1B4AB: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:35 TAX
    case 0xC1B4AC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B4AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:37 LDA a:game_state::party_members,X
    case 0xC1B4AF: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:38 STA @LOCAL09
    case 0xC1B4B2: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC1B4B4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:40 LDA @LOCAL09
    case 0xC1B4B6: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:41 AND #$00FF
    case 0xC1B4B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC1B4B8.
    case 0xC1B4BA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:42 JSL UNKNOWN_C1C853
    case 0xC1B4BB: cpu.execute_instruction<0x22>(0xC1C67E, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:43 BRA @UNKNOWN3
    case 0xC1B4BF: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:46 LDA #0
    case 0xC1B4C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:46 LDA #0
    // Overlapping static entry reached from 0xC1B4C1.
    case 0xC1B4C3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:47 JSR UNKNOWN_C193E7
    case 0xC1B4C4: cpu.execute_instruction<0x20>(0x00949C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:48 LOADPTR UNKNOWN_C1C853, @LOCAL00
    case 0xC1B4C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00C67E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:48 LOADPTR UNKNOWN_C1C853, @LOCAL00
    // Overlapping static entry reached from 0xC1B4C7.
    case 0xC1B4C9: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:48 LOADPTR UNKNOWN_C1C853, @LOCAL00
    case 0xC1B4CA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:48 LOADPTR UNKNOWN_C1C853, @LOCAL00
    // Overlapping static entry reached from 0xC1B4C9.
    case 0xC1B4CB: cpu.execute_instruction<0x0E>(0x00C1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:48 LOADPTR UNKNOWN_C1C853, @LOCAL00
    case 0xC1B4CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:48 LOADPTR UNKNOWN_C1C853, @LOCAL00
    // Overlapping static entry reached from 0xC1B4CC.
    case 0xC1B4CE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:48 LOADPTR UNKNOWN_C1C853, @LOCAL00
    case 0xC1B4CF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:49 LOADPTR UNKNOWN_C1C367, @LOCAL01
    case 0xC1B4D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x00C1C9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:49 LOADPTR UNKNOWN_C1C367, @LOCAL01
    // Overlapping static entry reached from 0xC1B4D1.
    case 0xC1B4D3: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:49 LOADPTR UNKNOWN_C1C367, @LOCAL01
    case 0xC1B4D4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:49 LOADPTR UNKNOWN_C1C367, @LOCAL01
    // Overlapping static entry reached from 0xC1B4D3.
    case 0xC1B4D5: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:49 LOADPTR UNKNOWN_C1C367, @LOCAL01
    case 0xC1B4D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:49 LOADPTR UNKNOWN_C1C367, @LOCAL01
    // Overlapping static entry reached from 0xC1B4D5.
    case 0xC1B4D7: cpu.execute_instruction<0xC1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:49 LOADPTR UNKNOWN_C1C367, @LOCAL01
    // Overlapping static entry reached from 0xC1B4D6.
    case 0xC1B4D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:49 LOADPTR UNKNOWN_C1C367, @LOCAL01
    case 0xC1B4D9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:50 LDX #1
    case 0xC1B4DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:50 LDX #1
    // Overlapping static entry reached from 0xC1B4DB.
    case 0xC1B4DD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:51 LDA #0
    case 0xC1B4DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:51 LDA #0
    // Overlapping static entry reached from 0xC1B4DE.
    case 0xC1B4E0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:52 JSR CHAR_SELECT_PROMPT
    case 0xC1B4E1: cpu.execute_instruction<0x20>(0x002EE7, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B4E4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:54 STA @LOCAL09
    case 0xC1B4E6: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:55 JSR UNKNOWN_C19437
    case 0xC1B4E8: cpu.execute_instruction<0x20>(0x0094E5, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:58 LDA @LOCAL09
    case 0xC1B4EB: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:59 AND #$00FF
    case 0xC1B4ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC1B4ED.
    case 0xC1B4EF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:60 BEQL @UNKNOWN36
    case 0xC1B4F0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:60 BEQL @UNKNOWN36
    case 0xC1B4F2: cpu.execute_instruction<0x4C>(0x00B9B3, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B4F5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:62 LDA #$00FF
    case 0xC1B4F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:63 STA @VIRTUAL01
    case 0xC1B4F9: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:63 STA @VIRTUAL01
    // Overlapping static entry reached from 0xC1B4F7.
    case 0xC1B4FA: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC1B4FB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:65 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1B4FA.
    case 0xC1B4FC: cpu.execute_instruction<0x20>(0x0001A9, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:66 LDA #1
    case 0xC1B4FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:66 LDA #1
    // Overlapping static entry reached from 0xC1B4FD.
    case 0xC1B4FF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:67 JSR SET_WINDOW_FOCUS
    case 0xC1B500: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:68 LDA @VIRTUAL01
    case 0xC1B503: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:69 AND #$00FF
    case 0xC1B505: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC1B505.
    case 0xC1B507: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:70 TAY
    case 0xC1B508: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:71 CPY #$00FF
    case 0xC1B509: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:71 CPY #$00FF
    // Overlapping static entry reached from 0xC1B509.
    case 0xC1B50B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:72 BEQ @UNKNOWN6
    case 0xC1B50C: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:73 LDX #0
    case 0xC1B50E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:73 LDX #0
    // Overlapping static entry reached from 0xC1B50E.
    case 0xC1B510: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:74 TYA
    case 0xC1B511: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:75 JSR UNKNOWN_C1CA72
    case 0xC1B512: cpu.execute_instruction<0x20>(0x00C869, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:76 JSR PRINT_MENU_ITEMS
    case 0xC1B515: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:78 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1B518: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E3, 2); else cpu.execute_instruction<0xA9>(0x00C6E3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:78 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1B518.
    case 0xC1B51A: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:78 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1B51B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:78 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1B51A.
    case 0xC1B51C: cpu.execute_instruction<0x0E>(0x00C1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:78 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1B51D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:78 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1B51D.
    case 0xC1B51F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:78 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1B520: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:79 JSR UNKNOWN_C11F5A
    case 0xC1B522: cpu.execute_instruction<0x20>(0x00267B, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:80 LDA #1
    case 0xC1B525: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:80 LDA #1
    // Overlapping static entry reached from 0xC1B525.
    case 0xC1B527: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:81 JSR SELECTION_MENU
    case 0xC1B528: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B52B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:83 STA @VIRTUAL01
    case 0xC1B52D: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:84 JSR UNKNOWN_C11F8A
    case 0xC1B52F: cpu.execute_instruction<0x20>(0x0026AB, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:86 LDA @VIRTUAL01
    case 0xC1B532: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:87 AND #$00FF
    case 0xC1B534: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC1B534.
    case 0xC1B536: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:88 BEQL @UNKNOWN12
    case 0xC1B537: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:88 BEQL @UNKNOWN12
    case 0xC1B539: cpu.execute_instruction<0x4C>(0x00B659, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:90 LDA @VIRTUAL01
    case 0xC1B53C: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:91 AND #$00FF
    case 0xC1B53E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:91 AND #$00FF
    // Overlapping static entry reached from 0xC1B53E.
    case 0xC1B540: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:92 TAY
    case 0xC1B541: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:93 STY @LOCAL08
    case 0xC1B542: cpu.execute_instruction<0x84>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:94 LDX #6
    case 0xC1B544: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:94 LDX #6
    // Overlapping static entry reached from 0xC1B544.
    case 0xC1B546: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:95 TYA
    case 0xC1B547: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:96 JSR UNKNOWN_C1CA72
    case 0xC1B548: cpu.execute_instruction<0x20>(0x00C869, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:99 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B54B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009A06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:99 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B54B.
    case 0xC1B54D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:99 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B54E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:99 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B550: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:99 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B550.
    case 0xC1B552: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:99 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B553: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:100 LDY @LOCAL08
    case 0xC1B555: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:101 TYA
    case 0xC1B557: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:102 STA @VIRTUAL04
    case 0xC1B558: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:103 ASL
    case 0xC1B55A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:104 ADC @VIRTUAL04
    case 0xC1B55B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:105 ASL
    case 0xC1B55D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:106 ADC @VIRTUAL04
    case 0xC1B55E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:107 ASL
    case 0xC1B560: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:108 ADC @VIRTUAL04
    case 0xC1B561: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:109 STA @LOCAL07
    case 0xC1B563: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:110 INC
    case 0xC1B565: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:111 INC
    case 0xC1B566: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:112 INC
    case 0xC1B567: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:113 INC
    case 0xC1B568: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:114 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B569: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:114 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B56B: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:114 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B56D: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:114 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B56F: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:115 CLC
    case 0xC1B571: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:116 ADC @VIRTUAL0A
    case 0xC1B572: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:117 STA @VIRTUAL0A
    case 0xC1B574: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:118 LDA [@VIRTUAL0A]
    case 0xC1B576: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:119 TAY
    case 0xC1B578: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:120 STY @LOCAL06
    case 0xC1B579: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:121 LDA @LOCAL09
    case 0xC1B57B: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:122 AND #$00FF
    case 0xC1B57D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:122 AND #$00FF
    // Overlapping static entry reached from 0xC1B57D.
    case 0xC1B57F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:123 TAX
    case 0xC1B580: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:124 STX @LOCAL08
    case 0xC1B581: cpu.execute_instruction<0x86>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:125 TXA
    case 0xC1B583: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:126 DEC
    case 0xC1B584: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:127 LDY #.SIZEOF(char_struct)
    case 0xC1B585: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:127 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B585.
    case 0xC1B587: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:128 JSL MULT168
    case 0xC1B588: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:130 PHA
    case 0xC1B58C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:131 LDY @LOCAL06
    case 0xC1B58D: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:132 TYA
    case 0xC1B58F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:133 STA @VIRTUAL04
    case 0xC1B590: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:134 ASL
    case 0xC1B592: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:135 ADC @VIRTUAL04
    case 0xC1B593: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:136 ASL
    case 0xC1B595: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:137 ASL
    case 0xC1B596: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:138 TAX
    case 0xC1B597: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:139 INX
    case 0xC1B598: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:140 INX
    case 0xC1B599: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:141 INX
    case 0xC1B59A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:142 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1B59B: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:143 AND #$00FF
    case 0xC1B59F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:143 AND #$00FF
    // Overlapping static entry reached from 0xC1B59F.
    case 0xC1B5A1: cpu.execute_instruction<0x00>(0x0000FA, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:144 PLX
    case 0xC1B5A2: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:145 CMP PARTY_CHARACTERS+char_struct::current_pp,X
    case 0xC1B5A3: cpu.execute_instruction<0xDD>(0x009CC9, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:146 BLTEQ @UNKNOWN9
    case 0xC1B5A6: cpu.execute_instruction<0x90>(0x000022, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:146 BLTEQ @UNKNOWN9
    case 0xC1B5A8: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:147 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1B5AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:147 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1B5AA.
    case 0xC1B5AC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:147 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1B5AD: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1B5B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0038E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    // Overlapping static entry reached from 0xC1B5B0.
    case 0xC1B5B2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1B5B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1B5B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    // Overlapping static entry reached from 0xC1B5B5.
    case 0xC1B5B7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1B5B8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1B5BA: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:150 JSR CLOSE_FOCUS_WINDOW
    case 0xC1B5BE: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B5C1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:152 LDA #0
    case 0xC1B5C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:153 STA @VIRTUAL00
    case 0xC1B5C5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:153 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1B5C3.
    case 0xC1B5C6: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:154 JMP @UNKNOWN13
    case 0xC1B5C7: cpu.execute_instruction<0x4C>(0x00B65F, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:157 LDA @LOCAL07
    case 0xC1B5CA: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:158 INC
    case 0xC1B5CC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:159 INC
    case 0xC1B5CD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:160 CLC
    case 0xC1B5CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:161 ADC @VIRTUAL06
    case 0xC1B5CF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:162 STA @VIRTUAL06
    case 0xC1B5D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:163 LDA [@VIRTUAL06]
    case 0xC1B5D3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:164 AND #$00FF
    case 0xC1B5D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:164 AND #$00FF
    // Overlapping static entry reached from 0xC1B5D5.
    case 0xC1B5D7: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:165 CMP #8
    case 0xC1B5D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:165 CMP #8
    // Overlapping static entry reached from 0xC1B5D8.
    case 0xC1B5DA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:166 BNE @UNKNOWN11
    case 0xC1B5DB: cpu.execute_instruction<0xD0>(0x000070, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:167 LDA GAME_STATE+game_state::party_npc_1
    case 0xC1B5DD: cpu.execute_instruction<0xAD>(0x009AEB, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:168 AND #$00FF
    case 0xC1B5E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:168 AND #$00FF
    // Overlapping static entry reached from 0xC1B5E0.
    case 0xC1B5E2: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:169 CMP #PARTY_MEMBER::DUNGEON_MAN
    case 0xC1B5E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:169 CMP #PARTY_MEMBER::DUNGEON_MAN
    // Overlapping static entry reached from 0xC1B5E3.
    case 0xC1B5E5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:170 BEQ @UNKNOWN10
    case 0xC1B5E6: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:171 LDA GAME_STATE+game_state::party_npc_2
    case 0xC1B5E8: cpu.execute_instruction<0xAD>(0x009AEC, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:172 AND #$00FF
    case 0xC1B5EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC1B5EB.
    case 0xC1B5ED: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:173 CMP #PARTY_MEMBER::DUNGEON_MAN
    case 0xC1B5EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:173 CMP #PARTY_MEMBER::DUNGEON_MAN
    // Overlapping static entry reached from 0xC1B5EE.
    case 0xC1B5F0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:174 BEQ @UNKNOWN10
    case 0xC1B5F1: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:175 LDA #EVENT_FLAG::FLG_SYS_DISTLPT
    case 0xC1B5F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F2, 2); else cpu.execute_instruction<0xA9>(0x0002F2, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:175 LDA #EVENT_FLAG::FLG_SYS_DISTLPT
    // Overlapping static entry reached from 0xC1B5F3.
    case 0xC1B5F5: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:176 JSL GET_EVENT_FLAG
    case 0xC1B5F6: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:177 CMP #0
    case 0xC1B5FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:177 CMP #0
    // Overlapping static entry reached from 0xC1B5FA.
    case 0xC1B5FC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:178 BNE @UNKNOWN10
    case 0xC1B5FD: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:179 LDX GAME_STATE+game_state::walking_style
    case 0xC1B5FF: cpu.execute_instruction<0xAE>(0x009B34, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:180 CPX #WALKING_STYLE::LADDER
    case 0xC1B602: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:180 CPX #WALKING_STYLE::LADDER
    // Overlapping static entry reached from 0xC1B602.
    case 0xC1B604: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:181 BEQ @UNKNOWN10
    case 0xC1B605: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:182 CPX #WALKING_STYLE::ROPE
    case 0xC1B607: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:182 CPX #WALKING_STYLE::ROPE
    // Overlapping static entry reached from 0xC1B607.
    case 0xC1B609: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:183 BEQ @UNKNOWN10
    case 0xC1B60A: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:184 CPX #WALKING_STYLE::ESCALATOR
    case 0xC1B60C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000C, 2); else cpu.execute_instruction<0xE0>(0x00000C, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:184 CPX #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC1B60C.
    case 0xC1B60E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:185 BEQ @UNKNOWN10
    case 0xC1B60F: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:186 CPX #WALKING_STYLE::STAIRS
    case 0xC1B611: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000D, 2); else cpu.execute_instruction<0xE0>(0x00000D, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:186 CPX #WALKING_STYLE::STAIRS
    // Overlapping static entry reached from 0xC1B611.
    case 0xC1B613: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:187 BEQ @UNKNOWN10
    case 0xC1B614: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:188 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC1B616: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:189 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1B619: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:190 JSL LOAD_SECTOR_ATTRS
    case 0xC1B61C: cpu.execute_instruction<0x22>(0xC00AB3, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:191 AND #MAP_SECTOR_CONFIG::CANNOT_TELEPORT
    case 0xC1B620: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:191 AND #MAP_SECTOR_CONFIG::CANNOT_TELEPORT
    // Overlapping static entry reached from 0xC1B620.
    case 0xC1B622: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:192 BNE @UNKNOWN10
    case 0xC1B623: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:193 JSR UNKNOWN_C1AAFA
    case 0xC1B625: cpu.execute_instruction<0x20>(0x00A9D0, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:194 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B628: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:195 STA @VIRTUAL00
    case 0xC1B62A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:196 BRA @UNKNOWN13
    case 0xC1B62C: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:199 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1B62E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:199 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1B62E.
    case 0xC1B630: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:199 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1B631: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    case 0xC1B634: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x002889, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    // Overlapping static entry reached from 0xC1B634.
    case 0xC1B636: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    case 0xC1B637: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    case 0xC1B639: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    // Overlapping static entry reached from 0xC1B639.
    case 0xC1B63B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    case 0xC1B63C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    case 0xC1B63E: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:201 JSR CLOSE_FOCUS_WINDOW
    case 0xC1B642: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:202 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B645: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:203 LDA #0
    case 0xC1B647: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:204 STA @VIRTUAL00
    case 0xC1B649: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:204 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1B647.
    case 0xC1B64A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:205 BRA @UNKNOWN13
    case 0xC1B64B: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:207 LDX @LOCAL08
    case 0xC1B64D: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:208 TYA
    case 0xC1B64F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:209 JSR DETERMINE_TARGETTING
    case 0xC1B650: cpu.execute_instruction<0x20>(0x00AC70, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:210 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B653: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:211 STA @VIRTUAL00
    case 0xC1B655: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:212 BRA @UNKNOWN13
    case 0xC1B657: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:214 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B659: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:215 LDA #1
    case 0xC1B65B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:216 STA @VIRTUAL00
    case 0xC1B65D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:216 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1B65B.
    case 0xC1B65E: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:218 REP #PROC_FLAGS::ACCUM8
    case 0xC1B65F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:219 LDA @VIRTUAL00
    case 0xC1B661: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:220 AND #$00FF
    case 0xC1B663: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:220 AND #$00FF
    // Overlapping static entry reached from 0xC1B663.
    case 0xC1B665: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:221 BEQL @UNKNOWN5
    case 0xC1B666: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:221 BEQL @UNKNOWN5
    case 0xC1B668: cpu.execute_instruction<0x4C>(0x00B4FB, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:222 LDA #WINDOW::UNKNOWN04
    case 0xC1B66B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:222 LDA #WINDOW::UNKNOWN04
    // Overlapping static entry reached from 0xC1B66B.
    case 0xC1B66D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:223 JSR CLOSE_WINDOW
    case 0xC1B66E: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:224 LDA @VIRTUAL01
    case 0xC1B671: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:225 AND #$00FF
    case 0xC1B673: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:225 AND #$00FF
    // Overlapping static entry reached from 0xC1B673.
    case 0xC1B675: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:226 BEQL @UNKNOWN0
    case 0xC1B676: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:226 BEQL @UNKNOWN0
    case 0xC1B678: cpu.execute_instruction<0x4C>(0x00B492, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:227 LDA @LOCAL09
    case 0xC1B67B: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:228 AND #$00FF
    case 0xC1B67D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:228 AND #$00FF
    // Overlapping static entry reached from 0xC1B67D.
    case 0xC1B67F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:229 STA @VIRTUAL04
    case 0xC1B680: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:230 STA @LOCAL05
    case 0xC1B682: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:231 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B684: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009A06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:231 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B684.
    case 0xC1B686: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:231 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B687: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:231 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B689: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:231 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B689.
    case 0xC1B68B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:231 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B68C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:232 LDA @VIRTUAL01
    case 0xC1B68E: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:233 AND #$00FF
    case 0xC1B690: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:233 AND #$00FF
    // Overlapping static entry reached from 0xC1B690.
    case 0xC1B692: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:234 STA @VIRTUAL04
    case 0xC1B693: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:235 ASL
    case 0xC1B695: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:236 ADC @VIRTUAL04
    case 0xC1B696: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:237 ASL
    case 0xC1B698: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:238 ADC @VIRTUAL04
    case 0xC1B699: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:239 ASL
    case 0xC1B69B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:240 ADC @VIRTUAL04
    case 0xC1B69C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:241 STA @VIRTUAL02
    case 0xC1B69E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:242 LDY #1
    case 0xC1B6A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:242 LDY #1
    // Overlapping static entry reached from 0xC1B6A0.
    case 0xC1B6A2: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:243 LDA @VIRTUAL02
    case 0xC1B6A3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:244 INC
    case 0xC1B6A5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:245 INC
    case 0xC1B6A6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:246 INC
    case 0xC1B6A7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:247 INC
    case 0xC1B6A8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B6A9: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B6AB: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B6AD: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B6AF: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:249 CLC
    case 0xC1B6B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:250 ADC @VIRTUAL0A
    case 0xC1B6B2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:251 STA @VIRTUAL0A
    case 0xC1B6B4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:252 LDA [@VIRTUAL0A]
    case 0xC1B6B6: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:253 STA @VIRTUAL04
    case 0xC1B6B8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:254 ASL
    case 0xC1B6BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:255 ADC @VIRTUAL04
    case 0xC1B6BB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:256 ASL
    case 0xC1B6BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:257 ASL
    case 0xC1B6BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:258 TAX
    case 0xC1B6BF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:259 INX
    case 0xC1B6C0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:260 INX
    case 0xC1B6C1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:261 INX
    case 0xC1B6C2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:262 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1B6C3: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:263 AND #$00FF
    case 0xC1B6C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:263 AND #$00FF
    // Overlapping static entry reached from 0xC1B6C7.
    case 0xC1B6C9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:264 TAX
    case 0xC1B6CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:265 LDA @LOCAL05
    case 0xC1B6CB: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:266 STA @VIRTUAL04
    case 0xC1B6CD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:267 JSL UNKNOWN_C3ED2C
    case 0xC1B6CF: cpu.execute_instruction<0x22>(0xC3E8F2, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:268 LDA @VIRTUAL02
    case 0xC1B6D3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:269 INC
    case 0xC1B6D5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:270 INC
    case 0xC1B6D6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:271 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B6D7: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:271 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B6D9: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:271 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B6DB: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:271 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B6DD: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:272 CLC
    case 0xC1B6DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:273 ADC @VIRTUAL0A
    case 0xC1B6E0: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:274 STA @VIRTUAL0A
    case 0xC1B6E2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:275 LDA [@VIRTUAL0A]
    case 0xC1B6E4: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:276 AND #$00FF
    case 0xC1B6E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:276 AND #$00FF
    // Overlapping static entry reached from 0xC1B6E6.
    case 0xC1B6E8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:277 CMP #8
    case 0xC1B6E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:277 CMP #8
    // Overlapping static entry reached from 0xC1B6E9.
    case 0xC1B6EB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:278 BNE @UNKNOWN16
    case 0xC1B6EC: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:279 LDA @VIRTUAL02
    case 0xC1B6EE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:280 INC
    case 0xC1B6F0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:281 CLC
    case 0xC1B6F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:282 ADC @VIRTUAL06
    case 0xC1B6F2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:283 STA @VIRTUAL06
    case 0xC1B6F4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:284 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B6F6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:285 LDA [@VIRTUAL06]
    case 0xC1B6F8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:286 STA @LOCAL00
    case 0xC1B6FA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:287 LDA @VIRTUAL00
    case 0xC1B6FC: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:288 JSL SET_TELEPORT_STATE
    case 0xC1B6FE: cpu.execute_instruction<0x22>(0xC0DD1B, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:289 JMP @UNKNOWN18
    case 0xC1B702: cpu.execute_instruction<0x4C>(0x00B79C, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:292 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC1B705: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x00A1AE, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:292 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC1B705.
    case 0xC1B707: cpu.execute_instruction<0xA1>(0x00008D, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:293 STA CURRENT_ATTACKER
    case 0xC1B708: cpu.execute_instruction<0x8D>(0x00AB72, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:293 STA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC1B707.
    case 0xC1B709: cpu.execute_instruction<0x72>(0x0000AB, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:294 TAX
    case 0xC1B70B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:295 LDA @VIRTUAL04
    case 0xC1B70C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:296 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B70E: cpu.execute_instruction<0x22>(0xC2B8D9, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:297 LDX #.SIZEOF(char_struct::name)
    case 0xC1B712: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:297 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B712.
    case 0xC1B714: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:298 LDA @VIRTUAL04
    case 0xC1B715: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:299 DEC
    case 0xC1B717: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:300 LDY #.SIZEOF(char_struct)
    case 0xC1B718: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:300 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B718.
    case 0xC1B71A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:301 JSL MULT168
    case 0xC1B71B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:302 CLC
    case 0xC1B71F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:303 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B720: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:303 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B720.
    case 0xC1B722: cpu.execute_instruction<0x9C>(0x001220, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:304 JSR UNKNOWN_C1AC4A
    case 0xC1B723: cpu.execute_instruction<0x20>(0x00AB12, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:304 JSR UNKNOWN_C1AC4A
    // Overlapping static entry reached from 0xC1B722.
    case 0xC1B725: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:305 LDA @VIRTUAL00
    case 0xC1B726: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:306 AND #$00FF
    case 0xC1B728: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:306 AND #$00FF
    // Overlapping static entry reached from 0xC1B728.
    case 0xC1B72A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:307 TAY
    case 0xC1B72B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:308 CPY #$00FF
    case 0xC1B72C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:308 CPY #$00FF
    // Overlapping static entry reached from 0xC1B72C.
    case 0xC1B72E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:309 BEQ @UNKNOWN17
    case 0xC1B72F: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:310 LDX #4
    case 0xC1B731: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:310 LDX #4
    // Overlapping static entry reached from 0xC1B731.
    case 0xC1B733: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:311 TYA
    case 0xC1B734: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:312 DEC
    case 0xC1B735: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:313 LDY #.SIZEOF(char_struct)
    case 0xC1B736: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:313 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B736.
    case 0xC1B738: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:314 JSL MULT168
    case 0xC1B739: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:315 CLC
    case 0xC1B73D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:316 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B73E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:316 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B73E.
    case 0xC1B740: cpu.execute_instruction<0x9C>(0x006320, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:317 JSR UNKNOWN_C1ACA1
    case 0xC1B741: cpu.execute_instruction<0x20>(0x00AB63, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:317 JSR UNKNOWN_C1ACA1
    // Overlapping static entry reached from 0xC1B740.
    case 0xC1B743: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:319 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B744: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:320 LDA @VIRTUAL01
    case 0xC1B746: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:321 JSR UNKNOWN_C1ACF8
    case 0xC1B748: cpu.execute_instruction<0x20>(0x00ABB4, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:323 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1B74B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:323 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1B74B.
    case 0xC1B74D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:323 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1B74E: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:324 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B751: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:324 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B751.
    case 0xC1B753: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:324 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B754: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:324 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B756: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:324 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B756.
    case 0xC1B758: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:324 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B759: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:325 LDA @VIRTUAL01
    case 0xC1B75B: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:326 AND #$00FF
    case 0xC1B75D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:326 AND #$00FF
    // Overlapping static entry reached from 0xC1B75D.
    case 0xC1B75F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:327 STA @VIRTUAL04
    case 0xC1B760: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:328 ASL
    case 0xC1B762: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:329 ADC @VIRTUAL04
    case 0xC1B763: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:330 ASL
    case 0xC1B765: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:331 ADC @VIRTUAL04
    case 0xC1B766: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:332 ASL
    case 0xC1B768: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:333 ADC @VIRTUAL04
    case 0xC1B769: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:334 TAX
    case 0xC1B76B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:335 INX
    case 0xC1B76C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:336 INX
    case 0xC1B76D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:337 INX
    case 0xC1B76E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:338 INX
    case 0xC1B76F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:339 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1B770: cpu.execute_instruction<0xBF>(0xD59A06, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:340 STA @VIRTUAL04
    case 0xC1B774: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:341 ASL
    case 0xC1B776: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:342 ADC @VIRTUAL04
    case 0xC1B777: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:343 ASL
    case 0xC1B779: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:344 ASL
    case 0xC1B77A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:345 INC
    case 0xC1B77B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:346 INC
    case 0xC1B77C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:347 INC
    case 0xC1B77D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:348 INC
    case 0xC1B77E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:349 CLC
    case 0xC1B77F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:350 ADC @VIRTUAL0A
    case 0xC1B780: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:351 STA @VIRTUAL0A
    case 0xC1B782: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B784: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B784.
    case 0xC1B786: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B787: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B789: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B78A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B78C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B78E: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B790: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B792: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B794: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B796: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:354 JSL DISPLAY_TEXT
    case 0xC1B798: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:357 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1B79C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:357 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B79C.
    case 0xC1B79E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:357 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1B79F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:357 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1B7A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:357 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B7A1.
    case 0xC1B7A3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:357 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1B7A4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:358 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC1B7A6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:358 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC1B7A8: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:358 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC1B7AA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:358 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC1B7AC: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:359 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1B7AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009A06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:359 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B7AE.
    case 0xC1B7B0: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:359 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1B7B1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:359 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1B7B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:359 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B7B3.
    case 0xC1B7B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:359 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1B7B6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:360 LDA @VIRTUAL01
    case 0xC1B7B8: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:361 AND #$00FF
    case 0xC1B7BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:361 AND #$00FF
    // Overlapping static entry reached from 0xC1B7BA.
    case 0xC1B7BC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:362 STA @VIRTUAL04
    case 0xC1B7BD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:363 ASL
    case 0xC1B7BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:364 ADC @VIRTUAL04
    case 0xC1B7C0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:365 ASL
    case 0xC1B7C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:366 ADC @VIRTUAL04
    case 0xC1B7C3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:367 ASL
    case 0xC1B7C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:368 ADC @VIRTUAL04
    case 0xC1B7C6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:369 INC
    case 0xC1B7C8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:370 INC
    case 0xC1B7C9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:371 INC
    case 0xC1B7CA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:372 INC
    case 0xC1B7CB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:373 CLC
    case 0xC1B7CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:374 ADC @VIRTUAL0A
    case 0xC1B7CD: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:375 STA @VIRTUAL0A
    case 0xC1B7CF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:376 STA @LOCAL03
    case 0xC1B7D1: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:377 LDA @VIRTUAL0A+2
    case 0xC1B7D3: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:378 STA @LOCAL03+2
    case 0xC1B7D5: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:379 LDA [@VIRTUAL0A]
    case 0xC1B7D7: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:380 STA @VIRTUAL04
    case 0xC1B7D9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:381 ASL
    case 0xC1B7DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:382 ADC @VIRTUAL04
    case 0xC1B7DC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:383 ASL
    case 0xC1B7DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:384 ASL
    case 0xC1B7DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:385 CLC
    case 0xC1B7E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:386 ADC #8
    case 0xC1B7E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:386 ADC #8
    // Overlapping static entry reached from 0xC1B7E1.
    case 0xC1B7E3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:387 CLC
    case 0xC1B7E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:388 ADC @VIRTUAL06
    case 0xC1B7E5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:389 STA @VIRTUAL06
    case 0xC1B7E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B7E9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B7E9.
    case 0xC1B7EB: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B7EC: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B7EE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B7EF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B7F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B7F3: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:391 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B7F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:391 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B7F5.
    case 0xC1B7F7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:391 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B7F8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:391 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B7FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:391 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B7FA.
    case 0xC1B7FC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:391 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B7FD: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:392 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B7FF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:392 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B801: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:392 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B803: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:392 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B805: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:392 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B807: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:393 BEQL @UNKNOWN35
    case 0xC1B809: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:393 BEQL @UNKNOWN35
    case 0xC1B80B: cpu.execute_instruction<0x4C>(0x00B9AE, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:394 LDX #.LOWORD(BATTLERS_TABLE) + (1 * .SIZEOF(battler))
    case 0xC1B80E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FC, 2); else cpu.execute_instruction<0xA2>(0x00A1FC, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:394 LDX #.LOWORD(BATTLERS_TABLE) + (1 * .SIZEOF(battler))
    // Overlapping static entry reached from 0xC1B80E.
    case 0xC1B810: cpu.execute_instruction<0xA1>(0x00008E, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:395 STX CURRENT_TARGET
    case 0xC1B811: cpu.execute_instruction<0x8E>(0x00AB74, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:395 STX CURRENT_TARGET
    // Overlapping static entry reached from 0xC1B810.
    case 0xC1B812: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:396 LDA @VIRTUAL00
    case 0xC1B814: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:397 AND #$00FF
    case 0xC1B816: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:397 AND #$00FF
    // Overlapping static entry reached from 0xC1B816.
    case 0xC1B818: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:398 TAY
    case 0xC1B819: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:399 CPY #$00FF
    case 0xC1B81A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:399 CPY #$00FF
    // Overlapping static entry reached from 0xC1B81A.
    case 0xC1B81C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:400 BNEL @UNKNOWN30
    case 0xC1B81D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:400 BNEL @UNKNOWN30
    case 0xC1B81F: cpu.execute_instruction<0x4C>(0x00B918, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:401 LDY #0
    case 0xC1B822: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:401 LDY #0
    // Overlapping static entry reached from 0xC1B822.
    case 0xC1B824: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:402 STY @LOCAL02
    case 0xC1B825: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:403 JMP @UNKNOWN27
    case 0xC1B827: cpu.execute_instruction<0x4C>(0x00B8FE, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:405 TYA
    case 0xC1B82A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:406 CLC
    case 0xC1B82B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:407 ADC #.LOWORD(GAME_STATE)
    case 0xC1B82C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:407 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1B82C.
    case 0xC1B82E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:408 CLC
    case 0xC1B82F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:409 ADC #game_state::party_members
    case 0xC1B830: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000077, 2); else cpu.execute_instruction<0x69>(0x000077, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:409 ADC #game_state::party_members
    // Overlapping static entry reached from 0xC1B830.
    case 0xC1B832: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:410 STA @VIRTUAL02
    case 0xC1B833: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:411 LDX #4
    case 0xC1B835: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:411 LDX #4
    // Overlapping static entry reached from 0xC1B835.
    case 0xC1B837: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:412 STX @LOCAL06
    case 0xC1B838: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:413 LDX @VIRTUAL02
    case 0xC1B83A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:414 LDA __BSS_START__,X
    case 0xC1B83C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:415 AND #$00FF
    case 0xC1B83F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:415 AND #$00FF
    // Overlapping static entry reached from 0xC1B83F.
    case 0xC1B841: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:416 DEC
    case 0xC1B842: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:417 LDY #.SIZEOF(char_struct)
    case 0xC1B843: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:417 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B843.
    case 0xC1B845: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:418 JSL MULT168
    case 0xC1B846: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:420 CLC
    case 0xC1B84A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:421 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B84B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:421 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B84B.
    case 0xC1B84D: cpu.execute_instruction<0x9C>(0x0022A6, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:422 LDX @LOCAL06
    case 0xC1B84E: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:423 JSR UNKNOWN_C1ACA1
    case 0xC1B850: cpu.execute_instruction<0x20>(0x00AB63, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:424 LDX #.LOWORD(BATTLERS_TABLE) + (1 * .SIZEOF(battler))
    case 0xC1B853: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FC, 2); else cpu.execute_instruction<0xA2>(0x00A1FC, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:424 LDX #.LOWORD(BATTLERS_TABLE) + (1 * .SIZEOF(battler))
    // Overlapping static entry reached from 0xC1B853.
    case 0xC1B855: cpu.execute_instruction<0xA1>(0x000086, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:425 STX @LOCAL06
    case 0xC1B856: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:425 STX @LOCAL06
    // Overlapping static entry reached from 0xC1B855.
    case 0xC1B857: cpu.execute_instruction<0x22>(0xBD02A6, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:426 LDX @VIRTUAL02
    case 0xC1B858: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:427 LDA __BSS_START__,X
    case 0xC1B85A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:427 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC1B857.
    case 0xC1B85B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:428 AND #$00FF
    case 0xC1B85D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:428 AND #$00FF
    // Overlapping static entry reached from 0xC1B85D.
    case 0xC1B85F: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:429 LDX @LOCAL06
    case 0xC1B860: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:430 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B862: cpu.execute_instruction<0x22>(0xC2B8D9, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:431 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B866: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:431 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B866.
    case 0xC1B868: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:431 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B869: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:431 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B86B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:431 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B86B.
    case 0xC1B86D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:431 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B86E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:432 LDA @VIRTUAL01
    case 0xC1B870: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:433 AND #$00FF
    case 0xC1B872: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:433 AND #$00FF
    // Overlapping static entry reached from 0xC1B872.
    case 0xC1B874: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:434 STA @VIRTUAL04
    case 0xC1B875: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:435 ASL
    case 0xC1B877: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:436 ADC @VIRTUAL04
    case 0xC1B878: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:437 ASL
    case 0xC1B87A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:438 ADC @VIRTUAL04
    case 0xC1B87B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:439 ASL
    case 0xC1B87D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:440 ADC @VIRTUAL04
    case 0xC1B87E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:441 TAX
    case 0xC1B880: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:442 INX
    case 0xC1B881: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:443 INX
    case 0xC1B882: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:444 INX
    case 0xC1B883: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:445 INX
    case 0xC1B884: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:446 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1B885: cpu.execute_instruction<0xBF>(0xD59A06, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:447 STA @VIRTUAL04
    case 0xC1B889: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:448 ASL
    case 0xC1B88B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:449 ADC @VIRTUAL04
    case 0xC1B88C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:450 ASL
    case 0xC1B88E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:451 ASL
    case 0xC1B88F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:452 CLC
    case 0xC1B890: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:453 ADC #8
    case 0xC1B891: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:453 ADC #8
    // Overlapping static entry reached from 0xC1B891.
    case 0xC1B893: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:454 CLC
    case 0xC1B894: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:455 ADC @VIRTUAL0A
    case 0xC1B895: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:456 STA @VIRTUAL0A
    case 0xC1B897: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:457 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B899: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:457 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B899.
    case 0xC1B89B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:457 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B89C: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:457 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B89E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:457 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B89F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:457 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B8A1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:457 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B8A3: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:458 PHA
    case 0xC1B8A5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:459 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B8A6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:459 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B8A8: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:459 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B8AB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:459 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B8AD: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:460 PLA
    case 0xC1B8B0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:461 JSL UNKNOWN_C09279
    case 0xC1B8B1: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:462 LDA #0
    case 0xC1B8B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:462 LDA #0
    // Overlapping static entry reached from 0xC1B8B5.
    case 0xC1B8B7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:463 STA @LOCAL08
    case 0xC1B8B8: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:464 BRA @UNKNOWN24
    case 0xC1B8BA: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:466 LDA @LOCAL08
    case 0xC1B8BC: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:467 STA @VIRTUAL02
    case 0xC1B8BE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:468 LDY @LOCAL02
    case 0xC1B8C0: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:469 TYA
    case 0xC1B8C2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:470 LDY #.SIZEOF(char_struct)
    case 0xC1B8C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:470 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B8C3.
    case 0xC1B8C5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:471 JSL MULT168
    case 0xC1B8C6: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:472 CLC
    case 0xC1B8CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:473 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC1B8CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:473 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC1B8CB.
    case 0xC1B8CD: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:474 CLC
    case 0xC1B8CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:475 ADC @VIRTUAL02
    case 0xC1B8CF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:475 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1B8CD.
    case 0xC1B8D0: cpu.execute_instruction<0x02>(0x000048, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:476 PHA
    case 0xC1B8D1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:477 LDA @LOCAL08
    case 0xC1B8D2: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:478 CLC
    case 0xC1B8D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:479 ADC CURRENT_TARGET
    case 0xC1B8D5: cpu.execute_instruction<0x6D>(0x00AB74, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:480 TAX
    case 0xC1B8D8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:481 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B8D9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:482 LDA __BSS_START__+29,X
    case 0xC1B8DB: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:483 PLX
    case 0xC1B8DE: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:484 STA __BSS_START__,X
    case 0xC1B8DF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:485 REP #PROC_FLAGS::ACCUM8
    case 0xC1B8E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:486 LDA @LOCAL08
    case 0xC1B8E4: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:487 INC
    case 0xC1B8E6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:488 STA @LOCAL08
    case 0xC1B8E7: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:490 STA @VIRTUAL02
    case 0xC1B8E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:491 LDA #7
    case 0xC1B8EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:491 LDA #7
    // Overlapping static entry reached from 0xC1B8EB.
    case 0xC1B8ED: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:492 CLC
    case 0xC1B8EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:493 SBC @VIRTUAL02
    case 0xC1B8EF: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:494 BRANCHGTS @UNKNOWN23
    case 0xC1B8F1: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:494 BRANCHGTS @UNKNOWN23
    case 0xC1B8F3: cpu.execute_instruction<0x10>(0x0000C7, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:494 BRANCHGTS @UNKNOWN23
    case 0xC1B8F5: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:494 BRANCHGTS @UNKNOWN23
    case 0xC1B8F7: cpu.execute_instruction<0x30>(0x0000C3, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:495 LDY @LOCAL02
    case 0xC1B8F9: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:496 INY
    case 0xC1B8FB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:497 STY @LOCAL02
    case 0xC1B8FC: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:499 STY @VIRTUAL02
    case 0xC1B8FE: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:500 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1B900: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:501 AND #$00FF
    case 0xC1B903: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:501 AND #$00FF
    // Overlapping static entry reached from 0xC1B903.
    case 0xC1B905: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:502 CLC
    case 0xC1B906: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:503 SBC @VIRTUAL02
    case 0xC1B907: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:504 JUMPGTS @UNKNOWN22
    case 0xC1B909: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:504 JUMPGTS @UNKNOWN22
    case 0xC1B90B: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:504 JUMPGTS @UNKNOWN22
    case 0xC1B90D: cpu.execute_instruction<0x4C>(0x00B82A, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:504 JUMPGTS @UNKNOWN22
    case 0xC1B910: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:504 JUMPGTS @UNKNOWN22
    case 0xC1B912: cpu.execute_instruction<0x4C>(0x00B82A, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:505 JMP @UNKNOWN34
    case 0xC1B915: cpu.execute_instruction<0x4C>(0x00B9AA, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:507 TYA
    case 0xC1B918: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:508 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B919: cpu.execute_instruction<0x22>(0xC2B8D9, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:509 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B91D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:509 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B91F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:509 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B921: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:509 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B923: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:510 LDA [@VIRTUAL0A]
    case 0xC1B925: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:511 STA @VIRTUAL04
    case 0xC1B927: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:512 ASL
    case 0xC1B929: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:513 ADC @VIRTUAL04
    case 0xC1B92A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:514 ASL
    case 0xC1B92C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:515 ASL
    case 0xC1B92D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:516 CLC
    case 0xC1B92E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:517 ADC #8
    case 0xC1B92F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:517 ADC #8
    // Overlapping static entry reached from 0xC1B92F.
    case 0xC1B931: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:518 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC1B932: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:518 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC1B934: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:518 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC1B936: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:518 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC1B938: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:519 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B93A: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:519 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B93C: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:519 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B93E: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:519 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B940: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:520 CLC
    case 0xC1B942: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:521 ADC @VIRTUAL0A
    case 0xC1B943: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:522 STA @VIRTUAL0A
    case 0xC1B945: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:523 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B947: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:523 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B947.
    case 0xC1B949: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:523 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B94A: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:523 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B94C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:523 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B94D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:523 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B94F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:523 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B951: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:524 PHA
    case 0xC1B953: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:525 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B954: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:525 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B956: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:525 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B959: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:525 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B95B: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:526 PLA
    case 0xC1B95E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:527 JSL UNKNOWN_C09279
    case 0xC1B95F: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:528 LDA #0
    case 0xC1B963: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:528 LDA #0
    // Overlapping static entry reached from 0xC1B963.
    case 0xC1B965: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:529 STA @LOCAL08
    case 0xC1B966: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:530 BRA @UNKNOWN32
    case 0xC1B968: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:532 LDA @LOCAL08
    case 0xC1B96A: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:533 STA @VIRTUAL02
    case 0xC1B96C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:534 LDA @VIRTUAL00
    case 0xC1B96E: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:535 AND #$00FF
    case 0xC1B970: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:535 AND #$00FF
    // Overlapping static entry reached from 0xC1B970.
    case 0xC1B972: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:536 DEC
    case 0xC1B973: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:537 LDY #.SIZEOF(char_struct)
    case 0xC1B974: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:537 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B974.
    case 0xC1B976: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:538 JSL MULT168
    case 0xC1B977: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:539 CLC
    case 0xC1B97B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:540 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC1B97C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:540 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC1B97C.
    case 0xC1B97E: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:541 CLC
    case 0xC1B97F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:542 ADC @VIRTUAL02
    case 0xC1B980: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:542 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1B97E.
    case 0xC1B981: cpu.execute_instruction<0x02>(0x000048, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:543 PHA
    case 0xC1B982: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:544 LDA @LOCAL08
    case 0xC1B983: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:545 CLC
    case 0xC1B985: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:546 ADC CURRENT_TARGET
    case 0xC1B986: cpu.execute_instruction<0x6D>(0x00AB74, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:547 TAX
    case 0xC1B989: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:548 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B98A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:549 LDA __BSS_START__+29,X
    case 0xC1B98C: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:550 PLX
    case 0xC1B98F: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:551 STA __BSS_START__,X
    case 0xC1B990: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:552 REP #PROC_FLAGS::ACCUM8
    case 0xC1B993: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:553 LDA @LOCAL08
    case 0xC1B995: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:554 INC
    case 0xC1B997: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:555 STA @LOCAL08
    case 0xC1B998: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:557 STA @VIRTUAL02
    case 0xC1B99A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:558 LDA #7
    case 0xC1B99C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:558 LDA #7
    // Overlapping static entry reached from 0xC1B99C.
    case 0xC1B99E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:559 CLC
    case 0xC1B99F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6-jp.asm:560 SBC @VIRTUAL02
    case 0xC1B9A0: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:561 BRANCHGTS @UNKNOWN31
    case 0xC1B9A2: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:561 BRANCHGTS @UNKNOWN31
    case 0xC1B9A4: cpu.execute_instruction<0x10>(0x0000C4, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:561 BRANCHGTS @UNKNOWN31
    case 0xC1B9A6: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:561 BRANCHGTS @UNKNOWN31
    case 0xC1B9A8: cpu.execute_instruction<0x30>(0x0000C0, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:563 JSL UNKNOWN_C3EE4D
    case 0xC1B9AA: cpu.execute_instruction<0x22>(0xC3EA14, 4); return true;
    // src/unknown/C1/C1B5B6-jp.asm:565 LDA #1
    case 0xC1B9AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:565 LDA #1
    // Overlapping static entry reached from 0xC1B9AE.
    case 0xC1B9B0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:566 STA @VIRTUAL02
    case 0xC1B9B1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:568 LDA #WINDOW::TEXT_STANDARD
    case 0xC1B9B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:568 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1B9B3.
    case 0xC1B9B5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6-jp.asm:569 JSR CLOSE_WINDOW
    case 0xC1B9B6: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/unknown/C1/C1B5B6-jp.asm:570 LDA @VIRTUAL02
    case 0xC1B9B9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:571 END_C_FUNCTION
    case 0xC1B9BB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1B5B6-jp.asm:571 END_C_FUNCTION
    case 0xC1B9BC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1BB06.asm (unresolved).
bool execute_unresolved_c1_c1bb06_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1BB06.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1B9BD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    case 0xC1B9BF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    case 0xC1B9C0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    case 0xC1B9C1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    case 0xC1B9C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1B9C2.
    case 0xC1B9C4: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    case 0xC1B9C5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    case 0xC1B9C6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1BB06.asm:9 TAX
    case 0xC1B9C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1BB06.asm:10 STX @LOCAL01
    case 0xC1B9C8: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1BB06.asm:19 TXA
    case 0xC1B9CA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1BB06.asm:20 JSL UNKNOWN_C1C8BC
    case 0xC1B9CB: cpu.execute_instruction<0x22>(0xC1C6E3, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1BB06.asm:21 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    case 0xC1B9CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1BB06.asm:21 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    // Overlapping static entry reached from 0xC1B9CF.
    case 0xC1B9D1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1BB06.asm:21 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    case 0xC1B9D2: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C1BB06.asm:23 JSR SET_INSTANT_PRINTING
    case 0xC1B9D5: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB06.asm:29 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1B9D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009A06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB06.asm:29 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B9D8.
    case 0xC1B9DA: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1BB06.asm:29 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1B9DB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB06.asm:29 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1B9DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB06.asm:29 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B9DD.
    case 0xC1B9DF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1BB06.asm:29 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1B9E0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1BB06.asm:31 LDX @LOCAL01
    case 0xC1B9E2: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1BB06.asm:33 TXA
    case 0xC1B9E4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1B9E5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1B9E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1B9E8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1B9EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1B9EB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1B9ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1B9EE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1BB06.asm:35 CLC
    case 0xC1B9F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1BB06.asm:36 ADC #11
    case 0xC1B9F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/unknown/C1/C1BB06.asm:36 ADC #11
    // Overlapping static entry reached from 0xC1B9F1.
    case 0xC1B9F3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1BB06.asm:37 CLC
    case 0xC1B9F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1BB06.asm:38 ADC @VIRTUAL0A
    case 0xC1B9F5: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1BB06.asm:39 STA @VIRTUAL0A
    case 0xC1B9F7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B9F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B9F9.
    case 0xC1B9FB: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B9FC: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B9FE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B9FF: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BA01: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BA03: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1BB06.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BA05: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1BB06.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BA07: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1BB06.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BA09: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1BB06.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BA0B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1BB06.asm:42 JSL DISPLAY_TEXT
    case 0xC1BA0D: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/unknown/C1/C1BB06.asm:43 JSR CLEAR_INSTANT_PRINTING
    case 0xC1BA11: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1BB06.asm:45 END_C_FUNCTION
    case 0xC1BA14: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1BB06.asm:45 END_C_FUNCTION
    case 0xC1BA15: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1BB71-jp.asm (unresolved).
bool execute_unresolved_c1_c1bb71_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1BA16: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:9 END_STACK_VARS
    case 0xC1BA18: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:9 END_STACK_VARS
    case 0xC1BA19: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:9 END_STACK_VARS
    case 0xC1BA1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BA1A.
    case 0xC1BA1C: cpu.execute_instruction<0xFF>(0xD1A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:9 END_STACK_VARS
    case 0xC1BA1D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:12 LOADPTR UNKNOWN_C1952F, @LOCAL00
    case 0xC1BA1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D1, 2); else cpu.execute_instruction<0xA9>(0x0095D1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:12 LOADPTR UNKNOWN_C1952F, @LOCAL00
    // Overlapping static entry reached from 0xC1BA1E.
    case 0xC1BA20: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:12 LOADPTR UNKNOWN_C1952F, @LOCAL00
    case 0xC1BA21: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:12 LOADPTR UNKNOWN_C1952F, @LOCAL00
    // Overlapping static entry reached from 0xC1BA20.
    case 0xC1BA22: cpu.execute_instruction<0x0E>(0x00C1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:12 LOADPTR UNKNOWN_C1952F, @LOCAL00
    case 0xC1BA23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:12 LOADPTR UNKNOWN_C1952F, @LOCAL00
    // Overlapping static entry reached from 0xC1BA23.
    case 0xC1BA25: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:12 LOADPTR UNKNOWN_C1952F, @LOCAL00
    case 0xC1BA26: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:13 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BA28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:13 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1BA28.
    case 0xC1BA2A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:13 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BA2B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:13 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BA2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:13 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1BA2D.
    case 0xC1BA2F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:13 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BA30: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:14 LDX #1
    case 0xC1BA32: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:14 LDX #1
    // Overlapping static entry reached from 0xC1BA32.
    case 0xC1BA34: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:15 LDA #0
    case 0xC1BA35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:15 LDA #0
    // Overlapping static entry reached from 0xC1BA35.
    case 0xC1BA37: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:16 JSR CHAR_SELECT_PROMPT
    case 0xC1BA38: cpu.execute_instruction<0x20>(0x002EE7, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:17 TAX
    case 0xC1BA3B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:18 BEQL @UNKNOWN9
    case 0xC1BA3C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:18 BEQL @UNKNOWN9
    case 0xC1BA3E: cpu.execute_instruction<0x4C>(0x00BB09, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:19 CPX #3
    case 0xC1BA41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:19 CPX #3
    // Overlapping static entry reached from 0xC1BA41.
    case 0xC1BA43: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:20 BEQ @UNKNOWN0
    case 0xC1BA44: cpu.execute_instruction<0xF0>(0x0000D8, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:21 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2E
    case 0xC1BA46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00002E, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:21 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2E
    // Overlapping static entry reached from 0xC1BA46.
    case 0xC1BA48: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:21 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2E
    case 0xC1BA49: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:22 LDA #0
    case 0xC1BA4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:22 LDA #0
    // Overlapping static entry reached from 0xC1BA4C.
    case 0xC1BA4E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:23 STA @LOCAL03
    case 0xC1BA4F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:24 BRA @UNKNOWN4
    case 0xC1BA51: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:26 TAX
    case 0xC1BA53: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71-jp.asm:27 INX
    case 0xC1BA54: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71-jp.asm:28 STX @LOCAL02
    case 0xC1BA55: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:29 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1BA57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00EC1B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:29 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BA57.
    case 0xC1BA59: cpu.execute_instruction<0xEC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:29 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1BA5A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:29 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1BA5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:29 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BA5C.
    case 0xC1BA5E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:29 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1BA5F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:30 LDA @LOCAL03
    case 0xC1BA61: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC1BA63: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC1BA65: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC1BA66: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC1BA67: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:32 CLC
    case 0xC1BA69: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71-jp.asm:33 ADC @VIRTUAL06
    case 0xC1BA6A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:34 STA @VIRTUAL06
    case 0xC1BA6C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:35 STA @LOCAL00
    case 0xC1BA6E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:36 LDA @VIRTUAL06+2
    case 0xC1BA70: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:37 STA @LOCAL00+2
    case 0xC1BA72: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BA74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1BA74.
    case 0xC1BA76: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BA77: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BA79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1BA79.
    case 0xC1BA7B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BA7C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:39 TXA
    case 0xC1BA7E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71-jp.asm:40 JSR UNKNOWN_C115F4
    case 0xC1BA7F: cpu.execute_instruction<0x20>(0x001BB0, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:41 LDX @LOCAL02
    case 0xC1BA82: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:42 TXA
    case 0xC1BA84: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71-jp.asm:43 STA @LOCAL03
    case 0xC1BA85: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:45 CMP #4
    case 0xC1BA87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:45 CMP #4
    // Overlapping static entry reached from 0xC1BA87.
    case 0xC1BA89: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:46 BCC @UNKNOWN3
    case 0xC1BA8A: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:47 LDY #0
    case 0xC1BA8C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:47 LDY #0
    // Overlapping static entry reached from 0xC1BA8C.
    case 0xC1BA8E: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:48 TYX
    case 0xC1BA8F: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71-jp.asm:49 LDA #1
    case 0xC1BA90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:49 LDA #1
    // Overlapping static entry reached from 0xC1BA90.
    case 0xC1BA92: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:50 JSR UNKNOWN_C1180D
    case 0xC1BA93: cpu.execute_instruction<0x20>(0x001FA6, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:52 LDA #WINDOW::UNKNOWN2E
    case 0xC1BA96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00002E, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:52 LDA #WINDOW::UNKNOWN2E
    // Overlapping static entry reached from 0xC1BA96.
    case 0xC1BA98: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:53 JSR SET_WINDOW_FOCUS
    case 0xC1BA99: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:54 JSR PRINT_MENU_ITEMS
    case 0xC1BA9C: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:55 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1BA9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x00C8AE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:55 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    // Overlapping static entry reached from 0xC1BA9F.
    case 0xC1BAA1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:55 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1BAA2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:55 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1BAA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:55 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    // Overlapping static entry reached from 0xC1BAA4.
    case 0xC1BAA6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:55 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1BAA7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:56 JSR UNKNOWN_C11F5A
    case 0xC1BAA9: cpu.execute_instruction<0x20>(0x00267B, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:57 LDA #1
    case 0xC1BAAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:57 LDA #1
    // Overlapping static entry reached from 0xC1BAAC.
    case 0xC1BAAE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:58 JSR SELECTION_MENU
    case 0xC1BAAF: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:59 TAX
    case 0xC1BAB2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71-jp.asm:60 STX @LOCAL02
    case 0xC1BAB3: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:61 JSR UNKNOWN_C11F8A
    case 0xC1BAB5: cpu.execute_instruction<0x20>(0x0026AB, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:62 LDX @LOCAL02
    case 0xC1BAB8: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:63 BEQ @UNKNOWN8
    case 0xC1BABA: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:64 LDA #1
    case 0xC1BABC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:64 LDA #1
    // Overlapping static entry reached from 0xC1BABC.
    case 0xC1BABE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:65 JSR UNKNOWN_C12BD5
    case 0xC1BABF: cpu.execute_instruction<0x20>(0x0032DB, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:66 CMP #0
    case 0xC1BAC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:66 CMP #0
    // Overlapping static entry reached from 0xC1BAC2.
    case 0xC1BAC4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:67 BEQ @UNKNOWN5
    case 0xC1BAC5: cpu.execute_instruction<0xF0>(0x0000CF, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:68 LDA #1
    case 0xC1BAC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:68 LDA #1
    // Overlapping static entry reached from 0xC1BAC7.
    case 0xC1BAC9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:69 JSR SET_WINDOW_FOCUS
    case 0xC1BACA: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:70 LOADPTR UNKNOWN_C1BB06, @LOCAL00
    case 0xC1BACD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BD, 2); else cpu.execute_instruction<0xA9>(0x00B9BD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:70 LOADPTR UNKNOWN_C1BB06, @LOCAL00
    // Overlapping static entry reached from 0xC1BACD.
    case 0xC1BACF: cpu.execute_instruction<0xB9>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:70 LOADPTR UNKNOWN_C1BB06, @LOCAL00
    case 0xC1BAD0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:70 LOADPTR UNKNOWN_C1BB06, @LOCAL00
    case 0xC1BAD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:70 LOADPTR UNKNOWN_C1BB06, @LOCAL00
    // Overlapping static entry reached from 0xC1BAD2.
    case 0xC1BAD4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:70 LOADPTR UNKNOWN_C1BB06, @LOCAL00
    case 0xC1BAD5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:71 JSR UNKNOWN_C11F5A
    case 0xC1BAD7: cpu.execute_instruction<0x20>(0x00267B, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:73 LDA #1
    case 0xC1BADA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:73 LDA #1
    // Overlapping static entry reached from 0xC1BADA.
    case 0xC1BADC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:74 JSR SELECTION_MENU
    case 0xC1BADD: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:75 CMP #0
    case 0xC1BAE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:75 CMP #0
    // Overlapping static entry reached from 0xC1BAE0.
    case 0xC1BAE2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:76 BNE @UNKNOWN7
    case 0xC1BAE3: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:77 JSR UNKNOWN_C11F8A
    case 0xC1BAE5: cpu.execute_instruction<0x20>(0x0026AB, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:78 LDA #WINDOW::UNKNOWN04
    case 0xC1BAE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:78 LDA #WINDOW::UNKNOWN04
    // Overlapping static entry reached from 0xC1BAE8.
    case 0xC1BAEA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:79 JSR CLOSE_WINDOW
    case 0xC1BAEB: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:80 LDA #WINDOW::UNKNOWN2F
    case 0xC1BAEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:80 LDA #WINDOW::UNKNOWN2F
    // Overlapping static entry reached from 0xC1BAEE.
    case 0xC1BAF0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:81 JSR CLOSE_WINDOW
    case 0xC1BAF1: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:82 BRA @UNKNOWN5
    case 0xC1BAF4: cpu.execute_instruction<0x80>(0x0000A0, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:84 LDA #WINDOW::UNKNOWN2E
    case 0xC1BAF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00002E, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:84 LDA #WINDOW::UNKNOWN2E
    // Overlapping static entry reached from 0xC1BAF6.
    case 0xC1BAF8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:85 JSR CLOSE_WINDOW
    case 0xC1BAF9: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:86 LDA #WINDOW::TEXT_STANDARD
    case 0xC1BAFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:86 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1BAFC.
    case 0xC1BAFE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:87 JSR CLOSE_WINDOW
    case 0xC1BAFF: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:88 LDX @LOCAL02
    case 0xC1BB02: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:89 BEQL @UNKNOWN1
    case 0xC1BB04: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:89 BEQL @UNKNOWN1
    case 0xC1BB06: cpu.execute_instruction<0x4C>(0x00BA1E, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:91 LDA #WINDOW::STATUS_MENU
    case 0xC1BB09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C1BB71-jp.asm:91 LDA #WINDOW::STATUS_MENU
    // Overlapping static entry reached from 0xC1BB09.
    case 0xC1BB0B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71-jp.asm:92 JSR CLOSE_WINDOW
    case 0xC1BB0C: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:93 END_C_FUNCTION
    case 0xC1BB0F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1BB71-jp.asm:93 END_C_FUNCTION
    case 0xC1BB10: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1BEFC.asm (unresolved).
bool execute_unresolved_c1_c1befc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1BEFC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1BD62: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1BEFC.asm:7 CMP #1
    case 0xC1BD64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:7 CMP #1
    // Overlapping static entry reached from 0xC1BD64.
    case 0xC1BD66: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:8 BEQL @1F4101_COFFEESCENE
    case 0xC1BD67: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:8 BEQL @1F4101_COFFEESCENE
    case 0xC1BD69: cpu.execute_instruction<0x4C>(0x00BDF7, 3); return true;
    // src/unknown/C1/C1BEFC.asm:9 CMP #2
    case 0xC1BD6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1BEFC.asm:9 CMP #2
    // Overlapping static entry reached from 0xC1BD6C.
    case 0xC1BD6E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:10 BEQL @1F4102_TEASCENE
    case 0xC1BD6F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:10 BEQL @1F4102_TEASCENE
    case 0xC1BD71: cpu.execute_instruction<0x4C>(0x00BE01, 3); return true;
    // src/unknown/C1/C1BEFC.asm:11 CMP #3
    case 0xC1BD74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1BEFC.asm:11 CMP #3
    // Overlapping static entry reached from 0xC1BD74.
    case 0xC1BD76: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:12 BEQL @1F4103_REGISTERREALNAME
    case 0xC1BD77: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:12 BEQL @1F4103_REGISTERREALNAME
    case 0xC1BD79: cpu.execute_instruction<0x4C>(0x00BE0B, 3); return true;
    // src/unknown/C1/C1BEFC.asm:13 CMP #4
    case 0xC1BD7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1BEFC.asm:13 CMP #4
    // Overlapping static entry reached from 0xC1BD7C.
    case 0xC1BD7E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:14 BEQL @1F4104_REGISTERREALNAME2
    case 0xC1BD7F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:14 BEQL @1F4104_REGISTERREALNAME2
    case 0xC1BD81: cpu.execute_instruction<0x4C>(0x00BE15, 3); return true;
    // src/unknown/C1/C1BEFC.asm:15 CMP #5
    case 0xC1BD84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C1/C1BEFC.asm:15 CMP #5
    // Overlapping static entry reached from 0xC1BD84.
    case 0xC1BD86: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:16 BEQL @1F4105
    case 0xC1BD87: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:16 BEQL @1F4105
    case 0xC1BD89: cpu.execute_instruction<0x4C>(0x00BE1F, 3); return true;
    // src/unknown/C1/C1BEFC.asm:17 CMP #6
    case 0xC1BD8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C1/C1BEFC.asm:17 CMP #6
    // Overlapping static entry reached from 0xC1BD8C.
    case 0xC1BD8E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:18 BEQL @1F4106
    case 0xC1BD8F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:18 BEQL @1F4106
    case 0xC1BD91: cpu.execute_instruction<0x4C>(0x00BE29, 3); return true;
    // src/unknown/C1/C1BEFC.asm:19 CMP #7
    case 0xC1BD94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C1/C1BEFC.asm:19 CMP #7
    // Overlapping static entry reached from 0xC1BD94.
    case 0xC1BD96: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:20 BEQL @1F4107_TOWNMAP
    case 0xC1BD97: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:20 BEQL @1F4107_TOWNMAP
    case 0xC1BD99: cpu.execute_instruction<0x4C>(0x00BE36, 3); return true;
    // src/unknown/C1/C1BEFC.asm:21 CMP #8
    case 0xC1BD9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C1/C1BEFC.asm:21 CMP #8
    // Overlapping static entry reached from 0xC1BD9C.
    case 0xC1BD9E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:22 BEQL @1F4108
    case 0xC1BD9F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:22 BEQL @1F4108
    case 0xC1BDA1: cpu.execute_instruction<0x4C>(0x00BE3C, 3); return true;
    // src/unknown/C1/C1BEFC.asm:23 CMP #9
    case 0xC1BDA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C1/C1BEFC.asm:23 CMP #9
    // Overlapping static entry reached from 0xC1BDA4.
    case 0xC1BDA6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:24 BEQL @1F4109_SOUNDSTONE
    case 0xC1BDA7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:24 BEQL @1F4109_SOUNDSTONE
    case 0xC1BDA9: cpu.execute_instruction<0x4C>(0x00BE42, 3); return true;
    // src/unknown/C1/C1BEFC.asm:25 CMP #10
    case 0xC1BDAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C1/C1BEFC.asm:25 CMP #10
    // Overlapping static entry reached from 0xC1BDAC.
    case 0xC1BDAE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:26 BEQL @1F410A_TITLESCREEN
    case 0xC1BDAF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:26 BEQL @1F410A_TITLESCREEN
    case 0xC1BDB1: cpu.execute_instruction<0x4C>(0x00BE4B, 3); return true;
    // src/unknown/C1/C1BEFC.asm:27 CMP #11
    case 0xC1BDB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/unknown/C1/C1BEFC.asm:27 CMP #11
    // Overlapping static entry reached from 0xC1BDB4.
    case 0xC1BDB6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:28 BEQL @1F410B_CASTSCREEN
    case 0xC1BDB7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:28 BEQL @1F410B_CASTSCREEN
    case 0xC1BDB9: cpu.execute_instruction<0x4C>(0x00BE54, 3); return true;
    // src/unknown/C1/C1BEFC.asm:29 CMP #12
    case 0xC1BDBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C1/C1BEFC.asm:29 CMP #12
    // Overlapping static entry reached from 0xC1BDBC.
    case 0xC1BDBE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:30 BEQL @1F410C_ENDCREDITS
    case 0xC1BDBF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:30 BEQL @1F410C_ENDCREDITS
    case 0xC1BDC1: cpu.execute_instruction<0x4C>(0x00BE5A, 3); return true;
    // src/unknown/C1/C1BEFC.asm:31 CMP #13
    case 0xC1BDC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/unknown/C1/C1BEFC.asm:31 CMP #13
    // Overlapping static entry reached from 0xC1BDC4.
    case 0xC1BDC6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:32 BEQL @1F410D
    case 0xC1BDC7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:32 BEQL @1F410D
    case 0xC1BDC9: cpu.execute_instruction<0x4C>(0x00BE60, 3); return true;
    // src/unknown/C1/C1BEFC.asm:33 CMP #14
    case 0xC1BDCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/unknown/C1/C1BEFC.asm:33 CMP #14
    // Overlapping static entry reached from 0xC1BDCC.
    case 0xC1BDCE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:34 BEQL @1F410E
    case 0xC1BDCF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:34 BEQL @1F410E
    case 0xC1BDD1: cpu.execute_instruction<0x4C>(0x00BE68, 3); return true;
    // src/unknown/C1/C1BEFC.asm:35 CMP #15
    case 0xC1BDD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00000F, 3); return true;
    // src/unknown/C1/C1BEFC.asm:35 CMP #15
    // Overlapping static entry reached from 0xC1BDD4.
    case 0xC1BDD6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:36 BEQL @1F410F_CLEAREVENTFLAGS
    case 0xC1BDD7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:36 BEQL @1F410F_CLEAREVENTFLAGS
    case 0xC1BDD9: cpu.execute_instruction<0x4C>(0x00BE70, 3); return true;
    // src/unknown/C1/C1BEFC.asm:37 CMP #16
    case 0xC1BDDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C1/C1BEFC.asm:37 CMP #16
    // Overlapping static entry reached from 0xC1BDDC.
    case 0xC1BDDE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:38 BEQL @1F4110_SOUNDSTONE_UNCANCELLABLE
    case 0xC1BDDF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:38 BEQL @1F4110_SOUNDSTONE_UNCANCELLABLE
    case 0xC1BDE1: cpu.execute_instruction<0x4C>(0x00BE82, 3); return true;
    // src/unknown/C1/C1BEFC.asm:39 CMP #17
    case 0xC1BDE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/unknown/C1/C1BEFC.asm:39 CMP #17
    // Overlapping static entry reached from 0xC1BDE4.
    case 0xC1BDE6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:40 BEQL @1F4111
    case 0xC1BDE7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:40 BEQL @1F4111
    case 0xC1BDE9: cpu.execute_instruction<0x4C>(0x00BE8B, 3); return true;
    // src/unknown/C1/C1BEFC.asm:41 CMP #18
    case 0xC1BDEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/unknown/C1/C1BEFC.asm:41 CMP #18
    // Overlapping static entry reached from 0xC1BDEC.
    case 0xC1BDEE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:42 BEQL @1F4112
    case 0xC1BDEF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:42 BEQL @1F4112
    case 0xC1BDF1: cpu.execute_instruction<0x4C>(0x00BE90, 3); return true;
    // src/unknown/C1/C1BEFC.asm:43 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BDF4: cpu.execute_instruction<0x4C>(0x00BEA6, 3); return true;
    // src/unknown/C1/C1BEFC.asm:45 LDA #0
    case 0xC1BDF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:45 LDA #0
    // Overlapping static entry reached from 0xC1BDF7.
    case 0xC1BDF9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:46 JSL COFFEETEA_SCENE
    case 0xC1BDFA: cpu.execute_instruction<0x22>(0xC4723E, 4); return true;
    // src/unknown/C1/C1BEFC.asm:47 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BDFE: cpu.execute_instruction<0x4C>(0x00BEA6, 3); return true;
    // src/unknown/C1/C1BEFC.asm:49 LDA #1
    case 0xC1BE01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:49 LDA #1
    // Overlapping static entry reached from 0xC1BE01.
    case 0xC1BE03: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:50 JSL COFFEETEA_SCENE
    case 0xC1BE04: cpu.execute_instruction<0x22>(0xC4723E, 4); return true;
    // src/unknown/C1/C1BEFC.asm:51 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE08: cpu.execute_instruction<0x4C>(0x00BEA6, 3); return true;
    // src/unknown/C1/C1BEFC.asm:53 LDA #0
    case 0xC1BE0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:53 LDA #0
    // Overlapping static entry reached from 0xC1BE0B.
    case 0xC1BE0D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:54 JSL ENTER_YOUR_NAME_PLEASE
    case 0xC1BE0E: cpu.execute_instruction<0x22>(0xC1E8F6, 4); return true;
    // src/unknown/C1/C1BEFC.asm:55 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE12: cpu.execute_instruction<0x4C>(0x00BEA6, 3); return true;
    // src/unknown/C1/C1BEFC.asm:57 LDA #1
    case 0xC1BE15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:57 LDA #1
    // Overlapping static entry reached from 0xC1BE15.
    case 0xC1BE17: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:58 JSL ENTER_YOUR_NAME_PLEASE
    case 0xC1BE18: cpu.execute_instruction<0x22>(0xC1E8F6, 4); return true;
    // src/unknown/C1/C1BEFC.asm:59 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE1C: cpu.execute_instruction<0x4C>(0x00BEA6, 3); return true;
    // src/unknown/C1/C1BEFC.asm:61 LDA #1
    case 0xC1BE1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:61 LDA #1
    // Overlapping static entry reached from 0xC1BE1F.
    case 0xC1BE21: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:62 JSL UNKNOWN_C43344
    case 0xC1BE22: cpu.execute_instruction<0x22>(0xC430BD, 4); return true;
    // src/unknown/C1/C1BEFC.asm:63 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE26: cpu.execute_instruction<0x4C>(0x00BEA6, 3); return true;
    // src/unknown/C1/C1BEFC.asm:65 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xC1BE29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x000049, 3); return true;
    // src/unknown/C1/C1BEFC.asm:65 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xC1BE29.
    case 0xC1BE2B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:66 JSL GET_EVENT_FLAG
    case 0xC1BE2C: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C1/C1BEFC.asm:67 JSL UNKNOWN_C43344
    case 0xC1BE30: cpu.execute_instruction<0x22>(0xC430BD, 4); return true;
    // src/unknown/C1/C1BEFC.asm:68 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE34: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/unknown/C1/C1BEFC.asm:70 JSL DISPLAY_TOWN_MAP
    case 0xC1BE36: cpu.execute_instruction<0x22>(0xC4A951, 4); return true;
    // src/unknown/C1/C1BEFC.asm:71 BRA @RETURN
    case 0xC1BE3A: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // src/unknown/C1/C1BEFC.asm:73 JSL UNKNOWN_C3FB09
    case 0xC1BE3C: cpu.execute_instruction<0x22>(0xC3F64E, 4); return true;
    // src/unknown/C1/C1BEFC.asm:74 BRA @RETURN
    case 0xC1BE40: cpu.execute_instruction<0x80>(0x000069, 2); return true;
    // src/unknown/C1/C1BEFC.asm:76 LDA #1
    case 0xC1BE42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:76 LDA #1
    // Overlapping static entry reached from 0xC1BE42.
    case 0xC1BE44: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:77 JSL USE_SOUND_STONE
    case 0xC1BE45: cpu.execute_instruction<0x22>(0xC48137, 4); return true;
    // src/unknown/C1/C1BEFC.asm:78 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE49: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // src/unknown/C1/C1BEFC.asm:80 LDA #1
    case 0xC1BE4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:80 LDA #1
    // Overlapping static entry reached from 0xC1BE4B.
    case 0xC1BE4D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:81 JSL SHOW_TITLE_SCREEN
    case 0xC1BE4E: cpu.execute_instruction<0x22>(0xC0EDC0, 4); return true;
    // src/unknown/C1/C1BEFC.asm:82 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE52: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/unknown/C1/C1BEFC.asm:84 JSL PLAY_CAST_SCENE
    case 0xC1BE54: cpu.execute_instruction<0x22>(0xC4BF69, 4); return true;
    // src/unknown/C1/C1BEFC.asm:85 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE58: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C1/C1BEFC.asm:87 JSL PLAY_CREDITS
    case 0xC1BE5A: cpu.execute_instruction<0x22>(0xC4C594, 4); return true;
    // src/unknown/C1/C1BEFC.asm:88 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE5E: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C1/C1BEFC.asm:90 LDA #1
    case 0xC1BE60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:90 LDA #1
    // Overlapping static entry reached from 0xC1BE60.
    case 0xC1BE62: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BEFC.asm:91 JSR UNKNOWN_C12D17
    case 0xC1BE63: cpu.execute_instruction<0x20>(0x003444, 3); return true;
    // src/unknown/C1/C1BEFC.asm:92 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE66: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/unknown/C1/C1BEFC.asm:94 LDA #0
    case 0xC1BE68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:94 LDA #0
    // Overlapping static entry reached from 0xC1BE68.
    case 0xC1BE6A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BEFC.asm:95 JSR UNKNOWN_C12D17
    case 0xC1BE6B: cpu.execute_instruction<0x20>(0x003444, 3); return true;
    // src/unknown/C1/C1BEFC.asm:96 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE6E: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unknown/C1/C1BEFC.asm:98 LDX #0
    case 0xC1BE70: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:98 LDX #0
    // Overlapping static entry reached from 0xC1BE70.
    case 0xC1BE72: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1BEFC.asm:99 BRA @1F410F_CLEAREVENTFLAGS_LOOP_ENTRY
    case 0xC1BE73: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C1/C1BEFC.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xC1BE75: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1BEFC.asm:102 STZ EVENT_FLAGS,X
    case 0xC1BE77: cpu.execute_instruction<0x9E>(0x009EB3, 3); return true;
    // src/unknown/C1/C1BEFC.asm:103 INX
    case 0xC1BE7A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1BEFC.asm:105 CPX #128
    case 0xC1BE7B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000080, 3); return true;
    // src/unknown/C1/C1BEFC.asm:105 CPX #128
    // Overlapping static entry reached from 0xC1BE7B.
    case 0xC1BE7D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C1BEFC.asm:106 BCC @1F410F_CLEAREVENTFLAGS_LOOP_BEGINNING
    case 0xC1BE7E: cpu.execute_instruction<0x90>(0x0000F5, 2); return true;
    // src/unknown/C1/C1BEFC.asm:107 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE80: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C1/C1BEFC.asm:110 LDA #0
    case 0xC1BE82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:110 LDA #0
    // Overlapping static entry reached from 0xC1BE82.
    case 0xC1BE84: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:111 JSL USE_SOUND_STONE
    case 0xC1BE85: cpu.execute_instruction<0x22>(0xC48137, 4); return true;
    // src/unknown/C1/C1BEFC.asm:112 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE89: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C1/C1BEFC.asm:114 JSR ATTEMPT_HOMESICKNESS
    case 0xC1BE8B: cpu.execute_instruction<0x20>(0x00BCB3, 3); return true;
    // src/unknown/C1/C1BEFC.asm:115 BRA @RETURN
    case 0xC1BE8E: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C1/C1BEFC.asm:117 LDA GAME_STATE+game_state::walking_style
    case 0xC1BE90: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/unknown/C1/C1BEFC.asm:118 CMP #3
    case 0xC1BE93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1BEFC.asm:118 CMP #3
    // Overlapping static entry reached from 0xC1BE93.
    case 0xC1BE95: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1BEFC.asm:119 BNE @RETURN_ZERO_1
    case 0xC1BE96: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C1/C1BEFC.asm:120 JSL UNKNOWN_C03CFD
    case 0xC1BE98: cpu.execute_instruction<0x22>(0xC03F64, 4); return true;
    // src/unknown/C1/C1BEFC.asm:121 LDA #1
    case 0xC1BE9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:121 LDA #1
    // Overlapping static entry reached from 0xC1BE9C.
    case 0xC1BE9E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1BEFC.asm:122 BRA @RETURN
    case 0xC1BE9F: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C1/C1BEFC.asm:124 LDA #0
    case 0xC1BEA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:124 LDA #0
    // Overlapping static entry reached from 0xC1BEA1.
    case 0xC1BEA3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1BEFC.asm:125 BRA @RETURN
    case 0xC1BEA4: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C1/C1BEFC.asm:127 REP #PROC_FLAGS::ACCUM8
    case 0xC1BEA6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1BEFC.asm:128 LDA #0
    case 0xC1BEA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:128 LDA #0
    // Overlapping static entry reached from 0xC1BEA8.
    case 0xC1BEAA: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1BEFC.asm:130 END_C_FUNCTION
    case 0xC1BEAB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C046.asm (unresolved).
bool execute_unresolved_c1_c1c046_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C046.asm:3 BEGIN_C_FUNCTION
    case 0xC1BEAC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    case 0xC1BEAE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    case 0xC1BEAF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    case 0xC1BEB0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    case 0xC1BEB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BEB1.
    case 0xC1BEB3: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    case 0xC1BEB4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    case 0xC1BEB5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:11 TAY
    case 0xC1BEB6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:12 STY @LOCAL03
    case 0xC1BEB7: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1C046.asm:13 JSR GET_TEXT_X
    case 0xC1BEB9: cpu.execute_instruction<0x20>(0x0006B8, 3); return true;
    // src/unknown/C1/C1C046.asm:14 CMP #14
    case 0xC1BEBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/unknown/C1/C1C046.asm:14 CMP #14
    // Overlapping static entry reached from 0xC1BEBC.
    case 0xC1BEBE: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C1/C1C046.asm:15 BLTEQ @UNKNOWN0
    case 0xC1BEBF: cpu.execute_instruction<0x90>(0x00001F, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C1/C1C046.asm:15 BLTEQ @UNKNOWN0
    case 0xC1BEC1: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C1/C1C046.asm:16 LDY @LOCAL03
    case 0xC1BEC3: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1C046.asm:17 CPY #32
    case 0xC1BEC5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C1/C1C046.asm:17 CPY #32
    // Overlapping static entry reached from 0xC1BEC5.
    case 0xC1BEC7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C1C046.asm:18 BCC @UNKNOWN0
    case 0xC1BEC8: cpu.execute_instruction<0x90>(0x000016, 2); return true;
    // src/unknown/C1/C1C046.asm:19 JSR PRINT_NEWLINE
    case 0xC1BECA: cpu.execute_instruction<0x20>(0x001174, 3); return true;
    // src/unknown/C1/C1C046.asm:20 JSL UNKNOWN_C45E96
    case 0xC1BECD: cpu.execute_instruction<0x22>(0xC43BE8, 4); return true;
    // src/unknown/C1/C1C046.asm:21 JSR GET_TEXT_X
    case 0xC1BED1: cpu.execute_instruction<0x20>(0x0006B8, 3); return true;
    // src/unknown/C1/C1C046.asm:22 STA @VIRTUAL02
    case 0xC1BED4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C046.asm:23 JSR GET_TEXT_Y
    case 0xC1BED6: cpu.execute_instruction<0x20>(0x0006CE, 3); return true;
    // src/unknown/C1/C1C046.asm:24 TAX
    case 0xC1BED9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:25 LDA @VIRTUAL02
    case 0xC1BEDA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C046.asm:26 INC
    case 0xC1BEDC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:27 JSR UNKNOWN_C438A5
    case 0xC1BEDD: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1C046.asm:29 LDY @LOCAL03
    case 0xC1BEE0: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1C046.asm:30 TYA
    case 0xC1BEE2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:31 SEC
    case 0xC1BEE3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:32 SBC #16
    case 0xC1BEE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/C1/C1C046.asm:32 SBC #16
    // Overlapping static entry reached from 0xC1BEE4.
    case 0xC1BEE6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1C046.asm:33 TAX
    case 0xC1BEE7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:34 LDA f:UNKNOWN_C3EF26,X
    case 0xC1BEE8: cpu.execute_instruction<0xBF>(0xC3EAED, 4); return true;
    // src/unknown/C1/C1C046.asm:35 AND #$00FF
    case 0xC1BEEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C046.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC1BEEC.
    case 0xC1BEEE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1C046.asm:36 TAX
    case 0xC1BEEF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:37 BNE @UNKNOWN2
    case 0xC1BEF0: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // src/unknown/C1/C1C046.asm:38 LDA UNKNOWN_7E9E29
    case 0xC1BEF2: cpu.execute_instruction<0xAD>(0x00A02F, 3); return true;
    // src/unknown/C1/C1C046.asm:39 BEQ @UNKNOWN1
    case 0xC1BEF5: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C1/C1C046.asm:40 JSL UNKNOWN_C45E96
    case 0xC1BEF7: cpu.execute_instruction<0x22>(0xC43BE8, 4); return true;
    // src/unknown/C1/C1C046.asm:41 JSR GET_TEXT_X
    case 0xC1BEFB: cpu.execute_instruction<0x20>(0x0006B8, 3); return true;
    // src/unknown/C1/C1C046.asm:42 STA @VIRTUAL02
    case 0xC1BEFE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C046.asm:43 JSR GET_TEXT_Y
    case 0xC1BF00: cpu.execute_instruction<0x20>(0x0006CE, 3); return true;
    // src/unknown/C1/C1C046.asm:44 TAX
    case 0xC1BF03: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:45 LDA @VIRTUAL02
    case 0xC1BF04: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C046.asm:46 INC
    case 0xC1BF06: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:47 JSR UNKNOWN_C438A5
    case 0xC1BF07: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1C046.asm:49 LDY @LOCAL03
    case 0xC1BF0A: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1C046.asm:50 TYA
    case 0xC1BF0C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:51 JSR UNKNOWN_C10BA1
    case 0xC1BF0D: cpu.execute_instruction<0x20>(0x00110E, 3); return true;
    // src/unknown/C1/C1C046.asm:52 JMP @UNKNOWN6
    case 0xC1BF10: cpu.execute_instruction<0x4C>(0x00BFC5, 3); return true;
    // src/unknown/C1/C1C046.asm:54 LDA #1
    case 0xC1BF13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C046.asm:54 LDA #1
    // Overlapping static entry reached from 0xC1BF13.
    case 0xC1BF15: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1C046.asm:55 STA UNKNOWN_7E9E29
    case 0xC1BF16: cpu.execute_instruction<0x8D>(0x00A02F, 3); return true;
    // src/unknown/C1/C1C046.asm:56 TXA
    case 0xC1BF19: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:57 DEC
    case 0xC1BF1A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:58 STA @LOCAL02
    case 0xC1BF1B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1C046.asm:59 TAX
    case 0xC1BF1D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:60 LDA f:UNKNOWN_C3F016,X
    case 0xC1BF1E: cpu.execute_instruction<0xBF>(0xC3EBDD, 4); return true;
    // src/unknown/C1/C1C046.asm:61 AND #$00FF
    case 0xC1BF22: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C046.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC1BF22.
    case 0xC1BF24: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1C046.asm:62 TAX
    case 0xC1BF25: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:63 STX @LOCAL01
    case 0xC1BF26: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:64 LDY VWF_TILE
    case 0xC1BF28: cpu.execute_instruction<0xAC>(0x00A02B, 3); return true;
    // src/unknown/C1/C1C046.asm:65 STY @LOCAL03
    case 0xC1BF2B: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    case 0xC1BF2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x00209D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BF2D.
    case 0xC1BF2F: cpu.execute_instruction<0x20>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    case 0xC1BF30: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    case 0xC1BF32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BF32.
    case 0xC1BF34: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    case 0xC1BF35: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1C046.asm:67 LDA @LOCAL02
    case 0xC1BF37: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1C046.asm:68 AND #$0007
    case 0xC1BF39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C1/C1C046.asm:68 AND #$0007
    // Overlapping static entry reached from 0xC1BF39.
    case 0xC1BF3B: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C1/C1C046.asm:69 ASL
    case 0xC1BF3C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:70 ASL
    case 0xC1BF3D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:71 ASL
    case 0xC1BF3E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:72 ASL
    case 0xC1BF3F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:73 ASL
    case 0xC1BF40: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:74 STA @VIRTUAL02
    case 0xC1BF41: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C046.asm:75 LDA @LOCAL02
    case 0xC1BF43: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1C046.asm:76 AND #$00F8
    case 0xC1BF45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x0000F8, 3); return true;
    // src/unknown/C1/C1C046.asm:76 AND #$00F8
    // Overlapping static entry reached from 0xC1BF45.
    case 0xC1BF47: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C1/C1C046.asm:77 ASL
    case 0xC1BF48: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:78 ASL
    case 0xC1BF49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:79 ASL
    case 0xC1BF4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:80 ASL
    case 0xC1BF4B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:81 ASL
    case 0xC1BF4C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:82 ASL
    case 0xC1BF4D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:83 CLC
    case 0xC1BF4E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:84 ADC @VIRTUAL02
    case 0xC1BF4F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1C046.asm:85 CLC
    case 0xC1BF51: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:86 ADC @VIRTUAL06
    case 0xC1BF52: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C046.asm:87 STA @VIRTUAL06
    case 0xC1BF54: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C046.asm:88 CPX #8
    case 0xC1BF56: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/C1/C1C046.asm:88 CPX #8
    // Overlapping static entry reached from 0xC1BF56.
    case 0xC1BF58: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C1/C1C046.asm:89 BLTEQ @UNKNOWN3
    case 0xC1BF59: cpu.execute_instruction<0x90>(0x000021, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C1/C1C046.asm:89 BLTEQ @UNKNOWN3
    case 0xC1BF5B: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1C046.asm:90 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BF5D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1C046.asm:90 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BF5F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1C046.asm:90 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BF61: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1C046.asm:90 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BF63: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C046.asm:91 LDA #8
    case 0xC1BF65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C1C046.asm:91 LDA #8
    // Overlapping static entry reached from 0xC1BF65.
    case 0xC1BF67: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1C046.asm:92 JSL UNKNOWN_C45C90
    case 0xC1BF68: cpu.execute_instruction<0x22>(0xC439E2, 4); return true;
    // src/unknown/C1/C1C046.asm:93 LDX @LOCAL01
    case 0xC1BF6C: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:94 TXA
    case 0xC1BF6E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:95 SEC
    case 0xC1BF6F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:96 SBC #8
    case 0xC1BF70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C1/C1C046.asm:96 SBC #8
    // Overlapping static entry reached from 0xC1BF70.
    case 0xC1BF72: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1C046.asm:97 TAX
    case 0xC1BF73: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:98 LDA #16
    case 0xC1BF74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C1/C1C046.asm:98 LDA #16
    // Overlapping static entry reached from 0xC1BF74.
    case 0xC1BF76: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1C046.asm:99 CLC
    case 0xC1BF77: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:100 ADC @VIRTUAL06
    case 0xC1BF78: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C046.asm:101 STA @VIRTUAL06
    case 0xC1BF7A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1C046.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BF7C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1C046.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BF7E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1C046.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BF80: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1C046.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BF82: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C046.asm:104 TXA
    case 0xC1BF84: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:105 JSL UNKNOWN_C45C90
    case 0xC1BF85: cpu.execute_instruction<0x22>(0xC439E2, 4); return true;
    // src/unknown/C1/C1C046.asm:106 LDX UNKNOWN_7E9E27
    case 0xC1BF89: cpu.execute_instruction<0xAE>(0x00A02D, 3); return true;
    // src/unknown/C1/C1C046.asm:107 DEX
    case 0xC1BF8C: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:108 STX @LOCAL01
    case 0xC1BF8D: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:109 LDY @LOCAL03
    case 0xC1BF8F: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1C046.asm:110 TYA
    case 0xC1BF91: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:111 JSL UNKNOWN_C45DDD
    case 0xC1BF92: cpu.execute_instruction<0x22>(0xC43B2F, 4); return true;
    // src/unknown/C1/C1C046.asm:113 LDX @LOCAL01
    case 0xC1BF96: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:114 INX
    case 0xC1BF98: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:115 STX @LOCAL01
    case 0xC1BF99: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:116 CPX #48
    case 0xC1BF9B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000030, 2); else cpu.execute_instruction<0xE0>(0x000030, 3); return true;
    // src/unknown/C1/C1C046.asm:116 CPX #48
    // Overlapping static entry reached from 0xC1BF9B.
    case 0xC1BF9D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C1C046.asm:117 BCC @UNKNOWN5
    case 0xC1BF9E: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C1/C1C046.asm:118 LDX #0
    case 0xC1BFA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1C046.asm:118 LDX #0
    // Overlapping static entry reached from 0xC1BFA0.
    case 0xC1BFA2: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1C046.asm:119 STX @LOCAL01
    case 0xC1BFA3: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:121 TXA
    case 0xC1BFA5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:122 CLC
    case 0xC1BFA6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:123 ADC #400
    case 0xC1BFA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000090, 2); else cpu.execute_instruction<0x69>(0x000190, 3); return true;
    // src/unknown/C1/C1C046.asm:123 ADC #400
    // Overlapping static entry reached from 0xC1BFA7.
    case 0xC1BFA9: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/unknown/C1/C1C046.asm:124 JSR UNKNOWN_C10BA1
    case 0xC1BFAA: cpu.execute_instruction<0x20>(0x00110E, 3); return true;
    // src/unknown/C1/C1C046.asm:124 JSR UNKNOWN_C10BA1
    // Overlapping static entry reached from 0xC1BFA9.
    case 0xC1BFAB: cpu.execute_instruction<0x0E>(0x00A611, 3); return true;
    // src/unknown/C1/C1C046.asm:125 LDX @LOCAL01
    case 0xC1BFAD: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:125 LDX @LOCAL01
    // Overlapping static entry reached from 0xC1BFAB.
    case 0xC1BFAE: cpu.execute_instruction<0x12>(0x0000EC, 2); return true;
    // src/unknown/C1/C1C046.asm:126 CPX UNKNOWN_7E9E27
    case 0xC1BFAF: cpu.execute_instruction<0xEC>(0x00A02D, 3); return true;
    // src/unknown/C1/C1C046.asm:126 CPX UNKNOWN_7E9E27
    // Overlapping static entry reached from 0xC1BFAE.
    case 0xC1BFB0: cpu.execute_instruction<0x2D>(0x00D0A0, 3); return true;
    // src/unknown/C1/C1C046.asm:127 BNE @UNKNOWN4
    case 0xC1BFB2: cpu.execute_instruction<0xD0>(0x0000E2, 2); return true;
    // src/unknown/C1/C1C046.asm:127 BNE @UNKNOWN4
    // Overlapping static entry reached from 0xC1BFB0.
    case 0xC1BFB3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C046.asm:128 JSR GET_TEXT_X
    case 0xC1BFB4: cpu.execute_instruction<0x20>(0x0006B8, 3); return true;
    // src/unknown/C1/C1C046.asm:128 JSR GET_TEXT_X
    // Overlapping static entry reached from 0xC1BFB3.
    case 0xC1BFB5: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:128 JSR GET_TEXT_X
    // Overlapping static entry reached from 0xC1BFB5.
    case 0xC1BFB6: cpu.execute_instruction<0x06>(0x0000A8, 2); return true;
    // src/unknown/C1/C1C046.asm:129 TAY
    case 0xC1BFB7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:130 STY @LOCAL01
    case 0xC1BFB8: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:131 JSR GET_TEXT_Y
    case 0xC1BFBA: cpu.execute_instruction<0x20>(0x0006CE, 3); return true;
    // src/unknown/C1/C1C046.asm:132 TAX
    case 0xC1BFBD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:133 LDY @LOCAL01
    case 0xC1BFBE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:134 TYA
    case 0xC1BFC0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:135 DEC
    case 0xC1BFC1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:136 JSR UNKNOWN_C438A5
    case 0xC1BFC2: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C046.asm:138 END_C_FUNCTION
    case 0xC1BFC5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1C046.asm:138 END_C_FUNCTION
    case 0xC1BFC6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C165.asm (unresolved).
bool execute_unresolved_c1_c1c165_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C165.asm:3 BEGIN_C_FUNCTION
    case 0xC1BFC7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    case 0xC1BFC9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    case 0xC1BFCA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    case 0xC1BFCB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    case 0xC1BFCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BFCC.
    case 0xC1BFCE: cpu.execute_instruction<0xFF>(0x3A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    case 0xC1BFCF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    case 0xC1BFD0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:8 DEC
    case 0xC1BFD1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:9 LDY #.SIZEOF(char_struct)
    case 0xC1BFD2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1C165.asm:9 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1BFD2.
    case 0xC1BFD4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1C165.asm:10 JSL MULT168
    case 0xC1BFD5: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1C165.asm:11 CLC
    case 0xC1BFD9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:12 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC1BFDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/unknown/C1/C1C165.asm:12 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC1BFDA.
    case 0xC1BFDC: cpu.execute_instruction<0x9C>(0x00A2A8, 3); return true;
    // src/unknown/C1/C1C165.asm:13 TAY
    case 0xC1BFDD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:14 LDX #0
    case 0xC1BFDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1C165.asm:14 LDX #0
    // Overlapping static entry reached from 0xC1BFDC.
    case 0xC1BFDF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1C165.asm:14 LDX #0
    // Overlapping static entry reached from 0xC1BFDE.
    case 0xC1BFE0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1C165.asm:15 BRA @UNKNOWN3
    case 0xC1BFE1: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C1/C1C165.asm:17 LDA __BSS_START__,Y
    case 0xC1BFE3: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1C165.asm:18 AND #$00FF
    case 0xC1BFE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C165.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC1BFE6.
    case 0xC1BFE8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C165.asm:19 BEQ @UNKNOWN2
    case 0xC1BFE9: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C1/C1C165.asm:20 AND #$00FF
    case 0xC1BFEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C165.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC1BFEB.
    case 0xC1BFED: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1C165.asm:21 DEC
    case 0xC1BFEE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:22 ASL
    case 0xC1BFEF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:23 STA @VIRTUAL02
    case 0xC1BFF0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C165.asm:24 TXA
    case 0xC1BFF2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:25 STA @VIRTUAL04
    case 0xC1BFF3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C165.asm:26 ASL
    case 0xC1BFF5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:27 ADC @VIRTUAL04
    case 0xC1BFF6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1C165.asm:28 ASL
    case 0xC1BFF8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:29 ADC @VIRTUAL04
    case 0xC1BFF9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1C165.asm:30 ASL
    case 0xC1BFFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:31 CLC
    case 0xC1BFFC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:32 ADC @VIRTUAL02
    case 0xC1BFFD: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1C165.asm:33 TAX
    case 0xC1BFFF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:34 LDA f:UNKNOWN_C3F0B0,X
    case 0xC1C000: cpu.execute_instruction<0xBF>(0xC3EC2F, 4); return true;
    // src/unknown/C1/C1C165.asm:35 BEQ @UNKNOWN1
    case 0xC1C004: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1C165.asm:36 LDA #0
    case 0xC1C006: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C165.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1C006.
    case 0xC1C008: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1C165.asm:37 BRA @UNKNOWN4
    case 0xC1C009: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C1/C1C165.asm:39 LDA #1
    case 0xC1C00B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C165.asm:39 LDA #1
    // Overlapping static entry reached from 0xC1C00B.
    case 0xC1C00D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1C165.asm:40 BRA @UNKNOWN4
    case 0xC1C00E: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C1/C1C165.asm:42 INX
    case 0xC1C010: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:43 INY
    case 0xC1C011: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:45 CPX #7
    case 0xC1C012: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/unknown/C1/C1C165.asm:45 CPX #7
    // Overlapping static entry reached from 0xC1C012.
    case 0xC1C014: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C1C165.asm:46 BCC @UNKNOWN0
    case 0xC1C015: cpu.execute_instruction<0x90>(0x0000CC, 2); return true;
    // src/unknown/C1/C1C165.asm:47 LDA #1
    case 0xC1C017: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C165.asm:47 LDA #1
    // Overlapping static entry reached from 0xC1C017.
    case 0xC1C019: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C165.asm:49 END_C_FUNCTION
    case 0xC1C01A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1C165.asm:49 END_C_FUNCTION
    case 0xC1C01B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C1BA.asm (unresolved).
bool execute_unresolved_c1_c1c1ba_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C1BA.asm:3 BEGIN_C_FUNCTION
    case 0xC1C01C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    case 0xC1C01E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    case 0xC1C01F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    case 0xC1C020: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    case 0xC1C021: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E9, 2); else cpu.execute_instruction<0x69>(0x00FFE9, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C021.
    case 0xC1C023: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    case 0xC1C024: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    case 0xC1C025: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:15 STY @VIRTUAL04
    case 0xC1C026: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:15 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC1C023.
    case 0xC1C027: cpu.execute_instruction<0x04>(0x000048, 2); return true;
    // src/unknown/C1/C1C1BA.asm:16 PHA
    case 0xC1C028: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:17 LDA @VIRTUAL04
    case 0xC1C029: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:18 STA @LOCAL04
    case 0xC1C02B: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C1/C1C1BA.asm:19 PLA
    case 0xC1C02D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:20 STX @VIRTUAL02
    case 0xC1C02E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1C1BA.asm:21 TAX
    case 0xC1C030: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:22 CPX #PARTY_MEMBER::JEFF
    case 0xC1C031: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/unknown/C1/C1C1BA.asm:22 CPX #PARTY_MEMBER::JEFF
    // Overlapping static entry reached from 0xC1C031.
    case 0xC1C033: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:23 BNE @UNKNOWN0
    case 0xC1C034: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:24 LDA #0
    case 0xC1C036: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C1BA.asm:24 LDA #0
    // Overlapping static entry reached from 0xC1C036.
    case 0xC1C038: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:25 JMP @UNKNOWN12
    case 0xC1C039: cpu.execute_instruction<0x4C>(0x00C18A, 3); return true;
    // src/unknown/C1/C1C1BA.asm:27 TXY
    case 0xC1C03C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:28 DEY
    case 0xC1C03D: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:29 STY @LOCAL03
    case 0xC1C03E: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/unknown/C1/C1C1BA.asm:30 LDX #1
    case 0xC1C040: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:30 LDX #1
    // Overlapping static entry reached from 0xC1C040.
    case 0xC1C042: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1C1BA.asm:31 STX @LOCAL02
    case 0xC1C043: cpu.execute_instruction<0x86>(0x000011, 2); return true;
    // src/unknown/C1/C1C1BA.asm:32 JMP @UNKNOWN8
    case 0xC1C045: cpu.execute_instruction<0x4C>(0x00C10D, 3); return true;
    // src/unknown/C1/C1C1BA.asm:34 LDY @LOCAL03
    case 0xC1C048: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1C1BA.asm:35 TYA
    case 0xC1C04A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:36 BEQ @UNKNOWN2
    case 0xC1C04B: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:37 CMP #PARTY_MEMBER::PAULA - 1
    case 0xC1C04D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:37 CMP #PARTY_MEMBER::PAULA - 1
    // Overlapping static entry reached from 0xC1C04D.
    case 0xC1C04F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:38 BEQ @UNKNOWN3
    case 0xC1C050: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:39 CMP #PARTY_MEMBER::POO - 1
    case 0xC1C052: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1C1BA.asm:39 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC1C052.
    case 0xC1C054: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:40 BEQ @UNKNOWN4
    case 0xC1C055: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:41 BRA @UNKNOWN5
    case 0xC1C057: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C1/C1C1BA.asm:43 LDA @LOCAL00
    case 0xC1C059: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C1C1BA.asm:44 CLC
    case 0xC1C05B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:45 ADC #psi_ability::ness_level
    case 0xC1C05C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C1/C1C1BA.asm:45 ADC #psi_ability::ness_level
    // Overlapping static entry reached from 0xC1C05C.
    case 0xC1C05E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1C1BA.asm:46 CLC
    case 0xC1C05F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:47 ADC @VIRTUAL06
    case 0xC1C060: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:48 STA @VIRTUAL06
    case 0xC1C062: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C064: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:50 LDA [@VIRTUAL06]
    case 0xC1C066: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:51 STA @VIRTUAL00
    case 0xC1C068: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1C1BA.asm:52 STA @LOCAL01
    case 0xC1C06A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C1BA.asm:53 BRA @UNKNOWN5
    case 0xC1C06C: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C1/C1C1BA.asm:56 LDA @LOCAL00
    case 0xC1C06E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C1C1BA.asm:57 CLC
    case 0xC1C070: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:58 ADC #psi_ability::paula_level
    case 0xC1C071: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C1/C1C1BA.asm:58 ADC #psi_ability::paula_level
    // Overlapping static entry reached from 0xC1C071.
    case 0xC1C073: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1C1BA.asm:59 CLC
    case 0xC1C074: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:60 ADC @VIRTUAL06
    case 0xC1C075: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:61 STA @VIRTUAL06
    case 0xC1C077: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C079: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:63 LDA [@VIRTUAL06]
    case 0xC1C07B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:64 STA @VIRTUAL00
    case 0xC1C07D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1C1BA.asm:65 STA @LOCAL01
    case 0xC1C07F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C1BA.asm:66 BRA @UNKNOWN5
    case 0xC1C081: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C1/C1C1BA.asm:69 LDA @LOCAL00
    case 0xC1C083: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C1C1BA.asm:70 CLC
    case 0xC1C085: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:71 ADC #psi_ability::poo_level
    case 0xC1C086: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C1/C1C1BA.asm:71 ADC #psi_ability::poo_level
    // Overlapping static entry reached from 0xC1C086.
    case 0xC1C088: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1C1BA.asm:72 CLC
    case 0xC1C089: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:73 ADC @VIRTUAL06
    case 0xC1C08A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:74 STA @VIRTUAL06
    case 0xC1C08C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C08E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:76 LDA [@VIRTUAL06]
    case 0xC1C090: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:77 STA @VIRTUAL00
    case 0xC1C092: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1C1BA.asm:78 STA @LOCAL01
    case 0xC1C094: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C1BA.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C096: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:81 LDA @LOCAL01
    case 0xC1C098: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C1C1BA.asm:82 STA @VIRTUAL00
    case 0xC1C09A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1C1BA.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC1C09C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:84 LDA @VIRTUAL00
    case 0xC1C09E: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1C1BA.asm:85 AND #$00FF
    case 0xC1C0A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C1BA.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC1C0A0.
    case 0xC1C0A2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:86 BEQ @UNKNOWN7
    case 0xC1C0A3: cpu.execute_instruction<0xF0>(0x000063, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:87 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C0A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009A06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:87 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C0A5.
    case 0xC1C0A7: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C1BA.asm:87 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C0A8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:87 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C0AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:87 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C0AA.
    case 0xC1C0AC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C1BA.asm:87 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C0AD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1C1BA.asm:88 TXA
    case 0xC1C0AF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C0B0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C0B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C0B3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C0B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C0B6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C0B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C0B9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:90 STA @LOCAL00
    case 0xC1C0BB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:504 INC
    // Macro caller: src/unknown/C1/C1C1BA.asm:91 OPTIMIZED_ADD psi_ability::usability
    case 0xC1C0BD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:505 INC
    // Macro caller: src/unknown/C1/C1C1BA.asm:91 OPTIMIZED_ADD psi_ability::usability
    case 0xC1C0BE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:506 INC
    // Macro caller: src/unknown/C1/C1C1BA.asm:91 OPTIMIZED_ADD psi_ability::usability
    case 0xC1C0BF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1C1BA.asm:92 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C0C0: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1C1BA.asm:92 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C0C2: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1C1BA.asm:92 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C0C4: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1C1BA.asm:92 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C0C6: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:93 CLC
    case 0xC1C0C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:94 ADC @VIRTUAL0A
    case 0xC1C0C9: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1C1BA.asm:95 STA @VIRTUAL0A
    case 0xC1C0CB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1C1BA.asm:96 LDA [@VIRTUAL0A]
    case 0xC1C0CD: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1C1BA.asm:97 AND #$00FF
    case 0xC1C0CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C1BA.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC1C0CF.
    case 0xC1C0D1: cpu.execute_instruction<0x00>(0x000025, 2); return true;
    // src/unknown/C1/C1C1BA.asm:98 AND @VIRTUAL02
    case 0xC1C0D2: cpu.execute_instruction<0x25>(0x000002, 2); return true;
    // src/unknown/C1/C1C1BA.asm:99 BEQ @UNKNOWN7
    case 0xC1C0D4: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/unknown/C1/C1C1BA.asm:100 TYA
    case 0xC1C0D6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:101 LDY #.SIZEOF(char_struct)
    case 0xC1C0D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1C1BA.asm:101 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1C0D7.
    case 0xC1C0D9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1C1BA.asm:102 JSL MULT168
    case 0xC1C0DA: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1C1BA.asm:103 TAX
    case 0xC1C0DE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C0DF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:105 LDA @VIRTUAL00
    case 0xC1C0E1: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1C1BA.asm:106 CMP PARTY_CHARACTERS + char_struct::level,X
    case 0xC1C0E3: cpu.execute_instruction<0xDD>(0x009C83, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C1/C1C1BA.asm:107 BGT @UNKNOWN7
    case 0xC1C0E6: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C1/C1C1BA.asm:107 BGT @UNKNOWN7
    case 0xC1C0E8: cpu.execute_instruction<0xB0>(0x00001E, 2); return true;
    // src/unknown/C1/C1C1BA.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC1C0EA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:109 LDA @LOCAL04
    case 0xC1C0EC: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C1/C1C1BA.asm:110 STA @VIRTUAL04
    case 0xC1C0EE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:111 LDA @LOCAL00
    case 0xC1C0F0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:501 INC
    // Macro caller: src/unknown/C1/C1C1BA.asm:112 OPTIMIZED_ADD psi_ability::category
    case 0xC1C0F2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:502 INC
    // Macro caller: src/unknown/C1/C1C1BA.asm:112 OPTIMIZED_ADD psi_ability::category
    case 0xC1C0F3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:113 CLC
    case 0xC1C0F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:114 ADC @VIRTUAL06
    case 0xC1C0F5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:115 STA @VIRTUAL06
    case 0xC1C0F7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:116 LDA [@VIRTUAL06]
    case 0xC1C0F9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:117 AND #$00FF
    case 0xC1C0FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C1BA.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC1C0FB.
    case 0xC1C0FD: cpu.execute_instruction<0x00>(0x000025, 2); return true;
    // src/unknown/C1/C1C1BA.asm:118 AND @VIRTUAL04
    case 0xC1C0FE: cpu.execute_instruction<0x25>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:119 BEQ @UNKNOWN7
    case 0xC1C100: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:120 LDA #1
    case 0xC1C102: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:120 LDA #1
    // Overlapping static entry reached from 0xC1C102.
    case 0xC1C104: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:121 JMP @UNKNOWN12
    case 0xC1C105: cpu.execute_instruction<0x4C>(0x00C18A, 3); return true;
    // src/unknown/C1/C1C1BA.asm:123 LDX @LOCAL02
    case 0xC1C108: cpu.execute_instruction<0xA6>(0x000011, 2); return true;
    // src/unknown/C1/C1C1BA.asm:124 INX
    case 0xC1C10A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:125 STX @LOCAL02
    case 0xC1C10B: cpu.execute_instruction<0x86>(0x000011, 2); return true;
    // src/unknown/C1/C1C1BA.asm:127 REP #PROC_FLAGS::ACCUM8
    case 0xC1C10D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:128 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C10F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009A06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:128 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C10F.
    case 0xC1C111: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C1BA.asm:128 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C112: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:128 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C114: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:128 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C114.
    case 0xC1C116: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C1BA.asm:128 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C117: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1C1BA.asm:129 TXA
    case 0xC1C119: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C11A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C11C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C11D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C11F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C120: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C122: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C123: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:131 STA @LOCAL00
    case 0xC1C125: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C1/C1C1BA.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1C127: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C1/C1C1BA.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1C129: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C1/C1C1BA.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1C12B: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C1/C1C1BA.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1C12D: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:134 CLC
    case 0xC1C12F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:135 ADC @VIRTUAL0A
    case 0xC1C130: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1C1BA.asm:136 STA @VIRTUAL0A
    case 0xC1C132: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1C1BA.asm:137 LDA [@VIRTUAL0A]
    case 0xC1C134: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1C1BA.asm:138 AND #$00FF
    case 0xC1C136: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C1BA.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC1C136.
    case 0xC1C138: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1C1BA.asm:139 BNEL @UNKNOWN1
    case 0xC1C139: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1C1BA.asm:139 BNEL @UNKNOWN1
    case 0xC1C13B: cpu.execute_instruction<0x4C>(0x00C048, 3); return true;
    // src/unknown/C1/C1C1BA.asm:140 LDY @LOCAL03
    case 0xC1C13E: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1C1BA.asm:141 BNE @UNKNOWN10
    case 0xC1C140: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:142 LDA @VIRTUAL02
    case 0xC1C142: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C1BA.asm:143 AND #$0001
    case 0xC1C144: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:143 AND #$0001
    // Overlapping static entry reached from 0xC1C144.
    case 0xC1C146: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:144 BEQ @UNKNOWN10
    case 0xC1C147: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C1/C1C1BA.asm:145 LDA GAME_STATE + game_state::party_psi
    case 0xC1C149: cpu.execute_instruction<0xAD>(0x009AEA, 3); return true;
    // src/unknown/C1/C1C1BA.asm:146 AND #$00FF
    case 0xC1C14C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C1BA.asm:146 AND #$00FF
    // Overlapping static entry reached from 0xC1C14C.
    case 0xC1C14E: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C1/C1C1BA.asm:147 AND #$0001
    case 0xC1C14F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:147 AND #$0001
    // Overlapping static entry reached from 0xC1C14F.
    case 0xC1C151: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:148 BEQ @UNKNOWN10
    case 0xC1C152: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C1/C1C1BA.asm:149 LDA @LOCAL04
    case 0xC1C154: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C1/C1C1BA.asm:150 STA @VIRTUAL04
    case 0xC1C156: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:151 AND #$0008
    case 0xC1C158: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/unknown/C1/C1C1BA.asm:151 AND #$0008
    // Overlapping static entry reached from 0xC1C158.
    case 0xC1C15A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:152 BEQ @UNKNOWN10
    case 0xC1C15B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1C1BA.asm:153 LDA #1
    case 0xC1C15D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:153 LDA #1
    // Overlapping static entry reached from 0xC1C15D.
    case 0xC1C15F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1C1BA.asm:154 BRA @UNKNOWN12
    case 0xC1C160: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C1/C1C1BA.asm:156 CPY #3
    case 0xC1C162: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/unknown/C1/C1C1BA.asm:156 CPY #3
    // Overlapping static entry reached from 0xC1C162.
    case 0xC1C164: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:157 BNE @UNKNOWN11
    case 0xC1C165: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:158 LDA @VIRTUAL02
    case 0xC1C167: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C1BA.asm:159 AND #$0002
    case 0xC1C169: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C1/C1C1BA.asm:159 AND #$0002
    // Overlapping static entry reached from 0xC1C169.
    case 0xC1C16B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:160 BEQ @UNKNOWN11
    case 0xC1C16C: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C1/C1C1BA.asm:161 LDA GAME_STATE + game_state::party_psi
    case 0xC1C16E: cpu.execute_instruction<0xAD>(0x009AEA, 3); return true;
    // src/unknown/C1/C1C1BA.asm:162 AND #$00FF
    case 0xC1C171: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C1BA.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC1C171.
    case 0xC1C173: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C1/C1C1BA.asm:163 AND #$0006
    case 0xC1C174: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000006, 2); else cpu.execute_instruction<0x29>(0x000006, 3); return true;
    // src/unknown/C1/C1C1BA.asm:163 AND #$0006
    // Overlapping static entry reached from 0xC1C174.
    case 0xC1C176: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:164 BEQ @UNKNOWN11
    case 0xC1C177: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C1/C1C1BA.asm:165 LDA @LOCAL04
    case 0xC1C179: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C1/C1C1BA.asm:166 STA @VIRTUAL04
    case 0xC1C17B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:167 AND #$0001
    case 0xC1C17D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:167 AND #$0001
    // Overlapping static entry reached from 0xC1C17D.
    case 0xC1C17F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:168 BEQ @UNKNOWN11
    case 0xC1C180: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1C1BA.asm:169 LDA #1
    case 0xC1C182: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:169 LDA #1
    // Overlapping static entry reached from 0xC1C182.
    case 0xC1C184: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1C1BA.asm:170 BRA @UNKNOWN12
    case 0xC1C185: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1C1BA.asm:172 LDA #0
    case 0xC1C187: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C1BA.asm:172 LDA #0
    // Overlapping static entry reached from 0xC1C187.
    case 0xC1C189: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C1BA.asm:174 END_C_FUNCTION
    case 0xC1C18A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1C1BA.asm:174 END_C_FUNCTION
    case 0xC1C18B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C32A.asm (unresolved).
bool execute_unresolved_c1_c1c32a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C32A.asm:3 BEGIN_C_FUNCTION
    case 0xC1C18C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    case 0xC1C18E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    case 0xC1C18F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    case 0xC1C190: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    case 0xC1C191: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C191.
    case 0xC1C193: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    case 0xC1C194: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    case 0xC1C195: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C32A.asm:12 STY @LOCAL01
    case 0xC1C196: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C1C32A.asm:12 STY @LOCAL01
    // Overlapping static entry reached from 0xC1C193.
    case 0xC1C197: cpu.execute_instruction<0x10>(0x000086, 2); return true;
    // src/unknown/C1/C1C32A.asm:13 STX @LOCAL00
    case 0xC1C198: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1C32A.asm:13 STX @LOCAL00
    // Overlapping static entry reached from 0xC1C197.
    case 0xC1C199: cpu.execute_instruction<0x0E>(0x000285, 3); return true;
    // src/unknown/C1/C1C32A.asm:14 STA @VIRTUAL02
    case 0xC1C19A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C32A.asm:15 LDA #0
    case 0xC1C19C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C32A.asm:15 LDA #0
    // Overlapping static entry reached from 0xC1C19C.
    case 0xC1C19E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1C32A.asm:16 STA @VIRTUAL04
    case 0xC1C19F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C32A.asm:17 LDA @VIRTUAL02
    case 0xC1C1A1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C32A.asm:18 CMP #3
    case 0xC1C1A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1C32A.asm:18 CMP #3
    // Overlapping static entry reached from 0xC1C1A3.
    case 0xC1C1A5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C32A.asm:19 BEQ @UNKNOWN0
    case 0xC1C1A6: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C1/C1C32A.asm:20 LDA @VIRTUAL02
    case 0xC1C1A8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C32A.asm:21 JSR UNKNOWN_C1C165
    case 0xC1C1AA: cpu.execute_instruction<0x20>(0x00BFC7, 3); return true;
    // src/unknown/C1/C1C32A.asm:22 CMP #0
    case 0xC1C1AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1C32A.asm:22 CMP #0
    // Overlapping static entry reached from 0xC1C1AD.
    case 0xC1C1AF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C32A.asm:23 BEQ @UNKNOWN0
    case 0xC1C1B0: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C1/C1C32A.asm:24 LDY @LOCAL01
    case 0xC1C1B2: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1C32A.asm:25 LDX @LOCAL00
    case 0xC1C1B4: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1C32A.asm:26 LDA @VIRTUAL02
    case 0xC1C1B6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C32A.asm:27 JSR UNKNOWN_C1C1BA
    case 0xC1C1B8: cpu.execute_instruction<0x20>(0x00C01C, 3); return true;
    // src/unknown/C1/C1C32A.asm:28 CMP #0
    case 0xC1C1BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1C32A.asm:28 CMP #0
    // Overlapping static entry reached from 0xC1C1BB.
    case 0xC1C1BD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C32A.asm:29 BEQ @UNKNOWN0
    case 0xC1C1BE: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1C32A.asm:30 LDA #1
    case 0xC1C1C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C32A.asm:30 LDA #1
    // Overlapping static entry reached from 0xC1C1C0.
    case 0xC1C1C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1C32A.asm:31 STA @VIRTUAL04
    case 0xC1C1C3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C32A.asm:33 LDA @VIRTUAL04
    case 0xC1C1C5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C32A.asm:34 END_C_FUNCTION
    case 0xC1C1C7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1C32A.asm:34 END_C_FUNCTION
    case 0xC1C1C8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C367.asm (unresolved).
bool execute_unresolved_c1_c1c367_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C367.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1C1C9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1C367.asm:6 LDY #15
    case 0xC1C1CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000F, 2); else cpu.execute_instruction<0xA0>(0x00000F, 3); return true;
    // src/unknown/C1/C1C367.asm:6 LDY #15
    // Overlapping static entry reached from 0xC1C1CB.
    case 0xC1C1CD: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1C367.asm:7 LDX #1
    case 0xC1C1CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1C367.asm:7 LDX #1
    // Overlapping static entry reached from 0xC1C1CE.
    case 0xC1C1D0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1C367.asm:8 JSR UNKNOWN_C1C32A
    case 0xC1C1D1: cpu.execute_instruction<0x20>(0x00C18C, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1C367.asm:9 END_C_FUNCTION
    case 0xC1C1D4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C373.asm (unresolved).
bool execute_unresolved_c1_c1c373_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C373.asm:3 BEGIN_C_FUNCTION
    case 0xC1C1D5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C373.asm:7 END_STACK_VARS
    case 0xC1C1D7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C373.asm:7 END_STACK_VARS
    case 0xC1C1D8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C373.asm:7 END_STACK_VARS
    case 0xC1C1D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C373.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C1D9.
    case 0xC1C1DB: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C373.asm:7 END_STACK_VARS
    case 0xC1C1DC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1C373.asm:8 LDA #0
    case 0xC1C1DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C373.asm:8 LDA #0
    // Overlapping static entry reached from 0xC1C1DD.
    case 0xC1C1DF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1C373.asm:9 STA @VIRTUAL02
    case 0xC1C1E0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C373.asm:10 BRA @UNKNOWN2
    case 0xC1C1E2: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C1/C1C373.asm:12 LDY #15
    case 0xC1C1E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000F, 2); else cpu.execute_instruction<0xA0>(0x00000F, 3); return true;
    // src/unknown/C1/C1C373.asm:12 LDY #15
    // Overlapping static entry reached from 0xC1C1E4.
    case 0xC1C1E6: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1C373.asm:13 LDX #1
    case 0xC1C1E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1C373.asm:13 LDX #1
    // Overlapping static entry reached from 0xC1C1E7.
    case 0xC1C1E9: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1C373.asm:14 STX @LOCAL00
    case 0xC1C1EA: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1C373.asm:16 LDA @VIRTUAL02
    case 0xC1C1EC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C373.asm:17 CLC
    case 0xC1C1EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C373.asm:18 ADC #.LOWORD(GAME_STATE)
    case 0xC1C1EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C1C373.asm:18 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1C1EF.
    case 0xC1C1F1: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C1C373.asm:19 TAX
    case 0xC1C1F2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C373.asm:20 LDA a:game_state::party_members,X
    case 0xC1C1F3: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C1/C1C373.asm:25 AND #$00FF
    case 0xC1C1F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C373.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC1C1F6.
    case 0xC1C1F8: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1C373.asm:26 LDX @LOCAL00
    case 0xC1C1F9: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1C373.asm:27 JSR UNKNOWN_C1C32A
    case 0xC1C1FB: cpu.execute_instruction<0x20>(0x00C18C, 3); return true;
    // src/unknown/C1/C1C373.asm:28 CMP #0
    case 0xC1C1FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1C373.asm:28 CMP #0
    // Overlapping static entry reached from 0xC1C1FE.
    case 0xC1C200: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C373.asm:29 BEQ @UNKNOWN1
    case 0xC1C201: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1C373.asm:30 LDA @VIRTUAL02
    case 0xC1C203: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C373.asm:31 INC
    case 0xC1C205: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C373.asm:32 BRA @UNKNOWN3
    case 0xC1C206: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C1/C1C373.asm:34 INC @VIRTUAL02
    case 0xC1C208: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1C373.asm:36 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1C20A: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C1/C1C373.asm:37 AND #$00FF
    case 0xC1C20D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C373.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC1C20D.
    case 0xC1C20F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1C373.asm:38 STA @VIRTUAL04
    case 0xC1C210: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C373.asm:39 LDA @VIRTUAL02
    case 0xC1C212: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C373.asm:40 CMP @VIRTUAL04
    case 0xC1C214: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C1/C1C373.asm:41 BCC @UNKNOWN0
    case 0xC1C216: cpu.execute_instruction<0x90>(0x0000CC, 2); return true;
    // src/unknown/C1/C1C373.asm:42 LDA #0
    case 0xC1C218: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C373.asm:42 LDA #0
    // Overlapping static entry reached from 0xC1C218.
    case 0xC1C21A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C373.asm:44 END_C_FUNCTION
    case 0xC1C21B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1C373.asm:44 END_C_FUNCTION
    case 0xC1C21C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C3B6.asm (unresolved).
bool execute_unresolved_c1_c1c3b6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C3B6.asm:3 BEGIN_C_FUNCTION
    case 0xC1C21D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C3B6.asm:8 END_STACK_VARS
    case 0xC1C21F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C3B6.asm:8 END_STACK_VARS
    case 0xC1C220: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C3B6.asm:8 END_STACK_VARS
    case 0xC1C221: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C3B6.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C221.
    case 0xC1C223: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C3B6.asm:8 END_STACK_VARS
    case 0xC1C224: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1C3B6.asm:9 LDA #0
    case 0xC1C225: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C3B6.asm:9 LDA #0
    // Overlapping static entry reached from 0xC1C225.
    case 0xC1C227: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1C3B6.asm:10 STA @VIRTUAL04
    case 0xC1C228: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C3B6.asm:11 STA @VIRTUAL02
    case 0xC1C22A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:12 STA @LOCAL01
    case 0xC1C22C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C3B6.asm:13 BRA @UNKNOWN2
    case 0xC1C22E: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C1/C1C3B6.asm:15 LDY #15
    case 0xC1C230: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000F, 2); else cpu.execute_instruction<0xA0>(0x00000F, 3); return true;
    // src/unknown/C1/C1C3B6.asm:15 LDY #15
    // Overlapping static entry reached from 0xC1C230.
    case 0xC1C232: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1C3B6.asm:16 LDX #1
    case 0xC1C233: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1C3B6.asm:16 LDX #1
    // Overlapping static entry reached from 0xC1C233.
    case 0xC1C235: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1C3B6.asm:17 STX @LOCAL00
    case 0xC1C236: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1C3B6.asm:18 LDA @LOCAL01
    case 0xC1C238: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C1C3B6.asm:19 STA @VIRTUAL02
    case 0xC1C23A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:21 CLC
    case 0xC1C23C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C3B6.asm:22 ADC #.LOWORD(GAME_STATE)
    case 0xC1C23D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C1C3B6.asm:22 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1C23D.
    case 0xC1C23F: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C1C3B6.asm:23 TAX
    case 0xC1C240: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C3B6.asm:24 LDA a:game_state::party_members,X
    case 0xC1C241: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C1/C1C3B6.asm:29 AND #$00FF
    case 0xC1C244: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C3B6.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1C244.
    case 0xC1C246: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1C3B6.asm:30 LDX @LOCAL00
    case 0xC1C247: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1C3B6.asm:31 JSR UNKNOWN_C1C32A
    case 0xC1C249: cpu.execute_instruction<0x20>(0x00C18C, 3); return true;
    // src/unknown/C1/C1C3B6.asm:32 CMP #0
    case 0xC1C24C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1C3B6.asm:32 CMP #0
    // Overlapping static entry reached from 0xC1C24C.
    case 0xC1C24E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C3B6.asm:33 BEQ @UNKNOWN1
    case 0xC1C24F: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:34 INC @VIRTUAL04
    case 0xC1C251: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C1C3B6.asm:36 INC @VIRTUAL02
    case 0xC1C253: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:37 LDA @VIRTUAL02
    case 0xC1C255: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:38 STA @LOCAL01
    case 0xC1C257: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C3B6.asm:40 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1C259: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C1/C1C3B6.asm:41 AND #$00FF
    case 0xC1C25C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C3B6.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC1C25C.
    case 0xC1C25E: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C1/C1C3B6.asm:42 PHA
    case 0xC1C25F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1C3B6.asm:43 LDA @VIRTUAL02
    case 0xC1C260: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:44 PLY
    case 0xC1C262: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C1C3B6.asm:45 STY @VIRTUAL02
    case 0xC1C263: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:46 CMP @VIRTUAL02
    case 0xC1C265: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:47 BCC @UNKNOWN0
    case 0xC1C267: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // src/unknown/C1/C1C3B6.asm:48 LDA @VIRTUAL04
    case 0xC1C269: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C3B6.asm:49 END_C_FUNCTION
    case 0xC1C26B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1C3B6.asm:49 END_C_FUNCTION
    case 0xC1C26C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C853.asm (unresolved).
bool execute_unresolved_c1_c1c853_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C853.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1C67E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    case 0xC1C680: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    case 0xC1C681: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    case 0xC1C682: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    case 0xC1C683: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C683.
    case 0xC1C685: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    case 0xC1C686: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    case 0xC1C687: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C853.asm:9 TAY
    case 0xC1C688: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1C853.asm:10 STY @LOCAL01
    case 0xC1C689: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1C853.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1C68B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1C853.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1C68B.
    case 0xC1C68D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1C853.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1C68E: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C1C853.asm:15 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1C691: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C1/C1C853.asm:16 AND #$00FF
    case 0xC1C694: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C853.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC1C694.
    case 0xC1C696: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1C853.asm:17 CMP #1
    case 0xC1C697: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1C853.asm:17 CMP #1
    // Overlapping static entry reached from 0xC1C697.
    case 0xC1C699: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C853.asm:18 BEQ @UNKNOWN0
    case 0xC1C69A: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C1C853.asm:19 LDA #1
    case 0xC1C69C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C853.asm:19 LDA #1
    // Overlapping static entry reached from 0xC1C69C.
    case 0xC1C69E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1C853.asm:20 STA PAGINATION_WINDOW
    case 0xC1C69F: cpu.execute_instruction<0x8D>(0x0061F2, 3); return true;
    // src/unknown/C1/C1C853.asm:22 LDY @LOCAL01
    case 0xC1C6A2: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C1C853.asm:23 TYA
    case 0xC1C6A4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C853.asm:24 DEC
    case 0xC1C6A5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1C853.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC1C6A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1C853.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1C6A6.
    case 0xC1C6A8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1C853.asm:26 JSL MULT168
    case 0xC1C6A9: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1C853.asm:27 CLC
    case 0xC1C6AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C853.asm:28 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    case 0xC1C6AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C1/C1C853.asm:28 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    // Overlapping static entry reached from 0xC1C6AE.
    case 0xC1C6B0: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1C853.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1C6B1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1C853.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1C6B3: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1C853.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1C6B4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1C853.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1C6B6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1C853.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1C6B7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1C853.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1C6B9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1C853.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC1C6BB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1C853.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C6BD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1C853.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C6BF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1C853.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C6C1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1C853.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C6C3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C853.asm:32 LDX #.SIZEOF(char_struct::name)
    case 0xC1C6C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1C853.asm:32 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1C6C5.
    case 0xC1C6C7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1C853.asm:33 LDA #1
    case 0xC1C6C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C853.asm:33 LDA #1
    // Overlapping static entry reached from 0xC1C6C8.
    case 0xC1C6CA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1C853.asm:34 JSL SET_WINDOW_TITLE
    case 0xC1C6CB: cpu.execute_instruction<0x22>(0xC2030C, 4); return true;
    // src/unknown/C1/C1C853.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C6CF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C853.asm:36 LDA #1
    case 0xC1C6D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/unknown/C1/C1C853.asm:37 STA @LOCAL00
    case 0xC1C6D3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1C853.asm:37 STA @LOCAL00
    // Overlapping static entry reached from 0xC1C6D1.
    case 0xC1C6D4: cpu.execute_instruction<0x0E>(0x000FA9, 3); return true;
    // src/unknown/C1/C1C853.asm:38 LDA #15
    case 0xC1C6D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00850F, 3); return true;
    // src/unknown/C1/C1C853.asm:39 STA @LOCAL00+1
    case 0xC1C6D7: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C1/C1C853.asm:39 STA @LOCAL00+1
    // Overlapping static entry reached from 0xC1C6D5.
    case 0xC1C6D8: cpu.execute_instruction<0x0F>(0xC212A4, 4); return true;
    // src/unknown/C1/C1C853.asm:40 LDY @LOCAL01
    case 0xC1C6D9: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C1C853.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC1C6DB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1C853.asm:41 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1C6D8.
    case 0xC1C6DC: cpu.execute_instruction<0x20>(0x002098, 3); return true;
    // src/unknown/C1/C1C853.asm:42 TYA
    case 0xC1C6DD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C853.asm:43 JSR GENERATE_PSI_LIST
    case 0xC1C6DE: cpu.execute_instruction<0x20>(0x00C2B8, 3); return true;
    // src/unknown/C1/C1C853.asm:43 JSR GENERATE_PSI_LIST
    // Overlapping static entry reached from 0xC1C6DC.
    case 0xC1C6DF: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // src/unknown/C1/C1C853.asm:43 JSR GENERATE_PSI_LIST
    // Overlapping static entry reached from 0xC1C6DF.
    case 0xC1C6E0: cpu.execute_instruction<0xC2>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C853.asm:44 END_C_FUNCTION
    case 0xC1C6E1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1C853.asm:44 END_C_FUNCTION
    case 0xC1C6E2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C8BC.asm (unresolved).
bool execute_unresolved_c1_c1c8bc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C8BC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1C6E3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    case 0xC1C6E5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    case 0xC1C6E6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    case 0xC1C6E7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    case 0xC1C6E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C6E8.
    case 0xC1C6EA: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    case 0xC1C6EB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    case 0xC1C6EC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:10 TAY
    case 0xC1C6ED: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:11 STY @LOCAL02
    case 0xC1C6EE: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C1C8BC.asm:13 JSR SET_INSTANT_PRINTING
    case 0xC1C6F0: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1C8BC.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN04
    case 0xC1C6F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1C8BC.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN04
    // Overlapping static entry reached from 0xC1C6F3.
    case 0xC1C6F5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1C8BC.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN04
    case 0xC1C6F6: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:20 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C6F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009A06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:20 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C6F9.
    case 0xC1C6FB: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C8BC.asm:20 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C6FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:20 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C6FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:20 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C6FE.
    case 0xC1C700: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:20 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C701: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1C8BC.asm:21 LDY @LOCAL02
    case 0xC1C703: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1C8BC.asm:22 TYA
    case 0xC1C705: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C706: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C708: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C709: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C70B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C70C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C70E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C70F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1C8BC.asm:24 STA @LOCAL01
    case 0xC1C711: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1C8BC.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C713: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1C8BC.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C715: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C717: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C719: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1C8BC.asm:26 CLC
    case 0xC1C71B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:27 ADC @VIRTUAL0A
    case 0xC1C71C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1C8BC.asm:28 STA @VIRTUAL0A
    case 0xC1C71E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1C8BC.asm:29 LDA [@VIRTUAL0A]
    case 0xC1C720: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1C8BC.asm:30 AND #$00FF
    case 0xC1C722: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C8BC.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC1C722.
    case 0xC1C724: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1C8BC.asm:31 CMP #4
    case 0xC1C725: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1C8BC.asm:31 CMP #4
    // Overlapping static entry reached from 0xC1C725.
    case 0xC1C727: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1C8BC.asm:32 BNE @UNKNOWN0
    case 0xC1C728: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C72A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A3, 2); else cpu.execute_instruction<0xA9>(0x00ECA3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C72A.
    case 0xC1C72C: cpu.execute_instruction<0xEC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C72D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C72F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C72F.
    case 0xC1C731: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C732: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1C8BC.asm:34 BRA @UNKNOWN1
    case 0xC1C734: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:36 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1C736: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:36 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C736.
    case 0xC1C738: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C8BC.asm:36 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1C739: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:36 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1C73B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:36 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C73B.
    case 0xC1C73D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:36 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1C73E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1C8BC.asm:37 LDA @LOCAL01
    case 0xC1C740: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1C8BC.asm:38 INC
    case 0xC1C742: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:39 INC
    case 0xC1C743: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:40 INC
    case 0xC1C744: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:41 INC
    case 0xC1C745: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:42 CLC
    case 0xC1C746: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:43 ADC @VIRTUAL06
    case 0xC1C747: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:44 STA @VIRTUAL06
    case 0xC1C749: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:45 LDA [@VIRTUAL06]
    case 0xC1C74B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C74D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C74F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C750: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C752: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C753: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:47 STA @LOCAL01
    case 0xC1C754: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1C8BC.asm:48 INC
    case 0xC1C756: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1C8BC.asm:49 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C757: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1C8BC.asm:49 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C759: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:49 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C75B: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:49 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C75D: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C1/C1C8BC.asm:50 CLC
    case 0xC1C75F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:51 ADC @VIRTUAL06
    case 0xC1C760: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:52 STA @VIRTUAL06
    case 0xC1C762: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:53 LDA [@VIRTUAL06]
    case 0xC1C764: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:54 AND #$00FF
    case 0xC1C766: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C8BC.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC1C766.
    case 0xC1C768: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:549 STA scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:55 OPTIMIZED_MULT @VIRTUAL04, PSI_TARGET_TEXT_LENGTH
    case 0xC1C769: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:550 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:55 OPTIMIZED_MULT @VIRTUAL04, PSI_TARGET_TEXT_LENGTH
    case 0xC1C76B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:551 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:55 OPTIMIZED_MULT @VIRTUAL04, PSI_TARGET_TEXT_LENGTH
    case 0xC1C76C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:552 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:55 OPTIMIZED_MULT @VIRTUAL04, PSI_TARGET_TEXT_LENGTH
    case 0xC1C76D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:55 OPTIMIZED_MULT @VIRTUAL04, PSI_TARGET_TEXT_LENGTH
    case 0xC1C76E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1C8BC.asm:56 STA @VIRTUAL02
    case 0xC1C770: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C8BC.asm:57 LDA @LOCAL01
    case 0xC1C772: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1C8BC.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C774: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1C8BC.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C776: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C778: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C77A: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C1/C1C8BC.asm:59 CLC
    case 0xC1C77C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:60 ADC @VIRTUAL06
    case 0xC1C77D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:61 STA @VIRTUAL06
    case 0xC1C77F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:62 LDA [@VIRTUAL06]
    case 0xC1C781: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:63 AND #$00FF
    case 0xC1C783: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C8BC.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC1C783.
    case 0xC1C785: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1C8BC.asm:64 OPTIMIZED_MULT @VIRTUAL04, 5 * PSI_TARGET_TEXT_LENGTH
    case 0xC1C786: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1C8BC.asm:64 OPTIMIZED_MULT @VIRTUAL04, 5 * PSI_TARGET_TEXT_LENGTH
    // Overlapping static entry reached from 0xC1C786.
    case 0xC1C788: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C1C8BC.asm:64 OPTIMIZED_MULT @VIRTUAL04, 5 * PSI_TARGET_TEXT_LENGTH
    case 0xC1C789: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1C8BC.asm:65 CLC
    case 0xC1C78D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:66 ADC @VIRTUAL02
    case 0xC1C78E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1C8BC.asm:67 PHA
    case 0xC1C790: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C791: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A3, 2); else cpu.execute_instruction<0xA9>(0x00ECA3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C791.
    case 0xC1C793: cpu.execute_instruction<0xEC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C794: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C796: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C796.
    case 0xC1C798: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C799: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1C8BC.asm:69 PLA
    case 0xC1C79B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:70 CLC
    case 0xC1C79C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:71 ADC @VIRTUAL06
    case 0xC1C79D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:72 STA @VIRTUAL06
    case 0xC1C79F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1C8BC.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C7A1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1C8BC.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C7A3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C7A5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C7A7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C8BC.asm:75 LDA #PSI_TARGET_TEXT_LENGTH
    case 0xC1C7A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C1/C1C8BC.asm:75 LDA #PSI_TARGET_TEXT_LENGTH
    // Overlapping static entry reached from 0xC1C7A9.
    case 0xC1C7AB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1C8BC.asm:76 JSR PRINT_STRING
    case 0xC1C7AC: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C1C8BC.asm:81 LDX #1
    case 0xC1C7AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1C8BC.asm:81 LDX #1
    // Overlapping static entry reached from 0xC1C7AF.
    case 0xC1C7B1: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1C8BC.asm:82 LDA #0
    case 0xC1C7B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C8BC.asm:82 LDA #0
    // Overlapping static entry reached from 0xC1C7B2.
    case 0xC1C7B4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1C8BC.asm:83 JSR UNKNOWN_C438A5
    case 0xC1C7B5: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:84 LOADPTR PP_COST_TEXT, @LOCAL00
    case 0xC1C7B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009B, 2); else cpu.execute_instruction<0xA9>(0x00EC9B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:84 LOADPTR PP_COST_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC1C7B8.
    case 0xC1C7BA: cpu.execute_instruction<0xEC>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C8BC.asm:84 LOADPTR PP_COST_TEXT, @LOCAL00
    case 0xC1C7BB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:84 LOADPTR PP_COST_TEXT, @LOCAL00
    case 0xC1C7BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:84 LOADPTR PP_COST_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC1C7BD.
    case 0xC1C7BF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:84 LOADPTR PP_COST_TEXT, @LOCAL00
    case 0xC1C7C0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C8BC.asm:86 LDA #.LOWORD(-1)
    case 0xC1C7C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1C8BC.asm:86 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1C7C2.
    case 0xC1C7C4: cpu.execute_instruction<0xFF>(0x14DD20, 4); return true;
    // src/unknown/C1/C1C8BC.asm:87 JSR PRINT_STRING
    case 0xC1C7C5: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C1C8BC.asm:88 LDA #1
    case 0xC1C7C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C8BC.asm:88 LDA #1
    // Overlapping static entry reached from 0xC1C7C8.
    case 0xC1C7CA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1C8BC.asm:89 JSR UNKNOWN_C10EB4
    case 0xC1C7CB: cpu.execute_instruction<0x20>(0x001495, 3); return true;
    // src/unknown/C1/C1C8BC.asm:101 LDY @LOCAL02
    case 0xC1C7CE: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1C8BC.asm:102 TYA
    case 0xC1C7D0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C7D1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C7D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C7D4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C7D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C7D7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C7D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C7DA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1C8BC.asm:104 TAX
    case 0xC1C7DC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:105 INX
    case 0xC1C7DD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:106 INX
    case 0xC1C7DE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:107 INX
    case 0xC1C7DF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:108 INX
    case 0xC1C7E0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:109 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1C7E1: cpu.execute_instruction<0xBF>(0xD59A06, 4); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:110 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C7E5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:110 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C7E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:110 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C7E8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:110 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C7EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:110 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C7EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:111 TAX
    case 0xC1C7EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:112 INX
    case 0xC1C7ED: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:113 INX
    case 0xC1C7EE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:114 INX
    case 0xC1C7EF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:115 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C7F0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C8BC.asm:116 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1C7F2: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1C8BC.asm:117 STORE_INT832 @VIRTUAL06
    case 0xC1C7F6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1C8BC.asm:117 STORE_INT832 @VIRTUAL06
    case 0xC1C7F8: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:117 STORE_INT832 @VIRTUAL06
    case 0xC1C7FA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1C8BC.asm:117 STORE_INT832 @VIRTUAL06
    case 0xC1C7FC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1C8BC.asm:118 REP #PROC_FLAGS::ACCUM8
    case 0xC1C7FE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1C8BC.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C800: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1C8BC.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C802: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C804: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C806: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C8BC.asm:120 JSR PRINT_NUMBER
    case 0xC1C808: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1C8BC.asm:121 JSR CLEAR_INSTANT_PRINTING
    case 0xC1C80B: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C8BC.asm:122 END_C_FUNCTION
    case 0xC1C80E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1C8BC.asm:122 END_C_FUNCTION
    case 0xC1C80F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1CA06.asm (unresolved).
bool execute_unresolved_c1_c1ca06_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CA06.asm:3 BEGIN_C_FUNCTION
    case 0xC1C810: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    case 0xC1C812: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    case 0xC1C813: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    case 0xC1C814: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    case 0xC1C815: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C815.
    case 0xC1C817: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    case 0xC1C818: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    case 0xC1C819: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:11 STA @LOCAL01
    case 0xC1C81A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1CA06.asm:11 STA @LOCAL01
    // Overlapping static entry reached from 0xC1C817.
    case 0xC1C81B: cpu.execute_instruction<0x0E>(0x0006A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:12 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C81C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009A06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:12 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C81C.
    case 0xC1C81E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1CA06.asm:12 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C81F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:12 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C821: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:12 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C821.
    case 0xC1C823: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1CA06.asm:12 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C824: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1CA06.asm:13 LDA @LOCAL01
    case 0xC1C826: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C828: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C82A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C82B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C82D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C82E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C830: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C831: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1CA06.asm:15 TAX
    case 0xC1C833: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:16 STX @LOCAL01
    case 0xC1C834: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1CA06.asm:17 TXA
    case 0xC1C836: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1CA06.asm:19 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C837: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1CA06.asm:19 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C839: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1CA06.asm:19 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C83B: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1CA06.asm:19 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C83D: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1CA06.asm:20 CLC
    case 0xC1C83F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:21 ADC @VIRTUAL0A
    case 0xC1C840: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1CA06.asm:22 STA @VIRTUAL0A
    case 0xC1C842: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1CA06.asm:23 LDA [@VIRTUAL0A]
    case 0xC1C844: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1CA06.asm:24 AND #$00FF
    case 0xC1C846: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CA06.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC1C846.
    case 0xC1C848: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CA06.asm:25 JSR GET_PSI_NAME
    case 0xC1C849: cpu.execute_instruction<0x20>(0x00C26D, 3); return true;
    // src/unknown/C1/C1CA06.asm:26 LDX @LOCAL01
    case 0xC1C84C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1CA06.asm:27 TXA
    case 0xC1C84E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:499 INC
    // Macro caller: src/unknown/C1/C1CA06.asm:28 OPTIMIZED_ADD psi_ability::level
    case 0xC1C84F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:29 CLC
    case 0xC1C850: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:30 ADC @VIRTUAL06
    case 0xC1C851: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1CA06.asm:31 STA @VIRTUAL06
    case 0xC1C853: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1CA06.asm:32 LDA [@VIRTUAL06]
    case 0xC1C855: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1CA06.asm:33 AND #$00FF
    case 0xC1C857: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CA06.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC1C857.
    case 0xC1C859: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1CA06.asm:34 DEC
    case 0xC1C85A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:35 ASL
    case 0xC1C85B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:37 TAX
    case 0xC1C85C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:38 LDA f:PSI_SUFFIXES,X
    case 0xC1C85D: cpu.execute_instruction<0xBF>(0xC3EC91, 4); return true;
    // src/unknown/C1/C1CA06.asm:39 AND #$00FF
    case 0xC1C861: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CA06.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC1C861.
    case 0xC1C863: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CA06.asm:40 JSR PRINT_LETTER
    case 0xC1C864: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1CA06.asm:54 END_C_FUNCTION
    case 0xC1C867: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1CA06.asm:54 END_C_FUNCTION
    case 0xC1C868: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1CA72-jp.asm (unresolved).
bool execute_unresolved_c1_c1ca72_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1C869: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:8 END_STACK_VARS
    case 0xC1C86B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:8 END_STACK_VARS
    case 0xC1C86C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:8 END_STACK_VARS
    case 0xC1C86D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:8 END_STACK_VARS
    case 0xC1C86E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C86E.
    case 0xC1C870: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:8 END_STACK_VARS
    case 0xC1C871: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:8 END_STACK_VARS
    case 0xC1C872: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72-jp.asm:9 TXY
    case 0xC1C873: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72-jp.asm:10 STY @LOCAL00
    case 0xC1C874: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C1CA72-jp.asm:11 STA @VIRTUAL02
    case 0xC1C876: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1CA72-jp.asm:12 JSR SET_INSTANT_PRINTING
    case 0xC1C878: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/unknown/C1/C1CA72-jp.asm:13 JSR GET_TEXT_Y
    case 0xC1C87B: cpu.execute_instruction<0x20>(0x0006CE, 3); return true;
    // src/unknown/C1/C1CA72-jp.asm:14 TAX
    case 0xC1C87E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72-jp.asm:15 LDA #0
    case 0xC1C87F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1CA72-jp.asm:15 LDA #0
    // Overlapping static entry reached from 0xC1C87F.
    case 0xC1C881: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CA72-jp.asm:16 JSR UNKNOWN_C438A5
    case 0xC1C882: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1CA72-jp.asm:17 LDY @LOCAL00
    case 0xC1C885: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C1CA72-jp.asm:18 TYA
    case 0xC1C887: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72-jp.asm:19 JSR UNKNOWN_C10FEA
    case 0xC1C888: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/unknown/C1/C1CA72-jp.asm:20 LDA @VIRTUAL02
    case 0xC1C88B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C88D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C88F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C890: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C892: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C893: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C895: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C896: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1CA72-jp.asm:22 TAX
    case 0xC1C898: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72-jp.asm:23 LDA f:PSI_ABILITY_TABLE + psi_ability::name,X
    case 0xC1C899: cpu.execute_instruction<0xBF>(0xD59A06, 4); return true;
    // src/unknown/C1/C1CA72-jp.asm:24 AND #$00FF
    case 0xC1C89D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CA72-jp.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC1C89D.
    case 0xC1C89F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CA72-jp.asm:25 JSR GET_PSI_NAME
    case 0xC1C8A0: cpu.execute_instruction<0x20>(0x00C26D, 3); return true;
    // src/unknown/C1/C1CA72-jp.asm:26 LDA #0
    case 0xC1C8A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1CA72-jp.asm:26 LDA #0
    // Overlapping static entry reached from 0xC1C8A3.
    case 0xC1C8A5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CA72-jp.asm:27 JSR UNKNOWN_C10FEA
    case 0xC1C8A6: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/unknown/C1/C1CA72-jp.asm:28 JSR CLEAR_INSTANT_PRINTING
    case 0xC1C8A9: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:29 END_C_FUNCTION
    case 0xC1C8AC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1CA72-jp.asm:29 END_C_FUNCTION
    case 0xC1C8AD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1CAF5.asm (unresolved).
bool execute_unresolved_c1_c1caf5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CAF5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1C8AE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    case 0xC1C8B0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    case 0xC1C8B1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    case 0xC1C8B2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    case 0xC1C8B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C8B3.
    case 0xC1C8B5: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    case 0xC1C8B6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    case 0xC1C8B7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:11 TAX
    case 0xC1C8B8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:12 STX @LOCAL03
    case 0xC1C8B9: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1CAF5.asm:14 JSR SET_INSTANT_PRINTING
    case 0xC1C8BB: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/unknown/C1/C1CAF5.asm:15 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC1C8BE: cpu.execute_instruction<0xAD>(0x008D08, 3); return true;
    // src/unknown/C1/C1CAF5.asm:16 CLC
    case 0xC1C8C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:17 ADC #.LOWORD(GAME_STATE)
    case 0xC1C8C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C1CAF5.asm:17 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1C8C2.
    case 0xC1C8C4: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:18 TAX
    case 0xC1C8C5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:19 LDA a:game_state::party_members,X
    case 0xC1C8C6: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C1/C1CAF5.asm:24 AND #$00FF
    case 0xC1C8C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CAF5.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC1C8C9.
    case 0xC1C8CB: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1CAF5.asm:25 TAY
    case 0xC1C8CC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:26 STY @LOCAL02
    case 0xC1C8CD: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1CAF5.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1C8CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1CAF5.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1C8CF.
    case 0xC1C8D1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1CAF5.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1C8D2: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C1CAF5.asm:31 LDX @LOCAL03
    case 0xC1C8D5: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1CAF5.asm:32 TXA
    case 0xC1C8D7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:33 CMP #1
    case 0xC1C8D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1CAF5.asm:33 CMP #1
    // Overlapping static entry reached from 0xC1C8D8.
    case 0xC1C8DA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CAF5.asm:34 BEQ @UNKNOWN0
    case 0xC1C8DB: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C1/C1CAF5.asm:35 CMP #2
    case 0xC1C8DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1CAF5.asm:35 CMP #2
    // Overlapping static entry reached from 0xC1C8DD.
    case 0xC1C8DF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CAF5.asm:36 BEQ @UNKNOWN1
    case 0xC1C8E0: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:37 CMP #3
    case 0xC1C8E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1CAF5.asm:37 CMP #3
    // Overlapping static entry reached from 0xC1C8E2.
    case 0xC1C8E4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CAF5.asm:38 BEQ @UNKNOWN2
    case 0xC1C8E5: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/unknown/C1/C1CAF5.asm:39 CMP #4
    case 0xC1C8E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1CAF5.asm:39 CMP #4
    // Overlapping static entry reached from 0xC1C8E7.
    case 0xC1C8E9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CAF5.asm:40 BEQ @UNKNOWN3
    case 0xC1C8EA: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C1/C1CAF5.asm:41 BRA @UNKNOWN4
    case 0xC1C8EC: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C1/C1CAF5.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C8EE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:44 LDA #2
    case 0xC1C8F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008502, 3); return true;
    // src/unknown/C1/C1CAF5.asm:45 STA @LOCAL00
    case 0xC1C8F2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1CAF5.asm:45 STA @LOCAL00
    // Overlapping static entry reached from 0xC1C8F0.
    case 0xC1C8F3: cpu.execute_instruction<0x0E>(0x0001A9, 3); return true;
    // src/unknown/C1/C1CAF5.asm:46 LDA #1
    case 0xC1C8F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/unknown/C1/C1CAF5.asm:47 STA @LOCAL01
    case 0xC1C8F6: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C1/C1CAF5.asm:47 STA @LOCAL01
    // Overlapping static entry reached from 0xC1C8F4.
    case 0xC1C8F7: cpu.execute_instruction<0x0F>(0xC210A4, 4); return true;
    // src/unknown/C1/C1CAF5.asm:48 LDY @LOCAL02
    case 0xC1C8F8: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CAF5.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC1C8FA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:49 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1C8F7.
    case 0xC1C8FB: cpu.execute_instruction<0x20>(0x002098, 3); return true;
    // src/unknown/C1/C1CAF5.asm:50 TYA
    case 0xC1C8FC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:51 JSR GENERATE_PSI_LIST
    case 0xC1C8FD: cpu.execute_instruction<0x20>(0x00C2B8, 3); return true;
    // src/unknown/C1/C1CAF5.asm:51 JSR GENERATE_PSI_LIST
    // Overlapping static entry reached from 0xC1C8FB.
    case 0xC1C8FE: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:51 JSR GENERATE_PSI_LIST
    // Overlapping static entry reached from 0xC1C8FE.
    case 0xC1C8FF: cpu.execute_instruction<0xC2>(0x000080, 2); return true;
    // src/unknown/C1/C1CAF5.asm:52 BRA @UNKNOWN4
    case 0xC1C900: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C1/C1CAF5.asm:52 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC1C8FF.
    case 0xC1C901: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C902: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:55 LDA #2
    case 0xC1C904: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008502, 3); return true;
    // src/unknown/C1/C1CAF5.asm:56 STA @LOCAL00
    case 0xC1C906: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1CAF5.asm:56 STA @LOCAL00
    // Overlapping static entry reached from 0xC1C904.
    case 0xC1C907: cpu.execute_instruction<0x0E>(0x000F85, 3); return true;
    // src/unknown/C1/C1CAF5.asm:57 STA @LOCAL01
    case 0xC1C908: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C1/C1CAF5.asm:58 LDY @LOCAL02
    case 0xC1C90A: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CAF5.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC1C90C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:60 TYA
    case 0xC1C90E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:61 JSR GENERATE_PSI_LIST
    case 0xC1C90F: cpu.execute_instruction<0x20>(0x00C2B8, 3); return true;
    // src/unknown/C1/C1CAF5.asm:62 BRA @UNKNOWN4
    case 0xC1C912: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C1/C1CAF5.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C914: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:65 LDA #2
    case 0xC1C916: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008502, 3); return true;
    // src/unknown/C1/C1CAF5.asm:66 STA @LOCAL00
    case 0xC1C918: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1CAF5.asm:66 STA @LOCAL00
    // Overlapping static entry reached from 0xC1C916.
    case 0xC1C919: cpu.execute_instruction<0x0E>(0x0004A9, 3); return true;
    // src/unknown/C1/C1CAF5.asm:67 LDA #4
    case 0xC1C91A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008504, 3); return true;
    // src/unknown/C1/C1CAF5.asm:68 STA @LOCAL01
    case 0xC1C91C: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C1/C1CAF5.asm:68 STA @LOCAL01
    // Overlapping static entry reached from 0xC1C91A.
    case 0xC1C91D: cpu.execute_instruction<0x0F>(0xC210A4, 4); return true;
    // src/unknown/C1/C1CAF5.asm:69 LDY @LOCAL02
    case 0xC1C91E: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CAF5.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC1C920: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:70 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1C91D.
    case 0xC1C921: cpu.execute_instruction<0x20>(0x002098, 3); return true;
    // src/unknown/C1/C1CAF5.asm:71 TYA
    case 0xC1C922: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:72 JSR GENERATE_PSI_LIST
    case 0xC1C923: cpu.execute_instruction<0x20>(0x00C2B8, 3); return true;
    // src/unknown/C1/C1CAF5.asm:72 JSR GENERATE_PSI_LIST
    // Overlapping static entry reached from 0xC1C921.
    case 0xC1C924: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:72 JSR GENERATE_PSI_LIST
    // Overlapping static entry reached from 0xC1C924.
    case 0xC1C925: cpu.execute_instruction<0xC2>(0x000080, 2); return true;
    // src/unknown/C1/C1CAF5.asm:73 BRA @UNKNOWN4
    case 0xC1C926: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C1/C1CAF5.asm:73 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC1C925.
    case 0xC1C927: cpu.execute_instruction<0x12>(0x0000E2, 2); return true;
    // src/unknown/C1/C1CAF5.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C928: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:75 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1C927.
    case 0xC1C929: cpu.execute_instruction<0x20>(0x0003A9, 3); return true;
    // src/unknown/C1/C1CAF5.asm:76 LDA #3
    case 0xC1C92A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008503, 3); return true;
    // src/unknown/C1/C1CAF5.asm:77 STA @LOCAL00
    case 0xC1C92C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1CAF5.asm:77 STA @LOCAL00
    // Overlapping static entry reached from 0xC1C92A.
    case 0xC1C92D: cpu.execute_instruction<0x0E>(0x0008A9, 3); return true;
    // src/unknown/C1/C1CAF5.asm:78 LDA #8
    case 0xC1C92E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x008508, 3); return true;
    // src/unknown/C1/C1CAF5.asm:79 STA @LOCAL01
    case 0xC1C930: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C1/C1CAF5.asm:79 STA @LOCAL01
    // Overlapping static entry reached from 0xC1C92E.
    case 0xC1C931: cpu.execute_instruction<0x0F>(0xC210A4, 4); return true;
    // src/unknown/C1/C1CAF5.asm:80 LDY @LOCAL02
    case 0xC1C932: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CAF5.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xC1C934: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:81 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1C931.
    case 0xC1C935: cpu.execute_instruction<0x20>(0x002098, 3); return true;
    // src/unknown/C1/C1CAF5.asm:82 TYA
    case 0xC1C936: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:83 JSR GENERATE_PSI_LIST
    case 0xC1C937: cpu.execute_instruction<0x20>(0x00C2B8, 3); return true;
    // src/unknown/C1/C1CAF5.asm:83 JSR GENERATE_PSI_LIST
    // Overlapping static entry reached from 0xC1C935.
    case 0xC1C938: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:83 JSR GENERATE_PSI_LIST
    // Overlapping static entry reached from 0xC1C938.
    case 0xC1C939: cpu.execute_instruction<0xC2>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1CAF5.asm:85 END_C_FUNCTION
    case 0xC1C93A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1CAF5.asm:85 END_C_FUNCTION
    case 0xC1C93B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1CB7F.asm (unresolved).
bool execute_unresolved_c1_c1cb7f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CB7F.asm:3 BEGIN_C_FUNCTION
    case 0xC1C93C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    case 0xC1C93E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    case 0xC1C93F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    case 0xC1C940: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    case 0xC1C941: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C941.
    case 0xC1C943: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    case 0xC1C944: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    case 0xC1C945: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1CB7F.asm:9 STX @VIRTUAL02
    case 0xC1C946: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1CB7F.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1C943.
    case 0xC1C947: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C1/C1CB7F.asm:10 CMP #1
    case 0xC1C948: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1CB7F.asm:10 CMP #1
    // Overlapping static entry reached from 0xC1C948.
    case 0xC1C94A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CB7F.asm:11 BEQ @UNKNOWN0
    case 0xC1C94B: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C1/C1CB7F.asm:12 CMP #2
    case 0xC1C94D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1CB7F.asm:12 CMP #2
    // Overlapping static entry reached from 0xC1C94D.
    case 0xC1C94F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CB7F.asm:13 BEQ @UNKNOWN1
    case 0xC1C950: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/unknown/C1/C1CB7F.asm:14 CMP #3
    case 0xC1C952: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1CB7F.asm:14 CMP #3
    // Overlapping static entry reached from 0xC1C952.
    case 0xC1C954: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CB7F.asm:15 BEQ @UNKNOWN2
    case 0xC1C955: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C1/C1CB7F.asm:16 BRA @UNKNOWN3
    case 0xC1C957: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C1/C1CB7F.asm:18 LDY #1
    case 0xC1C959: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C1CB7F.asm:18 LDY #1
    // Overlapping static entry reached from 0xC1C959.
    case 0xC1C95B: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1CB7F.asm:19 LDX #2
    case 0xC1C95C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C1/C1CB7F.asm:19 LDX #2
    // Overlapping static entry reached from 0xC1C95C.
    case 0xC1C95E: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1CB7F.asm:20 LDA @VIRTUAL02
    case 0xC1C95F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CB7F.asm:21 JSR UNKNOWN_C1C1BA
    case 0xC1C961: cpu.execute_instruction<0x20>(0x00C01C, 3); return true;
    // src/unknown/C1/C1CB7F.asm:22 TAY
    case 0xC1C964: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CB7F.asm:23 STY @LOCAL00
    case 0xC1C965: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C1CB7F.asm:24 BRA @UNKNOWN3
    case 0xC1C967: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C1/C1CB7F.asm:26 LDY #2
    case 0xC1C969: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C1/C1CB7F.asm:26 LDY #2
    // Overlapping static entry reached from 0xC1C969.
    case 0xC1C96B: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C1/C1CB7F.asm:27 TYX
    case 0xC1C96C: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C1CB7F.asm:28 LDA @VIRTUAL02
    case 0xC1C96D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CB7F.asm:29 JSR UNKNOWN_C1C1BA
    case 0xC1C96F: cpu.execute_instruction<0x20>(0x00C01C, 3); return true;
    // src/unknown/C1/C1CB7F.asm:30 TAY
    case 0xC1C972: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CB7F.asm:31 STY @LOCAL00
    case 0xC1C973: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C1CB7F.asm:32 BRA @UNKNOWN3
    case 0xC1C975: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C1/C1CB7F.asm:34 LDY #4
    case 0xC1C977: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C1/C1CB7F.asm:34 LDY #4
    // Overlapping static entry reached from 0xC1C977.
    case 0xC1C979: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1CB7F.asm:35 LDX #2
    case 0xC1C97A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C1/C1CB7F.asm:35 LDX #2
    // Overlapping static entry reached from 0xC1C97A.
    case 0xC1C97C: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1CB7F.asm:36 LDA @VIRTUAL02
    case 0xC1C97D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CB7F.asm:37 JSR UNKNOWN_C1C1BA
    case 0xC1C97F: cpu.execute_instruction<0x20>(0x00C01C, 3); return true;
    // src/unknown/C1/C1CB7F.asm:38 TAY
    case 0xC1C982: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CB7F.asm:39 STY @LOCAL00
    case 0xC1C983: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C1CB7F.asm:41 LDY @LOCAL00
    case 0xC1C985: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C1CB7F.asm:42 TYA
    case 0xC1C987: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1CB7F.asm:43 END_C_FUNCTION
    case 0xC1C988: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1CB7F.asm:43 END_C_FUNCTION
    case 0xC1C989: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1CE85.asm (unresolved).
bool execute_unresolved_c1_c1ce85_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CE85.asm:3 BEGIN_C_FUNCTION
    case 0xC1CC3B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    case 0xC1CC3D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    case 0xC1CC3E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    case 0xC1CC3F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    case 0xC1CC40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1CC40.
    case 0xC1CC42: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    case 0xC1CC43: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1CE85.asm:10 END_STACK_VARS
    case 0xC1CC44: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:11 TAY
    case 0xC1CC45: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:12 STY @LOCAL03
    case 0xC1CC46: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C1CE85.asm:13 LDA #$00FF
    case 0xC1CC48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:13 LDA #$00FF
    // Overlapping static entry reached from 0xC1CC48.
    case 0xC1CC4A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1CE85.asm:14 STA @VIRTUAL02
    case 0xC1CC4B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:15 LDA __BSS_START__+1,Y
    case 0xC1CC4D: cpu.execute_instruction<0xB9>(0x000001, 3); return true;
    // src/unknown/C1/C1CE85.asm:16 AND #$00FF
    case 0xC1CC50: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC1CC50.
    case 0xC1CC52: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1CE85.asm:17 TAX
    case 0xC1CC53: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:18 LDA __BSS_START__,Y
    case 0xC1CC54: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:19 AND #$00FF
    case 0xC1CC57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC1CC57.
    case 0xC1CC59: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1CE85.asm:20 JSL GET_CHARACTER_ITEM
    case 0xC1CC5A: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // src/unknown/C1/C1CE85.asm:21 STA @LOCAL02
    case 0xC1CC5E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1CC60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CC60.
    case 0xC1CC62: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1CC63: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CC62.
    case 0xC1CC64: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1CC65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CC64.
    case 0xC1CC66: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CC65.
    case 0xC1CC67: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1CE85.asm:22 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1CC68: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1CE85.asm:23 LDA @LOCAL02
    case 0xC1CC6A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C1CE85.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CC6C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C1CE85.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CC6E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C1CE85.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CC6F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C1CE85.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CC71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C1CE85.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CC72: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C1CE85.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CC73: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:25 CLC
    case 0xC1CC74: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:26 ADC @VIRTUAL06
    case 0xC1CC75: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:27 STA @VIRTUAL06
    case 0xC1CC77: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:28 LDY @LOCAL03
    case 0xC1CC79: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1CE85.asm:29 STY @VIRTUAL04
    case 0xC1CC7B: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:30 INC @VIRTUAL04
    case 0xC1CC7D: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:31 INC @VIRTUAL04
    case 0xC1CC7F: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:32 LDA #2
    case 0xC1CC81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1CE85.asm:32 LDA #2
    // Overlapping static entry reached from 0xC1CC81.
    case 0xC1CC83: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1CE85.asm:33 LDX @VIRTUAL04
    case 0xC1CC84: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:34 STA __BSS_START__,X
    case 0xC1CC86: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:35 TYA
    case 0xC1CC89: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:36 INC
    case 0xC1CC8A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:37 INC
    case 0xC1CC8B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:38 INC
    case 0xC1CC8C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:39 INC
    case 0xC1CC8D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:40 STA @LOCAL01
    case 0xC1CC8E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1CE85.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CC90: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:42 LDA #1
    case 0xC1CC92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009201, 3); return true;
    // src/unknown/C1/C1CE85.asm:43 STA (@LOCAL01)
    case 0xC1CC94: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/unknown/C1/C1CE85.asm:43 STA (@LOCAL01)
    // Overlapping static entry reached from 0xC1CC92.
    case 0xC1CC95: cpu.execute_instruction<0x10>(0x0000C2, 2); return true;
    // src/unknown/C1/C1CE85.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC1CC96: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:44 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1CC95.
    case 0xC1CC97: cpu.execute_instruction<0x20>(0x001898, 3); return true;
    // src/unknown/C1/C1CE85.asm:45 TYA
    case 0xC1CC98: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:46 CLC
    case 0xC1CC99: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:47 ADC #5
    case 0xC1CC9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/unknown/C1/C1CE85.asm:47 ADC #5
    // Overlapping static entry reached from 0xC1CC9A.
    case 0xC1CC9C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1CE85.asm:48 STA @LOCAL00
    case 0xC1CC9D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1CE85.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CC9F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:50 LDA __BSS_START__,Y
    case 0xC1CCA1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:51 STA (@LOCAL00)
    case 0xC1CCA4: cpu.execute_instruction<0x92>(0x00000E, 2); return true;
    // src/unknown/C1/C1CE85.asm:52 LDY #item::type
    case 0xC1CCA6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C1/C1CE85.asm:52 LDY #item::type
    // Overlapping static entry reached from 0xC1CCA6.
    case 0xC1CCA8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C1/C1CE85.asm:53 LDA [@VIRTUAL06],Y
    case 0xC1CCA9: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC1CCAB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:55 AND #$00FF
    case 0xC1CCAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC1CCAD.
    case 0xC1CCAF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1CE85.asm:56 STA @LOCAL02
    case 0xC1CCB0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1CE85.asm:57 AND #$0030
    case 0xC1CCB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/unknown/C1/C1CE85.asm:57 AND #$0030
    // Overlapping static entry reached from 0xC1CCB2.
    case 0xC1CCB4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1CE85.asm:58 CMP #1 << 4
    case 0xC1CCB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C1/C1CE85.asm:58 CMP #1 << 4
    // Overlapping static entry reached from 0xC1CCB5.
    case 0xC1CCB7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CE85.asm:59 BEQ @UNKNOWN0
    case 0xC1CCB8: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C1/C1CE85.asm:60 CMP #2 << 4
    case 0xC1CCBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C1/C1CE85.asm:60 CMP #2 << 4
    // Overlapping static entry reached from 0xC1CCBA.
    case 0xC1CCBC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CE85.asm:61 BEQ @UNKNOWN0
    case 0xC1CCBD: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C1/C1CE85.asm:62 CMP #3 << 4
    case 0xC1CCBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/unknown/C1/C1CE85.asm:62 CMP #3 << 4
    // Overlapping static entry reached from 0xC1CCBF.
    case 0xC1CCC1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CE85.asm:63 BEQ @UNKNOWN2
    case 0xC1CCC2: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/unknown/C1/C1CE85.asm:64 JMP @UNKNOWN6
    case 0xC1CCC4: cpu.execute_instruction<0x4C>(0x00CD75, 3); return true;
    // src/unknown/C1/C1CE85.asm:66 LDA #item::effect
    case 0xC1CCC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C1/C1CE85.asm:66 LDA #item::effect
    // Overlapping static entry reached from 0xC1CCC7.
    case 0xC1CCC9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1CE85.asm:67 CLC
    case 0xC1CCCA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:68 ADC @VIRTUAL06
    case 0xC1CCCB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:69 STA @VIRTUAL06
    case 0xC1CCCD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:70 LDY @LOCAL03
    case 0xC1CCCF: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1CE85.asm:71 LDA __BSS_START__,Y
    case 0xC1CCD1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:72 AND #$00FF
    case 0xC1CCD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC1CCD4.
    case 0xC1CCD6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1CE85.asm:73 TAX
    case 0xC1CCD7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:74 LDA [@VIRTUAL06]
    case 0xC1CCD8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:75 JSR DETERMINE_TARGETTING
    case 0xC1CCDA: cpu.execute_instruction<0x20>(0x00AC70, 3); return true;
    // src/unknown/C1/C1CE85.asm:76 STA @VIRTUAL02
    case 0xC1CCDD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:77 AND #$00FF
    case 0xC1CCDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC1CCDF.
    case 0xC1CCE1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1CE85.asm:78 BNE @UNKNOWN1
    case 0xC1CCE2: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:79 LDA #0
    case 0xC1CCE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:79 LDA #0
    // Overlapping static entry reached from 0xC1CCE4.
    case 0xC1CCE6: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C1/C1CE85.asm:80 JMP @UNKNOWN7
    case 0xC1CCE7: cpu.execute_instruction<0x4C>(0x00CD79, 3); return true;
    // src/unknown/C1/C1CE85.asm:82 LDA [@VIRTUAL06]
    case 0xC1CCEA: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:83 LDX @VIRTUAL04
    case 0xC1CCEC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:84 STA __BSS_START__,X
    case 0xC1CCEE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:85 SEP #PROC_FLAGS::INDEX8
    case 0xC1CCF1: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C1/C1CE85.asm:86 LDY #8
    case 0xC1CCF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/unknown/C1/C1CE85.asm:87 LDA @VIRTUAL02
    case 0xC1CCF5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:87 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1CCF3.
    case 0xC1CCF6: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C1/C1CE85.asm:88 JSL ASR8_UNKNOWN1
    case 0xC1CCF7: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C1/C1CE85.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CCFB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:90 STA (@LOCAL01)
    case 0xC1CCFD: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/unknown/C1/C1CE85.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC1CCFF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:92 LDA @VIRTUAL02
    case 0xC1CD01: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CD03: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:94 STA (@LOCAL00)
    case 0xC1CD05: cpu.execute_instruction<0x92>(0x00000E, 2); return true;
    // src/unknown/C1/C1CE85.asm:95 BRA @UNKNOWN6
    case 0xC1CD07: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/unknown/C1/C1CE85.asm:99 LDA @LOCAL02
    case 0xC1CD09: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1CE85.asm:100 AND #$000C
    case 0xC1CD0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/unknown/C1/C1CE85.asm:100 AND #$000C
    // Overlapping static entry reached from 0xC1CD0B.
    case 0xC1CD0D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CE85.asm:101 BEQ @UNKNOWN3
    case 0xC1CD0E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1CE85.asm:102 CMP #4
    case 0xC1CD10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1CE85.asm:102 CMP #4
    // Overlapping static entry reached from 0xC1CD10.
    case 0xC1CD12: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1CE85.asm:103 BNE @UNKNOWN6
    case 0xC1CD13: cpu.execute_instruction<0xD0>(0x000060, 2); return true;
    // src/unknown/C1/C1CE85.asm:105 LDY @LOCAL03
    case 0xC1CD15: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1CE85.asm:106 LDA __BSS_START__,Y
    case 0xC1CD17: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:107 AND #$00FF
    case 0xC1CD1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:107 AND #$00FF
    // Overlapping static entry reached from 0xC1CD1A.
    case 0xC1CD1C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1CE85.asm:108 TAX
    case 0xC1CD1D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:109 STX @LOCAL02
    case 0xC1CD1E: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1CE85.asm:110 DEX
    case 0xC1CD20: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:111 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CD21: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:112 LDY #item::flags
    case 0xC1CD23: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x00000D, 3); return true;
    // src/unknown/C1/C1CE85.asm:112 LDY #item::flags
    // Overlapping static entry reached from 0xC1CD23.
    case 0xC1CD25: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C1/C1CE85.asm:113 LDA [@VIRTUAL06],Y
    case 0xC1CD26: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:114 AND f:ITEM_USABLE_FLAGS,X
    case 0xC1CD28: cpu.execute_instruction<0x3F>(0xC436A9, 4); return true;
    // src/unknown/C1/C1CE85.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC1CD2C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:116 AND #$00FF
    case 0xC1CD2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:116 AND #$00FF
    // Overlapping static entry reached from 0xC1CD2E.
    case 0xC1CD30: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CE85.asm:117 BEQ @UNKNOWN5
    case 0xC1CD31: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C1/C1CE85.asm:118 LDA #item::effect
    case 0xC1CD33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C1/C1CE85.asm:118 LDA #item::effect
    // Overlapping static entry reached from 0xC1CD33.
    case 0xC1CD35: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1CE85.asm:119 CLC
    case 0xC1CD36: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CE85.asm:120 ADC @VIRTUAL06
    case 0xC1CD37: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:121 STA @VIRTUAL06
    case 0xC1CD39: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:122 LDX @LOCAL02
    case 0xC1CD3B: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1CE85.asm:123 LDA [@VIRTUAL06]
    case 0xC1CD3D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:124 JSR DETERMINE_TARGETTING
    case 0xC1CD3F: cpu.execute_instruction<0x20>(0x00AC70, 3); return true;
    // src/unknown/C1/C1CE85.asm:125 STA @VIRTUAL02
    case 0xC1CD42: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:126 AND #$00FF
    case 0xC1CD44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CE85.asm:126 AND #$00FF
    // Overlapping static entry reached from 0xC1CD44.
    case 0xC1CD46: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1CE85.asm:127 BNE @UNKNOWN4
    case 0xC1CD47: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1CE85.asm:128 LDA #0
    case 0xC1CD49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:128 LDA #0
    // Overlapping static entry reached from 0xC1CD49.
    case 0xC1CD4B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1CE85.asm:129 BRA @UNKNOWN7
    case 0xC1CD4C: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/unknown/C1/C1CE85.asm:131 LDA [@VIRTUAL06]
    case 0xC1CD4E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1CE85.asm:132 LDX @VIRTUAL04
    case 0xC1CD50: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:133 STA __BSS_START__,X
    case 0xC1CD52: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:134 SEP #PROC_FLAGS::INDEX8
    case 0xC1CD55: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C1/C1CE85.asm:135 LDY #8
    case 0xC1CD57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/unknown/C1/C1CE85.asm:136 LDA @VIRTUAL02
    case 0xC1CD59: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:136 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1CD57.
    case 0xC1CD5A: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C1/C1CE85.asm:137 JSL ASR8_UNKNOWN1
    case 0xC1CD5B: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C1/C1CE85.asm:138 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CD5F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:139 STA (@LOCAL01)
    case 0xC1CD61: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/unknown/C1/C1CE85.asm:140 REP #PROC_FLAGS::ACCUM8
    case 0xC1CD63: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:141 LDA @VIRTUAL02
    case 0xC1CD65: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:142 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CD67: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:143 STA (@LOCAL00)
    case 0xC1CD69: cpu.execute_instruction<0x92>(0x00000E, 2); return true;
    // src/unknown/C1/C1CE85.asm:144 BRA @UNKNOWN6
    case 0xC1CD6B: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C1/C1CE85.asm:148 LDA #3
    case 0xC1CD6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1CE85.asm:148 LDA #3
    // Overlapping static entry reached from 0xC1CD6D.
    case 0xC1CD6F: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1CE85.asm:149 LDX @VIRTUAL04
    case 0xC1CD70: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1CE85.asm:150 STA __BSS_START__,X
    case 0xC1CD72: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1CE85.asm:152 REP #PROC_FLAGS::ACCUM8
    case 0xC1CD75: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CE85.asm:153 LDA @VIRTUAL02
    case 0xC1CD77: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CE85.asm:155 REP #PROC_FLAGS::INDEX8
    case 0xC1CD79: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1CE85.asm:156 END_C_FUNCTION
    case 0xC1CD7B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1CE85.asm:156 END_C_FUNCTION
    case 0xC1CD7C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1CFC6-jp.asm (unresolved).
bool execute_unresolved_c1_c1cfc6_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1CD7D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:9 END_STACK_VARS
    case 0xC1CD7F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:9 END_STACK_VARS
    case 0xC1CD80: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:9 END_STACK_VARS
    case 0xC1CD81: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:9 END_STACK_VARS
    case 0xC1CD82: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1CD82.
    case 0xC1CD84: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:9 END_STACK_VARS
    case 0xC1CD85: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:9 END_STACK_VARS
    case 0xC1CD86: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6-jp.asm:10 STA @VIRTUAL02
    case 0xC1CD87: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1CD84.
    case 0xC1CD88: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:11 LDY #0
    case 0xC1CD89: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:11 LDY #0
    // Overlapping static entry reached from 0xC1CD89.
    case 0xC1CD8B: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:12 STY @LOCAL01
    case 0xC1CD8C: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:13 LDX @VIRTUAL02
    case 0xC1CD8E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:14 LDA __BSS_START__,X
    case 0xC1CD90: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:15 AND #$00FF
    case 0xC1CD93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC1CD93.
    case 0xC1CD95: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:16 DEC
    case 0xC1CD96: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6-jp.asm:17 LDY #.SIZEOF(char_struct)
    case 0xC1CD97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:17 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1CD97.
    case 0xC1CD99: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:18 JSL MULT168
    case 0xC1CD9A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1CFC6-jp.asm:19 TAX
    case 0xC1CD9E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6-jp.asm:20 LDA PARTY_CHARACTERS+char_struct::items,X
    case 0xC1CD9F: cpu.execute_instruction<0xBD>(0x009CA1, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:21 AND #$00FF
    case 0xC1CDA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC1CDA2.
    case 0xC1CDA4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:22 BEQ @UNKNOWN1
    case 0xC1CDA5: cpu.execute_instruction<0xF0>(0x000074, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:24 CREATE_WINDOW_NEAR #WINDOW::INVENTORY
    case 0xC1CDA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:24 CREATE_WINDOW_NEAR #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC1CDA7.
    case 0xC1CDA9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:24 CREATE_WINDOW_NEAR #WINDOW::INVENTORY
    case 0xC1CDAA: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:25 LDX #2
    case 0xC1CDAD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:25 LDX #2
    // Overlapping static entry reached from 0xC1CDAD.
    case 0xC1CDAF: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:26 STX @LOCAL00
    case 0xC1CDB0: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:27 LDX @VIRTUAL02
    case 0xC1CDB2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:28 LDA a:battle_menu_selection::user,X
    case 0xC1CDB4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:28 LDA a:battle_menu_selection::user,X
    // Overlapping static entry reached from 0xC1CE2E.
    case 0xC1CDB5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:29 AND #$00FF
    case 0xC1CDB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1CDB7.
    case 0xC1CDB9: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:30 LDX @LOCAL00
    case 0xC1CDBA: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:31 JSR INVENTORY_GET_ITEM_NAME
    case 0xC1CDBC: cpu.execute_instruction<0x20>(0x009930, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:32 LDA #1
    case 0xC1CDBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:32 LDA #1
    // Overlapping static entry reached from 0xC1CDBF.
    case 0xC1CDC1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:33 JSR SELECTION_MENU
    case 0xC1CDC2: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:34 TAY
    case 0xC1CDC5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6-jp.asm:35 STY @LOCAL01
    case 0xC1CDC6: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:36 JSR SET_INSTANT_PRINTING
    case 0xC1CDC8: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:37 JSR CLOSE_FOCUS_WINDOW
    case 0xC1CDCB: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:38 LDY @LOCAL01
    case 0xC1CDCE: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:39 BEQ @UNKNOWN1
    case 0xC1CDD0: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:40 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    case 0xC1CDD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x000026, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:40 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    // Overlapping static entry reached from 0xC1CDD2.
    case 0xC1CDD4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:40 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN26
    case 0xC1CDD5: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:41 LDA #6
    case 0xC1CDD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:41 LDA #6
    // Overlapping static entry reached from 0xC1CDD8.
    case 0xC1CDDA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:42 JSR UNKNOWN_C10FEA
    case 0xC1CDDB: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:43 LDY @LOCAL01
    case 0xC1CDDE: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:44 TYX
    case 0xC1CDE0: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6-jp.asm:45 STX @LOCAL00
    case 0xC1CDE1: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:46 LDX @VIRTUAL02
    case 0xC1CDE3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:47 LDA __BSS_START__,X
    case 0xC1CDE5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:48 AND #$00FF
    case 0xC1CDE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC1CDE8.
    case 0xC1CDEA: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:49 LDX @LOCAL00
    case 0xC1CDEB: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:50 JSL GET_CHARACTER_ITEM
    case 0xC1CDED: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // src/unknown/C1/C1CFC6-jp.asm:51 JSR UNKNOWN_C19216
    case 0xC1CDF1: cpu.execute_instruction<0x20>(0x009309, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:52 LDA #0
    case 0xC1CDF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:52 LDA #0
    // Overlapping static entry reached from 0xC1CDF4.
    case 0xC1CDF6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:53 JSR UNKNOWN_C10FEA
    case 0xC1CDF7: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:54 JSR CLEAR_INSTANT_PRINTING
    case 0xC1CDFA: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:55 LDY @LOCAL01
    case 0xC1CDFD: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:56 TYA
    case 0xC1CDFF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6-jp.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CE00: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:58 LDX @VIRTUAL02
    case 0xC1CE02: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:59 STA __BSS_START__ + 1,X
    case 0xC1CE04: cpu.execute_instruction<0x9D>(0x000001, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xC1CE07: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:61 LDA @VIRTUAL02
    case 0xC1CE09: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:62 JSR UNKNOWN_C1CE85
    case 0xC1CE0B: cpu.execute_instruction<0x20>(0x00CC3B, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:63 TAY
    case 0xC1CE0E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CFC6-jp.asm:64 STY @LOCAL01
    case 0xC1CE0F: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:65 LDA #WINDOW::UNKNOWN26
    case 0xC1CE11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x000026, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:65 LDA #WINDOW::UNKNOWN26
    // Overlapping static entry reached from 0xC1CE11.
    case 0xC1CE13: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:66 JSR CLOSE_WINDOW
    case 0xC1CE14: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/unknown/C1/C1CFC6-jp.asm:67 LDY @LOCAL01
    case 0xC1CE17: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:68 BEQ @UNKNOWN0
    case 0xC1CE19: cpu.execute_instruction<0xF0>(0x00008C, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:70 LDY @LOCAL01
    case 0xC1CE1B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CFC6-jp.asm:71 TYA
    case 0xC1CE1D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:72 END_C_FUNCTION
    case 0xC1CE1E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1CFC6-jp.asm:72 END_C_FUNCTION
    case 0xC1CE1F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1CFC6_redirect.asm (unresolved).
bool execute_unresolved_c1_c1cfc6_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CFC6_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DBF4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1CFC6_redirect.asm:7 JSR UNKNOWN_C1CFC6
    case 0xC1DBF6: cpu.execute_instruction<0x20>(0x00CD7D, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1CFC6_redirect.asm:8 END_C_FUNCTION
    case 0xC1DBF9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1D038.asm (unresolved).
bool execute_unresolved_c1_c1d038_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1D038.asm:3 BEGIN_C_FUNCTION
    case 0xC1CE20: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    case 0xC1CE22: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    case 0xC1CE23: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    case 0xC1CE24: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    case 0xC1CE25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1CE25.
    case 0xC1CE27: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    case 0xC1CE28: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1D038.asm:7 END_STACK_VARS
    case 0xC1CE29: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1D038.asm:8 STA @LOCAL00
    case 0xC1CE2A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1D038.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC1CE27.
    case 0xC1CE2B: cpu.execute_instruction<0x0E>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1CE2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CE2C.
    case 0xC1CE2E: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1CE2F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CE2E.
    case 0xC1CE30: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1CE31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CE30.
    case 0xC1CE32: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CE31.
    case 0xC1CE33: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1D038.asm:9 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1CE34: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1D038.asm:10 LDA @LOCAL00
    case 0xC1CE36: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C1D038.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CE38: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C1D038.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CE3A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C1D038.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CE3B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C1D038.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CE3D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C1D038.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CE3E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C1D038.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1CE3F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1D038.asm:12 STA @LOCAL00
    case 0xC1CE40: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1D038.asm:13 CLC
    case 0xC1CE42: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1D038.asm:14 ADC #item::type
    case 0xC1CE43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/C1/C1D038.asm:14 ADC #item::type
    // Overlapping static entry reached from 0xC1CE43.
    case 0xC1CE45: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1D038.asm:15 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1CE46: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1D038.asm:15 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1CE48: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1D038.asm:15 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1CE4A: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1D038.asm:15 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1CE4C: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1D038.asm:16 CLC
    case 0xC1CE4E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1D038.asm:17 ADC @VIRTUAL0A
    case 0xC1CE4F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1D038.asm:18 STA @VIRTUAL0A
    case 0xC1CE51: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1D038.asm:19 LDA [@VIRTUAL0A]
    case 0xC1CE53: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1D038.asm:20 AND #$00FF
    case 0xC1CE55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1D038.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC1CE55.
    case 0xC1CE57: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1D038.asm:21 CMP #8
    case 0xC1CE58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C1/C1D038.asm:21 CMP #8
    // Overlapping static entry reached from 0xC1CE58.
    case 0xC1CE5A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1D038.asm:22 BNE @UNKNOWN0
    case 0xC1CE5B: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C1/C1D038.asm:23 LDA @LOCAL00
    case 0xC1CE5D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C1D038.asm:24 CLC
    case 0xC1CE5F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1D038.asm:25 ADC #item::params + item_parameters::ep
    case 0xC1CE60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/unknown/C1/C1D038.asm:25 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC1CE60.
    case 0xC1CE62: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1D038.asm:26 CLC
    case 0xC1CE63: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1D038.asm:27 ADC @VIRTUAL06
    case 0xC1CE64: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1D038.asm:28 STA @VIRTUAL06
    case 0xC1CE66: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1D038.asm:29 LDA [@VIRTUAL06]
    case 0xC1CE68: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1D038.asm:30 AND #$00FF
    case 0xC1CE6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1D038.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC1CE6A.
    case 0xC1CE6C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1D038.asm:31 BRA @UNKNOWN1
    case 0xC1CE6D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1D038.asm:33 LDA #0
    case 0xC1CE6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1D038.asm:33 LDA #0
    // Overlapping static entry reached from 0xC1CE6F.
    case 0xC1CE71: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1D038.asm:35 END_C_FUNCTION
    case 0xC1CE72: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1D038.asm:35 END_C_FUNCTION
    case 0xC1CE73: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1D08B.asm (unresolved).
bool execute_unresolved_c1_c1d08b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1D08B.asm:3 BEGIN_C_FUNCTION
    case 0xC1CE74: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    case 0xC1CE76: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    case 0xC1CE77: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    case 0xC1CE78: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    case 0xC1CE79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000ED, 2); else cpu.execute_instruction<0x69>(0x00FFED, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1CE79.
    case 0xC1CE7B: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    case 0xC1CE7C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1D08B.asm:11 END_STACK_VARS
    case 0xC1CE7D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:12 TAY
    case 0xC1CE7E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:13 STY @LOCAL02
    case 0xC1CE7F: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/unknown/C1/C1D08B.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CE81: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1D08B.asm:15 LDA @BASE_VITALITY
    case 0xC1CE83: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C1/C1D08B.asm:16 STA @LOCAL01
    case 0xC1CE85: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1D08B.asm:17 LDA @LEVEL_CONSTANT
    case 0xC1CE87: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/unknown/C1/C1D08B.asm:18 STA @VIRTUAL00
    case 0xC1CE89: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1D08B.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC1CE8B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1D08B.asm:20 LDA @LOCAL01
    case 0xC1CE8D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C1D08B.asm:21 AND #$00FF
    case 0xC1CE8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1D08B.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC1CE8F.
    case 0xC1CE91: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1D08B.asm:22 DEC
    case 0xC1CE92: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:23 DEC
    case 0xC1CE93: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/unknown/C1/C1D08B.asm:24 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1CE94: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/unknown/C1/C1D08B.asm:24 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1CE96: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/unknown/C1/C1D08B.asm:24 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1CE97: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/unknown/C1/C1D08B.asm:24 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1CE98: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/unknown/C1/C1D08B.asm:24 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1CE9A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:25 STA @VIRTUAL02
    case 0xC1CE9B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1D08B.asm:26 PHY
    case 0xC1CE9D: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:27 LDA @VIRTUAL00
    case 0xC1CE9E: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1D08B.asm:28 AND #$00FF
    case 0xC1CEA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1D08B.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC1CEA0.
    case 0xC1CEA2: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1D08B.asm:29 TAY
    case 0xC1CEA3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:30 PLA
    case 0xC1CEA4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:31 JSL MULT16
    case 0xC1CEA5: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C1/C1D08B.asm:32 SEC
    case 0xC1CEA9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:33 SBC @VIRTUAL02
    case 0xC1CEAA: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C1/C1D08B.asm:34 TAX
    case 0xC1CEAC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:35 STX @LOCAL00
    case 0xC1CEAD: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1D08B.asm:36 TXA
    case 0xC1CEAF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:37 CLC
    case 0xC1CEB0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:38 SBC #0
    case 0xC1CEB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000000, 3); return true;
    // src/unknown/C1/C1D08B.asm:38 SBC #0
    // Overlapping static entry reached from 0xC1CEB1.
    case 0xC1CEB3: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1D08B.asm:39 BRANCHGTS @UNKNOWN2
    case 0xC1CEB4: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1D08B.asm:39 BRANCHGTS @UNKNOWN2
    case 0xC1CEB6: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1D08B.asm:39 BRANCHGTS @UNKNOWN2
    case 0xC1CEB8: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1D08B.asm:39 BRANCHGTS @UNKNOWN2
    case 0xC1CEBA: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1D08B.asm:40 LDA #0
    case 0xC1CEBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1D08B.asm:40 LDA #0
    // Overlapping static entry reached from 0xC1CEBC.
    case 0xC1CEBE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1D08B.asm:41 BRA @UNKNOWN3
    case 0xC1CEBF: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C1/C1D08B.asm:43 LDA #3
    case 0xC1CEC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1D08B.asm:43 LDA #3
    // Overlapping static entry reached from 0xC1CEC1.
    case 0xC1CEC3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1D08B.asm:44 JSL RAND_MOD
    case 0xC1CEC4: cpu.execute_instruction<0x22>(0xC43CC9, 4); return true;
    // src/unknown/C1/C1D08B.asm:45 STA @VIRTUAL02
    case 0xC1CEC8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1D08B.asm:46 LDY @LOCAL02
    case 0xC1CECA: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/unknown/C1/C1D08B.asm:47 TYA
    case 0xC1CECC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:48 INC
    case 0xC1CECD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:49 LDY #4
    case 0xC1CECE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C1/C1D08B.asm:49 LDY #4
    // Overlapping static entry reached from 0xC1CECE.
    case 0xC1CED0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1D08B.asm:50 JSL MODULUS16S
    case 0xC1CED1: cpu.execute_instruction<0x22>(0xC091D6, 4); return true;
    // src/unknown/C1/C1D08B.asm:51 TAX
    case 0xC1CED5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:52 LDA f:UNKNOWN_C3F2B1,X
    case 0xC1CED6: cpu.execute_instruction<0xBF>(0xC3EDCB, 4); return true;
    // src/unknown/C1/C1D08B.asm:53 AND #$00FF
    case 0xC1CEDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1D08B.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC1CEDA.
    case 0xC1CEDC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1D08B.asm:54 CLC
    case 0xC1CEDD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:55 ADC @VIRTUAL02
    case 0xC1CEDE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1D08B.asm:56 TAY
    case 0xC1CEE0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:57 DEY
    case 0xC1CEE1: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:58 LDX @LOCAL00
    case 0xC1CEE2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1D08B.asm:59 TXA
    case 0xC1CEE4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1D08B.asm:60 JSL MULT16
    case 0xC1CEE5: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C1/C1D08B.asm:61 LDY #50
    case 0xC1CEE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000032, 2); else cpu.execute_instruction<0xA0>(0x000032, 3); return true;
    // src/unknown/C1/C1D08B.asm:61 LDY #50
    // Overlapping static entry reached from 0xC1CEE9.
    case 0xC1CEEB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1D08B.asm:62 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC1CEEC: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1D08B.asm:64 END_C_FUNCTION
    case 0xC1CEF0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1D08B.asm:64 END_C_FUNCTION
    case 0xC1CEF1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1DCCB.asm (unresolved).
bool execute_unresolved_c1_c1dccb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1DCCB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DAA6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    case 0xC1DAA8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    case 0xC1DAA9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    case 0xC1DAAA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    case 0xC1DAAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DAAB.
    case 0xC1DAAD: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    case 0xC1DAAE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1DCCB.asm:7 END_STACK_VARS
    case 0xC1DAAF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1DCCB.asm:8 STA @VIRTUAL04
    case 0xC1DAB0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1DCCB.asm:8 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1DAAD.
    case 0xC1DAB1: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/unknown/C1/C1DCCB.asm:9 JSL UNKNOWN_C200D9
    case 0xC1DAB2: cpu.execute_instruction<0x22>(0xC200D9, 4); return true;
    // src/unknown/C1/C1DCCB.asm:9 JSL UNKNOWN_C200D9
    // Overlapping static entry reached from 0xC1DAB1.
    case 0xC1DAB3: cpu.execute_instruction<0xD9>(0x00C200, 3); return true;
    // src/unknown/C1/C1DCCB.asm:10 LDA #1
    case 0xC1DAB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1DCCB.asm:10 LDA #1
    // Overlapping static entry reached from 0xC1DAB6.
    case 0xC1DAB8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1DCCB.asm:11 STA BATTLE_MODE_FLAG
    case 0xC1DAB9: cpu.execute_instruction<0x8D>(0x00993B, 3); return true;
    // src/unknown/C1/C1DCCB.asm:12 STA @VIRTUAL02
    case 0xC1DABC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:13 BRA @UNKNOWN1
    case 0xC1DABE: cpu.execute_instruction<0x80>(0x00004D, 2); return true;
    // src/unknown/C1/C1DCCB.asm:15 LDY #1
    case 0xC1DAC0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C1DCCB.asm:15 LDY #1
    // Overlapping static entry reached from 0xC1DAC0.
    case 0xC1DAC2: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1DCCB.asm:16 LDX @VIRTUAL04
    case 0xC1DAC3: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1DCCB.asm:17 LDA @VIRTUAL02
    case 0xC1DAC5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:18 JSR RESET_CHAR_LEVEL_ONE
    case 0xC1DAC7: cpu.execute_instruction<0x20>(0x00D6CB, 3); return true;
    // src/unknown/C1/C1DCCB.asm:19 LDY #0
    case 0xC1DACA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1DCCB.asm:19 LDY #0
    // Overlapping static entry reached from 0xC1DACA.
    case 0xC1DACC: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1DCCB.asm:20 LDX #100
    case 0xC1DACD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000064, 2); else cpu.execute_instruction<0xA2>(0x000064, 3); return true;
    // src/unknown/C1/C1DCCB.asm:20 LDX #100
    // Overlapping static entry reached from 0xC1DACD.
    case 0xC1DACF: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1DCCB.asm:21 LDA @VIRTUAL02
    case 0xC1DAD0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:22 JSR RECOVER_HP_AMTPERCENT
    case 0xC1DAD2: cpu.execute_instruction<0x20>(0x009014, 3); return true;
    // src/unknown/C1/C1DCCB.asm:23 LDY #0
    case 0xC1DAD5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1DCCB.asm:23 LDY #0
    // Overlapping static entry reached from 0xC1DAD5.
    case 0xC1DAD7: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1DCCB.asm:24 LDX #100
    case 0xC1DAD8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000064, 2); else cpu.execute_instruction<0xA2>(0x000064, 3); return true;
    // src/unknown/C1/C1DCCB.asm:24 LDX #100
    // Overlapping static entry reached from 0xC1DAD8.
    case 0xC1DADA: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1DCCB.asm:25 LDA @VIRTUAL02
    case 0xC1DADB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:26 JSR RECOVER_PP_AMTPERCENT
    case 0xC1DADD: cpu.execute_instruction<0x20>(0x0090C6, 3); return true;
    // src/unknown/C1/C1DCCB.asm:27 LDA @VIRTUAL02
    case 0xC1DAE0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:28 DEC
    case 0xC1DAE2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1DCCB.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC1DAE3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1DCCB.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DAE3.
    case 0xC1DAE5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1DCCB.asm:30 JSL MULT168
    case 0xC1DAE6: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1DCCB.asm:31 TAY
    case 0xC1DAEA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1DCCB.asm:32 LDA PARTY_CHARACTERS+char_struct::current_hp_target,Y
    case 0xC1DAEB: cpu.execute_instruction<0xB9>(0x009CC5, 3); return true;
    // src/unknown/C1/C1DCCB.asm:33 STA PARTY_CHARACTERS+char_struct::current_hp,Y
    case 0xC1DAEE: cpu.execute_instruction<0x99>(0x009CC3, 3); return true;
    // src/unknown/C1/C1DCCB.asm:34 LDA PARTY_CHARACTERS+char_struct::current_pp_target,Y
    case 0xC1DAF1: cpu.execute_instruction<0xB9>(0x009CCB, 3); return true;
    // src/unknown/C1/C1DCCB.asm:35 STA PARTY_CHARACTERS+char_struct::current_pp,Y
    case 0xC1DAF4: cpu.execute_instruction<0x99>(0x009CC9, 3); return true;
    // src/unknown/C1/C1DCCB.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DAF7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C1/C1DCCB.asm:37 STZ_BADOPT @LOCAL00
    case 0xC1DAF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C1/C1DCCB.asm:37 STZ_BADOPT @LOCAL00
    case 0xC1DAFB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C1/C1DCCB.asm:37 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC1DAF9.
    case 0xC1DAFC: cpu.execute_instruction<0x0E>(0x0007A2, 3); return true;
    // src/unknown/C1/C1DCCB.asm:38 LDX #7
    case 0xC1DAFD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000007, 2); else cpu.execute_instruction<0xA2>(0x000007, 3); return true;
    // src/unknown/C1/C1DCCB.asm:38 LDX #7
    // Overlapping static entry reached from 0xC1DAFD.
    case 0xC1DAFF: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C1/C1DCCB.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC1DB00: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1DCCB.asm:40 TYA
    case 0xC1DB02: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1DCCB.asm:41 CLC
    case 0xC1DB03: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1DCCB.asm:42 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC1DB04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/unknown/C1/C1DCCB.asm:42 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC1DB04.
    case 0xC1DB06: cpu.execute_instruction<0x9C>(0x00ED22, 3); return true;
    // src/unknown/C1/C1DCCB.asm:43 JSL MEMSET16
    case 0xC1DB07: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C1/C1DCCB.asm:43 JSL MEMSET16
    // Overlapping static entry reached from 0xC1DB06.
    case 0xC1DB09: cpu.execute_instruction<0x8E>(0x00E6C0, 3); return true;
    // src/unknown/C1/C1DCCB.asm:44 INC @VIRTUAL02
    case 0xC1DB0B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:44 INC @VIRTUAL02
    // Overlapping static entry reached from 0xC1DB09.
    case 0xC1DB0C: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/C1/C1DCCB.asm:46 LDA @VIRTUAL02
    case 0xC1DB0D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1DCCB.asm:47 CMP #4
    case 0xC1DB0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1DCCB.asm:47 CMP #4
    // Overlapping static entry reached from 0xC1DB0F.
    case 0xC1DB11: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C1/C1DCCB.asm:48 BLTEQ @UNKNOWN0
    case 0xC1DB12: cpu.execute_instruction<0x90>(0x0000AC, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C1/C1DCCB.asm:48 BLTEQ @UNKNOWN0
    case 0xC1DB14: cpu.execute_instruction<0xF0>(0x0000AA, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1DCCB.asm:49 END_C_FUNCTION
    case 0xC1DB16: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1DCCB.asm:49 END_C_FUNCTION
    case 0xC1DB17: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1DD5F.asm (unresolved).
bool execute_unresolved_c1_c1dd5f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1DD5F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DB3C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1DD5F.asm:5 JSR UNKNOWN_C1008E
    case 0xC1DB3E: cpu.execute_instruction<0x20>(0x0002AF, 3); return true;
    // src/unknown/C1/C1DD5F.asm:6 JSL WINDOW_TICK
    case 0xC1DB41: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C1/C1DD5F.asm:7 JSR HIDE_HPPP_WINDOWS
    case 0xC1DB45: cpu.execute_instruction<0x20>(0x000E72, 3); return true;
    // src/unknown/C1/C1DD5F.asm:8 JSL WINDOW_TICK
    case 0xC1DB48: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1DD5F.asm:9 END_C_FUNCTION
    case 0xC1DB4C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1DD82.asm (unresolved).
bool execute_unresolved_c1_c1dd82_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1DD82.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DB5F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1DD82.asm:7 END_STACK_VARS
    case 0xC1DB61: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1DD82.asm:7 END_STACK_VARS
    case 0xC1DB62: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1DD82.asm:7 END_STACK_VARS
    case 0xC1DB63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1DD82.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DB63.
    case 0xC1DB65: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1DD82.asm:7 END_STACK_VARS
    case 0xC1DB66: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1DD82.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DB67: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1DD82.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DB69: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1DD82.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DB6B: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1DD82.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DB6D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1DD82.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DB6F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1DD82.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DB71: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1DD82.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DB73: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1DD82.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DB75: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1DD82.asm:10 JSR UNKNOWN_C1AD0A
    case 0xC1DB77: cpu.execute_instruction<0x20>(0x00ABC6, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1DD82.asm:11 END_C_FUNCTION
    case 0xC1DB7A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1DD82.asm:11 END_C_FUNCTION
    case 0xC1DB7B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1DD9F.asm (unresolved).
bool execute_unresolved_c1_c1dd9f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1DD9F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DB7C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1DD9F.asm:7 END_STACK_VARS
    case 0xC1DB7E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1DD9F.asm:7 END_STACK_VARS
    case 0xC1DB7F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1DD9F.asm:7 END_STACK_VARS
    case 0xC1DB80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1DD9F.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DB80.
    case 0xC1DB82: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1DD9F.asm:7 END_STACK_VARS
    case 0xC1DB83: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1DD9F.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DB84: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1DD9F.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DB86: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1DD9F.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DB88: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1DD9F.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DB8A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1DD9F.asm:9 LDA #1
    case 0xC1DB8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1DD9F.asm:9 LDA #1
    // Overlapping static entry reached from 0xC1DB8C.
    case 0xC1DB8E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1DD9F.asm:10 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DB8F: cpu.execute_instruction<0x20>(0x000032, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1DD9F.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DB92: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1DD9F.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DB94: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1DD9F.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DB96: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1DD9F.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DB98: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1DD9F.asm:12 JSL DISPLAY_TEXT
    case 0xC1DB9A: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/unknown/C1/C1DD9F.asm:13 JSR CLEAR_BLINKING_PROMPT
    case 0xC1DB9E: cpu.execute_instruction<0x20>(0x000038, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1DD9F.asm:14 END_C_FUNCTION
    case 0xC1DBA1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1DD9F.asm:14 END_C_FUNCTION
    case 0xC1DBA2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
