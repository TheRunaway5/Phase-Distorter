// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C1/C19A43.asm (unresolved).
bool execute_unresolved_c1_c19a43_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19A43.asm:3 BEGIN_C_FUNCTION
    case 0xC19A43: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19A43.asm:10 END_STACK_VARS
    case 0xC19A45: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19A43.asm:10 END_STACK_VARS
    case 0xC19A46: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19A43.asm:10 END_STACK_VARS
    case 0xC19A47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19A43.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC19A47.
    case 0xC19A49: cpu.execute_instruction<0xFF>(0xABA05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19A43.asm:10 END_STACK_VARS
    case 0xC19A4A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C19A43.asm:11 LDY #.LOWORD(TEMPORARY_TEXT_BUFFER) + 12
    case 0xC19A4B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AB, 2); else cpu.execute_instruction<0xA0>(0x009CAB, 3); return true;
    // src/unknown/C1/C19A43.asm:11 LDY #.LOWORD(TEMPORARY_TEXT_BUFFER) + 12
    // Overlapping static entry reached from 0xC19A4B.
    case 0xC19A4D: cpu.execute_instruction<0x9C>(0x001884, 3); return true;
    // src/unknown/C1/C19A43.asm:12 STY @LOCAL03
    case 0xC19A4E: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C1/C19A43.asm:13 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC19A50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C19A43.asm:13 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC19A50.
    case 0xC19A52: cpu.execute_instruction<0x9C>(0x002022, 3); return true;
    // src/unknown/C1/C19A43.asm:14 JSL UNKNOWN_C20A20
    case 0xC19A53: cpu.execute_instruction<0x22>(0xC20A20, 4); return true;
    // src/unknown/C1/C19A43.asm:14 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC19A52.
    case 0xC19A55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19A43.asm:14 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC19A55.
    case 0xC19A56: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19A43.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0D
    case 0xC19A57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19A43.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0D
    // Overlapping static entry reached from 0xC19A56.
    case 0xC19A58: cpu.execute_instruction<0x0D>(0x002000, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19A43.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0D
    // Overlapping static entry reached from 0xC19A57.
    case 0xC19A59: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C19A43.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0D
    case 0xC19A5A: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C19A43.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0D
    // Overlapping static entry reached from 0xC19A58.
    case 0xC19A5B: cpu.execute_instruction<0xEE>(0x00A904, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19A43.asm:16 LOADPTR STATUS_EQUIP_WINDOW_TEXT_7, @LOCAL00
    case 0xC19A5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x005C10, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19A43.asm:16 LOADPTR STATUS_EQUIP_WINDOW_TEXT_7, @LOCAL00
    // Overlapping static entry reached from 0xC19A5B.
    case 0xC19A5E: cpu.execute_instruction<0x10>(0x00005C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19A43.asm:16 LOADPTR STATUS_EQUIP_WINDOW_TEXT_7, @LOCAL00
    // Overlapping static entry reached from 0xC19A5D.
    case 0xC19A5F: cpu.execute_instruction<0x5C>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19A43.asm:16 LOADPTR STATUS_EQUIP_WINDOW_TEXT_7, @LOCAL00
    case 0xC19A60: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19A43.asm:16 LOADPTR STATUS_EQUIP_WINDOW_TEXT_7, @LOCAL00
    case 0xC19A62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19A43.asm:16 LOADPTR STATUS_EQUIP_WINDOW_TEXT_7, @LOCAL00
    // Overlapping static entry reached from 0xC19A62.
    case 0xC19A64: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19A43.asm:16 LOADPTR STATUS_EQUIP_WINDOW_TEXT_7, @LOCAL00
    case 0xC19A65: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19A43.asm:17 LDX #12
    case 0xC19A67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/unknown/C1/C19A43.asm:17 LDX #12
    // Overlapping static entry reached from 0xC19A67.
    case 0xC19A69: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19A43.asm:18 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC19A6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // src/unknown/C1/C19A43.asm:18 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC19A6A.
    case 0xC19A6C: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/unknown/C1/C19A43.asm:19 JSL MEMCPY16
    case 0xC19A6D: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C1/C19A43.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC19A6C.
    case 0xC19A6F: cpu.execute_instruction<0x8E>(0x00E2C0, 3); return true;
    // src/unknown/C1/C19A43.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC19A71: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19A43.asm:20 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC19A6F.
    case 0xC19A72: cpu.execute_instruction<0x20>(0x0058A9, 3); return true;
    // src/unknown/C1/C19A43.asm:21 LDA #88
    case 0xC19A73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x00A458, 3); return true;
    // src/unknown/C1/C19A43.asm:22 LDY @LOCAL03
    case 0xC19A75: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C19A43.asm:22 LDY @LOCAL03
    // Overlapping static entry reached from 0xC19A73.
    case 0xC19A76: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19A43.asm:23 STA __BSS_START__,Y
    case 0xC19A77: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C19A43.asm:24 TYX
    case 0xC19A7A: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C19A43.asm:25 INX
    case 0xC19A7B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C19A43.asm:26 LDA #97
    case 0xC19A7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000061, 2); else cpu.execute_instruction<0xA9>(0x009D61, 3); return true;
    // src/unknown/C1/C19A43.asm:27 STA __BSS_START__,X
    case 0xC19A7E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C19A43.asm:27 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC19A7C.
    case 0xC19A7F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C19A43.asm:28 INX
    case 0xC19A81: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C19A43.asm:29 LDA #89
    case 0xC19A82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000059, 2); else cpu.execute_instruction<0xA9>(0x009D59, 3); return true;
    // src/unknown/C1/C19A43.asm:30 STA __BSS_START__,X
    case 0xC19A84: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C19A43.asm:30 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC19A82.
    case 0xC19A85: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C19A43.asm:31 INX
    case 0xC19A87: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C19A43.asm:32 LDA #0
    case 0xC19A88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C1/C19A43.asm:33 STA __BSS_START__,X
    case 0xC19A8A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C19A43.asm:33 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC19A88.
    case 0xC19A8B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C19A43.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC19A8D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19A43.asm:35 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19A43.asm:35 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC19A8F.
    case 0xC19A91: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19A43.asm:35 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A92: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19A43.asm:35 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A94: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19A43.asm:35 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A95: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19A43.asm:35 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A97: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19A43.asm:35 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A98: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19A43.asm:35 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19A9A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19A43.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC19A9C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19A43.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19A9E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19A43.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19AA0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19A43.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19AA2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19A43.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19AA4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19A43.asm:38 LDX #.LOWORD(-1)
    case 0xC19AA6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C1/C19A43.asm:38 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC19AA6.
    case 0xC19AA8: cpu.execute_instruction<0xFF>(0x000DA9, 4); return true;
    // src/unknown/C1/C19A43.asm:39 LDA #13
    case 0xC19AA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/unknown/C1/C19A43.asm:39 LDA #13
    // Overlapping static entry reached from 0xC19AA9.
    case 0xC19AAB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19A43.asm:40 JSL SET_WINDOW_TITLE
    case 0xC19AAC: cpu.execute_instruction<0x22>(0xC2032B, 4); return true;
    // src/unknown/C1/C19A43.asm:41 LDA #0
    case 0xC19AB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19A43.asm:41 LDA #0
    // Overlapping static entry reached from 0xC19AB0.
    case 0xC19AB2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19A43.asm:42 STA @VIRTUAL02
    case 0xC19AB3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19A43.asm:43 BRA @UNKNOWN2
    case 0xC19AB5: cpu.execute_instruction<0x80>(0x000065, 2); return true;
    // src/unknown/C1/C19A43.asm:45 LDX @VIRTUAL02
    case 0xC19AB7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C19A43.asm:46 LDA GAME_STATE+game_state::escargo_express_items,X
    case 0xC19AB9: cpu.execute_instruction<0xBD>(0x00984B, 3); return true;
    // src/unknown/C1/C19A43.asm:47 AND #$00FF
    case 0xC19ABC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19A43.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC19ABC.
    case 0xC19ABE: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C19A43.asm:48 TAY
    case 0xC19ABF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C19A43.asm:49 STY @LOCAL02
    case 0xC19AC0: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19A43.asm:50 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19AC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19A43.asm:50 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19AC2.
    case 0xC19AC4: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19A43.asm:50 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19AC5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19A43.asm:50 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19AC4.
    case 0xC19AC6: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19A43.asm:50 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19AC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19A43.asm:50 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19AC6.
    case 0xC19AC8: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19A43.asm:50 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19AC7.
    case 0xC19AC9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19A43.asm:50 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19ACA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19A43.asm:51 TYA
    case 0xC19ACC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C19A43.asm:52 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19ACD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C19A43.asm:52 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19ACD.
    case 0xC19ACF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C19A43.asm:52 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19AD0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19A43.asm:53 CLC
    case 0xC19AD4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19A43.asm:54 ADC @VIRTUAL06
    case 0xC19AD5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19A43.asm:55 STA @VIRTUAL06
    case 0xC19AD7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19A43.asm:56 STA @LOCAL00
    case 0xC19AD9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19A43.asm:57 LDA @VIRTUAL06+2
    case 0xC19ADB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19A43.asm:58 STA @LOCAL00+2
    case 0xC19ADD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19A43.asm:59 LDX #.SIZEOF(item::name)
    case 0xC19ADF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/unknown/C1/C19A43.asm:59 LDX #.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC19ADF.
    case 0xC19AE1: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19A43.asm:60 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC19AE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // src/unknown/C1/C19A43.asm:60 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC19AE2.
    case 0xC19AE4: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/unknown/C1/C19A43.asm:61 JSL MEMCPY16
    case 0xC19AE5: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C1/C19A43.asm:61 JSL MEMCPY16
    // Overlapping static entry reached from 0xC19AE4.
    case 0xC19AE7: cpu.execute_instruction<0x8E>(0x00E2C0, 3); return true;
    // src/unknown/C1/C19A43.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC19AE9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19A43.asm:62 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC19AE7.
    case 0xC19AEA: cpu.execute_instruction<0x20>(0x00B89C, 3); return true;
    // src/unknown/C1/C19A43.asm:63 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    case 0xC19AEB: cpu.execute_instruction<0x9C>(0x009CB8, 3); return true;
    // src/unknown/C1/C19A43.asm:63 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC19AEA.
    case 0xC19AED: cpu.execute_instruction<0x9C>(0x0016A4, 3); return true;
    // src/unknown/C1/C19A43.asm:64 LDY @LOCAL02
    case 0xC19AEE: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C19A43.asm:65 BEQ @UNKNOWN1
    case 0xC19AF0: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/unknown/C1/C19A43.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC19AF2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19A43.asm:67 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19AF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19A43.asm:67 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC19AF4.
    case 0xC19AF6: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19A43.asm:67 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19AF7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19A43.asm:67 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19AF9: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19A43.asm:67 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19AFA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19A43.asm:67 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19AFC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19A43.asm:67 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19AFD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19A43.asm:67 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19AFF: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19A43.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC19B01: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19A43.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19B03: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19A43.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19B05: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19A43.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19B07: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19A43.asm:69 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19B09: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19A43.asm:70 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19B0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19A43.asm:70 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19B0B.
    case 0xC19B0D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C19A43.asm:70 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19B0E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19A43.asm:70 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19B10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19A43.asm:70 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19B10.
    case 0xC19B12: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C19A43.asm:70 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19B13: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C19A43.asm:71 JSR UNKNOWN_C113D1
    case 0xC19B15: cpu.execute_instruction<0x20>(0x0013D1, 3); return true;
    // src/unknown/C1/C19A43.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC19B18: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C19A43.asm:74 INC @VIRTUAL02
    case 0xC19B1A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C19A43.asm:76 LDA @VIRTUAL02
    case 0xC19B1C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C19A43.asm:77 CMP #36
    case 0xC19B1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000024, 3); return true;
    // src/unknown/C1/C19A43.asm:77 CMP #36
    // Overlapping static entry reached from 0xC19B1E.
    case 0xC19B20: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C19A43.asm:78 BCC @UNKNOWN0
    case 0xC19B21: cpu.execute_instruction<0x90>(0x000094, 2); return true;
    // src/unknown/C1/C19A43.asm:79 LDY #1
    case 0xC19B23: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C19A43.asm:79 LDY #1
    // Overlapping static entry reached from 0xC19B23.
    case 0xC19B25: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C19A43.asm:80 LDX #0
    case 0xC19B26: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C19A43.asm:80 LDX #0
    // Overlapping static entry reached from 0xC19B26.
    case 0xC19B28: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19A43.asm:81 LDA #2
    case 0xC19B29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C19A43.asm:81 LDA #2
    // Overlapping static entry reached from 0xC19B29.
    case 0xC19B2B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19A43.asm:82 JSR UNKNOWN_C1180D
    case 0xC19B2C: cpu.execute_instruction<0x20>(0x00180D, 3); return true;
    // src/unknown/C1/C19A43.asm:83 LDA #1
    case 0xC19B2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C19A43.asm:83 LDA #1
    // Overlapping static entry reached from 0xC19B2F.
    case 0xC19B31: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19A43.asm:84 JSR SELECTION_MENU
    case 0xC19B32: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C19A43.asm:85 TAX
    case 0xC19B35: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19A43.asm:86 STX @LOCAL03
    case 0xC19B36: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C19A43.asm:87 LDA #13
    case 0xC19B38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/unknown/C1/C19A43.asm:87 LDA #13
    // Overlapping static entry reached from 0xC19B38.
    case 0xC19B3A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19A43.asm:88 JSL UNKNOWN_EF0115
    case 0xC19B3B: cpu.execute_instruction<0x22>(0xEF0115, 4); return true;
    // src/unknown/C1/C19A43.asm:89 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC19B3F: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // src/unknown/C1/C19A43.asm:90 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC19B42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C19A43.asm:90 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC19B42.
    case 0xC19B44: cpu.execute_instruction<0x9C>(0x00BC22, 3); return true;
    // src/unknown/C1/C19A43.asm:91 JSL UNKNOWN_C20ABC
    case 0xC19B45: cpu.execute_instruction<0x22>(0xC20ABC, 4); return true;
    // src/unknown/C1/C19A43.asm:91 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC19B44.
    case 0xC19B47: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19A43.asm:91 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC19B47.
    case 0xC19B48: cpu.execute_instruction<0xC2>(0x0000A6, 2); return true;
    // src/unknown/C1/C19A43.asm:92 LDX @LOCAL03
    case 0xC19B49: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C19A43.asm:92 LDX @LOCAL03
    // Overlapping static entry reached from 0xC19B48.
    case 0xC19B4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19A43.asm:93 TXA
    case 0xC19B4B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19A43.asm:94 END_C_FUNCTION
    case 0xC19B4C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19A43.asm:94 END_C_FUNCTION
    case 0xC19B4D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19CDD.asm (unresolved).
bool execute_unresolved_c1_c19cdd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19CDD.asm:3 BEGIN_C_FUNCTION
    case 0xC19CDD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19CDD.asm:7 END_STACK_VARS
    case 0xC19CDF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19CDD.asm:7 END_STACK_VARS
    case 0xC19CE0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19CDD.asm:7 END_STACK_VARS
    case 0xC19CE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19CDD.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC19CE1.
    case 0xC19CE3: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19CDD.asm:7 END_STACK_VARS
    case 0xC19CE4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:8 LDA #0
    case 0xC19CE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19CDD.asm:8 LDA #0
    // Overlapping static entry reached from 0xC19CE5.
    case 0xC19CE7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19CDD.asm:9 STA @LOCAL01
    case 0xC19CE8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19CDD.asm:10 BRA @UNKNOWN1
    case 0xC19CEA: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C1/C19CDD.asm:12 LDY #.SIZEOF(char_struct)
    case 0xC19CEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C19CDD.asm:12 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19CEC.
    case 0xC19CEE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19CDD.asm:13 JSL MULT168
    case 0xC19CEF: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19CDD.asm:14 TAX
    case 0xC19CF3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:15 LDA #$0400
    case 0xC19CF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000400, 3); return true;
    // src/unknown/C1/C19CDD.asm:15 LDA #$0400
    // Overlapping static entry reached from 0xC19CF4.
    case 0xC19CF6: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/unknown/C1/C19CDD.asm:16 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    case 0xC19CF7: cpu.execute_instruction<0x9D>(0x009A1D, 3); return true;
    // src/unknown/C1/C19CDD.asm:16 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    // Overlapping static entry reached from 0xC19CF6.
    case 0xC19CF8: cpu.execute_instruction<0x1D>(0x00A59A, 3); return true;
    // src/unknown/C1/C19CDD.asm:17 LDA @LOCAL01
    case 0xC19CFA: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C19CDD.asm:17 LDA @LOCAL01
    // Overlapping static entry reached from 0xC19CF8.
    case 0xC19CFB: cpu.execute_instruction<0x12>(0x00001A, 2); return true;
    // src/unknown/C1/C19CDD.asm:18 INC
    case 0xC19CFC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:19 STA @LOCAL01
    case 0xC19CFD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19CDD.asm:21 CMP #PLAYER_CHAR_COUNT
    case 0xC19CFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C19CDD.asm:21 CMP #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC19CFF.
    case 0xC19D01: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C19CDD.asm:22 BCC @UNKNOWN0
    case 0xC19D02: cpu.execute_instruction<0x90>(0x0000E8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D04: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x001FC8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D04.
    case 0xC19D06: cpu.execute_instruction<0x1F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D07: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D06.
    case 0xC19D0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D09.
    case 0xC19D0B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D0C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D0A.
    case 0xC19D0D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:24 LDA GAME_STATE+game_state::text_flavour
    case 0xC19D0E: cpu.execute_instruction<0xAD>(0x0099CD, 3); return true;
    // src/unknown/C1/C19CDD.asm:25 AND #$00FF
    case 0xC19D11: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19CDD.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC19D11.
    case 0xC19D13: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C19CDD.asm:26 DEC
    case 0xC19D14: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C1/C19CDD.asm:27 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19D15: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C1/C19CDD.asm:27 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19D17: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C1/C19CDD.asm:27 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19D18: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19CDD.asm:28 TAX
    case 0xC19D1A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:29 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC19D1B: cpu.execute_instruction<0xBF>(0xE01FB9, 4); return true;
    // src/unknown/C1/C19CDD.asm:30 CLC
    case 0xC19D1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:31 ADC #40
    case 0xC19D20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/unknown/C1/C19CDD.asm:31 ADC #40
    // Overlapping static entry reached from 0xC19D20.
    case 0xC19D22: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C19CDD.asm:32 CLC
    case 0xC19D23: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:33 ADC @VIRTUAL06
    case 0xC19D24: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19CDD.asm:34 STA @VIRTUAL06
    case 0xC19D26: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19CDD.asm:35 STA @LOCAL00
    case 0xC19D28: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19CDD.asm:36 LDA @VIRTUAL06+2
    case 0xC19D2A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19CDD.asm:37 STA @LOCAL00+2
    case 0xC19D2C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19CDD.asm:38 LDX #BPP2PALETTE_SIZE
    case 0xC19D2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C1/C19CDD.asm:38 LDX #BPP2PALETTE_SIZE
    // Overlapping static entry reached from 0xC19D2E.
    case 0xC19D30: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19CDD.asm:39 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 3
    case 0xC19D31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000218, 3); return true;
    // src/unknown/C1/C19CDD.asm:39 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC19D31.
    case 0xC19D33: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C1/C19CDD.asm:40 JSL MEMCPY16
    case 0xC19D34: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C1/C19CDD.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC19D38: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19CDD.asm:42 LDA #PALETTE_UPLOAD::FULL
    case 0xC19D3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C1/C19CDD.asm:43 STA PALETTE_UPLOAD_MODE
    case 0xC19D3C: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C1/C19CDD.asm:43 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC19D3A.
    case 0xC19D3D: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C1/C19CDD.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC19D3F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C19CDD.asm:45 LDA #1
    case 0xC19D41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C19CDD.asm:45 LDA #1
    // Overlapping static entry reached from 0xC19D41.
    case 0xC19D43: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C19CDD.asm:46 STA REDRAW_ALL_WINDOWS
    case 0xC19D44: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19CDD.asm:47 END_C_FUNCTION
    case 0xC19D47: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19CDD.asm:47 END_C_FUNCTION
    case 0xC19D48: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19D49.asm (unresolved).
bool execute_unresolved_c1_c19d49_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19D49.asm:3 BEGIN_C_FUNCTION
    case 0xC19D49: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19D49.asm:7 END_STACK_VARS
    case 0xC19D4B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19D49.asm:7 END_STACK_VARS
    case 0xC19D4C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19D49.asm:7 END_STACK_VARS
    case 0xC19D4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19D49.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC19D4D.
    case 0xC19D4F: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19D49.asm:7 END_STACK_VARS
    case 0xC19D50: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:8 LDA #0
    case 0xC19D51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19D49.asm:8 LDA #0
    // Overlapping static entry reached from 0xC19D51.
    case 0xC19D53: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19D49.asm:9 STA @LOCAL01
    case 0xC19D54: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19D49.asm:10 BRA @UNKNOWN1
    case 0xC19D56: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C1/C19D49.asm:12 LDY #.SIZEOF(char_struct)
    case 0xC19D58: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C19D49.asm:12 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19D58.
    case 0xC19D5A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19D49.asm:13 JSL MULT168
    case 0xC19D5B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19D49.asm:14 TAX
    case 0xC19D5F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:15 LDA #$0400
    case 0xC19D60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000400, 3); return true;
    // src/unknown/C1/C19D49.asm:15 LDA #$0400
    // Overlapping static entry reached from 0xC19D60.
    case 0xC19D62: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/unknown/C1/C19D49.asm:16 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    case 0xC19D63: cpu.execute_instruction<0x9D>(0x009A1D, 3); return true;
    // src/unknown/C1/C19D49.asm:16 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    // Overlapping static entry reached from 0xC19D62.
    case 0xC19D64: cpu.execute_instruction<0x1D>(0x00A59A, 3); return true;
    // src/unknown/C1/C19D49.asm:17 LDA @LOCAL01
    case 0xC19D66: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C19D49.asm:17 LDA @LOCAL01
    // Overlapping static entry reached from 0xC19D64.
    case 0xC19D67: cpu.execute_instruction<0x12>(0x00001A, 2); return true;
    // src/unknown/C1/C19D49.asm:18 INC
    case 0xC19D68: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:19 STA @LOCAL01
    case 0xC19D69: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19D49.asm:21 CMP #PLAYER_CHAR_COUNT
    case 0xC19D6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C19D49.asm:21 CMP #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC19D6B.
    case 0xC19D6D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C19D49.asm:22 BCC @UNKNOWN0
    case 0xC19D6E: cpu.execute_instruction<0x90>(0x0000E8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x001FC8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D70.
    case 0xC19D72: cpu.execute_instruction<0x1F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D73: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D72.
    case 0xC19D76: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D75.
    case 0xC19D77: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D78: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D76.
    case 0xC19D79: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:24 LDA GAME_STATE+game_state::text_flavour
    case 0xC19D7A: cpu.execute_instruction<0xAD>(0x0099CD, 3); return true;
    // src/unknown/C1/C19D49.asm:25 AND #$00FF
    case 0xC19D7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19D49.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC19D7D.
    case 0xC19D7F: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C19D49.asm:26 DEC
    case 0xC19D80: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C1/C19D49.asm:27 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19D81: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C1/C19D49.asm:27 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19D83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C1/C19D49.asm:27 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19D84: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19D49.asm:28 TAX
    case 0xC19D86: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:29 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC19D87: cpu.execute_instruction<0xBF>(0xE01FB9, 4); return true;
    // src/unknown/C1/C19D49.asm:30 CLC
    case 0xC19D8B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:31 ADC #24
    case 0xC19D8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000018, 2); else cpu.execute_instruction<0x69>(0x000018, 3); return true;
    // src/unknown/C1/C19D49.asm:31 ADC #24
    // Overlapping static entry reached from 0xC19D8C.
    case 0xC19D8E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C19D49.asm:32 CLC
    case 0xC19D8F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:33 ADC @VIRTUAL06
    case 0xC19D90: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19D49.asm:34 STA @VIRTUAL06
    case 0xC19D92: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19D49.asm:35 STA @LOCAL00
    case 0xC19D94: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19D49.asm:36 LDA @VIRTUAL06+2
    case 0xC19D96: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19D49.asm:37 STA @LOCAL00+2
    case 0xC19D98: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19D49.asm:38 LDX #BPP2PALETTE_SIZE
    case 0xC19D9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C1/C19D49.asm:38 LDX #BPP2PALETTE_SIZE
    // Overlapping static entry reached from 0xC19D9A.
    case 0xC19D9C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19D49.asm:39 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 3
    case 0xC19D9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000218, 3); return true;
    // src/unknown/C1/C19D49.asm:39 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC19D9D.
    case 0xC19D9F: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C1/C19D49.asm:40 JSL MEMCPY16
    case 0xC19DA0: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C1/C19D49.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC19DA4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19D49.asm:42 LDA #PALETTE_UPLOAD::FULL
    case 0xC19DA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C1/C19D49.asm:43 STA PALETTE_UPLOAD_MODE
    case 0xC19DA8: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C1/C19D49.asm:43 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC19DA6.
    case 0xC19DA9: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C1/C19D49.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC19DAB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C19D49.asm:45 LDA #1
    case 0xC19DAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C19D49.asm:45 LDA #1
    // Overlapping static entry reached from 0xC19DAD.
    case 0xC19DAF: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C19D49.asm:46 STA REDRAW_ALL_WINDOWS
    case 0xC19DB0: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19D49.asm:47 END_C_FUNCTION
    case 0xC19DB3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19D49.asm:47 END_C_FUNCTION
    case 0xC19DB4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19DB5.asm (unresolved).
bool execute_unresolved_c1_c19db5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19DB5.asm:3 BEGIN_C_FUNCTION
    case 0xC19DB5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19DB5.asm:12 END_STACK_VARS
    case 0xC19DB7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C19DB5.asm:12 END_STACK_VARS
    case 0xC19DB8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19DB5.asm:12 END_STACK_VARS
    case 0xC19DB9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19DB5.asm:12 END_STACK_VARS
    case 0xC19DBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19DB5.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC19DBA.
    case 0xC19DBC: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19DB5.asm:12 END_STACK_VARS
    case 0xC19DBD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C19DB5.asm:12 END_STACK_VARS
    case 0xC19DBE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:13 STA @LOCAL05
    case 0xC19DBF: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C1/C19DB5.asm:13 STA @LOCAL05
    // Overlapping static entry reached from 0xC19DBC.
    case 0xC19DC0: cpu.execute_instruction<0x1E>(0x001820, 3); return true;
    // src/unknown/C1/C19DB5.asm:14 JSR UNKNOWN_C1AA18
    case 0xC19DC1: cpu.execute_instruction<0x20>(0x00AA18, 3); return true;
    // src/unknown/C1/C19DB5.asm:14 JSR UNKNOWN_C1AA18
    // Overlapping static entry reached from 0xC19DC0.
    case 0xC19DC3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:15 JSL SET_INSTANT_PRINTING
    case 0xC19DC4: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/unknown/C1/C19DB5.asm:16 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC19DC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C19DB5.asm:16 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC19DC8.
    case 0xC19DCA: cpu.execute_instruction<0x9C>(0x002022, 3); return true;
    // src/unknown/C1/C19DB5.asm:17 JSL UNKNOWN_C20A20
    case 0xC19DCB: cpu.execute_instruction<0x22>(0xC20A20, 4); return true;
    // src/unknown/C1/C19DB5.asm:17 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC19DCA.
    case 0xC19DCD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:17 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC19DCD.
    case 0xC19DCE: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19DB5.asm:18 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0C
    case 0xC19DCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19DB5.asm:18 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0C
    // Overlapping static entry reached from 0xC19DCE.
    case 0xC19DD0: cpu.execute_instruction<0x0C>(0x002000, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19DB5.asm:18 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0C
    // Overlapping static entry reached from 0xC19DCF.
    case 0xC19DD1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C19DB5.asm:18 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0C
    case 0xC19DD2: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C19DB5.asm:18 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0C
    // Overlapping static entry reached from 0xC19DD0.
    case 0xC19DD3: cpu.execute_instruction<0xEE>(0x00A904, 3); return true;
    // src/unknown/C1/C19DB5.asm:19 LDA #5
    case 0xC19DD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C1/C19DB5.asm:19 LDA #5
    // Overlapping static entry reached from 0xC19DD3.
    case 0xC19DD6: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C1/C19DB5.asm:19 LDA #5
    // Overlapping static entry reached from 0xC19DD5.
    case 0xC19DD7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19DB5.asm:20 JSR UNKNOWN_C10EB4
    case 0xC19DD8: cpu.execute_instruction<0x20>(0x000EB4, 3); return true;
    // src/unknown/C1/C19DB5.asm:21 LDA #0
    case 0xC19DDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19DB5.asm:21 LDA #0
    // Overlapping static entry reached from 0xC19DDB.
    case 0xC19DDD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19DB5.asm:22 STA @VIRTUAL04
    case 0xC19DDE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5.asm:23 STA @LOCAL04
    case 0xC19DE0: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C19DB5.asm:24 JMP @UNKNOWN3
    case 0xC19DE2: cpu.execute_instruction<0x4C>(0x009E99, 3); return true;
    // src/unknown/C1/C19DB5.asm:26 LDA @LOCAL05
    case 0xC19DE5: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/unknown/C1/C19DB5.asm:27 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC19DE7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/unknown/C1/C19DB5.asm:27 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC19DE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/unknown/C1/C19DB5.asm:27 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC19DEA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/unknown/C1/C19DB5.asm:27 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC19DEC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/unknown/C1/C19DB5.asm:27 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC19DED: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5.asm:28 LDX @LOCAL04
    case 0xC19DEF: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C1/C19DB5.asm:29 STX @VIRTUAL04
    case 0xC19DF1: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5.asm:30 CLC
    case 0xC19DF3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:31 ADC @VIRTUAL04
    case 0xC19DF4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5.asm:32 TAX
    case 0xC19DF6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:33 LDA f:STORE_TABLE,X
    case 0xC19DF7: cpu.execute_instruction<0xBF>(0xD576B2, 4); return true;
    // src/unknown/C1/C19DB5.asm:34 AND #$00FF
    case 0xC19DFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19DB5.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC19DFB.
    case 0xC19DFD: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C19DB5.asm:35 TAY
    case 0xC19DFE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:36 STY @LOCAL03
    case 0xC19DFF: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C19DB5.asm:37 BEQL @UNKNOWN2
    case 0xC19E01: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C19DB5.asm:37 BEQL @UNKNOWN2
    case 0xC19E03: cpu.execute_instruction<0x4C>(0x009E93, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19DB5.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19E06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19DB5.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19E06.
    case 0xC19E08: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19DB5.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19E09: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19DB5.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19E08.
    case 0xC19E0A: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19DB5.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19E0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19DB5.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19E0A.
    case 0xC19E0C: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19DB5.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19E0B.
    case 0xC19E0D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19DB5.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19E0E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19DB5.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC19E10: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19DB5.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC19E12: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19DB5.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC19E14: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19DB5.asm:39 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC19E16: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C19DB5.asm:40 TYA
    case 0xC19E18: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C19DB5.asm:41 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19E19: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C19DB5.asm:41 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19E19.
    case 0xC19E1B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C19DB5.asm:41 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19E1C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19DB5.asm:42 STA @VIRTUAL02
    case 0xC19E20: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19DB5.asm:43 CLC
    case 0xC19E22: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:44 ADC @VIRTUAL06
    case 0xC19E23: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19DB5.asm:45 STA @VIRTUAL06
    case 0xC19E25: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19DB5.asm:46 STA @LOCAL00
    case 0xC19E27: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19DB5.asm:47 LDA @VIRTUAL06+2
    case 0xC19E29: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19DB5.asm:48 STA @LOCAL00+2
    case 0xC19E2B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19DB5.asm:49 LDX #.SIZEOF(item::name)
    case 0xC19E2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/unknown/C1/C19DB5.asm:49 LDX #.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC19E2D.
    case 0xC19E2F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19DB5.asm:50 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC19E30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // src/unknown/C1/C19DB5.asm:50 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC19E30.
    case 0xC19E32: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/unknown/C1/C19DB5.asm:51 JSL MEMCPY16
    case 0xC19E33: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C1/C19DB5.asm:51 JSL MEMCPY16
    // Overlapping static entry reached from 0xC19E32.
    case 0xC19E35: cpu.execute_instruction<0x8E>(0x00E2C0, 3); return true;
    // src/unknown/C1/C19DB5.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC19E37: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19DB5.asm:52 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC19E35.
    case 0xC19E38: cpu.execute_instruction<0x20>(0x00B89C, 3); return true;
    // src/unknown/C1/C19DB5.asm:53 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    case 0xC19E39: cpu.execute_instruction<0x9C>(0x009CB8, 3); return true;
    // src/unknown/C1/C19DB5.asm:53 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC19E38.
    case 0xC19E3B: cpu.execute_instruction<0x9C>(0x0020C2, 3); return true;
    // src/unknown/C1/C19DB5.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC19E3C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19DB5.asm:55 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19E3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19DB5.asm:55 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC19E3E.
    case 0xC19E40: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19DB5.asm:55 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19E41: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19DB5.asm:55 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19E43: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19DB5.asm:55 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19E44: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19DB5.asm:55 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19E46: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19DB5.asm:55 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19E47: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19DB5.asm:55 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19E49: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19DB5.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC19E4B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19DB5.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19E4D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19DB5.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19E4F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19DB5.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19E51: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19DB5.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19E53: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19DB5.asm:58 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19E55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19DB5.asm:58 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19E55.
    case 0xC19E57: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C19DB5.asm:58 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19E58: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19DB5.asm:58 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19E5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19DB5.asm:58 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19E5A.
    case 0xC19E5C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C19DB5.asm:58 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19E5D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C19DB5.asm:59 LDY @LOCAL03
    case 0xC19E5F: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C1/C19DB5.asm:60 TYA
    case 0xC19E61: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:61 JSR UNKNOWN_C115F4
    case 0xC19E62: cpu.execute_instruction<0x20>(0x0015F4, 3); return true;
    // src/unknown/C1/C19DB5.asm:62 LDX @VIRTUAL04
    case 0xC19E65: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5.asm:63 LDA #0
    case 0xC19E67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19DB5.asm:63 LDA #0
    // Overlapping static entry reached from 0xC19E67.
    case 0xC19E69: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19DB5.asm:64 JSL UNKNOWN_C438A5
    case 0xC19E6A: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C19DB5.asm:65 LDA @VIRTUAL02
    case 0xC19E6E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C19DB5.asm:66 CLC
    case 0xC19E70: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:67 ADC #26
    case 0xC19E71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001A, 2); else cpu.execute_instruction<0x69>(0x00001A, 3); return true;
    // src/unknown/C1/C19DB5.asm:67 ADC #26
    // Overlapping static entry reached from 0xC19E71.
    case 0xC19E73: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C19DB5.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC19E74: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C19DB5.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC19E76: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C19DB5.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC19E78: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C19DB5.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC19E7A: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C1/C19DB5.asm:69 CLC
    case 0xC19E7C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:70 ADC @VIRTUAL06
    case 0xC19E7D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19DB5.asm:71 STA @VIRTUAL06
    case 0xC19E7F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19DB5.asm:72 LDA [@VIRTUAL06]
    case 0xC19E81: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C19DB5.asm:73 STORE_INT1632 @VIRTUAL06
    case 0xC19E83: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C19DB5.asm:73 STORE_INT1632 @VIRTUAL06
    case 0xC19E85: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19DB5.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19E87: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19DB5.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19E89: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19DB5.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19E8B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19DB5.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19E8D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19DB5.asm:75 JSL UNKNOWN_C4507A
    case 0xC19E8F: cpu.execute_instruction<0x22>(0xC4507A, 4); return true;
    // src/unknown/C1/C19DB5.asm:77 INC @VIRTUAL04
    case 0xC19E93: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5.asm:78 LDA @VIRTUAL04
    case 0xC19E95: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5.asm:79 STA @LOCAL04
    case 0xC19E97: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C19DB5.asm:81 LDA @VIRTUAL04
    case 0xC19E99: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C19DB5.asm:82 CMP #7
    case 0xC19E9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C1/C19DB5.asm:82 CMP #7
    // Overlapping static entry reached from 0xC19E9B.
    case 0xC19E9D: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C1/C19DB5.asm:83 BCCL @UNKNOWN0
    case 0xC19E9E: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C1/C19DB5.asm:83 BCCL @UNKNOWN0
    case 0xC19EA0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C1/C19DB5.asm:83 BCCL @UNKNOWN0
    case 0xC19EA2: cpu.execute_instruction<0x4C>(0x009DE5, 3); return true;
    // src/unknown/C1/C19DB5.asm:84 LDX #0
    case 0xC19EA5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C19DB5.asm:84 LDX #0
    // Overlapping static entry reached from 0xC19EA5.
    case 0xC19EA7: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C1/C19DB5.asm:85 TXA
    case 0xC19EA8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:86 JSL UNKNOWN_C438A5
    case 0xC19EA9: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C19DB5.asm:87 LDY #0
    case 0xC19EAD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C19DB5.asm:87 LDY #0
    // Overlapping static entry reached from 0xC19EAD.
    case 0xC19EAF: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C1/C19DB5.asm:88 TYX
    case 0xC19EB0: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:89 LDA #1
    case 0xC19EB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C19DB5.asm:89 LDA #1
    // Overlapping static entry reached from 0xC19EB1.
    case 0xC19EB3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19DB5.asm:90 JSR UNKNOWN_C1180D
    case 0xC19EB4: cpu.execute_instruction<0x20>(0x00180D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19DB5.asm:91 LOADPTR SET_HPPP_WINDOW_MODE_ITEM, @LOCAL00
    case 0xC19EB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x009B4E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19DB5.asm:91 LOADPTR SET_HPPP_WINDOW_MODE_ITEM, @LOCAL00
    // Overlapping static entry reached from 0xC19EB7.
    case 0xC19EB9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19DB5.asm:91 LOADPTR SET_HPPP_WINDOW_MODE_ITEM, @LOCAL00
    case 0xC19EBA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19DB5.asm:91 LOADPTR SET_HPPP_WINDOW_MODE_ITEM, @LOCAL00
    case 0xC19EBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19DB5.asm:91 LOADPTR SET_HPPP_WINDOW_MODE_ITEM, @LOCAL00
    // Overlapping static entry reached from 0xC19EBC.
    case 0xC19EBE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19DB5.asm:91 LOADPTR SET_HPPP_WINDOW_MODE_ITEM, @LOCAL00
    case 0xC19EBF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19DB5.asm:92 JSR UNKNOWN_C11F5A
    case 0xC19EC1: cpu.execute_instruction<0x20>(0x001F5A, 3); return true;
    // src/unknown/C1/C19DB5.asm:93 JSR UNKNOWN_C19CDD
    case 0xC19EC4: cpu.execute_instruction<0x20>(0x009CDD, 3); return true;
    // src/unknown/C1/C19DB5.asm:94 LDA #1
    case 0xC19EC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C19DB5.asm:94 LDA #1
    // Overlapping static entry reached from 0xC19EC7.
    case 0xC19EC9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19DB5.asm:95 JSR SELECTION_MENU
    case 0xC19ECA: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C19DB5.asm:96 TAX
    case 0xC19ECD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:97 STX @LOCAL03
    case 0xC19ECE: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C1/C19DB5.asm:98 JSR UNKNOWN_C19D49
    case 0xC19ED0: cpu.execute_instruction<0x20>(0x009D49, 3); return true;
    // src/unknown/C1/C19DB5.asm:99 JSR CLOSE_FOCUS_WINDOW
    case 0xC19ED3: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/unknown/C1/C19DB5.asm:100 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC19ED6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C19DB5.asm:100 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC19ED6.
    case 0xC19ED8: cpu.execute_instruction<0x9C>(0x00BC22, 3); return true;
    // src/unknown/C1/C19DB5.asm:101 JSL UNKNOWN_C20ABC
    case 0xC19ED9: cpu.execute_instruction<0x22>(0xC20ABC, 4); return true;
    // src/unknown/C1/C19DB5.asm:101 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC19ED8.
    case 0xC19EDB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:101 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC19EDB.
    case 0xC19EDC: cpu.execute_instruction<0xC2>(0x000022, 2); return true;
    // src/unknown/C1/C19DB5.asm:102 JSL CLEAR_INSTANT_PRINTING
    case 0xC19EDD: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/unknown/C1/C19DB5.asm:102 JSL CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC19EDC.
    case 0xC19EDE: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:102 JSL CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC19EDE.
    case 0xC19EDF: cpu.execute_instruction<0xE4>(0x0000C3, 2); return true;
    // src/unknown/C1/C19DB5.asm:103 LDX @LOCAL03
    case 0xC19EE1: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C1/C19DB5.asm:104 TXA
    case 0xC19EE3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:105 PLD
    case 0xC19EE4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C1/C19DB5.asm:106 RTS
    case 0xC19EE5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19F29.asm (unresolved).
bool execute_unresolved_c1_c19f29_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19F29.asm:3 BEGIN_C_FUNCTION
    case 0xC19F29: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19F29.asm:12 END_STACK_VARS
    case 0xC19F2B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C19F29.asm:12 END_STACK_VARS
    case 0xC19F2C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19F29.asm:12 END_STACK_VARS
    case 0xC19F2D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19F29.asm:12 END_STACK_VARS
    case 0xC19F2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19F29.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC19F2E.
    case 0xC19F30: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19F29.asm:12 END_STACK_VARS
    case 0xC19F31: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C19F29.asm:12 END_STACK_VARS
    case 0xC19F32: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:13 TAX
    case 0xC19F33: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:14 DEC
    case 0xC19F34: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:15 STA @LOCAL05
    case 0xC19F35: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19F29.asm:16 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU
    case 0xC19F37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19F29.asm:16 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU
    // Overlapping static entry reached from 0xC19F37.
    case 0xC19F39: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C19F29.asm:16 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU
    case 0xC19F3A: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C19F29.asm:17 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC19F3D: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // src/unknown/C1/C19F29.asm:18 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC19F41: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C19F29.asm:19 AND #$00FF
    case 0xC19F44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19F29.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC19F44.
    case 0xC19F46: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C19F29.asm:20 CMP #1
    case 0xC19F47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C19F29.asm:20 CMP #1
    // Overlapping static entry reached from 0xC19F47.
    case 0xC19F49: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19F29.asm:21 BEQ @UNKNOWN0
    case 0xC19F4A: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C19F29.asm:22 LDA #6
    case 0xC19F4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C19F29.asm:22 LDA #6
    // Overlapping static entry reached from 0xC19F4C.
    case 0xC19F4E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C19F29.asm:23 STA PAGINATION_WINDOW
    case 0xC19F4F: cpu.execute_instruction<0x8D>(0x005E7A, 3); return true;
    // src/unknown/C1/C19F29.asm:25 LDA @LOCAL05
    case 0xC19F52: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29.asm:26 LDY #.SIZEOF(char_struct)
    case 0xC19F54: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C19F29.asm:26 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19F54.
    case 0xC19F56: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29.asm:27 JSL MULT168
    case 0xC19F57: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19F29.asm:28 CLC
    case 0xC19F5B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:29 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC19F5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C1/C19F29.asm:29 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC19F5C.
    case 0xC19F5E: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19F29.asm:30 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19F5F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19F29.asm:30 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19F61: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19F29.asm:30 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19F62: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19F29.asm:30 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19F64: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19F29.asm:30 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19F65: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19F29.asm:30 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19F67: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19F29.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC19F69: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19F29.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19F6B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19F29.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19F6D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19F29.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19F6F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19F29.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19F71: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19F29.asm:33 LDX #.SIZEOF(char_struct::name)
    case 0xC19F73: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C1/C19F29.asm:33 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC19F73.
    case 0xC19F75: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19F29.asm:34 LDA #6
    case 0xC19F76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C19F29.asm:34 LDA #6
    // Overlapping static entry reached from 0xC19F76.
    case 0xC19F78: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29.asm:35 JSL SET_WINDOW_TITLE
    case 0xC19F79: cpu.execute_instruction<0x22>(0xC2032B, 4); return true;
    // src/unknown/C1/C19F29.asm:36 LDA #0
    case 0xC19F7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19F29.asm:36 LDA #0
    // Overlapping static entry reached from 0xC19F7D.
    case 0xC19F7F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19F29.asm:37 STA @VIRTUAL02
    case 0xC19F80: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19F29.asm:38 STA @LOCAL04
    case 0xC19F82: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C19F29.asm:39 JMP @UNKNOWN14
    case 0xC19F84: cpu.execute_instruction<0x4C>(0x00A1BA, 3); return true;
    // src/unknown/C1/C19F29.asm:41 LDA #1
    case 0xC19F87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C19F29.asm:41 LDA #1
    // Overlapping static entry reached from 0xC19F87.
    case 0xC19F89: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C19F29.asm:42 STA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC19F8A: cpu.execute_instruction<0x8D>(0x005E71, 3); return true;
    // src/unknown/C1/C19F29.asm:43 LDA @VIRTUAL02
    case 0xC19F8D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C19F29.asm:44 BEQ @UNKNOWN4
    case 0xC19F8F: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C1/C19F29.asm:45 CMP #1
    case 0xC19F91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C19F29.asm:45 CMP #1
    // Overlapping static entry reached from 0xC19F91.
    case 0xC19F93: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19F29.asm:46 BEQ @UNKNOWN5
    case 0xC19F94: cpu.execute_instruction<0xF0>(0x00005C, 2); return true;
    // src/unknown/C1/C19F29.asm:47 CMP #2
    case 0xC19F96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C19F29.asm:47 CMP #2
    // Overlapping static entry reached from 0xC19F96.
    case 0xC19F98: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C19F29.asm:48 BEQL @UNKNOWN6
    case 0xC19F99: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C19F29.asm:48 BEQL @UNKNOWN6
    case 0xC19F9B: cpu.execute_instruction<0x4C>(0x00A03B, 3); return true;
    // src/unknown/C1/C19F29.asm:49 CMP #3
    case 0xC19F9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C19F29.asm:49 CMP #3
    // Overlapping static entry reached from 0xC19F9E.
    case 0xC19FA0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C19F29.asm:50 BEQL @UNKNOWN7
    case 0xC19FA1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C19F29.asm:50 BEQL @UNKNOWN7
    case 0xC19FA3: cpu.execute_instruction<0x4C>(0x00A083, 3); return true;
    // src/unknown/C1/C19F29.asm:51 JMP @UNKNOWN8
    case 0xC19FA6: cpu.execute_instruction<0x4C>(0x00A0C9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:53 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC19FA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x005C2C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:53 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    // Overlapping static entry reached from 0xC19FA9.
    case 0xC19FAB: cpu.execute_instruction<0x5C>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19F29.asm:53 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC19FAC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:53 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC19FAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:53 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    // Overlapping static entry reached from 0xC19FAE.
    case 0xC19FB0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19F29.asm:53 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC19FB1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19F29.asm:54 LDA @VIRTUAL02
    case 0xC19FB3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:561 STA scratch
    // Macro caller: src/unknown/C1/C19F29.asm:55 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC19FB5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:562 ASL
    // Macro caller: src/unknown/C1/C19F29.asm:55 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC19FB7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:563 ASL
    // Macro caller: src/unknown/C1/C19F29.asm:55 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC19FB8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:564 ADC scratch
    // Macro caller: src/unknown/C1/C19F29.asm:55 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC19FB9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:565 ASL
    // Macro caller: src/unknown/C1/C19F29.asm:55 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC19FBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:566 ADC scratch
    // Macro caller: src/unknown/C1/C19F29.asm:55 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC19FBC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19F29.asm:56 CLC
    case 0xC19FBE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:57 ADC @VIRTUAL06
    case 0xC19FBF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19F29.asm:58 STA @VIRTUAL06
    case 0xC19FC1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19F29.asm:59 STA @LOCAL00
    case 0xC19FC3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19F29.asm:60 LDA @VIRTUAL06+2
    case 0xC19FC5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19F29.asm:61 STA @LOCAL00+2
    case 0xC19FC7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:62 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19FC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:62 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19FC9.
    case 0xC19FCB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C19F29.asm:62 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19FCC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:62 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19FCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:62 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19FCE.
    case 0xC19FD0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C19F29.asm:62 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19FD1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C19F29.asm:63 LDX @VIRTUAL02
    case 0xC19FD3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C19F29.asm:64 LDA #0
    case 0xC19FD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19F29.asm:64 LDA #0
    // Overlapping static entry reached from 0xC19FD5.
    case 0xC19FD7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19F29.asm:65 JSR UNKNOWN_C114B1
    case 0xC19FD8: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // src/unknown/C1/C19F29.asm:66 LDA @LOCAL05
    case 0xC19FDB: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29.asm:67 LDY #.SIZEOF(char_struct)
    case 0xC19FDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C19F29.asm:67 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19FDD.
    case 0xC19FDF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29.asm:68 JSL MULT168
    case 0xC19FE0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19F29.asm:69 TAX
    case 0xC19FE4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:70 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC19FE5: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/unknown/C1/C19F29.asm:71 AND #$00FF
    case 0xC19FE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19F29.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC19FE8.
    case 0xC19FEA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19F29.asm:72 STA @VIRTUAL04
    case 0xC19FEB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C19F29.asm:73 STA @LOCAL03
    case 0xC19FED: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C19F29.asm:74 JMP @UNKNOWN8
    case 0xC19FEF: cpu.execute_instruction<0x4C>(0x00A0C9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:76 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC19FF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x005C2C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:76 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    // Overlapping static entry reached from 0xC19FF2.
    case 0xC19FF4: cpu.execute_instruction<0x5C>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19F29.asm:76 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC19FF5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:76 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC19FF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:76 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    // Overlapping static entry reached from 0xC19FF7.
    case 0xC19FF9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19F29.asm:76 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC19FFA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19F29.asm:77 LDA @VIRTUAL02
    case 0xC19FFC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:561 STA scratch
    // Macro caller: src/unknown/C1/C19F29.asm:78 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC19FFE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:562 ASL
    // Macro caller: src/unknown/C1/C19F29.asm:78 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A000: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:563 ASL
    // Macro caller: src/unknown/C1/C19F29.asm:78 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A001: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:564 ADC scratch
    // Macro caller: src/unknown/C1/C19F29.asm:78 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A002: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:565 ASL
    // Macro caller: src/unknown/C1/C19F29.asm:78 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A004: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:566 ADC scratch
    // Macro caller: src/unknown/C1/C19F29.asm:78 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A005: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19F29.asm:79 CLC
    case 0xC1A007: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:80 ADC @VIRTUAL06
    case 0xC1A008: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19F29.asm:81 STA @VIRTUAL06
    case 0xC1A00A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19F29.asm:82 STA @LOCAL00
    case 0xC1A00C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19F29.asm:83 LDA @VIRTUAL06+2
    case 0xC1A00E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19F29.asm:84 STA @LOCAL00+2
    case 0xC1A010: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:85 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A012: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:85 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A012.
    case 0xC1A014: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C19F29.asm:85 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A015: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:85 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A017: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:85 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A017.
    case 0xC1A019: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C19F29.asm:85 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A01A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C19F29.asm:86 LDX @VIRTUAL02
    case 0xC1A01C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C19F29.asm:87 LDA #0
    case 0xC1A01E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19F29.asm:87 LDA #0
    // Overlapping static entry reached from 0xC1A01E.
    case 0xC1A020: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19F29.asm:88 JSR UNKNOWN_C114B1
    case 0xC1A021: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // src/unknown/C1/C19F29.asm:89 LDA @LOCAL05
    case 0xC1A024: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29.asm:90 LDY #.SIZEOF(char_struct)
    case 0xC1A026: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C19F29.asm:90 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A026.
    case 0xC1A028: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29.asm:91 JSL MULT168
    case 0xC1A029: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19F29.asm:92 TAX
    case 0xC1A02D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:93 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC1A02E: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/unknown/C1/C19F29.asm:94 AND #$00FF
    case 0xC1A031: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19F29.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC1A031.
    case 0xC1A033: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19F29.asm:95 STA @VIRTUAL04
    case 0xC1A034: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C19F29.asm:96 STA @LOCAL03
    case 0xC1A036: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C19F29.asm:97 JMP @UNKNOWN8
    case 0xC1A038: cpu.execute_instruction<0x4C>(0x00A0C9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:99 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC1A03B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x005C2C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:99 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A03B.
    case 0xC1A03D: cpu.execute_instruction<0x5C>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19F29.asm:99 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC1A03E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:99 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC1A040: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:99 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A040.
    case 0xC1A042: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19F29.asm:99 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC1A043: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19F29.asm:100 LDA @VIRTUAL02
    case 0xC1A045: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:561 STA scratch
    // Macro caller: src/unknown/C1/C19F29.asm:101 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A047: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:562 ASL
    // Macro caller: src/unknown/C1/C19F29.asm:101 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A049: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:563 ASL
    // Macro caller: src/unknown/C1/C19F29.asm:101 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A04A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:564 ADC scratch
    // Macro caller: src/unknown/C1/C19F29.asm:101 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A04B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:565 ASL
    // Macro caller: src/unknown/C1/C19F29.asm:101 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A04D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:566 ADC scratch
    // Macro caller: src/unknown/C1/C19F29.asm:101 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A04E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19F29.asm:102 CLC
    case 0xC1A050: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:103 ADC @VIRTUAL06
    case 0xC1A051: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19F29.asm:104 STA @VIRTUAL06
    case 0xC1A053: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19F29.asm:105 STA @LOCAL00
    case 0xC1A055: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19F29.asm:106 LDA @VIRTUAL06+2
    case 0xC1A057: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19F29.asm:107 STA @LOCAL00+2
    case 0xC1A059: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:108 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A05B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:108 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A05B.
    case 0xC1A05D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C19F29.asm:108 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A05E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:108 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A060: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:108 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A060.
    case 0xC1A062: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C19F29.asm:108 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A063: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C19F29.asm:109 LDX @VIRTUAL02
    case 0xC1A065: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C19F29.asm:110 LDA #0
    case 0xC1A067: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19F29.asm:110 LDA #0
    // Overlapping static entry reached from 0xC1A067.
    case 0xC1A069: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19F29.asm:111 JSR UNKNOWN_C114B1
    case 0xC1A06A: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // src/unknown/C1/C19F29.asm:112 LDA @LOCAL05
    case 0xC1A06D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29.asm:113 LDY #.SIZEOF(char_struct)
    case 0xC1A06F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C19F29.asm:113 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A06F.
    case 0xC1A071: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29.asm:114 JSL MULT168
    case 0xC1A072: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19F29.asm:115 TAX
    case 0xC1A076: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:116 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC1A077: cpu.execute_instruction<0xBD>(0x009A01, 3); return true;
    // src/unknown/C1/C19F29.asm:117 AND #$00FF
    case 0xC1A07A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19F29.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC1A07A.
    case 0xC1A07C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19F29.asm:118 STA @VIRTUAL04
    case 0xC1A07D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C19F29.asm:119 STA @LOCAL03
    case 0xC1A07F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C19F29.asm:120 BRA @UNKNOWN8
    case 0xC1A081: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:122 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC1A083: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x005C2C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:122 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A083.
    case 0xC1A085: cpu.execute_instruction<0x5C>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19F29.asm:122 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC1A086: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:122 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC1A088: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:122 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A088.
    case 0xC1A08A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19F29.asm:122 LOADPTR STATUS_EQUIP_WINDOW_TEXT_10, @VIRTUAL06
    case 0xC1A08B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19F29.asm:123 LDA @VIRTUAL02
    case 0xC1A08D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:561 STA scratch
    // Macro caller: src/unknown/C1/C19F29.asm:124 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A08F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:562 ASL
    // Macro caller: src/unknown/C1/C19F29.asm:124 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A091: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:563 ASL
    // Macro caller: src/unknown/C1/C19F29.asm:124 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A092: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:564 ADC scratch
    // Macro caller: src/unknown/C1/C19F29.asm:124 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A093: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:565 ASL
    // Macro caller: src/unknown/C1/C19F29.asm:124 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A095: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:566 ADC scratch
    // Macro caller: src/unknown/C1/C19F29.asm:124 OPTIMIZED_MULT @VIRTUAL04, 11
    case 0xC1A096: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19F29.asm:125 CLC
    case 0xC1A098: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:126 ADC @VIRTUAL06
    case 0xC1A099: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19F29.asm:127 STA @VIRTUAL06
    case 0xC1A09B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19F29.asm:128 STA @LOCAL00
    case 0xC1A09D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19F29.asm:129 LDA @VIRTUAL06+2
    case 0xC1A09F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19F29.asm:130 STA @LOCAL00+2
    case 0xC1A0A1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:131 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A0A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:131 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A0A3.
    case 0xC1A0A5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C19F29.asm:131 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A0A6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:131 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A0A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19F29.asm:131 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A0A8.
    case 0xC1A0AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C19F29.asm:131 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A0AB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C19F29.asm:132 LDX @VIRTUAL02
    case 0xC1A0AD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C19F29.asm:133 LDA #0
    case 0xC1A0AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19F29.asm:133 LDA #0
    // Overlapping static entry reached from 0xC1A0AF.
    case 0xC1A0B1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19F29.asm:134 JSR UNKNOWN_C114B1
    case 0xC1A0B2: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // src/unknown/C1/C19F29.asm:135 LDA @LOCAL05
    case 0xC1A0B5: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29.asm:136 LDY #.SIZEOF(char_struct)
    case 0xC1A0B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C19F29.asm:136 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A0B7.
    case 0xC1A0B9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29.asm:137 JSL MULT168
    case 0xC1A0BA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19F29.asm:137 JSL MULT168
    // Overlapping static entry reached from 0xC1A135.
    case 0xC1A0BC: cpu.execute_instruction<0x8F>(0xBDAAC0, 4); return true;
    // src/unknown/C1/C19F29.asm:138 TAX
    case 0xC1A0BE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:139 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC1A0BF: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/unknown/C1/C19F29.asm:139 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    // Overlapping static entry reached from 0xC1A0BC.
    case 0xC1A0C0: cpu.execute_instruction<0x02>(0x00009A, 2); return true;
    // src/unknown/C1/C19F29.asm:140 AND #$00FF
    case 0xC1A0C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19F29.asm:140 AND #$00FF
    // Overlapping static entry reached from 0xC1A0C2.
    case 0xC1A0C4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19F29.asm:141 STA @VIRTUAL04
    case 0xC1A0C5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C19F29.asm:142 STA @LOCAL03
    case 0xC1A0C7: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C19F29.asm:144 LDA @LOCAL03
    case 0xC1A0C9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C19F29.asm:145 STA @VIRTUAL04
    case 0xC1A0CB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C19F29.asm:146 BEQL @UNKNOWN12
    case 0xC1A0CD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C19F29.asm:146 BEQL @UNKNOWN12
    case 0xC1A0CF: cpu.execute_instruction<0x4C>(0x00A163, 3); return true;
    // src/unknown/C1/C19F29.asm:147 LDA @VIRTUAL04
    case 0xC1A0D2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C19F29.asm:148 DEC
    case 0xC1A0D4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:149 STA @VIRTUAL02
    case 0xC1A0D5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19F29.asm:150 LDA @LOCAL05
    case 0xC1A0D7: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29.asm:151 LDY #.SIZEOF(char_struct)
    case 0xC1A0D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C19F29.asm:151 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A0D9.
    case 0xC1A0DB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29.asm:152 JSL MULT168
    case 0xC1A0DC: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19F29.asm:153 CLC
    case 0xC1A0E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:154 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1A0E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C1/C19F29.asm:154 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1A0E1.
    case 0xC1A0E3: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C1/C19F29.asm:155 CLC
    case 0xC1A0E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:156 ADC @VIRTUAL02
    case 0xC1A0E5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C19F29.asm:156 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1A0E3.
    case 0xC1A0E6: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C1/C19F29.asm:157 TAX
    case 0xC1A0E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:158 LDA __BSS_START__,X
    case 0xC1A0E8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C19F29.asm:159 AND #$00FF
    case 0xC1A0EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19F29.asm:159 AND #$00FF
    // Overlapping static entry reached from 0xC1A0EB.
    case 0xC1A0ED: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C19F29.asm:160 TAY
    case 0xC1A0EE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:161 STY @LOCAL02
    case 0xC1A0EF: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C19F29.asm:162 LDX @VIRTUAL04
    case 0xC1A0F1: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C19F29.asm:163 LDA @LOCAL05
    case 0xC1A0F3: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C19F29.asm:164 INC
    case 0xC1A0F5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:165 JSL CHECK_ITEM_EQUIPPED
    case 0xC1A0F6: cpu.execute_instruction<0x22>(0xC3E9A0, 4); return true;
    // src/unknown/C1/C19F29.asm:166 CMP #0
    case 0xC1A0FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C19F29.asm:166 CMP #0
    // Overlapping static entry reached from 0xC1A0FA.
    case 0xC1A0FC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19F29.asm:167 BEQ @UNKNOWN10
    case 0xC1A0FD: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/C1/C19F29.asm:168 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A0FF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19F29.asm:169 LDA #34
    case 0xC1A101: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x008D22, 3); return true;
    // src/unknown/C1/C19F29.asm:170 STA TEMPORARY_TEXT_BUFFER
    case 0xC1A103: cpu.execute_instruction<0x8D>(0x009C9F, 3); return true;
    // src/unknown/C1/C19F29.asm:170 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1A101.
    case 0xC1A104: cpu.execute_instruction<0x9F>(0x20C29C, 4); return true;
    // src/unknown/C1/C19F29.asm:171 REP #PROC_FLAGS::ACCUM8
    case 0xC1A106: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:172 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A108: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:172 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A108.
    case 0xC1A10A: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19F29.asm:172 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A10B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19F29.asm:172 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A10A.
    case 0xC1A10C: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:172 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A10D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:172 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A10C.
    case 0xC1A10E: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:172 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A10D.
    case 0xC1A10F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19F29.asm:172 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A110: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19F29.asm:173 LDY @LOCAL02
    case 0xC1A112: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C19F29.asm:174 TYA
    case 0xC1A114: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:175 LDY #.SIZEOF(item)
    case 0xC1A115: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/unknown/C1/C19F29.asm:175 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC1A115.
    case 0xC1A117: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29.asm:176 JSL MULT168
    case 0xC1A118: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19F29.asm:177 CLC
    case 0xC1A11C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:178 ADC @VIRTUAL06
    case 0xC1A11D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19F29.asm:179 STA @VIRTUAL06
    case 0xC1A11F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19F29.asm:180 STA @LOCAL00
    case 0xC1A121: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19F29.asm:181 LDA @VIRTUAL06+2
    case 0xC1A123: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19F29.asm:182 STA @LOCAL00+2
    case 0xC1A125: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19F29.asm:183 LDX #.SIZEOF(item::name)
    case 0xC1A127: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/unknown/C1/C19F29.asm:183 LDX #.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC1A127.
    case 0xC1A129: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19F29.asm:184 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)+1
    case 0xC1A12A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x009CA0, 3); return true;
    // src/unknown/C1/C19F29.asm:184 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)+1
    // Overlapping static entry reached from 0xC1A12A.
    case 0xC1A12C: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/unknown/C1/C19F29.asm:185 JSL MEMCPY16
    case 0xC1A12D: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C1/C19F29.asm:185 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1A12C.
    case 0xC1A12F: cpu.execute_instruction<0x8E>(0x0080C0, 3); return true;
    // src/unknown/C1/C19F29.asm:186 BRA @UNKNOWN11
    case 0xC1A131: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C1/C19F29.asm:186 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xC1A12F.
    case 0xC1A132: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A9, 2); else cpu.execute_instruction<0x29>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:188 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A133: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:188 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A132.
    case 0xC1A134: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:188 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A133.
    case 0xC1A135: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19F29.asm:188 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A136: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19F29.asm:188 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A135.
    case 0xC1A137: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:188 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A138: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:188 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A137.
    case 0xC1A139: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:188 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A138.
    case 0xC1A13A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19F29.asm:188 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A13B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19F29.asm:189 LDY @LOCAL02
    case 0xC1A13D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C19F29.asm:190 TYA
    case 0xC1A13F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:191 LDY #.SIZEOF(item)
    case 0xC1A140: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/unknown/C1/C19F29.asm:191 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC1A140.
    case 0xC1A142: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29.asm:192 JSL MULT168
    case 0xC1A143: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19F29.asm:193 CLC
    case 0xC1A147: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:194 ADC @VIRTUAL06
    case 0xC1A148: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19F29.asm:195 STA @VIRTUAL06
    case 0xC1A14A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19F29.asm:196 STA @LOCAL00
    case 0xC1A14C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19F29.asm:197 LDA @VIRTUAL06+2
    case 0xC1A14E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19F29.asm:198 STA @LOCAL00+2
    case 0xC1A150: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19F29.asm:199 LDX #.SIZEOF(item::name)
    case 0xC1A152: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/unknown/C1/C19F29.asm:199 LDX #.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC1A152.
    case 0xC1A154: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19F29.asm:200 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1A155: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // src/unknown/C1/C19F29.asm:200 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1A155.
    case 0xC1A157: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/unknown/C1/C19F29.asm:201 JSL MEMCPY16
    case 0xC1A158: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C1/C19F29.asm:201 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1A157.
    case 0xC1A15A: cpu.execute_instruction<0x8E>(0x00E2C0, 3); return true;
    // src/unknown/C1/C19F29.asm:203 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A15C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19F29.asm:203 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1A15A.
    case 0xC1A15D: cpu.execute_instruction<0x20>(0x00B89C, 3); return true;
    // src/unknown/C1/C19F29.asm:204 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    case 0xC1A15E: cpu.execute_instruction<0x9C>(0x009CB8, 3); return true;
    // src/unknown/C1/C19F29.asm:204 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC1A15D.
    case 0xC1A160: cpu.execute_instruction<0x9C>(0x001980, 3); return true;
    // src/unknown/C1/C19F29.asm:205 BRA @UNKNOWN13
    case 0xC1A161: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:208 LOADPTR STATUS_EQUIP_WINDOW_TEXT_12, @LOCAL00
    case 0xC1A163: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x005C78, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:208 LOADPTR STATUS_EQUIP_WINDOW_TEXT_12, @LOCAL00
    // Overlapping static entry reached from 0xC1A163.
    case 0xC1A165: cpu.execute_instruction<0x5C>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19F29.asm:208 LOADPTR STATUS_EQUIP_WINDOW_TEXT_12, @LOCAL00
    case 0xC1A166: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:208 LOADPTR STATUS_EQUIP_WINDOW_TEXT_12, @LOCAL00
    case 0xC1A168: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19F29.asm:208 LOADPTR STATUS_EQUIP_WINDOW_TEXT_12, @LOCAL00
    // Overlapping static entry reached from 0xC1A168.
    case 0xC1A16A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19F29.asm:208 LOADPTR STATUS_EQUIP_WINDOW_TEXT_12, @LOCAL00
    case 0xC1A16B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19F29.asm:209 LDX #10
    case 0xC1A16D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C1/C19F29.asm:209 LDX #10
    // Overlapping static entry reached from 0xC1A16D.
    case 0xC1A16F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19F29.asm:210 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1A170: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // src/unknown/C1/C19F29.asm:210 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1A170.
    case 0xC1A172: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/unknown/C1/C19F29.asm:211 JSL MEMCPY16
    case 0xC1A173: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C1/C19F29.asm:211 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1A172.
    case 0xC1A175: cpu.execute_instruction<0x8E>(0x00E2C0, 3); return true;
    // src/unknown/C1/C19F29.asm:212 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A177: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19F29.asm:212 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1A175.
    case 0xC1A178: cpu.execute_instruction<0x20>(0x00A99C, 3); return true;
    // src/unknown/C1/C19F29.asm:213 STZ TEMPORARY_TEXT_BUFFER+10
    case 0xC1A179: cpu.execute_instruction<0x9C>(0x009CA9, 3); return true;
    // src/unknown/C1/C19F29.asm:213 STZ TEMPORARY_TEXT_BUFFER+10
    // Overlapping static entry reached from 0xC1A178.
    case 0xC1A17B: cpu.execute_instruction<0x9C>(0x0020C2, 3); return true;
    // src/unknown/C1/C19F29.asm:215 REP #PROC_FLAGS::ACCUM8
    case 0xC1A17C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C19F29.asm:216 LDA @LOCAL04
    case 0xC1A17E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C19F29.asm:217 STA @VIRTUAL02
    case 0xC1A180: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19F29.asm:218 LDX @VIRTUAL02
    case 0xC1A182: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C19F29.asm:219 LDA #6
    case 0xC1A184: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C19F29.asm:219 LDA #6
    // Overlapping static entry reached from 0xC1A184.
    case 0xC1A186: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19F29.asm:220 JSL UNKNOWN_C438A5
    case 0xC1A187: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C19F29.asm:221 LDA #CHAR::COLON
    case 0xC1A18B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006A, 2); else cpu.execute_instruction<0xA9>(0x00006A, 3); return true;
    // src/unknown/C1/C19F29.asm:221 LDA #CHAR::COLON
    // Overlapping static entry reached from 0xC1A18B.
    case 0xC1A18D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19F29.asm:222 JSR PRINT_LETTER
    case 0xC1A18E: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // src/unknown/C1/C19F29.asm:223 LDA #CHAR::SPACE
    case 0xC1A191: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x000050, 3); return true;
    // src/unknown/C1/C19F29.asm:223 LDA #CHAR::SPACE
    // Overlapping static entry reached from 0xC1A191.
    case 0xC1A193: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19F29.asm:224 JSR PRINT_LETTER
    case 0xC1A194: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19F29.asm:225 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A197: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19F29.asm:225 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A197.
    case 0xC1A199: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19F29.asm:225 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A19A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19F29.asm:225 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A19C: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19F29.asm:225 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A19D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19F29.asm:225 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A19F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19F29.asm:225 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A1A0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19F29.asm:225 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A1A2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19F29.asm:226 REP #PROC_FLAGS::ACCUM8
    case 0xC1A1A4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19F29.asm:227 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A1A6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19F29.asm:227 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A1A8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19F29.asm:227 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A1AA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19F29.asm:227 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A1AC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19F29.asm:228 LDA #49
    case 0xC1A1AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // src/unknown/C1/C19F29.asm:228 LDA #49
    // Overlapping static entry reached from 0xC1A1AE.
    case 0xC1A1B0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19F29.asm:229 JSR PRINT_STRING
    case 0xC1A1B1: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C19F29.asm:230 INC @VIRTUAL02
    case 0xC1A1B4: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C19F29.asm:231 LDA @VIRTUAL02
    case 0xC1A1B6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C19F29.asm:232 STA @LOCAL04
    case 0xC1A1B8: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C19F29.asm:234 LDA #PLAYER_CHAR_COUNT
    case 0xC1A1BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C19F29.asm:234 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC1A1BA.
    case 0xC1A1BC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C19F29.asm:235 CLC
    case 0xC1A1BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19F29.asm:236 SBC @VIRTUAL02
    case 0xC1A1BE: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C1/C19F29.asm:237 JUMPGTS @UNKNOWN1
    case 0xC1A1C0: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C1/C19F29.asm:237 JUMPGTS @UNKNOWN1
    case 0xC1A1C2: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C1/C19F29.asm:237 JUMPGTS @UNKNOWN1
    case 0xC1A1C4: cpu.execute_instruction<0x4C>(0x009F87, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C1/C19F29.asm:237 JUMPGTS @UNKNOWN1
    case 0xC1A1C7: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C1/C19F29.asm:237 JUMPGTS @UNKNOWN1
    case 0xC1A1C9: cpu.execute_instruction<0x4C>(0x009F87, 3); return true;
    // src/unknown/C1/C19F29.asm:238 JSR PRINT_MENU_ITEMS
    case 0xC1A1CC: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // src/unknown/C1/C19F29.asm:239 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1A1CF: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // src/unknown/C1/C19F29.asm:240 JSL CLEAR_INSTANT_PRINTING
    case 0xC1A1D2: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19F29.asm:241 END_C_FUNCTION
    case 0xC1A1D6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19F29.asm:241 END_C_FUNCTION
    case 0xC1A1D7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1A1D8.asm (unresolved).
bool execute_unresolved_c1_c1a1d8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1A1D8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1A1D8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1A1D8.asm:11 END_STACK_VARS
    case 0xC1A1DA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1A1D8.asm:11 END_STACK_VARS
    case 0xC1A1DB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1A1D8.asm:11 END_STACK_VARS
    case 0xC1A1DC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1A1D8.asm:11 END_STACK_VARS
    case 0xC1A1DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1A1D8.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1A1DD.
    case 0xC1A1DF: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1A1D8.asm:11 END_STACK_VARS
    case 0xC1A1E0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1A1D8.asm:11 END_STACK_VARS
    case 0xC1A1E1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:12 TAX
    case 0xC1A1E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:13 DEC
    case 0xC1A1E3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:14 STA @VIRTUAL02
    case 0xC1A1E4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:15 STA @LOCAL04
    case 0xC1A1E6: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1A1D8.asm:16 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2D
    case 0xC1A1E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002D, 2); else cpu.execute_instruction<0xA9>(0x00002D, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1A1D8.asm:16 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2D
    // Overlapping static entry reached from 0xC1A1E8.
    case 0xC1A1EA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1A1D8.asm:16 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2D
    case 0xC1A1EB: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1A1D8.asm:17 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC1A1EE: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // src/unknown/C1/C1A1D8.asm:18 LDA #2
    case 0xC1A1F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1A1D8.asm:18 LDA #2
    // Overlapping static entry reached from 0xC1A1F2.
    case 0xC1A1F4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:19 JSR UNKNOWN_C10EB4
    case 0xC1A1F5: cpu.execute_instruction<0x20>(0x000EB4, 3); return true;
    // src/unknown/C1/C1A1D8.asm:20 LDX #0
    case 0xC1A1F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:20 LDX #0
    // Overlapping static entry reached from 0xC1A1F8.
    case 0xC1A1FA: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C1/C1A1D8.asm:21 TXA
    case 0xC1A1FB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:22 JSL UNKNOWN_C438A5
    case 0xC1A1FC: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8.asm:23 LOADPTR STATUS_EQUIP_WINDOW_TEXT_8, @LOCAL00
    case 0xC1A200: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x005C1C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8.asm:23 LOADPTR STATUS_EQUIP_WINDOW_TEXT_8, @LOCAL00
    // Overlapping static entry reached from 0xC1A200.
    case 0xC1A202: cpu.execute_instruction<0x5C>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A1D8.asm:23 LOADPTR STATUS_EQUIP_WINDOW_TEXT_8, @LOCAL00
    case 0xC1A203: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8.asm:23 LOADPTR STATUS_EQUIP_WINDOW_TEXT_8, @LOCAL00
    case 0xC1A205: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8.asm:23 LOADPTR STATUS_EQUIP_WINDOW_TEXT_8, @LOCAL00
    // Overlapping static entry reached from 0xC1A205.
    case 0xC1A207: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:23 LOADPTR STATUS_EQUIP_WINDOW_TEXT_8, @LOCAL00
    case 0xC1A208: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A1D8.asm:24 LDA #8
    case 0xC1A20A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C1A1D8.asm:24 LDA #8
    // Overlapping static entry reached from 0xC1A20A.
    case 0xC1A20C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:25 JSR PRINT_STRING
    case 0xC1A20D: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C1A1D8.asm:26 LDA @VIRTUAL02
    case 0xC1A210: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:27 LDY #.SIZEOF(char_struct)
    case 0xC1A212: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:27 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A212.
    case 0xC1A214: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:28 JSL MULT168
    case 0xC1A215: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:29 TAX
    case 0xC1A219: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:30 LDA PARTY_CHARACTERS+char_struct::base_offense,X
    case 0xC1A21A: cpu.execute_instruction<0xBD>(0x0099EA, 3); return true;
    // src/unknown/C1/C1A1D8.asm:31 AND #$00FF
    case 0xC1A21D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC1A21D.
    case 0xC1A21F: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1A1D8.asm:32 TAY
    case 0xC1A220: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:33 STY @LOCAL03
    case 0xC1A221: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:34 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC1A223: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:35 AND #$00FF
    case 0xC1A226: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC1A226.
    case 0xC1A228: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:36 BEQ @UNKNOWN1
    case 0xC1A229: cpu.execute_instruction<0xF0>(0x000066, 2); return true;
    // src/unknown/C1/C1A1D8.asm:37 LDX #0
    case 0xC1A22B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:37 LDX #0
    // Overlapping static entry reached from 0xC1A22B.
    case 0xC1A22D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:38 STX @LOCAL02
    case 0xC1A22E: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:39 LDA @VIRTUAL02
    case 0xC1A230: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:40 CMP #3
    case 0xC1A232: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8.asm:40 CMP #3
    // Overlapping static entry reached from 0xC1A232.
    case 0xC1A234: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:41 BNE @UNKNOWN0
    case 0xC1A235: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:42 LDX #1
    case 0xC1A237: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:42 LDX #1
    // Overlapping static entry reached from 0xC1A237.
    case 0xC1A239: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:43 STX @LOCAL02
    case 0xC1A23A: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:45 LDA @VIRTUAL02
    case 0xC1A23C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:46 LDY #.SIZEOF(char_struct)
    case 0xC1A23E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:46 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A23E.
    case 0xC1A240: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:47 JSL MULT168
    case 0xC1A241: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:48 STA @LOCAL01
    case 0xC1A245: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8.asm:49 TAX
    case 0xC1A247: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:50 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC1A248: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:51 AND #$00FF
    case 0xC1A24B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC1A24B.
    case 0xC1A24D: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8.asm:52 DEC
    case 0xC1A24E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:53 STA @VIRTUAL02
    case 0xC1A24F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:54 LDA @LOCAL01
    case 0xC1A251: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8.asm:55 CLC
    case 0xC1A253: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:56 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC1A254: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C1/C1A1D8.asm:56 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC1A254.
    case 0xC1A256: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C1/C1A1D8.asm:57 CLC
    case 0xC1A257: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:58 ADC @VIRTUAL02
    case 0xC1A258: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:58 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1A256.
    case 0xC1A259: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:59 TAX
    case 0xC1A25A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:60 LDA __BSS_START__,X
    case 0xC1A25B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:61 AND #$00FF
    case 0xC1A25E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC1A25E.
    case 0xC1A260: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:62 LDY #.SIZEOF(item)
    case 0xC1A261: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/unknown/C1/C1A1D8.asm:62 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC1A261.
    case 0xC1A263: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:63 JSL MULT168
    case 0xC1A264: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:64 LDX @LOCAL02
    case 0xC1A268: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:65 STX @VIRTUAL02
    case 0xC1A26A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:66 CLC
    case 0xC1A26C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:67 ADC @VIRTUAL02
    case 0xC1A26D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:68 CLC
    case 0xC1A26F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:69 ADC #item::params + item_parameters::strength
    case 0xC1A270: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:69 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A270.
    case 0xC1A272: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:70 TAX
    case 0xC1A273: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A274: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:72 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A276: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/unknown/C1/C1A1D8.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC1A27A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:74 SEC
    case 0xC1A27C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:75 AND #$00FF
    case 0xC1A27D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC1A27D.
    case 0xC1A27F: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8.asm:76 SBC #$0080
    case 0xC1A280: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8.asm:76 SBC #$0080
    // Overlapping static entry reached from 0xC1A280.
    case 0xC1A282: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8.asm:77 EOR #$FF80
    case 0xC1A283: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8.asm:77 EOR #$FF80
    // Overlapping static entry reached from 0xC1A283.
    case 0xC1A285: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/unknown/C1/C1A1D8.asm:78 STA @VIRTUAL04
    case 0xC1A286: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:79 LDY @LOCAL03
    case 0xC1A288: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:79 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1A285.
    case 0xC1A289: cpu.execute_instruction<0x16>(0x000098, 2); return true;
    // src/unknown/C1/C1A1D8.asm:80 TYA
    case 0xC1A28A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:81 CLC
    case 0xC1A28B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:82 ADC @VIRTUAL04
    case 0xC1A28C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:83 TAY
    case 0xC1A28E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:84 STY @LOCAL03
    case 0xC1A28F: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:86 LDA #1
    case 0xC1A291: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:86 LDA #1
    // Overlapping static entry reached from 0xC1A291.
    case 0xC1A293: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1A1D8.asm:87 STA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1A294: cpu.execute_instruction<0x8D>(0x005E71, 3); return true;
    // src/unknown/C1/C1A1D8.asm:88 LDX #0
    case 0xC1A297: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:88 LDX #0
    // Overlapping static entry reached from 0xC1A297.
    case 0xC1A299: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A1D8.asm:89 LDA #55
    case 0xC1A29A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000037, 2); else cpu.execute_instruction<0xA9>(0x000037, 3); return true;
    // src/unknown/C1/C1A1D8.asm:89 LDA #55
    // Overlapping static entry reached from 0xC1A29A.
    case 0xC1A29C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:90 JSL UNKNOWN_C43D75
    case 0xC1A29D: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1A1D8.asm:91 LDY @LOCAL03
    case 0xC1A2A1: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:92 STY @VIRTUAL04
    case 0xC1A2A3: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:93 LDA #0
    case 0xC1A2A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:93 LDA #0
    // Overlapping static entry reached from 0xC1A2A5.
    case 0xC1A2A7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:94 CLC
    case 0xC1A2A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:95 SBC @VIRTUAL04
    case 0xC1A2A9: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8.asm:96 BRANCHLTEQS @UNKNOWN4
    case 0xC1A2AB: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:96 BRANCHLTEQS @UNKNOWN4
    case 0xC1A2AD: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8.asm:96 BRANCHLTEQS @UNKNOWN4
    case 0xC1A2AF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:96 BRANCHLTEQS @UNKNOWN4
    case 0xC1A2B1: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:97 LDA #0
    case 0xC1A2B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:97 LDA #0
    // Overlapping static entry reached from 0xC1A2B3.
    case 0xC1A2B5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8.asm:98 BRA @UNKNOWN9
    case 0xC1A2B6: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C1/C1A1D8.asm:100 TYA
    case 0xC1A2B8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:101 CLC
    case 0xC1A2B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:102 SBC #$00FF
    case 0xC1A2BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000FF, 2); else cpu.execute_instruction<0xE9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:102 SBC #$00FF
    // Overlapping static entry reached from 0xC1A2BA.
    case 0xC1A2BC: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8.asm:103 BRANCHLTEQS @UNKNOWN7
    case 0xC1A2BD: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:103 BRANCHLTEQS @UNKNOWN7
    case 0xC1A2BF: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8.asm:103 BRANCHLTEQS @UNKNOWN7
    case 0xC1A2C1: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:103 BRANCHLTEQS @UNKNOWN7
    case 0xC1A2C3: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:104 LDX #$00FF
    case 0xC1A2C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:104 LDX #$00FF
    // Overlapping static entry reached from 0xC1A2C5.
    case 0xC1A2C7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8.asm:105 BRA @UNKNOWN8
    case 0xC1A2C8: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C1/C1A1D8.asm:107 TYA
    case 0xC1A2CA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC1A2CB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:109 AND #$00FF
    case 0xC1A2CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:109 AND #$00FF
    // Overlapping static entry reached from 0xC1A2CD.
    case 0xC1A2CF: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:110 TAX
    case 0xC1A2D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:112 TXA
    case 0xC1A2D1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:114 STORE_INT1632S @VIRTUAL06
    case 0xC1A2D2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:114 STORE_INT1632S @VIRTUAL06
    case 0xC1A2D4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/unknown/C1/C1A1D8.asm:114 STORE_INT1632S @VIRTUAL06
    case 0xC1A2D6: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:114 STORE_INT1632S @VIRTUAL06
    case 0xC1A2D8: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1A1D8.asm:115 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A2DA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:115 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A2DC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:115 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A2DE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:115 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A2E0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A1D8.asm:116 JSR PRINT_NUMBER
    case 0xC1A2E2: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1A1D8.asm:117 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1A2E5: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // src/unknown/C1/C1A1D8.asm:118 LDX #1
    case 0xC1A2E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:118 LDX #1
    // Overlapping static entry reached from 0xC1A2E8.
    case 0xC1A2EA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A1D8.asm:119 LDA #0
    case 0xC1A2EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:119 LDA #0
    // Overlapping static entry reached from 0xC1A2EB.
    case 0xC1A2ED: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:120 JSL UNKNOWN_C438A5
    case 0xC1A2EE: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8.asm:121 LOADPTR STATUS_EQUIP_WINDOW_TEXT_9, @LOCAL00
    case 0xC1A2F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x005C24, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8.asm:121 LOADPTR STATUS_EQUIP_WINDOW_TEXT_9, @LOCAL00
    // Overlapping static entry reached from 0xC1A2F2.
    case 0xC1A2F4: cpu.execute_instruction<0x5C>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A1D8.asm:121 LOADPTR STATUS_EQUIP_WINDOW_TEXT_9, @LOCAL00
    case 0xC1A2F5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8.asm:121 LOADPTR STATUS_EQUIP_WINDOW_TEXT_9, @LOCAL00
    case 0xC1A2F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A1D8.asm:121 LOADPTR STATUS_EQUIP_WINDOW_TEXT_9, @LOCAL00
    // Overlapping static entry reached from 0xC1A2F7.
    case 0xC1A2F9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:121 LOADPTR STATUS_EQUIP_WINDOW_TEXT_9, @LOCAL00
    case 0xC1A2FA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A1D8.asm:122 LDA #8
    case 0xC1A2FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C1A1D8.asm:122 LDA #8
    // Overlapping static entry reached from 0xC1A2FC.
    case 0xC1A2FE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:123 JSR PRINT_STRING
    case 0xC1A2FF: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C1A1D8.asm:124 LDA @LOCAL04
    case 0xC1A302: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:125 STA @VIRTUAL02
    case 0xC1A304: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:126 LDY #.SIZEOF(char_struct)
    case 0xC1A306: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:126 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A306.
    case 0xC1A308: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:127 JSL MULT168
    case 0xC1A309: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:128 TAX
    case 0xC1A30D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:129 LDA PARTY_CHARACTERS+char_struct::base_defense,X
    case 0xC1A30E: cpu.execute_instruction<0xBD>(0x0099EB, 3); return true;
    // src/unknown/C1/C1A1D8.asm:130 AND #$00FF
    case 0xC1A311: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:130 AND #$00FF
    // Overlapping static entry reached from 0xC1A311.
    case 0xC1A313: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1A1D8.asm:131 TAY
    case 0xC1A314: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:132 STY @LOCAL03
    case 0xC1A315: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:133 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC1A317: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/unknown/C1/C1A1D8.asm:134 AND #$00FF
    case 0xC1A31A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:134 AND #$00FF
    // Overlapping static entry reached from 0xC1A31A.
    case 0xC1A31C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:135 BEQ @UNKNOWN12
    case 0xC1A31D: cpu.execute_instruction<0xF0>(0x000066, 2); return true;
    // src/unknown/C1/C1A1D8.asm:136 LDX #0
    case 0xC1A31F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:136 LDX #0
    // Overlapping static entry reached from 0xC1A31F.
    case 0xC1A321: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:137 STX @LOCAL02
    case 0xC1A322: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:138 LDA @VIRTUAL02
    case 0xC1A324: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:139 CMP #3
    case 0xC1A326: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8.asm:139 CMP #3
    // Overlapping static entry reached from 0xC1A326.
    case 0xC1A328: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:140 BNE @UNKNOWN11
    case 0xC1A329: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:141 LDX #1
    case 0xC1A32B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:141 LDX #1
    // Overlapping static entry reached from 0xC1A32B.
    case 0xC1A32D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:142 STX @LOCAL02
    case 0xC1A32E: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:144 LDA @VIRTUAL02
    case 0xC1A330: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:145 LDY #.SIZEOF(char_struct)
    case 0xC1A332: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:145 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A332.
    case 0xC1A334: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:146 JSL MULT168
    case 0xC1A335: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:147 STA @LOCAL01
    case 0xC1A339: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8.asm:148 TAX
    case 0xC1A33B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:149 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC1A33C: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/unknown/C1/C1A1D8.asm:150 AND #$00FF
    case 0xC1A33F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:150 AND #$00FF
    // Overlapping static entry reached from 0xC1A33F.
    case 0xC1A341: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8.asm:151 DEC
    case 0xC1A342: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:152 STA @VIRTUAL02
    case 0xC1A343: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:153 LDA @LOCAL01
    case 0xC1A345: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8.asm:154 CLC
    case 0xC1A347: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:155 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC1A348: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C1/C1A1D8.asm:155 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC1A348.
    case 0xC1A34A: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C1/C1A1D8.asm:156 CLC
    case 0xC1A34B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:157 ADC @VIRTUAL02
    case 0xC1A34C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:157 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1A34A.
    case 0xC1A34D: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:158 TAX
    case 0xC1A34E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:159 LDA __BSS_START__,X
    case 0xC1A34F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:160 AND #$00FF
    case 0xC1A352: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:160 AND #$00FF
    // Overlapping static entry reached from 0xC1A352.
    case 0xC1A354: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:161 LDY #.SIZEOF(item)
    case 0xC1A355: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/unknown/C1/C1A1D8.asm:161 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC1A355.
    case 0xC1A357: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:162 JSL MULT168
    case 0xC1A358: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:163 LDX @LOCAL02
    case 0xC1A35C: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:164 STX @VIRTUAL02
    case 0xC1A35E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:165 CLC
    case 0xC1A360: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:166 ADC @VIRTUAL02
    case 0xC1A361: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:167 CLC
    case 0xC1A363: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:168 ADC #item::params + item_parameters::strength
    case 0xC1A364: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:168 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A364.
    case 0xC1A366: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:169 TAX
    case 0xC1A367: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:170 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A368: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:171 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A36A: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/unknown/C1/C1A1D8.asm:172 REP #PROC_FLAGS::ACCUM8
    case 0xC1A36E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:173 SEC
    case 0xC1A370: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:174 AND #$00FF
    case 0xC1A371: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:174 AND #$00FF
    // Overlapping static entry reached from 0xC1A371.
    case 0xC1A373: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8.asm:175 SBC #$0080
    case 0xC1A374: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8.asm:175 SBC #$0080
    // Overlapping static entry reached from 0xC1A374.
    case 0xC1A376: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8.asm:176 EOR #$FF80
    case 0xC1A377: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8.asm:176 EOR #$FF80
    // Overlapping static entry reached from 0xC1A377.
    case 0xC1A379: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/unknown/C1/C1A1D8.asm:177 STA @VIRTUAL04
    case 0xC1A37A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:178 LDY @LOCAL03
    case 0xC1A37C: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:178 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1A379.
    case 0xC1A37D: cpu.execute_instruction<0x16>(0x000098, 2); return true;
    // src/unknown/C1/C1A1D8.asm:179 TYA
    case 0xC1A37E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:180 CLC
    case 0xC1A37F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:181 ADC @VIRTUAL04
    case 0xC1A380: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:182 TAY
    case 0xC1A382: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:183 STY @LOCAL03
    case 0xC1A383: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:185 LDA @LOCAL04
    case 0xC1A385: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:186 STA @VIRTUAL02
    case 0xC1A387: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:187 LDY #.SIZEOF(char_struct)
    case 0xC1A389: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:187 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A389.
    case 0xC1A38B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:188 JSL MULT168
    case 0xC1A38C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:189 TAX
    case 0xC1A390: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:190 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC1A391: cpu.execute_instruction<0xBD>(0x009A01, 3); return true;
    // src/unknown/C1/C1A1D8.asm:191 AND #$00FF
    case 0xC1A394: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:191 AND #$00FF
    // Overlapping static entry reached from 0xC1A394.
    case 0xC1A396: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:192 BEQ @UNKNOWN14
    case 0xC1A397: cpu.execute_instruction<0xF0>(0x000066, 2); return true;
    // src/unknown/C1/C1A1D8.asm:193 LDX #0
    case 0xC1A399: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:193 LDX #0
    // Overlapping static entry reached from 0xC1A399.
    case 0xC1A39B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:194 STX @LOCAL02
    case 0xC1A39C: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:195 LDA @VIRTUAL02
    case 0xC1A39E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:196 CMP #3
    case 0xC1A3A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8.asm:196 CMP #3
    // Overlapping static entry reached from 0xC1A3A0.
    case 0xC1A3A2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:197 BNE @UNKNOWN13
    case 0xC1A3A3: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:198 LDX #1
    case 0xC1A3A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:198 LDX #1
    // Overlapping static entry reached from 0xC1A3A5.
    case 0xC1A3A7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:199 STX @LOCAL02
    case 0xC1A3A8: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:201 LDA @VIRTUAL02
    case 0xC1A3AA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:202 LDY #.SIZEOF(char_struct)
    case 0xC1A3AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:202 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A3AC.
    case 0xC1A3AE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:203 JSL MULT168
    case 0xC1A3AF: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:204 STA @LOCAL01
    case 0xC1A3B3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8.asm:205 TAX
    case 0xC1A3B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:206 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC1A3B6: cpu.execute_instruction<0xBD>(0x009A01, 3); return true;
    // src/unknown/C1/C1A1D8.asm:207 AND #$00FF
    case 0xC1A3B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:207 AND #$00FF
    // Overlapping static entry reached from 0xC1A3B9.
    case 0xC1A3BB: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8.asm:208 DEC
    case 0xC1A3BC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:209 STA @VIRTUAL02
    case 0xC1A3BD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:210 LDA @LOCAL01
    case 0xC1A3BF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8.asm:211 CLC
    case 0xC1A3C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:212 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC1A3C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C1/C1A1D8.asm:212 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC1A3C2.
    case 0xC1A3C4: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C1/C1A1D8.asm:213 CLC
    case 0xC1A3C5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:214 ADC @VIRTUAL02
    case 0xC1A3C6: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:214 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1A3C4.
    case 0xC1A3C7: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:215 TAX
    case 0xC1A3C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:216 LDA __BSS_START__,X
    case 0xC1A3C9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:217 AND #$00FF
    case 0xC1A3CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:217 AND #$00FF
    // Overlapping static entry reached from 0xC1A3CC.
    case 0xC1A3CE: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:218 LDY #.SIZEOF(item)
    case 0xC1A3CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/unknown/C1/C1A1D8.asm:218 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC1A3CF.
    case 0xC1A3D1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:219 JSL MULT168
    case 0xC1A3D2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:220 LDX @LOCAL02
    case 0xC1A3D6: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:221 STX @VIRTUAL02
    case 0xC1A3D8: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:222 CLC
    case 0xC1A3DA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:223 ADC @VIRTUAL02
    case 0xC1A3DB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:224 CLC
    case 0xC1A3DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:225 ADC #item::params + item_parameters::strength
    case 0xC1A3DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:225 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A3DE.
    case 0xC1A3E0: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:226 TAX
    case 0xC1A3E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:227 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A3E2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:228 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A3E4: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/unknown/C1/C1A1D8.asm:229 REP #PROC_FLAGS::ACCUM8
    case 0xC1A3E8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:230 SEC
    case 0xC1A3EA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:231 AND #$00FF
    case 0xC1A3EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:231 AND #$00FF
    // Overlapping static entry reached from 0xC1A3EB.
    case 0xC1A3ED: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8.asm:232 SBC #$0080
    case 0xC1A3EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8.asm:232 SBC #$0080
    // Overlapping static entry reached from 0xC1A3EE.
    case 0xC1A3F0: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8.asm:233 EOR #$FF80
    case 0xC1A3F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8.asm:233 EOR #$FF80
    // Overlapping static entry reached from 0xC1A3F1.
    case 0xC1A3F3: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/unknown/C1/C1A1D8.asm:234 STA @VIRTUAL04
    case 0xC1A3F4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:235 LDY @LOCAL03
    case 0xC1A3F6: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:235 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1A3F3.
    case 0xC1A3F7: cpu.execute_instruction<0x16>(0x000098, 2); return true;
    // src/unknown/C1/C1A1D8.asm:236 TYA
    case 0xC1A3F8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:237 CLC
    case 0xC1A3F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:238 ADC @VIRTUAL04
    case 0xC1A3FA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:239 TAY
    case 0xC1A3FC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:240 STY @LOCAL03
    case 0xC1A3FD: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:242 LDA @LOCAL04
    case 0xC1A3FF: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:243 STA @VIRTUAL02
    case 0xC1A401: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:244 LDY #.SIZEOF(char_struct)
    case 0xC1A403: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:244 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A403.
    case 0xC1A405: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:245 JSL MULT168
    case 0xC1A406: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:246 TAX
    case 0xC1A40A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:247 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC1A40B: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/unknown/C1/C1A1D8.asm:248 AND #$00FF
    case 0xC1A40E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:248 AND #$00FF
    // Overlapping static entry reached from 0xC1A40E.
    case 0xC1A410: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:249 BEQ @UNKNOWN16
    case 0xC1A411: cpu.execute_instruction<0xF0>(0x000066, 2); return true;
    // src/unknown/C1/C1A1D8.asm:250 LDX #0
    case 0xC1A413: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:250 LDX #0
    // Overlapping static entry reached from 0xC1A413.
    case 0xC1A415: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:251 STX @LOCAL02
    case 0xC1A416: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:252 LDA @VIRTUAL02
    case 0xC1A418: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:253 CMP #3
    case 0xC1A41A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8.asm:253 CMP #3
    // Overlapping static entry reached from 0xC1A41A.
    case 0xC1A41C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:254 BNE @UNKNOWN15
    case 0xC1A41D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:255 LDX #1
    case 0xC1A41F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:255 LDX #1
    // Overlapping static entry reached from 0xC1A41F.
    case 0xC1A421: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:256 STX @LOCAL02
    case 0xC1A422: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:258 LDA @VIRTUAL02
    case 0xC1A424: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:259 LDY #.SIZEOF(char_struct)
    case 0xC1A426: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:259 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A426.
    case 0xC1A428: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:260 JSL MULT168
    case 0xC1A429: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:261 STA @LOCAL01
    case 0xC1A42D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8.asm:262 TAX
    case 0xC1A42F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:263 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC1A430: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/unknown/C1/C1A1D8.asm:264 AND #$00FF
    case 0xC1A433: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:264 AND #$00FF
    // Overlapping static entry reached from 0xC1A433.
    case 0xC1A435: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8.asm:265 DEC
    case 0xC1A436: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:266 STA @VIRTUAL02
    case 0xC1A437: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:267 LDA @LOCAL01
    case 0xC1A439: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1A1D8.asm:268 CLC
    case 0xC1A43B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:269 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC1A43C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C1/C1A1D8.asm:269 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC1A43C.
    case 0xC1A43E: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C1/C1A1D8.asm:270 CLC
    case 0xC1A43F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:271 ADC @VIRTUAL02
    case 0xC1A440: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:271 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1A43E.
    case 0xC1A441: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:272 TAX
    case 0xC1A442: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:273 LDA __BSS_START__,X
    case 0xC1A443: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:274 AND #$00FF
    case 0xC1A446: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:274 AND #$00FF
    // Overlapping static entry reached from 0xC1A446.
    case 0xC1A448: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:275 LDY #.SIZEOF(item)
    case 0xC1A449: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/unknown/C1/C1A1D8.asm:275 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC1A449.
    case 0xC1A44B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:276 JSL MULT168
    case 0xC1A44C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:277 LDX @LOCAL02
    case 0xC1A450: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:278 STX @VIRTUAL02
    case 0xC1A452: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:279 CLC
    case 0xC1A454: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:280 ADC @VIRTUAL02
    case 0xC1A455: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:281 CLC
    case 0xC1A457: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:282 ADC #item::params + item_parameters::strength
    case 0xC1A458: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:282 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A458.
    case 0xC1A45A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:283 TAX
    case 0xC1A45B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:284 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A45C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:285 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A45E: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/unknown/C1/C1A1D8.asm:286 REP #PROC_FLAGS::ACCUM8
    case 0xC1A462: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:287 SEC
    case 0xC1A464: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:288 AND #$00FF
    case 0xC1A465: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:288 AND #$00FF
    // Overlapping static entry reached from 0xC1A465.
    case 0xC1A467: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8.asm:289 SBC #$0080
    case 0xC1A468: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8.asm:289 SBC #$0080
    // Overlapping static entry reached from 0xC1A468.
    case 0xC1A46A: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8.asm:290 EOR #$FF80
    case 0xC1A46B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8.asm:290 EOR #$FF80
    // Overlapping static entry reached from 0xC1A46B.
    case 0xC1A46D: cpu.execute_instruction<0xFF>(0xA40485, 4); return true;
    // src/unknown/C1/C1A1D8.asm:291 STA @VIRTUAL04
    case 0xC1A46E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:292 LDY @LOCAL03
    case 0xC1A470: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:292 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1A46D.
    case 0xC1A471: cpu.execute_instruction<0x16>(0x000098, 2); return true;
    // src/unknown/C1/C1A1D8.asm:293 TYA
    case 0xC1A472: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:294 CLC
    case 0xC1A473: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:295 ADC @VIRTUAL04
    case 0xC1A474: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:296 TAY
    case 0xC1A476: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:297 STY @LOCAL03
    case 0xC1A477: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:299 LDA #1
    case 0xC1A479: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:299 LDA #1
    // Overlapping static entry reached from 0xC1A479.
    case 0xC1A47B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1A1D8.asm:300 STA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1A47C: cpu.execute_instruction<0x8D>(0x005E71, 3); return true;
    // src/unknown/C1/C1A1D8.asm:301 TAX
    case 0xC1A47F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:302 LDA #55
    case 0xC1A480: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000037, 2); else cpu.execute_instruction<0xA9>(0x000037, 3); return true;
    // src/unknown/C1/C1A1D8.asm:302 LDA #55
    // Overlapping static entry reached from 0xC1A480.
    case 0xC1A482: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:303 JSL UNKNOWN_C43D75
    case 0xC1A483: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1A1D8.asm:304 LDY @LOCAL03
    case 0xC1A487: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:305 STY @VIRTUAL04
    case 0xC1A489: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:306 LDA #0
    case 0xC1A48B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:306 LDA #0
    // Overlapping static entry reached from 0xC1A48B.
    case 0xC1A48D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:307 CLC
    case 0xC1A48E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:308 SBC @VIRTUAL04
    case 0xC1A48F: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8.asm:309 BRANCHLTEQS @UNKNOWN19
    case 0xC1A491: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:309 BRANCHLTEQS @UNKNOWN19
    case 0xC1A493: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8.asm:309 BRANCHLTEQS @UNKNOWN19
    case 0xC1A495: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:309 BRANCHLTEQS @UNKNOWN19
    case 0xC1A497: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:310 LDA #0
    case 0xC1A499: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:310 LDA #0
    // Overlapping static entry reached from 0xC1A499.
    case 0xC1A49B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8.asm:311 BRA @UNKNOWN24
    case 0xC1A49C: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C1/C1A1D8.asm:313 TYA
    case 0xC1A49E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:314 CLC
    case 0xC1A49F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:315 SBC #$00FF
    case 0xC1A4A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000FF, 2); else cpu.execute_instruction<0xE9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:315 SBC #$00FF
    // Overlapping static entry reached from 0xC1A4A0.
    case 0xC1A4A2: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8.asm:316 BRANCHLTEQS @UNKNOWN22
    case 0xC1A4A3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:316 BRANCHLTEQS @UNKNOWN22
    case 0xC1A4A5: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8.asm:316 BRANCHLTEQS @UNKNOWN22
    case 0xC1A4A7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:316 BRANCHLTEQS @UNKNOWN22
    case 0xC1A4A9: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:317 LDX #$00FF
    case 0xC1A4AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:317 LDX #$00FF
    // Overlapping static entry reached from 0xC1A4AB.
    case 0xC1A4AD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8.asm:318 BRA @UNKNOWN23
    case 0xC1A4AE: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C1/C1A1D8.asm:320 TYA
    case 0xC1A4B0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:321 REP #PROC_FLAGS::ACCUM8
    case 0xC1A4B1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:322 AND #$00FF
    case 0xC1A4B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:322 AND #$00FF
    // Overlapping static entry reached from 0xC1A4B3.
    case 0xC1A4B5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:323 TAX
    case 0xC1A4B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:325 TXA
    case 0xC1A4B7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:327 STORE_INT1632S @VIRTUAL06
    case 0xC1A4B8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:327 STORE_INT1632S @VIRTUAL06
    case 0xC1A4BA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/unknown/C1/C1A1D8.asm:327 STORE_INT1632S @VIRTUAL06
    case 0xC1A4BC: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:327 STORE_INT1632S @VIRTUAL06
    case 0xC1A4BE: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1A1D8.asm:328 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A4C0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:328 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A4C2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:328 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A4C4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:328 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A4C6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A1D8.asm:329 JSR PRINT_NUMBER
    case 0xC1A4C8: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1A1D8.asm:330 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1A4CB: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // src/unknown/C1/C1A1D8.asm:331 LDA COMPARE_EQUIPMENT_MODE
    case 0xC1A4CE: cpu.execute_instruction<0xAD>(0x009CD4, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1A1D8.asm:332 BEQL @UNKNOWN53
    case 0xC1A4D1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:332 BEQL @UNKNOWN53
    case 0xC1A4D3: cpu.execute_instruction<0x4C>(0x00A772, 3); return true;
    // src/unknown/C1/C1A1D8.asm:333 LDX #0
    case 0xC1A4D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:333 LDX #0
    // Overlapping static entry reached from 0xC1A4D6.
    case 0xC1A4D8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A1D8.asm:334 LDA #76
    case 0xC1A4D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004C, 2); else cpu.execute_instruction<0xA9>(0x00004C, 3); return true;
    // src/unknown/C1/C1A1D8.asm:334 LDA #76
    // Overlapping static entry reached from 0xC1A4D9.
    case 0xC1A4DB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:335 JSL UNKNOWN_C43D75
    case 0xC1A4DC: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1A1D8.asm:336 LDA #1
    case 0xC1A4E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:336 LDA #1
    // Overlapping static entry reached from 0xC1A4E0.
    case 0xC1A4E2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:337 JSR UNKNOWN_C10FEA
    case 0xC1A4E3: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/unknown/C1/C1A1D8.asm:338 LDA #$014E
    case 0xC1A4E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00014E, 3); return true;
    // src/unknown/C1/C1A1D8.asm:338 LDA #$014E
    // Overlapping static entry reached from 0xC1A4E6.
    case 0xC1A4E8: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:339 JSL UNKNOWN_C43F77
    case 0xC1A4E9: cpu.execute_instruction<0x22>(0xC43F77, 4); return true;
    // src/unknown/C1/C1A1D8.asm:339 JSL UNKNOWN_C43F77
    // Overlapping static entry reached from 0xC1A4E8.
    case 0xC1A4EA: cpu.execute_instruction<0x77>(0x00003F, 2); return true;
    // src/unknown/C1/C1A1D8.asm:339 JSL UNKNOWN_C43F77
    // Overlapping static entry reached from 0xC1A4EA.
    case 0xC1A4EC: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A1D8.asm:340 LDA #0
    case 0xC1A4ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:340 LDA #0
    // Overlapping static entry reached from 0xC1A4EC.
    case 0xC1A4EE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1A1D8.asm:340 LDA #0
    // Overlapping static entry reached from 0xC1A4ED.
    case 0xC1A4EF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:341 JSR UNKNOWN_C10FEA
    case 0xC1A4F0: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/unknown/C1/C1A1D8.asm:342 LDA @LOCAL04
    case 0xC1A4F3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:343 STA @VIRTUAL02
    case 0xC1A4F5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:344 LDY #.SIZEOF(char_struct)
    case 0xC1A4F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:344 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A4F7.
    case 0xC1A4F9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:345 JSL MULT168
    case 0xC1A4FA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:346 TAX
    case 0xC1A4FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:347 LDA PARTY_CHARACTERS+char_struct::base_offense,X
    case 0xC1A4FF: cpu.execute_instruction<0xBD>(0x0099EA, 3); return true;
    // src/unknown/C1/C1A1D8.asm:348 AND #$00FF
    case 0xC1A502: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:348 AND #$00FF
    // Overlapping static entry reached from 0xC1A502.
    case 0xC1A504: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8.asm:349 STA @LOCAL02
    case 0xC1A505: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:350 LDA TEMPORARY_WEAPON
    case 0xC1A507: cpu.execute_instruction<0xAD>(0x009CD0, 3); return true;
    // src/unknown/C1/C1A1D8.asm:351 AND #$00FF
    case 0xC1A50A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:351 AND #$00FF
    // Overlapping static entry reached from 0xC1A50A.
    case 0xC1A50C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:352 BEQ @UNKNOWN28
    case 0xC1A50D: cpu.execute_instruction<0xF0>(0x000061, 2); return true;
    // src/unknown/C1/C1A1D8.asm:353 LDX #0
    case 0xC1A50F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:353 LDX #0
    // Overlapping static entry reached from 0xC1A50F.
    case 0xC1A511: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:354 STX @LOCAL03
    case 0xC1A512: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:355 LDA @VIRTUAL02
    case 0xC1A514: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:356 CMP #3
    case 0xC1A516: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8.asm:356 CMP #3
    // Overlapping static entry reached from 0xC1A516.
    case 0xC1A518: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:357 BNE @UNKNOWN27
    case 0xC1A519: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:358 LDX #1
    case 0xC1A51B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:358 LDX #1
    // Overlapping static entry reached from 0xC1A51B.
    case 0xC1A51D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:359 STX @LOCAL03
    case 0xC1A51E: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:361 LDA TEMPORARY_WEAPON
    case 0xC1A520: cpu.execute_instruction<0xAD>(0x009CD0, 3); return true;
    // src/unknown/C1/C1A1D8.asm:362 AND #$00FF
    case 0xC1A523: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:362 AND #$00FF
    // Overlapping static entry reached from 0xC1A523.
    case 0xC1A525: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8.asm:363 DEC
    case 0xC1A526: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:364 PHA
    case 0xC1A527: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:365 LDA @VIRTUAL02
    case 0xC1A528: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:366 LDY #.SIZEOF(char_struct)
    case 0xC1A52A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:366 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A52A.
    case 0xC1A52C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:367 JSL MULT168
    case 0xC1A52D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:368 CLC
    case 0xC1A531: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:369 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1A532: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C1/C1A1D8.asm:369 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1A532.
    case 0xC1A534: cpu.execute_instruction<0x99>(0x00847A, 3); return true;
    // src/unknown/C1/C1A1D8.asm:370 PLY
    case 0xC1A535: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:371 STY @VIRTUAL02
    case 0xC1A536: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:371 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC1A534.
    case 0xC1A537: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:372 CLC
    case 0xC1A538: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:373 ADC @VIRTUAL02
    case 0xC1A539: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:374 TAX
    case 0xC1A53B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:375 LDA __BSS_START__,X
    case 0xC1A53C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:376 AND #$00FF
    case 0xC1A53F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:376 AND #$00FF
    // Overlapping static entry reached from 0xC1A53F.
    case 0xC1A541: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:377 LDY #.SIZEOF(item)
    case 0xC1A542: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/unknown/C1/C1A1D8.asm:377 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC1A542.
    case 0xC1A544: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:378 JSL MULT168
    case 0xC1A545: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:379 LDX @LOCAL03
    case 0xC1A549: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:380 STX @VIRTUAL02
    case 0xC1A54B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:381 CLC
    case 0xC1A54D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:382 ADC @VIRTUAL02
    case 0xC1A54E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:383 CLC
    case 0xC1A550: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:384 ADC #item::params + item_parameters::strength
    case 0xC1A551: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:384 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A551.
    case 0xC1A553: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:385 TAX
    case 0xC1A554: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:386 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A555: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:387 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A557: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/unknown/C1/C1A1D8.asm:388 REP #PROC_FLAGS::ACCUM8
    case 0xC1A55B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:389 SEC
    case 0xC1A55D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:390 AND #$00FF
    case 0xC1A55E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:390 AND #$00FF
    // Overlapping static entry reached from 0xC1A55E.
    case 0xC1A560: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8.asm:391 SBC #$0080
    case 0xC1A561: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8.asm:391 SBC #$0080
    // Overlapping static entry reached from 0xC1A561.
    case 0xC1A563: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8.asm:392 EOR #$FF80
    case 0xC1A564: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8.asm:392 EOR #$FF80
    // Overlapping static entry reached from 0xC1A564.
    case 0xC1A566: cpu.execute_instruction<0xFF>(0xA50485, 4); return true;
    // src/unknown/C1/C1A1D8.asm:393 STA @VIRTUAL04
    case 0xC1A567: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:394 LDA @LOCAL02
    case 0xC1A569: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:394 LDA @LOCAL02
    // Overlapping static entry reached from 0xC1A566.
    case 0xC1A56A: cpu.execute_instruction<0x14>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:395 CLC
    case 0xC1A56B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:396 ADC @VIRTUAL04
    case 0xC1A56C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:397 STA @LOCAL02
    case 0xC1A56E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:399 LDA #1
    case 0xC1A570: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:399 LDA #1
    // Overlapping static entry reached from 0xC1A570.
    case 0xC1A572: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1A1D8.asm:400 STA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1A573: cpu.execute_instruction<0x8D>(0x005E71, 3); return true;
    // src/unknown/C1/C1A1D8.asm:401 LDA @LOCAL02
    case 0xC1A576: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:402 STA @VIRTUAL04
    case 0xC1A578: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:403 LDA #0
    case 0xC1A57A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:403 LDA #0
    // Overlapping static entry reached from 0xC1A57A.
    case 0xC1A57C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:404 CLC
    case 0xC1A57D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:405 SBC @VIRTUAL04
    case 0xC1A57E: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8.asm:406 BRANCHLTEQS @UNKNOWN31
    case 0xC1A580: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:406 BRANCHLTEQS @UNKNOWN31
    case 0xC1A582: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8.asm:406 BRANCHLTEQS @UNKNOWN31
    case 0xC1A584: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:406 BRANCHLTEQS @UNKNOWN31
    case 0xC1A586: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:407 LDA #0
    case 0xC1A588: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:407 LDA #0
    // Overlapping static entry reached from 0xC1A588.
    case 0xC1A58A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8.asm:408 BRA @UNKNOWN36
    case 0xC1A58B: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C1/C1A1D8.asm:410 LDA @LOCAL02
    case 0xC1A58D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:411 CLC
    case 0xC1A58F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:412 SBC #$00FF
    case 0xC1A590: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000FF, 2); else cpu.execute_instruction<0xE9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:412 SBC #$00FF
    // Overlapping static entry reached from 0xC1A590.
    case 0xC1A592: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8.asm:413 BRANCHLTEQS @UNKNOWN34
    case 0xC1A593: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:413 BRANCHLTEQS @UNKNOWN34
    case 0xC1A595: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8.asm:413 BRANCHLTEQS @UNKNOWN34
    case 0xC1A597: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:413 BRANCHLTEQS @UNKNOWN34
    case 0xC1A599: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:414 LDX #$00FF
    case 0xC1A59B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:414 LDX #$00FF
    // Overlapping static entry reached from 0xC1A59B.
    case 0xC1A59D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8.asm:415 BRA @UNKNOWN35
    case 0xC1A59E: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C1/C1A1D8.asm:417 LDA @LOCAL02
    case 0xC1A5A0: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:418 REP #PROC_FLAGS::ACCUM8
    case 0xC1A5A2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:419 AND #$00FF
    case 0xC1A5A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:419 AND #$00FF
    // Overlapping static entry reached from 0xC1A5A4.
    case 0xC1A5A6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:420 TAX
    case 0xC1A5A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:422 TXA
    case 0xC1A5A8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:424 STORE_INT1632S @VIRTUAL06
    case 0xC1A5A9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:424 STORE_INT1632S @VIRTUAL06
    case 0xC1A5AB: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/unknown/C1/C1A1D8.asm:424 STORE_INT1632S @VIRTUAL06
    case 0xC1A5AD: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:424 STORE_INT1632S @VIRTUAL06
    case 0xC1A5AF: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1A1D8.asm:425 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A5B1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:425 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A5B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:425 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A5B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:425 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A5B7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A1D8.asm:426 JSR PRINT_NUMBER
    case 0xC1A5B9: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1A1D8.asm:427 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1A5BC: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // src/unknown/C1/C1A1D8.asm:428 LDX #1
    case 0xC1A5BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:428 LDX #1
    // Overlapping static entry reached from 0xC1A5BF.
    case 0xC1A5C1: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A1D8.asm:429 LDA #76
    case 0xC1A5C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004C, 2); else cpu.execute_instruction<0xA9>(0x00004C, 3); return true;
    // src/unknown/C1/C1A1D8.asm:429 LDA #76
    // Overlapping static entry reached from 0xC1A5C2.
    case 0xC1A5C4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:430 JSL UNKNOWN_C43D75
    case 0xC1A5C5: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1A1D8.asm:431 LDA #1
    case 0xC1A5C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:431 LDA #1
    // Overlapping static entry reached from 0xC1A5C9.
    case 0xC1A5CB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:432 JSR UNKNOWN_C10FEA
    case 0xC1A5CC: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/unknown/C1/C1A1D8.asm:433 LDA #$014E
    case 0xC1A5CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00014E, 3); return true;
    // src/unknown/C1/C1A1D8.asm:433 LDA #$014E
    // Overlapping static entry reached from 0xC1A5CF.
    case 0xC1A5D1: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:434 JSL UNKNOWN_C43F77
    case 0xC1A5D2: cpu.execute_instruction<0x22>(0xC43F77, 4); return true;
    // src/unknown/C1/C1A1D8.asm:434 JSL UNKNOWN_C43F77
    // Overlapping static entry reached from 0xC1A5D1.
    case 0xC1A5D3: cpu.execute_instruction<0x77>(0x00003F, 2); return true;
    // src/unknown/C1/C1A1D8.asm:434 JSL UNKNOWN_C43F77
    // Overlapping static entry reached from 0xC1A5D3.
    case 0xC1A5D5: cpu.execute_instruction<0xC4>(0x0000A5, 2); return true;
    // src/unknown/C1/C1A1D8.asm:435 LDA @LOCAL04
    case 0xC1A5D6: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:435 LDA @LOCAL04
    // Overlapping static entry reached from 0xC1A5D5.
    case 0xC1A5D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:436 STA @VIRTUAL02
    case 0xC1A5D8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:437 LDY #.SIZEOF(char_struct)
    case 0xC1A5DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:437 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A5DA.
    case 0xC1A5DC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:438 JSL MULT168
    case 0xC1A5DD: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:439 TAX
    case 0xC1A5E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:440 LDA PARTY_CHARACTERS+char_struct::base_defense,X
    case 0xC1A5E2: cpu.execute_instruction<0xBD>(0x0099EB, 3); return true;
    // src/unknown/C1/C1A1D8.asm:441 AND #$00FF
    case 0xC1A5E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:441 AND #$00FF
    // Overlapping static entry reached from 0xC1A5E5.
    case 0xC1A5E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A1D8.asm:442 STA @LOCAL03
    case 0xC1A5E8: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:443 LDA TEMPORARY_BODY_GEAR
    case 0xC1A5EA: cpu.execute_instruction<0xAD>(0x009CD1, 3); return true;
    // src/unknown/C1/C1A1D8.asm:444 AND #$00FF
    case 0xC1A5ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:444 AND #$00FF
    // Overlapping static entry reached from 0xC1A5ED.
    case 0xC1A5EF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:445 BEQ @UNKNOWN39
    case 0xC1A5F0: cpu.execute_instruction<0xF0>(0x000061, 2); return true;
    // src/unknown/C1/C1A1D8.asm:446 LDX #0
    case 0xC1A5F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:446 LDX #0
    // Overlapping static entry reached from 0xC1A5F2.
    case 0xC1A5F4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:447 STX @LOCAL02
    case 0xC1A5F5: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:448 LDA @VIRTUAL02
    case 0xC1A5F7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:449 CMP #3
    case 0xC1A5F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8.asm:449 CMP #3
    // Overlapping static entry reached from 0xC1A5F9.
    case 0xC1A5FB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:450 BNE @UNKNOWN38
    case 0xC1A5FC: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:451 LDX #1
    case 0xC1A5FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:451 LDX #1
    // Overlapping static entry reached from 0xC1A5FE.
    case 0xC1A600: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:452 STX @LOCAL02
    case 0xC1A601: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:454 LDA TEMPORARY_BODY_GEAR
    case 0xC1A603: cpu.execute_instruction<0xAD>(0x009CD1, 3); return true;
    // src/unknown/C1/C1A1D8.asm:455 AND #$00FF
    case 0xC1A606: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:455 AND #$00FF
    // Overlapping static entry reached from 0xC1A606.
    case 0xC1A608: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8.asm:456 DEC
    case 0xC1A609: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:457 PHA
    case 0xC1A60A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:458 LDA @VIRTUAL02
    case 0xC1A60B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:459 LDY #.SIZEOF(char_struct)
    case 0xC1A60D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:459 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A60D.
    case 0xC1A60F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:460 JSL MULT168
    case 0xC1A610: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:461 CLC
    case 0xC1A614: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:462 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1A615: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C1/C1A1D8.asm:462 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1A615.
    case 0xC1A617: cpu.execute_instruction<0x99>(0x00847A, 3); return true;
    // src/unknown/C1/C1A1D8.asm:463 PLY
    case 0xC1A618: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:464 STY @VIRTUAL02
    case 0xC1A619: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:464 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC1A617.
    case 0xC1A61A: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:465 CLC
    case 0xC1A61B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:466 ADC @VIRTUAL02
    case 0xC1A61C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:467 TAX
    case 0xC1A61E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:468 LDA __BSS_START__,X
    case 0xC1A61F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:469 AND #$00FF
    case 0xC1A622: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:469 AND #$00FF
    // Overlapping static entry reached from 0xC1A622.
    case 0xC1A624: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:470 LDY #.SIZEOF(item)
    case 0xC1A625: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/unknown/C1/C1A1D8.asm:470 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC1A625.
    case 0xC1A627: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:471 JSL MULT168
    case 0xC1A628: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:472 LDX @LOCAL02
    case 0xC1A62C: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:473 STX @VIRTUAL02
    case 0xC1A62E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:474 CLC
    case 0xC1A630: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:475 ADC @VIRTUAL02
    case 0xC1A631: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:476 CLC
    case 0xC1A633: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:477 ADC #item::params + item_parameters::strength
    case 0xC1A634: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:477 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A634.
    case 0xC1A636: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:478 TAX
    case 0xC1A637: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:479 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A638: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:480 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A63A: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/unknown/C1/C1A1D8.asm:481 REP #PROC_FLAGS::ACCUM8
    case 0xC1A63E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:482 SEC
    case 0xC1A640: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:483 AND #$00FF
    case 0xC1A641: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:483 AND #$00FF
    // Overlapping static entry reached from 0xC1A641.
    case 0xC1A643: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8.asm:484 SBC #$0080
    case 0xC1A644: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8.asm:484 SBC #$0080
    // Overlapping static entry reached from 0xC1A644.
    case 0xC1A646: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8.asm:485 EOR #$FF80
    case 0xC1A647: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8.asm:485 EOR #$FF80
    // Overlapping static entry reached from 0xC1A647.
    case 0xC1A649: cpu.execute_instruction<0xFF>(0xA50485, 4); return true;
    // src/unknown/C1/C1A1D8.asm:486 STA @VIRTUAL04
    case 0xC1A64A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:487 LDA @LOCAL03
    case 0xC1A64C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:487 LDA @LOCAL03
    // Overlapping static entry reached from 0xC1A649.
    case 0xC1A64D: cpu.execute_instruction<0x16>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:488 CLC
    case 0xC1A64E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:489 ADC @VIRTUAL04
    case 0xC1A64F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:490 STA @LOCAL03
    case 0xC1A651: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:492 LDA TEMPORARY_ARMS_GEAR
    case 0xC1A653: cpu.execute_instruction<0xAD>(0x009CD2, 3); return true;
    // src/unknown/C1/C1A1D8.asm:493 AND #$00FF
    case 0xC1A656: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:493 AND #$00FF
    // Overlapping static entry reached from 0xC1A656.
    case 0xC1A658: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:494 BEQ @UNKNOWN41
    case 0xC1A659: cpu.execute_instruction<0xF0>(0x000063, 2); return true;
    // src/unknown/C1/C1A1D8.asm:495 LDX #0
    case 0xC1A65B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:495 LDX #0
    // Overlapping static entry reached from 0xC1A65B.
    case 0xC1A65D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:496 STX @LOCAL02
    case 0xC1A65E: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:497 LDA @LOCAL04
    case 0xC1A660: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:498 STA @VIRTUAL02
    case 0xC1A662: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:499 CMP #3
    case 0xC1A664: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8.asm:499 CMP #3
    // Overlapping static entry reached from 0xC1A664.
    case 0xC1A666: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:500 BNE @UNKNOWN40
    case 0xC1A667: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:501 LDX #1
    case 0xC1A669: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:501 LDX #1
    // Overlapping static entry reached from 0xC1A669.
    case 0xC1A66B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:502 STX @LOCAL02
    case 0xC1A66C: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:504 LDA TEMPORARY_ARMS_GEAR
    case 0xC1A66E: cpu.execute_instruction<0xAD>(0x009CD2, 3); return true;
    // src/unknown/C1/C1A1D8.asm:505 AND #$00FF
    case 0xC1A671: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:505 AND #$00FF
    // Overlapping static entry reached from 0xC1A671.
    case 0xC1A673: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8.asm:506 DEC
    case 0xC1A674: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:507 PHA
    case 0xC1A675: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:508 LDA @VIRTUAL02
    case 0xC1A676: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:509 LDY #.SIZEOF(char_struct)
    case 0xC1A678: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:509 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A678.
    case 0xC1A67A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:510 JSL MULT168
    case 0xC1A67B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:511 CLC
    case 0xC1A67F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:512 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1A680: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C1/C1A1D8.asm:512 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1A680.
    case 0xC1A682: cpu.execute_instruction<0x99>(0x00847A, 3); return true;
    // src/unknown/C1/C1A1D8.asm:513 PLY
    case 0xC1A683: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:514 STY @VIRTUAL02
    case 0xC1A684: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:514 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC1A682.
    case 0xC1A685: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:515 CLC
    case 0xC1A686: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:516 ADC @VIRTUAL02
    case 0xC1A687: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:517 TAX
    case 0xC1A689: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:518 LDA __BSS_START__,X
    case 0xC1A68A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:519 AND #$00FF
    case 0xC1A68D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:519 AND #$00FF
    // Overlapping static entry reached from 0xC1A68D.
    case 0xC1A68F: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:520 LDY #.SIZEOF(item)
    case 0xC1A690: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/unknown/C1/C1A1D8.asm:520 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC1A690.
    case 0xC1A692: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:521 JSL MULT168
    case 0xC1A693: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:522 LDX @LOCAL02
    case 0xC1A697: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C1A1D8.asm:523 STX @VIRTUAL02
    case 0xC1A699: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:524 CLC
    case 0xC1A69B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:525 ADC @VIRTUAL02
    case 0xC1A69C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:526 CLC
    case 0xC1A69E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:527 ADC #item::params + item_parameters::strength
    case 0xC1A69F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:527 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A69F.
    case 0xC1A6A1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:528 TAX
    case 0xC1A6A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:529 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A6A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:530 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A6A5: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/unknown/C1/C1A1D8.asm:531 REP #PROC_FLAGS::ACCUM8
    case 0xC1A6A9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:532 SEC
    case 0xC1A6AB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:533 AND #$00FF
    case 0xC1A6AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:533 AND #$00FF
    // Overlapping static entry reached from 0xC1A6AC.
    case 0xC1A6AE: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8.asm:534 SBC #$0080
    case 0xC1A6AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8.asm:534 SBC #$0080
    // Overlapping static entry reached from 0xC1A6AF.
    case 0xC1A6B1: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8.asm:535 EOR #$FF80
    case 0xC1A6B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8.asm:535 EOR #$FF80
    // Overlapping static entry reached from 0xC1A6B2.
    case 0xC1A6B4: cpu.execute_instruction<0xFF>(0xA50485, 4); return true;
    // src/unknown/C1/C1A1D8.asm:536 STA @VIRTUAL04
    case 0xC1A6B5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:537 LDA @LOCAL03
    case 0xC1A6B7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:537 LDA @LOCAL03
    // Overlapping static entry reached from 0xC1A6B4.
    case 0xC1A6B8: cpu.execute_instruction<0x16>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:538 CLC
    case 0xC1A6B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:539 ADC @VIRTUAL04
    case 0xC1A6BA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:540 STA @LOCAL03
    case 0xC1A6BC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:542 LDA TEMPORARY_OTHER_GEAR
    case 0xC1A6BE: cpu.execute_instruction<0xAD>(0x009CD3, 3); return true;
    // src/unknown/C1/C1A1D8.asm:543 AND #$00FF
    case 0xC1A6C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:543 AND #$00FF
    // Overlapping static entry reached from 0xC1A6C1.
    case 0xC1A6C3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:544 BEQ @UNKNOWN43
    case 0xC1A6C4: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/unknown/C1/C1A1D8.asm:545 LDX #0
    case 0xC1A6C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:545 LDX #0
    // Overlapping static entry reached from 0xC1A6C6.
    case 0xC1A6C8: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1A1D8.asm:546 LDA @LOCAL04
    case 0xC1A6C9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:547 STA @VIRTUAL02
    case 0xC1A6CB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:548 CMP #3
    case 0xC1A6CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1A1D8.asm:548 CMP #3
    // Overlapping static entry reached from 0xC1A6CD.
    case 0xC1A6CF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:549 BNE @UNKNOWN42
    case 0xC1A6D0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C1/C1A1D8.asm:550 LDX #1
    case 0xC1A6D2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:550 LDX #1
    // Overlapping static entry reached from 0xC1A6D2.
    case 0xC1A6D4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1A1D8.asm:552 STX @VIRTUAL04
    case 0xC1A6D5: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:553 LDA TEMPORARY_OTHER_GEAR
    case 0xC1A6D7: cpu.execute_instruction<0xAD>(0x009CD3, 3); return true;
    // src/unknown/C1/C1A1D8.asm:554 AND #$00FF
    case 0xC1A6DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:554 AND #$00FF
    // Overlapping static entry reached from 0xC1A6DA.
    case 0xC1A6DC: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1A1D8.asm:555 DEC
    case 0xC1A6DD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:556 PHA
    case 0xC1A6DE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:557 LDA @VIRTUAL02
    case 0xC1A6DF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:558 LDY #.SIZEOF(char_struct)
    case 0xC1A6E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:558 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A6E1.
    case 0xC1A6E3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:559 JSL MULT168
    case 0xC1A6E4: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:560 CLC
    case 0xC1A6E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:561 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1A6E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C1/C1A1D8.asm:561 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1A6E9.
    case 0xC1A6EB: cpu.execute_instruction<0x99>(0x00847A, 3); return true;
    // src/unknown/C1/C1A1D8.asm:562 PLY
    case 0xC1A6EC: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:563 STY @VIRTUAL02
    case 0xC1A6ED: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:563 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC1A6EB.
    case 0xC1A6EE: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:564 CLC
    case 0xC1A6EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:565 ADC @VIRTUAL02
    case 0xC1A6F0: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:566 TAX
    case 0xC1A6F2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:567 LDA __BSS_START__,X
    case 0xC1A6F3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:568 AND #$00FF
    case 0xC1A6F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:568 AND #$00FF
    // Overlapping static entry reached from 0xC1A6F6.
    case 0xC1A6F8: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C1/C1A1D8.asm:569 LDY #.SIZEOF(item)
    case 0xC1A6F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/unknown/C1/C1A1D8.asm:569 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC1A6F9.
    case 0xC1A6FB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A1D8.asm:570 JSL MULT168
    case 0xC1A6FC: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A1D8.asm:571 CLC
    case 0xC1A700: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:572 ADC @VIRTUAL04
    case 0xC1A701: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1A1D8.asm:573 CLC
    case 0xC1A703: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:574 ADC #item::params + item_parameters::strength
    case 0xC1A704: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/unknown/C1/C1A1D8.asm:574 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC1A704.
    case 0xC1A706: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:575 TAX
    case 0xC1A707: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:576 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A708: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:577 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC1A70A: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/unknown/C1/C1A1D8.asm:578 REP #PROC_FLAGS::ACCUM8
    case 0xC1A70E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:579 SEC
    case 0xC1A710: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:580 AND #$00FF
    case 0xC1A711: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:580 AND #$00FF
    // Overlapping static entry reached from 0xC1A711.
    case 0xC1A713: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/unknown/C1/C1A1D8.asm:581 SBC #$0080
    case 0xC1A714: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/unknown/C1/C1A1D8.asm:581 SBC #$0080
    // Overlapping static entry reached from 0xC1A714.
    case 0xC1A716: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/unknown/C1/C1A1D8.asm:582 EOR #$FF80
    case 0xC1A717: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/unknown/C1/C1A1D8.asm:582 EOR #$FF80
    // Overlapping static entry reached from 0xC1A717.
    case 0xC1A719: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/unknown/C1/C1A1D8.asm:583 STA @VIRTUAL02
    case 0xC1A71A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:584 LDA @LOCAL03
    case 0xC1A71C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:584 LDA @LOCAL03
    // Overlapping static entry reached from 0xC1A719.
    case 0xC1A71D: cpu.execute_instruction<0x16>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:585 CLC
    case 0xC1A71E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:586 ADC @VIRTUAL02
    case 0xC1A71F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:587 STA @LOCAL03
    case 0xC1A721: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:589 LDA #1
    case 0xC1A723: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A1D8.asm:589 LDA #1
    // Overlapping static entry reached from 0xC1A723.
    case 0xC1A725: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1A1D8.asm:590 STA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1A726: cpu.execute_instruction<0x8D>(0x005E71, 3); return true;
    // src/unknown/C1/C1A1D8.asm:591 LDA @LOCAL03
    case 0xC1A729: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:592 STA @VIRTUAL02
    case 0xC1A72B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A1D8.asm:593 LDA #0
    case 0xC1A72D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:593 LDA #0
    // Overlapping static entry reached from 0xC1A72D.
    case 0xC1A72F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1A1D8.asm:594 CLC
    case 0xC1A730: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:595 SBC @VIRTUAL02
    case 0xC1A731: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8.asm:596 BRANCHLTEQS @UNKNOWN46
    case 0xC1A733: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:596 BRANCHLTEQS @UNKNOWN46
    case 0xC1A735: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8.asm:596 BRANCHLTEQS @UNKNOWN46
    case 0xC1A737: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:596 BRANCHLTEQS @UNKNOWN46
    case 0xC1A739: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:597 LDA #0
    case 0xC1A73B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A1D8.asm:597 LDA #0
    // Overlapping static entry reached from 0xC1A73B.
    case 0xC1A73D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8.asm:598 BRA @UNKNOWN51
    case 0xC1A73E: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C1/C1A1D8.asm:600 LDA @LOCAL03
    case 0xC1A740: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:601 CLC
    case 0xC1A742: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:602 SBC #$00FF
    case 0xC1A743: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000FF, 2); else cpu.execute_instruction<0xE9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:602 SBC #$00FF
    // Overlapping static entry reached from 0xC1A743.
    case 0xC1A745: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1A1D8.asm:603 BRANCHLTEQS @UNKNOWN49
    case 0xC1A746: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:603 BRANCHLTEQS @UNKNOWN49
    case 0xC1A748: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1A1D8.asm:603 BRANCHLTEQS @UNKNOWN49
    case 0xC1A74A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:603 BRANCHLTEQS @UNKNOWN49
    case 0xC1A74C: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/unknown/C1/C1A1D8.asm:604 LDX #$00FF
    case 0xC1A74E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:604 LDX #$00FF
    // Overlapping static entry reached from 0xC1A74E.
    case 0xC1A750: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1A1D8.asm:605 BRA @UNKNOWN50
    case 0xC1A751: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C1/C1A1D8.asm:607 LDA @LOCAL03
    case 0xC1A753: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C1A1D8.asm:608 REP #PROC_FLAGS::ACCUM8
    case 0xC1A755: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A1D8.asm:609 AND #$00FF
    case 0xC1A757: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A1D8.asm:609 AND #$00FF
    // Overlapping static entry reached from 0xC1A757.
    case 0xC1A759: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A1D8.asm:610 TAX
    case 0xC1A75A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A1D8.asm:612 TXA
    case 0xC1A75B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:614 STORE_INT1632S @VIRTUAL06
    case 0xC1A75C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:614 STORE_INT1632S @VIRTUAL06
    case 0xC1A75E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/unknown/C1/C1A1D8.asm:614 STORE_INT1632S @VIRTUAL06
    case 0xC1A760: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:614 STORE_INT1632S @VIRTUAL06
    case 0xC1A762: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1A1D8.asm:615 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A764: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1A1D8.asm:615 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A766: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:615 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A768: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1A1D8.asm:615 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A76A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A1D8.asm:616 JSR PRINT_NUMBER
    case 0xC1A76C: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1A1D8.asm:617 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1A76F: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // src/unknown/C1/C1A1D8.asm:619 JSL CLEAR_INSTANT_PRINTING
    case 0xC1A772: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1A1D8.asm:620 END_C_FUNCTION
    case 0xC1A776: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1A1D8.asm:620 END_C_FUNCTION
    case 0xC1A777: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1A778.asm (unresolved).
bool execute_unresolved_c1_c1a778_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1A778.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1A778: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    case 0xC1A77A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    case 0xC1A77B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    case 0xC1A77C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    case 0xC1A77D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1A77D.
    case 0xC1A77F: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    case 0xC1A780: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1A778.asm:7 END_STACK_VARS
    case 0xC1A781: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1A778.asm:8 TAX
    case 0xC1A782: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A778.asm:9 STX @LOCAL00
    case 0xC1A783: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1A778.asm:10 STZ COMPARE_EQUIPMENT_MODE
    case 0xC1A785: cpu.execute_instruction<0x9C>(0x009CD4, 3); return true;
    // src/unknown/C1/C1A778.asm:11 TXA
    case 0xC1A788: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1A778.asm:12 JSR UNKNOWN_C19F29
    case 0xC1A789: cpu.execute_instruction<0x20>(0x009F29, 3); return true;
    // src/unknown/C1/C1A778.asm:13 LDX @LOCAL00
    case 0xC1A78C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1A778.asm:14 TXA
    case 0xC1A78E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1A778.asm:15 JSL UNKNOWN_C1A1D8
    case 0xC1A78F: cpu.execute_instruction<0x22>(0xC1A1D8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1A778.asm:16 END_C_FUNCTION
    case 0xC1A793: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1A778.asm:16 END_C_FUNCTION
    case 0xC1A794: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1A795.asm (unresolved).
bool execute_unresolved_c1_c1a795_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1A795.asm:3 BEGIN_C_FUNCTION
    case 0xC1A795: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1A795.asm:13 END_STACK_VARS
    case 0xC1A797: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1A795.asm:13 END_STACK_VARS
    case 0xC1A798: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1A795.asm:13 END_STACK_VARS
    case 0xC1A799: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1A795.asm:13 END_STACK_VARS
    case 0xC1A79A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1A795.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC1A79A.
    case 0xC1A79C: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1A795.asm:13 END_STACK_VARS
    case 0xC1A79D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1A795.asm:13 END_STACK_VARS
    case 0xC1A79E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:14 TAX
    case 0xC1A79F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:15 DEC
    case 0xC1A7A0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:16 STA @LOCAL06
    case 0xC1A7A1: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795.asm:18 LDA #4
    case 0xC1A7A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C1A795.asm:18 LDA #4
    // Overlapping static entry reached from 0xC1A7A3.
    case 0xC1A7A5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A795.asm:19 JSR UNKNOWN_C193E7
    case 0xC1A7A6: cpu.execute_instruction<0x20>(0x0093E7, 3); return true;
    // src/unknown/C1/C1A795.asm:20 LDA #6
    case 0xC1A7A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1A795.asm:20 LDA #6
    // Overlapping static entry reached from 0xC1A7A9.
    case 0xC1A7AB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A795.asm:21 JSR SET_WINDOW_FOCUS
    case 0xC1A7AC: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/unknown/C1/C1A795.asm:22 LDA #1
    case 0xC1A7AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A795.asm:22 LDA #1
    // Overlapping static entry reached from 0xC1A7AF.
    case 0xC1A7B1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A795.asm:23 JSR SELECTION_MENU
    case 0xC1A7B2: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C1A795.asm:24 STA @LOCAL05
    case 0xC1A7B5: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C1A795.asm:25 JSR UNKNOWN_C19437
    case 0xC1A7B7: cpu.execute_instruction<0x20>(0x009437, 3); return true;
    // src/unknown/C1/C1A795.asm:26 LDA @LOCAL05
    case 0xC1A7BA: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1A795.asm:27 BEQL @UNKNOWN23
    case 0xC1A7BC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1A795.asm:27 BEQL @UNKNOWN23
    case 0xC1A7BE: cpu.execute_instruction<0x4C>(0x00AA16, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1A795.asm:28 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    case 0xC1A7C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1A795.asm:28 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    // Overlapping static entry reached from 0xC1A7C1.
    case 0xC1A7C3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1A795.asm:28 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    case 0xC1A7C4: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:29 LOADPTR STATUS_EQUIP_WINDOW_TEXT_11, @VIRTUAL06
    case 0xC1A7C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x005C58, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:29 LOADPTR STATUS_EQUIP_WINDOW_TEXT_11, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A7C7.
    case 0xC1A7C9: cpu.execute_instruction<0x5C>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:29 LOADPTR STATUS_EQUIP_WINDOW_TEXT_11, @VIRTUAL06
    case 0xC1A7CA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:29 LOADPTR STATUS_EQUIP_WINDOW_TEXT_11, @VIRTUAL06
    case 0xC1A7CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:29 LOADPTR STATUS_EQUIP_WINDOW_TEXT_11, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A7CC.
    case 0xC1A7CE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795.asm:29 LOADPTR STATUS_EQUIP_WINDOW_TEXT_11, @VIRTUAL06
    case 0xC1A7CF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1A795.asm:30 LDA @LOCAL05
    case 0xC1A7D1: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C1A795.asm:31 DEC
    case 0xC1A7D3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:32 ASL
    case 0xC1A7D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:33 ASL
    case 0xC1A7D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:34 ASL
    case 0xC1A7D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:35 CLC
    case 0xC1A7D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:36 ADC @VIRTUAL06
    case 0xC1A7D8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1A795.asm:37 STA @VIRTUAL06
    case 0xC1A7DA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1A795.asm:38 STA @LOCAL00
    case 0xC1A7DC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1A795.asm:39 LDA @VIRTUAL06+2
    case 0xC1A7DE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1A795.asm:40 STA @LOCAL00+2
    case 0xC1A7E0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795.asm:41 JSL STRLEN
    case 0xC1A7E2: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // src/unknown/C1/C1A795.asm:42 STA @LOCAL04
    case 0xC1A7E6: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1A795.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A7E8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1A795.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A7EA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1A795.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A7EC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1A795.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A7EE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795.asm:44 LDA @LOCAL04
    case 0xC1A7F0: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C1A795.asm:45 TAX
    case 0xC1A7F2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:46 LDA #7
    case 0xC1A7F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C1/C1A795.asm:46 LDA #7
    // Overlapping static entry reached from 0xC1A7F3.
    case 0xC1A7F5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A795.asm:47 JSL SET_WINDOW_TITLE
    case 0xC1A7F6: cpu.execute_instruction<0x22>(0xC2032B, 4); return true;
    // src/unknown/C1/C1A795.asm:48 LDA #0
    case 0xC1A7FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A795.asm:48 LDA #0
    // Overlapping static entry reached from 0xC1A874.
    case 0xC1A7FB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1A795.asm:48 LDA #0
    // Overlapping static entry reached from 0xC1A7FA.
    case 0xC1A7FC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A795.asm:49 STA @VIRTUAL04
    case 0xC1A7FD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1A795.asm:50 LDA #.LOWORD(-1)
    case 0xC1A7FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1A795.asm:50 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1A7FF.
    case 0xC1A801: cpu.execute_instruction<0xFF>(0xA91885, 4); return true;
    // src/unknown/C1/C1A795.asm:51 STA @LOCAL03
    case 0xC1A802: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C1A795.asm:52 LDA #0
    case 0xC1A804: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1A795.asm:52 LDA #0
    // Overlapping static entry reached from 0xC1A801.
    case 0xC1A805: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1A795.asm:52 LDA #0
    // Overlapping static entry reached from 0xC1A804.
    case 0xC1A806: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1A795.asm:53 STA @VIRTUAL02
    case 0xC1A807: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1A795.asm:54 JMP @UNKNOWN10
    case 0xC1A809: cpu.execute_instruction<0x4C>(0x00A906, 3); return true;
    // src/unknown/C1/C1A795.asm:56 LDA @LOCAL06
    case 0xC1A80C: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795.asm:57 LDY #.SIZEOF(char_struct)
    case 0xC1A80E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1A795.asm:57 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1A80E.
    case 0xC1A810: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A795.asm:58 JSL MULT168
    case 0xC1A811: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A795.asm:59 CLC
    case 0xC1A815: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:60 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC1A816: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C1/C1A795.asm:60 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC1A816.
    case 0xC1A818: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C1/C1A795.asm:61 CLC
    case 0xC1A819: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:62 ADC @VIRTUAL02
    case 0xC1A81A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1A795.asm:62 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1A818.
    case 0xC1A81B: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C1/C1A795.asm:63 TAX
    case 0xC1A81C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:64 LDA __BSS_START__,X
    case 0xC1A81D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1A795.asm:65 AND #$00FF
    case 0xC1A820: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1A795.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC1A820.
    case 0xC1A822: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1A795.asm:66 TAY
    case 0xC1A823: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:67 STY @LOCAL02
    case 0xC1A824: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1A795.asm:68 BEQL @UNKNOWN9
    case 0xC1A826: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1A795.asm:68 BEQL @UNKNOWN9
    case 0xC1A828: cpu.execute_instruction<0x4C>(0x00A904, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1A795.asm:68 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC1A8A3.
    case 0xC1A82A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000098, 2); else cpu.execute_instruction<0xA9>(0x002098, 3); return true;
    // src/unknown/C1/C1A795.asm:69 TYA
    case 0xC1A82B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:70 JSR GET_ITEM_TYPE
    case 0xC1A82C: cpu.execute_instruction<0x20>(0x009EE6, 3); return true;
    // src/unknown/C1/C1A795.asm:70 JSR GET_ITEM_TYPE
    // Overlapping static entry reached from 0xC1A82A.
    case 0xC1A82D: cpu.execute_instruction<0xE6>(0x00009E, 2); return true;
    // src/unknown/C1/C1A795.asm:71 CMP #2
    case 0xC1A82F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1A795.asm:71 CMP #2
    // Overlapping static entry reached from 0xC1A82F.
    case 0xC1A831: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1A795.asm:72 BNEL @UNKNOWN9
    case 0xC1A832: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1A795.asm:72 BNEL @UNKNOWN9
    case 0xC1A834: cpu.execute_instruction<0x4C>(0x00A904, 3); return true;
    // src/unknown/C1/C1A795.asm:73 LDY @LOCAL02
    case 0xC1A837: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A795.asm:74 TYA
    case 0xC1A839: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:75 JSL GET_ITEM_SUBTYPE
    case 0xC1A83A: cpu.execute_instruction<0x22>(0xC224E1, 4); return true;
    // src/unknown/C1/C1A795.asm:76 CMP @LOCAL05
    case 0xC1A83E: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1A795.asm:77 BNEL @UNKNOWN9
    case 0xC1A840: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1A795.asm:77 BNEL @UNKNOWN9
    case 0xC1A842: cpu.execute_instruction<0x4C>(0x00A904, 3); return true;
    // src/unknown/C1/C1A795.asm:78 LDA @LOCAL06
    case 0xC1A845: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795.asm:79 INC
    case 0xC1A847: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:80 STA @LOCAL04
    case 0xC1A848: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C1A795.asm:81 LDY @LOCAL02
    case 0xC1A84A: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A795.asm:82 TYX
    case 0xC1A84C: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:83 LDA @LOCAL04
    case 0xC1A84D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C1A795.asm:84 JSL UNKNOWN_C3EE14
    case 0xC1A84F: cpu.execute_instruction<0x22>(0xC3EE14, 4); return true;
    // src/unknown/C1/C1A795.asm:85 CMP #0
    case 0xC1A853: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1A795.asm:85 CMP #0
    // Overlapping static entry reached from 0xC1A853.
    case 0xC1A855: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1A795.asm:86 BEQL @UNKNOWN9
    case 0xC1A856: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1A795.asm:86 BEQL @UNKNOWN9
    case 0xC1A858: cpu.execute_instruction<0x4C>(0x00A904, 3); return true;
    // src/unknown/C1/C1A795.asm:87 LDX @VIRTUAL02
    case 0xC1A85B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1A795.asm:88 INX
    case 0xC1A85D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:89 LDA @LOCAL04
    case 0xC1A85E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C1A795.asm:90 JSL CHECK_ITEM_EQUIPPED
    case 0xC1A860: cpu.execute_instruction<0x22>(0xC3E9A0, 4); return true;
    // src/unknown/C1/C1A795.asm:91 CMP #0
    case 0xC1A864: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1A795.asm:91 CMP #0
    // Overlapping static entry reached from 0xC1A864.
    case 0xC1A866: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795.asm:92 BEQ @UNKNOWN7
    case 0xC1A867: cpu.execute_instruction<0xF0>(0x000038, 2); return true;
    // src/unknown/C1/C1A795.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A869: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795.asm:94 LDA #34
    case 0xC1A86B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x008D22, 3); return true;
    // src/unknown/C1/C1A795.asm:95 STA TEMPORARY_TEXT_BUFFER
    case 0xC1A86D: cpu.execute_instruction<0x8D>(0x009C9F, 3); return true;
    // src/unknown/C1/C1A795.asm:95 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1A86B.
    case 0xC1A86E: cpu.execute_instruction<0x9F>(0x20C29C, 4); return true;
    // src/unknown/C1/C1A795.asm:96 REP #PROC_FLAGS::ACCUM8
    case 0xC1A870: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:97 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A872: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:97 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A872.
    case 0xC1A874: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:97 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A875: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:97 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A874.
    case 0xC1A876: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:97 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A877: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:97 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A876.
    case 0xC1A878: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:97 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A877.
    case 0xC1A879: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795.asm:97 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A87A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1A795.asm:98 LDY @LOCAL02
    case 0xC1A87C: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A795.asm:99 TYA
    case 0xC1A87E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:100 LDY #.SIZEOF(item)
    case 0xC1A87F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/unknown/C1/C1A795.asm:100 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC1A87F.
    case 0xC1A881: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A795.asm:101 JSL MULT168
    case 0xC1A882: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A795.asm:102 CLC
    case 0xC1A886: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:103 ADC @VIRTUAL06
    case 0xC1A887: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1A795.asm:104 STA @VIRTUAL06
    case 0xC1A889: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1A795.asm:105 STA @LOCAL00
    case 0xC1A88B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1A795.asm:106 LDA @VIRTUAL06+2
    case 0xC1A88D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1A795.asm:107 STA @LOCAL00+2
    case 0xC1A88F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795.asm:108 LDX #.SIZEOF(item::name)
    case 0xC1A891: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/unknown/C1/C1A795.asm:108 LDX #.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC1A891.
    case 0xC1A893: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A795.asm:109 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)+1
    case 0xC1A894: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x009CA0, 3); return true;
    // src/unknown/C1/C1A795.asm:109 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)+1
    // Overlapping static entry reached from 0xC1A894.
    case 0xC1A896: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/unknown/C1/C1A795.asm:110 JSL MEMCPY16
    case 0xC1A897: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C1/C1A795.asm:110 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1A896.
    case 0xC1A899: cpu.execute_instruction<0x8E>(0x00A5C0, 3); return true;
    // src/unknown/C1/C1A795.asm:111 LDA @VIRTUAL04
    case 0xC1A89B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1A795.asm:111 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC1A899.
    case 0xC1A89C: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C1/C1A795.asm:112 STA @LOCAL03
    case 0xC1A89D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C1A795.asm:112 STA @LOCAL03
    // Overlapping static entry reached from 0xC1A89C.
    case 0xC1A89E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:113 BRA @UNKNOWN8
    case 0xC1A89F: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A8A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A8A1.
    case 0xC1A8A3: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A8A4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A8A3.
    case 0xC1A8A5: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A8A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A8A5.
    case 0xC1A8A7: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A8A6.
    case 0xC1A8A8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795.asm:115 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1A8A9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1A795.asm:116 LDY @LOCAL02
    case 0xC1A8AB: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1A795.asm:117 TYA
    case 0xC1A8AD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:118 LDY #.SIZEOF(item)
    case 0xC1A8AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // src/unknown/C1/C1A795.asm:118 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC1A8AE.
    case 0xC1A8B0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A795.asm:119 JSL MULT168
    case 0xC1A8B1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1A795.asm:120 CLC
    case 0xC1A8B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:121 ADC @VIRTUAL06
    case 0xC1A8B6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1A795.asm:122 STA @VIRTUAL06
    case 0xC1A8B8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1A795.asm:123 STA @LOCAL00
    case 0xC1A8BA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1A795.asm:124 LDA @VIRTUAL06+2
    case 0xC1A8BC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1A795.asm:125 STA @LOCAL00+2
    case 0xC1A8BE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795.asm:126 LDX #.SIZEOF(item::name)
    case 0xC1A8C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/unknown/C1/C1A795.asm:126 LDX #.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC1A8C0.
    case 0xC1A8C2: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A795.asm:127 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1A8C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // src/unknown/C1/C1A795.asm:127 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1A8C3.
    case 0xC1A8C5: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/unknown/C1/C1A795.asm:128 JSL MEMCPY16
    case 0xC1A8C6: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C1/C1A795.asm:128 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1A8C5.
    case 0xC1A8C8: cpu.execute_instruction<0x8E>(0x00E2C0, 3); return true;
    // src/unknown/C1/C1A795.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A8CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795.asm:130 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1A8C8.
    case 0xC1A8CB: cpu.execute_instruction<0x20>(0x00B89C, 3); return true;
    // src/unknown/C1/C1A795.asm:131 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    case 0xC1A8CC: cpu.execute_instruction<0x9C>(0x009CB8, 3); return true;
    // src/unknown/C1/C1A795.asm:131 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC1A8CB.
    case 0xC1A8CE: cpu.execute_instruction<0x9C>(0x0020C2, 3); return true;
    // src/unknown/C1/C1A795.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC1A8CF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1A795.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A8D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1A795.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1A8D1.
    case 0xC1A8D3: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1A795.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A8D4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1A795.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A8D6: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1A795.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A8D7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1A795.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A8D9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1A795.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A8DA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1A795.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1A8DC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1A795.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC1A8DE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1A795.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A8E0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1A795.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A8E2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1A795.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A8E4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1A795.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1A8E6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1A795.asm:136 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A8E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1A795.asm:136 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A8E8.
    case 0xC1A8EA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1A795.asm:136 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A8EB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1A795.asm:136 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A8ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1A795.asm:136 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A8ED.
    case 0xC1A8EF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1A795.asm:136 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A8F0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A795.asm:137 LDA @VIRTUAL02
    case 0xC1A8F2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A795.asm:138 INC
    case 0xC1A8F4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:139 JSR UNKNOWN_C115F4
    case 0xC1A8F5: cpu.execute_instruction<0x20>(0x0015F4, 3); return true;
    // src/unknown/C1/C1A795.asm:140 TAX
    case 0xC1A8F8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:141 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A8F9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795.asm:142 LDA #115
    case 0xC1A8FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000073, 2); else cpu.execute_instruction<0xA9>(0x009D73, 3); return true;
    // src/unknown/C1/C1A795.asm:143 STA __BSS_START__+14,X
    case 0xC1A8FD: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
    // src/unknown/C1/C1A795.asm:143 STA __BSS_START__+14,X
    // Overlapping static entry reached from 0xC1A8FB.
    case 0xC1A8FE: cpu.execute_instruction<0x0E>(0x00C200, 3); return true;
    // src/unknown/C1/C1A795.asm:144 REP #PROC_FLAGS::ACCUM8
    case 0xC1A900: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795.asm:144 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1A8FE.
    case 0xC1A901: cpu.execute_instruction<0x20>(0x0004E6, 3); return true;
    // src/unknown/C1/C1A795.asm:145 INC @VIRTUAL04
    case 0xC1A902: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C1A795.asm:147 INC @VIRTUAL02
    case 0xC1A904: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1A795.asm:149 LDA @VIRTUAL02
    case 0xC1A906: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1A795.asm:150 CMP #14
    case 0xC1A908: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/unknown/C1/C1A795.asm:150 CMP #14
    // Overlapping static entry reached from 0xC1A908.
    case 0xC1A90A: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C1/C1A795.asm:151 BCCL @UNKNOWN2
    case 0xC1A90B: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C1/C1A795.asm:151 BCCL @UNKNOWN2
    case 0xC1A90D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C1/C1A795.asm:151 BCCL @UNKNOWN2
    case 0xC1A90F: cpu.execute_instruction<0x4C>(0x00A80C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:152 LOADPTR STATUS_EQUIP_WINDOW_TEXT_13, @LOCAL00
    case 0xC1A912: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x005C82, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:152 LOADPTR STATUS_EQUIP_WINDOW_TEXT_13, @LOCAL00
    // Overlapping static entry reached from 0xC1A912.
    case 0xC1A914: cpu.execute_instruction<0x5C>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:152 LOADPTR STATUS_EQUIP_WINDOW_TEXT_13, @LOCAL00
    case 0xC1A915: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:152 LOADPTR STATUS_EQUIP_WINDOW_TEXT_13, @LOCAL00
    case 0xC1A917: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:152 LOADPTR STATUS_EQUIP_WINDOW_TEXT_13, @LOCAL00
    // Overlapping static entry reached from 0xC1A917.
    case 0xC1A919: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795.asm:152 LOADPTR STATUS_EQUIP_WINDOW_TEXT_13, @LOCAL00
    case 0xC1A91A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1A795.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A91C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1A795.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A91C.
    case 0xC1A91E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1A795.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A91F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1A795.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A921: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1A795.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1A921.
    case 0xC1A923: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1A795.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1A924: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1A795.asm:154 LDA #.LOWORD(-1)
    case 0xC1A926: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1A795.asm:154 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1A926.
    case 0xC1A928: cpu.execute_instruction<0xFF>(0x15F420, 4); return true;
    // src/unknown/C1/C1A795.asm:155 JSR UNKNOWN_C115F4
    case 0xC1A929: cpu.execute_instruction<0x20>(0x0015F4, 3); return true;
    // src/unknown/C1/C1A795.asm:156 LDY @LOCAL03
    case 0xC1A92C: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C1A795.asm:157 LDX #0
    case 0xC1A92E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A795.asm:157 LDX #0
    // Overlapping static entry reached from 0xC1A92E.
    case 0xC1A930: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1A795.asm:158 LDA #1
    case 0xC1A931: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A795.asm:158 LDA #1
    // Overlapping static entry reached from 0xC1A931.
    case 0xC1A933: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A795.asm:159 JSR UNKNOWN_C1181B
    case 0xC1A934: cpu.execute_instruction<0x20>(0x00181B, 3); return true;
    // src/unknown/C1/C1A795.asm:160 LDA @LOCAL06
    case 0xC1A937: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795.asm:161 SEP #PROC_FLAGS::ACCUM8
    case 0xC1A939: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795.asm:162 INC
    case 0xC1A93B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:163 STA CHARACTER_FOR_EQUIP_MENU
    case 0xC1A93C: cpu.execute_instruction<0x8D>(0x009CD6, 3); return true;
    // src/unknown/C1/C1A795.asm:164 REP #PROC_FLAGS::ACCUM8
    case 0xC1A93F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1A795.asm:165 LDA @LOCAL05
    case 0xC1A941: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C1A795.asm:166 CMP #1
    case 0xC1A943: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1A795.asm:166 CMP #1
    // Overlapping static entry reached from 0xC1A943.
    case 0xC1A945: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795.asm:167 BEQ @UNKNOWN12
    case 0xC1A946: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C1/C1A795.asm:168 CMP #2
    case 0xC1A948: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1A795.asm:168 CMP #2
    // Overlapping static entry reached from 0xC1A948.
    case 0xC1A94A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795.asm:169 BEQ @UNKNOWN13
    case 0xC1A94B: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C1/C1A795.asm:170 CMP #3
    case 0xC1A94D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1A795.asm:170 CMP #3
    // Overlapping static entry reached from 0xC1A94D.
    case 0xC1A94F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795.asm:171 BEQ @UNKNOWN14
    case 0xC1A950: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C1/C1A795.asm:172 CMP #4
    case 0xC1A952: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1A795.asm:172 CMP #4
    // Overlapping static entry reached from 0xC1A952.
    case 0xC1A954: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795.asm:173 BEQ @UNKNOWN15
    case 0xC1A955: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/unknown/C1/C1A795.asm:174 BRA @UNKNOWN16
    case 0xC1A957: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:176 LOADPTR UNKNOWN_C22562, @LOCAL00
    case 0xC1A959: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x002562, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:176 LOADPTR UNKNOWN_C22562, @LOCAL00
    // Overlapping static entry reached from 0xC1A959.
    case 0xC1A95B: cpu.execute_instruction<0x25>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:176 LOADPTR UNKNOWN_C22562, @LOCAL00
    case 0xC1A95C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:176 LOADPTR UNKNOWN_C22562, @LOCAL00
    // Overlapping static entry reached from 0xC1A95B.
    case 0xC1A95D: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:176 LOADPTR UNKNOWN_C22562, @LOCAL00
    case 0xC1A95E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:176 LOADPTR UNKNOWN_C22562, @LOCAL00
    // Overlapping static entry reached from 0xC1A95E.
    case 0xC1A960: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795.asm:176 LOADPTR UNKNOWN_C22562, @LOCAL00
    case 0xC1A961: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795.asm:177 JSR UNKNOWN_C11F5A
    case 0xC1A963: cpu.execute_instruction<0x20>(0x001F5A, 3); return true;
    // src/unknown/C1/C1A795.asm:178 BRA @UNKNOWN16
    case 0xC1A966: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:180 LOADPTR UNKNOWN_C225AC, @LOCAL00
    case 0xC1A968: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x0025AC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:180 LOADPTR UNKNOWN_C225AC, @LOCAL00
    // Overlapping static entry reached from 0xC1A968.
    case 0xC1A96A: cpu.execute_instruction<0x25>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:180 LOADPTR UNKNOWN_C225AC, @LOCAL00
    case 0xC1A96B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:180 LOADPTR UNKNOWN_C225AC, @LOCAL00
    // Overlapping static entry reached from 0xC1A96A.
    case 0xC1A96C: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:180 LOADPTR UNKNOWN_C225AC, @LOCAL00
    case 0xC1A96D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:180 LOADPTR UNKNOWN_C225AC, @LOCAL00
    // Overlapping static entry reached from 0xC1A96D.
    case 0xC1A96F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795.asm:180 LOADPTR UNKNOWN_C225AC, @LOCAL00
    case 0xC1A970: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795.asm:181 JSR UNKNOWN_C11F5A
    case 0xC1A972: cpu.execute_instruction<0x20>(0x001F5A, 3); return true;
    // src/unknown/C1/C1A795.asm:182 BRA @UNKNOWN16
    case 0xC1A975: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:184 LOADPTR UNKNOWN_C2260D, @LOCAL00
    case 0xC1A977: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00260D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:184 LOADPTR UNKNOWN_C2260D, @LOCAL00
    // Overlapping static entry reached from 0xC1A977.
    case 0xC1A979: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:184 LOADPTR UNKNOWN_C2260D, @LOCAL00
    case 0xC1A97A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:184 LOADPTR UNKNOWN_C2260D, @LOCAL00
    // Overlapping static entry reached from 0xC1A979.
    case 0xC1A97B: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:184 LOADPTR UNKNOWN_C2260D, @LOCAL00
    case 0xC1A97C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:184 LOADPTR UNKNOWN_C2260D, @LOCAL00
    // Overlapping static entry reached from 0xC1A97C.
    case 0xC1A97E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795.asm:184 LOADPTR UNKNOWN_C2260D, @LOCAL00
    case 0xC1A97F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795.asm:185 JSR UNKNOWN_C11F5A
    case 0xC1A981: cpu.execute_instruction<0x20>(0x001F5A, 3); return true;
    // src/unknown/C1/C1A795.asm:186 BRA @UNKNOWN16
    case 0xC1A984: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:188 LOADPTR UNKNOWN_C22673, @LOCAL00
    case 0xC1A986: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000073, 2); else cpu.execute_instruction<0xA9>(0x002673, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:188 LOADPTR UNKNOWN_C22673, @LOCAL00
    // Overlapping static entry reached from 0xC1A986.
    case 0xC1A988: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:188 LOADPTR UNKNOWN_C22673, @LOCAL00
    case 0xC1A989: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1A795.asm:188 LOADPTR UNKNOWN_C22673, @LOCAL00
    // Overlapping static entry reached from 0xC1A988.
    case 0xC1A98A: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:188 LOADPTR UNKNOWN_C22673, @LOCAL00
    case 0xC1A98B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1A795.asm:188 LOADPTR UNKNOWN_C22673, @LOCAL00
    // Overlapping static entry reached from 0xC1A98B.
    case 0xC1A98D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1A795.asm:188 LOADPTR UNKNOWN_C22673, @LOCAL00
    case 0xC1A98E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1A795.asm:189 JSR UNKNOWN_C11F5A
    case 0xC1A990: cpu.execute_instruction<0x20>(0x001F5A, 3); return true;
    // src/unknown/C1/C1A795.asm:191 LDA #1
    case 0xC1A993: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A795.asm:191 LDA #1
    // Overlapping static entry reached from 0xC1A993.
    case 0xC1A995: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1A795.asm:192 STA COMPARE_EQUIPMENT_MODE
    case 0xC1A996: cpu.execute_instruction<0x8D>(0x009CD4, 3); return true;
    // src/unknown/C1/C1A795.asm:193 JSR UNKNOWN_C193E7
    case 0xC1A999: cpu.execute_instruction<0x20>(0x0093E7, 3); return true;
    // src/unknown/C1/C1A795.asm:194 LDA #1
    case 0xC1A99C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1A795.asm:194 LDA #1
    // Overlapping static entry reached from 0xC1A99C.
    case 0xC1A99E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1A795.asm:195 JSR SELECTION_MENU
    case 0xC1A99F: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C1A795.asm:196 TAX
    case 0xC1A9A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:197 STX @LOCAL03
    case 0xC1A9A3: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C1A795.asm:198 JSR UNKNOWN_C19437
    case 0xC1A9A5: cpu.execute_instruction<0x20>(0x009437, 3); return true;
    // src/unknown/C1/C1A795.asm:199 JSR UNKNOWN_C11F8A
    case 0xC1A9A8: cpu.execute_instruction<0x20>(0x001F8A, 3); return true;
    // src/unknown/C1/C1A795.asm:200 LDX @LOCAL03
    case 0xC1A9AB: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C1A795.asm:201 CPX #.LOWORD(-1)
    case 0xC1A9AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1A795.asm:201 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1A9AD.
    case 0xC1A9AF: cpu.execute_instruction<0xFF>(0xA548D0, 4); return true;
    // src/unknown/C1/C1A795.asm:202 BNE @UNKNOWN21
    case 0xC1A9B0: cpu.execute_instruction<0xD0>(0x000048, 2); return true;
    // src/unknown/C1/C1A795.asm:203 LDA @LOCAL05
    case 0xC1A9B2: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C1A795.asm:203 LDA @LOCAL05
    // Overlapping static entry reached from 0xC1A9AF.
    case 0xC1A9B3: cpu.execute_instruction<0x1C>(0x0001C9, 3); return true;
    // src/unknown/C1/C1A795.asm:204 CMP #1
    case 0xC1A9B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1A795.asm:204 CMP #1
    // Overlapping static entry reached from 0xC1A9B4.
    case 0xC1A9B6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795.asm:205 BEQ @UNKNOWN17
    case 0xC1A9B7: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C1/C1A795.asm:206 CMP #2
    case 0xC1A9B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1A795.asm:206 CMP #2
    // Overlapping static entry reached from 0xC1A9B9.
    case 0xC1A9BB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795.asm:207 BEQ @UNKNOWN18
    case 0xC1A9BC: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C1/C1A795.asm:208 CMP #3
    case 0xC1A9BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1A795.asm:208 CMP #3
    // Overlapping static entry reached from 0xC1A9BE.
    case 0xC1A9C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795.asm:209 BEQ @UNKNOWN19
    case 0xC1A9C1: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C1/C1A795.asm:210 CMP #4
    case 0xC1A9C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1A795.asm:210 CMP #4
    // Overlapping static entry reached from 0xC1A9C3.
    case 0xC1A9C5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795.asm:211 BEQ @UNKNOWN20
    case 0xC1A9C6: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/unknown/C1/C1A795.asm:212 BRA @UNKNOWN22
    case 0xC1A9C8: cpu.execute_instruction<0x80>(0x00003B, 2); return true;
    // src/unknown/C1/C1A795.asm:214 LDX #0
    case 0xC1A9CA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A795.asm:214 LDX #0
    // Overlapping static entry reached from 0xC1A9CA.
    case 0xC1A9CC: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1A795.asm:215 LDA @LOCAL06
    case 0xC1A9CD: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795.asm:216 INC
    case 0xC1A9CF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:217 JSL CHANGE_EQUIPPED_WEAPON
    case 0xC1A9D0: cpu.execute_instruction<0x22>(0xC4577D, 4); return true;
    // src/unknown/C1/C1A795.asm:218 BRA @UNKNOWN22
    case 0xC1A9D4: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C1/C1A795.asm:220 LDX #0
    case 0xC1A9D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A795.asm:220 LDX #0
    // Overlapping static entry reached from 0xC1A9D6.
    case 0xC1A9D8: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1A795.asm:221 LDA @LOCAL06
    case 0xC1A9D9: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795.asm:222 INC
    case 0xC1A9DB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:223 JSL CHANGE_EQUIPPED_BODY
    case 0xC1A9DC: cpu.execute_instruction<0x22>(0xC457CA, 4); return true;
    // src/unknown/C1/C1A795.asm:224 BRA @UNKNOWN22
    case 0xC1A9E0: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/unknown/C1/C1A795.asm:226 LDX #0
    case 0xC1A9E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A795.asm:226 LDX #0
    // Overlapping static entry reached from 0xC1A9E2.
    case 0xC1A9E4: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1A795.asm:227 LDA @LOCAL06
    case 0xC1A9E5: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795.asm:228 INC
    case 0xC1A9E7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:229 JSL CHANGE_EQUIPPED_ARMS
    case 0xC1A9E8: cpu.execute_instruction<0x22>(0xC45815, 4); return true;
    // src/unknown/C1/C1A795.asm:230 BRA @UNKNOWN22
    case 0xC1A9EC: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C1/C1A795.asm:232 LDX #0
    case 0xC1A9EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1A795.asm:232 LDX #0
    // Overlapping static entry reached from 0xC1A9EE.
    case 0xC1A9F0: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1A795.asm:233 LDA @LOCAL06
    case 0xC1A9F1: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795.asm:234 INC
    case 0xC1A9F3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:235 JSL CHANGE_EQUIPPED_OTHER
    case 0xC1A9F4: cpu.execute_instruction<0x22>(0xC45860, 4); return true;
    // src/unknown/C1/C1A795.asm:236 BRA @UNKNOWN22
    case 0xC1A9F8: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C1/C1A795.asm:238 CPX #0
    case 0xC1A9FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C1/C1A795.asm:238 CPX #0
    // Overlapping static entry reached from 0xC1A9FA.
    case 0xC1A9FC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1A795.asm:239 BEQ @UNKNOWN22
    case 0xC1A9FD: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C1A795.asm:240 LDA @LOCAL06
    case 0xC1A9FF: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795.asm:241 INC
    case 0xC1AA01: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:242 JSR EQUIP_ITEM
    case 0xC1AA02: cpu.execute_instruction<0x20>(0x009066, 3); return true;
    // src/unknown/C1/C1A795.asm:244 LDA #WINDOW::EQUIP_MENU_ITEMLIST
    case 0xC1AA05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C1/C1A795.asm:244 LDA #WINDOW::EQUIP_MENU_ITEMLIST
    // Overlapping static entry reached from 0xC1AA05.
    case 0xC1AA07: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1A795.asm:245 JSL CLOSE_WINDOW
    case 0xC1AA08: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/unknown/C1/C1A795.asm:246 LDA @LOCAL06
    case 0xC1AA0C: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C1/C1A795.asm:247 INC
    case 0xC1AA0E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1A795.asm:248 JSL UNKNOWN_C1A778
    case 0xC1AA0F: cpu.execute_instruction<0x22>(0xC1A778, 4); return true;
    // src/unknown/C1/C1A795.asm:249 JMP @UNKNOWN0
    case 0xC1AA13: cpu.execute_instruction<0x4C>(0x00A7A3, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1A795.asm:251 END_C_FUNCTION
    case 0xC1AA16: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1A795.asm:251 END_C_FUNCTION
    case 0xC1AA17: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AA18.asm (unresolved).
bool execute_unresolved_c1_c1aa18_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AA18.asm:3 BEGIN_C_FUNCTION
    case 0xC1AA18: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AA18.asm:6 END_STACK_VARS
    case 0xC1AA1A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AA18.asm:6 END_STACK_VARS
    case 0xC1AA1B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AA18.asm:6 END_STACK_VARS
    case 0xC1AA1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AA18.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AA1C.
    case 0xC1AA1E: cpu.execute_instruction<0xFF>(0x8AA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AA18.asm:6 END_STACK_VARS
    case 0xC1AA1F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1AA18.asm:7 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1AA20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C1AA18.asm:7 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1AA20.
    case 0xC1AA22: cpu.execute_instruction<0x9C>(0x002022, 3); return true;
    // src/unknown/C1/C1AA18.asm:8 JSL UNKNOWN_C20A20
    case 0xC1AA23: cpu.execute_instruction<0x22>(0xC20A20, 4); return true;
    // src/unknown/C1/C1AA18.asm:8 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC1AA22.
    case 0xC1AA25: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1AA18.asm:8 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC1AA25.
    case 0xC1AA26: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1AA18.asm:9 CREATE_WINDOW_NEAR #WINDOW::CARRIED_MONEY
    case 0xC1AA27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1AA18.asm:9 CREATE_WINDOW_NEAR #WINDOW::CARRIED_MONEY
    // Overlapping static entry reached from 0xC1AA26.
    case 0xC1AA28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1AA18.asm:9 CREATE_WINDOW_NEAR #WINDOW::CARRIED_MONEY
    // Overlapping static entry reached from 0xC1AA27.
    case 0xC1AA29: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1AA18.asm:9 CREATE_WINDOW_NEAR #WINDOW::CARRIED_MONEY
    case 0xC1AA2A: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1AA18.asm:10 LDA #5
    case 0xC1AA2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C1/C1AA18.asm:10 LDA #5
    // Overlapping static entry reached from 0xC1AA2D.
    case 0xC1AA2F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AA18.asm:11 JSR UNKNOWN_C10EB4
    case 0xC1AA30: cpu.execute_instruction<0x20>(0x000EB4, 3); return true;
    // src/unknown/C1/C1AA18.asm:12 JSL SET_INSTANT_PRINTING
    case 0xC1AA33: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/unknown/C1/C1AA18.asm:13 JSR UNKNOWN_C10FA3
    case 0xC1AA37: cpu.execute_instruction<0x20>(0x000FA3, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AA18.asm:14 MOVE_INT GAME_STATE + game_state::money_carried, @VIRTUAL06
    case 0xC1AA3A: cpu.execute_instruction<0xAD>(0x009831, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AA18.asm:14 MOVE_INT GAME_STATE + game_state::money_carried, @VIRTUAL06
    case 0xC1AA3D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AA18.asm:14 MOVE_INT GAME_STATE + game_state::money_carried, @VIRTUAL06
    case 0xC1AA3F: cpu.execute_instruction<0xAD>(0x009833, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AA18.asm:14 MOVE_INT GAME_STATE + game_state::money_carried, @VIRTUAL06
    case 0xC1AA42: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AA18.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AA44: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AA18.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AA46: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AA18.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AA48: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AA18.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AA4A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1AA18.asm:16 JSL UNKNOWN_C4507A
    case 0xC1AA4C: cpu.execute_instruction<0x22>(0xC4507A, 4); return true;
    // src/unknown/C1/C1AA18.asm:17 JSL CLEAR_INSTANT_PRINTING
    case 0xC1AA50: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/unknown/C1/C1AA18.asm:18 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1AA54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C1AA18.asm:18 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1AA54.
    case 0xC1AA56: cpu.execute_instruction<0x9C>(0x00BC22, 3); return true;
    // src/unknown/C1/C1AA18.asm:19 JSL UNKNOWN_C20ABC
    case 0xC1AA57: cpu.execute_instruction<0x22>(0xC20ABC, 4); return true;
    // src/unknown/C1/C1AA18.asm:19 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1AA56.
    case 0xC1AA59: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1AA18.asm:19 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1AA59.
    case 0xC1AA5A: cpu.execute_instruction<0xC2>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AA18.asm:20 END_C_FUNCTION
    case 0xC1AA5B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AA18.asm:20 END_C_FUNCTION
    case 0xC1AA5C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AA5D.asm (unresolved).
bool execute_unresolved_c1_c1aa5d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AA5D.asm:3 BEGIN_C_FUNCTION
    case 0xC1AA5D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AA5D.asm:9 END_STACK_VARS
    case 0xC1AA5F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AA5D.asm:9 END_STACK_VARS
    case 0xC1AA60: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AA5D.asm:9 END_STACK_VARS
    case 0xC1AA61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AA5D.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AA61.
    case 0xC1AA63: cpu.execute_instruction<0xFF>(0x8AA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AA5D.asm:9 END_STACK_VARS
    case 0xC1AA64: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D.asm:10 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1AA65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C1AA5D.asm:10 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1AA65.
    case 0xC1AA67: cpu.execute_instruction<0x9C>(0x002022, 3); return true;
    // src/unknown/C1/C1AA5D.asm:11 JSL UNKNOWN_C20A20
    case 0xC1AA68: cpu.execute_instruction<0x22>(0xC20A20, 4); return true;
    // src/unknown/C1/C1AA5D.asm:11 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC1AA67.
    case 0xC1AA6A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D.asm:11 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC1AA6A.
    case 0xC1AA6B: cpu.execute_instruction<0xC2>(0x0000AD, 2); return true;
    // src/unknown/C1/C1AA5D.asm:12 LDA GAME_STATE + game_state::party_members
    case 0xC1AA6C: cpu.execute_instruction<0xAD>(0x00986F, 3); return true;
    // src/unknown/C1/C1AA5D.asm:12 LDA GAME_STATE + game_state::party_members
    // Overlapping static entry reached from 0xC1AA6B.
    case 0xC1AA6D: cpu.execute_instruction<0x6F>(0xFF2998, 4); return true;
    // src/unknown/C1/C1AA5D.asm:13 AND #$00FF
    case 0xC1AA6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AA5D.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC1AA6F.
    case 0xC1AA71: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1AA5D.asm:14 TAX
    case 0xC1AA72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D.asm:15 STX @LOCAL02
    case 0xC1AA73: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1AA5D.asm:17 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1AA75: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C1AA5D.asm:18 AND #$00FF
    case 0xC1AA78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AA5D.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC1AA78.
    case 0xC1AA7A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1AA5D.asm:19 CMP #1
    case 0xC1AA7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1AA5D.asm:19 CMP #1
    // Overlapping static entry reached from 0xC1AA7B.
    case 0xC1AA7D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1AA5D.asm:20 BNE @UNKNOWN1
    case 0xC1AA7E: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C1/C1AA5D.asm:21 LDX @LOCAL02
    case 0xC1AA80: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1AA5D.asm:22 TXA
    case 0xC1AA82: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D.asm:23 JSL UNKNOWN_C1A778
    case 0xC1AA83: cpu.execute_instruction<0x22>(0xC1A778, 4); return true;
    // src/unknown/C1/C1AA5D.asm:25 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1AA87: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C1AA5D.asm:26 AND #$00FF
    case 0xC1AA8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AA5D.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1AA8A.
    case 0xC1AA8C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1AA5D.asm:27 CMP #1
    case 0xC1AA8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1AA5D.asm:27 CMP #1
    // Overlapping static entry reached from 0xC1AA8D.
    case 0xC1AA8F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1AA5D.asm:28 BEQ @UNKNOWN2
    case 0xC1AA90: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C1/C1AA5D.asm:29 LDA #0
    case 0xC1AA92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1AA5D.asm:29 LDA #0
    // Overlapping static entry reached from 0xC1AA92.
    case 0xC1AA94: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AA5D.asm:30 JSR UNKNOWN_C193E7
    case 0xC1AA95: cpu.execute_instruction<0x20>(0x0093E7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AA5D.asm:31 LOADPTR UNKNOWN_C1A778, @LOCAL00
    case 0xC1AA98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x00A778, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AA5D.asm:31 LOADPTR UNKNOWN_C1A778, @LOCAL00
    // Overlapping static entry reached from 0xC1AA98.
    case 0xC1AA9A: cpu.execute_instruction<0xA7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1AA5D.asm:31 LOADPTR UNKNOWN_C1A778, @LOCAL00
    case 0xC1AA9B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1AA5D.asm:31 LOADPTR UNKNOWN_C1A778, @LOCAL00
    // Overlapping static entry reached from 0xC1AA9A.
    case 0xC1AA9C: cpu.execute_instruction<0x0E>(0x00C1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AA5D.asm:31 LOADPTR UNKNOWN_C1A778, @LOCAL00
    case 0xC1AA9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AA5D.asm:31 LOADPTR UNKNOWN_C1A778, @LOCAL00
    // Overlapping static entry reached from 0xC1AA9D.
    case 0xC1AA9F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1AA5D.asm:31 LOADPTR UNKNOWN_C1A778, @LOCAL00
    case 0xC1AAA0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1AA5D.asm:32 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1AAA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1AA5D.asm:32 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1AAA2.
    case 0xC1AAA4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1AA5D.asm:32 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1AAA5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1AA5D.asm:32 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1AAA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1AA5D.asm:32 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1AAA7.
    case 0xC1AAA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1AA5D.asm:32 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1AAAA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1AA5D.asm:33 LDX #1
    case 0xC1AAAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1AA5D.asm:33 LDX #1
    // Overlapping static entry reached from 0xC1AAAC.
    case 0xC1AAAE: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1AA5D.asm:34 LDA #0
    case 0xC1AAAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1AA5D.asm:34 LDA #0
    // Overlapping static entry reached from 0xC1AAAF.
    case 0xC1AAB1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AA5D.asm:35 JSR CHAR_SELECT_PROMPT
    case 0xC1AAB2: cpu.execute_instruction<0x20>(0x0027EF, 3); return true;
    // src/unknown/C1/C1AA5D.asm:36 TAX
    case 0xC1AAB5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D.asm:37 STX @LOCAL02
    case 0xC1AAB6: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1AA5D.asm:38 JSR UNKNOWN_C19437
    case 0xC1AAB8: cpu.execute_instruction<0x20>(0x009437, 3); return true;
    // src/unknown/C1/C1AA5D.asm:39 BRA @UNKNOWN3
    case 0xC1AABB: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C1/C1AA5D.asm:41 LDA GAME_STATE + game_state::party_members
    case 0xC1AABD: cpu.execute_instruction<0xAD>(0x00986F, 3); return true;
    // src/unknown/C1/C1AA5D.asm:42 AND #$00FF
    case 0xC1AAC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AA5D.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC1AAC0.
    case 0xC1AAC2: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1AA5D.asm:43 TAX
    case 0xC1AAC3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D.asm:44 STX @LOCAL02
    case 0xC1AAC4: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1AA5D.asm:45 LDA #0
    case 0xC1AAC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1AA5D.asm:45 LDA #0
    // Overlapping static entry reached from 0xC1AAC6.
    case 0xC1AAC8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1AA5D.asm:46 JSL UNKNOWN_C43573
    case 0xC1AAC9: cpu.execute_instruction<0x22>(0xC43573, 4); return true;
    // src/unknown/C1/C1AA5D.asm:48 LDX @LOCAL02
    case 0xC1AACD: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1AA5D.asm:49 BEQ @UNKNOWN4
    case 0xC1AACF: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C1/C1AA5D.asm:50 TXA
    case 0xC1AAD1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D.asm:51 JSR UNKNOWN_C1A795
    case 0xC1AAD2: cpu.execute_instruction<0x20>(0x00A795, 3); return true;
    // src/unknown/C1/C1AA5D.asm:52 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1AAD5: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C1AA5D.asm:53 AND #$00FF
    case 0xC1AAD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AA5D.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC1AAD8.
    case 0xC1AADA: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1AA5D.asm:54 CMP #1
    case 0xC1AADB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1AA5D.asm:54 CMP #1
    // Overlapping static entry reached from 0xC1AADB.
    case 0xC1AADD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1AA5D.asm:55 BNE @UNKNOWN0
    case 0xC1AADE: cpu.execute_instruction<0xD0>(0x000095, 2); return true;
    // src/unknown/C1/C1AA5D.asm:57 LDA #WINDOW::UNKNOWN2D
    case 0xC1AAE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002D, 2); else cpu.execute_instruction<0xA9>(0x00002D, 3); return true;
    // src/unknown/C1/C1AA5D.asm:57 LDA #WINDOW::UNKNOWN2D
    // Overlapping static entry reached from 0xC1AAE0.
    case 0xC1AAE2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1AA5D.asm:58 JSL CLOSE_WINDOW
    case 0xC1AAE3: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/unknown/C1/C1AA5D.asm:59 LDA #WINDOW::EQUIP_MENU
    case 0xC1AAE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1AA5D.asm:59 LDA #WINDOW::EQUIP_MENU
    // Overlapping static entry reached from 0xC1AAE7.
    case 0xC1AAE9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1AA5D.asm:60 JSL CLOSE_WINDOW
    case 0xC1AAEA: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/unknown/C1/C1AA5D.asm:61 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1AAEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C1AA5D.asm:61 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1AAEE.
    case 0xC1AAF0: cpu.execute_instruction<0x9C>(0x00BC22, 3); return true;
    // src/unknown/C1/C1AA5D.asm:62 JSL UNKNOWN_C20ABC
    case 0xC1AAF1: cpu.execute_instruction<0x22>(0xC20ABC, 4); return true;
    // src/unknown/C1/C1AA5D.asm:62 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1AAF0.
    case 0xC1AAF3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1AA5D.asm:62 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1AAF3.
    case 0xC1AAF4: cpu.execute_instruction<0xC2>(0x0000A6, 2); return true;
    // src/unknown/C1/C1AA5D.asm:63 LDX @LOCAL02
    case 0xC1AAF5: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1AA5D.asm:63 LDX @LOCAL02
    // Overlapping static entry reached from 0xC1AAF4.
    case 0xC1AAF6: cpu.execute_instruction<0x16>(0x00008A, 2); return true;
    // src/unknown/C1/C1AA5D.asm:64 TXA
    case 0xC1AAF7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AA5D.asm:65 END_C_FUNCTION
    case 0xC1AAF8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AA5D.asm:65 END_C_FUNCTION
    case 0xC1AAF9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AAFA.asm (unresolved).
bool execute_unresolved_c1_c1aafa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AAFA.asm:3 BEGIN_C_FUNCTION
    case 0xC1AAFA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AAFA.asm:10 END_STACK_VARS
    case 0xC1AAFC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AAFA.asm:10 END_STACK_VARS
    case 0xC1AAFD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AAFA.asm:10 END_STACK_VARS
    case 0xC1AAFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AAFA.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AAFE.
    case 0xC1AB00: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AAFA.asm:10 END_STACK_VARS
    case 0xC1AB01: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:11 LDA #0
    case 0xC1AB02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1AAFA.asm:11 LDA #0
    // Overlapping static entry reached from 0xC1AB02.
    case 0xC1AB04: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1AAFA.asm:12 STA @VIRTUAL02
    case 0xC1AB05: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1AAFA.asm:13 LDA #2
    case 0xC1AB07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1AAFA.asm:13 LDA #2
    // Overlapping static entry reached from 0xC1AB07.
    case 0xC1AB09: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AAFA.asm:14 JSR UNKNOWN_C193E7
    case 0xC1AB0A: cpu.execute_instruction<0x20>(0x0093E7, 3); return true;
    // src/unknown/C1/C1AAFA.asm:15 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1AB0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C1AAFA.asm:15 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1AB0D.
    case 0xC1AB0F: cpu.execute_instruction<0x9C>(0x002022, 3); return true;
    // src/unknown/C1/C1AAFA.asm:16 JSL UNKNOWN_C20A20
    case 0xC1AB10: cpu.execute_instruction<0x22>(0xC20A20, 4); return true;
    // src/unknown/C1/C1AAFA.asm:16 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC1AB0F.
    case 0xC1AB12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:16 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC1AB12.
    case 0xC1AB13: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1AAFA.asm:17 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    case 0xC1AB14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1AAFA.asm:17 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    // Overlapping static entry reached from 0xC1AB13.
    case 0xC1AB15: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1AAFA.asm:17 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    // Overlapping static entry reached from 0xC1AB14.
    case 0xC1AB16: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1AAFA.asm:17 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    case 0xC1AB17: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:18 LOADPTR STATUS_EQUIP_WINDOW_TEXT_14, @LOCAL00
    case 0xC1AB1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000087, 2); else cpu.execute_instruction<0xA9>(0x005C87, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:18 LOADPTR STATUS_EQUIP_WINDOW_TEXT_14, @LOCAL00
    // Overlapping static entry reached from 0xC1AB1A.
    case 0xC1AB1C: cpu.execute_instruction<0x5C>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1AAFA.asm:18 LOADPTR STATUS_EQUIP_WINDOW_TEXT_14, @LOCAL00
    case 0xC1AB1D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:18 LOADPTR STATUS_EQUIP_WINDOW_TEXT_14, @LOCAL00
    case 0xC1AB1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:18 LOADPTR STATUS_EQUIP_WINDOW_TEXT_14, @LOCAL00
    // Overlapping static entry reached from 0xC1AB1F.
    case 0xC1AB21: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:18 LOADPTR STATUS_EQUIP_WINDOW_TEXT_14, @LOCAL00
    case 0xC1AB22: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1AAFA.asm:19 LDX #3
    case 0xC1AB24: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/unknown/C1/C1AAFA.asm:19 LDX #3
    // Overlapping static entry reached from 0xC1AB24.
    case 0xC1AB26: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1AAFA.asm:20 LDA #5
    case 0xC1AB27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C1/C1AAFA.asm:20 LDA #5
    // Overlapping static entry reached from 0xC1AB27.
    case 0xC1AB29: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1AAFA.asm:21 JSL SET_WINDOW_TITLE
    case 0xC1AB2A: cpu.execute_instruction<0x22>(0xC2032B, 4); return true;
    // src/unknown/C1/C1AAFA.asm:22 LDY #1
    case 0xC1AB2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C1AAFA.asm:22 LDY #1
    // Overlapping static entry reached from 0xC1AB2E.
    case 0xC1AB30: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C1AAFA.asm:23 STY @LOCAL03
    case 0xC1AB31: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C1/C1AAFA.asm:24 BRA @UNKNOWN2
    case 0xC1AB33: cpu.execute_instruction<0x80>(0x00006A, 2); return true;
    // src/unknown/C1/C1AAFA.asm:26 LDA @VIRTUAL00
    case 0xC1AB35: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1AAFA.asm:27 AND #$00FF
    case 0xC1AB37: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AAFA.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1AB37.
    case 0xC1AB39: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1AAFA.asm:28 BEQ @UNKNOWN1
    case 0xC1AB3A: cpu.execute_instruction<0xF0>(0x00005E, 2); return true;
    // src/unknown/C1/C1AAFA.asm:29 LDA @LOCAL02
    case 0xC1AB3C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C1AAFA.asm:30 CLC
    case 0xC1AB3E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:31 ADC #psi_teleport_destination::event_flag
    case 0xC1AB3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/unknown/C1/C1AAFA.asm:31 ADC #psi_teleport_destination::event_flag
    // Overlapping static entry reached from 0xC1AB3F.
    case 0xC1AB41: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1AAFA.asm:32 CLC
    case 0xC1AB42: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:33 ADC @VIRTUAL06
    case 0xC1AB43: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1AAFA.asm:34 STA @VIRTUAL06
    case 0xC1AB45: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1AAFA.asm:35 LDA [@VIRTUAL06]
    case 0xC1AB47: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1AAFA.asm:36 JSL GET_EVENT_FLAG
    case 0xC1AB49: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C1/C1AAFA.asm:37 CMP #0
    case 0xC1AB4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1AAFA.asm:37 CMP #0
    // Overlapping static entry reached from 0xC1AB4D.
    case 0xC1AB4F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1AAFA.asm:38 BEQ @UNKNOWN1
    case 0xC1AB50: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AAFA.asm:42 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1AB52: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:42 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1AB54: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:42 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1AB56: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:42 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1AB58: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AAFA.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB5A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB5C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB5E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB60: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1AAFA.asm:45 LDX #.SIZEOF(psi_teleport_destination::name)
    case 0xC1AB62: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/unknown/C1/C1AAFA.asm:45 LDX #.SIZEOF(psi_teleport_destination::name)
    // Overlapping static entry reached from 0xC1AB62.
    case 0xC1AB64: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1AAFA.asm:46 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1AB65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // src/unknown/C1/C1AAFA.asm:46 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1AB65.
    case 0xC1AB67: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/unknown/C1/C1AAFA.asm:47 JSL MEMCPY16
    case 0xC1AB68: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C1/C1AAFA.asm:47 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1AB67.
    case 0xC1AB6A: cpu.execute_instruction<0x8E>(0x00E2C0, 3); return true;
    // src/unknown/C1/C1AAFA.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AB6C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1AAFA.asm:48 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1AB6A.
    case 0xC1AB6D: cpu.execute_instruction<0x20>(0x00B89C, 3); return true;
    // src/unknown/C1/C1AAFA.asm:49 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(psi_teleport_destination::name)
    case 0xC1AB6E: cpu.execute_instruction<0x9C>(0x009CB8, 3); return true;
    // src/unknown/C1/C1AAFA.asm:49 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(psi_teleport_destination::name)
    // Overlapping static entry reached from 0xC1AB6D.
    case 0xC1AB70: cpu.execute_instruction<0x9C>(0x0020C2, 3); return true;
    // src/unknown/C1/C1AAFA.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC1AB71: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AB73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AB73.
    case 0xC1AB75: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AB76: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AB78: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AB79: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AB7B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AB7C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1AAFA.asm:51 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1AB7E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1AAFA.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC1AB80: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AAFA.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB82: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB84: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB86: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AB88: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1AAFA.asm:54 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1AB8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1AAFA.asm:54 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1AB8A.
    case 0xC1AB8C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:54 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1AB8D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1AAFA.asm:54 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1AB8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1AAFA.asm:54 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1AB8F.
    case 0xC1AB91: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:54 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1AB92: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1AAFA.asm:55 LDY @LOCAL03
    case 0xC1AB94: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C1AAFA.asm:56 TYA
    case 0xC1AB96: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:57 JSR UNKNOWN_C115F4
    case 0xC1AB97: cpu.execute_instruction<0x20>(0x0015F4, 3); return true;
    // src/unknown/C1/C1AAFA.asm:59 LDY @LOCAL03
    case 0xC1AB9A: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C1AAFA.asm:60 INY
    case 0xC1AB9C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:61 STY @LOCAL03
    case 0xC1AB9D: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC1AB9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x007880, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AB9F.
    case 0xC1ABA1: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC1ABA2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC1ABA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ABA4.
    case 0xC1ABA6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:63 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC1ABA7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1AAFA.asm:64 TYA
    case 0xC1ABA9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1AAFA.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC1ABAA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001F, 2); else cpu.execute_instruction<0xA0>(0x00001F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1AAFA.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    // Overlapping static entry reached from 0xC1ABAA.
    case 0xC1ABAC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C1AAFA.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC1ABAD: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1AAFA.asm:66 STA @LOCAL02
    case 0xC1ABB1: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1AAFA.asm:67 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1ABB3: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:67 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1ABB5: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:67 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1ABB7: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1AAFA.asm:67 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1ABB9: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1AAFA.asm:68 CLC
    case 0xC1ABBB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:69 ADC @VIRTUAL0A
    case 0xC1ABBC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1AAFA.asm:70 STA @VIRTUAL0A
    case 0xC1ABBE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1AAFA.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ABC0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1AAFA.asm:72 LDA [@VIRTUAL0A]
    case 0xC1ABC2: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1AAFA.asm:73 STA @VIRTUAL00
    case 0xC1ABC4: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1AAFA.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC1ABC6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1AAFA.asm:75 LDA @VIRTUAL00
    case 0xC1ABC8: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1AAFA.asm:76 AND #$00FF
    case 0xC1ABCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AAFA.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC1ABCA.
    case 0xC1ABCC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1AAFA.asm:77 BNEL @UNKNOWN0
    case 0xC1ABCD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1AAFA.asm:77 BNEL @UNKNOWN0
    case 0xC1ABCF: cpu.execute_instruction<0x4C>(0x00AB35, 3); return true;
    // src/unknown/C1/C1AAFA.asm:78 LDA #0
    case 0xC1ABD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1AAFA.asm:78 LDA #0
    // Overlapping static entry reached from 0xC1ABD2.
    case 0xC1ABD4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AAFA.asm:79 JSR UNKNOWN_C12BD5
    case 0xC1ABD5: cpu.execute_instruction<0x20>(0x002BD5, 3); return true;
    // src/unknown/C1/C1AAFA.asm:80 CMP #0
    case 0xC1ABD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1AAFA.asm:80 CMP #0
    // Overlapping static entry reached from 0xC1ABD8.
    case 0xC1ABDA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1AAFA.asm:81 BEQ @UNKNOWN4
    case 0xC1ABDB: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C1/C1AAFA.asm:82 LDY #1
    case 0xC1ABDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C1AAFA.asm:82 LDY #1
    // Overlapping static entry reached from 0xC1ABDD.
    case 0xC1ABDF: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1AAFA.asm:83 LDX #0
    case 0xC1ABE0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1AAFA.asm:83 LDX #0
    // Overlapping static entry reached from 0xC1ABE0.
    case 0xC1ABE2: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C1/C1AAFA.asm:84 TYA
    case 0xC1ABE3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:85 JSR UNKNOWN_C1180D
    case 0xC1ABE4: cpu.execute_instruction<0x20>(0x00180D, 3); return true;
    // src/unknown/C1/C1AAFA.asm:86 LDA #1
    case 0xC1ABE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1AAFA.asm:86 LDA #1
    // Overlapping static entry reached from 0xC1ABE7.
    case 0xC1ABE9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1AAFA.asm:87 JSR SELECTION_MENU
    case 0xC1ABEA: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C1AAFA.asm:88 STA @VIRTUAL02
    case 0xC1ABED: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1AAFA.asm:90 JSR CLOSE_FOCUS_WINDOW
    case 0xC1ABEF: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/unknown/C1/C1AAFA.asm:91 JSR UNKNOWN_C19437
    case 0xC1ABF2: cpu.execute_instruction<0x20>(0x009437, 3); return true;
    // src/unknown/C1/C1AAFA.asm:92 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1ABF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C1AAFA.asm:92 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1ABF5.
    case 0xC1ABF7: cpu.execute_instruction<0x9C>(0x00BC22, 3); return true;
    // src/unknown/C1/C1AAFA.asm:93 JSL UNKNOWN_C20ABC
    case 0xC1ABF8: cpu.execute_instruction<0x22>(0xC20ABC, 4); return true;
    // src/unknown/C1/C1AAFA.asm:93 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1ABF7.
    case 0xC1ABFA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1AAFA.asm:93 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1ABFA.
    case 0xC1ABFB: cpu.execute_instruction<0xC2>(0x0000A5, 2); return true;
    // src/unknown/C1/C1AAFA.asm:94 LDA @VIRTUAL02
    case 0xC1ABFC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1AAFA.asm:94 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1ABFB.
    case 0xC1ABFD: cpu.execute_instruction<0x02>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AAFA.asm:95 END_C_FUNCTION
    case 0xC1ABFE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AAFA.asm:95 END_C_FUNCTION
    case 0xC1ABFF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AC00.asm (unresolved).
bool execute_unresolved_c1_c1ac00_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AC00.asm:3 BEGIN_C_FUNCTION
    case 0xC1AC00: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AC00.asm:8 END_STACK_VARS
    case 0xC1AC02: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AC00.asm:8 END_STACK_VARS
    case 0xC1AC03: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AC00.asm:8 END_STACK_VARS
    case 0xC1AC04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AC00.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AC04.
    case 0xC1AC06: cpu.execute_instruction<0xFF>(0x41205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AC00.asm:8 END_STACK_VARS
    case 0xC1AC07: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1AC00.asm:9 JSR UNKNOWN_C19441
    case 0xC1AC08: cpu.execute_instruction<0x20>(0x009441, 3); return true;
    // src/unknown/C1/C1AC00.asm:9 JSR UNKNOWN_C19441
    // Overlapping static entry reached from 0xC1AC06.
    case 0xC1AC0A: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // src/unknown/C1/C1AC00.asm:10 STA @LOCAL01
    case 0xC1AC0B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1AC00.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC1AC0A.
    case 0xC1AC0C: cpu.execute_instruction<0x12>(0x0000C9, 2); return true;
    // src/unknown/C1/C1AC00.asm:11 CMP #0
    case 0xC1AC0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1AC00.asm:11 CMP #0
    // Overlapping static entry reached from 0xC1AC0C.
    case 0xC1AC0E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1AC00.asm:11 CMP #0
    // Overlapping static entry reached from 0xC1AC0D.
    case 0xC1AC0F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1AC00.asm:12 BEQ @UNKNOWN0
    case 0xC1AC10: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AC00.asm:13 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL0A
    case 0xC1AC12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008F, 2); else cpu.execute_instruction<0xA9>(0x007A8F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1AC00.asm:13 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AC12.
    case 0xC1AC14: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1AC00.asm:13 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL0A
    case 0xC1AC15: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AC00.asm:13 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL0A
    case 0xC1AC17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1AC00.asm:13 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AC17.
    case 0xC1AC19: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1AC00.asm:13 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL0A
    case 0xC1AC1A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1AC00.asm:14 LDA @LOCAL01
    case 0xC1AC1C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1AC00.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    case 0xC1AC1E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001F, 2); else cpu.execute_instruction<0xA0>(0x00001F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1AC00.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    // Overlapping static entry reached from 0xC1AC1E.
    case 0xC1AC20: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C1AC00.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    case 0xC1AC21: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1AC00.asm:16 CLC
    case 0xC1AC25: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1AC00.asm:17 ADC #telephone_contact::text
    case 0xC1AC26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/unknown/C1/C1AC00.asm:17 ADC #telephone_contact::text
    // Overlapping static entry reached from 0xC1AC26.
    case 0xC1AC28: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1AC00.asm:18 CLC
    case 0xC1AC29: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1AC00.asm:19 ADC @VIRTUAL0A
    case 0xC1AC2A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1AC00.asm:20 STA @VIRTUAL0A
    case 0xC1AC2C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AC2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AC2E.
    case 0xC1AC30: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AC31: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AC33: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AC34: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AC36: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1AC00.asm:21 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AC38: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AC00.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AC3A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AC00.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AC3C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AC00.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AC3E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AC00.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AC40: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1AC00.asm:23 JSL DISPLAY_TEXT
    case 0xC1AC42: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/unknown/C1/C1AC00.asm:25 LDA @LOCAL01
    case 0xC1AC46: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AC00.asm:26 END_C_FUNCTION
    case 0xC1AC48: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AC00.asm:26 END_C_FUNCTION
    case 0xC1AC49: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AC4A.asm (unresolved).
bool execute_unresolved_c1_c1ac4a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AC4A.asm:3 BEGIN_C_FUNCTION
    case 0xC1AC4A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    case 0xC1AC4C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    case 0xC1AC4D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    case 0xC1AC4E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    case 0xC1AC4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AC4F.
    case 0xC1AC51: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    case 0xC1AC52: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1AC4A.asm:11 END_STACK_VARS
    case 0xC1AC53: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1AC4A.asm:12 STX @LOCAL03
    case 0xC1AC54: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C1AC4A.asm:12 STX @LOCAL03
    // Overlapping static entry reached from 0xC1AC51.
    case 0xC1AC55: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1AC4A.asm:13 STA @LOCAL02
    case 0xC1AC56: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AC58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x009CD7, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AC58.
    case 0xC1AC5A: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AC5B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AC5D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AC5E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AC60: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AC61: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1AC4A.asm:14 PROMOTENEARPTR BATTLE_ATTACKER_NAME, @VIRTUAL06
    case 0xC1AC63: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1AC4A.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC1AC65: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AC4A.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AC67: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AC4A.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AC69: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AC4A.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AC6B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AC4A.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1AC6D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1AC4A.asm:17 LDA @LOCAL02
    case 0xC1AC6F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1AC4A.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AC71: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1AC4A.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AC73: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1AC4A.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AC74: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1AC4A.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AC76: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1AC4A.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AC77: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1AC4A.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1AC79: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1AC4A.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC1AC7B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AC4A.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AC7D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AC4A.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AC7F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AC4A.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AC81: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AC4A.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1AC83: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1AC4A.asm:21 TXA
    case 0xC1AC85: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1AC4A.asm:22 JSL MEMCPY24
    case 0xC1AC86: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C1/C1AC4A.asm:23 LDX @LOCAL03
    case 0xC1AC8A: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C1AC4A.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AC8C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1AC4A.asm:25 STZ BATTLE_ATTACKER_NAME,X
    case 0xC1AC8E: cpu.execute_instruction<0x9E>(0x009CD7, 3); return true;
    // src/unknown/C1/C1AC4A.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC1AC91: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1AC4A.asm:28 LDA #.LOWORD(-1)
    case 0xC1AC93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1AC4A.asm:28 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1AC93.
    case 0xC1AC95: cpu.execute_instruction<0xFF>(0x96588D, 4); return true;
    // src/unknown/C1/C1AC4A.asm:29 STA ATTACKER_ENEMY_ID
    case 0xC1AC96: cpu.execute_instruction<0x8D>(0x009658, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AC4A.asm:31 END_C_FUNCTION
    case 0xC1AC99: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AC4A.asm:31 END_C_FUNCTION
    case 0xC1AC9A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AC4A_redirect.asm (unresolved).
bool execute_unresolved_c1_c1ac4a_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AC4A_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DD70: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1AC4A_redirect.asm:5 JSR UNKNOWN_C1AC4A
    case 0xC1DD72: cpu.execute_instruction<0x20>(0x00AC4A, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1AC4A_redirect.asm:6 END_C_FUNCTION
    case 0xC1DD75: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1ACA1.asm (unresolved).
bool execute_unresolved_c1_c1aca1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1ACA1.asm:3 BEGIN_C_FUNCTION
    case 0xC1ACA1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1ACA1.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC1AC9F.
    case 0xC1ACA2: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    case 0xC1ACA3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    case 0xC1ACA4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    case 0xC1ACA5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    case 0xC1ACA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1ACA6.
    case 0xC1ACA8: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    case 0xC1ACA9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1ACA1.asm:11 END_STACK_VARS
    case 0xC1ACAA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1ACA1.asm:12 STX @LOCAL03
    case 0xC1ACAB: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C1ACA1.asm:12 STX @LOCAL03
    // Overlapping static entry reached from 0xC1ACA8.
    case 0xC1ACAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1ACA1.asm:13 STA @LOCAL02
    case 0xC1ACAD: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1ACAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x009CF5, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ACAF.
    case 0xC1ACB1: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1ACB2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1ACB4: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1ACB5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1ACB7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1ACB8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1ACA1.asm:14 PROMOTENEARPTR BATTLE_TARGET_NAME, @VIRTUAL06
    case 0xC1ACBA: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1ACA1.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC1ACBC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1ACA1.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ACBE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1ACA1.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ACC0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1ACA1.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ACC2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1ACA1.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ACC4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1ACA1.asm:17 LDA @LOCAL02
    case 0xC1ACC6: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1ACA1.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1ACC8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1ACA1.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1ACCA: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1ACA1.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1ACCB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1ACA1.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1ACCD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1ACA1.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1ACCE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1ACA1.asm:18 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1ACD0: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1ACA1.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC1ACD2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1ACA1.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1ACD4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1ACA1.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1ACD6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1ACA1.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1ACD8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1ACA1.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1ACDA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1ACA1.asm:21 TXA
    case 0xC1ACDC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1ACA1.asm:22 JSL MEMCPY24
    case 0xC1ACDD: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C1/C1ACA1.asm:23 LDX @LOCAL03
    case 0xC1ACE1: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C1ACA1.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ACE3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1ACA1.asm:25 STZ BATTLE_TARGET_NAME,X
    case 0xC1ACE5: cpu.execute_instruction<0x9E>(0x009CF5, 3); return true;
    // src/unknown/C1/C1ACA1.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC1ACE8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1ACA1.asm:28 LDA #.LOWORD(-1)
    case 0xC1ACEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1ACA1.asm:28 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1ACEA.
    case 0xC1ACEC: cpu.execute_instruction<0xFF>(0x965A8D, 4); return true;
    // src/unknown/C1/C1ACA1.asm:29 STA TARGET_ENEMY_ID
    case 0xC1ACED: cpu.execute_instruction<0x8D>(0x00965A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1ACA1.asm:31 END_C_FUNCTION
    case 0xC1ACF0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1ACA1.asm:31 END_C_FUNCTION
    case 0xC1ACF1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1ACA1_redirect.asm (unresolved).
bool execute_unresolved_c1_c1aca1_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1ACA1_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DD76: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1ACA1_redirect.asm:5 JSR UNKNOWN_C1ACA1
    case 0xC1DD78: cpu.execute_instruction<0x20>(0x00ACA1, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1ACA1_redirect.asm:6 END_C_FUNCTION
    case 0xC1DD7B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1ACF8.asm (unresolved).
bool execute_unresolved_c1_c1acf8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1ACF8.asm:3 BEGIN_C_FUNCTION
    case 0xC1ACF8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1ACF8.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC1ACF6.
    case 0xC1ACF9: cpu.execute_instruction<0x31>(0x0000E2, 2); return true;
    // src/unknown/C1/C1ACF8.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ACFA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1ACF8.asm:5 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1ACF9.
    case 0xC1ACFB: cpu.execute_instruction<0x20>(0x00118D, 3); return true;
    // src/unknown/C1/C1ACF8.asm:6 STA CITEM
    case 0xC1ACFC: cpu.execute_instruction<0x8D>(0x009D11, 3); return true;
    // src/unknown/C1/C1ACF8.asm:6 STA CITEM
    // Overlapping static entry reached from 0xC1ACFB.
    case 0xC1ACFE: cpu.execute_instruction<0x9D>(0x0020C2, 3); return true;
    // src/unknown/C1/C1ACF8.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xC1ACFF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1ACF8.asm:8 END_C_FUNCTION
    case 0xC1AD01: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1ACF8_redirect.asm (unresolved).
bool execute_unresolved_c1_c1acf8_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1ACF8_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DD7C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1ACF8_redirect.asm:5 JSR UNKNOWN_C1ACF8
    case 0xC1DD7E: cpu.execute_instruction<0x20>(0x00ACF8, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1ACF8_redirect.asm:6 END_C_FUNCTION
    case 0xC1DD81: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AD02.asm (unresolved).
bool execute_unresolved_c1_c1ad02_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AD02.asm:3 BEGIN_C_FUNCTION
    case 0xC1AD02: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1AD02.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD04: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1AD02.asm:6 LDA CITEM
    case 0xC1AD06: cpu.execute_instruction<0xAD>(0x009D11, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AD02.asm:7 END_C_FUNCTION
    case 0xC1AD09: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AD0A.asm (unresolved).
bool execute_unresolved_c1_c1ad0a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AD0A.asm:3 BEGIN_C_FUNCTION
    case 0xC1AD0A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AD0A.asm:6 END_STACK_VARS
    case 0xC1AD0C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AD0A.asm:6 END_STACK_VARS
    case 0xC1AD0D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD0A.asm:6 END_STACK_VARS
    case 0xC1AD0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD0A.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AD0E.
    case 0xC1AD10: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AD0A.asm:6 END_STACK_VARS
    case 0xC1AD11: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AD0A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1AD12: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AD0A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1AD14: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AD0A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1AD16: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AD0A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1AD18: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AD0A.asm:8 MOVE_INT @VIRTUAL06, CNUM
    case 0xC1AD1A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AD0A.asm:8 MOVE_INT @VIRTUAL06, CNUM
    case 0xC1AD1C: cpu.execute_instruction<0x8D>(0x009D12, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AD0A.asm:8 MOVE_INT @VIRTUAL06, CNUM
    case 0xC1AD1F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AD0A.asm:8 MOVE_INT @VIRTUAL06, CNUM
    case 0xC1AD21: cpu.execute_instruction<0x8D>(0x009D14, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AD0A.asm:9 END_C_FUNCTION
    case 0xC1AD24: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AD0A.asm:9 END_C_FUNCTION
    case 0xC1AD25: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AD26.asm (unresolved).
bool execute_unresolved_c1_c1ad26_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AD26.asm:3 BEGIN_C_FUNCTION
    case 0xC1AD26: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AD26.asm:6 END_STACK_VARS
    case 0xC1AD28: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AD26.asm:6 END_STACK_VARS
    case 0xC1AD29: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD26.asm:6 END_STACK_VARS
    case 0xC1AD2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD26.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AD2A.
    case 0xC1AD2C: cpu.execute_instruction<0xFF>(0x12AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AD26.asm:6 END_STACK_VARS
    case 0xC1AD2D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AD26.asm:7 MOVE_INT CNUM, @VIRTUAL06
    case 0xC1AD2E: cpu.execute_instruction<0xAD>(0x009D12, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AD26.asm:7 MOVE_INT CNUM, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AD2C.
    case 0xC1AD30: cpu.execute_instruction<0x9D>(0x000685, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AD26.asm:7 MOVE_INT CNUM, @VIRTUAL06
    case 0xC1AD31: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AD26.asm:7 MOVE_INT CNUM, @VIRTUAL06
    case 0xC1AD33: cpu.execute_instruction<0xAD>(0x009D14, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AD26.asm:7 MOVE_INT CNUM, @VIRTUAL06
    case 0xC1AD36: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1AD26.asm:8 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1AD38: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1AD26.asm:8 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1AD3A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1AD26.asm:8 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1AD3C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1AD26.asm:8 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1AD3E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AD26.asm:9 END_C_FUNCTION
    case 0xC1AD40: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AD26.asm:9 END_C_FUNCTION
    case 0xC1AD41: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AD42.asm (unresolved).
bool execute_unresolved_c1_c1ad42_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AD42.asm:3 BEGIN_C_FUNCTION
    case 0xC1AD42: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AD42.asm:5 END_STACK_VARS
    case 0xC1AD44: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AD42.asm:5 END_STACK_VARS
    case 0xC1AD45: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD42.asm:5 END_STACK_VARS
    case 0xC1AD46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD42.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AD46.
    case 0xC1AD48: cpu.execute_instruction<0xFF>(0x79225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AD42.asm:5 END_STACK_VARS
    case 0xC1AD49: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1AD42.asm:6 JSL FIND_NEARBY_CHECKABLE_TPT_ENTRY
    case 0xC1AD4A: cpu.execute_instruction<0x22>(0xC04279, 4); return true;
    // src/unknown/C1/C1AD42.asm:6 JSL FIND_NEARBY_CHECKABLE_TPT_ENTRY
    // Overlapping static entry reached from 0xC1AD48.
    case 0xC1AD4C: cpu.execute_instruction<0x42>(0x0000C0, 2); return true;
    // src/unknown/C1/C1AD42.asm:7 LDA INTERACTING_NPC_ID
    case 0xC1AD4E: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // src/unknown/C1/C1AD42.asm:8 BEQ @UNKNOWN0
    case 0xC1AD51: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C1/C1AD42.asm:9 LDA INTERACTING_NPC_ID
    case 0xC1AD53: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // src/unknown/C1/C1AD42.asm:10 CMP #.LOWORD(-1)
    case 0xC1AD56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1AD42.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1AD56.
    case 0xC1AD58: cpu.execute_instruction<0xFF>(0xAD08F0, 4); return true;
    // src/unknown/C1/C1AD42.asm:11 BEQ @UNKNOWN0
    case 0xC1AD59: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C1/C1AD42.asm:12 LDA INTERACTING_NPC_ID
    case 0xC1AD5B: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // src/unknown/C1/C1AD42.asm:12 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC1AD58.
    case 0xC1AD5C: cpu.execute_instruction<0x62>(0x00C95D, 3); return true;
    // src/unknown/C1/C1AD42.asm:13 CMP #.LOWORD(-2)
    case 0xC1AD5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FE, 2); else cpu.execute_instruction<0xC9>(0x00FFFE, 3); return true;
    // src/unknown/C1/C1AD42.asm:13 CMP #.LOWORD(-2)
    // Overlapping static entry reached from 0xC1AD5C.
    case 0xC1AD5F: cpu.execute_instruction<0xFE>(0x00D0FF, 3); return true;
    // src/unknown/C1/C1AD42.asm:13 CMP #.LOWORD(-2)
    // Overlapping static entry reached from 0xC1AD5E.
    case 0xC1AD60: cpu.execute_instruction<0xFF>(0xE206D0, 4); return true;
    // src/unknown/C1/C1AD42.asm:14 BNE @UNKNOWN1
    case 0xC1AD61: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C1/C1AD42.asm:14 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC1AD5F.
    case 0xC1AD62: cpu.execute_instruction<0x06>(0x0000E2, 2); return true;
    // src/unknown/C1/C1AD42.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD63: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1AD42.asm:16 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1AD60.
    case 0xC1AD64: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C1/C1AD42.asm:17 LDA #0
    case 0xC1AD65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C1/C1AD42.asm:18 BRA @UNKNOWN2
    case 0xC1AD67: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C1/C1AD42.asm:18 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC1AD65.
    case 0xC1AD68: cpu.execute_instruction<0x12>(0x0000AD, 2); return true;
    // src/unknown/C1/C1AD42.asm:20 LDA INTERACTING_NPC_ID
    case 0xC1AD69: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // src/unknown/C1/C1AD42.asm:20 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC1AD68.
    case 0xC1AD6A: cpu.execute_instruction<0x62>(0x00855D, 3); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/unknown/C1/C1AD42.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1AD6C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/unknown/C1/C1AD42.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    // Overlapping static entry reached from 0xC1AD6A.
    case 0xC1AD6D: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/unknown/C1/C1AD42.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1AD6E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/unknown/C1/C1AD42.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1AD6F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/unknown/C1/C1AD42.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1AD70: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/unknown/C1/C1AD42.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1AD71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/unknown/C1/C1AD42.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1AD72: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1AD42.asm:22 TAX
    case 0xC1AD74: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1AD42.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AD75: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1AD42.asm:24 LDA f:NPC_CONFIG_TABLE,X
    case 0xC1AD77: cpu.execute_instruction<0xBF>(0xCF8985, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AD42.asm:26 END_C_FUNCTION
    case 0xC1AD7B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AD42.asm:26 END_C_FUNCTION
    case 0xC1AD7C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1AD7D.asm (unresolved).
bool execute_unresolved_c1_c1ad7d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1AD7D.asm:3 BEGIN_C_FUNCTION
    case 0xC1AD7D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1AD7D.asm:7 END_STACK_VARS
    case 0xC1AD7F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1AD7D.asm:7 END_STACK_VARS
    case 0xC1AD80: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD7D.asm:7 END_STACK_VARS
    case 0xC1AD81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1AD7D.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AD81.
    case 0xC1AD83: cpu.execute_instruction<0xFF>(0x7BAE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1AD7D.asm:7 END_STACK_VARS
    case 0xC1AD84: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1AD7D.asm:8 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC1AD85: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C1/C1AD7D.asm:8 LDX GAME_STATE+game_state::leader_y_coord
    // Overlapping static entry reached from 0xC1AD83.
    case 0xC1AD87: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1AD7D.asm:9 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1AD88: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C1/C1AD7D.asm:10 JSL LOAD_SECTOR_ATTRS
    case 0xC1AD8B: cpu.execute_instruction<0x22>(0xC00AA1, 4); return true;
    // src/unknown/C1/C1AD7D.asm:11 TAX
    case 0xC1AD8F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1AD7D.asm:12 STX @LOCAL00
    case 0xC1AD90: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1AD7D.asm:13 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xC1AD92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x000049, 3); return true;
    // src/unknown/C1/C1AD7D.asm:13 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xC1AD92.
    case 0xC1AD94: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1AD7D.asm:14 JSL GET_EVENT_FLAG
    case 0xC1AD95: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C1/C1AD7D.asm:15 CMP #0
    case 0xC1AD99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1AD7D.asm:15 CMP #0
    // Overlapping static entry reached from 0xC1AD99.
    case 0xC1AD9B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1AD7D.asm:16 BEQ @UNKNOWN0
    case 0xC1AD9C: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C1/C1AD7D.asm:17 LDX @LOCAL00
    case 0xC1AD9E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1AD7D.asm:18 TXA
    case 0xC1ADA0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1AD7D.asm:19 AND #$0007
    case 0xC1ADA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C1/C1AD7D.asm:19 AND #$0007
    // Overlapping static entry reached from 0xC1ADA1.
    case 0xC1ADA3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1AD7D.asm:20 BNE @UNKNOWN0
    case 0xC1ADA4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1AD7D.asm:21 LDA #ITEM::BICYCLE
    case 0xC1ADA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B0, 2); else cpu.execute_instruction<0xA9>(0x0000B0, 3); return true;
    // src/unknown/C1/C1AD7D.asm:21 LDA #ITEM::BICYCLE
    // Overlapping static entry reached from 0xC1ADA6.
    case 0xC1ADA8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1AD7D.asm:22 BRA @UNKNOWN1
    case 0xC1ADA9: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C1/C1AD7D.asm:24 LDX @LOCAL00
    case 0xC1ADAB: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1AD7D.asm:25 TXA
    case 0xC1ADAD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1AD7D.asm:26 XBA
    case 0xC1ADAE: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C1/C1AD7D.asm:27 AND #$00FF
    case 0xC1ADAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1AD7D.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1ADAF.
    case 0xC1ADB1: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1AD7D.asm:29 END_C_FUNCTION
    case 0xC1ADB2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1AD7D.asm:29 END_C_FUNCTION
    case 0xC1ADB3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1B5B6.asm (unresolved).
bool execute_unresolved_c1_c1b5b6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1B5B6.asm:3 BEGIN_C_FUNCTION
    case 0xC1B5B6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1B5B6.asm:16 END_STACK_VARS
    case 0xC1B5B8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1B5B6.asm:16 END_STACK_VARS
    case 0xC1B5B9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1B5B6.asm:16 END_STACK_VARS
    case 0xC1B5BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D7, 2); else cpu.execute_instruction<0x69>(0x00FFD7, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1B5B6.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC1B5BA.
    case 0xC1B5BC: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1B5B6.asm:16 END_STACK_VARS
    case 0xC1B5BD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B5BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:18 LDA #$00FF
    case 0xC1B5C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:19 STA @VIRTUAL01
    case 0xC1B5C2: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:19 STA @VIRTUAL01
    // Overlapping static entry reached from 0xC1B5C0.
    case 0xC1B5C3: cpu.execute_instruction<0x01>(0x0000A0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:20 LDY #0
    case 0xC1B5C4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6.asm:20 LDY #0
    // Overlapping static entry reached from 0xC1B5C3.
    case 0xC1B5C5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6.asm:20 LDY #0
    // Overlapping static entry reached from 0xC1B5C4.
    case 0xC1B5C6: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C1B5B6.asm:21 STY @LOCAL09
    case 0xC1B5C7: cpu.execute_instruction<0x84>(0x000027, 2); return true;
    // src/unknown/C1/C1B5B6.asm:22 STZ ONLY_ONE_CHARACTER_WITH_PSI
    case 0xC1B5C9: cpu.execute_instruction<0x9C>(0x009D18, 3); return true;
    // src/unknown/C1/C1B5B6.asm:24 JSR UNKNOWN_C1C3B6
    case 0xC1B5CC: cpu.execute_instruction<0x20>(0x00C3B6, 3); return true;
    // src/unknown/C1/C1B5B6.asm:26 CMP #1
    case 0xC1B5CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6.asm:26 CMP #1
    // Overlapping static entry reached from 0xC1B5CF.
    case 0xC1B5D1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:27 BNE @UNKNOWN2
    case 0xC1B5D2: cpu.execute_instruction<0xD0>(0x00002A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:28 LDA @VIRTUAL01
    case 0xC1B5D4: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:29 AND #$00FF
    case 0xC1B5D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1B5D6.
    case 0xC1B5D8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6.asm:30 BEQL @UNKNOWN36
    case 0xC1B5D9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:30 BEQL @UNKNOWN36
    case 0xC1B5DB: cpu.execute_instruction<0x4C>(0x00BAFA, 3); return true;
    // src/unknown/C1/C1B5B6.asm:31 JSR UNKNOWN_C1C373
    case 0xC1B5DE: cpu.execute_instruction<0x20>(0x00C373, 3); return true;
    // src/unknown/C1/C1B5B6.asm:32 TAX
    case 0xC1B5E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:33 DEX
    case 0xC1B5E2: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B5E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:35 LDA GAME_STATE + game_state::party_members,X
    case 0xC1B5E5: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/unknown/C1/C1B5B6.asm:36 STA @LOCAL08
    case 0xC1B5E8: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC1B5EA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:38 LDA @LOCAL08
    case 0xC1B5EC: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6.asm:39 AND #$00FF
    case 0xC1B5EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC1B5EE.
    case 0xC1B5F0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:40 JSL UNKNOWN_C1C853
    case 0xC1B5F1: cpu.execute_instruction<0x22>(0xC1C853, 4); return true;
    // src/unknown/C1/C1B5B6.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B5F5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:42 LDA #1
    case 0xC1B5F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C1/C1B5B6.asm:43 STA ONLY_ONE_CHARACTER_WITH_PSI
    case 0xC1B5F9: cpu.execute_instruction<0x8D>(0x009D18, 3); return true;
    // src/unknown/C1/C1B5B6.asm:43 STA ONLY_ONE_CHARACTER_WITH_PSI
    // Overlapping static entry reached from 0xC1B5F7.
    case 0xC1B5FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:43 STA ONLY_ONE_CHARACTER_WITH_PSI
    // Overlapping static entry reached from 0xC1B5FA.
    case 0xC1B5FB: cpu.execute_instruction<0x9D>(0x002A80, 3); return true;
    // src/unknown/C1/C1B5B6.asm:44 BRA @UNKNOWN3
    case 0xC1B5FC: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:47 LDA #0
    case 0xC1B5FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6.asm:47 LDA #0
    // Overlapping static entry reached from 0xC1B5FE.
    case 0xC1B600: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:48 JSR UNKNOWN_C193E7
    case 0xC1B601: cpu.execute_instruction<0x20>(0x0093E7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:49 LOADPTR UNKNOWN_C1C853, @LOCAL00
    case 0xC1B604: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000053, 2); else cpu.execute_instruction<0xA9>(0x00C853, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:49 LOADPTR UNKNOWN_C1C853, @LOCAL00
    // Overlapping static entry reached from 0xC1B604.
    case 0xC1B606: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6.asm:49 LOADPTR UNKNOWN_C1C853, @LOCAL00
    case 0xC1B607: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:49 LOADPTR UNKNOWN_C1C853, @LOCAL00
    case 0xC1B609: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:49 LOADPTR UNKNOWN_C1C853, @LOCAL00
    // Overlapping static entry reached from 0xC1B609.
    case 0xC1B60B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:49 LOADPTR UNKNOWN_C1C853, @LOCAL00
    case 0xC1B60C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:50 LOADPTR UNKNOWN_C1C367, @LOCAL01
    case 0xC1B60E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000067, 2); else cpu.execute_instruction<0xA9>(0x00C367, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:50 LOADPTR UNKNOWN_C1C367, @LOCAL01
    // Overlapping static entry reached from 0xC1B60E.
    case 0xC1B610: cpu.execute_instruction<0xC3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6.asm:50 LOADPTR UNKNOWN_C1C367, @LOCAL01
    case 0xC1B611: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6.asm:50 LOADPTR UNKNOWN_C1C367, @LOCAL01
    // Overlapping static entry reached from 0xC1B610.
    case 0xC1B612: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:50 LOADPTR UNKNOWN_C1C367, @LOCAL01
    case 0xC1B613: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:50 LOADPTR UNKNOWN_C1C367, @LOCAL01
    // Overlapping static entry reached from 0xC1B612.
    case 0xC1B614: cpu.execute_instruction<0xC1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:50 LOADPTR UNKNOWN_C1C367, @LOCAL01
    // Overlapping static entry reached from 0xC1B613.
    case 0xC1B615: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:50 LOADPTR UNKNOWN_C1C367, @LOCAL01
    case 0xC1B616: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1B5B6.asm:51 LDX #1
    case 0xC1B618: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6.asm:51 LDX #1
    // Overlapping static entry reached from 0xC1B618.
    case 0xC1B61A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1B5B6.asm:52 LDA #0
    case 0xC1B61B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6.asm:52 LDA #0
    // Overlapping static entry reached from 0xC1B61B.
    case 0xC1B61D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:53 JSR CHAR_SELECT_PROMPT
    case 0xC1B61E: cpu.execute_instruction<0x20>(0x0027EF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B621: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:55 STA @LOCAL08
    case 0xC1B623: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6.asm:56 JSR UNKNOWN_C19437
    case 0xC1B625: cpu.execute_instruction<0x20>(0x009437, 3); return true;
    // src/unknown/C1/C1B5B6.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC1B628: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:59 LDA @LOCAL08
    case 0xC1B62A: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6.asm:60 AND #$00FF
    case 0xC1B62C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC1B62C.
    case 0xC1B62E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1B5B6.asm:61 STA OVERWORLD_SELECTED_PSI_USER
    case 0xC1B62F: cpu.execute_instruction<0x8D>(0x009D16, 3); return true;
    // src/unknown/C1/C1B5B6.asm:62 LDA @LOCAL08
    case 0xC1B632: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6.asm:63 AND #$00FF
    case 0xC1B634: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC1B634.
    case 0xC1B636: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6.asm:64 BEQL @UNKNOWN36
    case 0xC1B637: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:64 BEQL @UNKNOWN36
    case 0xC1B639: cpu.execute_instruction<0x4C>(0x00BAFA, 3); return true;
    // src/unknown/C1/C1B5B6.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B63C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:66 LDA #$00FF
    case 0xC1B63E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:67 STA @VIRTUAL01
    case 0xC1B640: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:67 STA @VIRTUAL01
    // Overlapping static entry reached from 0xC1B63E.
    case 0xC1B641: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/unknown/C1/C1B5B6.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC1B642: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:69 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1B641.
    case 0xC1B643: cpu.execute_instruction<0x20>(0x0001A9, 3); return true;
    // src/unknown/C1/C1B5B6.asm:70 LDA #1
    case 0xC1B644: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6.asm:70 LDA #1
    // Overlapping static entry reached from 0xC1B644.
    case 0xC1B646: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:71 JSR SET_WINDOW_FOCUS
    case 0xC1B647: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/unknown/C1/C1B5B6.asm:72 LDA @VIRTUAL01
    case 0xC1B64A: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:73 AND #$00FF
    case 0xC1B64C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC1B64C.
    case 0xC1B64E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1B5B6.asm:74 CMP #$00FF
    case 0xC1B64F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:74 CMP #$00FF
    // Overlapping static entry reached from 0xC1B64F.
    case 0xC1B651: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:75 BEQ @UNKNOWN6
    case 0xC1B652: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C1/C1B5B6.asm:76 LDX #0
    case 0xC1B654: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6.asm:76 LDX #0
    // Overlapping static entry reached from 0xC1B654.
    case 0xC1B656: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:77 JSR UNKNOWN_C1CA72
    case 0xC1B657: cpu.execute_instruction<0x20>(0x00CA72, 3); return true;
    // src/unknown/C1/C1B5B6.asm:78 JSR PRINT_MENU_ITEMS
    case 0xC1B65A: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:80 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1B65D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BC, 2); else cpu.execute_instruction<0xA9>(0x00C8BC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:80 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1B65D.
    case 0xC1B65F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6.asm:80 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1B660: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:80 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1B662: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:80 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    // Overlapping static entry reached from 0xC1B662.
    case 0xC1B664: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:80 LOADPTR UNKNOWN_C1C8BC, @LOCAL00
    case 0xC1B665: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1B5B6.asm:81 JSR UNKNOWN_C11F5A
    case 0xC1B667: cpu.execute_instruction<0x20>(0x001F5A, 3); return true;
    // src/unknown/C1/C1B5B6.asm:82 LDA #1
    case 0xC1B66A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6.asm:82 LDA #1
    // Overlapping static entry reached from 0xC1B66A.
    case 0xC1B66C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:83 JSR SELECTION_MENU
    case 0xC1B66D: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C1B5B6.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B670: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:85 STA @VIRTUAL01
    case 0xC1B672: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:86 JSR UNKNOWN_C11F8A
    case 0xC1B674: cpu.execute_instruction<0x20>(0x001F8A, 3); return true;
    // src/unknown/C1/C1B5B6.asm:88 LDA @VIRTUAL01
    case 0xC1B677: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:89 AND #$00FF
    case 0xC1B679: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC1B679.
    case 0xC1B67B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6.asm:90 BEQL @UNKNOWN12
    case 0xC1B67C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:90 BEQL @UNKNOWN12
    case 0xC1B67E: cpu.execute_instruction<0x4C>(0x00B7A3, 3); return true;
    // src/unknown/C1/C1B5B6.asm:92 LDA ONLY_ONE_CHARACTER_WITH_PSI
    case 0xC1B681: cpu.execute_instruction<0xAD>(0x009D18, 3); return true;
    // src/unknown/C1/C1B5B6.asm:93 AND #$00FF
    case 0xC1B684: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:93 AND #$00FF
    // Overlapping static entry reached from 0xC1B684.
    case 0xC1B686: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:94 BNE @UNKNOWN8
    case 0xC1B687: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C1/C1B5B6.asm:95 LDX #6
    case 0xC1B689: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C1/C1B5B6.asm:95 LDX #6
    // Overlapping static entry reached from 0xC1B689.
    case 0xC1B68B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1B5B6.asm:96 LDA @VIRTUAL01
    case 0xC1B68C: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:97 AND #$00FF
    case 0xC1B68E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC1B68E.
    case 0xC1B690: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:98 JSR UNKNOWN_C1CA72
    case 0xC1B691: cpu.execute_instruction<0x20>(0x00CA72, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:101 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B694: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008A50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:101 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B694.
    case 0xC1B696: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6.asm:101 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B697: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:101 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B699: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:101 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B699.
    case 0xC1B69B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:101 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B69C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1B5B6.asm:102 LDA @VIRTUAL01
    case 0xC1B69E: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:103 AND #$00FF
    case 0xC1B6A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:103 AND #$00FF
    // Overlapping static entry reached from 0xC1B6A0.
    case 0xC1B6A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6.asm:104 STA @VIRTUAL04
    case 0xC1B6A3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:105 ASL
    case 0xC1B6A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:106 ADC @VIRTUAL04
    case 0xC1B6A6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:107 ASL
    case 0xC1B6A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:108 ADC @VIRTUAL04
    case 0xC1B6A9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:109 ASL
    case 0xC1B6AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:110 ADC @VIRTUAL04
    case 0xC1B6AC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:111 STA @LOCAL07
    case 0xC1B6AE: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C1/C1B5B6.asm:112 INC
    case 0xC1B6B0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:113 INC
    case 0xC1B6B1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:114 INC
    case 0xC1B6B2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:115 INC
    case 0xC1B6B3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1B5B6.asm:116 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B6B4: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:116 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B6B6: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:116 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B6B8: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:116 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B6BA: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6.asm:117 CLC
    case 0xC1B6BC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:118 ADC @VIRTUAL0A
    case 0xC1B6BD: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:119 STA @VIRTUAL0A
    case 0xC1B6BF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:120 LDA [@VIRTUAL0A]
    case 0xC1B6C1: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:121 STA @VIRTUAL02
    case 0xC1B6C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:122 LDA @LOCAL08
    case 0xC1B6C5: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6.asm:123 AND #$00FF
    case 0xC1B6C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:123 AND #$00FF
    // Overlapping static entry reached from 0xC1B6C7.
    case 0xC1B6C9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1B5B6.asm:124 TAX
    case 0xC1B6CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:125 STX @LOCAL06
    case 0xC1B6CB: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:126 TXA
    case 0xC1B6CD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:127 DEC
    case 0xC1B6CE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:128 LDY #.SIZEOF(char_struct)
    case 0xC1B6CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1B5B6.asm:128 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B6CF.
    case 0xC1B6D1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:129 JSL MULT168
    case 0xC1B6D2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1B5B6.asm:131 PHA
    case 0xC1B6D6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:132 LDA @VIRTUAL02
    case 0xC1B6D7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:133 STA @VIRTUAL04
    case 0xC1B6D9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:134 ASL
    case 0xC1B6DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:135 ADC @VIRTUAL04
    case 0xC1B6DC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:136 ASL
    case 0xC1B6DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:137 ASL
    case 0xC1B6DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:138 TAX
    case 0xC1B6E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:139 INX
    case 0xC1B6E1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:140 INX
    case 0xC1B6E2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:141 INX
    case 0xC1B6E3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:142 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1B6E4: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/unknown/C1/C1B5B6.asm:143 AND #$00FF
    case 0xC1B6E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:143 AND #$00FF
    // Overlapping static entry reached from 0xC1B6E8.
    case 0xC1B6EA: cpu.execute_instruction<0x00>(0x0000FA, 2); return true;
    // src/unknown/C1/C1B5B6.asm:144 PLX
    case 0xC1B6EB: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:145 CMP PARTY_CHARACTERS+char_struct::current_pp,X
    case 0xC1B6EC: cpu.execute_instruction<0xDD>(0x009A19, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:146 BLTEQ @UNKNOWN9
    case 0xC1B6EF: cpu.execute_instruction<0x90>(0x000022, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:146 BLTEQ @UNKNOWN9
    case 0xC1B6F1: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1B5B6.asm:147 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1B6F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1B5B6.asm:147 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1B6F3.
    case 0xC1B6F5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1B5B6.asm:147 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1B6F6: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1B6F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AA, 2); else cpu.execute_instruction<0xA9>(0x00FAAA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    // Overlapping static entry reached from 0xC1B6F9.
    case 0xC1B6FB: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1B6FC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1B6FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    // Overlapping static entry reached from 0xC1B6FE.
    case 0xC1B700: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1B701: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/unknown/C1/C1B5B6.asm:149 DISPLAY_TEXT_PTR MSG_BTL_PSI_CANNOT_MENU
    case 0xC1B703: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/unknown/C1/C1B5B6.asm:150 JSR CLOSE_FOCUS_WINDOW
    case 0xC1B707: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/unknown/C1/C1B5B6.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B70A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:152 LDA #0
    case 0xC1B70C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/unknown/C1/C1B5B6.asm:153 STA @VIRTUAL00
    case 0xC1B70E: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6.asm:153 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1B70C.
    case 0xC1B70F: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C1/C1B5B6.asm:154 JMP @UNKNOWN13
    case 0xC1B710: cpu.execute_instruction<0x4C>(0x00B7A9, 3); return true;
    // src/unknown/C1/C1B5B6.asm:157 LDA @LOCAL07
    case 0xC1B713: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C1/C1B5B6.asm:158 INC
    case 0xC1B715: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:159 INC
    case 0xC1B716: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:160 CLC
    case 0xC1B717: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:161 ADC @VIRTUAL06
    case 0xC1B718: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6.asm:162 STA @VIRTUAL06
    case 0xC1B71A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6.asm:163 LDA [@VIRTUAL06]
    case 0xC1B71C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6.asm:164 AND #$00FF
    case 0xC1B71E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:164 AND #$00FF
    // Overlapping static entry reached from 0xC1B71E.
    case 0xC1B720: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1B5B6.asm:165 CMP #8
    case 0xC1B721: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C1/C1B5B6.asm:165 CMP #8
    // Overlapping static entry reached from 0xC1B721.
    case 0xC1B723: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:166 BNE @UNKNOWN11
    case 0xC1B724: cpu.execute_instruction<0xD0>(0x000070, 2); return true;
    // src/unknown/C1/C1B5B6.asm:167 LDA GAME_STATE+game_state::party_npc_1
    case 0xC1B726: cpu.execute_instruction<0xAD>(0x00983A, 3); return true;
    // src/unknown/C1/C1B5B6.asm:168 AND #$00FF
    case 0xC1B729: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:168 AND #$00FF
    // Overlapping static entry reached from 0xC1B729.
    case 0xC1B72B: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1B5B6.asm:169 CMP #PARTY_MEMBER::DUNGEON_MAN
    case 0xC1B72C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C1/C1B5B6.asm:169 CMP #PARTY_MEMBER::DUNGEON_MAN
    // Overlapping static entry reached from 0xC1B72C.
    case 0xC1B72E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:170 BEQ @UNKNOWN10
    case 0xC1B72F: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/unknown/C1/C1B5B6.asm:171 LDA GAME_STATE+game_state::party_npc_2
    case 0xC1B731: cpu.execute_instruction<0xAD>(0x00983B, 3); return true;
    // src/unknown/C1/C1B5B6.asm:172 AND #$00FF
    case 0xC1B734: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC1B734.
    case 0xC1B736: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1B5B6.asm:173 CMP #PARTY_MEMBER::DUNGEON_MAN
    case 0xC1B737: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C1/C1B5B6.asm:173 CMP #PARTY_MEMBER::DUNGEON_MAN
    // Overlapping static entry reached from 0xC1B737.
    case 0xC1B739: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:174 BEQ @UNKNOWN10
    case 0xC1B73A: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/unknown/C1/C1B5B6.asm:175 LDA #EVENT_FLAG::FLG_SYS_DISTLPT
    case 0xC1B73C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F2, 2); else cpu.execute_instruction<0xA9>(0x0002F2, 3); return true;
    // src/unknown/C1/C1B5B6.asm:175 LDA #EVENT_FLAG::FLG_SYS_DISTLPT
    // Overlapping static entry reached from 0xC1B73C.
    case 0xC1B73E: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:176 JSL GET_EVENT_FLAG
    case 0xC1B73F: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C1/C1B5B6.asm:177 CMP #0
    case 0xC1B743: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6.asm:177 CMP #0
    // Overlapping static entry reached from 0xC1B743.
    case 0xC1B745: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:178 BNE @UNKNOWN10
    case 0xC1B746: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/unknown/C1/C1B5B6.asm:179 LDX GAME_STATE+game_state::walking_style
    case 0xC1B748: cpu.execute_instruction<0xAE>(0x009883, 3); return true;
    // src/unknown/C1/C1B5B6.asm:180 CPX #WALKING_STYLE::LADDER
    case 0xC1B74B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/unknown/C1/C1B5B6.asm:180 CPX #WALKING_STYLE::LADDER
    // Overlapping static entry reached from 0xC1B74B.
    case 0xC1B74D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:181 BEQ @UNKNOWN10
    case 0xC1B74E: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C1/C1B5B6.asm:182 CPX #WALKING_STYLE::ROPE
    case 0xC1B750: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/C1/C1B5B6.asm:182 CPX #WALKING_STYLE::ROPE
    // Overlapping static entry reached from 0xC1B750.
    case 0xC1B752: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:183 BEQ @UNKNOWN10
    case 0xC1B753: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:184 CPX #WALKING_STYLE::ESCALATOR
    case 0xC1B755: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000C, 2); else cpu.execute_instruction<0xE0>(0x00000C, 3); return true;
    // src/unknown/C1/C1B5B6.asm:184 CPX #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC1B755.
    case 0xC1B757: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:185 BEQ @UNKNOWN10
    case 0xC1B758: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C1/C1B5B6.asm:186 CPX #WALKING_STYLE::STAIRS
    case 0xC1B75A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000D, 2); else cpu.execute_instruction<0xE0>(0x00000D, 3); return true;
    // src/unknown/C1/C1B5B6.asm:186 CPX #WALKING_STYLE::STAIRS
    // Overlapping static entry reached from 0xC1B75A.
    case 0xC1B75C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:187 BEQ @UNKNOWN10
    case 0xC1B75D: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6.asm:188 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC1B75F: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C1/C1B5B6.asm:189 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1B762: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C1/C1B5B6.asm:190 JSL LOAD_SECTOR_ATTRS
    case 0xC1B765: cpu.execute_instruction<0x22>(0xC00AA1, 4); return true;
    // src/unknown/C1/C1B5B6.asm:191 AND #MAP_SECTOR_CONFIG::CANNOT_TELEPORT
    case 0xC1B769: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C1/C1B5B6.asm:191 AND #MAP_SECTOR_CONFIG::CANNOT_TELEPORT
    // Overlapping static entry reached from 0xC1B769.
    case 0xC1B76B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:192 BNE @UNKNOWN10
    case 0xC1B76C: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C1/C1B5B6.asm:193 JSR UNKNOWN_C1AAFA
    case 0xC1B76E: cpu.execute_instruction<0x20>(0x00AAFA, 3); return true;
    // src/unknown/C1/C1B5B6.asm:194 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B771: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:195 STA @VIRTUAL00
    case 0xC1B773: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6.asm:196 BRA @UNKNOWN13
    case 0xC1B775: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1B5B6.asm:199 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1B777: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1B5B6.asm:199 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC1B777.
    case 0xC1B779: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1B5B6.asm:199 CREATE_WINDOW_NEAR #WINDOW::TEXT_BATTLE
    case 0xC1B77A: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    case 0xC1B77D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x00C850, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    // Overlapping static entry reached from 0xC1B77D.
    case 0xC1B77F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    case 0xC1B780: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    case 0xC1B782: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    // Overlapping static entry reached from 0xC1B782.
    case 0xC1B784: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    case 0xC1B785: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/unknown/C1/C1B5B6.asm:200 DISPLAY_TEXT_PTR MSG_SYS_TLPT_NG
    case 0xC1B787: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/unknown/C1/C1B5B6.asm:201 JSR CLOSE_FOCUS_WINDOW
    case 0xC1B78B: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/unknown/C1/C1B5B6.asm:202 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B78E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:203 LDA #0
    case 0xC1B790: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/unknown/C1/C1B5B6.asm:204 STA @VIRTUAL00
    case 0xC1B792: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6.asm:204 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1B790.
    case 0xC1B793: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1B5B6.asm:205 BRA @UNKNOWN13
    case 0xC1B794: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C1/C1B5B6.asm:207 LDX @LOCAL06
    case 0xC1B796: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:208 LDA @VIRTUAL02
    case 0xC1B798: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:209 JSR DETERMINE_TARGETTING
    case 0xC1B79A: cpu.execute_instruction<0x20>(0x00ADB4, 3); return true;
    // src/unknown/C1/C1B5B6.asm:210 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B79D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:211 STA @VIRTUAL00
    case 0xC1B79F: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6.asm:212 BRA @UNKNOWN13
    case 0xC1B7A1: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6.asm:214 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B7A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:215 LDA #1
    case 0xC1B7A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/unknown/C1/C1B5B6.asm:216 STA @VIRTUAL00
    case 0xC1B7A7: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6.asm:216 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC1B7A5.
    case 0xC1B7A8: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C1/C1B5B6.asm:218 REP #PROC_FLAGS::ACCUM8
    case 0xC1B7A9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:219 LDA @VIRTUAL00
    case 0xC1B7AB: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6.asm:220 AND #$00FF
    case 0xC1B7AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:220 AND #$00FF
    // Overlapping static entry reached from 0xC1B7AD.
    case 0xC1B7AF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6.asm:221 BEQL @UNKNOWN5
    case 0xC1B7B0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:221 BEQL @UNKNOWN5
    case 0xC1B7B2: cpu.execute_instruction<0x4C>(0x00B642, 3); return true;
    // src/unknown/C1/C1B5B6.asm:222 LDA #WINDOW::UNKNOWN04
    case 0xC1B7B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C1B5B6.asm:222 LDA #WINDOW::UNKNOWN04
    // Overlapping static entry reached from 0xC1B7B5.
    case 0xC1B7B7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:223 JSL CLOSE_WINDOW
    case 0xC1B7B8: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/unknown/C1/C1B5B6.asm:224 LDA @VIRTUAL01
    case 0xC1B7BC: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:225 AND #$00FF
    case 0xC1B7BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:225 AND #$00FF
    // Overlapping static entry reached from 0xC1B7BE.
    case 0xC1B7C0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6.asm:226 BEQL @UNKNOWN0
    case 0xC1B7C1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:226 BEQL @UNKNOWN0
    case 0xC1B7C3: cpu.execute_instruction<0x4C>(0x00B5CC, 3); return true;
    // src/unknown/C1/C1B5B6.asm:227 LDA @LOCAL08
    case 0xC1B7C6: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1B5B6.asm:228 AND #$00FF
    case 0xC1B7C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:228 AND #$00FF
    // Overlapping static entry reached from 0xC1B7C8.
    case 0xC1B7CA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6.asm:229 STA @VIRTUAL04
    case 0xC1B7CB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:230 STA @LOCAL09
    case 0xC1B7CD: cpu.execute_instruction<0x85>(0x000027, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:231 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B7CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008A50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:231 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B7CF.
    case 0xC1B7D1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6.asm:231 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B7D2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:231 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B7D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:231 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B7D4.
    case 0xC1B7D6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:231 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1B7D7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1B5B6.asm:232 LDA @VIRTUAL01
    case 0xC1B7D9: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:233 AND #$00FF
    case 0xC1B7DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:233 AND #$00FF
    // Overlapping static entry reached from 0xC1B7DB.
    case 0xC1B7DD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6.asm:234 STA @VIRTUAL04
    case 0xC1B7DE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:235 ASL
    case 0xC1B7E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:236 ADC @VIRTUAL04
    case 0xC1B7E1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:237 ASL
    case 0xC1B7E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:238 ADC @VIRTUAL04
    case 0xC1B7E4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:239 ASL
    case 0xC1B7E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:240 ADC @VIRTUAL04
    case 0xC1B7E7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:241 STA @VIRTUAL02
    case 0xC1B7E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:242 LDY #1
    case 0xC1B7EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6.asm:242 LDY #1
    // Overlapping static entry reached from 0xC1B7EB.
    case 0xC1B7ED: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1B5B6.asm:243 LDA @VIRTUAL02
    case 0xC1B7EE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:244 INC
    case 0xC1B7F0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:245 INC
    case 0xC1B7F1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:246 INC
    case 0xC1B7F2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:247 INC
    case 0xC1B7F3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1B5B6.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B7F4: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B7F6: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B7F8: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B7FA: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6.asm:249 CLC
    case 0xC1B7FC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:250 ADC @VIRTUAL0A
    case 0xC1B7FD: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:251 STA @VIRTUAL0A
    case 0xC1B7FF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:252 LDA [@VIRTUAL0A]
    case 0xC1B801: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:253 STA @VIRTUAL04
    case 0xC1B803: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:254 ASL
    case 0xC1B805: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:255 ADC @VIRTUAL04
    case 0xC1B806: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:256 ASL
    case 0xC1B808: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:257 ASL
    case 0xC1B809: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:258 TAX
    case 0xC1B80A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:259 INX
    case 0xC1B80B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:260 INX
    case 0xC1B80C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:261 INX
    case 0xC1B80D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:262 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1B80E: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/unknown/C1/C1B5B6.asm:263 AND #$00FF
    case 0xC1B812: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:263 AND #$00FF
    // Overlapping static entry reached from 0xC1B812.
    case 0xC1B814: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1B5B6.asm:264 TAX
    case 0xC1B815: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:265 LDA @LOCAL09
    case 0xC1B816: cpu.execute_instruction<0xA5>(0x000027, 2); return true;
    // src/unknown/C1/C1B5B6.asm:266 STA @VIRTUAL04
    case 0xC1B818: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:267 JSL UNKNOWN_C3ED2C
    case 0xC1B81A: cpu.execute_instruction<0x22>(0xC3ED2C, 4); return true;
    // src/unknown/C1/C1B5B6.asm:268 LDA @VIRTUAL02
    case 0xC1B81E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:269 INC
    case 0xC1B820: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:270 INC
    case 0xC1B821: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1B5B6.asm:271 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B822: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:271 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B824: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:271 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B826: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:271 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1B828: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6.asm:272 CLC
    case 0xC1B82A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:273 ADC @VIRTUAL0A
    case 0xC1B82B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:274 STA @VIRTUAL0A
    case 0xC1B82D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:275 LDA [@VIRTUAL0A]
    case 0xC1B82F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:276 AND #$00FF
    case 0xC1B831: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:276 AND #$00FF
    // Overlapping static entry reached from 0xC1B831.
    case 0xC1B833: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1B5B6.asm:277 CMP #8
    case 0xC1B834: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C1/C1B5B6.asm:277 CMP #8
    // Overlapping static entry reached from 0xC1B834.
    case 0xC1B836: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:278 BNE @UNKNOWN16
    case 0xC1B837: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C1/C1B5B6.asm:279 LDA @VIRTUAL02
    case 0xC1B839: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:280 INC
    case 0xC1B83B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:281 CLC
    case 0xC1B83C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:282 ADC @VIRTUAL06
    case 0xC1B83D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6.asm:283 STA @VIRTUAL06
    case 0xC1B83F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6.asm:284 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B841: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:285 LDA [@VIRTUAL06]
    case 0xC1B843: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6.asm:286 STA @LOCAL00
    case 0xC1B845: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1B5B6.asm:287 LDA @VIRTUAL00
    case 0xC1B847: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6.asm:288 JSL SET_TELEPORT_STATE
    case 0xC1B849: cpu.execute_instruction<0x22>(0xC0DD53, 4); return true;
    // src/unknown/C1/C1B5B6.asm:289 JMP @UNKNOWN18
    case 0xC1B84D: cpu.execute_instruction<0x4C>(0x00B8E7, 3); return true;
    // src/unknown/C1/C1B5B6.asm:292 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC1B850: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x009FAC, 3); return true;
    // src/unknown/C1/C1B5B6.asm:292 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC1B850.
    case 0xC1B852: cpu.execute_instruction<0x9F>(0xA9708D, 4); return true;
    // src/unknown/C1/C1B5B6.asm:293 STA CURRENT_ATTACKER
    case 0xC1B853: cpu.execute_instruction<0x8D>(0x00A970, 3); return true;
    // src/unknown/C1/C1B5B6.asm:294 TAX
    case 0xC1B856: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:295 LDA @VIRTUAL04
    case 0xC1B857: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:296 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B859: cpu.execute_instruction<0x22>(0xC2B930, 4); return true;
    // src/unknown/C1/C1B5B6.asm:297 LDX #.SIZEOF(char_struct::name)
    case 0xC1B85D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C1/C1B5B6.asm:297 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B85D.
    case 0xC1B85F: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1B5B6.asm:298 LDA @VIRTUAL04
    case 0xC1B860: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:299 DEC
    case 0xC1B862: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:300 LDY #.SIZEOF(char_struct)
    case 0xC1B863: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1B5B6.asm:300 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B863.
    case 0xC1B865: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:301 JSL MULT168
    case 0xC1B866: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1B5B6.asm:302 CLC
    case 0xC1B86A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:303 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B86B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C1/C1B5B6.asm:303 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B86B.
    case 0xC1B86D: cpu.execute_instruction<0x99>(0x004A20, 3); return true;
    // src/unknown/C1/C1B5B6.asm:304 JSR UNKNOWN_C1AC4A
    case 0xC1B86E: cpu.execute_instruction<0x20>(0x00AC4A, 3); return true;
    // src/unknown/C1/C1B5B6.asm:304 JSR UNKNOWN_C1AC4A
    // Overlapping static entry reached from 0xC1B86D.
    case 0xC1B870: cpu.execute_instruction<0xAC>(0x0000A5, 3); return true;
    // src/unknown/C1/C1B5B6.asm:305 LDA @VIRTUAL00
    case 0xC1B871: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6.asm:306 AND #$00FF
    case 0xC1B873: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:306 AND #$00FF
    // Overlapping static entry reached from 0xC1B873.
    case 0xC1B875: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1B5B6.asm:307 TAY
    case 0xC1B876: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:308 CPY #$00FF
    case 0xC1B877: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:308 CPY #$00FF
    // Overlapping static entry reached from 0xC1B877.
    case 0xC1B879: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:309 BEQ @UNKNOWN17
    case 0xC1B87A: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C1/C1B5B6.asm:310 LDX #5
    case 0xC1B87C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C1/C1B5B6.asm:310 LDX #5
    // Overlapping static entry reached from 0xC1B87C.
    case 0xC1B87E: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C1/C1B5B6.asm:311 TYA
    case 0xC1B87F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:312 DEC
    case 0xC1B880: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:313 LDY #.SIZEOF(char_struct)
    case 0xC1B881: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1B5B6.asm:313 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B881.
    case 0xC1B883: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:314 JSL MULT168
    case 0xC1B884: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1B5B6.asm:315 CLC
    case 0xC1B888: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:316 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B889: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C1/C1B5B6.asm:316 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B889.
    case 0xC1B88B: cpu.execute_instruction<0x99>(0x00A120, 3); return true;
    // src/unknown/C1/C1B5B6.asm:317 JSR UNKNOWN_C1ACA1
    case 0xC1B88C: cpu.execute_instruction<0x20>(0x00ACA1, 3); return true;
    // src/unknown/C1/C1B5B6.asm:317 JSR UNKNOWN_C1ACA1
    // Overlapping static entry reached from 0xC1B88B.
    case 0xC1B88E: cpu.execute_instruction<0xAC>(0x0020E2, 3); return true;
    // src/unknown/C1/C1B5B6.asm:319 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B88F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:320 LDA @VIRTUAL01
    case 0xC1B891: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:321 JSR UNKNOWN_C1ACF8
    case 0xC1B893: cpu.execute_instruction<0x20>(0x00ACF8, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1B5B6.asm:323 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1B896: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1B5B6.asm:323 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1B896.
    case 0xC1B898: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1B5B6.asm:323 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1B899: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:324 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B89C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:324 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B89C.
    case 0xC1B89E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6.asm:324 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B89F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:324 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B8A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:324 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B8A1.
    case 0xC1B8A3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:324 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B8A4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6.asm:325 LDA @VIRTUAL01
    case 0xC1B8A6: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:326 AND #$00FF
    case 0xC1B8A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:326 AND #$00FF
    // Overlapping static entry reached from 0xC1B8A8.
    case 0xC1B8AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6.asm:327 STA @VIRTUAL04
    case 0xC1B8AB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:328 ASL
    case 0xC1B8AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:329 ADC @VIRTUAL04
    case 0xC1B8AE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:330 ASL
    case 0xC1B8B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:331 ADC @VIRTUAL04
    case 0xC1B8B1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:332 ASL
    case 0xC1B8B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:333 ADC @VIRTUAL04
    case 0xC1B8B4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:334 TAX
    case 0xC1B8B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:335 INX
    case 0xC1B8B7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:336 INX
    case 0xC1B8B8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:337 INX
    case 0xC1B8B9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:338 INX
    case 0xC1B8BA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:339 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1B8BB: cpu.execute_instruction<0xBF>(0xD58A50, 4); return true;
    // src/unknown/C1/C1B5B6.asm:340 STA @VIRTUAL04
    case 0xC1B8BF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:341 ASL
    case 0xC1B8C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:342 ADC @VIRTUAL04
    case 0xC1B8C2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:343 ASL
    case 0xC1B8C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:344 ASL
    case 0xC1B8C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:345 INC
    case 0xC1B8C6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:346 INC
    case 0xC1B8C7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:347 INC
    case 0xC1B8C8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:348 INC
    case 0xC1B8C9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:349 CLC
    case 0xC1B8CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:350 ADC @VIRTUAL0A
    case 0xC1B8CB: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:351 STA @VIRTUAL0A
    case 0xC1B8CD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B8CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B8CF.
    case 0xC1B8D1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1B5B6.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B8D2: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1B5B6.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B8D4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1B5B6.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B8D5: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B8D7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:352 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B8D9: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1B5B6.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B8DB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B8DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B8DF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:353 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B8E1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1B5B6.asm:354 JSL DISPLAY_TEXT
    case 0xC1B8E3: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:357 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1B8E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:357 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B8E7.
    case 0xC1B8E9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6.asm:357 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1B8EA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:357 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1B8EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:357 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B8EC.
    case 0xC1B8EE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:357 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL06
    case 0xC1B8EF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1B5B6.asm:358 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1B8F1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:358 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1B8F3: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:358 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1B8F5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:358 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1B8F7: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:359 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1B8F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008A50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:359 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B8F9.
    case 0xC1B8FB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6.asm:359 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1B8FC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:359 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1B8FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:359 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B8FE.
    case 0xC1B900: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:359 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1B901: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6.asm:360 LDA @VIRTUAL01
    case 0xC1B903: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:361 AND #$00FF
    case 0xC1B905: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:361 AND #$00FF
    // Overlapping static entry reached from 0xC1B905.
    case 0xC1B907: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6.asm:362 STA @VIRTUAL04
    case 0xC1B908: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:363 ASL
    case 0xC1B90A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:364 ADC @VIRTUAL04
    case 0xC1B90B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:365 ASL
    case 0xC1B90D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:366 ADC @VIRTUAL04
    case 0xC1B90E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:367 ASL
    case 0xC1B910: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:368 ADC @VIRTUAL04
    case 0xC1B911: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:369 INC
    case 0xC1B913: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:370 INC
    case 0xC1B914: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:371 INC
    case 0xC1B915: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:372 INC
    case 0xC1B916: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:373 CLC
    case 0xC1B917: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:374 ADC @VIRTUAL0A
    case 0xC1B918: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:375 STA @VIRTUAL0A
    case 0xC1B91A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:376 STA @LOCAL04
    case 0xC1B91C: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:377 LDA @VIRTUAL0A+2
    case 0xC1B91E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6.asm:378 STA @LOCAL04+2
    case 0xC1B920: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C1B5B6.asm:379 LDA [@VIRTUAL0A]
    case 0xC1B922: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:380 STA @VIRTUAL04
    case 0xC1B924: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:381 ASL
    case 0xC1B926: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:382 ADC @VIRTUAL04
    case 0xC1B927: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:383 ASL
    case 0xC1B929: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:384 ASL
    case 0xC1B92A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:385 CLC
    case 0xC1B92B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:386 ADC #8
    case 0xC1B92C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C1/C1B5B6.asm:386 ADC #8
    // Overlapping static entry reached from 0xC1B92C.
    case 0xC1B92E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6.asm:387 CLC
    case 0xC1B92F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:388 ADC @VIRTUAL06
    case 0xC1B930: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1B5B6.asm:389 STA @VIRTUAL06
    case 0xC1B932: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B934: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B934.
    case 0xC1B936: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1B5B6.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B937: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1B5B6.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B939: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1B5B6.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B93A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B93C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:390 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B93E: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1B5B6.asm:391 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B940: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1B5B6.asm:391 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B940.
    case 0xC1B942: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:391 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B943: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1B5B6.asm:391 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B945: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1B5B6.asm:391 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B945.
    case 0xC1B947: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:391 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B948: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C1/C1B5B6.asm:392 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B94A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C1/C1B5B6.asm:392 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B94C: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6.asm:392 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B94E: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C1/C1B5B6.asm:392 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B950: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:392 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B952: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1B5B6.asm:393 BEQL @UNKNOWN35
    case 0xC1B954: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:393 BEQL @UNKNOWN35
    case 0xC1B956: cpu.execute_instruction<0x4C>(0x00BAF5, 3); return true;
    // src/unknown/C1/C1B5B6.asm:394 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 1
    case 0xC1B959: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FA, 2); else cpu.execute_instruction<0xA2>(0x009FFA, 3); return true;
    // src/unknown/C1/C1B5B6.asm:394 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 1
    // Overlapping static entry reached from 0xC1B959.
    case 0xC1B95B: cpu.execute_instruction<0x9F>(0xA9728E, 4); return true;
    // src/unknown/C1/C1B5B6.asm:395 STX CURRENT_TARGET
    case 0xC1B95C: cpu.execute_instruction<0x8E>(0x00A972, 3); return true;
    // src/unknown/C1/C1B5B6.asm:396 LDA @VIRTUAL00
    case 0xC1B95F: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6.asm:397 AND #$00FF
    case 0xC1B961: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:397 AND #$00FF
    // Overlapping static entry reached from 0xC1B961.
    case 0xC1B963: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1B5B6.asm:398 TAY
    case 0xC1B964: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:399 CPY #$00FF
    case 0xC1B965: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:399 CPY #$00FF
    // Overlapping static entry reached from 0xC1B965.
    case 0xC1B967: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1B5B6.asm:400 BNEL @UNKNOWN30
    case 0xC1B968: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:400 BNEL @UNKNOWN30
    case 0xC1B96A: cpu.execute_instruction<0x4C>(0x00BA5F, 3); return true;
    // src/unknown/C1/C1B5B6.asm:401 LDY #0
    case 0xC1B96D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6.asm:401 LDY #0
    // Overlapping static entry reached from 0xC1B96D.
    case 0xC1B96F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C1B5B6.asm:402 STY @LOCAL06
    case 0xC1B970: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:403 JMP @UNKNOWN27
    case 0xC1B972: cpu.execute_instruction<0x4C>(0x00BA45, 3); return true;
    // src/unknown/C1/C1B5B6.asm:405 TYA
    case 0xC1B975: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:406 CLC
    case 0xC1B976: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:407 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC1B977: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006F, 2); else cpu.execute_instruction<0x69>(0x00986F, 3); return true;
    // src/unknown/C1/C1B5B6.asm:407 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC1B977.
    case 0xC1B979: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:408 STA @VIRTUAL02
    case 0xC1B97A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:409 LDX #5
    case 0xC1B97C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C1/C1B5B6.asm:409 LDX #5
    // Overlapping static entry reached from 0xC1B97C.
    case 0xC1B97E: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1B5B6.asm:410 STX @LOCAL03
    case 0xC1B97F: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6.asm:411 LDX @VIRTUAL02
    case 0xC1B981: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:412 LDA __BSS_START__,X
    case 0xC1B983: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6.asm:413 AND #$00FF
    case 0xC1B986: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC1B986.
    case 0xC1B988: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:414 DEC
    case 0xC1B989: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:415 LDY #.SIZEOF(char_struct)
    case 0xC1B98A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1B5B6.asm:415 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B98A.
    case 0xC1B98C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:416 JSL MULT168
    case 0xC1B98D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1B5B6.asm:418 CLC
    case 0xC1B991: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:419 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B992: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C1/C1B5B6.asm:419 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B992.
    case 0xC1B994: cpu.execute_instruction<0x99>(0x0018A6, 3); return true;
    // src/unknown/C1/C1B5B6.asm:420 LDX @LOCAL03
    case 0xC1B995: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6.asm:421 JSR UNKNOWN_C1ACA1
    case 0xC1B997: cpu.execute_instruction<0x20>(0x00ACA1, 3); return true;
    // src/unknown/C1/C1B5B6.asm:422 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 1
    case 0xC1B99A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FA, 2); else cpu.execute_instruction<0xA2>(0x009FFA, 3); return true;
    // src/unknown/C1/C1B5B6.asm:422 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 1
    // Overlapping static entry reached from 0xC1B99A.
    case 0xC1B99C: cpu.execute_instruction<0x9F>(0xA61886, 4); return true;
    // src/unknown/C1/C1B5B6.asm:423 STX @LOCAL03
    case 0xC1B99D: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6.asm:424 LDX @VIRTUAL02
    case 0xC1B99F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:424 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC1B99C.
    case 0xC1B9A0: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/unknown/C1/C1B5B6.asm:425 LDA __BSS_START__,X
    case 0xC1B9A1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6.asm:426 AND #$00FF
    case 0xC1B9A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:426 AND #$00FF
    // Overlapping static entry reached from 0xC1B9A4.
    case 0xC1B9A6: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1B5B6.asm:427 LDX @LOCAL03
    case 0xC1B9A7: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6.asm:428 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B9A9: cpu.execute_instruction<0x22>(0xC2B930, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:429 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B9AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:429 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B9AD.
    case 0xC1B9AF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1B5B6.asm:429 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B9B0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:429 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B9B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1B5B6.asm:429 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B9B2.
    case 0xC1B9B4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:429 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B9B5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6.asm:430 LDA @VIRTUAL01
    case 0xC1B9B7: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C1B5B6.asm:431 AND #$00FF
    case 0xC1B9B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:431 AND #$00FF
    // Overlapping static entry reached from 0xC1B9B9.
    case 0xC1B9BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6.asm:432 STA @VIRTUAL04
    case 0xC1B9BC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:433 ASL
    case 0xC1B9BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:434 ADC @VIRTUAL04
    case 0xC1B9BF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:435 ASL
    case 0xC1B9C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:436 ADC @VIRTUAL04
    case 0xC1B9C2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:437 ASL
    case 0xC1B9C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:438 ADC @VIRTUAL04
    case 0xC1B9C5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:439 TAX
    case 0xC1B9C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:440 INX
    case 0xC1B9C8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:441 INX
    case 0xC1B9C9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:442 INX
    case 0xC1B9CA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:443 INX
    case 0xC1B9CB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:444 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1B9CC: cpu.execute_instruction<0xBF>(0xD58A50, 4); return true;
    // src/unknown/C1/C1B5B6.asm:445 STA @VIRTUAL04
    case 0xC1B9D0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:446 ASL
    case 0xC1B9D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:447 ADC @VIRTUAL04
    case 0xC1B9D3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:448 ASL
    case 0xC1B9D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:449 ASL
    case 0xC1B9D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:450 CLC
    case 0xC1B9D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:451 ADC #8
    case 0xC1B9D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C1/C1B5B6.asm:451 ADC #8
    // Overlapping static entry reached from 0xC1B9D8.
    case 0xC1B9DA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6.asm:452 CLC
    case 0xC1B9DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:453 ADC @VIRTUAL0A
    case 0xC1B9DC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:454 STA @VIRTUAL0A
    case 0xC1B9DE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6.asm:455 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B9E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6.asm:455 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B9E0.
    case 0xC1B9E2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1B5B6.asm:455 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B9E3: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1B5B6.asm:455 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B9E5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1B5B6.asm:455 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B9E6: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:455 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B9E8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:455 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B9EA: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C1/C1B5B6.asm:456 PHA
    case 0xC1B9EC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1B5B6.asm:457 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B9ED: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:457 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B9EF: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:457 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B9F2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:457 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B9F4: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/unknown/C1/C1B5B6.asm:458 PLA
    case 0xC1B9F7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:459 JSL UNKNOWN_C09279
    case 0xC1B9F8: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/unknown/C1/C1B5B6.asm:460 LDA #0
    case 0xC1B9FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6.asm:460 LDA #0
    // Overlapping static entry reached from 0xC1B9FC.
    case 0xC1B9FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6.asm:461 STA @LOCAL02
    case 0xC1B9FF: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C1B5B6.asm:462 BRA @UNKNOWN24
    case 0xC1BA01: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C1/C1B5B6.asm:464 LDA @LOCAL02
    case 0xC1BA03: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C1B5B6.asm:465 STA @VIRTUAL02
    case 0xC1BA05: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:466 LDY @LOCAL06
    case 0xC1BA07: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:467 TYA
    case 0xC1BA09: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:468 LDY #.SIZEOF(char_struct)
    case 0xC1BA0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1B5B6.asm:468 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1BA0A.
    case 0xC1BA0C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:469 JSL MULT168
    case 0xC1BA0D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1B5B6.asm:470 CLC
    case 0xC1BA11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:471 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC1BA12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/unknown/C1/C1B5B6.asm:471 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC1BA12.
    case 0xC1BA14: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C1/C1B5B6.asm:472 CLC
    case 0xC1BA15: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:473 ADC @VIRTUAL02
    case 0xC1BA16: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:473 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1BA14.
    case 0xC1BA17: cpu.execute_instruction<0x02>(0x000048, 2); return true;
    // src/unknown/C1/C1B5B6.asm:474 PHA
    case 0xC1BA18: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:475 LDA @LOCAL02
    case 0xC1BA19: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C1B5B6.asm:476 CLC
    case 0xC1BA1B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:477 ADC CURRENT_TARGET
    case 0xC1BA1C: cpu.execute_instruction<0x6D>(0x00A972, 3); return true;
    // src/unknown/C1/C1B5B6.asm:478 TAX
    case 0xC1BA1F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:479 SEP #PROC_FLAGS::ACCUM8
    case 0xC1BA20: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:480 LDA __BSS_START__+29,X
    case 0xC1BA22: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/unknown/C1/C1B5B6.asm:481 PLX
    case 0xC1BA25: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:482 STA __BSS_START__,X
    case 0xC1BA26: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6.asm:483 REP #PROC_FLAGS::ACCUM8
    case 0xC1BA29: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:484 LDA @LOCAL02
    case 0xC1BA2B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C1B5B6.asm:485 INC
    case 0xC1BA2D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:486 STA @LOCAL02
    case 0xC1BA2E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C1B5B6.asm:488 STA @VIRTUAL02
    case 0xC1BA30: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:489 LDA #7
    case 0xC1BA32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C1/C1B5B6.asm:489 LDA #7
    // Overlapping static entry reached from 0xC1BA32.
    case 0xC1BA34: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6.asm:490 CLC
    case 0xC1BA35: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:491 SBC @VIRTUAL02
    case 0xC1BA36: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1B5B6.asm:492 BRANCHGTS @UNKNOWN23
    case 0xC1BA38: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:492 BRANCHGTS @UNKNOWN23
    case 0xC1BA3A: cpu.execute_instruction<0x10>(0x0000C7, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1B5B6.asm:492 BRANCHGTS @UNKNOWN23
    case 0xC1BA3C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:492 BRANCHGTS @UNKNOWN23
    case 0xC1BA3E: cpu.execute_instruction<0x30>(0x0000C3, 2); return true;
    // src/unknown/C1/C1B5B6.asm:493 LDY @LOCAL06
    case 0xC1BA40: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:494 INY
    case 0xC1BA42: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:495 STY @LOCAL06
    case 0xC1BA43: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:497 STY @VIRTUAL02
    case 0xC1BA45: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:498 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1BA47: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C1B5B6.asm:499 AND #$00FF
    case 0xC1BA4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:499 AND #$00FF
    // Overlapping static entry reached from 0xC1BA4A.
    case 0xC1BA4C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6.asm:500 CLC
    case 0xC1BA4D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:501 SBC @VIRTUAL02
    case 0xC1BA4E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C1/C1B5B6.asm:502 JUMPGTS @UNKNOWN22
    case 0xC1BA50: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C1/C1B5B6.asm:502 JUMPGTS @UNKNOWN22
    case 0xC1BA52: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:502 JUMPGTS @UNKNOWN22
    case 0xC1BA54: cpu.execute_instruction<0x4C>(0x00B975, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C1/C1B5B6.asm:502 JUMPGTS @UNKNOWN22
    case 0xC1BA57: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:502 JUMPGTS @UNKNOWN22
    case 0xC1BA59: cpu.execute_instruction<0x4C>(0x00B975, 3); return true;
    // src/unknown/C1/C1B5B6.asm:503 JMP @UNKNOWN34
    case 0xC1BA5C: cpu.execute_instruction<0x4C>(0x00BAF1, 3); return true;
    // src/unknown/C1/C1B5B6.asm:505 TYA
    case 0xC1BA5F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:506 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1BA60: cpu.execute_instruction<0x22>(0xC2B930, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1B5B6.asm:507 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC1BA64: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:507 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC1BA66: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:507 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC1BA68: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:507 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC1BA6A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6.asm:508 LDA [@VIRTUAL0A]
    case 0xC1BA6C: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:509 STA @VIRTUAL04
    case 0xC1BA6E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:510 ASL
    case 0xC1BA70: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:511 ADC @VIRTUAL04
    case 0xC1BA71: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1B5B6.asm:512 ASL
    case 0xC1BA73: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:513 ASL
    case 0xC1BA74: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:514 CLC
    case 0xC1BA75: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:515 ADC #8
    case 0xC1BA76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C1/C1B5B6.asm:515 ADC #8
    // Overlapping static entry reached from 0xC1BA76.
    case 0xC1BA78: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1B5B6.asm:516 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC1BA79: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:516 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC1BA7B: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:516 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC1BA7D: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:516 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC1BA7F: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1B5B6.asm:517 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1BA81: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:517 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1BA83: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:517 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1BA85: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:517 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1BA87: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1B5B6.asm:518 CLC
    case 0xC1BA89: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:519 ADC @VIRTUAL0A
    case 0xC1BA8A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:520 STA @VIRTUAL0A
    case 0xC1BA8C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6.asm:521 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BA8E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1B5B6.asm:521 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BA8E.
    case 0xC1BA90: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1B5B6.asm:521 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BA91: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1B5B6.asm:521 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BA93: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1B5B6.asm:521 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BA94: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:521 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BA96: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:521 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BA98: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C1/C1B5B6.asm:522 PHA
    case 0xC1BA9A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1B5B6.asm:523 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BA9B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:523 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BA9D: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:523 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BAA0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1B5B6.asm:523 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BAA2: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/unknown/C1/C1B5B6.asm:524 PLA
    case 0xC1BAA5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:525 JSL UNKNOWN_C09279
    case 0xC1BAA6: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/unknown/C1/C1B5B6.asm:526 LDA #0
    case 0xC1BAAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6.asm:526 LDA #0
    // Overlapping static entry reached from 0xC1BAAA.
    case 0xC1BAAC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1B5B6.asm:527 STA @LOCAL06
    case 0xC1BAAD: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:528 BRA @UNKNOWN32
    case 0xC1BAAF: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/unknown/C1/C1B5B6.asm:530 LDA @LOCAL06
    case 0xC1BAB1: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:531 STA @VIRTUAL02
    case 0xC1BAB3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:532 LDA @VIRTUAL00
    case 0xC1BAB5: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1B5B6.asm:533 AND #$00FF
    case 0xC1BAB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1B5B6.asm:533 AND #$00FF
    // Overlapping static entry reached from 0xC1BAB7.
    case 0xC1BAB9: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1B5B6.asm:534 DEC
    case 0xC1BABA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:535 LDY #.SIZEOF(char_struct)
    case 0xC1BABB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1B5B6.asm:535 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1BABB.
    case 0xC1BABD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:536 JSL MULT168
    case 0xC1BABE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1B5B6.asm:537 CLC
    case 0xC1BAC2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:538 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC1BAC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/unknown/C1/C1B5B6.asm:538 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC1BAC3.
    case 0xC1BAC5: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C1/C1B5B6.asm:539 CLC
    case 0xC1BAC6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:540 ADC @VIRTUAL02
    case 0xC1BAC7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:540 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1BAC5.
    case 0xC1BAC8: cpu.execute_instruction<0x02>(0x000048, 2); return true;
    // src/unknown/C1/C1B5B6.asm:541 PHA
    case 0xC1BAC9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:542 LDA @LOCAL06
    case 0xC1BACA: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:543 CLC
    case 0xC1BACC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:544 ADC CURRENT_TARGET
    case 0xC1BACD: cpu.execute_instruction<0x6D>(0x00A972, 3); return true;
    // src/unknown/C1/C1B5B6.asm:545 TAX
    case 0xC1BAD0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:546 SEP #PROC_FLAGS::ACCUM8
    case 0xC1BAD1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:547 LDA __BSS_START__+29,X
    case 0xC1BAD3: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/unknown/C1/C1B5B6.asm:548 PLX
    case 0xC1BAD6: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:549 STA __BSS_START__,X
    case 0xC1BAD7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1B5B6.asm:550 REP #PROC_FLAGS::ACCUM8
    case 0xC1BADA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1B5B6.asm:551 LDA @LOCAL06
    case 0xC1BADC: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:552 INC
    case 0xC1BADE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:553 STA @LOCAL06
    case 0xC1BADF: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:555 STA @VIRTUAL02
    case 0xC1BAE1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1B5B6.asm:556 LDA #7
    case 0xC1BAE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C1/C1B5B6.asm:556 LDA #7
    // Overlapping static entry reached from 0xC1BAE3.
    case 0xC1BAE5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1B5B6.asm:557 CLC
    case 0xC1BAE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1B5B6.asm:558 SBC @VIRTUAL02
    case 0xC1BAE7: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1B5B6.asm:559 BRANCHGTS @UNKNOWN31
    case 0xC1BAE9: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:559 BRANCHGTS @UNKNOWN31
    case 0xC1BAEB: cpu.execute_instruction<0x10>(0x0000C4, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1B5B6.asm:559 BRANCHGTS @UNKNOWN31
    case 0xC1BAED: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1B5B6.asm:559 BRANCHGTS @UNKNOWN31
    case 0xC1BAEF: cpu.execute_instruction<0x30>(0x0000C0, 2); return true;
    // src/unknown/C1/C1B5B6.asm:561 JSL UNKNOWN_C3EE4D
    case 0xC1BAF1: cpu.execute_instruction<0x22>(0xC3EE4D, 4); return true;
    // src/unknown/C1/C1B5B6.asm:563 LDY #1
    case 0xC1BAF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6.asm:563 LDY #1
    // Overlapping static entry reached from 0xC1BAF5.
    case 0xC1BAF7: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C1B5B6.asm:564 STY @LOCAL09
    case 0xC1BAF8: cpu.execute_instruction<0x84>(0x000027, 2); return true;
    // src/unknown/C1/C1B5B6.asm:566 LDA #WINDOW::TEXT_STANDARD
    case 0xC1BAFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1B5B6.asm:566 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1BAFA.
    case 0xC1BAFC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1B5B6.asm:567 JSL CLOSE_WINDOW
    case 0xC1BAFD: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/unknown/C1/C1B5B6.asm:568 LDY @LOCAL09
    case 0xC1BB01: cpu.execute_instruction<0xA4>(0x000027, 2); return true;
    // src/unknown/C1/C1B5B6.asm:569 TYA
    case 0xC1BB03: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1B5B6.asm:570 END_C_FUNCTION
    case 0xC1BB04: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1B5B6.asm:570 END_C_FUNCTION
    case 0xC1BB05: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1BB06.asm (unresolved).
bool execute_unresolved_c1_c1bb06_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1BB06.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1BB06: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    case 0xC1BB08: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    case 0xC1BB09: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    case 0xC1BB0A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    case 0xC1BB0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BB0B.
    case 0xC1BB0D: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    case 0xC1BB0E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1BB06.asm:8 END_STACK_VARS
    case 0xC1BB0F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1BB06.asm:9 TAX
    case 0xC1BB10: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1BB06.asm:10 STX @LOCAL01
    case 0xC1BB11: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1BB06.asm:12 LDA LAST_SELECTED_PSI_DESCRIPTION
    case 0xC1BB13: cpu.execute_instruction<0xAD>(0x009D19, 3); return true;
    // src/unknown/C1/C1BB06.asm:13 CMP #$00FF
    case 0xC1BB16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1BB06.asm:13 CMP #$00FF
    // Overlapping static entry reached from 0xC1BB16.
    case 0xC1BB18: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1BB06.asm:14 BEQ @UNKNOWN0
    case 0xC1BB19: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1BB06.asm:15 CPX LAST_SELECTED_PSI_DESCRIPTION
    case 0xC1BB1B: cpu.execute_instruction<0xEC>(0x009D19, 3); return true;
    // src/unknown/C1/C1BB06.asm:16 BEQ @UNKNOWN1
    case 0xC1BB1E: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C1/C1BB06.asm:19 TXA
    case 0xC1BB20: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1BB06.asm:20 JSL UNKNOWN_C1C8BC
    case 0xC1BB21: cpu.execute_instruction<0x22>(0xC1C8BC, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1BB06.asm:21 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    case 0xC1BB25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1BB06.asm:21 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    // Overlapping static entry reached from 0xC1BB25.
    case 0xC1BB27: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1BB06.asm:21 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    case 0xC1BB28: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1BB06.asm:25 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC1BB2B: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // src/unknown/C1/C1BB06.asm:26 LDX @LOCAL01
    case 0xC1BB2F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1BB06.asm:27 STX LAST_SELECTED_PSI_DESCRIPTION
    case 0xC1BB31: cpu.execute_instruction<0x8E>(0x009D19, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB06.asm:29 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1BB34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008A50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB06.asm:29 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1BB34.
    case 0xC1BB36: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1BB06.asm:29 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1BB37: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB06.asm:29 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1BB39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB06.asm:29 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1BB39.
    case 0xC1BB3B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1BB06.asm:29 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL0A
    case 0xC1BB3C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1BB06.asm:33 TXA
    case 0xC1BB3E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1BB3F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1BB41: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1BB42: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1BB44: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1BB45: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    // Overlapping static entry reached from 0xC1BBBF.
    case 0xC1BB46: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1BB47: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1BB06.asm:34 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1BB48: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1BB06.asm:35 CLC
    case 0xC1BB4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1BB06.asm:36 ADC #11
    case 0xC1BB4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/unknown/C1/C1BB06.asm:36 ADC #11
    // Overlapping static entry reached from 0xC1BB4B.
    case 0xC1BB4D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1BB06.asm:37 CLC
    case 0xC1BB4E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1BB06.asm:38 ADC @VIRTUAL0A
    case 0xC1BB4F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1BB06.asm:39 STA @VIRTUAL0A
    case 0xC1BB51: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BB53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BB53.
    case 0xC1BB55: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BB56: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BB58: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BB59: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BB5B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1BB06.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1BB5D: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1BB06.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BB5F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1BB06.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BB61: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1BB06.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BB63: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1BB06.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BB65: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1BB06.asm:42 JSL DISPLAY_TEXT
    case 0xC1BB67: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/unknown/C1/C1BB06.asm:43 JSR CLEAR_INSTANT_PRINTING
    case 0xC1BB6B: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1BB06.asm:45 END_C_FUNCTION
    case 0xC1BB6F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1BB06.asm:45 END_C_FUNCTION
    case 0xC1BB70: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1BB71.asm (unresolved).
bool execute_unresolved_c1_c1bb71_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1BB71.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1BB71: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1BB71.asm:10 END_STACK_VARS
    case 0xC1BB73: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1BB71.asm:10 END_STACK_VARS
    case 0xC1BB74: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1BB71.asm:10 END_STACK_VARS
    case 0xC1BB75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1BB71.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BB75.
    case 0xC1BB77: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1BB71.asm:10 END_STACK_VARS
    case 0xC1BB78: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71.asm:12 LDA #1
    case 0xC1BB79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1BB79.
    case 0xC1BB7B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1BB71.asm:13 STA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1BB7C: cpu.execute_instruction<0x8D>(0x005E71, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:15 LOADPTR UNKNOWN_C1952F, @LOCAL00
    case 0xC1BB7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00952F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:15 LOADPTR UNKNOWN_C1952F, @LOCAL00
    // Overlapping static entry reached from 0xC1BB7F.
    case 0xC1BB81: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1BB71.asm:15 LOADPTR UNKNOWN_C1952F, @LOCAL00
    case 0xC1BB82: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1BB71.asm:15 LOADPTR UNKNOWN_C1952F, @LOCAL00
    // Overlapping static entry reached from 0xC1BB81.
    case 0xC1BB83: cpu.execute_instruction<0x0E>(0x00C1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:15 LOADPTR UNKNOWN_C1952F, @LOCAL00
    case 0xC1BB84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:15 LOADPTR UNKNOWN_C1952F, @LOCAL00
    // Overlapping static entry reached from 0xC1BB84.
    case 0xC1BB86: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1BB71.asm:15 LOADPTR UNKNOWN_C1952F, @LOCAL00
    case 0xC1BB87: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71.asm:16 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BB89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71.asm:16 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1BB89.
    case 0xC1BB8B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1BB71.asm:16 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BB8C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71.asm:16 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BB8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71.asm:16 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1BB8E.
    case 0xC1BB90: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1BB71.asm:16 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BB91: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1BB71.asm:17 LDX #1
    case 0xC1BB93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71.asm:17 LDX #1
    // Overlapping static entry reached from 0xC1BB93.
    case 0xC1BB95: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1BB71.asm:18 LDA #0
    case 0xC1BB96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BB71.asm:18 LDA #0
    // Overlapping static entry reached from 0xC1BB96.
    case 0xC1BB98: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71.asm:19 JSR CHAR_SELECT_PROMPT
    case 0xC1BB99: cpu.execute_instruction<0x20>(0x0027EF, 3); return true;
    // src/unknown/C1/C1BB71.asm:20 TAX
    case 0xC1BB9C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BB71.asm:21 BEQL @UNKNOWN9
    case 0xC1BB9D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BB71.asm:21 BEQL @UNKNOWN9
    case 0xC1BB9F: cpu.execute_instruction<0x4C>(0x00BCA2, 3); return true;
    // src/unknown/C1/C1BB71.asm:22 CPX #3
    case 0xC1BBA2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/unknown/C1/C1BB71.asm:22 CPX #3
    // Overlapping static entry reached from 0xC1BBA2.
    case 0xC1BBA4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1BB71.asm:23 BEQ @UNKNOWN0
    case 0xC1BBA5: cpu.execute_instruction<0xF0>(0x0000D2, 2); return true;
    // src/unknown/C1/C1BB71.asm:24 LDA #0
    case 0xC1BBA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BB71.asm:24 LDA #0
    // Overlapping static entry reached from 0xC1BBA7.
    case 0xC1BBA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1BB71.asm:25 STA @VIRTUAL02
    case 0xC1BBAA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1BB71.asm:26 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2E
    case 0xC1BBAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00002E, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1BB71.asm:26 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2E
    // Overlapping static entry reached from 0xC14164.
    case 0xC1BBAD: cpu.execute_instruction<0x2E>(0x002000, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1BB71.asm:26 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2E
    // Overlapping static entry reached from 0xC1BBAC.
    case 0xC1BBAE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1BB71.asm:26 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2E
    case 0xC1BBAF: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1BB71.asm:26 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2E
    // Overlapping static entry reached from 0xC1BBAD.
    case 0xC1BBB0: cpu.execute_instruction<0xEE>(0x00A904, 3); return true;
    // src/unknown/C1/C1BB71.asm:27 LDA #0
    case 0xC1BBB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BB71.asm:27 LDA #0
    // Overlapping static entry reached from 0xC1BBB0.
    case 0xC1BBB3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1BB71.asm:27 LDA #0
    // Overlapping static entry reached from 0xC1BBB2.
    case 0xC1BBB4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1BB71.asm:28 STA @LOCAL04
    case 0xC1BBB5: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C1BB71.asm:29 BRA @UNKNOWN4
    case 0xC1BBB7: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C1/C1BB71.asm:31 TAX
    case 0xC1BBB9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71.asm:32 INX
    case 0xC1BBBA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71.asm:33 STX @LOCAL03
    case 0xC1BBBB: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:34 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1BBBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x00F090, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:34 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BBBD.
    case 0xC1BBBF: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1BB71.asm:34 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1BBC0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1BB71.asm:34 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BBBF.
    case 0xC1BBC1: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:34 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1BBC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:34 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BBC1.
    case 0xC1BBC3: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:34 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BBC2.
    case 0xC1BBC4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1BB71.asm:34 LOADPTR PSI_CATEGORIES, @VIRTUAL06
    case 0xC1BBC5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1BB71.asm:35 LDA @LOCAL04
    case 0xC1BBC7: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C1BB71.asm:36 ASL
    case 0xC1BBC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71.asm:37 ASL
    case 0xC1BBCA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71.asm:38 ASL
    case 0xC1BBCB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71.asm:39 CLC
    case 0xC1BBCC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71.asm:40 ADC @VIRTUAL06
    case 0xC1BBCD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1BB71.asm:41 STA @VIRTUAL06
    case 0xC1BBCF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1BB71.asm:42 STA @LOCAL00
    case 0xC1BBD1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1BB71.asm:43 LDA @VIRTUAL06+2
    case 0xC1BBD3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1BB71.asm:44 STA @LOCAL00+2
    case 0xC1BBD5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BBD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1BBD7.
    case 0xC1BBD9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1BB71.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BBDA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BBDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1BB71.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1BBDC.
    case 0xC1BBDE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1BB71.asm:45 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1BBDF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1BB71.asm:46 TXA
    case 0xC1BBE1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71.asm:47 JSR UNKNOWN_C115F4
    case 0xC1BBE2: cpu.execute_instruction<0x20>(0x0015F4, 3); return true;
    // src/unknown/C1/C1BB71.asm:48 LDX @LOCAL03
    case 0xC1BBE5: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C1BB71.asm:49 TXA
    case 0xC1BBE7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71.asm:50 STA @LOCAL04
    case 0xC1BBE8: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C1BB71.asm:52 CMP #4
    case 0xC1BBEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1BB71.asm:52 CMP #4
    // Overlapping static entry reached from 0xC1BBEA.
    case 0xC1BBEC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C1BB71.asm:53 BCC @UNKNOWN3
    case 0xC1BBED: cpu.execute_instruction<0x90>(0x0000CA, 2); return true;
    // src/unknown/C1/C1BB71.asm:54 LDY #0
    case 0xC1BBEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1BB71.asm:54 LDY #0
    // Overlapping static entry reached from 0xC1BBEF.
    case 0xC1BBF1: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C1/C1BB71.asm:55 TYX
    case 0xC1BBF2: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71.asm:56 LDA #1
    case 0xC1BBF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71.asm:56 LDA #1
    // Overlapping static entry reached from 0xC1BBF3.
    case 0xC1BBF5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71.asm:57 JSR UNKNOWN_C1180D
    case 0xC1BBF6: cpu.execute_instruction<0x20>(0x00180D, 3); return true;
    // src/unknown/C1/C1BB71.asm:59 LDA #WINDOW::UNKNOWN2E
    case 0xC1BBF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00002E, 3); return true;
    // src/unknown/C1/C1BB71.asm:59 LDA #WINDOW::UNKNOWN2E
    // Overlapping static entry reached from 0xC1BBF9.
    case 0xC1BBFB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71.asm:60 JSR SET_WINDOW_FOCUS
    case 0xC1BBFC: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/unknown/C1/C1BB71.asm:61 LDA @VIRTUAL02
    case 0xC1BBFF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1BB71.asm:62 BNE @UNKNOWN6
    case 0xC1BC01: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C1/C1BB71.asm:63 JSR PRINT_MENU_ITEMS
    case 0xC1BC03: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // src/unknown/C1/C1BB71.asm:64 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC1BC06: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // src/unknown/C1/C1BB71.asm:65 INC @VIRTUAL02
    case 0xC1BC0A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1BB71.asm:67 CREATE_WINDOW_NEAR #WINDOW::STATUS_MENU
    case 0xC1BC0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1BB71.asm:67 CREATE_WINDOW_NEAR #WINDOW::STATUS_MENU
    // Overlapping static entry reached from 0xC1BC0C.
    case 0xC1BC0E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1BB71.asm:67 CREATE_WINDOW_NEAR #WINDOW::STATUS_MENU
    case 0xC1BC0F: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1BB71.asm:68 LDA #WINDOW::UNKNOWN2E
    case 0xC1BC12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00002E, 3); return true;
    // src/unknown/C1/C1BB71.asm:68 LDA #WINDOW::UNKNOWN2E
    // Overlapping static entry reached from 0xC1BC12.
    case 0xC1BC14: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1BB71.asm:69 STA CURRENT_FOCUS_WINDOW
    case 0xC1BC15: cpu.execute_instruction<0x8D>(0x008958, 3); return true;
    // src/unknown/C1/C1BB71.asm:70 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1BC18: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:71 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1BC1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x00CAF5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:71 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    // Overlapping static entry reached from 0xC1BC1B.
    case 0xC1BC1D: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1BB71.asm:71 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1BC1E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:71 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1BC20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:71 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    // Overlapping static entry reached from 0xC1BC20.
    case 0xC1BC22: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1BB71.asm:71 LOADPTR UNKNOWN_C1CAF5, @LOCAL00
    case 0xC1BC23: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1BB71.asm:72 JSR UNKNOWN_C11F5A
    case 0xC1BC25: cpu.execute_instruction<0x20>(0x001F5A, 3); return true;
    // src/unknown/C1/C1BB71.asm:73 LDA #1
    case 0xC1BC28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71.asm:73 LDA #1
    // Overlapping static entry reached from 0xC1BC28.
    case 0xC1BC2A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71.asm:74 JSR SELECTION_MENU
    case 0xC1BC2B: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C1BB71.asm:75 TAX
    case 0xC1BC2E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71.asm:76 STX @LOCAL02
    case 0xC1BC2F: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1BB71.asm:77 JSR UNKNOWN_C11F8A
    case 0xC1BC31: cpu.execute_instruction<0x20>(0x001F8A, 3); return true;
    // src/unknown/C1/C1BB71.asm:78 LDX @LOCAL02
    case 0xC1BC34: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1BB71.asm:79 BEQ @UNKNOWN8
    case 0xC1BC36: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/unknown/C1/C1BB71.asm:80 LDA #1
    case 0xC1BC38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71.asm:80 LDA #1
    // Overlapping static entry reached from 0xC1BC38.
    case 0xC1BC3A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71.asm:81 JSR UNKNOWN_C12BD5
    case 0xC1BC3B: cpu.execute_instruction<0x20>(0x002BD5, 3); return true;
    // src/unknown/C1/C1BB71.asm:82 CMP #0
    case 0xC1BC3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1BB71.asm:82 CMP #0
    // Overlapping static entry reached from 0xC1BC3E.
    case 0xC1BC40: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1BB71.asm:83 BEQ @UNKNOWN5
    case 0xC1BC41: cpu.execute_instruction<0xF0>(0x0000B6, 2); return true;
    // src/unknown/C1/C1BB71.asm:84 LDA #1
    case 0xC1BC43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71.asm:84 LDA #1
    // Overlapping static entry reached from 0xC1BC43.
    case 0xC1BC45: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71.asm:85 JSR SET_WINDOW_FOCUS
    case 0xC1BC46: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/unknown/C1/C1BB71.asm:86 LDA #$00FF
    case 0xC1BC49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1BB71.asm:86 LDA #$00FF
    // Overlapping static entry reached from 0xC1BC49.
    case 0xC1BC4B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1BB71.asm:87 STA LAST_SELECTED_PSI_DESCRIPTION
    case 0xC1BC4C: cpu.execute_instruction<0x8D>(0x009D19, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:88 LOADPTR UNKNOWN_C1BB06, @LOCAL00
    case 0xC1BC4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x00BB06, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:88 LOADPTR UNKNOWN_C1BB06, @LOCAL00
    // Overlapping static entry reached from 0xC1BC4F.
    case 0xC1BC51: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1BB71.asm:88 LOADPTR UNKNOWN_C1BB06, @LOCAL00
    case 0xC1BC52: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:88 LOADPTR UNKNOWN_C1BB06, @LOCAL00
    case 0xC1BC54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1BB71.asm:88 LOADPTR UNKNOWN_C1BB06, @LOCAL00
    // Overlapping static entry reached from 0xC1BC54.
    case 0xC1BC56: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1BB71.asm:88 LOADPTR UNKNOWN_C1BB06, @LOCAL00
    case 0xC1BC57: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1BB71.asm:89 JSR UNKNOWN_C11F5A
    case 0xC1BC59: cpu.execute_instruction<0x20>(0x001F5A, 3); return true;
    // src/unknown/C1/C1BB71.asm:91 LDA #1
    case 0xC1BC5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71.asm:91 LDA #1
    // Overlapping static entry reached from 0xC1BC5C.
    case 0xC1BC5E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BB71.asm:92 JSR SELECTION_MENU
    case 0xC1BC5F: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C1BB71.asm:93 CMP #0
    case 0xC1BC62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1BB71.asm:93 CMP #0
    // Overlapping static entry reached from 0xC1BC62.
    case 0xC1BC64: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1BB71.asm:94 BNE @UNKNOWN7
    case 0xC1BC65: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // src/unknown/C1/C1BB71.asm:95 JSR UNKNOWN_C11F8A
    case 0xC1BC67: cpu.execute_instruction<0x20>(0x001F8A, 3); return true;
    // src/unknown/C1/C1BB71.asm:96 LDA #WINDOW::UNKNOWN04
    case 0xC1BC6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C1BB71.asm:96 LDA #WINDOW::UNKNOWN04
    // Overlapping static entry reached from 0xC1BC6A.
    case 0xC1BC6C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BB71.asm:97 JSL CLOSE_WINDOW
    case 0xC1BC6D: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/unknown/C1/C1BB71.asm:98 LDA #WINDOW::UNKNOWN2F
    case 0xC1BC71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // src/unknown/C1/C1BB71.asm:98 LDA #WINDOW::UNKNOWN2F
    // Overlapping static entry reached from 0xC1BC71.
    case 0xC1BC73: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BB71.asm:99 JSL CLOSE_WINDOW
    case 0xC1BC74: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/unknown/C1/C1BB71.asm:100 LDA #$00FF
    case 0xC1BC78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1BB71.asm:100 LDA #$00FF
    // Overlapping static entry reached from 0xC1BC78.
    case 0xC1BC7A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1BB71.asm:101 STA LAST_SELECTED_PSI_DESCRIPTION
    case 0xC1BC7B: cpu.execute_instruction<0x8D>(0x009D19, 3); return true;
    // src/unknown/C1/C1BB71.asm:102 JMP @UNKNOWN5
    case 0xC1BC7E: cpu.execute_instruction<0x4C>(0x00BBF9, 3); return true;
    // src/unknown/C1/C1BB71.asm:104 LDA #WINDOW::UNKNOWN2E
    case 0xC1BC81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00002E, 3); return true;
    // src/unknown/C1/C1BB71.asm:104 LDA #WINDOW::UNKNOWN2E
    // Overlapping static entry reached from 0xC1BC81.
    case 0xC1BC83: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BB71.asm:105 JSL CLOSE_WINDOW
    case 0xC1BC84: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/unknown/C1/C1BB71.asm:106 LDA #WINDOW::TEXT_STANDARD
    case 0xC1BC88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71.asm:106 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1BC88.
    case 0xC1BC8A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BB71.asm:107 JSL CLOSE_WINDOW
    case 0xC1BC8B: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/unknown/C1/C1BB71.asm:108 LDA #WINDOW::STATUS_MENU
    case 0xC1BC8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C1BB71.asm:108 LDA #WINDOW::STATUS_MENU
    // Overlapping static entry reached from 0xC1BC8F.
    case 0xC1BC91: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1BB71.asm:109 STA CURRENT_FOCUS_WINDOW
    case 0xC1BC92: cpu.execute_instruction<0x8D>(0x008958, 3); return true;
    // src/unknown/C1/C1BB71.asm:110 LDA #1
    case 0xC1BC95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BB71.asm:110 LDA #1
    // Overlapping static entry reached from 0xC1BC95.
    case 0xC1BC97: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1BB71.asm:111 STA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1BC98: cpu.execute_instruction<0x8D>(0x005E71, 3); return true;
    // src/unknown/C1/C1BB71.asm:112 LDX @LOCAL02
    case 0xC1BC9B: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BB71.asm:113 BEQL @UNKNOWN1
    case 0xC1BC9D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BB71.asm:113 BEQL @UNKNOWN1
    case 0xC1BC9F: cpu.execute_instruction<0x4C>(0x00BB7F, 3); return true;
    // src/unknown/C1/C1BB71.asm:115 LDA #WINDOW::STATUS_MENU
    case 0xC1BCA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C1BB71.asm:115 LDA #WINDOW::STATUS_MENU
    // Overlapping static entry reached from 0xC1BCA2.
    case 0xC1BCA4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BB71.asm:116 JSL CLOSE_WINDOW
    case 0xC1BCA5: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/unknown/C1/C1BB71.asm:117 PLD
    case 0xC1BCA9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C1/C1BB71.asm:118 RTS
    case 0xC1BCAA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1BEFC.asm (unresolved).
bool execute_unresolved_c1_c1befc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1BEFC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1BEFC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1BEFC.asm:7 CMP #1
    case 0xC1BEFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:7 CMP #1
    // Overlapping static entry reached from 0xC1BEFE.
    case 0xC1BF00: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:8 BEQL @1F4101_COFFEESCENE
    case 0xC1BF01: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:8 BEQL @1F4101_COFFEESCENE
    case 0xC1BF03: cpu.execute_instruction<0x4C>(0x00BF91, 3); return true;
    // src/unknown/C1/C1BEFC.asm:9 CMP #2
    case 0xC1BF06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1BEFC.asm:9 CMP #2
    // Overlapping static entry reached from 0xC1BF06.
    case 0xC1BF08: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:10 BEQL @1F4102_TEASCENE
    case 0xC1BF09: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:10 BEQL @1F4102_TEASCENE
    case 0xC1BF0B: cpu.execute_instruction<0x4C>(0x00BF9B, 3); return true;
    // src/unknown/C1/C1BEFC.asm:11 CMP #3
    case 0xC1BF0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1BEFC.asm:11 CMP #3
    // Overlapping static entry reached from 0xC1BF0E.
    case 0xC1BF10: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:12 BEQL @1F4103_REGISTERREALNAME
    case 0xC1BF11: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:12 BEQL @1F4103_REGISTERREALNAME
    case 0xC1BF13: cpu.execute_instruction<0x4C>(0x00BFA5, 3); return true;
    // src/unknown/C1/C1BEFC.asm:13 CMP #4
    case 0xC1BF16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1BEFC.asm:13 CMP #4
    // Overlapping static entry reached from 0xC1BF16.
    case 0xC1BF18: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:14 BEQL @1F4104_REGISTERREALNAME2
    case 0xC1BF19: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:14 BEQL @1F4104_REGISTERREALNAME2
    case 0xC1BF1B: cpu.execute_instruction<0x4C>(0x00BFAF, 3); return true;
    // src/unknown/C1/C1BEFC.asm:15 CMP #5
    case 0xC1BF1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C1/C1BEFC.asm:15 CMP #5
    // Overlapping static entry reached from 0xC1BF1E.
    case 0xC1BF20: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:16 BEQL @1F4105
    case 0xC1BF21: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:16 BEQL @1F4105
    case 0xC1BF23: cpu.execute_instruction<0x4C>(0x00BFB9, 3); return true;
    // src/unknown/C1/C1BEFC.asm:17 CMP #6
    case 0xC1BF26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C1/C1BEFC.asm:17 CMP #6
    // Overlapping static entry reached from 0xC1BF26.
    case 0xC1BF28: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:18 BEQL @1F4106
    case 0xC1BF29: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:18 BEQL @1F4106
    case 0xC1BF2B: cpu.execute_instruction<0x4C>(0x00BFC3, 3); return true;
    // src/unknown/C1/C1BEFC.asm:19 CMP #7
    case 0xC1BF2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C1/C1BEFC.asm:19 CMP #7
    // Overlapping static entry reached from 0xC1BF2E.
    case 0xC1BF30: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:20 BEQL @1F4107_TOWNMAP
    case 0xC1BF31: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:20 BEQL @1F4107_TOWNMAP
    case 0xC1BF33: cpu.execute_instruction<0x4C>(0x00BFD0, 3); return true;
    // src/unknown/C1/C1BEFC.asm:21 CMP #8
    case 0xC1BF36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C1/C1BEFC.asm:21 CMP #8
    // Overlapping static entry reached from 0xC1BF36.
    case 0xC1BF38: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:22 BEQL @1F4108
    case 0xC1BF39: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:22 BEQL @1F4108
    case 0xC1BF3B: cpu.execute_instruction<0x4C>(0x00BFD6, 3); return true;
    // src/unknown/C1/C1BEFC.asm:23 CMP #9
    case 0xC1BF3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C1/C1BEFC.asm:23 CMP #9
    // Overlapping static entry reached from 0xC1BF3E.
    case 0xC1BF40: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:24 BEQL @1F4109_SOUNDSTONE
    case 0xC1BF41: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:24 BEQL @1F4109_SOUNDSTONE
    case 0xC1BF43: cpu.execute_instruction<0x4C>(0x00BFDC, 3); return true;
    // src/unknown/C1/C1BEFC.asm:25 CMP #10
    case 0xC1BF46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C1/C1BEFC.asm:25 CMP #10
    // Overlapping static entry reached from 0xC1BF46.
    case 0xC1BF48: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:26 BEQL @1F410A_TITLESCREEN
    case 0xC1BF49: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:26 BEQL @1F410A_TITLESCREEN
    case 0xC1BF4B: cpu.execute_instruction<0x4C>(0x00BFE5, 3); return true;
    // src/unknown/C1/C1BEFC.asm:27 CMP #11
    case 0xC1BF4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/unknown/C1/C1BEFC.asm:27 CMP #11
    // Overlapping static entry reached from 0xC1BF4E.
    case 0xC1BF50: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:28 BEQL @1F410B_CASTSCREEN
    case 0xC1BF51: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:28 BEQL @1F410B_CASTSCREEN
    case 0xC1BF53: cpu.execute_instruction<0x4C>(0x00BFEE, 3); return true;
    // src/unknown/C1/C1BEFC.asm:29 CMP #12
    case 0xC1BF56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C1/C1BEFC.asm:29 CMP #12
    // Overlapping static entry reached from 0xC1BF56.
    case 0xC1BF58: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:30 BEQL @1F410C_ENDCREDITS
    case 0xC1BF59: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:30 BEQL @1F410C_ENDCREDITS
    case 0xC1BF5B: cpu.execute_instruction<0x4C>(0x00BFF4, 3); return true;
    // src/unknown/C1/C1BEFC.asm:31 CMP #13
    case 0xC1BF5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/unknown/C1/C1BEFC.asm:31 CMP #13
    // Overlapping static entry reached from 0xC1BF5E.
    case 0xC1BF60: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:32 BEQL @1F410D
    case 0xC1BF61: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:32 BEQL @1F410D
    case 0xC1BF63: cpu.execute_instruction<0x4C>(0x00BFFA, 3); return true;
    // src/unknown/C1/C1BEFC.asm:33 CMP #14
    case 0xC1BF66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/unknown/C1/C1BEFC.asm:33 CMP #14
    // Overlapping static entry reached from 0xC1BF66.
    case 0xC1BF68: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:34 BEQL @1F410E
    case 0xC1BF69: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:34 BEQL @1F410E
    case 0xC1BF6B: cpu.execute_instruction<0x4C>(0x00C002, 3); return true;
    // src/unknown/C1/C1BEFC.asm:35 CMP #15
    case 0xC1BF6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00000F, 3); return true;
    // src/unknown/C1/C1BEFC.asm:35 CMP #15
    // Overlapping static entry reached from 0xC1BF6E.
    case 0xC1BF70: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:36 BEQL @1F410F_CLEAREVENTFLAGS
    case 0xC1BF71: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:36 BEQL @1F410F_CLEAREVENTFLAGS
    case 0xC1BF73: cpu.execute_instruction<0x4C>(0x00C00A, 3); return true;
    // src/unknown/C1/C1BEFC.asm:37 CMP #16
    case 0xC1BF76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C1/C1BEFC.asm:37 CMP #16
    // Overlapping static entry reached from 0xC1BF76.
    case 0xC1BF78: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:38 BEQL @1F4110_SOUNDSTONE_UNCANCELLABLE
    case 0xC1BF79: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:38 BEQL @1F4110_SOUNDSTONE_UNCANCELLABLE
    case 0xC1BF7B: cpu.execute_instruction<0x4C>(0x00C01C, 3); return true;
    // src/unknown/C1/C1BEFC.asm:39 CMP #17
    case 0xC1BF7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/unknown/C1/C1BEFC.asm:39 CMP #17
    // Overlapping static entry reached from 0xC1BF7E.
    case 0xC1BF80: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:40 BEQL @1F4111
    case 0xC1BF81: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:40 BEQL @1F4111
    case 0xC1BF83: cpu.execute_instruction<0x4C>(0x00C025, 3); return true;
    // src/unknown/C1/C1BEFC.asm:41 CMP #18
    case 0xC1BF86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/unknown/C1/C1BEFC.asm:41 CMP #18
    // Overlapping static entry reached from 0xC1BF86.
    case 0xC1BF88: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:42 BEQL @1F4112
    case 0xC1BF89: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:42 BEQL @1F4112
    case 0xC1BF8B: cpu.execute_instruction<0x4C>(0x00C02A, 3); return true;
    // src/unknown/C1/C1BEFC.asm:43 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BF8E: cpu.execute_instruction<0x4C>(0x00C040, 3); return true;
    // src/unknown/C1/C1BEFC.asm:45 LDA #0
    case 0xC1BF91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:45 LDA #0
    // Overlapping static entry reached from 0xC1BF91.
    case 0xC1BF93: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:46 JSL COFFEETEA_SCENE
    case 0xC1BF94: cpu.execute_instruction<0x22>(0xC49D6A, 4); return true;
    // src/unknown/C1/C1BEFC.asm:47 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BF98: cpu.execute_instruction<0x4C>(0x00C040, 3); return true;
    // src/unknown/C1/C1BEFC.asm:49 LDA #1
    case 0xC1BF9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:49 LDA #1
    // Overlapping static entry reached from 0xC1BF9B.
    case 0xC1BF9D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:50 JSL COFFEETEA_SCENE
    case 0xC1BF9E: cpu.execute_instruction<0x22>(0xC49D6A, 4); return true;
    // src/unknown/C1/C1BEFC.asm:51 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFA2: cpu.execute_instruction<0x4C>(0x00C040, 3); return true;
    // src/unknown/C1/C1BEFC.asm:53 LDA #0
    case 0xC1BFA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:53 LDA #0
    // Overlapping static entry reached from 0xC1BFA5.
    case 0xC1BFA7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:54 JSL ENTER_YOUR_NAME_PLEASE
    case 0xC1BFA8: cpu.execute_instruction<0x22>(0xC1EAA6, 4); return true;
    // src/unknown/C1/C1BEFC.asm:55 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFAC: cpu.execute_instruction<0x4C>(0x00C040, 3); return true;
    // src/unknown/C1/C1BEFC.asm:57 LDA #1
    case 0xC1BFAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:57 LDA #1
    // Overlapping static entry reached from 0xC1BFAF.
    case 0xC1BFB1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:58 JSL ENTER_YOUR_NAME_PLEASE
    case 0xC1BFB2: cpu.execute_instruction<0x22>(0xC1EAA6, 4); return true;
    // src/unknown/C1/C1BEFC.asm:59 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFB6: cpu.execute_instruction<0x4C>(0x00C040, 3); return true;
    // src/unknown/C1/C1BEFC.asm:61 LDA #1
    case 0xC1BFB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:61 LDA #1
    // Overlapping static entry reached from 0xC1BFB9.
    case 0xC1BFBB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:62 JSL UNKNOWN_C43344
    case 0xC1BFBC: cpu.execute_instruction<0x22>(0xC43344, 4); return true;
    // src/unknown/C1/C1BEFC.asm:63 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFC0: cpu.execute_instruction<0x4C>(0x00C040, 3); return true;
    // src/unknown/C1/C1BEFC.asm:65 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xC1BFC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x000049, 3); return true;
    // src/unknown/C1/C1BEFC.asm:65 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xC1BFC3.
    case 0xC1BFC5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:66 JSL GET_EVENT_FLAG
    case 0xC1BFC6: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C1/C1BEFC.asm:67 JSL UNKNOWN_C43344
    case 0xC1BFCA: cpu.execute_instruction<0x22>(0xC43344, 4); return true;
    // src/unknown/C1/C1BEFC.asm:68 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFCE: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/unknown/C1/C1BEFC.asm:70 JSL DISPLAY_TOWN_MAP
    case 0xC1BFD0: cpu.execute_instruction<0x22>(0xC4D681, 4); return true;
    // src/unknown/C1/C1BEFC.asm:71 BRA @RETURN
    case 0xC1BFD4: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // src/unknown/C1/C1BEFC.asm:73 JSL UNKNOWN_C3FB09
    case 0xC1BFD6: cpu.execute_instruction<0x22>(0xC3FB09, 4); return true;
    // src/unknown/C1/C1BEFC.asm:74 BRA @RETURN
    case 0xC1BFDA: cpu.execute_instruction<0x80>(0x000069, 2); return true;
    // src/unknown/C1/C1BEFC.asm:76 LDA #1
    case 0xC1BFDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:76 LDA #1
    // Overlapping static entry reached from 0xC1BFDC.
    case 0xC1BFDE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:77 JSL USE_SOUND_STONE
    case 0xC1BFDF: cpu.execute_instruction<0x22>(0xC4ACCE, 4); return true;
    // src/unknown/C1/C1BEFC.asm:78 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFE3: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // src/unknown/C1/C1BEFC.asm:80 LDA #1
    case 0xC1BFE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:80 LDA #1
    // Overlapping static entry reached from 0xC1BFE5.
    case 0xC1BFE7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:81 JSL SHOW_TITLE_SCREEN
    case 0xC1BFE8: cpu.execute_instruction<0x22>(0xC3F3C5, 4); return true;
    // src/unknown/C1/C1BEFC.asm:82 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFEC: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/unknown/C1/C1BEFC.asm:84 JSL PLAY_CAST_SCENE
    case 0xC1BFEE: cpu.execute_instruction<0x22>(0xC4ED0E, 4); return true;
    // src/unknown/C1/C1BEFC.asm:85 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFF2: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C1/C1BEFC.asm:87 JSL PLAY_CREDITS
    case 0xC1BFF4: cpu.execute_instruction<0x22>(0xC4F554, 4); return true;
    // src/unknown/C1/C1BEFC.asm:88 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFF8: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C1/C1BEFC.asm:90 LDA #1
    case 0xC1BFFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:90 LDA #1
    // Overlapping static entry reached from 0xC1BFFA.
    case 0xC1BFFC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BEFC.asm:91 JSR UNKNOWN_C12D17
    case 0xC1BFFD: cpu.execute_instruction<0x20>(0x002D17, 3); return true;
    // src/unknown/C1/C1BEFC.asm:92 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1C000: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/unknown/C1/C1BEFC.asm:94 LDA #0
    case 0xC1C002: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:94 LDA #0
    // Overlapping static entry reached from 0xC1C002.
    case 0xC1C004: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1BEFC.asm:95 JSR UNKNOWN_C12D17
    case 0xC1C005: cpu.execute_instruction<0x20>(0x002D17, 3); return true;
    // src/unknown/C1/C1BEFC.asm:96 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1C008: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unknown/C1/C1BEFC.asm:98 LDX #0
    case 0xC1C00A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:98 LDX #0
    // Overlapping static entry reached from 0xC1C00A.
    case 0xC1C00C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1BEFC.asm:99 BRA @1F410F_CLEAREVENTFLAGS_LOOP_ENTRY
    case 0xC1C00D: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C1/C1BEFC.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C00F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1BEFC.asm:102 STZ EVENT_FLAGS,X
    case 0xC1C011: cpu.execute_instruction<0x9E>(0x009C08, 3); return true;
    // src/unknown/C1/C1BEFC.asm:103 INX
    case 0xC1C014: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1BEFC.asm:105 CPX #128
    case 0xC1C015: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000080, 3); return true;
    // src/unknown/C1/C1BEFC.asm:105 CPX #128
    // Overlapping static entry reached from 0xC1C015.
    case 0xC1C017: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C1BEFC.asm:106 BCC @1F410F_CLEAREVENTFLAGS_LOOP_BEGINNING
    case 0xC1C018: cpu.execute_instruction<0x90>(0x0000F5, 2); return true;
    // src/unknown/C1/C1BEFC.asm:107 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1C01A: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C1/C1BEFC.asm:110 LDA #0
    case 0xC1C01C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:110 LDA #0
    // Overlapping static entry reached from 0xC1C01C.
    case 0xC1C01E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1BEFC.asm:111 JSL USE_SOUND_STONE
    case 0xC1C01F: cpu.execute_instruction<0x22>(0xC4ACCE, 4); return true;
    // src/unknown/C1/C1BEFC.asm:112 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1C023: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C1/C1BEFC.asm:114 JSR ATTEMPT_HOMESICKNESS
    case 0xC1C025: cpu.execute_instruction<0x20>(0x00BE4D, 3); return true;
    // src/unknown/C1/C1BEFC.asm:115 BRA @RETURN
    case 0xC1C028: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C1/C1BEFC.asm:117 LDA GAME_STATE+game_state::walking_style
    case 0xC1C02A: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/unknown/C1/C1BEFC.asm:118 CMP #3
    case 0xC1C02D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1BEFC.asm:118 CMP #3
    // Overlapping static entry reached from 0xC1C02D.
    case 0xC1C02F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1BEFC.asm:119 BNE @RETURN_ZERO_1
    case 0xC1C030: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C1/C1BEFC.asm:120 JSL UNKNOWN_C03CFD
    case 0xC1C032: cpu.execute_instruction<0x22>(0xC03CFD, 4); return true;
    // src/unknown/C1/C1BEFC.asm:121 LDA #1
    case 0xC1C036: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1BEFC.asm:121 LDA #1
    // Overlapping static entry reached from 0xC1C036.
    case 0xC1C038: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1BEFC.asm:122 BRA @RETURN
    case 0xC1C039: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C1/C1BEFC.asm:124 LDA #0
    case 0xC1C03B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:124 LDA #0
    // Overlapping static entry reached from 0xC1C03B.
    case 0xC1C03D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1BEFC.asm:125 BRA @RETURN
    case 0xC1C03E: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C1/C1BEFC.asm:127 REP #PROC_FLAGS::ACCUM8
    case 0xC1C040: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1BEFC.asm:128 LDA #0
    case 0xC1C042: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1BEFC.asm:128 LDA #0
    // Overlapping static entry reached from 0xC1C042.
    case 0xC1C044: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1BEFC.asm:130 END_C_FUNCTION
    case 0xC1C045: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C046.asm (unresolved).
bool execute_unresolved_c1_c1c046_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C046.asm:3 BEGIN_C_FUNCTION
    case 0xC1C046: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    case 0xC1C048: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    case 0xC1C049: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    case 0xC1C04A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    case 0xC1C04B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C04B.
    case 0xC1C04D: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    case 0xC1C04E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1C046.asm:10 END_STACK_VARS
    case 0xC1C04F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:11 TAY
    case 0xC1C050: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:12 STY @LOCAL03
    case 0xC1C051: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C1C046.asm:13 JSR GET_TEXT_X
    case 0xC1C053: cpu.execute_instruction<0x20>(0x0004B5, 3); return true;
    // src/unknown/C1/C1C046.asm:14 CMP #14
    case 0xC1C056: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/unknown/C1/C1C046.asm:14 CMP #14
    // Overlapping static entry reached from 0xC1C056.
    case 0xC1C058: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C1/C1C046.asm:15 BLTEQ @UNKNOWN0
    case 0xC1C059: cpu.execute_instruction<0x90>(0x000021, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C1/C1C046.asm:15 BLTEQ @UNKNOWN0
    case 0xC1C05B: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C1/C1C046.asm:16 LDY @LOCAL03
    case 0xC1C05D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1C046.asm:17 CPY #32
    case 0xC1C05F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/unknown/C1/C1C046.asm:17 CPY #32
    // Overlapping static entry reached from 0xC1C05F.
    case 0xC1C061: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C1C046.asm:18 BCC @UNKNOWN0
    case 0xC1C062: cpu.execute_instruction<0x90>(0x000018, 2); return true;
    // src/unknown/C1/C1C046.asm:19 JSR PRINT_NEWLINE
    case 0xC1C064: cpu.execute_instruction<0x22>(0xC438B1, 4); return true;
    // src/unknown/C1/C1C046.asm:20 JSL UNKNOWN_C45E96
    case 0xC1C068: cpu.execute_instruction<0x22>(0xC45E96, 4); return true;
    // src/unknown/C1/C1C046.asm:21 JSR GET_TEXT_X
    case 0xC1C06C: cpu.execute_instruction<0x20>(0x0004B5, 3); return true;
    // src/unknown/C1/C1C046.asm:22 STA @VIRTUAL02
    case 0xC1C06F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C046.asm:23 JSR GET_TEXT_Y
    case 0xC1C071: cpu.execute_instruction<0x20>(0x0004D8, 3); return true;
    // src/unknown/C1/C1C046.asm:24 TAX
    case 0xC1C074: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:25 LDA @VIRTUAL02
    case 0xC1C075: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C046.asm:26 INC
    case 0xC1C077: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:27 JSR UNKNOWN_C438A5
    case 0xC1C078: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C1C046.asm:29 LDY @LOCAL03
    case 0xC1C07C: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1C046.asm:30 TYA
    case 0xC1C07E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:31 SEC
    case 0xC1C07F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:32 SBC #16
    case 0xC1C080: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/C1/C1C046.asm:32 SBC #16
    // Overlapping static entry reached from 0xC1C080.
    case 0xC1C082: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1C046.asm:33 TAX
    case 0xC1C083: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:34 LDA f:UNKNOWN_C3EF26,X
    case 0xC1C084: cpu.execute_instruction<0xBF>(0xC3EF26, 4); return true;
    // src/unknown/C1/C1C046.asm:35 AND #$00FF
    case 0xC1C088: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C046.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC1C088.
    case 0xC1C08A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1C046.asm:36 TAX
    case 0xC1C08B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:37 BNE @UNKNOWN2
    case 0xC1C08C: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/unknown/C1/C1C046.asm:38 LDA UNKNOWN_7E9E29
    case 0xC1C08E: cpu.execute_instruction<0xAD>(0x009E29, 3); return true;
    // src/unknown/C1/C1C046.asm:39 BEQ @UNKNOWN1
    case 0xC1C091: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C1/C1C046.asm:40 JSL UNKNOWN_C45E96
    case 0xC1C093: cpu.execute_instruction<0x22>(0xC45E96, 4); return true;
    // src/unknown/C1/C1C046.asm:41 JSR GET_TEXT_X
    case 0xC1C097: cpu.execute_instruction<0x20>(0x0004B5, 3); return true;
    // src/unknown/C1/C1C046.asm:42 STA @VIRTUAL02
    case 0xC1C09A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C046.asm:43 JSR GET_TEXT_Y
    case 0xC1C09C: cpu.execute_instruction<0x20>(0x0004D8, 3); return true;
    // src/unknown/C1/C1C046.asm:44 TAX
    case 0xC1C09F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:45 LDA @VIRTUAL02
    case 0xC1C0A0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C046.asm:46 INC
    case 0xC1C0A2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:47 JSR UNKNOWN_C438A5
    case 0xC1C0A3: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C1C046.asm:49 LDY @LOCAL03
    case 0xC1C0A7: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1C046.asm:50 TYA
    case 0xC1C0A9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:51 JSR UNKNOWN_C10BA1
    case 0xC1C0AA: cpu.execute_instruction<0x20>(0x000BA1, 3); return true;
    // src/unknown/C1/C1C046.asm:52 JMP @UNKNOWN6
    case 0xC1C0AD: cpu.execute_instruction<0x4C>(0x00C163, 3); return true;
    // src/unknown/C1/C1C046.asm:54 LDA #1
    case 0xC1C0B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C046.asm:54 LDA #1
    // Overlapping static entry reached from 0xC1C0B0.
    case 0xC1C0B2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1C046.asm:55 STA UNKNOWN_7E9E29
    case 0xC1C0B3: cpu.execute_instruction<0x8D>(0x009E29, 3); return true;
    // src/unknown/C1/C1C046.asm:56 TXA
    case 0xC1C0B6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:57 DEC
    case 0xC1C0B7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:58 STA @LOCAL02
    case 0xC1C0B8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1C046.asm:59 TAX
    case 0xC1C0BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:60 LDA f:UNKNOWN_C3F016,X
    case 0xC1C0BB: cpu.execute_instruction<0xBF>(0xC3F016, 4); return true;
    // src/unknown/C1/C1C046.asm:61 AND #$00FF
    case 0xC1C0BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C046.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC1C0BF.
    case 0xC1C0C1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1C046.asm:62 TAX
    case 0xC1C0C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:63 STX @LOCAL01
    case 0xC1C0C3: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:64 LDY VWF_TILE
    case 0xC1C0C5: cpu.execute_instruction<0xAC>(0x009E25, 3); return true;
    // src/unknown/C1/C1C046.asm:65 STY @LOCAL03
    case 0xC1C0C8: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    case 0xC1C0CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000059, 2); else cpu.execute_instruction<0xA9>(0x001359, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C0CA.
    case 0xC1C0CC: cpu.execute_instruction<0x13>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    case 0xC1C0CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C0CC.
    case 0xC1C0CE: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    case 0xC1C0CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C0CE.
    case 0xC1C0D0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C0CF.
    case 0xC1C0D1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    case 0xC1C0D2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C046.asm:66 LOADPTR MRSATURN_FONT_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C0D0.
    case 0xC1C0D3: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:67 LDA @LOCAL02
    case 0xC1C0D4: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1C046.asm:68 AND #$0007
    case 0xC1C0D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C1/C1C046.asm:68 AND #$0007
    // Overlapping static entry reached from 0xC1C0D6.
    case 0xC1C0D8: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C1/C1C046.asm:69 ASL
    case 0xC1C0D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:70 ASL
    case 0xC1C0DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:71 ASL
    case 0xC1C0DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:72 ASL
    case 0xC1C0DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:73 ASL
    case 0xC1C0DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:74 STA @VIRTUAL02
    case 0xC1C0DE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C046.asm:75 LDA @LOCAL02
    case 0xC1C0E0: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C1C046.asm:76 AND #$00F8
    case 0xC1C0E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x0000F8, 3); return true;
    // src/unknown/C1/C1C046.asm:76 AND #$00F8
    // Overlapping static entry reached from 0xC1C0E2.
    case 0xC1C0E4: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C1/C1C046.asm:77 ASL
    case 0xC1C0E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:78 ASL
    case 0xC1C0E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:79 ASL
    case 0xC1C0E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:80 ASL
    case 0xC1C0E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:81 ASL
    case 0xC1C0E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:82 ASL
    case 0xC1C0EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:83 CLC
    case 0xC1C0EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:84 ADC @VIRTUAL02
    case 0xC1C0EC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1C046.asm:85 CLC
    case 0xC1C0EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:86 ADC @VIRTUAL06
    case 0xC1C0EF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C046.asm:87 STA @VIRTUAL06
    case 0xC1C0F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C046.asm:88 CPX #8
    case 0xC1C0F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/C1/C1C046.asm:88 CPX #8
    // Overlapping static entry reached from 0xC1C0F3.
    case 0xC1C0F5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C1/C1C046.asm:89 BLTEQ @UNKNOWN3
    case 0xC1C0F6: cpu.execute_instruction<0x90>(0x000021, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C1/C1C046.asm:89 BLTEQ @UNKNOWN3
    case 0xC1C0F8: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1C046.asm:90 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C0FA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1C046.asm:90 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C0FC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1C046.asm:90 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C0FE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1C046.asm:90 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C100: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C046.asm:91 LDA #8
    case 0xC1C102: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C1C046.asm:91 LDA #8
    // Overlapping static entry reached from 0xC1C102.
    case 0xC1C104: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1C046.asm:92 JSL UNKNOWN_C45C90
    case 0xC1C105: cpu.execute_instruction<0x22>(0xC45C90, 4); return true;
    // src/unknown/C1/C1C046.asm:93 LDX @LOCAL01
    case 0xC1C109: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:94 TXA
    case 0xC1C10B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:95 SEC
    case 0xC1C10C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:96 SBC #8
    case 0xC1C10D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C1/C1C046.asm:96 SBC #8
    // Overlapping static entry reached from 0xC1C10D.
    case 0xC1C10F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1C046.asm:97 TAX
    case 0xC1C110: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:98 LDA #16
    case 0xC1C111: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C1/C1C046.asm:98 LDA #16
    // Overlapping static entry reached from 0xC1C111.
    case 0xC1C113: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1C046.asm:99 CLC
    case 0xC1C114: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:100 ADC @VIRTUAL06
    case 0xC1C115: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C046.asm:101 STA @VIRTUAL06
    case 0xC1C117: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1C046.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C119: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1C046.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C11B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1C046.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C11D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1C046.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C11F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C046.asm:104 TXA
    case 0xC1C121: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:105 JSL UNKNOWN_C45C90
    case 0xC1C122: cpu.execute_instruction<0x22>(0xC45C90, 4); return true;
    // src/unknown/C1/C1C046.asm:106 LDX UNKNOWN_7E9E27
    case 0xC1C126: cpu.execute_instruction<0xAE>(0x009E27, 3); return true;
    // src/unknown/C1/C1C046.asm:107 DEX
    case 0xC1C129: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:108 STX @LOCAL01
    case 0xC1C12A: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:109 LDY @LOCAL03
    case 0xC1C12C: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C1C046.asm:110 TYA
    case 0xC1C12E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:111 JSL UNKNOWN_C45DDD
    case 0xC1C12F: cpu.execute_instruction<0x22>(0xC45DDD, 4); return true;
    // src/unknown/C1/C1C046.asm:113 LDX @LOCAL01
    case 0xC1C133: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:114 INX
    case 0xC1C135: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:115 STX @LOCAL01
    case 0xC1C136: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:116 CPX #48
    case 0xC1C138: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000030, 2); else cpu.execute_instruction<0xE0>(0x000030, 3); return true;
    // src/unknown/C1/C1C046.asm:116 CPX #48
    // Overlapping static entry reached from 0xC1C138.
    case 0xC1C13A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C1C046.asm:117 BCC @UNKNOWN5
    case 0xC1C13B: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C1/C1C046.asm:118 LDX #0
    case 0xC1C13D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1C046.asm:118 LDX #0
    // Overlapping static entry reached from 0xC1C13D.
    case 0xC1C13F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1C046.asm:119 STX @LOCAL01
    case 0xC1C140: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:121 TXA
    case 0xC1C142: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:122 CLC
    case 0xC1C143: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:123 ADC #400
    case 0xC1C144: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000090, 2); else cpu.execute_instruction<0x69>(0x000190, 3); return true;
    // src/unknown/C1/C1C046.asm:123 ADC #400
    // Overlapping static entry reached from 0xC1C144.
    case 0xC1C146: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/unknown/C1/C1C046.asm:124 JSR UNKNOWN_C10BA1
    case 0xC1C147: cpu.execute_instruction<0x20>(0x000BA1, 3); return true;
    // src/unknown/C1/C1C046.asm:124 JSR UNKNOWN_C10BA1
    // Overlapping static entry reached from 0xC1C146.
    case 0xC1C148: cpu.execute_instruction<0xA1>(0x00000B, 2); return true;
    // src/unknown/C1/C1C046.asm:125 LDX @LOCAL01
    case 0xC1C14A: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:126 CPX UNKNOWN_7E9E27
    case 0xC1C14C: cpu.execute_instruction<0xEC>(0x009E27, 3); return true;
    // src/unknown/C1/C1C046.asm:127 BNE @UNKNOWN4
    case 0xC1C14F: cpu.execute_instruction<0xD0>(0x0000E2, 2); return true;
    // src/unknown/C1/C1C046.asm:128 JSR GET_TEXT_X
    case 0xC1C151: cpu.execute_instruction<0x20>(0x0004B5, 3); return true;
    // src/unknown/C1/C1C046.asm:129 TAY
    case 0xC1C154: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:130 STY @LOCAL01
    case 0xC1C155: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:131 JSR GET_TEXT_Y
    case 0xC1C157: cpu.execute_instruction<0x20>(0x0004D8, 3); return true;
    // src/unknown/C1/C1C046.asm:132 TAX
    case 0xC1C15A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:133 LDY @LOCAL01
    case 0xC1C15B: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C1C046.asm:134 TYA
    case 0xC1C15D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:135 DEC
    case 0xC1C15E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1C046.asm:136 JSR UNKNOWN_C438A5
    case 0xC1C15F: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C046.asm:138 END_C_FUNCTION
    case 0xC1C163: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1C046.asm:138 END_C_FUNCTION
    case 0xC1C164: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C165.asm (unresolved).
bool execute_unresolved_c1_c1c165_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C165.asm:3 BEGIN_C_FUNCTION
    case 0xC1C165: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    case 0xC1C167: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    case 0xC1C168: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    case 0xC1C169: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    case 0xC1C16A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C16A.
    case 0xC1C16C: cpu.execute_instruction<0xFF>(0x3A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    case 0xC1C16D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1C165.asm:7 END_STACK_VARS
    case 0xC1C16E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:8 DEC
    case 0xC1C16F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:9 LDY #.SIZEOF(char_struct)
    case 0xC1C170: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1C165.asm:9 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1C170.
    case 0xC1C172: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1C165.asm:10 JSL MULT168
    case 0xC1C173: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1C165.asm:11 CLC
    case 0xC1C177: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:12 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC1C178: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/unknown/C1/C1C165.asm:12 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC1C178.
    case 0xC1C17A: cpu.execute_instruction<0x99>(0x00A2A8, 3); return true;
    // src/unknown/C1/C1C165.asm:13 TAY
    case 0xC1C17B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:14 LDX #0
    case 0xC1C17C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1C165.asm:14 LDX #0
    // Overlapping static entry reached from 0xC1C17A.
    case 0xC1C17D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1C165.asm:14 LDX #0
    // Overlapping static entry reached from 0xC1C17C.
    case 0xC1C17E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1C165.asm:15 BRA @UNKNOWN3
    case 0xC1C17F: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C1/C1C165.asm:17 LDA __BSS_START__,Y
    case 0xC1C181: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C1C165.asm:18 AND #$00FF
    case 0xC1C184: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C165.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC1C184.
    case 0xC1C186: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C165.asm:19 BEQ @UNKNOWN2
    case 0xC1C187: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C1/C1C165.asm:20 AND #$00FF
    case 0xC1C189: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C165.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC1C189.
    case 0xC1C18B: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1C165.asm:21 DEC
    case 0xC1C18C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:22 ASL
    case 0xC1C18D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:23 STA @VIRTUAL02
    case 0xC1C18E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C165.asm:24 TXA
    case 0xC1C190: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:25 STA @VIRTUAL04
    case 0xC1C191: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C165.asm:26 ASL
    case 0xC1C193: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:27 ADC @VIRTUAL04
    case 0xC1C194: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1C165.asm:28 ASL
    case 0xC1C196: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:29 ADC @VIRTUAL04
    case 0xC1C197: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1C165.asm:30 ASL
    case 0xC1C199: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:31 CLC
    case 0xC1C19A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:32 ADC @VIRTUAL02
    case 0xC1C19B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1C165.asm:33 TAX
    case 0xC1C19D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:34 LDA f:UNKNOWN_C3F0B0,X
    case 0xC1C19E: cpu.execute_instruction<0xBF>(0xC3F0B0, 4); return true;
    // src/unknown/C1/C1C165.asm:35 BEQ @UNKNOWN1
    case 0xC1C1A2: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1C165.asm:36 LDA #0
    case 0xC1C1A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C165.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1C1A4.
    case 0xC1C1A6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1C165.asm:37 BRA @UNKNOWN4
    case 0xC1C1A7: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C1/C1C165.asm:39 LDA #1
    case 0xC1C1A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C165.asm:39 LDA #1
    // Overlapping static entry reached from 0xC1C1A9.
    case 0xC1C1AB: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1C165.asm:40 BRA @UNKNOWN4
    case 0xC1C1AC: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C1/C1C165.asm:42 INX
    case 0xC1C1AE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:43 INY
    case 0xC1C1AF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C1C165.asm:45 CPX #7
    case 0xC1C1B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/unknown/C1/C1C165.asm:45 CPX #7
    // Overlapping static entry reached from 0xC1C1B0.
    case 0xC1C1B2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C1C165.asm:46 BCC @UNKNOWN0
    case 0xC1C1B3: cpu.execute_instruction<0x90>(0x0000CC, 2); return true;
    // src/unknown/C1/C1C165.asm:47 LDA #1
    case 0xC1C1B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C165.asm:47 LDA #1
    // Overlapping static entry reached from 0xC1C1B5.
    case 0xC1C1B7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C165.asm:49 END_C_FUNCTION
    case 0xC1C1B8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1C165.asm:49 END_C_FUNCTION
    case 0xC1C1B9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C1BA.asm (unresolved).
bool execute_unresolved_c1_c1c1ba_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C1BA.asm:3 BEGIN_C_FUNCTION
    case 0xC1C1BA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    case 0xC1C1BC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    case 0xC1C1BD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    case 0xC1C1BE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    case 0xC1C1BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E9, 2); else cpu.execute_instruction<0x69>(0x00FFE9, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C1BF.
    case 0xC1C1C1: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    case 0xC1C1C2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1C1BA.asm:14 END_STACK_VARS
    case 0xC1C1C3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:15 STY @VIRTUAL04
    case 0xC1C1C4: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:15 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC1C1C1.
    case 0xC1C1C5: cpu.execute_instruction<0x04>(0x000048, 2); return true;
    // src/unknown/C1/C1C1BA.asm:16 PHA
    case 0xC1C1C6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:17 LDA @VIRTUAL04
    case 0xC1C1C7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:18 STA @LOCAL04
    case 0xC1C1C9: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C1/C1C1BA.asm:19 PLA
    case 0xC1C1CB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:20 STX @VIRTUAL02
    case 0xC1C1CC: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1C1BA.asm:21 TAX
    case 0xC1C1CE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:22 CPX #PARTY_MEMBER::JEFF
    case 0xC1C1CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/unknown/C1/C1C1BA.asm:22 CPX #PARTY_MEMBER::JEFF
    // Overlapping static entry reached from 0xC1C1CF.
    case 0xC1C1D1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:23 BNE @UNKNOWN0
    case 0xC1C1D2: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:24 LDA #0
    case 0xC1C1D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C1BA.asm:24 LDA #0
    // Overlapping static entry reached from 0xC1C1D4.
    case 0xC1C1D6: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:25 JMP @UNKNOWN12
    case 0xC1C1D7: cpu.execute_instruction<0x4C>(0x00C328, 3); return true;
    // src/unknown/C1/C1C1BA.asm:27 TXY
    case 0xC1C1DA: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:28 DEY
    case 0xC1C1DB: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:29 STY @LOCAL03
    case 0xC1C1DC: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/unknown/C1/C1C1BA.asm:30 LDX #1
    case 0xC1C1DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:30 LDX #1
    // Overlapping static entry reached from 0xC1C1DE.
    case 0xC1C1E0: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1C1BA.asm:31 STX @LOCAL02
    case 0xC1C1E1: cpu.execute_instruction<0x86>(0x000011, 2); return true;
    // src/unknown/C1/C1C1BA.asm:32 JMP @UNKNOWN8
    case 0xC1C1E3: cpu.execute_instruction<0x4C>(0x00C2AB, 3); return true;
    // src/unknown/C1/C1C1BA.asm:34 LDY @LOCAL03
    case 0xC1C1E6: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1C1BA.asm:35 TYA
    case 0xC1C1E8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:36 BEQ @UNKNOWN2
    case 0xC1C1E9: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:37 CMP #PARTY_MEMBER::PAULA - 1
    case 0xC1C1EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:37 CMP #PARTY_MEMBER::PAULA - 1
    // Overlapping static entry reached from 0xC1C1EB.
    case 0xC1C1ED: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:38 BEQ @UNKNOWN3
    case 0xC1C1EE: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:39 CMP #PARTY_MEMBER::POO - 1
    case 0xC1C1F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1C1BA.asm:39 CMP #PARTY_MEMBER::POO - 1
    // Overlapping static entry reached from 0xC1C1F0.
    case 0xC1C1F2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:40 BEQ @UNKNOWN4
    case 0xC1C1F3: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:41 BRA @UNKNOWN5
    case 0xC1C1F5: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C1/C1C1BA.asm:43 LDA @LOCAL00
    case 0xC1C1F7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C1C1BA.asm:44 CLC
    case 0xC1C1F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:45 ADC #psi_ability::ness_level
    case 0xC1C1FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C1/C1C1BA.asm:45 ADC #psi_ability::ness_level
    // Overlapping static entry reached from 0xC1C1FA.
    case 0xC1C1FC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1C1BA.asm:46 CLC
    case 0xC1C1FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:47 ADC @VIRTUAL06
    case 0xC1C1FE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:48 STA @VIRTUAL06
    case 0xC1C200: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C202: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:50 LDA [@VIRTUAL06]
    case 0xC1C204: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:51 STA @VIRTUAL00
    case 0xC1C206: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1C1BA.asm:52 STA @LOCAL01
    case 0xC1C208: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C1BA.asm:53 BRA @UNKNOWN5
    case 0xC1C20A: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C1/C1C1BA.asm:56 LDA @LOCAL00
    case 0xC1C20C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C1C1BA.asm:57 CLC
    case 0xC1C20E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:58 ADC #psi_ability::paula_level
    case 0xC1C20F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C1/C1C1BA.asm:58 ADC #psi_ability::paula_level
    // Overlapping static entry reached from 0xC1C20F.
    case 0xC1C211: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1C1BA.asm:59 CLC
    case 0xC1C212: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:60 ADC @VIRTUAL06
    case 0xC1C213: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:61 STA @VIRTUAL06
    case 0xC1C215: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C217: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:63 LDA [@VIRTUAL06]
    case 0xC1C219: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:64 STA @VIRTUAL00
    case 0xC1C21B: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1C1BA.asm:65 STA @LOCAL01
    case 0xC1C21D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C1BA.asm:66 BRA @UNKNOWN5
    case 0xC1C21F: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C1/C1C1BA.asm:69 LDA @LOCAL00
    case 0xC1C221: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C1C1BA.asm:70 CLC
    case 0xC1C223: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:71 ADC #psi_ability::poo_level
    case 0xC1C224: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C1/C1C1BA.asm:71 ADC #psi_ability::poo_level
    // Overlapping static entry reached from 0xC1C224.
    case 0xC1C226: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1C1BA.asm:72 CLC
    case 0xC1C227: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:73 ADC @VIRTUAL06
    case 0xC1C228: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:74 STA @VIRTUAL06
    case 0xC1C22A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C22C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:76 LDA [@VIRTUAL06]
    case 0xC1C22E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:77 STA @VIRTUAL00
    case 0xC1C230: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1C1BA.asm:78 STA @LOCAL01
    case 0xC1C232: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C1BA.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C234: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:81 LDA @LOCAL01
    case 0xC1C236: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C1C1BA.asm:82 STA @VIRTUAL00
    case 0xC1C238: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C1C1BA.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC1C23A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:84 LDA @VIRTUAL00
    case 0xC1C23C: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1C1BA.asm:85 AND #$00FF
    case 0xC1C23E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C1BA.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC1C23E.
    case 0xC1C240: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:86 BEQ @UNKNOWN7
    case 0xC1C241: cpu.execute_instruction<0xF0>(0x000063, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:87 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C243: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008A50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:87 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C243.
    case 0xC1C245: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C1BA.asm:87 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C246: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:87 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C248: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:87 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C248.
    case 0xC1C24A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C1BA.asm:87 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C24B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1C1BA.asm:88 TXA
    case 0xC1C24D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C24E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C250: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C251: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C253: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C254: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C256: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:89 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C257: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:90 STA @LOCAL00
    case 0xC1C259: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:504 INC
    // Macro caller: src/unknown/C1/C1C1BA.asm:91 OPTIMIZED_ADD psi_ability::usability
    case 0xC1C25B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:505 INC
    // Macro caller: src/unknown/C1/C1C1BA.asm:91 OPTIMIZED_ADD psi_ability::usability
    case 0xC1C25C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:506 INC
    // Macro caller: src/unknown/C1/C1C1BA.asm:91 OPTIMIZED_ADD psi_ability::usability
    case 0xC1C25D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1C1BA.asm:92 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C25E: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1C1BA.asm:92 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C260: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1C1BA.asm:92 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C262: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1C1BA.asm:92 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C264: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:93 CLC
    case 0xC1C266: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:94 ADC @VIRTUAL0A
    case 0xC1C267: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1C1BA.asm:95 STA @VIRTUAL0A
    case 0xC1C269: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1C1BA.asm:96 LDA [@VIRTUAL0A]
    case 0xC1C26B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1C1BA.asm:97 AND #$00FF
    case 0xC1C26D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C1BA.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC1C26D.
    case 0xC1C26F: cpu.execute_instruction<0x00>(0x000025, 2); return true;
    // src/unknown/C1/C1C1BA.asm:98 AND @VIRTUAL02
    case 0xC1C270: cpu.execute_instruction<0x25>(0x000002, 2); return true;
    // src/unknown/C1/C1C1BA.asm:99 BEQ @UNKNOWN7
    case 0xC1C272: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/unknown/C1/C1C1BA.asm:100 TYA
    case 0xC1C274: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:101 LDY #.SIZEOF(char_struct)
    case 0xC1C275: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1C1BA.asm:101 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1C275.
    case 0xC1C277: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1C1BA.asm:102 JSL MULT168
    case 0xC1C278: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1C1BA.asm:103 TAX
    case 0xC1C27C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C27D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:105 LDA @VIRTUAL00
    case 0xC1C27F: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C1C1BA.asm:106 CMP PARTY_CHARACTERS + char_struct::level,X
    case 0xC1C281: cpu.execute_instruction<0xDD>(0x0099D3, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C1/C1C1BA.asm:107 BGT @UNKNOWN7
    case 0xC1C284: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C1/C1C1BA.asm:107 BGT @UNKNOWN7
    case 0xC1C286: cpu.execute_instruction<0xB0>(0x00001E, 2); return true;
    // src/unknown/C1/C1C1BA.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC1C288: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:109 LDA @LOCAL04
    case 0xC1C28A: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C1/C1C1BA.asm:110 STA @VIRTUAL04
    case 0xC1C28C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:111 LDA @LOCAL00
    case 0xC1C28E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:501 INC
    // Macro caller: src/unknown/C1/C1C1BA.asm:112 OPTIMIZED_ADD psi_ability::category
    case 0xC1C290: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:502 INC
    // Macro caller: src/unknown/C1/C1C1BA.asm:112 OPTIMIZED_ADD psi_ability::category
    case 0xC1C291: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:113 CLC
    case 0xC1C292: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:114 ADC @VIRTUAL06
    case 0xC1C293: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:115 STA @VIRTUAL06
    case 0xC1C295: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:116 LDA [@VIRTUAL06]
    case 0xC1C297: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:117 AND #$00FF
    case 0xC1C299: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C1BA.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC1C299.
    case 0xC1C29B: cpu.execute_instruction<0x00>(0x000025, 2); return true;
    // src/unknown/C1/C1C1BA.asm:118 AND @VIRTUAL04
    case 0xC1C29C: cpu.execute_instruction<0x25>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:119 BEQ @UNKNOWN7
    case 0xC1C29E: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C1C1BA.asm:120 LDA #1
    case 0xC1C2A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:120 LDA #1
    // Overlapping static entry reached from 0xC1C2A0.
    case 0xC1C2A2: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:121 JMP @UNKNOWN12
    case 0xC1C2A3: cpu.execute_instruction<0x4C>(0x00C328, 3); return true;
    // src/unknown/C1/C1C1BA.asm:123 LDX @LOCAL02
    case 0xC1C2A6: cpu.execute_instruction<0xA6>(0x000011, 2); return true;
    // src/unknown/C1/C1C1BA.asm:124 INX
    case 0xC1C2A8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:125 STX @LOCAL02
    case 0xC1C2A9: cpu.execute_instruction<0x86>(0x000011, 2); return true;
    // src/unknown/C1/C1C1BA.asm:127 REP #PROC_FLAGS::ACCUM8
    case 0xC1C2AB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:128 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C2AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008A50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:128 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C2AD.
    case 0xC1C2AF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C1BA.asm:128 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C2B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:128 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C2B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C1BA.asm:128 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C2B2.
    case 0xC1C2B4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C1BA.asm:128 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C2B5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1C1BA.asm:129 TXA
    case 0xC1C2B7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C2B8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C2BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C2BB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C2BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C2BE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C2C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1C1BA.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1C2C1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:131 STA @LOCAL00
    case 0xC1C2C3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C1/C1C1BA.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1C2C5: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C1/C1C1BA.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1C2C7: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C1/C1C1BA.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1C2C9: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C1/C1C1BA.asm:133 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1C2CB: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C1/C1C1BA.asm:134 CLC
    case 0xC1C2CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C1BA.asm:135 ADC @VIRTUAL0A
    case 0xC1C2CE: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1C1BA.asm:136 STA @VIRTUAL0A
    case 0xC1C2D0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1C1BA.asm:137 LDA [@VIRTUAL0A]
    case 0xC1C2D2: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1C1BA.asm:138 AND #$00FF
    case 0xC1C2D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C1BA.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC1C2D4.
    case 0xC1C2D6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1C1BA.asm:139 BNEL @UNKNOWN1
    case 0xC1C2D7: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1C1BA.asm:139 BNEL @UNKNOWN1
    case 0xC1C2D9: cpu.execute_instruction<0x4C>(0x00C1E6, 3); return true;
    // src/unknown/C1/C1C1BA.asm:140 LDY @LOCAL03
    case 0xC1C2DC: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1C1BA.asm:141 BNE @UNKNOWN10
    case 0xC1C2DE: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:142 LDA @VIRTUAL02
    case 0xC1C2E0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C1BA.asm:143 AND #$0001
    case 0xC1C2E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:143 AND #$0001
    // Overlapping static entry reached from 0xC1C2E2.
    case 0xC1C2E4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:144 BEQ @UNKNOWN10
    case 0xC1C2E5: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C1/C1C1BA.asm:145 LDA GAME_STATE + game_state::party_psi
    case 0xC1C2E7: cpu.execute_instruction<0xAD>(0x009839, 3); return true;
    // src/unknown/C1/C1C1BA.asm:146 AND #$00FF
    case 0xC1C2EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C1BA.asm:146 AND #$00FF
    // Overlapping static entry reached from 0xC1C2EA.
    case 0xC1C2EC: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C1/C1C1BA.asm:147 AND #$0001
    case 0xC1C2ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:147 AND #$0001
    // Overlapping static entry reached from 0xC1C2ED.
    case 0xC1C2EF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:148 BEQ @UNKNOWN10
    case 0xC1C2F0: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C1/C1C1BA.asm:149 LDA @LOCAL04
    case 0xC1C2F2: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C1/C1C1BA.asm:150 STA @VIRTUAL04
    case 0xC1C2F4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:151 AND #$0008
    case 0xC1C2F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/unknown/C1/C1C1BA.asm:151 AND #$0008
    // Overlapping static entry reached from 0xC1C2F6.
    case 0xC1C2F8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:152 BEQ @UNKNOWN10
    case 0xC1C2F9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1C1BA.asm:153 LDA #1
    case 0xC1C2FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:153 LDA #1
    // Overlapping static entry reached from 0xC1C2FB.
    case 0xC1C2FD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1C1BA.asm:154 BRA @UNKNOWN12
    case 0xC1C2FE: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C1/C1C1BA.asm:156 CPY #3
    case 0xC1C300: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/unknown/C1/C1C1BA.asm:156 CPY #3
    // Overlapping static entry reached from 0xC1C300.
    case 0xC1C302: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:157 BNE @UNKNOWN11
    case 0xC1C303: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C1/C1C1BA.asm:158 LDA @VIRTUAL02
    case 0xC1C305: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C1BA.asm:159 AND #$0002
    case 0xC1C307: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C1/C1C1BA.asm:159 AND #$0002
    // Overlapping static entry reached from 0xC1C307.
    case 0xC1C309: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:160 BEQ @UNKNOWN11
    case 0xC1C30A: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C1/C1C1BA.asm:161 LDA GAME_STATE + game_state::party_psi
    case 0xC1C30C: cpu.execute_instruction<0xAD>(0x009839, 3); return true;
    // src/unknown/C1/C1C1BA.asm:162 AND #$00FF
    case 0xC1C30F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C1BA.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC1C30F.
    case 0xC1C311: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C1/C1C1BA.asm:163 AND #$0006
    case 0xC1C312: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000006, 2); else cpu.execute_instruction<0x29>(0x000006, 3); return true;
    // src/unknown/C1/C1C1BA.asm:163 AND #$0006
    // Overlapping static entry reached from 0xC1C312.
    case 0xC1C314: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:164 BEQ @UNKNOWN11
    case 0xC1C315: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C1/C1C1BA.asm:165 LDA @LOCAL04
    case 0xC1C317: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C1/C1C1BA.asm:166 STA @VIRTUAL04
    case 0xC1C319: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C1BA.asm:167 AND #$0001
    case 0xC1C31B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:167 AND #$0001
    // Overlapping static entry reached from 0xC1C31B.
    case 0xC1C31D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C1BA.asm:168 BEQ @UNKNOWN11
    case 0xC1C31E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1C1BA.asm:169 LDA #1
    case 0xC1C320: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C1BA.asm:169 LDA #1
    // Overlapping static entry reached from 0xC1C320.
    case 0xC1C322: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1C1BA.asm:170 BRA @UNKNOWN12
    case 0xC1C323: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1C1BA.asm:172 LDA #0
    case 0xC1C325: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C1BA.asm:172 LDA #0
    // Overlapping static entry reached from 0xC1C325.
    case 0xC1C327: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C1BA.asm:174 END_C_FUNCTION
    case 0xC1C328: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1C1BA.asm:174 END_C_FUNCTION
    case 0xC1C329: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C32A.asm (unresolved).
bool execute_unresolved_c1_c1c32a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C32A.asm:3 BEGIN_C_FUNCTION
    case 0xC1C32A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    case 0xC1C32C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    case 0xC1C32D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    case 0xC1C32E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    case 0xC1C32F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C32F.
    case 0xC1C331: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    case 0xC1C332: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1C32A.asm:11 END_STACK_VARS
    case 0xC1C333: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C32A.asm:12 STY @LOCAL01
    case 0xC1C334: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C1C32A.asm:12 STY @LOCAL01
    // Overlapping static entry reached from 0xC1C331.
    case 0xC1C335: cpu.execute_instruction<0x10>(0x000086, 2); return true;
    // src/unknown/C1/C1C32A.asm:13 STX @LOCAL00
    case 0xC1C336: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1C32A.asm:13 STX @LOCAL00
    // Overlapping static entry reached from 0xC1C335.
    case 0xC1C337: cpu.execute_instruction<0x0E>(0x000285, 3); return true;
    // src/unknown/C1/C1C32A.asm:14 STA @VIRTUAL02
    case 0xC1C338: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C32A.asm:15 LDA #0
    case 0xC1C33A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C32A.asm:15 LDA #0
    // Overlapping static entry reached from 0xC1C33A.
    case 0xC1C33C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1C32A.asm:16 STA @VIRTUAL04
    case 0xC1C33D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C32A.asm:17 LDA @VIRTUAL02
    case 0xC1C33F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C32A.asm:18 CMP #3
    case 0xC1C341: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1C32A.asm:18 CMP #3
    // Overlapping static entry reached from 0xC1C341.
    case 0xC1C343: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C32A.asm:19 BEQ @UNKNOWN0
    case 0xC1C344: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C1/C1C32A.asm:20 LDA @VIRTUAL02
    case 0xC1C346: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C32A.asm:21 JSR UNKNOWN_C1C165
    case 0xC1C348: cpu.execute_instruction<0x20>(0x00C165, 3); return true;
    // src/unknown/C1/C1C32A.asm:22 CMP #0
    case 0xC1C34B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1C32A.asm:22 CMP #0
    // Overlapping static entry reached from 0xC1C34B.
    case 0xC1C34D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C32A.asm:23 BEQ @UNKNOWN0
    case 0xC1C34E: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C1/C1C32A.asm:24 LDY @LOCAL01
    case 0xC1C350: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1C32A.asm:25 LDX @LOCAL00
    case 0xC1C352: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1C32A.asm:26 LDA @VIRTUAL02
    case 0xC1C354: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C32A.asm:27 JSR UNKNOWN_C1C1BA
    case 0xC1C356: cpu.execute_instruction<0x20>(0x00C1BA, 3); return true;
    // src/unknown/C1/C1C32A.asm:28 CMP #0
    case 0xC1C359: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1C32A.asm:28 CMP #0
    // Overlapping static entry reached from 0xC1C359.
    case 0xC1C35B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C32A.asm:29 BEQ @UNKNOWN0
    case 0xC1C35C: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1C32A.asm:30 LDA #1
    case 0xC1C35E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C32A.asm:30 LDA #1
    // Overlapping static entry reached from 0xC1C35E.
    case 0xC1C360: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1C32A.asm:31 STA @VIRTUAL04
    case 0xC1C361: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C32A.asm:33 LDA @VIRTUAL04
    case 0xC1C363: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C32A.asm:34 END_C_FUNCTION
    case 0xC1C365: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1C32A.asm:34 END_C_FUNCTION
    case 0xC1C366: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C367.asm (unresolved).
bool execute_unresolved_c1_c1c367_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C367.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1C367: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1C367.asm:6 LDY #15
    case 0xC1C369: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000F, 2); else cpu.execute_instruction<0xA0>(0x00000F, 3); return true;
    // src/unknown/C1/C1C367.asm:6 LDY #15
    // Overlapping static entry reached from 0xC1C369.
    case 0xC1C36B: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1C367.asm:7 LDX #1
    case 0xC1C36C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1C367.asm:7 LDX #1
    // Overlapping static entry reached from 0xC1C36C.
    case 0xC1C36E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1C367.asm:8 JSR UNKNOWN_C1C32A
    case 0xC1C36F: cpu.execute_instruction<0x20>(0x00C32A, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1C367.asm:9 END_C_FUNCTION
    case 0xC1C372: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C373.asm (unresolved).
bool execute_unresolved_c1_c1c373_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C373.asm:3 BEGIN_C_FUNCTION
    case 0xC1C373: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C373.asm:7 END_STACK_VARS
    case 0xC1C375: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C373.asm:7 END_STACK_VARS
    case 0xC1C376: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C373.asm:7 END_STACK_VARS
    case 0xC1C377: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C373.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C377.
    case 0xC1C379: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C373.asm:7 END_STACK_VARS
    case 0xC1C37A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1C373.asm:8 LDA #0
    case 0xC1C37B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C373.asm:8 LDA #0
    // Overlapping static entry reached from 0xC1C37B.
    case 0xC1C37D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1C373.asm:9 STA @VIRTUAL02
    case 0xC1C37E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C373.asm:10 BRA @UNKNOWN2
    case 0xC1C380: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C1/C1C373.asm:12 LDY #15
    case 0xC1C382: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000F, 2); else cpu.execute_instruction<0xA0>(0x00000F, 3); return true;
    // src/unknown/C1/C1C373.asm:12 LDY #15
    // Overlapping static entry reached from 0xC1C382.
    case 0xC1C384: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1C373.asm:13 LDX #1
    case 0xC1C385: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1C373.asm:13 LDX #1
    // Overlapping static entry reached from 0xC1C385.
    case 0xC1C387: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1C373.asm:14 STX @LOCAL00
    case 0xC1C388: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1C373.asm:22 LDX @VIRTUAL02
    case 0xC1C38A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1C373.asm:23 LDA GAME_STATE + game_state::party_members,X
    case 0xC1C38C: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/unknown/C1/C1C373.asm:25 AND #$00FF
    case 0xC1C38F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C373.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC1C38F.
    case 0xC1C391: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1C373.asm:26 LDX @LOCAL00
    case 0xC1C392: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1C373.asm:27 JSR UNKNOWN_C1C32A
    case 0xC1C394: cpu.execute_instruction<0x20>(0x00C32A, 3); return true;
    // src/unknown/C1/C1C373.asm:28 CMP #0
    case 0xC1C397: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1C373.asm:28 CMP #0
    // Overlapping static entry reached from 0xC1C397.
    case 0xC1C399: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C373.asm:29 BEQ @UNKNOWN1
    case 0xC1C39A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1C373.asm:30 LDA @VIRTUAL02
    case 0xC1C39C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C373.asm:31 INC
    case 0xC1C39E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C373.asm:32 BRA @UNKNOWN3
    case 0xC1C39F: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C1/C1C373.asm:34 INC @VIRTUAL02
    case 0xC1C3A1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1C373.asm:36 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1C3A3: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C1C373.asm:37 AND #$00FF
    case 0xC1C3A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C373.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC1C3A6.
    case 0xC1C3A8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1C373.asm:38 STA @VIRTUAL04
    case 0xC1C3A9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C373.asm:39 LDA @VIRTUAL02
    case 0xC1C3AB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C373.asm:40 CMP @VIRTUAL04
    case 0xC1C3AD: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C1/C1C373.asm:41 BCC @UNKNOWN0
    case 0xC1C3AF: cpu.execute_instruction<0x90>(0x0000D1, 2); return true;
    // src/unknown/C1/C1C373.asm:42 LDA #0
    case 0xC1C3B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C373.asm:42 LDA #0
    // Overlapping static entry reached from 0xC1C3B1.
    case 0xC1C3B3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C373.asm:44 END_C_FUNCTION
    case 0xC1C3B4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1C373.asm:44 END_C_FUNCTION
    case 0xC1C3B5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C3B6.asm (unresolved).
bool execute_unresolved_c1_c1c3b6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C3B6.asm:3 BEGIN_C_FUNCTION
    case 0xC1C3B6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C3B6.asm:8 END_STACK_VARS
    case 0xC1C3B8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C3B6.asm:8 END_STACK_VARS
    case 0xC1C3B9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C3B6.asm:8 END_STACK_VARS
    case 0xC1C3BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C3B6.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C3BA.
    case 0xC1C3BC: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C3B6.asm:8 END_STACK_VARS
    case 0xC1C3BD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C1C3B6.asm:9 LDA #0
    case 0xC1C3BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C3B6.asm:9 LDA #0
    // Overlapping static entry reached from 0xC1C3BE.
    case 0xC1C3C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1C3B6.asm:10 STA @VIRTUAL04
    case 0xC1C3C1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1C3B6.asm:11 STA @VIRTUAL02
    case 0xC1C3C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:12 STA @LOCAL01
    case 0xC1C3C5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C3B6.asm:13 BRA @UNKNOWN2
    case 0xC1C3C7: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C1/C1C3B6.asm:15 LDY #15
    case 0xC1C3C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000F, 2); else cpu.execute_instruction<0xA0>(0x00000F, 3); return true;
    // src/unknown/C1/C1C3B6.asm:15 LDY #15
    // Overlapping static entry reached from 0xC1C3C9.
    case 0xC1C3CB: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1C3B6.asm:16 LDX #1
    case 0xC1C3CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1C3B6.asm:16 LDX #1
    // Overlapping static entry reached from 0xC1C3CC.
    case 0xC1C3CE: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1C3B6.asm:17 STX @LOCAL00
    case 0xC1C3CF: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1C3B6.asm:18 LDA @LOCAL01
    case 0xC1C3D1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C1C3B6.asm:19 STA @VIRTUAL02
    case 0xC1C3D3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:26 LDX @VIRTUAL02
    case 0xC1C3D5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:27 LDA GAME_STATE + game_state::party_members,X
    case 0xC1C3D7: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/unknown/C1/C1C3B6.asm:29 AND #$00FF
    case 0xC1C3DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C3B6.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1C3DA.
    case 0xC1C3DC: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1C3B6.asm:30 LDX @LOCAL00
    case 0xC1C3DD: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1C3B6.asm:31 JSR UNKNOWN_C1C32A
    case 0xC1C3DF: cpu.execute_instruction<0x20>(0x00C32A, 3); return true;
    // src/unknown/C1/C1C3B6.asm:32 CMP #0
    case 0xC1C3E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C1C3B6.asm:32 CMP #0
    // Overlapping static entry reached from 0xC1C3E2.
    case 0xC1C3E4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C3B6.asm:33 BEQ @UNKNOWN1
    case 0xC1C3E5: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:34 INC @VIRTUAL04
    case 0xC1C3E7: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C1C3B6.asm:36 INC @VIRTUAL02
    case 0xC1C3E9: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:37 LDA @VIRTUAL02
    case 0xC1C3EB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:38 STA @LOCAL01
    case 0xC1C3ED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C3B6.asm:40 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1C3EF: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C1C3B6.asm:41 AND #$00FF
    case 0xC1C3F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C3B6.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC1C3F2.
    case 0xC1C3F4: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C1/C1C3B6.asm:42 PHA
    case 0xC1C3F5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1C3B6.asm:43 LDA @VIRTUAL02
    case 0xC1C3F6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:44 PLY
    case 0xC1C3F8: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C1C3B6.asm:45 STY @VIRTUAL02
    case 0xC1C3F9: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:46 CMP @VIRTUAL02
    case 0xC1C3FB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C1/C1C3B6.asm:47 BCC @UNKNOWN0
    case 0xC1C3FD: cpu.execute_instruction<0x90>(0x0000CA, 2); return true;
    // src/unknown/C1/C1C3B6.asm:48 LDA @VIRTUAL04
    case 0xC1C3FF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C3B6.asm:49 END_C_FUNCTION
    case 0xC1C401: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1C3B6.asm:49 END_C_FUNCTION
    case 0xC1C402: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C853.asm (unresolved).
bool execute_unresolved_c1_c1c853_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C853.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1C853: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    case 0xC1C855: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    case 0xC1C856: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    case 0xC1C857: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    case 0xC1C858: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C858.
    case 0xC1C85A: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    case 0xC1C85B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1C853.asm:8 END_STACK_VARS
    case 0xC1C85C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C853.asm:9 TAY
    case 0xC1C85D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1C853.asm:10 STY @LOCAL01
    case 0xC1C85E: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1C853.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1C860: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1C853.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1C860.
    case 0xC1C862: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1C853.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1C863: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1C853.asm:13 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC1C866: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // src/unknown/C1/C1C853.asm:15 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1C86A: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C1C853.asm:16 AND #$00FF
    case 0xC1C86D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C853.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC1C86D.
    case 0xC1C86F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1C853.asm:17 CMP #1
    case 0xC1C870: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1C853.asm:17 CMP #1
    // Overlapping static entry reached from 0xC1C870.
    case 0xC1C872: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1C853.asm:18 BEQ @UNKNOWN0
    case 0xC1C873: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C1C853.asm:19 LDA #1
    case 0xC1C875: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C853.asm:19 LDA #1
    // Overlapping static entry reached from 0xC1C875.
    case 0xC1C877: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1C853.asm:20 STA PAGINATION_WINDOW
    case 0xC1C878: cpu.execute_instruction<0x8D>(0x005E7A, 3); return true;
    // src/unknown/C1/C1C853.asm:22 LDY @LOCAL01
    case 0xC1C87B: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C1C853.asm:23 TYA
    case 0xC1C87D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C853.asm:24 DEC
    case 0xC1C87E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1C853.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC1C87F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1C853.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1C87F.
    case 0xC1C881: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1C853.asm:26 JSL MULT168
    case 0xC1C882: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1C853.asm:27 CLC
    case 0xC1C886: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C853.asm:28 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    case 0xC1C887: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C1/C1C853.asm:28 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    // Overlapping static entry reached from 0xC1C887.
    case 0xC1C889: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1C853.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1C88A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1C853.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1C88C: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1C853.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1C88D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1C853.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1C88F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1C853.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1C890: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1C853.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1C892: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1C853.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC1C894: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1C853.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C896: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1C853.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C898: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1C853.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C89A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1C853.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C89C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C853.asm:32 LDX #.SIZEOF(char_struct::name)
    case 0xC1C89E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C1/C1C853.asm:32 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1C89E.
    case 0xC1C8A0: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1C853.asm:33 LDA #1
    case 0xC1C8A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1C853.asm:33 LDA #1
    // Overlapping static entry reached from 0xC1C8A1.
    case 0xC1C8A3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1C853.asm:34 JSL SET_WINDOW_TITLE
    case 0xC1C8A4: cpu.execute_instruction<0x22>(0xC2032B, 4); return true;
    // src/unknown/C1/C1C853.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C8A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C853.asm:36 LDA #1
    case 0xC1C8AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/unknown/C1/C1C853.asm:37 STA @LOCAL00
    case 0xC1C8AC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1C853.asm:37 STA @LOCAL00
    // Overlapping static entry reached from 0xC1C8AA.
    case 0xC1C8AD: cpu.execute_instruction<0x0E>(0x000FA9, 3); return true;
    // src/unknown/C1/C1C853.asm:38 LDA #15
    case 0xC1C8AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00850F, 3); return true;
    // src/unknown/C1/C1C853.asm:39 STA @LOCAL00+1
    case 0xC1C8B0: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C1/C1C853.asm:39 STA @LOCAL00+1
    // Overlapping static entry reached from 0xC1C8AE.
    case 0xC1C8B1: cpu.execute_instruction<0x0F>(0xC212A4, 4); return true;
    // src/unknown/C1/C1C853.asm:40 LDY @LOCAL01
    case 0xC1C8B2: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C1C853.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC1C8B4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1C853.asm:41 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1C8B1.
    case 0xC1C8B5: cpu.execute_instruction<0x20>(0x002098, 3); return true;
    // src/unknown/C1/C1C853.asm:42 TYA
    case 0xC1C8B6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1C853.asm:43 JSR GENERATE_PSI_LIST
    case 0xC1C8B7: cpu.execute_instruction<0x20>(0x00C452, 3); return true;
    // src/unknown/C1/C1C853.asm:43 JSR GENERATE_PSI_LIST
    // Overlapping static entry reached from 0xC1C8B5.
    case 0xC1C8B8: cpu.execute_instruction<0x52>(0x0000C4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C853.asm:44 END_C_FUNCTION
    case 0xC1C8BA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1C853.asm:44 END_C_FUNCTION
    case 0xC1C8BB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1C8BC.asm (unresolved).
bool execute_unresolved_c1_c1c8bc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1C8BC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1C8BC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    case 0xC1C8BE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    case 0xC1C8BF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    case 0xC1C8C0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    case 0xC1C8C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C8C1.
    case 0xC1C8C3: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    case 0xC1C8C4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1C8BC.asm:9 END_STACK_VARS
    case 0xC1C8C5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:10 TAY
    case 0xC1C8C6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:11 STY @LOCAL02
    case 0xC1C8C7: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1C8BC.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN04
    case 0xC1C8C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1C8BC.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN04
    // Overlapping static entry reached from 0xC1C8C9.
    case 0xC1C8CB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1C8BC.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN04
    case 0xC1C8CC: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1C8BC.asm:17 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC1C8CF: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // src/unknown/C1/C1C8BC.asm:18 STZ ENABLE_WORD_WRAP
    case 0xC1C8D3: cpu.execute_instruction<0x9C>(0x005E6E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:20 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C8D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008A50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:20 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C8D6.
    case 0xC1C8D8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C8BC.asm:20 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C8D9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:20 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C8DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:20 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C8DB.
    case 0xC1C8DD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:20 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1C8DE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1C8BC.asm:21 LDY @LOCAL02
    case 0xC1C8E0: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1C8BC.asm:22 TYA
    case 0xC1C8E2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C8E3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C8E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C8E6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C8E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C8E9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C8EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:23 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C8EC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1C8BC.asm:24 STA @LOCAL01
    case 0xC1C8EE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1C8BC.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C8F0: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1C8BC.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C8F2: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C8F4: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:25 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1C8F6: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1C8BC.asm:26 CLC
    case 0xC1C8F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:27 ADC @VIRTUAL0A
    case 0xC1C8F9: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1C8BC.asm:28 STA @VIRTUAL0A
    case 0xC1C8FB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1C8BC.asm:29 LDA [@VIRTUAL0A]
    case 0xC1C8FD: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1C8BC.asm:30 AND #$00FF
    case 0xC1C8FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C8BC.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC1C8FF.
    case 0xC1C901: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1C8BC.asm:31 CMP #4
    case 0xC1C902: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1C8BC.asm:31 CMP #4
    // Overlapping static entry reached from 0xC1C902.
    case 0xC1C904: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1C8BC.asm:32 BNE @UNKNOWN0
    case 0xC1C905: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C907: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x00F124, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C907.
    case 0xC1C909: cpu.execute_instruction<0xF1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C90A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C909.
    case 0xC1C90B: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C90C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C90B.
    case 0xC1C90D: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C90C.
    case 0xC1C90E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:33 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C90F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1C8BC.asm:34 BRA @UNKNOWN1
    case 0xC1C911: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:36 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1C913: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:36 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C913.
    case 0xC1C915: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C8BC.asm:36 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1C916: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:36 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1C918: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:36 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1C918.
    case 0xC1C91A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:36 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1C91B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1C8BC.asm:37 LDA @LOCAL01
    case 0xC1C91D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1C8BC.asm:38 INC
    case 0xC1C91F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:39 INC
    case 0xC1C920: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:40 INC
    case 0xC1C921: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:41 INC
    case 0xC1C922: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:42 CLC
    case 0xC1C923: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:43 ADC @VIRTUAL06
    case 0xC1C924: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:44 STA @VIRTUAL06
    case 0xC1C926: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:45 LDA [@VIRTUAL06]
    case 0xC1C928: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C92A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C92C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C92D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C92F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:46 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C930: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:47 STA @LOCAL01
    case 0xC1C931: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1C8BC.asm:48 INC
    case 0xC1C933: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1C8BC.asm:49 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C934: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1C8BC.asm:49 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C936: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:49 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C938: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:49 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C93A: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C1/C1C8BC.asm:50 CLC
    case 0xC1C93C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:51 ADC @VIRTUAL06
    case 0xC1C93D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:52 STA @VIRTUAL06
    case 0xC1C93F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:53 LDA [@VIRTUAL06]
    case 0xC1C941: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:54 AND #$00FF
    case 0xC1C943: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C8BC.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC1C943.
    case 0xC1C945: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:55 OPTIMIZED_MULT @VIRTUAL04, PSI_TARGET_TEXT_LENGTH
    case 0xC1C946: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:55 OPTIMIZED_MULT @VIRTUAL04, PSI_TARGET_TEXT_LENGTH
    case 0xC1C948: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:55 OPTIMIZED_MULT @VIRTUAL04, PSI_TARGET_TEXT_LENGTH
    case 0xC1C949: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:55 OPTIMIZED_MULT @VIRTUAL04, PSI_TARGET_TEXT_LENGTH
    case 0xC1C94A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:55 OPTIMIZED_MULT @VIRTUAL04, PSI_TARGET_TEXT_LENGTH
    case 0xC1C94C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:55 OPTIMIZED_MULT @VIRTUAL04, PSI_TARGET_TEXT_LENGTH
    case 0xC1C94D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:56 STA @VIRTUAL02
    case 0xC1C94E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1C8BC.asm:57 LDA @LOCAL01
    case 0xC1C950: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1C8BC.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C952: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1C8BC.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C954: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C956: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:58 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1C958: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C1/C1C8BC.asm:59 CLC
    case 0xC1C95A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:60 ADC @VIRTUAL06
    case 0xC1C95B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:61 STA @VIRTUAL06
    case 0xC1C95D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:62 LDA [@VIRTUAL06]
    case 0xC1C95F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:63 AND #$00FF
    case 0xC1C961: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C8BC.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC1C961.
    case 0xC1C963: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1C8BC.asm:64 OPTIMIZED_MULT @VIRTUAL04, 5 * PSI_TARGET_TEXT_LENGTH
    case 0xC1C964: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000064, 2); else cpu.execute_instruction<0xA0>(0x000064, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1C8BC.asm:64 OPTIMIZED_MULT @VIRTUAL04, 5 * PSI_TARGET_TEXT_LENGTH
    // Overlapping static entry reached from 0xC1C964.
    case 0xC1C966: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C1C8BC.asm:64 OPTIMIZED_MULT @VIRTUAL04, 5 * PSI_TARGET_TEXT_LENGTH
    case 0xC1C967: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1C8BC.asm:65 CLC
    case 0xC1C96B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:66 ADC @VIRTUAL02
    case 0xC1C96C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1C8BC.asm:67 PHA
    case 0xC1C96E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C96F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x00F124, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C96F.
    case 0xC1C971: cpu.execute_instruction<0xF1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C972: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C971.
    case 0xC1C973: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C974: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C973.
    case 0xC1C975: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C974.
    case 0xC1C976: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:68 LOADPTR PSI_TARGET_TEXT, @VIRTUAL06
    case 0xC1C977: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1C8BC.asm:69 PLA
    case 0xC1C979: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:70 CLC
    case 0xC1C97A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:71 ADC @VIRTUAL06
    case 0xC1C97B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1C8BC.asm:72 STA @VIRTUAL06
    case 0xC1C97D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1C8BC.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C97F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1C8BC.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C981: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C983: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C985: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C8BC.asm:75 LDA #PSI_TARGET_TEXT_LENGTH
    case 0xC1C987: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C1/C1C8BC.asm:75 LDA #PSI_TARGET_TEXT_LENGTH
    // Overlapping static entry reached from 0xC1C987.
    case 0xC1C989: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1C8BC.asm:76 JSR PRINT_STRING
    case 0xC1C98A: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C1C8BC.asm:78 LDA #$00FF
    case 0xC1C98D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C1/C1C8BC.asm:78 LDA #$00FF
    // Overlapping static entry reached from 0xC1C98D.
    case 0xC1C98F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1C8BC.asm:79 STA ENABLE_WORD_WRAP
    case 0xC1C990: cpu.execute_instruction<0x8D>(0x005E6E, 3); return true;
    // src/unknown/C1/C1C8BC.asm:81 LDX #1
    case 0xC1C993: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1C8BC.asm:81 LDX #1
    // Overlapping static entry reached from 0xC1C993.
    case 0xC1C995: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1C8BC.asm:82 LDA #0
    case 0xC1C996: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1C8BC.asm:82 LDA #0
    // Overlapping static entry reached from 0xC1C996.
    case 0xC1C998: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1C8BC.asm:83 JSR UNKNOWN_C438A5
    case 0xC1C999: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:84 LOADPTR PP_COST_TEXT, @LOCAL00
    case 0xC1C99D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00F11C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:84 LOADPTR PP_COST_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC1C99D.
    case 0xC1C99F: cpu.execute_instruction<0xF1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C8BC.asm:84 LOADPTR PP_COST_TEXT, @LOCAL00
    case 0xC1C9A0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1C8BC.asm:84 LOADPTR PP_COST_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC1C99F.
    case 0xC1C9A1: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:84 LOADPTR PP_COST_TEXT, @LOCAL00
    case 0xC1C9A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1C8BC.asm:84 LOADPTR PP_COST_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC1C9A2.
    case 0xC1C9A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:84 LOADPTR PP_COST_TEXT, @LOCAL00
    case 0xC1C9A5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C8BC.asm:91 LDA #8
    case 0xC1C9A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C1C8BC.asm:91 LDA #8
    // Overlapping static entry reached from 0xC1C9A7.
    case 0xC1C9A9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1C8BC.asm:92 JSR PRINT_STRING
    case 0xC1C9AA: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C1C8BC.asm:93 LDA #CHAR::SPACE
    case 0xC1C9AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x000050, 3); return true;
    // src/unknown/C1/C1C8BC.asm:93 LDA #CHAR::SPACE
    // Overlapping static entry reached from 0xC1C9AD.
    case 0xC1C9AF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1C8BC.asm:94 JSR PRINT_LETTER
    case 0xC1C9B0: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // src/unknown/C1/C1C8BC.asm:95 LDA #129
    case 0xC1C9B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000081, 2); else cpu.execute_instruction<0xA9>(0x000081, 3); return true;
    // src/unknown/C1/C1C8BC.asm:95 LDA #129
    // Overlapping static entry reached from 0xC1C9B3.
    case 0xC1C9B5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1C8BC.asm:96 JSR UNKNOWN_C10EB4
    case 0xC1C9B6: cpu.execute_instruction<0x20>(0x000EB4, 3); return true;
    // src/unknown/C1/C1C8BC.asm:97 LDX #1
    case 0xC1C9B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1C8BC.asm:97 LDX #1
    // Overlapping static entry reached from 0xC1C9B9.
    case 0xC1C9BB: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1C8BC.asm:98 LDA #40
    case 0xC1C9BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // src/unknown/C1/C1C8BC.asm:98 LDA #40
    // Overlapping static entry reached from 0xC1C9BC.
    case 0xC1C9BE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1C8BC.asm:99 JSL UNKNOWN_C43D75
    case 0xC1C9BF: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1C8BC.asm:101 LDY @LOCAL02
    case 0xC1C9C3: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C1C8BC.asm:102 TYA
    case 0xC1C9C5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C9C6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C9C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C9C9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C9CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C9CC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C9CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:103 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1C9CF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1C8BC.asm:104 TAX
    case 0xC1C9D1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:105 INX
    case 0xC1C9D2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:106 INX
    case 0xC1C9D3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:107 INX
    case 0xC1C9D4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:108 INX
    case 0xC1C9D5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:109 LDA f:PSI_ABILITY_TABLE,X
    case 0xC1C9D6: cpu.execute_instruction<0xBF>(0xD58A50, 4); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:110 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C9DA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:110 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C9DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C1/C1C8BC.asm:110 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C9DD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:110 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C9DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C1/C1C8BC.asm:110 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC1C9E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:111 TAX
    case 0xC1C9E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:112 INX
    case 0xC1C9E2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:113 INX
    case 0xC1C9E3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:114 INX
    case 0xC1C9E4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1C8BC.asm:115 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C9E5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1C8BC.asm:116 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC1C9E7: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1C8BC.asm:117 STORE_INT832 @VIRTUAL06
    case 0xC1C9EB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1C8BC.asm:117 STORE_INT832 @VIRTUAL06
    case 0xC1C9ED: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:117 STORE_INT832 @VIRTUAL06
    case 0xC1C9EF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1C8BC.asm:117 STORE_INT832 @VIRTUAL06
    case 0xC1C9F1: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1C8BC.asm:118 REP #PROC_FLAGS::ACCUM8
    case 0xC1C9F3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1C8BC.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C9F5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1C8BC.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C9F7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C9F9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1C8BC.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C9FB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1C8BC.asm:120 JSR PRINT_NUMBER
    case 0xC1C9FD: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1C8BC.asm:121 JSR CLEAR_INSTANT_PRINTING
    case 0xC1CA00: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1C8BC.asm:122 END_C_FUNCTION
    case 0xC1CA04: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1C8BC.asm:122 END_C_FUNCTION
    case 0xC1CA05: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1CA06.asm (unresolved).
bool execute_unresolved_c1_c1ca06_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CA06.asm:3 BEGIN_C_FUNCTION
    case 0xC1CA06: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    case 0xC1CA08: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    case 0xC1CA09: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    case 0xC1CA0A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    case 0xC1CA0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1CA0B.
    case 0xC1CA0D: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    case 0xC1CA0E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1CA06.asm:10 END_STACK_VARS
    case 0xC1CA0F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:11 STA @LOCAL01
    case 0xC1CA10: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1CA06.asm:11 STA @LOCAL01
    // Overlapping static entry reached from 0xC1CA0D.
    case 0xC1CA11: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:12 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CA12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008A50, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:12 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CA11.
    case 0xC1CA13: cpu.execute_instruction<0x50>(0x00008A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:12 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CA12.
    case 0xC1CA14: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1CA06.asm:12 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CA15: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:12 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CA17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:12 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CA17.
    case 0xC1CA19: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1CA06.asm:12 LOADPTR PSI_ABILITY_TABLE, @VIRTUAL06
    case 0xC1CA1A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1CA06.asm:13 LDA @LOCAL01
    case 0xC1CA1C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CA1E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CA20: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CA21: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CA23: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CA24: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CA26: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1CA06.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CA27: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1CA06.asm:15 TAX
    case 0xC1CA29: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:16 STX @LOCAL01
    case 0xC1CA2A: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1CA06.asm:17 TXA
    case 0xC1CA2C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C1CA06.asm:19 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1CA2D: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C1CA06.asm:19 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1CA2F: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C1CA06.asm:19 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1CA31: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C1CA06.asm:19 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1CA33: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C1CA06.asm:20 CLC
    case 0xC1CA35: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:21 ADC @VIRTUAL0A
    case 0xC1CA36: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C1CA06.asm:22 STA @VIRTUAL0A
    case 0xC1CA38: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C1CA06.asm:23 LDA [@VIRTUAL0A]
    case 0xC1CA3A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C1CA06.asm:24 AND #$00FF
    case 0xC1CA3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CA06.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC1CA3C.
    case 0xC1CA3E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CA06.asm:25 JSR GET_PSI_NAME
    case 0xC1CA3F: cpu.execute_instruction<0x20>(0x00C403, 3); return true;
    // src/unknown/C1/C1CA06.asm:26 LDX @LOCAL01
    case 0xC1CA42: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1CA06.asm:27 TXA
    case 0xC1CA44: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:499 INC
    // Macro caller: src/unknown/C1/C1CA06.asm:28 OPTIMIZED_ADD psi_ability::level
    case 0xC1CA45: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:29 CLC
    case 0xC1CA46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:30 ADC @VIRTUAL06
    case 0xC1CA47: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1CA06.asm:31 STA @VIRTUAL06
    case 0xC1CA49: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1CA06.asm:32 LDA [@VIRTUAL06]
    case 0xC1CA4B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C1CA06.asm:33 AND #$00FF
    case 0xC1CA4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CA06.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC1CA4D.
    case 0xC1CA4F: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1CA06.asm:34 DEC
    case 0xC1CA50: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:35 ASL
    case 0xC1CA51: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:42 PHA
    case 0xC1CA52: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:43 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1CA53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x00F112, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:43 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CA53.
    case 0xC1CA55: cpu.execute_instruction<0xF1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1CA06.asm:43 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1CA56: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1CA06.asm:43 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CA55.
    case 0xC1CA57: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:43 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1CA58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:43 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CA57.
    case 0xC1CA59: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1CA06.asm:43 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1CA58.
    case 0xC1CA5A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1CA06.asm:43 LOADPTR PSI_SUFFIXES, @VIRTUAL06
    case 0xC1CA5B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1CA06.asm:44 PLA
    case 0xC1CA5D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:45 CLC
    case 0xC1CA5E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CA06.asm:46 ADC @VIRTUAL06
    case 0xC1CA5F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1CA06.asm:47 STA @VIRTUAL06
    case 0xC1CA61: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1CA06.asm:48 STA @LOCAL00
    case 0xC1CA63: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1CA06.asm:49 LDA @VIRTUAL06+2
    case 0xC1CA65: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1CA06.asm:50 STA @LOCAL00+2
    case 0xC1CA67: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1CA06.asm:51 LDA #.LOWORD(-1)
    case 0xC1CA69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1CA06.asm:51 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1CA69.
    case 0xC1CA6B: cpu.execute_instruction<0xFF>(0x47FB22, 4); return true;
    // src/unknown/C1/C1CA06.asm:52 JSL UNKNOWN_C447FB
    case 0xC1CA6C: cpu.execute_instruction<0x22>(0xC447FB, 4); return true;
    // src/unknown/C1/C1CA06.asm:52 JSL UNKNOWN_C447FB
    // Overlapping static entry reached from 0xC1CA6B.
    case 0xC1CA6F: cpu.execute_instruction<0xC4>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1CA06.asm:54 END_C_FUNCTION
    case 0xC1CA70: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1CA06.asm:54 END_C_FUNCTION
    case 0xC1CA71: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1CA72.asm (unresolved).
bool execute_unresolved_c1_c1ca72_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CA72.asm:3 BEGIN_C_FUNCTION
    case 0xC1CA72: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1CA72.asm:9 END_STACK_VARS
    case 0xC1CA74: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1CA72.asm:9 END_STACK_VARS
    case 0xC1CA75: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1CA72.asm:9 END_STACK_VARS
    case 0xC1CA76: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CA72.asm:9 END_STACK_VARS
    case 0xC1CA77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CA72.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1CA77.
    case 0xC1CA79: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1CA72.asm:9 END_STACK_VARS
    case 0xC1CA7A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1CA72.asm:9 END_STACK_VARS
    case 0xC1CA7B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72.asm:10 STX @VIRTUAL02
    case 0xC1CA7C: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1CA72.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1CA79.
    case 0xC1CA7D: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C1/C1CA72.asm:11 STA @VIRTUAL04
    case 0xC1CA7E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1CA72.asm:12 JSL SET_INSTANT_PRINTING
    case 0xC1CA80: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/unknown/C1/C1CA72.asm:13 LDA CURRENT_FOCUS_WINDOW
    case 0xC1CA84: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C1CA72.asm:14 ASL
    case 0xC1CA87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72.asm:15 TAX
    case 0xC1CA88: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC1CA89: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C1CA72.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC1CA8C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C1CA72.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1CA8C.
    case 0xC1CA8E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1CA72.asm:18 JSL MULT168
    case 0xC1CA8F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1CA72.asm:19 CLC
    case 0xC1CA93: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72.asm:20 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1CA94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C1/C1CA72.asm:20 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1CA94.
    case 0xC1CA96: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C1CA72.asm:21 CLC
    case 0xC1CA97: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72.asm:22 ADC #window_stats::text_y
    case 0xC1CA98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C1/C1CA72.asm:22 ADC #window_stats::text_y
    // Overlapping static entry reached from 0xC1CA98.
    case 0xC1CA9A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1CA72.asm:23 TAX
    case 0xC1CA9B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72.asm:24 STX @LOCAL01
    case 0xC1CA9C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C1CA72.asm:25 LDA __BSS_START__,X
    case 0xC1CA9E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1CA72.asm:26 TAY
    case 0xC1CAA1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72.asm:27 STY @LOCAL00
    case 0xC1CAA2: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C1CA72.asm:28 LDA CURRENT_FOCUS_WINDOW
    case 0xC1CAA4: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C1CA72.asm:29 JSL UNKNOWN_EF0115
    case 0xC1CAA7: cpu.execute_instruction<0x22>(0xEF0115, 4); return true;
    // src/unknown/C1/C1CA72.asm:30 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC1CAAB: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // src/unknown/C1/C1CA72.asm:31 LDA OVERWORLD_SELECTED_PSI_USER
    case 0xC1CAAF: cpu.execute_instruction<0xAD>(0x009D16, 3); return true;
    // src/unknown/C1/C1CA72.asm:32 JSL UNKNOWN_C1C853
    case 0xC1CAB2: cpu.execute_instruction<0x22>(0xC1C853, 4); return true;
    // src/unknown/C1/C1CA72.asm:33 JSR PRINT_MENU_ITEMS
    case 0xC1CAB6: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // src/unknown/C1/C1CA72.asm:34 LDY @LOCAL00
    case 0xC1CAB9: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C1CA72.asm:35 TYA
    case 0xC1CABB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72.asm:36 LDX @LOCAL01
    case 0xC1CABC: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C1/C1CA72.asm:37 STA __BSS_START__,X
    case 0xC1CABE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1CA72.asm:38 JSR GET_TEXT_Y
    case 0xC1CAC1: cpu.execute_instruction<0x20>(0x0004D8, 3); return true;
    // src/unknown/C1/C1CA72.asm:39 TAX
    case 0xC1CAC4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72.asm:40 LDA #0
    case 0xC1CAC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1CA72.asm:40 LDA #0
    // Overlapping static entry reached from 0xC1CAC5.
    case 0xC1CAC7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1CA72.asm:41 JSL UNKNOWN_C438A5
    case 0xC1CAC8: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C1CA72.asm:42 LDA @VIRTUAL02
    case 0xC1CACC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CA72.asm:43 JSR UNKNOWN_C10FEA
    case 0xC1CACE: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/unknown/C1/C1CA72.asm:44 LDA @VIRTUAL04
    case 0xC1CAD1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/unknown/C1/C1CA72.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CAD3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/unknown/C1/C1CA72.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CAD5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/unknown/C1/C1CA72.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CAD6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/unknown/C1/C1CA72.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CAD8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/unknown/C1/C1CA72.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CAD9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/unknown/C1/C1CA72.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CADB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/unknown/C1/C1CA72.asm:45 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_ability)
    case 0xC1CADC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1CA72.asm:46 TAX
    case 0xC1CADE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CA72.asm:47 LDA f:PSI_ABILITY_TABLE + psi_ability::name,X
    case 0xC1CADF: cpu.execute_instruction<0xBF>(0xD58A50, 4); return true;
    // src/unknown/C1/C1CA72.asm:48 AND #$00FF
    case 0xC1CAE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CA72.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC1CAE3.
    case 0xC1CAE5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CA72.asm:49 JSR GET_PSI_NAME
    case 0xC1CAE6: cpu.execute_instruction<0x20>(0x00C403, 3); return true;
    // src/unknown/C1/C1CA72.asm:50 LDA #0
    case 0xC1CAE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1CA72.asm:50 LDA #0
    // Overlapping static entry reached from 0xC1CAE9.
    case 0xC1CAEB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1CA72.asm:51 JSR UNKNOWN_C10FEA
    case 0xC1CAEC: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/unknown/C1/C1CA72.asm:51 JSR UNKNOWN_C10FEA
    // Overlapping static entry reached from 0xC15095.
    case 0xC1CAEE: cpu.execute_instruction<0x0F>(0xE4CA22, 4); return true;
    // src/unknown/C1/C1CA72.asm:52 JSL CLEAR_INSTANT_PRINTING
    case 0xC1CAEF: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/unknown/C1/C1CA72.asm:52 JSL CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1CAEE.
    case 0xC1CAF2: cpu.execute_instruction<0xC3>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1CA72.asm:53 END_C_FUNCTION
    case 0xC1CAF3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1CA72.asm:53 END_C_FUNCTION
    case 0xC1CAF4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1CAF5.asm (unresolved).
bool execute_unresolved_c1_c1caf5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CAF5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1CAF5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    case 0xC1CAF7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    case 0xC1CAF8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    case 0xC1CAF9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    case 0xC1CAFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1CAFA.
    case 0xC1CAFC: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    case 0xC1CAFD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1CAF5.asm:10 END_STACK_VARS
    case 0xC1CAFE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:11 TAX
    case 0xC1CAFF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:12 STX @LOCAL03
    case 0xC1CB00: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C1CAF5.asm:21 LDX BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC1CB02: cpu.execute_instruction<0xAE>(0x0089CA, 3); return true;
    // src/unknown/C1/C1CAF5.asm:22 LDA GAME_STATE + game_state::party_members,X
    case 0xC1CB05: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/unknown/C1/C1CAF5.asm:24 AND #$00FF
    case 0xC1CB08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1CAF5.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC1CB08.
    case 0xC1CB0A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1CAF5.asm:25 TAY
    case 0xC1CB0B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:26 STY @LOCAL02
    case 0xC1CB0C: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1CAF5.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1CB0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1CAF5.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1CB0E.
    case 0xC1CB10: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1CAF5.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1CB11: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1CAF5.asm:29 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC1CB14: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // src/unknown/C1/C1CAF5.asm:31 LDX @LOCAL03
    case 0xC1CB18: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C1CAF5.asm:32 TXA
    case 0xC1CB1A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:33 CMP #1
    case 0xC1CB1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1CAF5.asm:33 CMP #1
    // Overlapping static entry reached from 0xC1CB1B.
    case 0xC1CB1D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CAF5.asm:34 BEQ @UNKNOWN0
    case 0xC1CB1E: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C1/C1CAF5.asm:35 CMP #2
    case 0xC1CB20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1CAF5.asm:35 CMP #2
    // Overlapping static entry reached from 0xC1CB20.
    case 0xC1CB22: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CAF5.asm:36 BEQ @UNKNOWN1
    case 0xC1CB23: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:37 CMP #3
    case 0xC1CB25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1CAF5.asm:37 CMP #3
    // Overlapping static entry reached from 0xC1CB25.
    case 0xC1CB27: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CAF5.asm:38 BEQ @UNKNOWN2
    case 0xC1CB28: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/unknown/C1/C1CAF5.asm:39 CMP #4
    case 0xC1CB2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1CAF5.asm:39 CMP #4
    // Overlapping static entry reached from 0xC1CB2A.
    case 0xC1CB2C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CAF5.asm:40 BEQ @UNKNOWN3
    case 0xC1CB2D: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C1/C1CAF5.asm:41 BRA @UNKNOWN4
    case 0xC1CB2F: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C1/C1CAF5.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CB31: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:44 LDA #2
    case 0xC1CB33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008502, 3); return true;
    // src/unknown/C1/C1CAF5.asm:45 STA @LOCAL00
    case 0xC1CB35: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1CAF5.asm:45 STA @LOCAL00
    // Overlapping static entry reached from 0xC1CB33.
    case 0xC1CB36: cpu.execute_instruction<0x0E>(0x0001A9, 3); return true;
    // src/unknown/C1/C1CAF5.asm:46 LDA #1
    case 0xC1CB37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008501, 3); return true;
    // src/unknown/C1/C1CAF5.asm:47 STA @LOCAL01
    case 0xC1CB39: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C1/C1CAF5.asm:47 STA @LOCAL01
    // Overlapping static entry reached from 0xC1CB37.
    case 0xC1CB3A: cpu.execute_instruction<0x0F>(0xC210A4, 4); return true;
    // src/unknown/C1/C1CAF5.asm:48 LDY @LOCAL02
    case 0xC1CB3B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CAF5.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC1CB3D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:49 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1CB3A.
    case 0xC1CB3E: cpu.execute_instruction<0x20>(0x002098, 3); return true;
    // src/unknown/C1/C1CAF5.asm:50 TYA
    case 0xC1CB3F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:51 JSR GENERATE_PSI_LIST
    case 0xC1CB40: cpu.execute_instruction<0x20>(0x00C452, 3); return true;
    // src/unknown/C1/C1CAF5.asm:51 JSR GENERATE_PSI_LIST
    // Overlapping static entry reached from 0xC1CB3E.
    case 0xC1CB41: cpu.execute_instruction<0x52>(0x0000C4, 2); return true;
    // src/unknown/C1/C1CAF5.asm:52 BRA @UNKNOWN4
    case 0xC1CB43: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C1/C1CAF5.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CB45: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:55 LDA #2
    case 0xC1CB47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008502, 3); return true;
    // src/unknown/C1/C1CAF5.asm:56 STA @LOCAL00
    case 0xC1CB49: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1CAF5.asm:56 STA @LOCAL00
    // Overlapping static entry reached from 0xC1CB47.
    case 0xC1CB4A: cpu.execute_instruction<0x0E>(0x000F85, 3); return true;
    // src/unknown/C1/C1CAF5.asm:57 STA @LOCAL01
    case 0xC1CB4B: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C1/C1CAF5.asm:58 LDY @LOCAL02
    case 0xC1CB4D: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CAF5.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC1CB4F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:60 TYA
    case 0xC1CB51: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:61 JSR GENERATE_PSI_LIST
    case 0xC1CB52: cpu.execute_instruction<0x20>(0x00C452, 3); return true;
    // src/unknown/C1/C1CAF5.asm:62 BRA @UNKNOWN4
    case 0xC1CB55: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C1/C1CAF5.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CB57: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:65 LDA #2
    case 0xC1CB59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008502, 3); return true;
    // src/unknown/C1/C1CAF5.asm:66 STA @LOCAL00
    case 0xC1CB5B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1CAF5.asm:66 STA @LOCAL00
    // Overlapping static entry reached from 0xC1CB59.
    case 0xC1CB5C: cpu.execute_instruction<0x0E>(0x0004A9, 3); return true;
    // src/unknown/C1/C1CAF5.asm:67 LDA #4
    case 0xC1CB5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008504, 3); return true;
    // src/unknown/C1/C1CAF5.asm:68 STA @LOCAL01
    case 0xC1CB5F: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C1/C1CAF5.asm:68 STA @LOCAL01
    // Overlapping static entry reached from 0xC1CB5D.
    case 0xC1CB60: cpu.execute_instruction<0x0F>(0xC210A4, 4); return true;
    // src/unknown/C1/C1CAF5.asm:69 LDY @LOCAL02
    case 0xC1CB61: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CAF5.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC1CB63: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:70 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1CB60.
    case 0xC1CB64: cpu.execute_instruction<0x20>(0x002098, 3); return true;
    // src/unknown/C1/C1CAF5.asm:71 TYA
    case 0xC1CB65: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:72 JSR GENERATE_PSI_LIST
    case 0xC1CB66: cpu.execute_instruction<0x20>(0x00C452, 3); return true;
    // src/unknown/C1/C1CAF5.asm:72 JSR GENERATE_PSI_LIST
    // Overlapping static entry reached from 0xC1CB64.
    case 0xC1CB67: cpu.execute_instruction<0x52>(0x0000C4, 2); return true;
    // src/unknown/C1/C1CAF5.asm:73 BRA @UNKNOWN4
    case 0xC1CB69: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C1/C1CAF5.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC1CB6B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:76 LDA #3
    case 0xC1CB6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008503, 3); return true;
    // src/unknown/C1/C1CAF5.asm:77 STA @LOCAL00
    case 0xC1CB6F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1CAF5.asm:77 STA @LOCAL00
    // Overlapping static entry reached from 0xC1CB6D.
    case 0xC1CB70: cpu.execute_instruction<0x0E>(0x0008A9, 3); return true;
    // src/unknown/C1/C1CAF5.asm:78 LDA #8
    case 0xC1CB71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x008508, 3); return true;
    // src/unknown/C1/C1CAF5.asm:79 STA @LOCAL01
    case 0xC1CB73: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C1/C1CAF5.asm:79 STA @LOCAL01
    // Overlapping static entry reached from 0xC1CB71.
    case 0xC1CB74: cpu.execute_instruction<0x0F>(0xC210A4, 4); return true;
    // src/unknown/C1/C1CAF5.asm:80 LDY @LOCAL02
    case 0xC1CB75: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C1CAF5.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xC1CB77: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1CAF5.asm:81 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1CB74.
    case 0xC1CB78: cpu.execute_instruction<0x20>(0x002098, 3); return true;
    // src/unknown/C1/C1CAF5.asm:82 TYA
    case 0xC1CB79: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1CAF5.asm:83 JSR GENERATE_PSI_LIST
    case 0xC1CB7A: cpu.execute_instruction<0x20>(0x00C452, 3); return true;
    // src/unknown/C1/C1CAF5.asm:83 JSR GENERATE_PSI_LIST
    // Overlapping static entry reached from 0xC1CB78.
    case 0xC1CB7B: cpu.execute_instruction<0x52>(0x0000C4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1CAF5.asm:85 END_C_FUNCTION
    case 0xC1CB7D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1CAF5.asm:85 END_C_FUNCTION
    case 0xC1CB7E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1CB7F.asm (unresolved).
bool execute_unresolved_c1_c1cb7f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1CB7F.asm:3 BEGIN_C_FUNCTION
    case 0xC1CB7F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    case 0xC1CB81: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    case 0xC1CB82: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    case 0xC1CB83: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    case 0xC1CB84: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1CB84.
    case 0xC1CB86: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    case 0xC1CB87: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1CB7F.asm:8 END_STACK_VARS
    case 0xC1CB88: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1CB7F.asm:9 STX @VIRTUAL02
    case 0xC1CB89: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1CB7F.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1CB86.
    case 0xC1CB8A: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C1/C1CB7F.asm:10 CMP #1
    case 0xC1CB8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1CB7F.asm:10 CMP #1
    // Overlapping static entry reached from 0xC1CB8B.
    case 0xC1CB8D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CB7F.asm:11 BEQ @UNKNOWN0
    case 0xC1CB8E: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C1/C1CB7F.asm:12 CMP #2
    case 0xC1CB90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1CB7F.asm:12 CMP #2
    // Overlapping static entry reached from 0xC1CB90.
    case 0xC1CB92: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CB7F.asm:13 BEQ @UNKNOWN1
    case 0xC1CB93: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/unknown/C1/C1CB7F.asm:14 CMP #3
    case 0xC1CB95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C1CB7F.asm:14 CMP #3
    // Overlapping static entry reached from 0xC1CB95.
    case 0xC1CB97: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1CB7F.asm:15 BEQ @UNKNOWN2
    case 0xC1CB98: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C1/C1CB7F.asm:16 BRA @UNKNOWN3
    case 0xC1CB9A: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C1/C1CB7F.asm:18 LDY #1
    case 0xC1CB9C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C1CB7F.asm:18 LDY #1
    // Overlapping static entry reached from 0xC1CB9C.
    case 0xC1CB9E: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1CB7F.asm:19 LDX #2
    case 0xC1CB9F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C1/C1CB7F.asm:19 LDX #2
    // Overlapping static entry reached from 0xC1CB9F.
    case 0xC1CBA1: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1CB7F.asm:20 LDA @VIRTUAL02
    case 0xC1CBA2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CB7F.asm:21 JSR UNKNOWN_C1C1BA
    case 0xC1CBA4: cpu.execute_instruction<0x20>(0x00C1BA, 3); return true;
    // src/unknown/C1/C1CB7F.asm:22 TAY
    case 0xC1CBA7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CB7F.asm:23 STY @LOCAL00
    case 0xC1CBA8: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C1CB7F.asm:24 BRA @UNKNOWN3
    case 0xC1CBAA: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C1/C1CB7F.asm:26 LDY #2
    case 0xC1CBAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C1/C1CB7F.asm:26 LDY #2
    // Overlapping static entry reached from 0xC1CBAC.
    case 0xC1CBAE: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C1/C1CB7F.asm:27 TYX
    case 0xC1CBAF: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C1CB7F.asm:28 LDA @VIRTUAL02
    case 0xC1CBB0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CB7F.asm:29 JSR UNKNOWN_C1C1BA
    case 0xC1CBB2: cpu.execute_instruction<0x20>(0x00C1BA, 3); return true;
    // src/unknown/C1/C1CB7F.asm:30 TAY
    case 0xC1CBB5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CB7F.asm:31 STY @LOCAL00
    case 0xC1CBB6: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C1CB7F.asm:32 BRA @UNKNOWN3
    case 0xC1CBB8: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C1/C1CB7F.asm:34 LDY #4
    case 0xC1CBBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C1/C1CB7F.asm:34 LDY #4
    // Overlapping static entry reached from 0xC1CBBA.
    case 0xC1CBBC: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C1CB7F.asm:35 LDX #2
    case 0xC1CBBD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C1/C1CB7F.asm:35 LDX #2
    // Overlapping static entry reached from 0xC1CBBD.
    case 0xC1CBBF: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1CB7F.asm:36 LDA @VIRTUAL02
    case 0xC1CBC0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1CB7F.asm:37 JSR UNKNOWN_C1C1BA
    case 0xC1CBC2: cpu.execute_instruction<0x20>(0x00C1BA, 3); return true;
    // src/unknown/C1/C1CB7F.asm:38 TAY
    case 0xC1CBC5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1CB7F.asm:39 STY @LOCAL00
    case 0xC1CBC6: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C1CB7F.asm:41 LDY @LOCAL00
    case 0xC1CBC8: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C1CB7F.asm:42 TYA
    case 0xC1CBCA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1CB7F.asm:43 END_C_FUNCTION
    case 0xC1CBCB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1CB7F.asm:43 END_C_FUNCTION
    case 0xC1CBCC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
