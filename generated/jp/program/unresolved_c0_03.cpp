// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C0/C068F4.asm (unresolved).
bool execute_unresolved_c0_c068f4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C068F4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06B22: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    case 0xC06B24: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    case 0xC06B25: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    case 0xC06B26: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    case 0xC06B27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC06B27.
    case 0xC06B29: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    case 0xC06B2A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C068F4.asm:8 END_STACK_VARS
    case 0xC06B2B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:9 STA @LOCAL01
    case 0xC06B2C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C068F4.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC06B29.
    case 0xC06B2D: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C0/C068F4.asm:10 LDA DISABLE_MUSIC_CHANGES
    case 0xC06B2E: cpu.execute_instruction<0xAD>(0x00615E, 3); return true;
    // src/unknown/C0/C068F4.asm:10 LDA DISABLE_MUSIC_CHANGES
    // Overlapping static entry reached from 0xC06B2D.
    case 0xC06B2F: cpu.execute_instruction<0x5E>(0x00F061, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C068F4.asm:11 BNEL @UNKNOWN4
    case 0xC06B31: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C068F4.asm:11 BNEL @UNKNOWN4
    // Overlapping static entry reached from 0xC06B2F.
    case 0xC06B32: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C068F4.asm:11 BNEL @UNKNOWN4
    case 0xC06B33: cpu.execute_instruction<0x4C>(0x006BDB, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C068F4.asm:11 BNEL @UNKNOWN4
    // Overlapping static entry reached from 0xC06B32.
    case 0xC06B34: cpu.execute_instruction<0xDB>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:12 LDA @LOCAL01
    case 0xC06B36: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C068F4.asm:13 XBA
    case 0xC06B38: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:14 AND #$00FF
    case 0xC06B39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C068F4.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC06B39.
    case 0xC06B3B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C068F4.asm:15 STA @VIRTUAL02
    case 0xC06B3C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C068F4.asm:16 LDY #MAP_WIDTH_TILES
    case 0xC06B3E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x000080, 3); return true;
    // src/unknown/C0/C068F4.asm:16 LDY #MAP_WIDTH_TILES
    // Overlapping static entry reached from 0xC06B3E.
    case 0xC06B40: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C068F4.asm:17 TXA
    case 0xC06B41: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:18 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC06B42: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C0/C068F4.asm:19 ASL
    case 0xC06B46: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:20 ASL
    case 0xC06B47: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:21 ASL
    case 0xC06B48: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:22 ASL
    case 0xC06B49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:23 ASL
    case 0xC06B4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:24 CLC
    case 0xC06B4B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:25 ADC @VIRTUAL02
    case 0xC06B4C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C068F4.asm:26 TAX
    case 0xC06B4E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:27 LDA f:MAP_DATA_PER_SECTOR_MUSIC,X
    case 0xC06B4F: cpu.execute_instruction<0xBF>(0xDCD634, 4); return true;
    // src/unknown/C0/C068F4.asm:28 AND #$00FF
    case 0xC06B53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C068F4.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC06B53.
    case 0xC06B55: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C068F4.asm:29 STA @LOCAL01
    case 0xC06B56: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C068F4.asm:30 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC06B58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C068F4.asm:30 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06B58.
    case 0xC06B5A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C068F4.asm:30 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC06B5B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C068F4.asm:30 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC06B5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C068F4.asm:30 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06B5D.
    case 0xC06B5F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C068F4.asm:30 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC06B60: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C068F4.asm:31 LDA @LOCAL01
    case 0xC06B62: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C068F4.asm:32 ASL
    case 0xC06B64: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:33 TAX
    case 0xC06B65: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:34 LDA f:OVERWORLD_EVENT_MUSIC_PTR_TABLE,X
    case 0xC06B66: cpu.execute_instruction<0xBF>(0xCF592B, 4); return true;
    // src/unknown/C0/C068F4.asm:35 AND #$7FFF
    case 0xC06B6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C068F4.asm:35 AND #$7FFF
    // Overlapping static entry reached from 0xC06B6A.
    case 0xC06B6C: cpu.execute_instruction<0x7F>(0x0A6518, 4); return true;
    // src/unknown/C0/C068F4.asm:36 CLC
    case 0xC06B6D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:37 ADC @VIRTUAL0A
    case 0xC06B6E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C068F4.asm:38 STA @VIRTUAL0A
    case 0xC06B70: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C068F4.asm:40 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06B72: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C068F4.asm:40 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06B74: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C068F4.asm:40 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06B76: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C068F4.asm:40 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06B78: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C068F4.asm:41 LDA [@VIRTUAL06]
    case 0xC06B7A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C068F4.asm:42 BEQ @UNKNOWN3
    case 0xC06B7C: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C0/C068F4.asm:43 AND #$7FFF
    case 0xC06B7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C068F4.asm:43 AND #$7FFF
    // Overlapping static entry reached from 0xC06B7E.
    case 0xC06B80: cpu.execute_instruction<0x7F>(0x14D022, 4); return true;
    // src/unknown/C0/C068F4.asm:44 JSL GET_EVENT_FLAG
    case 0xC06B81: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C0/C068F4.asm:44 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC06B80.
    case 0xC06B84: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // src/unknown/C0/C068F4.asm:45 STA @LOCAL00
    case 0xC06B85: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C068F4.asm:45 STA @LOCAL00
    // Overlapping static entry reached from 0xC06B84.
    case 0xC06B86: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C0/C068F4.asm:46 LDX #0
    case 0xC06B87: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C068F4.asm:46 LDX #0
    // Overlapping static entry reached from 0xC06B87.
    case 0xC06B89: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/unknown/C0/C068F4.asm:47 LDA [@VIRTUAL06]
    case 0xC06B8A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C068F4.asm:48 CMP #$8000
    case 0xC06B8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C068F4.asm:48 CMP #$8000
    // Overlapping static entry reached from 0xC06B8C.
    case 0xC06B8E: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C068F4.asm:49 BLTEQ @UNKNOWN2
    case 0xC06B8F: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C068F4.asm:49 BLTEQ @UNKNOWN2
    case 0xC06B91: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C068F4.asm:50 LDX #1
    case 0xC06B93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C068F4.asm:50 LDX #1
    // Overlapping static entry reached from 0xC06B93.
    case 0xC06B95: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C068F4.asm:52 STX @VIRTUAL02
    case 0xC06B96: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C068F4.asm:53 LDA @LOCAL00
    case 0xC06B98: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C068F4.asm:54 CMP @VIRTUAL02
    case 0xC06B9A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C068F4.asm:55 BEQ @UNKNOWN3
    case 0xC06B9C: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C068F4.asm:56 LDA #4
    case 0xC06B9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C068F4.asm:56 LDA #4
    // Overlapping static entry reached from 0xC06B9E.
    case 0xC06BA0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C068F4.asm:57 CLC
    case 0xC06BA1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:58 ADC @VIRTUAL0A
    case 0xC06BA2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C068F4.asm:59 STA @VIRTUAL0A
    case 0xC06BA4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C068F4.asm:60 BRA @UNKNOWN1
    case 0xC06BA6: cpu.execute_instruction<0x80>(0x0000CA, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C068F4.asm:62 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06BA8: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C068F4.asm:62 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06BAA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C068F4.asm:62 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06BAC: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C068F4.asm:62 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06BAE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C068F4.asm:63 MOVE_INT @VIRTUAL06, LOADED_MAP_MUSIC_ENTRY
    case 0xC06BB0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C068F4.asm:63 MOVE_INT @VIRTUAL06, LOADED_MAP_MUSIC_ENTRY
    case 0xC06BB2: cpu.execute_instruction<0x8D>(0x0061BE, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C068F4.asm:63 MOVE_INT @VIRTUAL06, LOADED_MAP_MUSIC_ENTRY
    case 0xC06BB5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C068F4.asm:63 MOVE_INT @VIRTUAL06, LOADED_MAP_MUSIC_ENTRY
    case 0xC06BB7: cpu.execute_instruction<0x8D>(0x0061C0, 3); return true;
    // src/unknown/C0/C068F4.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC06BBA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C068F4.asm:65 LDY #2
    case 0xC06BBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C068F4.asm:65 LDY #2
    // Overlapping static entry reached from 0xC06BBC.
    case 0xC06BBE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C068F4.asm:66 LDA [@VIRTUAL0A],Y
    case 0xC06BBF: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C068F4.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC06BC1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C068F4.asm:68 AND #$00FF
    case 0xC06BC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C068F4.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC06BC3.
    case 0xC06BC5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C068F4.asm:69 TAX
    case 0xC06BC6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C068F4.asm:70 STX NEXT_MAP_MUSIC_TRACK
    case 0xC06BC7: cpu.execute_instruction<0x8E>(0x00615C, 3); return true;
    // src/unknown/C0/C068F4.asm:71 LDA DO_MAP_MUSIC_FADE
    case 0xC06BCA: cpu.execute_instruction<0xAD>(0x006160, 3); return true;
    // src/unknown/C0/C068F4.asm:72 BNE @UNKNOWN4
    case 0xC06BCD: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C068F4.asm:73 CPX CURRENT_MAP_MUSIC_TRACK
    case 0xC06BCF: cpu.execute_instruction<0xEC>(0x00615A, 3); return true;
    // src/unknown/C0/C068F4.asm:74 BEQ @UNKNOWN4
    case 0xC06BD2: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C068F4.asm:75 LDA #2
    case 0xC06BD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C068F4.asm:75 LDA #2
    // Overlapping static entry reached from 0xC06BD4.
    case 0xC06BD6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C068F4.asm:76 JSL UNKNOWN_C0AC0C
    case 0xC06BD7: cpu.execute_instruction<0x22>(0xC0ABEB, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C068F4.asm:78 END_C_FUNCTION
    case 0xC06BDB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C068F4.asm:78 END_C_FUNCTION
    case 0xC06BDC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C069AF.asm (unresolved).
bool execute_unresolved_c0_c069af_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C069AF.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06BDD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C069AF.asm:5 END_STACK_VARS
    case 0xC06BDF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C069AF.asm:5 END_STACK_VARS
    case 0xC06BE0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C069AF.asm:5 END_STACK_VARS
    case 0xC06BE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C069AF.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC06BE1.
    case 0xC06BE3: cpu.execute_instruction<0xFF>(0x5EAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C069AF.asm:5 END_STACK_VARS
    case 0xC06BE4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C069AF.asm:6 LDA DISABLE_MUSIC_CHANGES
    case 0xC06BE5: cpu.execute_instruction<0xAD>(0x00615E, 3); return true;
    // src/unknown/C0/C069AF.asm:6 LDA DISABLE_MUSIC_CHANGES
    // Overlapping static entry reached from 0xC06BE3.
    case 0xC06BE7: cpu.execute_instruction<0x61>(0x0000D0, 2); return true;
    // src/unknown/C0/C069AF.asm:7 BNE @UNKNOWN0
    case 0xC06BE8: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/unknown/C0/C069AF.asm:7 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC06BE7.
    case 0xC06BE9: cpu.execute_instruction<0x2F>(0x61BEAD, 4); return true;
    // include/macros.asm:230 LDA .LOWORD(ptr)
    // Macro caller: src/unknown/C0/C069AF.asm:8 LOADPTRPTR LOADED_MAP_MUSIC_ENTRY, @VIRTUAL06
    case 0xC06BEA: cpu.execute_instruction<0xAD>(0x0061BE, 3); return true;
    // include/macros.asm:231 STA var
    // Macro caller: src/unknown/C0/C069AF.asm:8 LOADPTRPTR LOADED_MAP_MUSIC_ENTRY, @VIRTUAL06
    case 0xC06BED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:232 LDA .LOWORD(ptr)+2
    // Macro caller: src/unknown/C0/C069AF.asm:8 LOADPTRPTR LOADED_MAP_MUSIC_ENTRY, @VIRTUAL06
    case 0xC06BEF: cpu.execute_instruction<0xAD>(0x0061C0, 3); return true;
    // include/macros.asm:233 STA var+2
    // Macro caller: src/unknown/C0/C069AF.asm:8 LOADPTRPTR LOADED_MAP_MUSIC_ENTRY, @VIRTUAL06
    case 0xC06BF2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C069AF.asm:9 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC06BF4: cpu.execute_instruction<0xAD>(0x00615C, 3); return true;
    // src/unknown/C0/C069AF.asm:10 CMP CURRENT_MAP_MUSIC_TRACK
    case 0xC06BF7: cpu.execute_instruction<0xCD>(0x00615A, 3); return true;
    // src/unknown/C0/C069AF.asm:11 BEQ @UNKNOWN0
    case 0xC06BFA: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C0/C069AF.asm:12 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC06BFC: cpu.execute_instruction<0xAD>(0x00615C, 3); return true;
    // src/unknown/C0/C069AF.asm:13 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC06BFF: cpu.execute_instruction<0x8D>(0x00615A, 3); return true;
    // src/unknown/C0/C069AF.asm:14 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC06C02: cpu.execute_instruction<0xAD>(0x00615C, 3); return true;
    // src/unknown/C0/C069AF.asm:15 JSL CHANGE_MUSIC
    case 0xC06C05: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/C0/C069AF.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC06C09: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C069AF.asm:17 LDY #$0003
    case 0xC06C0B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C069AF.asm:17 LDY #$0003
    // Overlapping static entry reached from 0xC06C0B.
    case 0xC06C0D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C069AF.asm:18 LDA [@VIRTUAL06],Y
    case 0xC06C0E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C069AF.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC06C10: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C069AF.asm:20 AND #$00FF
    case 0xC06C12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C069AF.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC06C12.
    case 0xC06C14: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C069AF.asm:21 JSL UNKNOWN_C0AC0C
    case 0xC06C15: cpu.execute_instruction<0x22>(0xC0ABEB, 4); return true;
    // src/unknown/C0/C069AF.asm:23 PLD
    case 0xC06C19: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C069AF.asm:24 RTL
    case 0xC06C1A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C069F7.asm (unresolved).
bool execute_unresolved_c0_c069f7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C069F7.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06C25: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C069F7.asm:4 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC06C27: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C069F7.asm:5 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC06C2A: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C069F7.asm:6 JSL UNKNOWN_C068F4
    case 0xC06C2D: cpu.execute_instruction<0x22>(0xC06B22, 4); return true;
    // src/unknown/C0/C069F7.asm:7 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC06C31: cpu.execute_instruction<0xAD>(0x00615C, 3); return true;
    // src/unknown/C0/C069F7.asm:8 RTL
    case 0xC06C34: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06A07.asm (unresolved).
bool execute_unresolved_c0_c06a07_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06A07.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06C35: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06A07.asm:4 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC06C37: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C06A07.asm:5 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC06C3A: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C06A07.asm:6 JSL UNKNOWN_C068F4
    case 0xC06C3D: cpu.execute_instruction<0x22>(0xC06B22, 4); return true;
    // src/unknown/C0/C06A07.asm:7 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC06C41: cpu.execute_instruction<0xAD>(0x00615C, 3); return true;
    // src/unknown/C0/C06A07.asm:8 JSL CHANGE_MUSIC
    case 0xC06C44: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/C0/C06A07.asm:9 RTL
    case 0xC06C48: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06A1B.asm (unresolved).
bool execute_unresolved_c0_c06a1b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06A1B.asm:3 BEGIN_C_FUNCTION
    case 0xC06C49: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    case 0xC06C4B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    case 0xC06C4C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    case 0xC06C4D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    case 0xC06C4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC06C4E.
    case 0xC06C50: cpu.execute_instruction<0xFF>(0x29685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    case 0xC06C51: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    case 0xC06C52: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:10 AND #$7FFF
    case 0xC06C53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C06A1B.asm:10 AND #$7FFF
    // Overlapping static entry reached from 0xC06C50.
    case 0xC06C54: cpu.execute_instruction<0xFF>(0x14857F, 4); return true;
    // src/unknown/C0/C06A1B.asm:10 AND #$7FFF
    // Overlapping static entry reached from 0xC06C53.
    case 0xC06C55: cpu.execute_instruction<0x7F>(0xA91485, 4); return true;
    // src/unknown/C0/C06A1B.asm:11 STA @LOCAL02
    case 0xC06C56: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC06C58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06C55.
    case 0xC06C59: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06C58.
    case 0xC06C5A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC06C5B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC06C5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06C5D.
    case 0xC06C5F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC06C60: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C06A1B.asm:13 LDA @LOCAL02
    case 0xC06C62: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C06A1B.asm:14 CLC
    case 0xC06C64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:15 ADC @VIRTUAL0A
    case 0xC06C65: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C06A1B.asm:16 STA @VIRTUAL0A
    case 0xC06C67: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C06A1B.asm:17 STA @VIRTUAL06
    case 0xC06C69: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C06A1B.asm:18 LDA @VIRTUAL0A+2
    case 0xC06C6B: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C0/C06A1B.asm:19 STA @VIRTUAL06+2
    case 0xC06C6D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C06A1B.asm:20 LDA [@VIRTUAL06]
    case 0xC06C6F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C06A1B.asm:21 AND #$7FFF
    case 0xC06C71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C06A1B.asm:21 AND #$7FFF
    // Overlapping static entry reached from 0xC06C71.
    case 0xC06C73: cpu.execute_instruction<0x7F>(0x14D022, 4); return true;
    // src/unknown/C0/C06A1B.asm:22 JSL GET_EVENT_FLAG
    case 0xC06C74: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C0/C06A1B.asm:22 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC06C73.
    case 0xC06C77: cpu.execute_instruction<0xC2>(0x0000AA, 2); return true;
    // src/unknown/C0/C06A1B.asm:23 TAX
    case 0xC06C78: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:24 LDA #0
    case 0xC06C79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C06A1B.asm:24 LDA #0
    // Overlapping static entry reached from 0xC06C79.
    case 0xC06C7B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06A1B.asm:25 STA @LOCAL01
    case 0xC06C7C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06A1B.asm:26 LDA [@VIRTUAL06]
    case 0xC06C7E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C06A1B.asm:27 CMP #EVENT_FLAG_UNSET
    case 0xC06C80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C06A1B.asm:27 CMP #EVENT_FLAG_UNSET
    // Overlapping static entry reached from 0xC06C80.
    case 0xC06C82: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06A1B.asm:28 BLTEQ @UNKNOWN0
    case 0xC06C83: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06A1B.asm:28 BLTEQ @UNKNOWN0
    case 0xC06C85: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C06A1B.asm:29 LDA #1
    case 0xC06C87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06A1B.asm:29 LDA #1
    // Overlapping static entry reached from 0xC06C87.
    case 0xC06C89: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06A1B.asm:30 STA @LOCAL01
    case 0xC06C8A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06A1B.asm:32 LDA @LOCAL01
    case 0xC06C8C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06A1B.asm:33 STA @VIRTUAL02
    case 0xC06C8E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06A1B.asm:34 TXA
    case 0xC06C90: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:35 CMP @VIRTUAL02
    case 0xC06C91: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C06A1B.asm:36 BNE @UNKNOWN1
    case 0xC06C93: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/unknown/C0/C06A1B.asm:37 LDY #2
    case 0xC06C95: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C06A1B.asm:37 LDY #2
    // Overlapping static entry reached from 0xC06C95.
    case 0xC06C97: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C06A1B.asm:38 LDA [@VIRTUAL0A],Y
    case 0xC06C98: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C06A1B.asm:39 PHA
    case 0xC06C9A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:40 INY
    case 0xC06C9B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:41 INY
    case 0xC06C9C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:42 LDA [@VIRTUAL0A],Y
    case 0xC06C9D: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C06A1B.asm:43 STA @VIRTUAL06+2
    case 0xC06C9F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C06A1B.asm:44 PLA
    case 0xC06CA1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:45 STA @VIRTUAL06
    case 0xC06CA2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C06A1B.asm:46 STA @LOCAL00
    case 0xC06CA4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06A1B.asm:47 LDA @VIRTUAL06+2
    case 0xC06CA6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C06A1B.asm:48 STA @LOCAL00+2
    case 0xC06CA8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06A1B.asm:49 LDA #0
    case 0xC06CAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C06A1B.asm:49 LDA #0
    // Overlapping static entry reached from 0xC06CAA.
    case 0xC06CAC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C06A1B.asm:50 JSL UNKNOWN_C064E3
    case 0xC06CAD: cpu.execute_instruction<0x22>(0xC06711, 4); return true;
    // src/unknown/C0/C06A1B.asm:51 STZ LADDER_STAIRS_TILE_Y
    case 0xC06CB1: cpu.execute_instruction<0x9C>(0x006130, 3); return true;
    // src/unknown/C0/C06A1B.asm:52 STZ LADDER_STAIRS_TILE_X
    case 0xC06CB4: cpu.execute_instruction<0x9C>(0x00612E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06A1B.asm:54 END_C_FUNCTION
    case 0xC06CB7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C06A1B.asm:54 END_C_FUNCTION
    case 0xC06CB8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06A8B.asm (unresolved).
bool execute_unresolved_c0_c06a8b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06A8B.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06CB9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06A8B.asm:4 RTS
    case 0xC06CBB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06A8E.asm (unresolved).
bool execute_unresolved_c0_c06a8e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06A8E.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06CBC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06A8E.asm:4 RTS
    case 0xC06CBE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06A91.asm (unresolved).
bool execute_unresolved_c0_c06a91_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06A91.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06CBF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06A91.asm:4 TAY
    case 0xC06CC1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06A91.asm:5 LDX #.LOWORD(GAME_STATE) + game_state::walking_style
    case 0xC06CC2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000034, 2); else cpu.execute_instruction<0xA2>(0x009B34, 3); return true;
    // src/unknown/C0/C06A91.asm:5 LDX #.LOWORD(GAME_STATE) + game_state::walking_style
    // Overlapping static entry reached from 0xC06CC2.
    case 0xC06CC4: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C06A91.asm:6 LDA __BSS_START__,X
    case 0xC06CC5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C06A91.asm:7 CMP #$0007
    case 0xC06CC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C06A91.asm:7 CMP #$0007
    // Overlapping static entry reached from 0xC06CC8.
    case 0xC06CCA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06A91.asm:8 BEQ @UNKNOWN2
    case 0xC06CCB: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C0/C06A91.asm:9 CMP #$0008
    case 0xC06CCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C06A91.asm:9 CMP #$0008
    // Overlapping static entry reached from 0xC06CCD.
    case 0xC06CCF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06A91.asm:10 BEQ @UNKNOWN2
    case 0xC06CD0: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C0/C06A91.asm:11 CPY #$0000
    case 0xC06CD2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C06A91.asm:11 CPY #$0000
    // Overlapping static entry reached from 0xC06CD2.
    case 0xC06CD4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C06A91.asm:12 BNE @UNKNOWN0
    case 0xC06CD5: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C06A91.asm:13 LDA #$0007
    case 0xC06CD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C06A91.asm:13 LDA #$0007
    // Overlapping static entry reached from 0xC06CD7.
    case 0xC06CD9: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C06A91.asm:14 STA __BSS_START__,X
    case 0xC06CDA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C06A91.asm:15 BRA @UNKNOWN1
    case 0xC06CDD: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C06A91.asm:17 LDA #$0008
    case 0xC06CDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C06A91.asm:17 LDA #$0008
    // Overlapping static entry reached from 0xC06CDF.
    case 0xC06CE1: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C06A91.asm:18 STA __BSS_START__,X
    case 0xC06CE2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C06A91.asm:20 LDX #.LOWORD(GAME_STATE) + game_state::leader_direction
    case 0xC06CE5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000030, 2); else cpu.execute_instruction<0xA2>(0x009B30, 3); return true;
    // src/unknown/C0/C06A91.asm:20 LDX #.LOWORD(GAME_STATE) + game_state::leader_direction
    // Overlapping static entry reached from 0xC06CE5.
    case 0xC06CE7: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C06A91.asm:21 LDA __BSS_START__,X
    case 0xC06CE8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C06A91.asm:22 AND #$FFFE
    case 0xC06CEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C0/C06A91.asm:22 AND #$FFFE
    // Overlapping static entry reached from 0xC06CEB.
    case 0xC06CED: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C06A91.asm:23 STA __BSS_START__,X
    case 0xC06CEE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C06A91.asm:24 LDA #$FFFF
    case 0xC06CF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06A91.asm:24 LDA #$FFFF
    // Overlapping static entry reached from 0xC06CF1.
    case 0xC06CF3: cpu.execute_instruction<0xFF>(0x614A8D, 4); return true;
    // src/unknown/C0/C06A91.asm:25 STA STAIRS_DIRECTION
    case 0xC06CF4: cpu.execute_instruction<0x8D>(0x00614A, 3); return true;
    // src/unknown/C0/C06A91.asm:27 RTS
    case 0xC06CF7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06ACA.asm (unresolved).
bool execute_unresolved_c0_c06aca_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06ACA.asm:3 BEGIN_C_FUNCTION
    case 0xC06CF8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    case 0xC06CFA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    case 0xC06CFB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    case 0xC06CFC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    case 0xC06CFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC06CFD.
    case 0xC06CFF: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    case 0xC06D00: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    case 0xC06D01: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06ACA.asm:9 STA @LOCAL01
    case 0xC06D02: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06ACA.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC06CFF.
    case 0xC06D03: cpu.execute_instruction<0x12>(0x0000AD, 2); return true;
    // src/unknown/C0/C06ACA.asm:10 LDA PLAYER_HAS_DONE_SOMETHING_THIS_FRAME
    case 0xC06D04: cpu.execute_instruction<0xAD>(0x000A2A, 3); return true;
    // src/unknown/C0/C06ACA.asm:10 LDA PLAYER_HAS_DONE_SOMETHING_THIS_FRAME
    // Overlapping static entry reached from 0xC06D03.
    case 0xC06D05: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C06ACA.asm:10 LDA PLAYER_HAS_DONE_SOMETHING_THIS_FRAME
    // Overlapping static entry reached from 0xC06D05.
    case 0xC06D06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06ACA.asm:11 BEQ @UNKNOWN0
    case 0xC06D07: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/unknown/C0/C06ACA.asm:12 LDA GAME_STATE + game_state::unknownB0
    case 0xC06D09: cpu.execute_instruction<0xAD>(0x009B56, 3); return true;
    // src/unknown/C0/C06ACA.asm:13 CMP #2
    case 0xC06D0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C06ACA.asm:13 CMP #2
    // Overlapping static entry reached from 0xC06D0C.
    case 0xC06D0E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06ACA.asm:14 BEQ @UNKNOWN0
    case 0xC06D0F: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C0/C06ACA.asm:15 LDA PENDING_INTERACTIONS
    case 0xC06D11: cpu.execute_instruction<0xAD>(0x006120, 3); return true;
    // src/unknown/C0/C06ACA.asm:16 BNE @UNKNOWN0
    case 0xC06D14: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/unknown/C0/C06ACA.asm:17 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC06D16: cpu.execute_instruction<0xAD>(0x005140, 3); return true;
    // src/unknown/C0/C06ACA.asm:18 ORA BATTLE_SWIRL_COUNTDOWN
    case 0xC06D19: cpu.execute_instruction<0x0D>(0x0060E6, 3); return true;
    // src/unknown/C0/C06ACA.asm:19 BNE @UNKNOWN0
    case 0xC06D1C: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/unknown/C0/C06ACA.asm:20 LDA @LOCAL01
    case 0xC06D1E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06ACA.asm:21 AND #$7FFF
    case 0xC06D20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C06ACA.asm:21 AND #$7FFF
    // Overlapping static entry reached from 0xC06D20.
    case 0xC06D22: cpu.execute_instruction<0x7F>(0xA91285, 4); return true;
    // src/unknown/C0/C06ACA.asm:22 STA @LOCAL01
    case 0xC06D23: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06ACA.asm:23 LDA #1
    case 0xC06D25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06ACA.asm:23 LDA #1
    // Overlapping static entry reached from 0xC06D22.
    case 0xC06D26: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C06ACA.asm:23 LDA #1
    // Overlapping static entry reached from 0xC06D25.
    case 0xC06D27: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06ACA.asm:24 STA USING_DOOR
    case 0xC06D28: cpu.execute_instruction<0x8D>(0x006148, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06ACA.asm:25 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06D2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06ACA.asm:25 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC06D2B.
    case 0xC06D2D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06ACA.asm:25 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06D2E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06ACA.asm:25 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06D30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06ACA.asm:25 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC06D30.
    case 0xC06D32: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06ACA.asm:25 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06D33: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C06ACA.asm:26 LDA @LOCAL01
    case 0xC06D35: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06ACA.asm:27 CLC
    case 0xC06D37: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06ACA.asm:28 ADC @VIRTUAL06
    case 0xC06D38: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C06ACA.asm:29 STA @VIRTUAL06
    case 0xC06D3A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C06ACA.asm:30 STA @LOCAL00
    case 0xC06D3C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06ACA.asm:31 LDA @VIRTUAL06+2
    case 0xC06D3E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C06ACA.asm:32 STA @LOCAL00+2
    case 0xC06D40: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06ACA.asm:33 LDA #2
    case 0xC06D42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C06ACA.asm:33 LDA #2
    // Overlapping static entry reached from 0xC06D42.
    case 0xC06D44: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C06ACA.asm:34 JSL UNKNOWN_C064E3
    case 0xC06D45: cpu.execute_instruction<0x22>(0xC06711, 4); return true;
    // src/unknown/C0/C06ACA.asm:35 JSL UNKNOWN_C07C5B
    case 0xC06D49: cpu.execute_instruction<0x22>(0xC07EAB, 4); return true;
    // src/unknown/C0/C06ACA.asm:37 PLD
    case 0xC06D4D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C06ACA.asm:38 RTS
    case 0xC06D4E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06B3D.asm (unresolved).
bool execute_unresolved_c0_c06b3d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06B3D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06D6B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06B3D.asm:8 END_STACK_VARS
    case 0xC06D6D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06B3D.asm:8 END_STACK_VARS
    case 0xC06D6E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06B3D.asm:8 END_STACK_VARS
    case 0xC06D6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06B3D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC06D6F.
    case 0xC06D71: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06B3D.asm:8 END_STACK_VARS
    case 0xC06D72: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:9 LDX #0
    case 0xC06D73: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C06B3D.asm:9 LDX #0
    // Overlapping static entry reached from 0xC06D73.
    case 0xC06D75: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C06B3D.asm:10 STX @LOCAL02
    case 0xC06D76: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C06B3D.asm:11 TXY
    case 0xC06D78: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:12 STY @LOCAL01
    case 0xC06D79: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C06B3D.asm:13 BRA @UNKNOWN2
    case 0xC06D7B: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // src/unknown/C0/C06B3D.asm:15 JSL UNKNOWN_C06537
    case 0xC06D7D: cpu.execute_instruction<0x22>(0xC06765, 4); return true;
    // src/unknown/C0/C06B3D.asm:16 CMP #10
    case 0xC06D81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C0/C06B3D.asm:16 CMP #10
    // Overlapping static entry reached from 0xC06D81.
    case 0xC06D83: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C06B3D.asm:17 BNE @UNKNOWN1
    case 0xC06D84: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/unknown/C0/C06B3D.asm:18 JSL UNKNOWN_C0654E
    case 0xC06D86: cpu.execute_instruction<0x22>(0xC0677C, 4); return true;
    // src/unknown/C0/C06B3D.asm:19 LDY @LOCAL01
    case 0xC06D8A: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C06B3D.asm:20 TYA
    case 0xC06D8C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:21 ASL
    case 0xC06D8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:22 ASL
    case 0xC06D8E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:23 CLC
    case 0xC06D8F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:24 ADC #.LOWORD(DOOR_INTERACTIONS)
    case 0xC06D90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x0061DE, 3); return true;
    // src/unknown/C0/C06B3D.asm:24 ADC #.LOWORD(DOOR_INTERACTIONS)
    // Overlapping static entry reached from 0xC06D90.
    case 0xC06D92: cpu.execute_instruction<0x61>(0x0000A8, 2); return true;
    // src/unknown/C0/C06B3D.asm:25 TAY
    case 0xC06D93: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C06B3D.asm:26 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06D94: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:26 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06D96: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C06B3D.asm:26 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06D99: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:26 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06D9B: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C06B3D.asm:27 LDY @LOCAL01
    case 0xC06D9E: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C06B3D.asm:28 INY
    case 0xC06DA0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:29 STY @LOCAL01
    case 0xC06DA1: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C06B3D.asm:31 LDA CURRENT_QUEUED_INTERACTION
    case 0xC06DA3: cpu.execute_instruction<0xAD>(0x006188, 3); return true;
    // src/unknown/C0/C06B3D.asm:32 INC
    case 0xC06DA6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:33 AND #$0003
    case 0xC06DA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C06B3D.asm:33 AND #$0003
    // Overlapping static entry reached from 0xC06DA7.
    case 0xC06DA9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06B3D.asm:34 STA CURRENT_QUEUED_INTERACTION
    case 0xC06DAA: cpu.execute_instruction<0x8D>(0x006188, 3); return true;
    // src/unknown/C0/C06B3D.asm:35 LDX @LOCAL02
    case 0xC06DAD: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C06B3D.asm:36 INX
    case 0xC06DAF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:37 STX @LOCAL02
    case 0xC06DB0: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C06B3D.asm:39 STX @VIRTUAL02
    case 0xC06DB2: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C06B3D.asm:40 LDA #4
    case 0xC06DB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C06B3D.asm:40 LDA #4
    // Overlapping static entry reached from 0xC06DB4.
    case 0xC06DB6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C06B3D.asm:41 CLC
    case 0xC06DB7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:42 SBC @VIRTUAL02
    case 0xC06DB8: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C06B3D.asm:43 BRANCHLTEQS @UNKNOWN5
    case 0xC06DBA: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C06B3D.asm:43 BRANCHLTEQS @UNKNOWN5
    case 0xC06DBC: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C06B3D.asm:43 BRANCHLTEQS @UNKNOWN5
    case 0xC06DBE: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C06B3D.asm:43 BRANCHLTEQS @UNKNOWN5
    case 0xC06DC0: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C06B3D.asm:44 LDA CURRENT_QUEUED_INTERACTION
    case 0xC06DC2: cpu.execute_instruction<0xAD>(0x006188, 3); return true;
    // src/unknown/C0/C06B3D.asm:45 CMP NEXT_QUEUED_INTERACTION
    case 0xC06DC5: cpu.execute_instruction<0xCD>(0x00618A, 3); return true;
    // src/unknown/C0/C06B3D.asm:46 BNE @UNKNOWN0
    case 0xC06DC8: cpu.execute_instruction<0xD0>(0x0000B3, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:48 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC06DCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:48 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC06DCA.
    case 0xC06DCC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C06B3D.asm:48 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC06DCD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:48 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC06DCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:48 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC06DCF.
    case 0xC06DD1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C06B3D.asm:48 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC06DD2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C06B3D.asm:49 LDY @LOCAL01
    case 0xC06DD4: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C06B3D.asm:50 TYA
    case 0xC06DD6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:51 ASL
    case 0xC06DD7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:52 ASL
    case 0xC06DD8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:53 CLC
    case 0xC06DD9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:54 ADC #.LOWORD(DOOR_INTERACTIONS)
    case 0xC06DDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x0061DE, 3); return true;
    // src/unknown/C0/C06B3D.asm:54 ADC #.LOWORD(DOOR_INTERACTIONS)
    // Overlapping static entry reached from 0xC06DDA.
    case 0xC06DDC: cpu.execute_instruction<0x61>(0x0000A8, 2); return true;
    // src/unknown/C0/C06B3D.asm:55 TAY
    case 0xC06DDD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C06B3D.asm:56 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06DDE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:56 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06DE0: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C06B3D.asm:56 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06DE3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:56 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06DE5: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C06B3D.asm:57 LDX #0
    case 0xC06DE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C06B3D.asm:57 LDX #0
    // Overlapping static entry reached from 0xC06DE8.
    case 0xC06DEA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C06B3D.asm:58 STX @LOCAL02
    case 0xC06DEB: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C06B3D.asm:59 BRA @UNKNOWN7
    case 0xC06DED: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C06B3D.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06DEF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C06B3D.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06DF1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C06B3D.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06DF3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C06B3D.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06DF5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06B3D.asm:62 LDA #10
    case 0xC06DF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C0/C06B3D.asm:62 LDA #10
    // Overlapping static entry reached from 0xC06DF7.
    case 0xC06DF9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C06B3D.asm:63 JSL UNKNOWN_C064E3
    case 0xC06DFA: cpu.execute_instruction<0x22>(0xC06711, 4); return true;
    // src/unknown/C0/C06B3D.asm:64 LDX @LOCAL02
    case 0xC06DFE: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C06B3D.asm:65 INX
    case 0xC06E00: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:66 STX @LOCAL02
    case 0xC06E01: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C06B3D.asm:68 TXA
    case 0xC06E03: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:69 ASL
    case 0xC06E04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:70 ASL
    case 0xC06E05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:71 CLC
    case 0xC06E06: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:72 ADC #.LOWORD(DOOR_INTERACTIONS)
    case 0xC06E07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x0061DE, 3); return true;
    // src/unknown/C0/C06B3D.asm:72 ADC #.LOWORD(DOOR_INTERACTIONS)
    // Overlapping static entry reached from 0xC06E07.
    case 0xC06E09: cpu.execute_instruction<0x61>(0x0000A8, 2); return true;
    // src/unknown/C0/C06B3D.asm:73 TAY
    case 0xC06E0A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:74 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06E0B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C06B3D.asm:74 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06E0E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:74 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06E10: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C06B3D.asm:74 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06E13: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:75 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06E15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:75 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06E15.
    case 0xC06E17: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C06B3D.asm:75 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06E18: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:75 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06E1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:75 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06E1A.
    case 0xC06E1C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C06B3D.asm:75 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06E1D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C0/C06B3D.asm:76 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E1F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C0/C06B3D.asm:76 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E21: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C0/C06B3D.asm:76 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E23: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C0/C06B3D.asm:76 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E25: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C0/C06B3D.asm:76 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E27: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C0/C06B3D.asm:77 BNE @UNKNOWN6
    case 0xC06E29: cpu.execute_instruction<0xD0>(0x0000C4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06B3D.asm:78 END_C_FUNCTION
    case 0xC06E2B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C06B3D.asm:78 END_C_FUNCTION
    case 0xC06E2C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06E1A.asm (unresolved).
bool execute_unresolved_c0_c06e1a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06E1A.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC07048: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06E1A.asm:4 LDA #$FFFF
    case 0xC0704A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06E1A.asm:4 LDA #$FFFF
    // Overlapping static entry reached from 0xC0704A.
    case 0xC0704C: cpu.execute_instruction<0xFF>(0x614A8D, 4); return true;
    // src/unknown/C0/C06E1A.asm:5 STA STAIRS_DIRECTION
    case 0xC0704D: cpu.execute_instruction<0x8D>(0x00614A, 3); return true;
    // src/unknown/C0/C06E1A.asm:6 STZ GAME_STATE+game_state::walking_style
    case 0xC07050: cpu.execute_instruction<0x9C>(0x009B34, 3); return true;
    // src/unknown/C0/C06E1A.asm:7 STZ PLAYER_MOVEMENT_FLAGS
    case 0xC07053: cpu.execute_instruction<0x9C>(0x0060DC, 3); return true;
    // src/unknown/C0/C06E1A.asm:8 STZ UNREAD_7E5DBA
    case 0xC07056: cpu.execute_instruction<0x9C>(0x006140, 3); return true;
    // src/unknown/C0/C06E1A.asm:9 RTL
    case 0xC07059: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06E2C.asm (unresolved).
bool execute_unresolved_c0_c06e2c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06E2C.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0705A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06E2C.asm:4 LDA #WALKING_STYLE::ESCALATOR
    case 0xC0705C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C0/C06E2C.asm:4 LDA #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC0705C.
    case 0xC0705E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06E2C.asm:5 STA GAME_STATE+game_state::walking_style
    case 0xC0705F: cpu.execute_instruction<0x8D>(0x009B34, 3); return true;
    // src/unknown/C0/C06E2C.asm:6 STZ PLAYER_MOVEMENT_FLAGS
    case 0xC07062: cpu.execute_instruction<0x9C>(0x0060DC, 3); return true;
    // src/unknown/C0/C06E2C.asm:7 LDA ESCALATOR_NEW_X
    case 0xC07065: cpu.execute_instruction<0xAD>(0x006156, 3); return true;
    // src/unknown/C0/C06E2C.asm:8 STA GAME_STATE+game_state::leader_x_coord
    case 0xC07068: cpu.execute_instruction<0x8D>(0x009B28, 3); return true;
    // src/unknown/C0/C06E2C.asm:9 LDA ESCALATOR_NEW_Y
    case 0xC0706B: cpu.execute_instruction<0xAD>(0x006158, 3); return true;
    // src/unknown/C0/C06E2C.asm:10 STA GAME_STATE+game_state::leader_y_coord
    case 0xC0706E: cpu.execute_instruction<0x8D>(0x009B2C, 3); return true;
    // src/unknown/C0/C06E2C.asm:11 STZ GAME_STATE + game_state::unknown84
    case 0xC07071: cpu.execute_instruction<0x9C>(0x009B2A, 3); return true;
    // src/unknown/C0/C06E2C.asm:12 STZ GAME_STATE + game_state::unknown80
    case 0xC07074: cpu.execute_instruction<0x9C>(0x009B26, 3); return true;
    // src/unknown/C0/C06E2C.asm:13 RTL
    case 0xC07077: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06E4A.asm (unresolved).
bool execute_unresolved_c0_c06e4a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06E4A.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC07078: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06E4A.asm:4 LDA #$FFFF
    case 0xC0707A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06E4A.asm:4 LDA #$FFFF
    // Overlapping static entry reached from 0xC0707A.
    case 0xC0707C: cpu.execute_instruction<0xFF>(0x614A8D, 4); return true;
    // src/unknown/C0/C06E4A.asm:5 STA STAIRS_DIRECTION
    case 0xC0707D: cpu.execute_instruction<0x8D>(0x00614A, 3); return true;
    // src/unknown/C0/C06E4A.asm:6 STZ GAME_STATE+game_state::walking_style
    case 0xC07080: cpu.execute_instruction<0x9C>(0x009B34, 3); return true;
    // src/unknown/C0/C06E4A.asm:7 STZ PLAYER_MOVEMENT_FLAGS
    case 0xC07083: cpu.execute_instruction<0x9C>(0x0060DC, 3); return true;
    // src/unknown/C0/C06E4A.asm:8 STZ UNREAD_7E5DBA
    case 0xC07086: cpu.execute_instruction<0x9C>(0x006140, 3); return true;
    // src/unknown/C0/C06E4A.asm:9 LDA ESCALATOR_NEW_X
    case 0xC07089: cpu.execute_instruction<0xAD>(0x006156, 3); return true;
    // src/unknown/C0/C06E4A.asm:10 STA GAME_STATE+game_state::leader_x_coord
    case 0xC0708C: cpu.execute_instruction<0x8D>(0x009B28, 3); return true;
    // src/unknown/C0/C06E4A.asm:11 LDA ESCALATOR_NEW_Y
    case 0xC0708F: cpu.execute_instruction<0xAD>(0x006158, 3); return true;
    // src/unknown/C0/C06E4A.asm:12 STA GAME_STATE+game_state::leader_y_coord
    case 0xC07092: cpu.execute_instruction<0x8D>(0x009B2C, 3); return true;
    // src/unknown/C0/C06E4A.asm:13 STZ GAME_STATE + game_state::unknown84
    case 0xC07095: cpu.execute_instruction<0x9C>(0x009B2A, 3); return true;
    // src/unknown/C0/C06E4A.asm:14 STZ GAME_STATE + game_state::unknown80
    case 0xC07098: cpu.execute_instruction<0x9C>(0x009B26, 3); return true;
    // src/unknown/C0/C06E4A.asm:15 RTL
    case 0xC0709B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06E6E-jp.asm (unresolved).
bool execute_unresolved_c0_c06e6e_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC0709C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:15 END_STACK_VARS
    case 0xC0709E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:15 END_STACK_VARS
    case 0xC0709F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:15 END_STACK_VARS
    case 0xC070A0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:15 END_STACK_VARS
    case 0xC070A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC070A1.
    case 0xC070A3: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:15 END_STACK_VARS
    case 0xC070A4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:15 END_STACK_VARS
    case 0xC070A5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:16 STY @LOCAL06
    case 0xC070A6: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:16 STY @LOCAL06
    // Overlapping static entry reached from 0xC070A3.
    case 0xC070A7: cpu.execute_instruction<0x1C>(0x001A86, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:17 STX @LOCAL05
    case 0xC070A8: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:18 STA @LOCAL04
    case 0xC070AA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:18 STA @LOCAL04
    // Overlapping static entry reached from 0xC07124.
    case 0xC070AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:19 LDA DEMO_FRAMES_LEFT
    case 0xC070AC: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:20 BNEL @UNKNOWN4
    case 0xC070AF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:20 BNEL @UNKNOWN4
    case 0xC070B1: cpu.execute_instruction<0x4C>(0x0071AE, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:21 JSL UNKNOWN_C48C69
    case 0xC070B4: cpu.execute_instruction<0x22>(0xC462B3, 4); return true;
    // src/unknown/C0/C06E6E-jp.asm:22 LDX @LOCAL05
    case 0xC070B8: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:23 TXA
    case 0xC070BA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:24 ASL
    case 0xC070BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:25 ASL
    case 0xC070BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:26 ASL
    case 0xC070BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:27 TAX
    case 0xC070BE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:28 STX @LOCAL03
    case 0xC070BF: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:29 LDY @LOCAL06
    case 0xC070C1: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:30 TYA
    case 0xC070C3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:31 ASL
    case 0xC070C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:32 ASL
    case 0xC070C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:33 ASL
    case 0xC070C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:34 STA @LOCAL02
    case 0xC070C7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:35 LDA @LOCAL04
    case 0xC070C9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:36 AND #$8000
    case 0xC070CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:36 AND #$8000
    // Overlapping static entry reached from 0xC070CB.
    case 0xC070CD: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:37 BEQ @UNKNOWN2
    case 0xC070CE: cpu.execute_instruction<0xF0>(0x000073, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:38 LDY #.LOWORD(GAME_STATE) + game_state::walking_style
    case 0xC070D0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000034, 2); else cpu.execute_instruction<0xA0>(0x009B34, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:38 LDY #.LOWORD(GAME_STATE) + game_state::walking_style
    // Overlapping static entry reached from 0xC070D0.
    case 0xC070D2: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:39 LDA __BSS_START__,Y
    case 0xC070D3: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:40 CMP #12
    case 0xC070D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:40 CMP #12
    // Overlapping static entry reached from 0xC070D6.
    case 0xC070D8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:41 BNEL @UNKNOWN4
    case 0xC070D9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:41 BNEL @UNKNOWN4
    case 0xC070DB: cpu.execute_instruction<0x4C>(0x0071AE, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:42 LDA #0
    case 0xC070DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:42 LDA #0
    // Overlapping static entry reached from 0xC070DE.
    case 0xC070E0: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:43 STA __BSS_START__,Y
    case 0xC070E1: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:44 LDA #3
    case 0xC070E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:44 LDA #3
    // Overlapping static entry reached from 0xC070E4.
    case 0xC070E6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:45 STA PLAYER_MOVEMENT_FLAGS
    case 0xC070E7: cpu.execute_instruction<0x8D>(0x0060DC, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:46 LDA ESCALATOR_ENTRANCE_DIRECTION
    case 0xC070EA: cpu.execute_instruction<0xAD>(0x00614C, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:47 XBA
    case 0xC070ED: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:48 AND #$00FF
    case 0xC070EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC070EE.
    case 0xC070F0: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:49 ASL
    case 0xC070F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:50 STA @VIRTUAL02
    case 0xC070F2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:51 TXA
    case 0xC070F4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:52 LDX @VIRTUAL02
    case 0xC070F5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:53 CLC
    case 0xC070F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:54 ADC f:UNKNOWN_C06E02+8,X
    case 0xC070F8: cpu.execute_instruction<0x7F>(0xC07038, 4); return true;
    // src/unknown/C0/C06E6E-jp.asm:55 STA @VIRTUAL04
    case 0xC070FC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:56 LDA @LOCAL02
    case 0xC070FE: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:57 STA @LOCAL00
    case 0xC07100: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:58 LDY @VIRTUAL04
    case 0xC07102: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:59 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC07104: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:60 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC07107: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:61 JSL UNKNOWN_C48D58
    case 0xC0710A: cpu.execute_instruction<0x22>(0xC463A2, 4); return true;
    // src/unknown/C0/C06E6E-jp.asm:62 TAY
    case 0xC0710E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:63 STY @LOCAL01
    case 0xC0710F: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:64 LDX #16
    case 0xC07111: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:64 LDX #16
    // Overlapping static entry reached from 0xC07111.
    case 0xC07113: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:65 STX @LOCAL05
    case 0xC07114: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:66 LDX @VIRTUAL02
    case 0xC07116: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:67 LDA f:UNKNOWN_C06E02+16,X
    case 0xC07118: cpu.execute_instruction<0xBF>(0xC07040, 4); return true;
    // src/unknown/C0/C06E6E-jp.asm:68 LDX @LOCAL05
    case 0xC0711C: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:69 JSL UNKNOWN_C48E6B
    case 0xC0711E: cpu.execute_instruction<0x22>(0xC464B5, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:70 LOADPTR UNKNOWN_C06E4A, @LOCAL00
    case 0xC07122: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x007078, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:70 LOADPTR UNKNOWN_C06E4A, @LOCAL00
    // Overlapping static entry reached from 0xC07122.
    case 0xC07124: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:70 LOADPTR UNKNOWN_C06E4A, @LOCAL00
    case 0xC07125: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:70 LOADPTR UNKNOWN_C06E4A, @LOCAL00
    // Overlapping static entry reached from 0xC07124.
    case 0xC07126: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:70 LOADPTR UNKNOWN_C06E4A, @LOCAL00
    case 0xC07127: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:70 LOADPTR UNKNOWN_C06E4A, @LOCAL00
    // Overlapping static entry reached from 0xC07127.
    case 0xC07129: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:70 LOADPTR UNKNOWN_C06E4A, @LOCAL00
    case 0xC0712A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:71 LDY @LOCAL01
    case 0xC0712C: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:72 TYA
    case 0xC0712E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:73 INC
    case 0xC0712F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:74 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC07130: cpu.execute_instruction<0x22>(0xC0DBAE, 4); return true;
    // src/unknown/C0/C06E6E-jp.asm:75 JSL UNKNOWN_C48E95
    case 0xC07134: cpu.execute_instruction<0x22>(0xC464DF, 4); return true;
    // src/unknown/C0/C06E6E-jp.asm:76 STZ ESCALATOR_ENTRANCE_DIRECTION
    case 0xC07138: cpu.execute_instruction<0x9C>(0x00614C, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:77 LDA #1
    case 0xC0713B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:77 LDA #1
    // Overlapping static entry reached from 0xC0713B.
    case 0xC0713D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:78 STA UNREAD_7E5DBA
    case 0xC0713E: cpu.execute_instruction<0x8D>(0x006140, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:79 BRA @UNKNOWN3
    case 0xC07141: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:81 LDA GAME_STATE+game_state::walking_style
    case 0xC07143: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:82 CMP #WALKING_STYLE::ESCALATOR
    case 0xC07146: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:82 CMP #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC07146.
    case 0xC07148: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:83 BEQ @UNKNOWN4
    case 0xC07149: cpu.execute_instruction<0xF0>(0x000063, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:84 LDA #1
    case 0xC0714B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:84 LDA #1
    // Overlapping static entry reached from 0xC0714B.
    case 0xC0714D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:85 STA UNREAD_7E5DBA
    case 0xC0714E: cpu.execute_instruction<0x8D>(0x006140, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:86 LDA @LOCAL04
    case 0xC07151: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:87 STA ESCALATOR_ENTRANCE_DIRECTION
    case 0xC07153: cpu.execute_instruction<0x8D>(0x00614C, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:88 XBA
    case 0xC07156: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:89 AND #$00FF
    case 0xC07157: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC07157.
    case 0xC07159: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:90 ASL
    case 0xC0715A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:91 STA @LOCAL06
    case 0xC0715B: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:92 TAX
    case 0xC0715D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:93 LDA f:UNKNOWN_C06E02+16,X
    case 0xC0715E: cpu.execute_instruction<0xBF>(0xC07040, 4); return true;
    // src/unknown/C0/C06E6E-jp.asm:94 STA GAME_STATE+game_state::leader_direction
    case 0xC07162: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:95 LDA #3
    case 0xC07165: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:95 LDA #3
    // Overlapping static entry reached from 0xC07165.
    case 0xC07167: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:96 STA PLAYER_MOVEMENT_FLAGS
    case 0xC07168: cpu.execute_instruction<0x8D>(0x0060DC, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:97 LDA @LOCAL06
    case 0xC0716B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:98 PHA
    case 0xC0716D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:99 LDX @LOCAL03
    case 0xC0716E: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:100 TXA
    case 0xC07170: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:101 PLX
    case 0xC07171: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:102 CLC
    case 0xC07172: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:103 ADC f:UNKNOWN_C06E02,X
    case 0xC07173: cpu.execute_instruction<0x7F>(0xC07030, 4); return true;
    // src/unknown/C0/C06E6E-jp.asm:104 STA @VIRTUAL04
    case 0xC07177: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:105 LDA @LOCAL02
    case 0xC07179: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:106 STA @LOCAL00
    case 0xC0717B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:107 LDY @VIRTUAL04
    case 0xC0717D: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:108 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0717F: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:109 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC07182: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:110 JSL UNKNOWN_C48D58
    case 0xC07185: cpu.execute_instruction<0x22>(0xC463A2, 4); return true;
    // src/unknown/C0/C06E6E-jp.asm:111 TAX
    case 0xC07189: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:112 LOADPTR UNKNOWN_C06E2C, @LOCAL00
    case 0xC0718A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005A, 2); else cpu.execute_instruction<0xA9>(0x00705A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:112 LOADPTR UNKNOWN_C06E2C, @LOCAL00
    // Overlapping static entry reached from 0xC0718A.
    case 0xC0718C: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:112 LOADPTR UNKNOWN_C06E2C, @LOCAL00
    case 0xC0718D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:112 LOADPTR UNKNOWN_C06E2C, @LOCAL00
    // Overlapping static entry reached from 0xC0718C.
    case 0xC0718E: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:112 LOADPTR UNKNOWN_C06E2C, @LOCAL00
    case 0xC0718F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:112 LOADPTR UNKNOWN_C06E2C, @LOCAL00
    // Overlapping static entry reached from 0xC0718F.
    case 0xC07191: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:112 LOADPTR UNKNOWN_C06E2C, @LOCAL00
    case 0xC07192: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:113 TXA
    case 0xC07194: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:114 INC
    case 0xC07195: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E-jp.asm:115 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC07196: cpu.execute_instruction<0x22>(0xC0DBAE, 4); return true;
    // src/unknown/C0/C06E6E-jp.asm:116 JSL UNKNOWN_C48E95
    case 0xC0719A: cpu.execute_instruction<0x22>(0xC464DF, 4); return true;
    // src/unknown/C0/C06E6E-jp.asm:118 LDA @VIRTUAL04
    case 0xC0719E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:119 STA ESCALATOR_NEW_X
    case 0xC071A0: cpu.execute_instruction<0x8D>(0x006156, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:120 LDA @LOCAL02
    case 0xC071A3: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C06E6E-jp.asm:121 STA ESCALATOR_NEW_Y
    case 0xC071A5: cpu.execute_instruction<0x8D>(0x006158, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:122 LDA #.LOWORD(-1)
    case 0xC071A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06E6E-jp.asm:122 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC071A8.
    case 0xC071AA: cpu.execute_instruction<0xFF>(0x614A8D, 4); return true;
    // src/unknown/C0/C06E6E-jp.asm:123 STA STAIRS_DIRECTION
    case 0xC071AB: cpu.execute_instruction<0x8D>(0x00614A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:125 END_C_FUNCTION
    case 0xC071AE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C06E6E-jp.asm:125 END_C_FUNCTION
    case 0xC071AF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06F82.asm (unresolved).
bool execute_unresolved_c0_c06f82_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06F82.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC071B0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06F82.asm:7 END_STACK_VARS
    case 0xC071B2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06F82.asm:7 END_STACK_VARS
    case 0xC071B3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06F82.asm:7 END_STACK_VARS
    case 0xC071B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06F82.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC071B4.
    case 0xC071B6: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06F82.asm:7 END_STACK_VARS
    case 0xC071B7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C06F82.asm:8 LDA #0
    case 0xC071B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C06F82.asm:8 LDA #0
    // Overlapping static entry reached from 0xC071B8.
    case 0xC071BA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06F82.asm:9 STA @LOCAL01
    case 0xC071BB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06F82.asm:10 LDA STAIRS_DIRECTION
    case 0xC071BD: cpu.execute_instruction<0xAD>(0x00614A, 3); return true;
    // src/unknown/C0/C06F82.asm:11 BEQ @UNKNOWN0
    case 0xC071C0: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C06F82.asm:12 LDA STAIRS_DIRECTION
    case 0xC071C2: cpu.execute_instruction<0xAD>(0x00614A, 3); return true;
    // src/unknown/C0/C06F82.asm:13 CMP #256
    case 0xC071C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C06F82.asm:13 CMP #256
    // Overlapping static entry reached from 0xC071C5.
    case 0xC071C7: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C0/C06F82.asm:14 BNE @UNKNOWN1
    case 0xC071C8: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C0/C06F82.asm:14 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC071C7.
    case 0xC071C9: cpu.execute_instruction<0x12>(0x0000AD, 2); return true;
    // src/unknown/C0/C06F82.asm:16 LDA STAIRS_NEW_Y
    case 0xC071CA: cpu.execute_instruction<0xAD>(0x006154, 3); return true;
    // src/unknown/C0/C06F82.asm:16 LDA STAIRS_NEW_Y
    // Overlapping static entry reached from 0xC071C9.
    case 0xC071CB: cpu.execute_instruction<0x54>(0x003A61, 3); return true;
    // src/unknown/C0/C06F82.asm:17 DEC
    case 0xC071CD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C06F82.asm:18 CMP GAME_STATE+game_state::leader_y_coord
    case 0xC071CE: cpu.execute_instruction<0xCD>(0x009B2C, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06F82.asm:19 BLTEQ @UNKNOWN2
    case 0xC071D1: cpu.execute_instruction<0x90>(0x000017, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06F82.asm:19 BLTEQ @UNKNOWN2
    case 0xC071D3: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C06F82.asm:20 LDA #1
    case 0xC071D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06F82.asm:20 LDA #1
    // Overlapping static entry reached from 0xC071D5.
    case 0xC071D7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06F82.asm:21 STA @LOCAL01
    case 0xC071D8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06F82.asm:22 BRA @UNKNOWN2
    case 0xC071DA: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C06F82.asm:24 LDA STAIRS_NEW_Y
    case 0xC071DC: cpu.execute_instruction<0xAD>(0x006154, 3); return true;
    // src/unknown/C0/C06F82.asm:25 INC
    case 0xC071DF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C06F82.asm:26 CMP GAME_STATE+game_state::leader_y_coord
    case 0xC071E0: cpu.execute_instruction<0xCD>(0x009B2C, 3); return true;
    // src/unknown/C0/C06F82.asm:27 BCS @UNKNOWN2
    case 0xC071E3: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C06F82.asm:28 LDA #1
    case 0xC071E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06F82.asm:28 LDA #1
    // Overlapping static entry reached from 0xC071E5.
    case 0xC071E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06F82.asm:29 STA @LOCAL01
    case 0xC071E8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06F82.asm:31 LDA @LOCAL01
    case 0xC071EA: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06F82.asm:32 BEQ @UNKNOWN3
    case 0xC071EC: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C0/C06F82.asm:33 LDA #WALKING_STYLE::STAIRS
    case 0xC071EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/unknown/C0/C06F82.asm:33 LDA #WALKING_STYLE::STAIRS
    // Overlapping static entry reached from 0xC071EE.
    case 0xC071F0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06F82.asm:34 STA GAME_STATE+game_state::walking_style
    case 0xC071F1: cpu.execute_instruction<0x8D>(0x009B34, 3); return true;
    // src/unknown/C0/C06F82.asm:35 LDA STAIRS_NEW_X
    case 0xC071F4: cpu.execute_instruction<0xAD>(0x006152, 3); return true;
    // src/unknown/C0/C06F82.asm:36 STA GAME_STATE+game_state::leader_x_coord
    case 0xC071F7: cpu.execute_instruction<0x8D>(0x009B28, 3); return true;
    // src/unknown/C0/C06F82.asm:37 LDA STAIRS_NEW_Y
    case 0xC071FA: cpu.execute_instruction<0xAD>(0x006154, 3); return true;
    // src/unknown/C0/C06F82.asm:38 STA GAME_STATE+game_state::leader_y_coord
    case 0xC071FD: cpu.execute_instruction<0x8D>(0x009B2C, 3); return true;
    // src/unknown/C0/C06F82.asm:39 STZ GAME_STATE + game_state::unknown84
    case 0xC07200: cpu.execute_instruction<0x9C>(0x009B2A, 3); return true;
    // src/unknown/C0/C06F82.asm:40 STZ GAME_STATE + game_state::unknown80
    case 0xC07203: cpu.execute_instruction<0x9C>(0x009B26, 3); return true;
    // src/unknown/C0/C06F82.asm:41 BRA @UNKNOWN4
    case 0xC07206: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC07208: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B0, 2); else cpu.execute_instruction<0xA9>(0x0071B0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC07208.
    case 0xC0720A: cpu.execute_instruction<0x71>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC0720B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC0720A.
    case 0xC0720C: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC0720D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC0720D.
    case 0xC0720F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC07210: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06F82.asm:44 LDA #1
    case 0xC07212: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06F82.asm:44 LDA #1
    // Overlapping static entry reached from 0xC07212.
    case 0xC07214: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C06F82.asm:45 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC07215: cpu.execute_instruction<0x22>(0xC0DBAE, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06F82.asm:47 END_C_FUNCTION
    case 0xC07219: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C06F82.asm:47 END_C_FUNCTION
    case 0xC0721A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06FED.asm (unresolved).
bool execute_unresolved_c0_c06fed_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06FED.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0721B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06FED.asm:7 END_STACK_VARS
    case 0xC0721D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06FED.asm:7 END_STACK_VARS
    case 0xC0721E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06FED.asm:7 END_STACK_VARS
    case 0xC0721F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06FED.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0721F.
    case 0xC07221: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06FED.asm:7 END_STACK_VARS
    case 0xC07222: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C06FED.asm:8 LDA #0
    case 0xC07223: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C06FED.asm:8 LDA #0
    // Overlapping static entry reached from 0xC07223.
    case 0xC07225: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06FED.asm:9 STA @LOCAL01
    case 0xC07226: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06FED.asm:10 LDA STAIRS_DIRECTION
    case 0xC07228: cpu.execute_instruction<0xAD>(0x00614A, 3); return true;
    // src/unknown/C0/C06FED.asm:11 BEQ @UNKNOWN0
    case 0xC0722B: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C06FED.asm:12 LDA STAIRS_DIRECTION
    case 0xC0722D: cpu.execute_instruction<0xAD>(0x00614A, 3); return true;
    // src/unknown/C0/C06FED.asm:13 CMP #256
    case 0xC07230: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C06FED.asm:13 CMP #256
    // Overlapping static entry reached from 0xC07230.
    case 0xC07232: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C0/C06FED.asm:14 BNE @UNKNOWN1
    case 0xC07233: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C06FED.asm:14 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC07232.
    case 0xC07234: cpu.execute_instruction<0x0F>(0x9B2CAD, 4); return true;
    // src/unknown/C0/C06FED.asm:16 LDA GAME_STATE + game_state::leader_y_coord
    case 0xC07235: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C06FED.asm:17 CMP STAIRS_NEW_Y
    case 0xC07238: cpu.execute_instruction<0xCD>(0x006154, 3); return true;
    // src/unknown/C0/C06FED.asm:18 BCS @UNKNOWN2
    case 0xC0723B: cpu.execute_instruction<0xB0>(0x000016, 2); return true;
    // src/unknown/C0/C06FED.asm:19 LDA #1
    case 0xC0723D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06FED.asm:19 LDA #1
    // Overlapping static entry reached from 0xC0723D.
    case 0xC0723F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06FED.asm:20 STA @LOCAL01
    case 0xC07240: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06FED.asm:21 BRA @UNKNOWN2
    case 0xC07242: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C0/C06FED.asm:23 LDA GAME_STATE + game_state::leader_y_coord
    case 0xC07244: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C06FED.asm:24 CMP STAIRS_NEW_Y
    case 0xC07247: cpu.execute_instruction<0xCD>(0x006154, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06FED.asm:25 BLTEQ @UNKNOWN2
    case 0xC0724A: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06FED.asm:25 BLTEQ @UNKNOWN2
    case 0xC0724C: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C06FED.asm:26 LDA #1
    case 0xC0724E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06FED.asm:26 LDA #1
    // Overlapping static entry reached from 0xC0724E.
    case 0xC07250: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06FED.asm:27 STA @LOCAL01
    case 0xC07251: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06FED.asm:29 LDA @LOCAL01
    case 0xC07253: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06FED.asm:30 BEQ @UNKNOWN3
    case 0xC07255: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/C0/C06FED.asm:31 LDA #.LOWORD(-1)
    case 0xC07257: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06FED.asm:31 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC07257.
    case 0xC07259: cpu.execute_instruction<0xFF>(0x614A8D, 4); return true;
    // src/unknown/C0/C06FED.asm:32 STA STAIRS_DIRECTION
    case 0xC0725A: cpu.execute_instruction<0x8D>(0x00614A, 3); return true;
    // src/unknown/C0/C06FED.asm:33 STZ GAME_STATE + game_state::walking_style
    case 0xC0725D: cpu.execute_instruction<0x9C>(0x009B34, 3); return true;
    // src/unknown/C0/C06FED.asm:34 STZ PLAYER_MOVEMENT_FLAGS
    case 0xC07260: cpu.execute_instruction<0x9C>(0x0060DC, 3); return true;
    // src/unknown/C0/C06FED.asm:35 LDA STAIRS_NEW_X
    case 0xC07263: cpu.execute_instruction<0xAD>(0x006152, 3); return true;
    // src/unknown/C0/C06FED.asm:36 STA GAME_STATE + game_state::leader_x_coord
    case 0xC07266: cpu.execute_instruction<0x8D>(0x009B28, 3); return true;
    // src/unknown/C0/C06FED.asm:37 LDA STAIRS_NEW_Y
    case 0xC07269: cpu.execute_instruction<0xAD>(0x006154, 3); return true;
    // src/unknown/C0/C06FED.asm:38 STA GAME_STATE + game_state::leader_y_coord
    case 0xC0726C: cpu.execute_instruction<0x8D>(0x009B2C, 3); return true;
    // src/unknown/C0/C06FED.asm:39 STZ GAME_STATE + game_state::unknown84
    case 0xC0726F: cpu.execute_instruction<0x9C>(0x009B2A, 3); return true;
    // src/unknown/C0/C06FED.asm:40 STZ GAME_STATE + game_state::unknown80
    case 0xC07272: cpu.execute_instruction<0x9C>(0x009B26, 3); return true;
    // src/unknown/C0/C06FED.asm:41 STZ UNREAD_7E5DBA
    case 0xC07275: cpu.execute_instruction<0x9C>(0x006140, 3); return true;
    // src/unknown/C0/C06FED.asm:42 BRA @UNKNOWN4
    case 0xC07278: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC0727A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00721B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC0727A.
    case 0xC0727C: cpu.execute_instruction<0x72>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC0727D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC0727C.
    case 0xC0727E: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC0727F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC0727F.
    case 0xC07281: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC07282: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06FED.asm:45 LDA #1
    case 0xC07284: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06FED.asm:45 LDA #1
    // Overlapping static entry reached from 0xC07284.
    case 0xC07286: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C06FED.asm:46 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC07287: cpu.execute_instruction<0x22>(0xC0DBAE, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06FED.asm:48 END_C_FUNCTION
    case 0xC0728B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C06FED.asm:48 END_C_FUNCTION
    case 0xC0728C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0705F.asm (unresolved).
bool execute_unresolved_c0_c0705f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0705F.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0728D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0705F.asm:4 LDY #$0001
    case 0xC0728F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0705F.asm:4 LDY #$0001
    // Overlapping static entry reached from 0xC0728F.
    case 0xC07291: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/C0/C0705F.asm:5 LDX GAME_STATE+game_state::leader_direction
    case 0xC07292: cpu.execute_instruction<0xAE>(0x009B30, 3); return true;
    // src/unknown/C0/C0705F.asm:6 CMP #$0100
    case 0xC07295: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0705F.asm:6 CMP #$0100
    // Overlapping static entry reached from 0xC07295.
    case 0xC07297: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:7 BEQ @UNKNOWN0
    case 0xC07298: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0705F.asm:7 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC07297.
    case 0xC07299: cpu.execute_instruction<0x11>(0x0000C9, 2); return true;
    // src/unknown/C0/C0705F.asm:8 CMP #$0000
    case 0xC0729A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:8 CMP #$0000
    // Overlapping static entry reached from 0xC07299.
    case 0xC0729B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0705F.asm:8 CMP #$0000
    // Overlapping static entry reached from 0xC0729A.
    case 0xC0729C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:9 BEQ @UNKNOWN3
    case 0xC0729D: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C0/C0705F.asm:10 CMP #$0300
    case 0xC0729F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000300, 3); return true;
    // src/unknown/C0/C0705F.asm:10 CMP #$0300
    // Overlapping static entry reached from 0xC0729F.
    case 0xC072A1: cpu.execute_instruction<0x03>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:11 BEQ @UNKNOWN6
    case 0xC072A2: cpu.execute_instruction<0xF0>(0x000033, 2); return true;
    // src/unknown/C0/C0705F.asm:11 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xC072A1.
    case 0xC072A3: cpu.execute_instruction<0x33>(0x0000C9, 2); return true;
    // src/unknown/C0/C0705F.asm:12 CMP #$0200
    case 0xC072A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000200, 3); return true;
    // src/unknown/C0/C0705F.asm:12 CMP #$0200
    // Overlapping static entry reached from 0xC072A3.
    case 0xC072A5: cpu.execute_instruction<0x00>(0x000002, 2); return true;
    // src/unknown/C0/C0705F.asm:12 CMP #$0200
    // Overlapping static entry reached from 0xC072A4.
    case 0xC072A6: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:13 BEQ @UNKNOWN8
    case 0xC072A7: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/unknown/C0/C0705F.asm:14 BRA @UNKNOWN10
    case 0xC072A9: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C0/C0705F.asm:16 CPX #$0000
    case 0xC072AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:16 CPX #$0000
    // Overlapping static entry reached from 0xC072AB.
    case 0xC072AD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:17 BEQ @UNKNOWN1
    case 0xC072AE: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0705F.asm:18 TXA
    case 0xC072B0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0705F.asm:19 AND #$0003
    case 0xC072B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C0705F.asm:19 AND #$0003
    // Overlapping static entry reached from 0xC072B1.
    case 0xC072B3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:20 BEQ @UNKNOWN2
    case 0xC072B4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0705F.asm:22 LDY #$0000
    case 0xC072B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:22 LDY #$0000
    // Overlapping static entry reached from 0xC072B6.
    case 0xC072B8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0705F.asm:24 LDA #$0002
    case 0xC072B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0705F.asm:24 LDA #$0002
    // Overlapping static entry reached from 0xC072B9.
    case 0xC072BB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0705F.asm:25 STA AUTO_MOVEMENT_DIRECTION
    case 0xC072BC: cpu.execute_instruction<0x8D>(0x006150, 3); return true;
    // src/unknown/C0/C0705F.asm:26 BRA @UNKNOWN10
    case 0xC072BF: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unknown/C0/C0705F.asm:28 CPX #$0000
    case 0xC072C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:28 CPX #$0000
    // Overlapping static entry reached from 0xC072C1.
    case 0xC072C3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:29 BEQ @UNKNOWN4
    case 0xC072C4: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0705F.asm:30 TXA
    case 0xC072C6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0705F.asm:31 AND #$0003
    case 0xC072C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C0705F.asm:31 AND #$0003
    // Overlapping static entry reached from 0xC072C7.
    case 0xC072C9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:32 BEQ @UNKNOWN5
    case 0xC072CA: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0705F.asm:34 LDY #$0000
    case 0xC072CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:34 LDY #$0000
    // Overlapping static entry reached from 0xC072CC.
    case 0xC072CE: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0705F.asm:36 LDA #$0006
    case 0xC072CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C0705F.asm:36 LDA #$0006
    // Overlapping static entry reached from 0xC072CF.
    case 0xC072D1: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0705F.asm:37 STA AUTO_MOVEMENT_DIRECTION
    case 0xC072D2: cpu.execute_instruction<0x8D>(0x006150, 3); return true;
    // src/unknown/C0/C0705F.asm:38 BRA @UNKNOWN10
    case 0xC072D5: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C0/C0705F.asm:40 TXA
    case 0xC072D7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0705F.asm:41 AND #$0007
    case 0xC072D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0705F.asm:41 AND #$0007
    // Overlapping static entry reached from 0xC072D8.
    case 0xC072DA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:42 BEQ @UNKNOWN7
    case 0xC072DB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0705F.asm:43 LDY #$0000
    case 0xC072DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:43 LDY #$0000
    // Overlapping static entry reached from 0xC072DD.
    case 0xC072DF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0705F.asm:45 LDA #$0002
    case 0xC072E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0705F.asm:45 LDA #$0002
    // Overlapping static entry reached from 0xC072E0.
    case 0xC072E2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0705F.asm:46 STA AUTO_MOVEMENT_DIRECTION
    case 0xC072E3: cpu.execute_instruction<0x8D>(0x006150, 3); return true;
    // src/unknown/C0/C0705F.asm:47 BRA @UNKNOWN10
    case 0xC072E6: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C0/C0705F.asm:49 TXA
    case 0xC072E8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0705F.asm:50 AND #$0007
    case 0xC072E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0705F.asm:50 AND #$0007
    // Overlapping static entry reached from 0xC072E9.
    case 0xC072EB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:51 BEQ @UNKNOWN9
    case 0xC072EC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0705F.asm:52 LDY #$0000
    case 0xC072EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:52 LDY #$0000
    // Overlapping static entry reached from 0xC072EE.
    case 0xC072F0: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0705F.asm:54 LDA #$0006
    case 0xC072F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C0705F.asm:54 LDA #$0006
    // Overlapping static entry reached from 0xC072F1.
    case 0xC072F3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0705F.asm:55 STA AUTO_MOVEMENT_DIRECTION
    case 0xC072F4: cpu.execute_instruction<0x8D>(0x006150, 3); return true;
    // src/unknown/C0/C0705F.asm:57 TYA
    case 0xC072F7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0705F.asm:58 RTS
    case 0xC072F8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C070CB.asm (unresolved).
bool execute_unresolved_c0_c070cb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C070CB.asm:3 BEGIN_C_FUNCTION
    case 0xC072F9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    case 0xC072FB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    case 0xC072FC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    case 0xC072FD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    case 0xC072FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC072FE.
    case 0xC07300: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    case 0xC07301: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    case 0xC07302: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:18 STY @VIRTUAL02
    case 0xC07303: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:18 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC07300.
    case 0xC07304: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C0/C070CB.asm:19 TXY
    case 0xC07305: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:20 STY @LOCAL04
    case 0xC07306: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:21 STA @LOCAL03
    case 0xC07308: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C070CB.asm:22 LDA DEMO_FRAMES_LEFT
    case 0xC0730A: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C070CB.asm:23 BNEL @UNKNOWN7
    case 0xC0730D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C070CB.asm:23 BNEL @UNKNOWN7
    case 0xC0730F: cpu.execute_instruction<0x4C>(0x007411, 3); return true;
    // src/unknown/C0/C070CB.asm:24 JSL UNKNOWN_C48C69
    case 0xC07312: cpu.execute_instruction<0x22>(0xC462B3, 4); return true;
    // src/unknown/C0/C070CB.asm:25 LDA @LOCAL03
    case 0xC07316: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C070CB.asm:26 TAX
    case 0xC07318: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:27 XBA
    case 0xC07319: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:28 AND #$00FF
    case 0xC0731A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C070CB.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC0731A.
    case 0xC0731C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C070CB.asm:29 STA @VIRTUAL04
    case 0xC0731D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C070CB.asm:30 LDY @LOCAL04
    case 0xC0731F: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:31 TYA
    case 0xC07321: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:32 ASL
    case 0xC07322: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:33 ASL
    case 0xC07323: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:34 ASL
    case 0xC07324: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:35 TAY
    case 0xC07325: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:36 STY @LOCAL04
    case 0xC07326: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:37 LDA @VIRTUAL02
    case 0xC07328: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:38 ASL
    case 0xC0732A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:39 ASL
    case 0xC0732B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:40 ASL
    case 0xC0732C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:41 STA @VIRTUAL02
    case 0xC0732D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:42 LDA GAME_STATE+game_state::walking_style
    case 0xC0732F: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C070CB.asm:43 BNEL @UNKNOWN4
    case 0xC07332: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C070CB.asm:43 BNEL @UNKNOWN4
    case 0xC07334: cpu.execute_instruction<0x4C>(0x0073B4, 3); return true;
    // src/unknown/C0/C070CB.asm:44 TXA
    case 0xC07337: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:45 JSR UNKNOWN_C0705F
    case 0xC07338: cpu.execute_instruction<0x20>(0x00728D, 3); return true;
    // src/unknown/C0/C070CB.asm:46 CMP #0
    case 0xC0733B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C070CB.asm:46 CMP #0
    // Overlapping static entry reached from 0xC0733B.
    case 0xC0733D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C070CB.asm:47 BNEL @UNKNOWN7
    case 0xC0733E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C070CB.asm:47 BNEL @UNKNOWN7
    case 0xC07340: cpu.execute_instruction<0x4C>(0x007411, 3); return true;
    // src/unknown/C0/C070CB.asm:48 LDA AUTO_MOVEMENT_DIRECTION
    case 0xC07343: cpu.execute_instruction<0xAD>(0x006150, 3); return true;
    // src/unknown/C0/C070CB.asm:49 STA GAME_STATE+game_state::leader_direction
    case 0xC07346: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/unknown/C0/C070CB.asm:50 STZ NOT_MOVING_IN_SAME_DIRECTION_FACED
    case 0xC07349: cpu.execute_instruction<0x9C>(0x00613E, 3); return true;
    // src/unknown/C0/C070CB.asm:51 LDA #3
    case 0xC0734C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C070CB.asm:51 LDA #3
    // Overlapping static entry reached from 0xC0734C.
    case 0xC0734E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C070CB.asm:52 STA PLAYER_MOVEMENT_FLAGS
    case 0xC0734F: cpu.execute_instruction<0x8D>(0x0060DC, 3); return true;
    // src/unknown/C0/C070CB.asm:53 LDA #1
    case 0xC07352: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C070CB.asm:53 LDA #1
    // Overlapping static entry reached from 0xC07352.
    case 0xC07354: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C070CB.asm:54 STA UNREAD_7E5DBA
    case 0xC07355: cpu.execute_instruction<0x8D>(0x006140, 3); return true;
    // src/unknown/C0/C070CB.asm:55 LDA @VIRTUAL04
    case 0xC07358: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C070CB.asm:56 XBA
    case 0xC0735A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:57 AND #$FF00
    case 0xC0735B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C070CB.asm:57 AND #$FF00
    // Overlapping static entry reached from 0xC0735B.
    case 0xC0735D: cpu.execute_instruction<0xFF>(0x614A8D, 4); return true;
    // src/unknown/C0/C070CB.asm:58 STA STAIRS_DIRECTION
    case 0xC0735E: cpu.execute_instruction<0x8D>(0x00614A, 3); return true;
    // src/unknown/C0/C070CB.asm:59 LDA @VIRTUAL04
    case 0xC07361: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C070CB.asm:60 ASL
    case 0xC07363: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:61 TAX
    case 0xC07364: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:62 LDY @LOCAL04
    case 0xC07365: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:63 TYA
    case 0xC07367: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:64 CLC
    case 0xC07368: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:65 ADC f:UNKNOWN_C3E210,X
    case 0xC07369: cpu.execute_instruction<0x7F>(0xC3E1FA, 4); return true;
    // src/unknown/C0/C070CB.asm:66 STA @LOCAL03
    case 0xC0736D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C070CB.asm:67 LDA @VIRTUAL02
    case 0xC0736F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:68 CLC
    case 0xC07371: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:69 ADC f:UNKNOWN_C3E218,X
    case 0xC07372: cpu.execute_instruction<0x7F>(0xC3E202, 4); return true;
    // src/unknown/C0/C070CB.asm:70 STA @VIRTUAL02
    case 0xC07376: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:71 STA @LOCAL00
    case 0xC07378: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C070CB.asm:72 LDY @LOCAL03
    case 0xC0737A: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C070CB.asm:73 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0737C: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C070CB.asm:74 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0737F: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C070CB.asm:75 JSL UNKNOWN_C48D58
    case 0xC07382: cpu.execute_instruction<0x22>(0xC463A2, 4); return true;
    // src/unknown/C0/C070CB.asm:76 TAY
    case 0xC07386: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:77 STY @LOCAL02
    case 0xC07387: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C070CB.asm:78 BNE @UNKNOWN3
    case 0xC07389: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C070CB.asm:79 INY
    case 0xC0738B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:80 STY @LOCAL02
    case 0xC0738C: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C070CB.asm:82 LDX #6
    case 0xC0738E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C0/C070CB.asm:82 LDX #6
    // Overlapping static entry reached from 0xC0738E.
    case 0xC07390: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C070CB.asm:83 STX @LOCAL01
    case 0xC07391: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:84 LDA @VIRTUAL04
    case 0xC07393: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C070CB.asm:85 ASL
    case 0xC07395: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:86 TAX
    case 0xC07396: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:87 LDA f:UNKNOWN_C3E200,X
    case 0xC07397: cpu.execute_instruction<0xBF>(0xC3E1EA, 4); return true;
    // src/unknown/C0/C070CB.asm:88 LDX @LOCAL01
    case 0xC0739B: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:89 JSL UNKNOWN_C48E6B
    case 0xC0739D: cpu.execute_instruction<0x22>(0xC464B5, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC073A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B0, 2); else cpu.execute_instruction<0xA9>(0x0071B0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC073A1.
    case 0xC073A3: cpu.execute_instruction<0x71>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC073A4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC073A3.
    case 0xC073A5: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC073A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC073A6.
    case 0xC073A8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC073A9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C070CB.asm:91 LDY @LOCAL02
    case 0xC073AB: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C070CB.asm:92 TYA
    case 0xC073AD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:93 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC073AE: cpu.execute_instruction<0x22>(0xC0DBAE, 4); return true;
    // src/unknown/C0/C070CB.asm:94 BRA @UNKNOWN6
    case 0xC073B2: cpu.execute_instruction<0x80>(0x00004F, 2); return true;
    // src/unknown/C0/C070CB.asm:96 LDA @VIRTUAL04
    case 0xC073B4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C070CB.asm:97 ASL
    case 0xC073B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:98 TAX
    case 0xC073B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:99 TYA
    case 0xC073B8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:100 CLC
    case 0xC073B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:101 ADC f:UNKNOWN_C3E220,X
    case 0xC073BA: cpu.execute_instruction<0x7F>(0xC3E20A, 4); return true;
    // src/unknown/C0/C070CB.asm:102 STA @LOCAL03
    case 0xC073BE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C070CB.asm:103 LDA @VIRTUAL02
    case 0xC073C0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:104 CLC
    case 0xC073C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:105 ADC f:UNKNOWN_C3E228,X
    case 0xC073C3: cpu.execute_instruction<0x7F>(0xC3E212, 4); return true;
    // src/unknown/C0/C070CB.asm:106 STA @VIRTUAL02
    case 0xC073C7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:107 STA @LOCAL00
    case 0xC073C9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C070CB.asm:108 LDY @LOCAL03
    case 0xC073CB: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C070CB.asm:109 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC073CD: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C070CB.asm:110 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC073D0: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C070CB.asm:111 JSL UNKNOWN_C48D58
    case 0xC073D3: cpu.execute_instruction<0x22>(0xC463A2, 4); return true;
    // src/unknown/C0/C070CB.asm:112 TAY
    case 0xC073D7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:113 STY @LOCAL02
    case 0xC073D8: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C070CB.asm:114 BNE @UNKNOWN5
    case 0xC073DA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C070CB.asm:115 INY
    case 0xC073DC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:116 STY @LOCAL02
    case 0xC073DD: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C070CB.asm:118 LDX #12
    case 0xC073DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/unknown/C0/C070CB.asm:118 LDX #12
    // Overlapping static entry reached from 0xC073DF.
    case 0xC073E1: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C070CB.asm:119 STX @LOCAL04
    case 0xC073E2: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:120 LDA @VIRTUAL04
    case 0xC073E4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C070CB.asm:121 ASL
    case 0xC073E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:122 TAX
    case 0xC073E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:123 LDA f:UNKNOWN_C3E208,X
    case 0xC073E8: cpu.execute_instruction<0xBF>(0xC3E1F2, 4); return true;
    // src/unknown/C0/C070CB.asm:124 LDX @LOCAL04
    case 0xC073EC: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:125 JSL UNKNOWN_C48E6B
    case 0xC073EE: cpu.execute_instruction<0x22>(0xC464B5, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC073F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00721B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC073F2.
    case 0xC073F4: cpu.execute_instruction<0x72>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC073F5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC073F4.
    case 0xC073F6: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC073F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC073F7.
    case 0xC073F9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC073FA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C070CB.asm:127 LDY @LOCAL02
    case 0xC073FC: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C070CB.asm:128 TYA
    case 0xC073FE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:129 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC073FF: cpu.execute_instruction<0x22>(0xC0DBAE, 4); return true;
    // src/unknown/C0/C070CB.asm:131 LDA @LOCAL03
    case 0xC07403: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C070CB.asm:132 STA STAIRS_NEW_X
    case 0xC07405: cpu.execute_instruction<0x8D>(0x006152, 3); return true;
    // src/unknown/C0/C070CB.asm:133 LDA @VIRTUAL02
    case 0xC07408: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:134 STA STAIRS_NEW_Y
    case 0xC0740A: cpu.execute_instruction<0x8D>(0x006154, 3); return true;
    // src/unknown/C0/C070CB.asm:135 JSL UNKNOWN_C48E95
    case 0xC0740D: cpu.execute_instruction<0x22>(0xC464DF, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C070CB.asm:137 END_C_FUNCTION
    case 0xC07411: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C070CB.asm:137 END_C_FUNCTION
    case 0xC07412: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C073C0.asm (unresolved).
bool execute_unresolved_c0_c073c0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C073C0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC075FC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    case 0xC075FE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    case 0xC075FF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    case 0xC07600: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    case 0xC07601: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC07601.
    case 0xC07603: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    case 0xC07604: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    case 0xC07605: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:10 STA @VIRTUAL04
    case 0xC07606: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C073C0.asm:10 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC07603.
    case 0xC07607: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C0/C073C0.asm:11 STA @LOCAL02
    case 0xC07608: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C073C0.asm:11 STA @LOCAL02
    // Overlapping static entry reached from 0xC07607.
    case 0xC07609: cpu.execute_instruction<0x14>(0x0000AD, 2); return true;
    // src/unknown/C0/C073C0.asm:12 LDA NEXT_QUEUED_INTERACTION
    case 0xC0760A: cpu.execute_instruction<0xAD>(0x00618A, 3); return true;
    // src/unknown/C0/C073C0.asm:12 LDA NEXT_QUEUED_INTERACTION
    // Overlapping static entry reached from 0xC07609.
    case 0xC0760B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:12 LDA NEXT_QUEUED_INTERACTION
    // Overlapping static entry reached from 0xC0760B.
    case 0xC0760C: cpu.execute_instruction<0x61>(0x00004D, 2); return true;
    // src/unknown/C0/C073C0.asm:13 EOR NEXT_QUEUED_INTERACTION
    case 0xC0760D: cpu.execute_instruction<0x4D>(0x00618A, 3); return true;
    // src/unknown/C0/C073C0.asm:13 EOR NEXT_QUEUED_INTERACTION
    // Overlapping static entry reached from 0xC0760C.
    case 0xC0760E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:13 EOR NEXT_QUEUED_INTERACTION
    // Overlapping static entry reached from 0xC0760E.
    case 0xC0760F: cpu.execute_instruction<0x61>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C073C0.asm:14 BNEL @UNKNOWN6
    case 0xC07610: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C073C0.asm:14 BNEL @UNKNOWN6
    // Overlapping static entry reached from 0xC0760F.
    case 0xC07611: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C073C0.asm:14 BNEL @UNKNOWN6
    case 0xC07612: cpu.execute_instruction<0x4C>(0x0076B2, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C073C0.asm:14 BNEL @UNKNOWN6
    // Overlapping static entry reached from 0xC07611.
    case 0xC07613: cpu.execute_instruction<0xB2>(0x000076, 2); return true;
    // src/unknown/C0/C073C0.asm:15 LDA PSI_TELEPORT_DESTINATION
    case 0xC07615: cpu.execute_instruction<0xAD>(0x00A141, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C073C0.asm:16 BNEL @UNKNOWN6
    case 0xC07618: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C073C0.asm:16 BNEL @UNKNOWN6
    case 0xC0761A: cpu.execute_instruction<0x4C>(0x0076B2, 3); return true;
    // src/unknown/C0/C073C0.asm:17 LDA @VIRTUAL04
    case 0xC0761D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/unknown/C0/C073C0.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0761F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/unknown/C0/C073C0.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07621: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/unknown/C0/C073C0.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07622: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/unknown/C0/C073C0.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07624: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/unknown/C0/C073C0.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07625: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/unknown/C0/C073C0.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07627: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:19 CLC
    case 0xC07628: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:20 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    case 0xC07629: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0061C2, 3); return true;
    // src/unknown/C0/C073C0.asm:20 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    // Overlapping static entry reached from 0xC07629.
    case 0xC0762B: cpu.execute_instruction<0x61>(0x0000A8, 2); return true;
    // src/unknown/C0/C073C0.asm:21 TAY
    case 0xC0762C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:22 LDA a:active_hotspot::mode,Y
    case 0xC0762D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C073C0.asm:23 STA @LOCAL01
    case 0xC07630: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C073C0.asm:24 LDX GAME_STATE+game_state::leader_x_coord
    case 0xC07632: cpu.execute_instruction<0xAE>(0x009B28, 3); return true;
    // src/unknown/C0/C073C0.asm:25 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC07635: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C073C0.asm:26 STA @VIRTUAL02
    case 0xC07638: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C073C0.asm:27 LDA @LOCAL01
    case 0xC0763A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C073C0.asm:28 CMP #1
    case 0xC0763C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C073C0.asm:28 CMP #1
    // Overlapping static entry reached from 0xC0763C.
    case 0xC0763E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C073C0.asm:29 BNE @UNKNOWN4
    case 0xC0763F: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C0/C073C0.asm:30 TXA
    case 0xC07641: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:31 CMP a:active_hotspot::x1,Y
    case 0xC07642: cpu.execute_instruction<0xD9>(0x000002, 3); return true;
    // src/unknown/C0/C073C0.asm:32 BCC @UNKNOWN5
    case 0xC07645: cpu.execute_instruction<0x90>(0x000038, 2); return true;
    // src/unknown/C0/C073C0.asm:33 TXA
    case 0xC07647: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:34 CMP a:active_hotspot::x2,Y
    case 0xC07648: cpu.execute_instruction<0xD9>(0x000006, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C073C0.asm:35 BGT @UNKNOWN5
    case 0xC0764B: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C073C0.asm:35 BGT @UNKNOWN5
    case 0xC0764D: cpu.execute_instruction<0xB0>(0x000030, 2); return true;
    // src/unknown/C0/C073C0.asm:36 LDA @VIRTUAL02
    case 0xC0764F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C073C0.asm:37 CMP a:active_hotspot::y1,Y
    case 0xC07651: cpu.execute_instruction<0xD9>(0x000004, 3); return true;
    // src/unknown/C0/C073C0.asm:38 BCC @UNKNOWN5
    case 0xC07654: cpu.execute_instruction<0x90>(0x000029, 2); return true;
    // src/unknown/C0/C073C0.asm:39 LDA @VIRTUAL02
    case 0xC07656: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C073C0.asm:40 CMP a:active_hotspot::y2,Y
    case 0xC07658: cpu.execute_instruction<0xD9>(0x000008, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C073C0.asm:41 BGT @UNKNOWN5
    case 0xC0765B: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C073C0.asm:41 BGT @UNKNOWN5
    case 0xC0765D: cpu.execute_instruction<0xB0>(0x000020, 2); return true;
    // src/unknown/C0/C073C0.asm:42 BRA @UNKNOWN6
    case 0xC0765F: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/unknown/C0/C073C0.asm:44 TXA
    case 0xC07661: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:45 CMP a:active_hotspot::x1,Y
    case 0xC07662: cpu.execute_instruction<0xD9>(0x000002, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C073C0.asm:46 BLTEQ @UNKNOWN6
    case 0xC07665: cpu.execute_instruction<0x90>(0x00004B, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C073C0.asm:46 BLTEQ @UNKNOWN6
    case 0xC07667: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/unknown/C0/C073C0.asm:47 TXA
    case 0xC07669: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:48 CMP a:active_hotspot::x2,Y
    case 0xC0766A: cpu.execute_instruction<0xD9>(0x000006, 3); return true;
    // src/unknown/C0/C073C0.asm:49 BCS @UNKNOWN6
    case 0xC0766D: cpu.execute_instruction<0xB0>(0x000043, 2); return true;
    // src/unknown/C0/C073C0.asm:50 LDA @VIRTUAL02
    case 0xC0766F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C073C0.asm:51 CMP a:active_hotspot::y1,Y
    case 0xC07671: cpu.execute_instruction<0xD9>(0x000004, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C073C0.asm:52 BLTEQ @UNKNOWN6
    case 0xC07674: cpu.execute_instruction<0x90>(0x00003C, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C073C0.asm:52 BLTEQ @UNKNOWN6
    case 0xC07676: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C0/C073C0.asm:53 LDA @VIRTUAL02
    case 0xC07678: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C073C0.asm:54 CMP a:active_hotspot::y2,Y
    case 0xC0767A: cpu.execute_instruction<0xD9>(0x000008, 3); return true;
    // src/unknown/C0/C073C0.asm:55 BCS @UNKNOWN6
    case 0xC0767D: cpu.execute_instruction<0xB0>(0x000033, 2); return true;
    // src/unknown/C0/C073C0.asm:57 LDA #0
    case 0xC0767F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C073C0.asm:57 LDA #0
    // Overlapping static entry reached from 0xC0767F.
    case 0xC07681: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C073C0.asm:58 STA a:active_hotspot::mode,Y
    case 0xC07682: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C073C0.asm:59 TYA
    case 0xC07685: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:60 CLC
    case 0xC07686: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:61 ADC #active_hotspot::pointer
    case 0xC07687: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/C0/C073C0.asm:61 ADC #active_hotspot::pointer
    // Overlapping static entry reached from 0xC07687.
    case 0xC07689: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C073C0.asm:62 TAY
    case 0xC0768A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C073C0.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0768B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C073C0.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0768E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C073C0.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC07690: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C073C0.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC07693: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C073C0.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07695: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C073C0.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07697: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C073C0.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07699: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C073C0.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0769B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C073C0.asm:65 LDA #9
    case 0xC0769D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C0/C073C0.asm:65 LDA #9
    // Overlapping static entry reached from 0xC0769D.
    case 0xC0769F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C073C0.asm:66 JSL UNKNOWN_C064E3
    case 0xC076A0: cpu.execute_instruction<0x22>(0xC06711, 4); return true;
    // src/unknown/C0/C073C0.asm:67 LDA @LOCAL02
    case 0xC076A4: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C073C0.asm:68 STA @VIRTUAL04
    case 0xC076A6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C073C0.asm:70 CLC
    case 0xC076A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:71 ADC #.LOWORD(GAME_STATE)
    case 0xC076A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C073C0.asm:71 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC076A9.
    case 0xC076AB: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:72 TAX
    case 0xC076AC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC076AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C073C0.asm:74 STZ a:game_state::active_hotspot_modes,X
    case 0xC076AF: cpu.execute_instruction<0x9E>(0x0000C5, 3); return true;
    // src/unknown/C0/C073C0.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xC076B2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C073C0.asm:82 END_C_FUNCTION
    case 0xC076B4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C073C0.asm:82 END_C_FUNCTION
    case 0xC076B5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07477.asm (unresolved).
bool execute_unresolved_c0_c07477_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07477.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC076B6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    case 0xC076B8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    case 0xC076B9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    case 0xC076BA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    case 0xC076BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC076BB.
    case 0xC076BD: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    case 0xC076BE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    case 0xC076BF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:10 TXY
    case 0xC076C0: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:11 STY @LOCAL01
    case 0xC076C1: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C07477.asm:12 STA @LOCAL00
    case 0xC076C3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C07477.asm:13 LOADPTR DOOR_POINTER_TABLE, @VIRTUAL0A
    case 0xC076C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C07477.asm:13 LOADPTR DOOR_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC076C5.
    case 0xC076C7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C07477.asm:13 LOADPTR DOOR_POINTER_TABLE, @VIRTUAL0A
    case 0xC076C8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C07477.asm:13 LOADPTR DOOR_POINTER_TABLE, @VIRTUAL0A
    case 0xC076CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C07477.asm:13 LOADPTR DOOR_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC076CA.
    case 0xC076CC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C07477.asm:13 LOADPTR DOOR_POINTER_TABLE, @VIRTUAL0A
    case 0xC076CD: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C07477.asm:14 LDA @LOCAL00
    case 0xC076CF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07477.asm:15 LSR
    case 0xC076D1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:16 LSR
    case 0xC076D2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:17 LSR
    case 0xC076D3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:18 LSR
    case 0xC076D4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:19 LSR
    case 0xC076D5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:20 STA @VIRTUAL02
    case 0xC076D6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07477.asm:21 TYA
    case 0xC076D8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:22 AND #$FFE0
    case 0xC076D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C0/C07477.asm:22 AND #$FFE0
    // Overlapping static entry reached from 0xC076D9.
    case 0xC076DB: cpu.execute_instruction<0xFF>(0x026518, 4); return true;
    // src/unknown/C0/C07477.asm:23 CLC
    case 0xC076DC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:24 ADC @VIRTUAL02
    case 0xC076DD: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C07477.asm:25 ASL
    case 0xC076DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:26 ASL
    case 0xC076E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:27 CLC
    case 0xC076E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:28 ADC @VIRTUAL0A
    case 0xC076E2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C07477.asm:29 STA @VIRTUAL0A
    case 0xC076E4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC076E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC076E6.
    case 0xC076E8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC076E9: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC076EB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC076EC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC076EE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC076F0: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C07477.asm:31 LDA [@VIRTUAL06]
    case 0xC076F2: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:32 TAX
    case 0xC076F4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:33 BNE @UNKNOWN0
    case 0xC076F5: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC076F7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C07477.asm:35 LDA #$00FF
    case 0xC076F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0080FF, 3); return true;
    // src/unknown/C0/C07477.asm:36 BRA @UNKNOWN4
    case 0xC076FB: cpu.execute_instruction<0x80>(0x000066, 2); return true;
    // src/unknown/C0/C07477.asm:36 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC076F9.
    case 0xC076FC: cpu.execute_instruction<0x66>(0x0000E6, 2); return true;
    // src/unknown/C0/C07477.asm:39 INC @VIRTUAL06
    case 0xC076FD: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:39 INC @VIRTUAL06
    // Overlapping static entry reached from 0xC076FC.
    case 0xC076FE: cpu.execute_instruction<0x06>(0x0000E6, 2); return true;
    // src/unknown/C0/C07477.asm:40 INC @VIRTUAL06
    case 0xC076FF: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:40 INC @VIRTUAL06
    // Overlapping static entry reached from 0xC076FE.
    case 0xC07700: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // src/unknown/C0/C07477.asm:41 LDA @LOCAL00
    case 0xC07701: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07477.asm:41 LDA @LOCAL00
    // Overlapping static entry reached from 0xC07700.
    case 0xC07702: cpu.execute_instruction<0x0E>(0x001F29, 3); return true;
    // src/unknown/C0/C07477.asm:42 AND #$001F
    case 0xC07703: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C07477.asm:42 AND #$001F
    // Overlapping static entry reached from 0xC07703.
    case 0xC07705: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07477.asm:43 STA @VIRTUAL02
    case 0xC07706: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07477.asm:44 LDY @LOCAL01
    case 0xC07708: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C07477.asm:45 TYA
    case 0xC0770A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:46 AND #$001F
    case 0xC0770B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C07477.asm:46 AND #$001F
    // Overlapping static entry reached from 0xC0770B.
    case 0xC0770D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07477.asm:47 STA @LOCAL00
    case 0xC0770E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07477.asm:48 BRA @UNKNOWN3
    case 0xC07710: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C0/C07477.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC07712: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C07477.asm:51 LDY #1
    case 0xC07714: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C07477.asm:51 LDY #1
    // Overlapping static entry reached from 0xC07714.
    case 0xC07716: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C07477.asm:52 LDA [@VIRTUAL06],Y
    case 0xC07717: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC07719: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C07477.asm:54 AND #$00FF
    case 0xC0771B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C07477.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC0771B.
    case 0xC0771D: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C07477.asm:55 CMP @VIRTUAL02
    case 0xC0771E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C07477.asm:56 BNE @UNKNOWN2
    case 0xC07720: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/unknown/C0/C07477.asm:57 LDA @LOCAL00
    case 0xC07722: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07477.asm:58 STA @VIRTUAL04
    case 0xC07724: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C07477.asm:59 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC07726: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C07477.asm:59 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC07728: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C07477.asm:59 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0772A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C07477.asm:59 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0772C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C07477.asm:60 LDA [@VIRTUAL0A]
    case 0xC0772E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C07477.asm:61 AND #$00FF
    case 0xC07730: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C07477.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC07730.
    case 0xC07732: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C07477.asm:62 CMP @VIRTUAL04
    case 0xC07733: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C0/C07477.asm:63 BNE @UNKNOWN2
    case 0xC07735: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/C0/C07477.asm:64 LDY #3
    case 0xC07737: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C07477.asm:64 LDY #3
    // Overlapping static entry reached from 0xC07737.
    case 0xC07739: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C07477.asm:65 LDA [@VIRTUAL06],Y
    case 0xC0773A: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:66 STA DOOR_FOUND
    case 0xC0773C: cpu.execute_instruction<0x8D>(0x006142, 3); return true;
    // src/unknown/C0/C07477.asm:67 INC @VIRTUAL06
    case 0xC0773F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:68 INC @VIRTUAL06
    case 0xC07741: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:69 LDA [@VIRTUAL06]
    case 0xC07743: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:70 AND #$00FF
    case 0xC07745: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C07477.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC07745.
    case 0xC07747: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C07477.asm:71 STA DOOR_FOUND_TYPE
    case 0xC07748: cpu.execute_instruction<0x8D>(0x006144, 3); return true;
    // src/unknown/C0/C07477.asm:72 SEP #PROC_FLAGS::ACCUM8
    case 0xC0774B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C07477.asm:73 LDA [@VIRTUAL06]
    case 0xC0774D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:74 BRA @UNKNOWN4
    case 0xC0774F: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C0/C07477.asm:77 LDA #5
    case 0xC07751: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C07477.asm:77 LDA #5
    // Overlapping static entry reached from 0xC07751.
    case 0xC07753: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C07477.asm:78 CLC
    case 0xC07754: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:79 ADC @VIRTUAL06
    case 0xC07755: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:80 STA @VIRTUAL06
    case 0xC07757: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:81 DEX
    case 0xC07759: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:83 CPX #0
    case 0xC0775A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C07477.asm:83 CPX #0
    // Overlapping static entry reached from 0xC0775A.
    case 0xC0775C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C07477.asm:84 BNE @UNKNOWN1
    case 0xC0775D: cpu.execute_instruction<0xD0>(0x0000B3, 2); return true;
    // src/unknown/C0/C07477.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC0775F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C07477.asm:86 LDA #$00FF
    case 0xC07761: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x002BFF, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07477.asm:88 END_C_FUNCTION
    case 0xC07763: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07477.asm:88 END_C_FUNCTION
    case 0xC07764: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07526.asm (unresolved).
bool execute_unresolved_c0_c07526_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07526.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07765: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    case 0xC07767: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    case 0xC07768: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    case 0xC07769: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    case 0xC0776A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0776A.
    case 0xC0776C: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    case 0xC0776D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    case 0xC0776E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C07526.asm:9 TXY
    case 0xC0776F: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C07526.asm:10 STY @LOCAL01
    case 0xC07770: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C07526.asm:11 STA @VIRTUAL02
    case 0xC07772: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07526.asm:12 TYX
    case 0xC07774: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C07526.asm:13 LDA @VIRTUAL02
    case 0xC07775: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C07526.asm:14 JSL UNKNOWN_C07477
    case 0xC07777: cpu.execute_instruction<0x22>(0xC076B6, 4); return true;
    // src/unknown/C0/C07526.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC0777B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C07526.asm:16 AND #$00FF
    case 0xC0777D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C07526.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC0777D.
    case 0xC0777F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:17 BEQ @UNKNOWN0
    case 0xC07780: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C0/C07526.asm:18 CMP #DOOR_TYPE::TYPE1
    case 0xC07782: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C07526.asm:18 CMP #DOOR_TYPE::TYPE1
    // Overlapping static entry reached from 0xC07782.
    case 0xC07784: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:19 BEQ @UNKNOWN1
    case 0xC07785: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/unknown/C0/C07526.asm:20 CMP #DOOR_TYPE::TYPE2
    case 0xC07787: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C07526.asm:20 CMP #DOOR_TYPE::TYPE2
    // Overlapping static entry reached from 0xC07787.
    case 0xC07789: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:21 BEQ @UNKNOWN2
    case 0xC0778A: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/unknown/C0/C07526.asm:22 CMP #DOOR_TYPE::TYPE3
    case 0xC0778C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C07526.asm:22 CMP #DOOR_TYPE::TYPE3
    // Overlapping static entry reached from 0xC0778C.
    case 0xC0778E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:23 BEQ @UNKNOWN3
    case 0xC0778F: cpu.execute_instruction<0xF0>(0x000043, 2); return true;
    // src/unknown/C0/C07526.asm:24 CMP #DOOR_TYPE::TYPE4
    case 0xC07791: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C07526.asm:24 CMP #DOOR_TYPE::TYPE4
    // Overlapping static entry reached from 0xC07791.
    case 0xC07793: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:25 BEQ @UNKNOWN4
    case 0xC07794: cpu.execute_instruction<0xF0>(0x000051, 2); return true;
    // src/unknown/C0/C07526.asm:26 CMP #DOOR_TYPE::TYPE5
    case 0xC07796: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C07526.asm:26 CMP #DOOR_TYPE::TYPE5
    // Overlapping static entry reached from 0xC07796.
    case 0xC07798: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:27 BEQ @UNKNOWN5
    case 0xC07799: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/unknown/C0/C07526.asm:28 CMP #DOOR_TYPE::TYPE7
    case 0xC0779B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C07526.asm:28 CMP #DOOR_TYPE::TYPE7
    // Overlapping static entry reached from 0xC0779B.
    case 0xC0779D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:29 BEQ @UNKNOWN5
    case 0xC0779E: cpu.execute_instruction<0xF0>(0x00005A, 2); return true;
    // src/unknown/C0/C07526.asm:30 CMP #DOOR_TYPE::TYPE6
    case 0xC077A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C07526.asm:30 CMP #DOOR_TYPE::TYPE6
    // Overlapping static entry reached from 0xC077A0.
    case 0xC077A2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:31 BEQ @UNKNOWN6
    case 0xC077A3: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/unknown/C0/C07526.asm:32 BRA @UNKNOWN7
    case 0xC077A5: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // src/unknown/C0/C07526.asm:34 LDA DOOR_FOUND
    case 0xC077A7: cpu.execute_instruction<0xAD>(0x006142, 3); return true;
    // src/unknown/C0/C07526.asm:35 JSR UNKNOWN_C06A1B
    case 0xC077AA: cpu.execute_instruction<0x20>(0x006C49, 3); return true;
    // src/unknown/C0/C07526.asm:36 LDA #0
    case 0xC077AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C07526.asm:36 LDA #0
    // Overlapping static entry reached from 0xC077AD.
    case 0xC077AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:37 STA @VIRTUAL04
    case 0xC077B0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:38 STA @LOCAL00
    case 0xC077B2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:39 BRA @UNKNOWN7
    case 0xC077B4: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/unknown/C0/C07526.asm:41 LDA DOOR_FOUND
    case 0xC077B6: cpu.execute_instruction<0xAD>(0x006142, 3); return true;
    // src/unknown/C0/C07526.asm:42 JSR UNKNOWN_C06A91
    case 0xC077B9: cpu.execute_instruction<0x20>(0x006CBF, 3); return true;
    // src/unknown/C0/C07526.asm:43 LDA #1
    case 0xC077BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C07526.asm:43 LDA #1
    // Overlapping static entry reached from 0xC077BC.
    case 0xC077BE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:44 STA @VIRTUAL04
    case 0xC077BF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:45 STA @LOCAL00
    case 0xC077C1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:46 BRA @UNKNOWN7
    case 0xC077C3: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/unknown/C0/C07526.asm:48 LDA DOOR_FOUND
    case 0xC077C5: cpu.execute_instruction<0xAD>(0x006142, 3); return true;
    // src/unknown/C0/C07526.asm:49 JSR UNKNOWN_C06ACA
    case 0xC077C8: cpu.execute_instruction<0x20>(0x006CF8, 3); return true;
    // src/unknown/C0/C07526.asm:50 LDA #0
    case 0xC077CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C07526.asm:50 LDA #0
    // Overlapping static entry reached from 0xC077CB.
    case 0xC077CD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:51 STA @VIRTUAL04
    case 0xC077CE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:52 STA @LOCAL00
    case 0xC077D0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:53 BRA @UNKNOWN7
    case 0xC077D2: cpu.execute_instruction<0x80>(0x000042, 2); return true;
    // src/unknown/C0/C07526.asm:55 LDY @LOCAL01
    case 0xC077D4: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C07526.asm:56 LDX @VIRTUAL02
    case 0xC077D6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07526.asm:57 LDA DOOR_FOUND
    case 0xC077D8: cpu.execute_instruction<0xAD>(0x006142, 3); return true;
    // src/unknown/C0/C07526.asm:58 JSR UNKNOWN_C06E6E
    case 0xC077DB: cpu.execute_instruction<0x20>(0x00709C, 3); return true;
    // src/unknown/C0/C07526.asm:59 LDA #0
    case 0xC077DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C07526.asm:59 LDA #0
    // Overlapping static entry reached from 0xC077DE.
    case 0xC077E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:60 STA @VIRTUAL04
    case 0xC077E1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:61 STA @LOCAL00
    case 0xC077E3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:62 BRA @UNKNOWN7
    case 0xC077E5: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C0/C07526.asm:64 LDY @LOCAL01
    case 0xC077E7: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C07526.asm:65 LDX @VIRTUAL02
    case 0xC077E9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07526.asm:66 LDA DOOR_FOUND
    case 0xC077EB: cpu.execute_instruction<0xAD>(0x006142, 3); return true;
    // src/unknown/C0/C07526.asm:67 JSR UNKNOWN_C070CB
    case 0xC077EE: cpu.execute_instruction<0x20>(0x0072F9, 3); return true;
    // src/unknown/C0/C07526.asm:68 LDA #1
    case 0xC077F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C07526.asm:68 LDA #1
    // Overlapping static entry reached from 0xC077F1.
    case 0xC077F3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:69 STA @VIRTUAL04
    case 0xC077F4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:70 STA @LOCAL00
    case 0xC077F6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:71 BRA @UNKNOWN7
    case 0xC077F8: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C0/C07526.asm:73 LDA DOOR_FOUND
    case 0xC077FA: cpu.execute_instruction<0xAD>(0x006142, 3); return true;
    // src/unknown/C0/C07526.asm:74 JSR UNKNOWN_C06A8B
    case 0xC077FD: cpu.execute_instruction<0x20>(0x006CB9, 3); return true;
    // src/unknown/C0/C07526.asm:75 LDA #0
    case 0xC07800: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C07526.asm:75 LDA #0
    // Overlapping static entry reached from 0xC07800.
    case 0xC07802: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:76 STA @VIRTUAL04
    case 0xC07803: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:77 STA @LOCAL00
    case 0xC07805: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:78 BRA @UNKNOWN7
    case 0xC07807: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C07526.asm:80 LDA DOOR_FOUND
    case 0xC07809: cpu.execute_instruction<0xAD>(0x006142, 3); return true;
    // src/unknown/C0/C07526.asm:81 JSR UNKNOWN_C06A8E
    case 0xC0780C: cpu.execute_instruction<0x20>(0x006CBC, 3); return true;
    // src/unknown/C0/C07526.asm:82 LDA #0
    case 0xC0780F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C07526.asm:82 LDA #0
    // Overlapping static entry reached from 0xC0780F.
    case 0xC07811: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:83 STA @VIRTUAL04
    case 0xC07812: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:84 STA @LOCAL00
    case 0xC07814: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:86 LDA @LOCAL00
    case 0xC07816: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:87 STA @VIRTUAL04
    case 0xC07818: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07526.asm:88 END_C_FUNCTION
    case 0xC0781A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07526.asm:88 END_C_FUNCTION
    case 0xC0781B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0769C.asm (unresolved).
bool execute_unresolved_c0_c0769c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0769C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC078E9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0769C.asm:6 END_STACK_VARS
    case 0xC078EB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0769C.asm:6 END_STACK_VARS
    case 0xC078EC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0769C.asm:6 END_STACK_VARS
    case 0xC078ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0769C.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC078ED.
    case 0xC078EF: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0769C.asm:6 END_STACK_VARS
    case 0xC078F0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0769C.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC078F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0769C.asm:8 STZ GAME_STATE + game_state::party_status
    case 0xC078F3: cpu.execute_instruction<0x9C>(0x009AF1, 3); return true;
    // src/unknown/C0/C0769C.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xC078F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0769C.asm:10 LDA #24
    case 0xC078F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0769C.asm:10 LDA #24
    // Overlapping static entry reached from 0xC078F8.
    case 0xC078FA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0769C.asm:11 STA @LOCAL00
    case 0xC078FB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0769C.asm:12 BRA @UNKNOWN1
    case 0xC078FD: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0769C.asm:14 ASL
    case 0xC078FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0769C.asm:15 TAX
    case 0xC07900: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0769C.asm:16 LDA #8
    case 0xC07901: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C0769C.asm:16 LDA #8
    // Overlapping static entry reached from 0xC07901.
    case 0xC07903: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0769C.asm:17 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC07904: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/C0/C0769C.asm:18 LDA @LOCAL00
    case 0xC07907: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0769C.asm:19 INC
    case 0xC07909: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0769C.asm:20 STA @LOCAL00
    case 0xC0790A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0769C.asm:22 CMP #29
    case 0xC0790C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/unknown/C0/C0769C.asm:22 CMP #29
    // Overlapping static entry reached from 0xC0790C.
    case 0xC0790E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0769C.asm:23 BLTEQ @UNKNOWN0
    case 0xC0790F: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0769C.asm:23 BLTEQ @UNKNOWN0
    case 0xC07911: cpu.execute_instruction<0xF0>(0x0000EC, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0769C.asm:24 END_C_FUNCTION
    case 0xC07913: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0769C.asm:24 END_C_FUNCTION
    case 0xC07914: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C076C8.asm (unresolved).
bool execute_unresolved_c0_c076c8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C076C8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07915: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    case 0xC07917: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    case 0xC07918: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    case 0xC07919: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    case 0xC0791A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0791A.
    case 0xC0791C: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    case 0xC0791D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    case 0xC0791E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:9 TAY
    case 0xC0791F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:10 LDX #.LOWORD(GAME_STATE) + game_state::party_status
    case 0xC07920: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F1, 2); else cpu.execute_instruction<0xA2>(0x009AF1, 3); return true;
    // src/unknown/C0/C076C8.asm:10 LDX #.LOWORD(GAME_STATE) + game_state::party_status
    // Overlapping static entry reached from 0xC07920.
    case 0xC07922: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:11 LDA __BSS_START__,X
    case 0xC07923: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C076C8.asm:12 AND #$00FF
    case 0xC07926: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C076C8.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC07926.
    case 0xC07928: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C076C8.asm:13 CMP #3
    case 0xC07929: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C076C8.asm:13 CMP #3
    // Overlapping static entry reached from 0xC07929.
    case 0xC0792B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C076C8.asm:14 BEQ @UNKNOWN2
    case 0xC0792C: cpu.execute_instruction<0xF0>(0x000033, 2); return true;
    // src/unknown/C0/C076C8.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC0792E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C076C8.asm:16 LDA #3
    case 0xC07930: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x009D03, 3); return true;
    // src/unknown/C0/C076C8.asm:17 STA __BSS_START__,X
    case 0xC07932: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C076C8.asm:17 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC07930.
    case 0xC07933: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C076C8.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC07935: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C076C8.asm:18 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC07977.
    case 0xC07936: cpu.execute_instruction<0x20>(0x0018A9, 3); return true;
    // src/unknown/C0/C076C8.asm:19 LDA #24
    case 0xC07937: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C076C8.asm:19 LDA #24
    // Overlapping static entry reached from 0xC07937.
    case 0xC07939: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C076C8.asm:20 STA @LOCAL01
    case 0xC0793A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C076C8.asm:21 BRA @UNKNOWN1
    case 0xC0793C: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C076C8.asm:23 ASL
    case 0xC0793E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:24 TAX
    case 0xC0793F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:25 LDA #5
    case 0xC07940: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C076C8.asm:25 LDA #5
    // Overlapping static entry reached from 0xC07940.
    case 0xC07942: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C076C8.asm:26 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC07943: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/C0/C076C8.asm:27 LDA @LOCAL01
    case 0xC07946: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C076C8.asm:28 INC
    case 0xC07948: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:29 STA @LOCAL01
    case 0xC07949: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C076C8.asm:31 CMP #29
    case 0xC0794B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/unknown/C0/C076C8.asm:31 CMP #29
    // Overlapping static entry reached from 0xC0794B.
    case 0xC0794D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C076C8.asm:32 BLTEQ @UNKNOWN0
    case 0xC0794E: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C076C8.asm:32 BLTEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC0797D.
    case 0xC0794F: cpu.execute_instruction<0xEE>(0x00ECF0, 3); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C076C8.asm:32 BLTEQ @UNKNOWN0
    case 0xC07950: cpu.execute_instruction<0xF0>(0x0000EC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C076C8.asm:33 LOADPTR UNKNOWN_C0769C, @LOCAL00
    case 0xC07952: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E9, 2); else cpu.execute_instruction<0xA9>(0x0078E9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C076C8.asm:33 LOADPTR UNKNOWN_C0769C, @LOCAL00
    // Overlapping static entry reached from 0xC07952.
    case 0xC07954: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C076C8.asm:33 LOADPTR UNKNOWN_C0769C, @LOCAL00
    case 0xC07955: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C076C8.asm:33 LOADPTR UNKNOWN_C0769C, @LOCAL00
    case 0xC07957: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C076C8.asm:33 LOADPTR UNKNOWN_C0769C, @LOCAL00
    // Overlapping static entry reached from 0xC07957.
    case 0xC07959: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C076C8.asm:33 LOADPTR UNKNOWN_C0769C, @LOCAL00
    case 0xC0795A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C076C8.asm:34 TYA
    case 0xC0795C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:35 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC0795D: cpu.execute_instruction<0x22>(0xC0DBAE, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C076C8.asm:37 END_C_FUNCTION
    case 0xC07961: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C076C8.asm:37 END_C_FUNCTION
    case 0xC07962: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07716.asm (unresolved).
bool execute_unresolved_c0_c07716_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07716.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07963: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07716.asm:7 END_STACK_VARS
    case 0xC07965: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07716.asm:7 END_STACK_VARS
    case 0xC07966: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07716.asm:7 END_STACK_VARS
    case 0xC07967: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07716.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC07967.
    case 0xC07969: cpu.execute_instruction<0xFF>(0x3AAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07716.asm:7 END_STACK_VARS
    case 0xC0796A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:8 LDA GAME_STATE+game_state::current_party_members
    case 0xC0796B: cpu.execute_instruction<0xAD>(0x009B3A, 3); return true;
    // src/unknown/C0/C07716.asm:8 LDA GAME_STATE+game_state::current_party_members
    // Overlapping static entry reached from 0xC07969.
    case 0xC0796D: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:9 ASL
    case 0xC0796E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:10 TAX
    case 0xC0796F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:11 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC07970: cpu.execute_instruction<0xBD>(0x0010AC, 3); return true;
    // src/unknown/C0/C07716.asm:12 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC07973: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00C000, 3); return true;
    // src/unknown/C0/C07716.asm:12 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC07973.
    case 0xC07975: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000D0, 2); else cpu.execute_instruction<0xC0>(0x0050D0, 3); return true;
    // src/unknown/C0/C07716.asm:13 BNE @RETURN
    case 0xC07976: cpu.execute_instruction<0xD0>(0x000050, 2); return true;
    // src/unknown/C0/C07716.asm:13 BNE @RETURN
    // Overlapping static entry reached from 0xC07975.
    case 0xC07977: cpu.execute_instruction<0x50>(0x0000BD, 2); return true;
    // src/unknown/C0/C07716.asm:14 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC07978: cpu.execute_instruction<0xBD>(0x001160, 3); return true;
    // src/unknown/C0/C07716.asm:14 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    // Overlapping static entry reached from 0xC07977.
    case 0xC07979: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:15 AND #$8000
    case 0xC0797B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C07716.asm:15 AND #$8000
    // Overlapping static entry reached from 0xC0797B.
    case 0xC0797D: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/C0/C07716.asm:16 BNE @RETURN
    case 0xC0797E: cpu.execute_instruction<0xD0>(0x000048, 2); return true;
    // src/unknown/C0/C07716.asm:17 LDA GAME_STATE + game_state::unknownB0
    case 0xC07980: cpu.execute_instruction<0xAD>(0x009B56, 3); return true;
    // src/unknown/C0/C07716.asm:18 CMP #2
    case 0xC07983: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C07716.asm:18 CMP #2
    // Overlapping static entry reached from 0xC07983.
    case 0xC07985: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07716.asm:19 BEQ @RETURN
    case 0xC07986: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/unknown/C0/C07716.asm:21 LDA #0
    case 0xC07988: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C07716.asm:21 LDA #0
    // Overlapping static entry reached from 0xC07988.
    case 0xC0798A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07716.asm:22 STA @LOCAL00
    case 0xC0798B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07716.asm:23 STA @LOCAL01
    case 0xC0798D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C07716.asm:28 LDY #.LOWORD(-1)
    case 0xC0798F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C07716.asm:28 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0798F.
    case 0xC07991: cpu.execute_instruction<0xFF>(0x0312A2, 4); return true;
    // src/unknown/C0/C07716.asm:29 LDX #EVENT_SCRIPT::EVENT_786
    case 0xC07992: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000012, 2); else cpu.execute_instruction<0xA2>(0x000312, 3); return true;
    // src/unknown/C0/C07716.asm:29 LDX #EVENT_SCRIPT::EVENT_786
    // Overlapping static entry reached from 0xC07992.
    case 0xC07994: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/unknown/C0/C07716.asm:30 LDA #OVERWORLD_SPRITE::MINI_GHOST
    case 0xC07995: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000108, 3); return true;
    // src/unknown/C0/C07716.asm:30 LDA #OVERWORLD_SPRITE::MINI_GHOST
    // Overlapping static entry reached from 0xC07994.
    case 0xC07996: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:30 LDA #OVERWORLD_SPRITE::MINI_GHOST
    // Overlapping static entry reached from 0xC07995.
    case 0xC07997: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/C0/C07716.asm:31 JSL CREATE_ENTITY
    case 0xC07998: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/C0/C07716.asm:31 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC07997.
    case 0xC07999: cpu.execute_instruction<0x5F>(0x8DC01E, 4); return true;
    // src/unknown/C0/C07716.asm:32 STA MINI_GHOST_ENTITY_ID
    case 0xC0799C: cpu.execute_instruction<0x8D>(0x00A16D, 3); return true;
    // src/unknown/C0/C07716.asm:32 STA MINI_GHOST_ENTITY_ID
    // Overlapping static entry reached from 0xC07999.
    case 0xC0799D: cpu.execute_instruction<0x6D>(0x000AA1, 3); return true;
    // src/unknown/C0/C07716.asm:33 ASL
    case 0xC0799F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:34 TAX
    case 0xC079A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:35 LDA #.LOWORD(-1)
    case 0xC079A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C07716.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC079A1.
    case 0xC079A3: cpu.execute_instruction<0xFF>(0x10E89D, 4); return true;
    // src/unknown/C0/C07716.asm:36 STA ENTITY_ANIMATION_FRAME,X
    case 0xC079A4: cpu.execute_instruction<0x9D>(0x0010E8, 3); return true;
    // src/unknown/C0/C07716.asm:37 LDA MINI_GHOST_ENTITY_ID
    case 0xC079A7: cpu.execute_instruction<0xAD>(0x00A16D, 3); return true;
    // src/unknown/C0/C07716.asm:38 ASL
    case 0xC079AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:39 TAX
    case 0xC079AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:40 LDA #$FF00
    case 0xC079AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C07716.asm:40 LDA #$FF00
    // Overlapping static entry reached from 0xC079FE.
    case 0xC079AD: cpu.execute_instruction<0x00>(0x0000FF, 2); return true;
    // src/unknown/C0/C07716.asm:40 LDA #$FF00
    // Overlapping static entry reached from 0xC079AC.
    case 0xC079AE: cpu.execute_instruction<0xFF>(0x0B489D, 4); return true;
    // src/unknown/C0/C07716.asm:41 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC079AF: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/unknown/C0/C07716.asm:42 LDA MINI_GHOST_ENTITY_ID
    case 0xC079B2: cpu.execute_instruction<0xAD>(0x00A16D, 3); return true;
    // src/unknown/C0/C07716.asm:43 ASL
    case 0xC079B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:44 TAX
    case 0xC079B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:45 LDA #$FF00
    case 0xC079B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C07716.asm:45 LDA #$FF00
    // Overlapping static entry reached from 0xC079B7.
    case 0xC079B9: cpu.execute_instruction<0xFF>(0x0BC09D, 4); return true;
    // src/unknown/C0/C07716.asm:46 STA ENTITY_ABS_Y_TABLE,X
    case 0xC079BA: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C07716.asm:47 LDA MINI_GHOST_ENTITY_ID
    case 0xC079BD: cpu.execute_instruction<0xAD>(0x00A16D, 3); return true;
    // src/unknown/C0/C07716.asm:48 ASL
    case 0xC079C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:49 TAX
    case 0xC079C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:50 LDA #$FF00
    case 0xC079C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C07716.asm:50 LDA #$FF00
    // Overlapping static entry reached from 0xC079C2.
    case 0xC079C4: cpu.execute_instruction<0xFF>(0x0B849D, 4); return true;
    // src/unknown/C0/C07716.asm:51 STA ENTITY_ABS_X_TABLE,X
    case 0xC079C5: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07716.asm:53 END_C_FUNCTION
    case 0xC079C8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07716.asm:53 END_C_FUNCTION
    case 0xC079C9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0777A.asm (unresolved).
bool execute_unresolved_c0_c0777a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0777A.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC079CA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0777A.asm:4 LDA MINI_GHOST_ENTITY_ID
    case 0xC079CC: cpu.execute_instruction<0xAD>(0x00A16D, 3); return true;
    // src/unknown/C0/C0777A.asm:5 JSL UNKNOWN_C02140
    case 0xC079CF: cpu.execute_instruction<0x22>(0xC0214E, 4); return true;
    // src/unknown/C0/C0777A.asm:6 LDA #$FFFF
    case 0xC079D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0777A.asm:6 LDA #$FFFF
    // Overlapping static entry reached from 0xC079D3.
    case 0xC079D5: cpu.execute_instruction<0xFF>(0xA16D8D, 4); return true;
    // src/unknown/C0/C0777A.asm:7 STA MINI_GHOST_ENTITY_ID
    case 0xC079D6: cpu.execute_instruction<0x8D>(0x00A16D, 3); return true;
    // src/unknown/C0/C0777A.asm:8 RTL
    case 0xC079D9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0778A.asm (unresolved).
bool execute_unresolved_c0_c0778a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0778A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC079DA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0778A.asm:6 END_STACK_VARS
    case 0xC079DC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0778A.asm:6 END_STACK_VARS
    case 0xC079DD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0778A.asm:6 END_STACK_VARS
    case 0xC079DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0778A.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC079DE.
    case 0xC079E0: cpu.execute_instruction<0xFF>(0x3AAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0778A.asm:6 END_STACK_VARS
    case 0xC079E1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:7 LDA GAME_STATE+game_state::current_party_members
    case 0xC079E2: cpu.execute_instruction<0xAD>(0x009B3A, 3); return true;
    // src/unknown/C0/C0778A.asm:7 LDA GAME_STATE+game_state::current_party_members
    // Overlapping static entry reached from 0xC079E0.
    case 0xC079E4: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:8 ASL
    case 0xC079E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:9 TAX
    case 0xC079E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:10 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC079E7: cpu.execute_instruction<0xBD>(0x0010AC, 3); return true;
    // src/unknown/C0/C0778A.asm:11 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC079EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00C000, 3); return true;
    // src/unknown/C0/C0778A.asm:11 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC079EA.
    case 0xC079EC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000F0, 2); else cpu.execute_instruction<0xC0>(0x000DF0, 3); return true;
    // src/unknown/C0/C0778A.asm:12 BEQ @UNKNOWN0
    case 0xC079ED: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C0/C0778A.asm:12 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC079EC.
    case 0xC079EE: cpu.execute_instruction<0x0D>(0x0038AD, 3); return true;
    // src/unknown/C0/C0778A.asm:13 LDA CURRENT_ENTITY_SLOT
    case 0xC079EF: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0778A.asm:13 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC079EE.
    case 0xC079F1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:14 ASL
    case 0xC079F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:15 TAX
    case 0xC079F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:16 LDA #$FFFF
    case 0xC079F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0778A.asm:16 LDA #$FFFF
    // Overlapping static entry reached from 0xC079F4.
    case 0xC079F6: cpu.execute_instruction<0xFF>(0x10E89D, 4); return true;
    // src/unknown/C0/C0778A.asm:17 STA ENTITY_ANIMATION_FRAME,X
    case 0xC079F7: cpu.execute_instruction<0x9D>(0x0010E8, 3); return true;
    // src/unknown/C0/C0778A.asm:18 BRA @UNKNOWN2
    case 0xC079FA: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/unknown/C0/C0778A.asm:20 LDX #$3000
    case 0xC079FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003000, 3); return true;
    // src/unknown/C0/C0778A.asm:20 LDX #$3000
    // Overlapping static entry reached from 0xC079FC.
    case 0xC079FE: cpu.execute_instruction<0x30>(0x0000AD, 2); return true;
    // src/unknown/C0/C0778A.asm:21 LDA MINI_GHOST_ANGLE
    case 0xC079FF: cpu.execute_instruction<0xAD>(0x00A16F, 3); return true;
    // src/unknown/C0/C0778A.asm:21 LDA MINI_GHOST_ANGLE
    // Overlapping static entry reached from 0xC079FE.
    case 0xC07A00: cpu.execute_instruction<0x6F>(0x4B22A1, 4); return true;
    // src/unknown/C0/C0778A.asm:22 JSL UNKNOWN_C41FFF
    case 0xC07A02: cpu.execute_instruction<0x22>(0xC41F4B, 4); return true;
    // src/unknown/C0/C0778A.asm:22 JSL UNKNOWN_C41FFF
    // Overlapping static entry reached from 0xC07A00.
    case 0xC07A04: cpu.execute_instruction<0x1F>(0x06A5C4, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0778A.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07A06: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0778A.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07A08: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0778A.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07A0A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0778A.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07A0C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0778A.asm:24 LDA CURRENT_ENTITY_SLOT
    case 0xC07A0E: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0778A.asm:24 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC07A6E.
    case 0xC07A10: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:25 ASL
    case 0xC07A11: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:26 TAX
    case 0xC07A12: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:27 LDA @LOCAL00+2
    case 0xC07A13: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0778A.asm:28 AND #$FF00
    case 0xC07A15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0778A.asm:28 AND #$FF00
    // Overlapping static entry reached from 0xC07A15.
    case 0xC07A17: cpu.execute_instruction<0xFF>(0x0310EB, 4); return true;
    // src/unknown/C0/C0778A.asm:29 XBA
    case 0xC07A18: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:30 BPL @UNKNOWN1
    case 0xC07A19: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/unknown/C0/C0778A.asm:31 ORA #$FF00
    case 0xC07A1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C0/C0778A.asm:31 ORA #$FF00
    // Overlapping static entry reached from 0xC07A1B.
    case 0xC07A1D: cpu.execute_instruction<0xFF>(0x286D18, 4); return true;
    // src/unknown/C0/C0778A.asm:33 CLC
    case 0xC07A1E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:34 ADC GAME_STATE+game_state::leader_x_coord
    case 0xC07A1F: cpu.execute_instruction<0x6D>(0x009B28, 3); return true;
    // src/unknown/C0/C0778A.asm:34 ADC GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC07A1D.
    case 0xC07A21: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:35 STA ENTITY_ABS_X_TABLE,X
    case 0xC07A22: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C0778A.asm:36 LDA CURRENT_ENTITY_SLOT
    case 0xC07A25: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0778A.asm:37 ASL
    case 0xC07A28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:38 PHA
    case 0xC07A29: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC07A2A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0778A.asm:40 LDA #10
    case 0xC07A2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E20A, 3); return true;
    // src/unknown/C0/C0778A.asm:41 SEP #PROC_FLAGS::INDEX8
    case 0xC07A2E: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0778A.asm:41 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC07A2C.
    case 0xC07A2F: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C0/C0778A.asm:42 TAY
    case 0xC07A30: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC07A31: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0778A.asm:44 LDA @LOCAL00
    case 0xC07A33: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0778A.asm:45 JSL ASR16
    case 0xC07A35: cpu.execute_instruction<0x22>(0xC0923D, 4); return true;
    // src/unknown/C0/C0778A.asm:46 STA @VIRTUAL02
    case 0xC07A39: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0778A.asm:47 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC07A3B: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C0778A.asm:48 SEC
    case 0xC07A3E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:49 SBC #8
    case 0xC07A3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C0/C0778A.asm:49 SBC #8
    // Overlapping static entry reached from 0xC07A3F.
    case 0xC07A41: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0778A.asm:50 CLC
    case 0xC07A42: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:51 ADC @VIRTUAL02
    case 0xC07A43: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0778A.asm:52 REP #PROC_FLAGS::INDEX8
    case 0xC07A45: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0778A.asm:53 PLX
    case 0xC07A47: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:54 STA ENTITY_ABS_Y_TABLE,X
    case 0xC07A48: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C0778A.asm:55 LDA MINI_GHOST_ANGLE
    case 0xC07A4B: cpu.execute_instruction<0xAD>(0x00A16F, 3); return true;
    // src/unknown/C0/C0778A.asm:56 CLC
    case 0xC07A4E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:57 ADC #$0300
    case 0xC07A4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000300, 3); return true;
    // src/unknown/C0/C0778A.asm:57 ADC #$0300
    // Overlapping static entry reached from 0xC07A4F.
    case 0xC07A51: cpu.execute_instruction<0x03>(0x00008D, 2); return true;
    // src/unknown/C0/C0778A.asm:58 STA MINI_GHOST_ANGLE
    case 0xC07A52: cpu.execute_instruction<0x8D>(0x00A16F, 3); return true;
    // src/unknown/C0/C0778A.asm:58 STA MINI_GHOST_ANGLE
    // Overlapping static entry reached from 0xC07A51.
    case 0xC07A53: cpu.execute_instruction<0x6F>(0x38ADA1, 4); return true;
    // src/unknown/C0/C0778A.asm:59 LDA CURRENT_ENTITY_SLOT
    case 0xC07A55: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C0778A.asm:59 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC07A53.
    case 0xC07A57: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:60 ASL
    case 0xC07A58: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:61 TAX
    case 0xC07A59: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:62 STZ ENTITY_ANIMATION_FRAME,X
    case 0xC07A5A: cpu.execute_instruction<0x9E>(0x0010E8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0778A.asm:64 END_C_FUNCTION
    case 0xC07A5D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0778A.asm:64 END_C_FUNCTION
    case 0xC07A5E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0780F.asm (unresolved).
bool execute_unresolved_c0_c0780f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0780F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07A5F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    case 0xC07A61: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    case 0xC07A62: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    case 0xC07A63: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    case 0xC07A64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC07A64.
    case 0xC07A66: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    case 0xC07A67: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    case 0xC07A68: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:13 STY @VIRTUAL04
    case 0xC07A69: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C0/C0780F.asm:13 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC07A66.
    case 0xC07A6A: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/unknown/C0/C0780F.asm:14 STX @LOCAL02
    case 0xC07A6B: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0780F.asm:14 STX @LOCAL02
    // Overlapping static entry reached from 0xC07A6A.
    case 0xC07A6C: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C0/C0780F.asm:15 STA @LOCAL01
    case 0xC07A6D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0780F.asm:15 STA @LOCAL01
    // Overlapping static entry reached from 0xC07A6C.
    case 0xC07A6E: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/unknown/C0/C0780F.asm:16 LDY #0
    case 0xC07A6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:16 LDY #0
    // Overlapping static entry reached from 0xC07A6E.
    case 0xC07A70: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0780F.asm:16 LDY #0
    // Overlapping static entry reached from 0xC07A6F.
    case 0xC07A71: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C0/C0780F.asm:17 LDA MOVING_PARTY_MEMBER_ENTITY_ID
    case 0xC07A72: cpu.execute_instruction<0xAD>(0x00A175, 3); return true;
    // src/unknown/C0/C0780F.asm:18 STA @VIRTUAL02
    case 0xC07A75: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:19 LDA @LOCAL01
    case 0xC07A77: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0780F.asm:20 BNE @UNKNOWN0
    case 0xC07A79: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C0/C0780F.asm:21 LDA DISABLED_TRANSITIONS
    case 0xC07A7B: cpu.execute_instruction<0xAD>(0x00B68A, 3); return true;
    // src/unknown/C0/C0780F.asm:22 BNE @UNKNOWN0
    case 0xC07A7E: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0780F.asm:23 LDA PAJAMA_FLAG
    case 0xC07A80: cpu.execute_instruction<0xAD>(0x00A173, 3); return true;
    // src/unknown/C0/C0780F.asm:24 BEQ @UNKNOWN0
    case 0xC07A83: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0780F.asm:25 LDA #OVERWORLD_SPRITE::NESS_IN_PJS
    case 0xC07A85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B5, 2); else cpu.execute_instruction<0xA9>(0x0001B5, 3); return true;
    // src/unknown/C0/C0780F.asm:25 LDA #OVERWORLD_SPRITE::NESS_IN_PJS
    // Overlapping static entry reached from 0xC07A85.
    case 0xC07A87: cpu.execute_instruction<0x01>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:26 JMP @UNKNOWN28
    case 0xC07A88: cpu.execute_instruction<0x4C>(0x007C3A, 3); return true;
    // src/unknown/C0/C0780F.asm:26 JMP @UNKNOWN28
    // Overlapping static entry reached from 0xC07A87.
    case 0xC07A89: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:26 JMP @UNKNOWN28
    // Overlapping static entry reached from 0xC07A89.
    case 0xC07A8A: cpu.execute_instruction<0x7C>(0x0002A5, 3); return true;
    // src/unknown/C0/C0780F.asm:28 LDA @VIRTUAL02
    case 0xC07A8B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:29 CMP #.LOWORD(-1)
    case 0xC07A8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0780F.asm:29 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC07A8D.
    case 0xC07A8F: cpu.execute_instruction<0xFF>(0xA507F0, 4); return true;
    // src/unknown/C0/C0780F.asm:30 BEQ @UNKNOWN1
    case 0xC07A90: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0780F.asm:31 LDA @VIRTUAL02
    case 0xC07A92: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:31 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC07A8F.
    case 0xC07A93: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C0/C0780F.asm:32 ASL
    case 0xC07A94: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:33 TAX
    case 0xC07A95: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:34 STZ ENTITY_OVERLAY_FLAGS,X
    case 0xC07A96: cpu.execute_instruction<0x9E>(0x003278, 3); return true;
    // src/unknown/C0/C0780F.asm:36 LDA GAME_STATE + game_state::party_status
    case 0xC07A99: cpu.execute_instruction<0xAD>(0x009AF1, 3); return true;
    // src/unknown/C0/C0780F.asm:37 AND #$00FF
    case 0xC07A9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0780F.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC07AFE.
    case 0xC07A9D: cpu.execute_instruction<0xFF>(0x01C900, 4); return true;
    // src/unknown/C0/C0780F.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC07A9C.
    case 0xC07A9E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:38 CMP #1
    case 0xC07A9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0780F.asm:38 CMP #1
    // Overlapping static entry reached from 0xC07A9F.
    case 0xC07AA1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:39 BNE @UNKNOWN3
    case 0xC07AA2: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/unknown/C0/C0780F.asm:40 LDA GAME_STATE + game_state::unknown92
    case 0xC07AA4: cpu.execute_instruction<0xAD>(0x009B38, 3); return true;
    // src/unknown/C0/C0780F.asm:41 CMP #3
    case 0xC07AA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0780F.asm:41 CMP #3
    // Overlapping static entry reached from 0xC07AA7.
    case 0xC07AA9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:42 BEQ @UNKNOWN2
    case 0xC07AAA: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0780F.asm:43 LDA #13
    case 0xC07AAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/unknown/C0/C0780F.asm:43 LDA #13
    // Overlapping static entry reached from 0xC07AAC.
    case 0xC07AAE: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:44 JMP @UNKNOWN28
    case 0xC07AAF: cpu.execute_instruction<0x4C>(0x007C3A, 3); return true;
    // src/unknown/C0/C0780F.asm:46 LDA #37
    case 0xC07AB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x000025, 3); return true;
    // src/unknown/C0/C0780F.asm:46 LDA #37
    // Overlapping static entry reached from 0xC07AB2.
    case 0xC07AB4: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:47 JMP @UNKNOWN28
    case 0xC07AB5: cpu.execute_instruction<0x4C>(0x007C3A, 3); return true;
    // src/unknown/C0/C0780F.asm:49 LDX @VIRTUAL04
    case 0xC07AB8: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0780F.asm:50 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC07ABA: cpu.execute_instruction<0xBD>(0x00000D, 3); return true;
    // src/unknown/C0/C0780F.asm:51 AND #$00FF
    case 0xC07ABD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0780F.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC07ABD.
    case 0xC07ABF: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:52 CMP #STATUS_0::UNCONSCIOUS
    case 0xC07AC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0780F.asm:52 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC07AC0.
    case 0xC07AC2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:53 BEQ @UNKNOWN4
    case 0xC07AC3: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0780F.asm:54 CMP #STATUS_0::DIAMONDIZED
    case 0xC07AC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0780F.asm:54 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC07AC5.
    case 0xC07AC7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:55 BEQ @UNKNOWN5
    case 0xC07AC8: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0780F.asm:56 CMP #STATUS_0::NAUSEOUS
    case 0xC07ACA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0780F.asm:56 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC07ACA.
    case 0xC07ACC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:57 BEQ @UNKNOWN7
    case 0xC07ACD: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C0/C0780F.asm:58 BRA @UNKNOWN8
    case 0xC07ACF: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C0/C0780F.asm:60 LDY #1
    case 0xC07AD1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0780F.asm:60 LDY #1
    // Overlapping static entry reached from 0xC07AD1.
    case 0xC07AD3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0780F.asm:61 BRA @UNKNOWN8
    case 0xC07AD4: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C0/C0780F.asm:63 LDA GAME_STATE + game_state::unknown92
    case 0xC07AD6: cpu.execute_instruction<0xAD>(0x009B38, 3); return true;
    // src/unknown/C0/C0780F.asm:64 CMP #3
    case 0xC07AD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0780F.asm:64 CMP #3
    // Overlapping static entry reached from 0xC07AD9.
    case 0xC07ADB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:65 BEQ @UNKNOWN6
    case 0xC07ADC: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0780F.asm:66 LDA #12
    case 0xC07ADE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C0/C0780F.asm:66 LDA #12
    // Overlapping static entry reached from 0xC07ADE.
    case 0xC07AE0: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:67 JMP @UNKNOWN28
    case 0xC07AE1: cpu.execute_instruction<0x4C>(0x007C3A, 3); return true;
    // src/unknown/C0/C0780F.asm:69 LDA #36
    case 0xC07AE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/unknown/C0/C0780F.asm:69 LDA #36
    // Overlapping static entry reached from 0xC07AE4.
    case 0xC07AE6: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:70 JMP @UNKNOWN28
    case 0xC07AE7: cpu.execute_instruction<0x4C>(0x007C3A, 3); return true;
    // src/unknown/C0/C0780F.asm:72 LDA @VIRTUAL02
    case 0xC07AEA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:73 CMP #.LOWORD(-1)
    case 0xC07AEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0780F.asm:73 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC07AEC.
    case 0xC07AEE: cpu.execute_instruction<0xFF>(0xA511F0, 4); return true;
    // src/unknown/C0/C0780F.asm:74 BEQ @UNKNOWN8
    case 0xC07AEF: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0780F.asm:75 LDA @VIRTUAL02
    case 0xC07AF1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:75 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC07AEE.
    case 0xC07AF2: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C0/C0780F.asm:76 ASL
    case 0xC07AF3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:77 CLC
    case 0xC07AF4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:78 ADC #.LOWORD(ENTITY_OVERLAY_FLAGS)
    case 0xC07AF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000078, 2); else cpu.execute_instruction<0x69>(0x003278, 3); return true;
    // src/unknown/C0/C0780F.asm:78 ADC #.LOWORD(ENTITY_OVERLAY_FLAGS)
    // Overlapping static entry reached from 0xC07AF5.
    case 0xC07AF7: cpu.execute_instruction<0x32>(0x0000AA, 2); return true;
    // src/unknown/C0/C0780F.asm:79 TAX
    case 0xC07AF8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:80 LDA __BSS_START__,X
    case 0xC07AF9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:81 ORA #$8000
    case 0xC07AFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C0/C0780F.asm:81 ORA #$8000
    // Overlapping static entry reached from 0xC07AFC.
    case 0xC07AFE: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:82 STA __BSS_START__,X
    case 0xC07AFF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:84 LDX @VIRTUAL04
    case 0xC07B02: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0780F.asm:85 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC07B04: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C0/C0780F.asm:86 AND #$00FF
    case 0xC07B07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0780F.asm:86 AND #$00FF
    // Overlapping static entry reached from 0xC07B07.
    case 0xC07B09: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:87 CMP #STATUS_1::MUSHROOMIZED
    case 0xC07B0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0780F.asm:87 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC07B0A.
    case 0xC07B0C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:88 BEQ @UNKNOWN9
    case 0xC07B0D: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0780F.asm:89 CMP #STATUS_1::POSSESSED
    case 0xC07B0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0780F.asm:89 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC07B0F.
    case 0xC07B11: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:90 BEQ @UNKNOWN10
    case 0xC07B12: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C0/C0780F.asm:91 BRA @UNKNOWN11
    case 0xC07B14: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C0/C0780F.asm:93 LDA @VIRTUAL02
    case 0xC07B16: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:94 CMP #.LOWORD(-1)
    case 0xC07B18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0780F.asm:94 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC07B18.
    case 0xC07B1A: cpu.execute_instruction<0xFF>(0xA516F0, 4); return true;
    // src/unknown/C0/C0780F.asm:95 BEQ @UNKNOWN11
    case 0xC07B1B: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C0/C0780F.asm:96 LDA @VIRTUAL02
    case 0xC07B1D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:96 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC07B1A.
    case 0xC07B1E: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C0/C0780F.asm:97 ASL
    case 0xC07B1F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:98 CLC
    case 0xC07B20: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:99 ADC #.LOWORD(ENTITY_OVERLAY_FLAGS)
    case 0xC07B21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000078, 2); else cpu.execute_instruction<0x69>(0x003278, 3); return true;
    // src/unknown/C0/C0780F.asm:99 ADC #.LOWORD(ENTITY_OVERLAY_FLAGS)
    // Overlapping static entry reached from 0xC07B21.
    case 0xC07B23: cpu.execute_instruction<0x32>(0x0000AA, 2); return true;
    // src/unknown/C0/C0780F.asm:100 TAX
    case 0xC07B24: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:101 LDA __BSS_START__,X
    case 0xC07B25: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:102 ORA #$4000
    case 0xC07B28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x004000, 3); return true;
    // src/unknown/C0/C0780F.asm:102 ORA #$4000
    // Overlapping static entry reached from 0xC07B28.
    case 0xC07B2A: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:103 STA __BSS_START__,X
    case 0xC07B2B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:104 BRA @UNKNOWN11
    case 0xC07B2E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0780F.asm:106 INC POSSESSED_PLAYER_COUNT
    case 0xC07B30: cpu.execute_instruction<0xEE>(0x00A171, 3); return true;
    // src/unknown/C0/C0780F.asm:108 LDA GAME_STATE + game_state::unknown92
    case 0xC07B33: cpu.execute_instruction<0xAD>(0x009B38, 3); return true;
    // src/unknown/C0/C0780F.asm:109 CMP #6
    case 0xC07B36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0780F.asm:109 CMP #6
    // Overlapping static entry reached from 0xC07B36.
    case 0xC07B38: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:110 BEQ @UNKNOWN12
    case 0xC07B39: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0780F.asm:111 CMP #4
    case 0xC07B3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0780F.asm:111 CMP #4
    // Overlapping static entry reached from 0xC07B3B.
    case 0xC07B3D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:112 BEQ @UNKNOWN13
    case 0xC07B3E: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0780F.asm:113 BRA @UNKNOWN14
    case 0xC07B40: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C0/C0780F.asm:115 LDA #7
    case 0xC07B42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C0780F.asm:115 LDA #7
    // Overlapping static entry reached from 0xC07B42.
    case 0xC07B44: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:116 JMP @UNKNOWN28
    case 0xC07B45: cpu.execute_instruction<0x4C>(0x007C3A, 3); return true;
    // src/unknown/C0/C0780F.asm:118 LDX @VIRTUAL04
    case 0xC07B48: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0780F.asm:119 LDA a:char_struct::unknown53,X
    case 0xC07B4A: cpu.execute_instruction<0xBD>(0x000034, 3); return true;
    // src/unknown/C0/C0780F.asm:120 BNE @UNKNOWN14
    case 0xC07B4D: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0780F.asm:121 LDA #6
    case 0xC07B4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C0780F.asm:121 LDA #6
    // Overlapping static entry reached from 0xC07B4F.
    case 0xC07B51: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:122 JMP @UNKNOWN28
    case 0xC07B52: cpu.execute_instruction<0x4C>(0x007C3A, 3); return true;
    // src/unknown/C0/C0780F.asm:124 CPY #0
    case 0xC07B55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:124 CPY #0
    // Overlapping static entry reached from 0xC07B55.
    case 0xC07B57: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:125 BNE @UNKNOWN19
    case 0xC07B58: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // src/unknown/C0/C0780F.asm:126 LDA @LOCAL02
    case 0xC07B5A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0780F.asm:127 BEQ @UNKNOWN15
    case 0xC07B5C: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C0/C0780F.asm:128 CMP #12
    case 0xC07B5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C0780F.asm:128 CMP #12
    // Overlapping static entry reached from 0xC07B5E.
    case 0xC07B60: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:129 BEQ @UNKNOWN15
    case 0xC07B61: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C0/C0780F.asm:130 CMP #13
    case 0xC07B63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/unknown/C0/C0780F.asm:130 CMP #13
    // Overlapping static entry reached from 0xC07B63.
    case 0xC07B65: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:131 BEQ @UNKNOWN15
    case 0xC07B66: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0780F.asm:132 CMP #4
    case 0xC07B68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0780F.asm:132 CMP #4
    // Overlapping static entry reached from 0xC07B68.
    case 0xC07B6A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:133 BEQ @UNKNOWN16
    case 0xC07B6B: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0780F.asm:134 CMP #7
    case 0xC07B6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0780F.asm:134 CMP #7
    // Overlapping static entry reached from 0xC07B6D.
    case 0xC07B6F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:135 BEQ @UNKNOWN17
    case 0xC07B70: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0780F.asm:136 CMP #8
    case 0xC07B72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C0780F.asm:136 CMP #8
    // Overlapping static entry reached from 0xC07B72.
    case 0xC07B74: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:137 BEQ @UNKNOWN18
    case 0xC07B75: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0780F.asm:138 BRA @UNKNOWN19
    case 0xC07B77: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C0/C0780F.asm:140 LDY #0
    case 0xC07B79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:140 LDY #0
    // Overlapping static entry reached from 0xC07B79.
    case 0xC07B7B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0780F.asm:141 BRA @UNKNOWN19
    case 0xC07B7C: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0780F.asm:143 LDY #1
    case 0xC07B7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0780F.asm:143 LDY #1
    // Overlapping static entry reached from 0xC07B7E.
    case 0xC07B80: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0780F.asm:144 BRA @UNKNOWN19
    case 0xC07B81: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C0780F.asm:146 LDY #2
    case 0xC07B83: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C0780F.asm:146 LDY #2
    // Overlapping static entry reached from 0xC07B83.
    case 0xC07B85: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0780F.asm:147 BRA @UNKNOWN19
    case 0xC07B86: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0780F.asm:149 LDY #3
    case 0xC07B88: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C0780F.asm:149 LDY #3
    // Overlapping static entry reached from 0xC07B88.
    case 0xC07B8A: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/C0/C0780F.asm:151 LDX GAME_STATE + game_state::unknown92
    case 0xC07B8B: cpu.execute_instruction<0xAE>(0x009B38, 3); return true;
    // src/unknown/C0/C0780F.asm:152 CPX #3
    case 0xC07B8E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/unknown/C0/C0780F.asm:152 CPX #3
    // Overlapping static entry reached from 0xC07B8E.
    case 0xC07B90: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:153 BNE @UNKNOWN20
    case 0xC07B91: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C0780F.asm:154 INY
    case 0xC07B93: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:155 INY
    case 0xC07B94: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:156 INY
    case 0xC07B95: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:157 INY
    case 0xC07B96: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:158 LDA @VIRTUAL02
    case 0xC07B97: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:159 ASL
    case 0xC07B99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:160 TAX
    case 0xC07B9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:161 STZ ENTITY_OVERLAY_FLAGS,X
    case 0xC07B9B: cpu.execute_instruction<0x9E>(0x003278, 3); return true;
    // src/unknown/C0/C0780F.asm:161 STZ ENTITY_OVERLAY_FLAGS,X
    // Overlapping static entry reached from 0xC0FADC.
    case 0xC07B9C: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:161 STZ ENTITY_OVERLAY_FLAGS,X
    // Overlapping static entry reached from 0xC07B9C.
    case 0xC07B9D: cpu.execute_instruction<0x32>(0x000080, 2); return true;
    // src/unknown/C0/C0780F.asm:162 BRA @UNKNOWN21
    case 0xC07B9E: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C0780F.asm:162 BRA @UNKNOWN21
    // Overlapping static entry reached from 0xC07B9D.
    case 0xC07B9F: cpu.execute_instruction<0x10>(0x0000E0, 2); return true;
    // src/unknown/C0/C0780F.asm:164 CPX #5
    case 0xC07BA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000005, 2); else cpu.execute_instruction<0xE0>(0x000005, 3); return true;
    // src/unknown/C0/C0780F.asm:164 CPX #5
    // Overlapping static entry reached from 0xC07B9F.
    case 0xC07BA1: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C0/C0780F.asm:164 CPX #5
    // Overlapping static entry reached from 0xC07BA0.
    case 0xC07BA2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:165 BNE @UNKNOWN21
    case 0xC07BA3: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0780F.asm:166 CPY #0
    case 0xC07BA5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:166 CPY #0
    // Overlapping static entry reached from 0xC07BA5.
    case 0xC07BA7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:167 BNE @UNKNOWN21
    case 0xC07BA8: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0780F.asm:168 TYA
    case 0xC07BAA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:169 CLC
    case 0xC07BAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:170 ADC #6
    case 0xC07BAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C0/C0780F.asm:170 ADC #6
    // Overlapping static entry reached from 0xC07BAC.
    case 0xC07BAE: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0780F.asm:171 TAY
    case 0xC07BAF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:173 LDA GAME_STATE + game_state::party_status
    case 0xC07BB0: cpu.execute_instruction<0xAD>(0x009AF1, 3); return true;
    // src/unknown/C0/C0780F.asm:174 AND #$00FF
    case 0xC07BB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0780F.asm:174 AND #$00FF
    // Overlapping static entry reached from 0xC07BB3.
    case 0xC07BB5: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:175 CMP #3
    case 0xC07BB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0780F.asm:175 CMP #3
    // Overlapping static entry reached from 0xC07BB6.
    case 0xC07BB8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:176 BNE @UNKNOWN22
    case 0xC07BB9: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C0780F.asm:177 LDA @VIRTUAL02
    case 0xC07BBB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:178 ASL
    case 0xC07BBD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:179 TAX
    case 0xC07BBE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:180 LDA #5
    case 0xC07BBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0780F.asm:180 LDA #5
    // Overlapping static entry reached from 0xC07BBF.
    case 0xC07BC1: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:181 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC07BC2: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/C0/C0780F.asm:182 BRA @UNKNOWN26
    case 0xC07BC5: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/unknown/C0/C0780F.asm:184 LDX @VIRTUAL04
    case 0xC07BC7: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0780F.asm:185 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC07BC9: cpu.execute_instruction<0xBD>(0x00000D, 3); return true;
    // src/unknown/C0/C0780F.asm:186 AND #$00FF
    case 0xC07BCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0780F.asm:186 AND #$00FF
    // Overlapping static entry reached from 0xC07BCC.
    case 0xC07BCE: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:187 CMP #STATUS_0::UNCONSCIOUS
    case 0xC07BCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0780F.asm:187 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC07BCF.
    case 0xC07BD1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:188 BNE @UNKNOWN23
    case 0xC07BD2: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C0780F.asm:189 LDA @VIRTUAL02
    case 0xC07BD4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:190 ASL
    case 0xC07BD6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:191 TAX
    case 0xC07BD7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:192 LDA #16
    case 0xC07BD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C0/C0780F.asm:192 LDA #16
    // Overlapping static entry reached from 0xC07BD8.
    case 0xC07BDA: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:193 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC07BDB: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/C0/C0780F.asm:194 BRA @UNKNOWN26
    case 0xC07BDE: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C0/C0780F.asm:196 LDA @VIRTUAL02
    case 0xC07BE0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:197 ASL
    case 0xC07BE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:198 TAX
    case 0xC07BE3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:199 LDA ENTITY_SURFACE_FLAGS,X
    case 0xC07BE4: cpu.execute_instruction<0xBD>(0x002FA8, 3); return true;
    // src/unknown/C0/C0780F.asm:200 STA @LOCAL00
    case 0xC07BE7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0780F.asm:201 AND #$000C
    case 0xC07BE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/unknown/C0/C0780F.asm:201 AND #$000C
    // Overlapping static entry reached from 0xC07BE9.
    case 0xC07BEB: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:202 CMP #12
    case 0xC07BEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C0780F.asm:202 CMP #12
    // Overlapping static entry reached from 0xC07BEC.
    case 0xC07BEE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:203 BNE @UNKNOWN24
    case 0xC07BEF: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0780F.asm:204 LDA #24
    case 0xC07BF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0780F.asm:204 LDA #24
    // Overlapping static entry reached from 0xC07BF1.
    case 0xC07BF3: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:205 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC07BF4: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/C0/C0780F.asm:206 BRA @UNKNOWN26
    case 0xC07BF7: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C0/C0780F.asm:208 LDA @LOCAL00
    case 0xC07BF9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0780F.asm:209 AND #$0008
    case 0xC07BFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/unknown/C0/C0780F.asm:209 AND #$0008
    // Overlapping static entry reached from 0xC07BFB.
    case 0xC07BFD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:210 CMP #8
    case 0xC07BFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C0780F.asm:210 CMP #8
    // Overlapping static entry reached from 0xC07BFE.
    case 0xC07C00: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:211 BNE @UNKNOWN25
    case 0xC07C01: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0780F.asm:212 LDA #16
    case 0xC07C03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C0/C0780F.asm:212 LDA #16
    // Overlapping static entry reached from 0xC07C03.
    case 0xC07C05: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:213 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC07C06: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/C0/C0780F.asm:214 BRA @UNKNOWN26
    case 0xC07C09: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C0780F.asm:216 LDA #8
    case 0xC07C0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C0780F.asm:216 LDA #8
    // Overlapping static entry reached from 0xC07C0B.
    case 0xC07C0D: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:217 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC07C0E: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/C0/C0780F.asm:219 LDX @VIRTUAL04
    case 0xC07C11: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0780F.asm:220 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC07C13: cpu.execute_instruction<0xBD>(0x00000D, 3); return true;
    // src/unknown/C0/C0780F.asm:221 AND #$00FF
    case 0xC07C16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0780F.asm:221 AND #$00FF
    // Overlapping static entry reached from 0xC07C16.
    case 0xC07C18: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:222 CMP #STATUS_0::PARALYZED
    case 0xC07C19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0780F.asm:222 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC07C19.
    case 0xC07C1B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:223 BNE @UNKNOWN27
    case 0xC07C1C: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C0/C0780F.asm:224 LDA @VIRTUAL02
    case 0xC07C1E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:225 ASL
    case 0xC07C20: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:226 TAX
    case 0xC07C21: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:227 LDA #56
    case 0xC07C22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000038, 2); else cpu.execute_instruction<0xA9>(0x000038, 3); return true;
    // src/unknown/C0/C0780F.asm:227 LDA #56
    // Overlapping static entry reached from 0xC07C22.
    case 0xC07C24: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:228 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC07C25: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/C0/C0780F.asm:230 TYA
    case 0xC07C28: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:231 ASL
    case 0xC07C29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:232 STA @VIRTUAL02
    case 0xC07C2A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:233 LDA @LOCAL01
    case 0xC07C2C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0780F.asm:234 ASL
    case 0xC07C2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:235 ASL
    case 0xC07C2F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:236 ASL
    case 0xC07C30: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:237 ASL
    case 0xC07C31: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:238 CLC
    case 0xC07C32: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:239 ADC @VIRTUAL02
    case 0xC07C33: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:240 TAX
    case 0xC07C35: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:241 LDA f:PLAYABLE_CHAR_GFX_TABLE,X
    case 0xC07C36: cpu.execute_instruction<0xBF>(0xC3F02E, 4); return true;
    // src/unknown/C0/C0780F.asm:243 PLD
    case 0xC07C3A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:244 RTL
    case 0xC07C3B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C079EC.asm (unresolved).
bool execute_unresolved_c0_c079ec_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C079EC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07C3C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    case 0xC07C3E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    case 0xC07C3F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    case 0xC07C40: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    case 0xC07C41: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC07C41.
    case 0xC07C43: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    case 0xC07C44: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    case 0xC07C45: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:9 STA @LOCAL00
    case 0xC07C46: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C079EC.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC07C43.
    case 0xC07C47: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C0/C079EC.asm:10 LDX #0
    case 0xC07C48: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C079EC.asm:10 LDX #0
    // Overlapping static entry reached from 0xC07C48.
    case 0xC07C4A: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C079EC.asm:11 AND #$0020
    case 0xC07C4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/unknown/C0/C079EC.asm:11 AND #$0020
    // Overlapping static entry reached from 0xC07C4B.
    case 0xC07C4D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C079EC.asm:12 BEQ @UNKNOWN0
    case 0xC07C4E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C079EC.asm:13 LDX #1
    case 0xC07C50: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C079EC.asm:13 LDX #1
    // Overlapping static entry reached from 0xC07C50.
    case 0xC07C52: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C079EC.asm:14 BRA @UNKNOWN1
    case 0xC07C53: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C0/C079EC.asm:16 LDA @LOCAL00
    case 0xC07C55: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C079EC.asm:17 AND #$0040
    case 0xC07C57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/C0/C079EC.asm:17 AND #$0040
    // Overlapping static entry reached from 0xC07C57.
    case 0xC07C59: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C079EC.asm:18 BEQ @UNKNOWN1
    case 0xC07C5A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C079EC.asm:19 LDA #12
    case 0xC07C5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C0/C079EC.asm:19 LDA #12
    // Overlapping static entry reached from 0xC07C5C.
    case 0xC07C5E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C079EC.asm:20 BRA @UNKNOWN2
    case 0xC07C5F: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C0/C079EC.asm:22 TXA
    case 0xC07C61: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:23 ASL
    case 0xC07C62: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:24 STA @VIRTUAL02
    case 0xC07C63: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C079EC.asm:25 LDA @LOCAL00
    case 0xC07C65: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C079EC.asm:26 AND #$001F
    case 0xC07C67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C079EC.asm:26 AND #$001F
    // Overlapping static entry reached from 0xC07C67.
    case 0xC07C69: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C0/C079EC.asm:27 DEC
    case 0xC07C6A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:28 ASL
    case 0xC07C6B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:29 ASL
    case 0xC07C6C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:30 ASL
    case 0xC07C6D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:31 ASL
    case 0xC07C6E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:32 CLC
    case 0xC07C6F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:33 ADC @VIRTUAL02
    case 0xC07C70: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C079EC.asm:34 TAX
    case 0xC07C72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:35 LDA f:PLAYABLE_CHAR_GFX_TABLE,X
    case 0xC07C73: cpu.execute_instruction<0xBF>(0xC3F02E, 4); return true;
    // src/unknown/C0/C079EC.asm:36 CMP #1
    case 0xC07C77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C079EC.asm:36 CMP #1
    // Overlapping static entry reached from 0xC07C77.
    case 0xC07C79: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C079EC.asm:37 BNE @UNKNOWN2
    case 0xC07C7A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C079EC.asm:38 LDA #14
    case 0xC07C7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C0/C079EC.asm:38 LDA #14
    // Overlapping static entry reached from 0xC07C7C.
    case 0xC07C7E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C079EC.asm:40 END_C_FUNCTION
    case 0xC07C7F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C079EC.asm:40 END_C_FUNCTION
    case 0xC07C80: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07A31.asm (unresolved).
bool execute_unresolved_c0_c07a31_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07A31.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07C81: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    case 0xC07C83: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    case 0xC07C84: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    case 0xC07C85: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    case 0xC07C86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC07C86.
    case 0xC07C88: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    case 0xC07C89: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    case 0xC07C8A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C07A31.asm:8 STA @LOCAL00
    case 0xC07C8B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07A31.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC07C88.
    case 0xC07C8C: cpu.execute_instruction<0x0E>(0x00298A, 3); return true;
    // src/unknown/C0/C07A31.asm:9 TXA
    case 0xC07C8D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C07A31.asm:10 AND #$0080
    case 0xC07C8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C0/C07A31.asm:10 AND #$0080
    // Overlapping static entry reached from 0xC07C8C.
    case 0xC07C8F: cpu.execute_instruction<0x80>(0x000000, 2); return true;
    // src/unknown/C0/C07A31.asm:10 AND #$0080
    // Overlapping static entry reached from 0xC07C8E.
    case 0xC07C90: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07A31.asm:11 BEQ @UNKNOWN0
    case 0xC07C91: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C07A31.asm:12 LDA @LOCAL00
    case 0xC07C93: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07A31.asm:13 ASL
    case 0xC07C95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A31.asm:14 CLC
    case 0xC07C96: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A31.asm:15 ADC #.LOWORD(ENTITY_OVERLAY_FLAGS)
    case 0xC07C97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000078, 2); else cpu.execute_instruction<0x69>(0x003278, 3); return true;
    // src/unknown/C0/C07A31.asm:15 ADC #.LOWORD(ENTITY_OVERLAY_FLAGS)
    // Overlapping static entry reached from 0xC07C97.
    case 0xC07C99: cpu.execute_instruction<0x32>(0x0000AA, 2); return true;
    // src/unknown/C0/C07A31.asm:16 TAX
    case 0xC07C9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A31.asm:17 LDA __BSS_START__,X
    case 0xC07C9B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07A31.asm:18 ORA #$4000
    case 0xC07C9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x004000, 3); return true;
    // src/unknown/C0/C07A31.asm:18 ORA #$4000
    // Overlapping static entry reached from 0xC07C9E.
    case 0xC07CA0: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C07A31.asm:19 STA __BSS_START__,X
    case 0xC07CA1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07A31.asm:21 END_C_FUNCTION
    case 0xC07CA4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07A31.asm:21 END_C_FUNCTION
    case 0xC07CA5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07A56.asm (unresolved).
bool execute_unresolved_c0_c07a56_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07A56.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07CA6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    case 0xC07CA8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    case 0xC07CA9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    case 0xC07CAA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    case 0xC07CAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC07CAB.
    case 0xC07CAD: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    case 0xC07CAE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    case 0xC07CAF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:13 STY @VIRTUAL04
    case 0xC07CB0: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:13 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC07CAD.
    case 0xC07CB1: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/unknown/C0/C07A56.asm:14 STX @VIRTUAL02
    case 0xC07CB2: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:14 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC07CB1.
    case 0xC07CB3: cpu.execute_instruction<0x02>(0x000086, 2); return true;
    // src/unknown/C0/C07A56.asm:15 STX @LOCAL03
    case 0xC07CB4: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C07A56.asm:16 STA @LOCAL02
    case 0xC07CB6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C07A56.asm:17 LDA @VIRTUAL04
    case 0xC07CB8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:18 STA MOVING_PARTY_MEMBER_ENTITY_ID
    case 0xC07CBA: cpu.execute_instruction<0x8D>(0x00A175, 3); return true;
    // src/unknown/C0/C07A56.asm:19 LDY CURRENT_PARTY_MEMBER_TICK
    case 0xC07CBD: cpu.execute_instruction<0xAC>(0x00514C, 3); return true;
    // src/unknown/C0/C07A56.asm:20 LDX @VIRTUAL02
    case 0xC07CC0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:21 LDA @LOCAL02
    case 0xC07CC2: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C07A56.asm:22 JSL UNKNOWN_C0780F
    case 0xC07CC4: cpu.execute_instruction<0x22>(0xC07A5F, 4); return true;
    // src/unknown/C0/C07A56.asm:23 STA @LOCAL01
    case 0xC07CC8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C07A56.asm:24 CMP #.LOWORD(-1)
    case 0xC07CCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C07A56.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC07CCA.
    case 0xC07CCC: cpu.execute_instruction<0xFF>(0xA50CD0, 4); return true;
    // src/unknown/C0/C07A56.asm:25 BNE @UNKNOWN0
    case 0xC07CCD: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C07A56.asm:26 LDA @VIRTUAL04
    case 0xC07CCF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:26 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC07CCC.
    case 0xC07CD0: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // src/unknown/C0/C07A56.asm:27 ASL
    case 0xC07CD1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:28 TAX
    case 0xC07CD2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:29 LDA @LOCAL01
    case 0xC07CD3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07A56.asm:30 STA ENTITY_ANIMATION_FRAME,X
    case 0xC07CD5: cpu.execute_instruction<0x9D>(0x0010E8, 3); return true;
    // src/unknown/C0/C07A56.asm:31 JMP @UNKNOWN3
    case 0xC07CD8: cpu.execute_instruction<0x4C>(0x007D87, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC07CDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x006541, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC07CDB.
    case 0xC07CDD: cpu.execute_instruction<0x65>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC07CDE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC07CDD.
    case 0xC07CDF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC07CE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC07CE0.
    case 0xC07CE2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC07CE3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C07A56.asm:34 LDA @LOCAL01
    case 0xC07CE5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07A56.asm:35 ASL
    case 0xC07CE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:36 ASL
    case 0xC07CE8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:37 CLC
    case 0xC07CE9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:38 ADC @VIRTUAL0A
    case 0xC07CEA: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C07A56.asm:39 STA @VIRTUAL0A
    case 0xC07CEC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC07CEE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC07CEE.
    case 0xC07CF0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC07CF1: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC07CF3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC07CF4: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC07CF6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC07CF8: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C07A56.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07CFA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C07A56.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07CFC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C07A56.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07CFE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C07A56.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07D00: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C07A56.asm:42 LDA @VIRTUAL04
    case 0xC07D02: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:43 ASL
    case 0xC07D04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:44 TAX
    case 0xC07D05: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:45 LDA @LOCAL00+2
    case 0xC07D06: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C07A56.asm:46 STA ENTITY_GRAPHICS_PTR_HIGH,X
    case 0xC07D08: cpu.execute_instruction<0x9D>(0x002E04, 3); return true;
    // src/unknown/C0/C07A56.asm:47 LDA @LOCAL00
    case 0xC07D0B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07A56.asm:48 CLC
    case 0xC07D0D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:49 ADC #9
    case 0xC07D0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/unknown/C0/C07A56.asm:49 ADC #9
    // Overlapping static entry reached from 0xC07D0E.
    case 0xC07D10: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C07A56.asm:50 STA ENTITY_GRAPHICS_PTR_LOW,X
    case 0xC07D11: cpu.execute_instruction<0x9D>(0x002DC8, 3); return true;
    // src/unknown/C0/C07A56.asm:51 LDY #8
    case 0xC07D14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C0/C07A56.asm:51 LDY #8
    // Overlapping static entry reached from 0xC07D14.
    case 0xC07D16: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C07A56.asm:52 LDA [@LOCAL00],Y
    case 0xC07D17: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C07A56.asm:53 AND #$00FF
    case 0xC07D19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C07A56.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC07D19.
    case 0xC07D1B: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C07A56.asm:54 STA ENTITY_GRAPHICS_SPRITE_BANK,X
    case 0xC07D1C: cpu.execute_instruction<0x9D>(0x002E40, 3); return true;
    // src/unknown/C0/C07A56.asm:55 LDA @VIRTUAL02
    case 0xC07D1F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:56 STA ENTITY_WALKING_STYLES,X
    case 0xC07D21: cpu.execute_instruction<0x9D>(0x003020, 3); return true;
    // src/unknown/C0/C07A56.asm:57 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC07D24: cpu.execute_instruction<0xAD>(0x00514C, 3); return true;
    // src/unknown/C0/C07A56.asm:58 CLC
    case 0xC07D27: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:59 ADC #char_struct::unknown55
    case 0xC07D28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000036, 2); else cpu.execute_instruction<0x69>(0x000036, 3); return true;
    // src/unknown/C0/C07A56.asm:59 ADC #char_struct::unknown55
    // Overlapping static entry reached from 0xC07D28.
    case 0xC07D2A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C07A56.asm:60 TAY
    case 0xC07D2B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:61 LDA __BSS_START__,Y
    case 0xC07D2C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:62 PHA
    case 0xC07D2F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:63 LDA @VIRTUAL02
    case 0xC07D30: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:64 STA TEMP_REGISTER
    case 0xC07D32: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/unknown/C0/C07A56.asm:65 PLA
    case 0xC07D35: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:66 STA @VIRTUAL02
    case 0xC07D36: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:67 LDA TEMP_REGISTER
    case 0xC07D38: cpu.execute_instruction<0xAD>(0x0000BE, 3); return true;
    // src/unknown/C0/C07A56.asm:68 CMP @VIRTUAL02
    case 0xC07D3B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:69 BEQ @UNKNOWN1
    case 0xC07D3D: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C0/C07A56.asm:70 LDA @LOCAL03
    case 0xC07D3F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C07A56.asm:71 STA @VIRTUAL02
    case 0xC07D41: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:72 STA __BSS_START__,Y
    case 0xC07D43: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:73 TXA
    case 0xC07D46: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:74 CLC
    case 0xC07D47: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:75 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC07D48: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/unknown/C0/C07A56.asm:75 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC07D48.
    case 0xC07D4A: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/C0/C07A56.asm:76 TAX
    case 0xC07D4B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:77 LDA __BSS_START__,X
    case 0xC07D4C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:77 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC07D4A.
    case 0xC07D4E: cpu.execute_instruction<0x00>(0x000009, 2); return true;
    // src/unknown/C0/C07A56.asm:78 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN15
    case 0xC07D4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C0/C07A56.asm:78 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN15
    // Overlapping static entry reached from 0xC07D4F.
    case 0xC07D51: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C07A56.asm:79 STA __BSS_START__,X
    case 0xC07D52: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:81 LDA GAME_STATE + game_state::unknown90
    case 0xC07D55: cpu.execute_instruction<0xAD>(0x009B36, 3); return true;
    // src/unknown/C0/C07A56.asm:82 BEQ @UNKNOWN2
    case 0xC07D58: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C0/C07A56.asm:83 LDA @LOCAL03
    case 0xC07D5A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C07A56.asm:84 STA @VIRTUAL02
    case 0xC07D5C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:85 CMP #12
    case 0xC07D5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C07A56.asm:85 CMP #12
    // Overlapping static entry reached from 0xC07D5E.
    case 0xC07D60: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07A56.asm:86 BEQ @UNKNOWN2
    case 0xC07D61: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C07A56.asm:87 LDA @VIRTUAL04
    case 0xC07D63: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:88 ASL
    case 0xC07D65: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:89 CLC
    case 0xC07D66: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:90 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC07D67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/unknown/C0/C07A56.asm:90 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC07D67.
    case 0xC07D69: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/C0/C07A56.asm:91 TAX
    case 0xC07D6A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:92 LDA __BSS_START__,X
    case 0xC07D6B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:92 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC07D69.
    case 0xC07D6D: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C07A56.asm:93 AND #$FFFF ^ (SPRITE_TABLE_10_FLAGS::UNKNOWN15 | SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13)
    case 0xC07D6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x001FFF, 3); return true;
    // src/unknown/C0/C07A56.asm:93 AND #$FFFF ^ (SPRITE_TABLE_10_FLAGS::UNKNOWN15 | SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13)
    // Overlapping static entry reached from 0xC07D6E.
    case 0xC07D70: cpu.execute_instruction<0x1F>(0x00009D, 4); return true;
    // src/unknown/C0/C07A56.asm:94 STA __BSS_START__,X
    case 0xC07D71: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:95 BRA @UNKNOWN3
    case 0xC07D74: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C0/C07A56.asm:97 LDA @VIRTUAL04
    case 0xC07D76: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:98 ASL
    case 0xC07D78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:99 CLC
    case 0xC07D79: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:100 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC07D7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/unknown/C0/C07A56.asm:100 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC07D7A.
    case 0xC07D7C: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/C0/C07A56.asm:101 TAX
    case 0xC07D7D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:102 LDA __BSS_START__,X
    case 0xC07D7E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:102 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC07D7C.
    case 0xC07D80: cpu.execute_instruction<0x00>(0x000009, 2); return true;
    // src/unknown/C0/C07A56.asm:103 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13
    case 0xC07D81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x006000, 3); return true;
    // src/unknown/C0/C07A56.asm:103 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13
    // Overlapping static entry reached from 0xC07D81.
    case 0xC07D83: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:104 STA __BSS_START__,X
    case 0xC07D84: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:106 LDA GAME_STATE + game_state::unknownB0
    case 0xC07D87: cpu.execute_instruction<0xAD>(0x009B56, 3); return true;
    // src/unknown/C0/C07A56.asm:107 CMP #2
    case 0xC07D8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C07A56.asm:107 CMP #2
    // Overlapping static entry reached from 0xC07D8A.
    case 0xC07D8C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C07A56.asm:108 BNE @UNKNOWN4
    case 0xC07D8D: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/unknown/C0/C07A56.asm:109 LDA @VIRTUAL04
    case 0xC07D8F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:110 ASL
    case 0xC07D91: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:111 CLC
    case 0xC07D92: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:112 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC07D93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/unknown/C0/C07A56.asm:112 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC07D93.
    case 0xC07D95: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/C0/C07A56.asm:113 TAX
    case 0xC07D96: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:114 LDA __BSS_START__,X
    case 0xC07D97: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:114 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC07D95.
    case 0xC07D99: cpu.execute_instruction<0x00>(0x000009, 2); return true;
    // src/unknown/C0/C07A56.asm:115 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12
    case 0xC07D9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x001000, 3); return true;
    // src/unknown/C0/C07A56.asm:115 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12
    // Overlapping static entry reached from 0xC07D9A.
    case 0xC07D9C: cpu.execute_instruction<0x10>(0x00009D, 2); return true;
    // src/unknown/C0/C07A56.asm:116 STA __BSS_START__,X
    case 0xC07D9D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:116 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC07D9C.
    case 0xC07D9E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07A56.asm:118 END_C_FUNCTION
    case 0xC07DA0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07A56.asm:118 END_C_FUNCTION
    case 0xC07DA1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07B52.asm (unresolved).
bool execute_unresolved_c0_c07b52_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07B52.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07DA2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07B52.asm:9 END_STACK_VARS
    case 0xC07DA4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07B52.asm:9 END_STACK_VARS
    case 0xC07DA5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07B52.asm:9 END_STACK_VARS
    case 0xC07DA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07B52.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC07DA6.
    case 0xC07DA8: cpu.execute_instruction<0xFF>(0xBBAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07B52.asm:9 END_STACK_VARS
    case 0xC07DA9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:10 LDA PARTY_CHARACTERS+char_struct::position_index
    case 0xC07DAA: cpu.execute_instruction<0xAD>(0x009CBB, 3); return true;
    // src/unknown/C0/C07B52.asm:10 LDA PARTY_CHARACTERS+char_struct::position_index
    // Overlapping static entry reached from 0xC07DA8.
    case 0xC07DAC: cpu.execute_instruction<0x9C>(0x001485, 3); return true;
    // src/unknown/C0/C07B52.asm:11 STA @LOCAL03
    case 0xC07DAD: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C07B52.asm:12 LDA #24
    case 0xC07DAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C07B52.asm:12 LDA #24
    // Overlapping static entry reached from 0xC07DAF.
    case 0xC07DB1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07B52.asm:13 STA @LOCAL02
    case 0xC07DB2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:14 JMP @UNKNOWN6
    case 0xC07DB4: cpu.execute_instruction<0x4C>(0x007E9D, 3); return true;
    // src/unknown/C0/C07B52.asm:16 LDA @LOCAL02
    case 0xC07DB7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:17 ASL
    case 0xC07DB9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:18 STA @VIRTUAL04
    case 0xC07DBA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:19 STA @LOCAL01
    case 0xC07DBC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C07B52.asm:20 LDX @VIRTUAL04
    case 0xC07DBE: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:21 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC07DC0: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/C0/C07B52.asm:22 CMP #.LOWORD(-1)
    case 0xC07DC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C07B52.asm:22 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC07DC3.
    case 0xC07DC5: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C07B52.asm:23 BEQL @UNKNOWN5
    case 0xC07DC6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C07B52.asm:23 BEQL @UNKNOWN5
    case 0xC07DC8: cpu.execute_instruction<0x4C>(0x007E9B, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C07B52.asm:23 BEQL @UNKNOWN5
    // Overlapping static entry reached from 0xC07DC5.
    case 0xC07DC9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C07B52.asm:23 BEQL @UNKNOWN5
    // Overlapping static entry reached from 0xC07DC9.
    case 0xC07DCA: cpu.execute_instruction<0x7E>(0x0004A5, 3); return true;
    // src/unknown/C0/C07B52.asm:24 LDA @VIRTUAL04
    case 0xC07DCB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:25 CLC
    case 0xC07DCD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:26 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC07DCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C0/C07B52.asm:26 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC07DCE.
    case 0xC07DD0: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C07B52.asm:27 TAX
    case 0xC07DD1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:28 LDA __BSS_START__,X
    case 0xC07DD2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07B52.asm:29 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC07DD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C07B52.asm:29 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC07DD5.
    case 0xC07DD7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C07B52.asm:30 STA __BSS_START__,X
    case 0xC07DD8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C07B52.asm:30 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC07DD7.
    case 0xC07DD9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C07B52.asm:30 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC07DD7.
    case 0xC07DDA: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C07B52.asm:31 LDX @VIRTUAL04
    case 0xC07DDB: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:32 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC07DDD: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/C0/C07B52.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC07DE0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C07B52.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC07DE0.
    case 0xC07DE2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C07B52.asm:34 JSL MULT168
    case 0xC07DE3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C07B52.asm:35 CLC
    case 0xC07DE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:36 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC07DE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C0/C07B52.asm:36 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC07DE8.
    case 0xC07DEA: cpu.execute_instruction<0x9C>(0x008EAA, 3); return true;
    // src/unknown/C0/C07B52.asm:37 TAX
    case 0xC07DEB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:38 STX CURRENT_PARTY_MEMBER_TICK
    case 0xC07DEC: cpu.execute_instruction<0x8E>(0x00514C, 3); return true;
    // src/unknown/C0/C07B52.asm:38 STX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC07DEA.
    case 0xC07DED: cpu.execute_instruction<0x4C>(0x00AD51, 3); return true;
    // src/unknown/C0/C07B52.asm:39 LDA GAME_STATE+game_state::current_party_members
    case 0xC07DEF: cpu.execute_instruction<0xAD>(0x009B3A, 3); return true;
    // src/unknown/C0/C07B52.asm:40 CMP @LOCAL02
    case 0xC07DF2: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:41 BEQ @UNKNOWN2
    case 0xC07DF4: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C07B52.asm:42 LDA a:char_struct::position_index,X
    case 0xC07DF6: cpu.execute_instruction<0xBD>(0x00003C, 3); return true;
    // src/unknown/C0/C07B52.asm:43 CMP @LOCAL03
    case 0xC07DF9: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C0/C07B52.asm:44 BNE @UNKNOWN3
    case 0xC07DFB: cpu.execute_instruction<0xD0>(0x00003C, 2); return true;
    // src/unknown/C0/C07B52.asm:46 LDA @LOCAL02
    case 0xC07DFD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:47 ASL
    case 0xC07DFF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:48 STA @VIRTUAL02
    case 0xC07E00: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:49 LDY @LOCAL02
    case 0xC07E02: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:50 LDX GAME_STATE+game_state::walking_style
    case 0xC07E04: cpu.execute_instruction<0xAE>(0x009B34, 3); return true;
    // src/unknown/C0/C07B52.asm:51 STX @LOCAL00
    case 0xC07E07: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C07B52.asm:52 LDX @VIRTUAL02
    case 0xC07E09: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:53 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC07E0B: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C0/C07B52.asm:54 LDX @LOCAL00
    case 0xC07E0E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C07B52.asm:55 JSL UNKNOWN_C07A56
    case 0xC07E10: cpu.execute_instruction<0x22>(0xC07CA6, 4); return true;
    // src/unknown/C0/C07B52.asm:56 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC07E14: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C07B52.asm:57 LDX @VIRTUAL02
    case 0xC07E17: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:58 STA ENTITY_ABS_X_TABLE,X
    case 0xC07E19: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C07B52.asm:59 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC07E1C: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C07B52.asm:60 LDX @VIRTUAL02
    case 0xC07E1F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:61 STA ENTITY_ABS_Y_TABLE,X
    case 0xC07E21: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C07B52.asm:62 LDA GAME_STATE+game_state::party_count
    case 0xC07E24: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C0/C07B52.asm:63 AND #$00FF
    case 0xC07E27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C07B52.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC07E27.
    case 0xC07E29: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C07B52.asm:64 CMP #1
    case 0xC07E2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C07B52.asm:64 CMP #1
    // Overlapping static entry reached from 0xC07E2A.
    case 0xC07E2C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07B52.asm:65 BEQ @UNKNOWN4
    case 0xC07E2D: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/unknown/C0/C07B52.asm:66 LDA GAME_STATE+game_state::leader_direction
    case 0xC07E2F: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C07B52.asm:67 LDX @VIRTUAL02
    case 0xC07E32: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:68 STA ENTITY_DIRECTIONS,X
    case 0xC07E34: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C07B52.asm:69 BRA @UNKNOWN4
    case 0xC07E37: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C07B52.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC07E39: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C07B52.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC07E3B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C07B52.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC07E3C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C07B52.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC07E3E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C07B52.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC07E3F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:72 CLC
    case 0xC07E40: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:73 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC07E41: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0054DC, 3); return true;
    // src/unknown/C0/C07B52.asm:73 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC07E41.
    case 0xC07E43: cpu.execute_instruction<0x54>(0x000285, 3); return true;
    // src/unknown/C0/C07B52.asm:74 STA @VIRTUAL02
    case 0xC07E44: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:75 LDY @LOCAL02
    case 0xC07E46: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:76 LDX @VIRTUAL02
    case 0xC07E48: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:77 LDA a:player_position_buffer_entry::walking_style,X
    case 0xC07E4A: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C0/C07B52.asm:78 TAX
    case 0xC07E4D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:79 STX @LOCAL00
    case 0xC07E4E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C07B52.asm:80 LDA @LOCAL01
    case 0xC07E50: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C07B52.asm:81 STA @VIRTUAL04
    case 0xC07E52: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:82 LDX @VIRTUAL04
    case 0xC07E54: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:83 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC07E56: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C0/C07B52.asm:84 LDX @LOCAL00
    case 0xC07E59: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C07B52.asm:85 JSL UNKNOWN_C07A56
    case 0xC07E5B: cpu.execute_instruction<0x22>(0xC07CA6, 4); return true;
    // src/unknown/C0/C07B52.asm:86 LDX @VIRTUAL02
    case 0xC07E5F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:87 LDA a:player_position_buffer_entry::x_coord,X
    case 0xC07E61: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07B52.asm:88 LDX @VIRTUAL04
    case 0xC07E64: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:89 STA ENTITY_ABS_X_TABLE,X
    case 0xC07E66: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C07B52.asm:90 LDX @VIRTUAL02
    case 0xC07E69: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:91 LDA a:player_position_buffer_entry::y_coord,X
    case 0xC07E6B: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C07B52.asm:92 LDX @VIRTUAL04
    case 0xC07E6E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:93 STA ENTITY_ABS_Y_TABLE,X
    case 0xC07E70: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C07B52.asm:94 LDX @VIRTUAL02
    case 0xC07E73: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:95 LDA a:player_position_buffer_entry::direction,X
    case 0xC07E75: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/unknown/C0/C07B52.asm:96 LDX @VIRTUAL04
    case 0xC07E78: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:97 STA ENTITY_DIRECTIONS,X
    case 0xC07E7A: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C07B52.asm:99 LDA @LOCAL02
    case 0xC07E7D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:100 ASL
    case 0xC07E7F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:101 TAX
    case 0xC07E80: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:102 LDA ENTITY_ABS_X_TABLE,X
    case 0xC07E81: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C07B52.asm:103 SEC
    case 0xC07E84: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:104 SBC BG1_X_POS
    case 0xC07E85: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C07B52.asm:105 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC07E88: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/unknown/C0/C07B52.asm:106 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC07E8B: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C07B52.asm:107 SEC
    case 0xC07E8E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:108 SBC BG1_Y_POS
    case 0xC07E8F: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C07B52.asm:109 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC07E92: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/unknown/C0/C07B52.asm:110 LDA @LOCAL02
    case 0xC07E95: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:111 JSL UNKNOWN_C0A780
    case 0xC07E97: cpu.execute_instruction<0x22>(0xC0A75F, 4); return true;
    // src/unknown/C0/C07B52.asm:113 INC @LOCAL02
    case 0xC07E9B: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:115 LDA @LOCAL02
    case 0xC07E9D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:116 CMP #MAX_ENTITIES
    case 0xC07E9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C07B52.asm:116 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC07E9F.
    case 0xC07EA1: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C07B52.asm:117 BCCL @UNKNOWN0
    case 0xC07EA2: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C07B52.asm:117 BCCL @UNKNOWN0
    case 0xC07EA4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C07B52.asm:117 BCCL @UNKNOWN0
    case 0xC07EA6: cpu.execute_instruction<0x4C>(0x007DB7, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07B52.asm:118 END_C_FUNCTION
    case 0xC07EA9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07B52.asm:118 END_C_FUNCTION
    case 0xC07EAA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07C5B.asm (unresolved).
bool execute_unresolved_c0_c07c5b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07C5B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07EAB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07C5B.asm:6 END_STACK_VARS
    case 0xC07EAD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07C5B.asm:6 END_STACK_VARS
    case 0xC07EAE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07C5B.asm:6 END_STACK_VARS
    case 0xC07EAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07C5B.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC07EAF.
    case 0xC07EB1: cpu.execute_instruction<0xFF>(0xDEAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07C5B.asm:6 END_STACK_VARS
    case 0xC07EB2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C07C5B.asm:7 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC07EB3: cpu.execute_instruction<0xAD>(0x0060DE, 3); return true;
    // src/unknown/C0/C07C5B.asm:7 LDA PLAYER_INTANGIBILITY_FRAMES
    // Overlapping static entry reached from 0xC07EB1.
    case 0xC07EB5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C07C5B.asm:8 BEQ @UNKNOWN2
    case 0xC07EB6: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C0/C07C5B.asm:9 LDA #24
    case 0xC07EB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C07C5B.asm:9 LDA #24
    // Overlapping static entry reached from 0xC07EB8.
    case 0xC07EBA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07C5B.asm:10 STA @LOCAL00
    case 0xC07EBB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07C5B.asm:11 BRA @UNKNOWN1
    case 0xC07EBD: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C07C5B.asm:13 ASL
    case 0xC07EBF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07C5B.asm:14 CLC
    case 0xC07EC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07C5B.asm:15 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC07EC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/C0/C07C5B.asm:15 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC07EC1.
    case 0xC07EC3: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C0/C07C5B.asm:16 TAX
    case 0xC07EC4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07C5B.asm:17 LDA __BSS_START__,X
    case 0xC07EC5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07C5B.asm:18 AND #$7FFF
    case 0xC07EC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C07C5B.asm:18 AND #$7FFF
    // Overlapping static entry reached from 0xC07EC8.
    case 0xC07ECA: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/C0/C07C5B.asm:19 STA __BSS_START__,X
    case 0xC07ECB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C07C5B.asm:20 LDA @LOCAL00
    case 0xC07ECE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07C5B.asm:21 INC
    case 0xC07ED0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C07C5B.asm:22 STA @LOCAL00
    case 0xC07ED1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07C5B.asm:24 CMP #MAX_ENTITIES
    case 0xC07ED3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C07C5B.asm:24 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC07ED3.
    case 0xC07ED5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C07C5B.asm:25 BCC @UNKNOWN0
    case 0xC07ED6: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07C5B.asm:27 END_C_FUNCTION
    case 0xC07ED8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07C5B.asm:27 END_C_FUNCTION
    case 0xC07ED9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C083B8.asm (unresolved).
bool execute_unresolved_c0_c083b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C083B8.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC083B8: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C083B8.asm:4 LDA #0
    case 0xC083BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C083B8.asm:4 LDA #0
    // Overlapping static entry reached from 0xC083BA.
    case 0xC083BC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C083B8.asm:5 STA DEMO_RECORDING_FLAGS
    case 0xC083BD: cpu.execute_instruction<0x8D>(0x00007B, 3); return true;
    // src/unknown/C0/C083B8.asm:6 RTL
    case 0xC083C0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C083C1.asm (unresolved).
bool execute_unresolved_c0_c083c1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C083C1.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC083C1: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C083C1.asm:4 MOVE_INT $0E, DEMO_WRITE_DESTINATION
    case 0xC083C3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C083C1.asm:4 MOVE_INT $0E, DEMO_WRITE_DESTINATION
    case 0xC083C5: cpu.execute_instruction<0x8D>(0x000085, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C083C1.asm:4 MOVE_INT $0E, DEMO_WRITE_DESTINATION
    case 0xC083C8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C083C1.asm:4 MOVE_INT $0E, DEMO_WRITE_DESTINATION
    case 0xC083CA: cpu.execute_instruction<0x8D>(0x000087, 3); return true;
    // src/unknown/C0/C083C1.asm:5 LDA PAD_STATE
    case 0xC083CD: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C0/C083C1.asm:6 STA DEMO_LAST_INPUT
    case 0xC083D0: cpu.execute_instruction<0x8D>(0x00008B, 3); return true;
    // src/unknown/C0/C083C1.asm:7 LDA #1
    case 0xC083D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C083C1.asm:7 LDA #1
    // Overlapping static entry reached from 0xC083D3.
    case 0xC083D5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C083C1.asm:8 STA DEMO_SAME_INPUT_FRAMES
    case 0xC083D6: cpu.execute_instruction<0x8D>(0x000089, 3); return true;
    // src/unknown/C0/C083C1.asm:9 LDA #DEMO_RECORDING_FLAG::RECORDING
    case 0xC083D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C083C1.asm:9 LDA #DEMO_RECORDING_FLAG::RECORDING
    // Overlapping static entry reached from 0xC083D9.
    case 0xC083DB: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C083C1.asm:10 ORA DEMO_RECORDING_FLAGS
    case 0xC083DC: cpu.execute_instruction<0x0D>(0x00007B, 3); return true;
    // src/unknown/C0/C083C1.asm:11 STA DEMO_RECORDING_FLAGS
    case 0xC083DF: cpu.execute_instruction<0x8D>(0x00007B, 3); return true;
    // src/unknown/C0/C083C1.asm:12 RTL
    case 0xC083E2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C083E3.asm (unresolved).
bool execute_unresolved_c0_c083e3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C083E3.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC083E3: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C083E3.asm:4 LDA DEMO_RECORDING_FLAGS
    case 0xC083E5: cpu.execute_instruction<0xAD>(0x00007B, 3); return true;
    // src/unknown/C0/C083E3.asm:5 AND #DEMO_RECORDING_FLAG::PLAYBACK
    case 0xC083E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/C0/C083E3.asm:5 AND #DEMO_RECORDING_FLAG::PLAYBACK
    // Overlapping static entry reached from 0xC083E8.
    case 0xC083EA: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C083E3.asm:6 BNE @UNKNOWN0
    case 0xC083EB: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // src/unknown/C0/C083E3.asm:7 LDA [$0E]
    case 0xC083ED: cpu.execute_instruction<0xA7>(0x00000E, 2); return true;
    // src/unknown/C0/C083E3.asm:8 AND #$00FF
    case 0xC083EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C083E3.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC083EF.
    case 0xC083F1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C083E3.asm:9 BEQ UNKNOWN_C083B8
    case 0xC083F2: cpu.execute_instruction<0xF0>(0x0000C4, 2); return true;
    // src/unknown/C0/C083E3.asm:10 STA DEMO_FRAMES_LEFT
    case 0xC083F4: cpu.execute_instruction<0x8D>(0x000081, 3); return true;
    // src/unknown/C0/C083E3.asm:11 LDY #$0001
    case 0xC083F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C083E3.asm:11 LDY #$0001
    // Overlapping static entry reached from 0xC083F7.
    case 0xC083F9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C083E3.asm:12 LDA [$0E],Y
    case 0xC083FA: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C083E3.asm:13 STA DEMO_INITIAL_PAD_STATE
    case 0xC083FC: cpu.execute_instruction<0x8D>(0x000083, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C083E3.asm:14 MOVE_INT $0E, DEMO_READ_SOURCE
    case 0xC083FF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C083E3.asm:14 MOVE_INT $0E, DEMO_READ_SOURCE
    case 0xC08401: cpu.execute_instruction<0x8D>(0x00007D, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C083E3.asm:14 MOVE_INT $0E, DEMO_READ_SOURCE
    case 0xC08404: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C083E3.asm:14 MOVE_INT $0E, DEMO_READ_SOURCE
    case 0xC08406: cpu.execute_instruction<0x8D>(0x00007F, 3); return true;
    // src/unknown/C0/C083E3.asm:15 LDA [$0E],Y
    case 0xC08409: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C083E3.asm:16 STA PAD_RAW
    case 0xC0840B: cpu.execute_instruction<0x8D>(0x000077, 3); return true;
    // src/unknown/C0/C083E3.asm:17 STA PAD_RAW + 2
    case 0xC0840E: cpu.execute_instruction<0x8D>(0x000079, 3); return true;
    // src/unknown/C0/C083E3.asm:18 LDA #DEMO_RECORDING_FLAG::PLAYBACK
    case 0xC08411: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // src/unknown/C0/C083E3.asm:18 LDA #DEMO_RECORDING_FLAG::PLAYBACK
    // Overlapping static entry reached from 0xC08411.
    case 0xC08413: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C083E3.asm:19 ORA DEMO_RECORDING_FLAGS
    case 0xC08414: cpu.execute_instruction<0x0D>(0x00007B, 3); return true;
    // src/unknown/C0/C083E3.asm:20 STA DEMO_RECORDING_FLAGS
    case 0xC08417: cpu.execute_instruction<0x8D>(0x00007B, 3); return true;
    // src/unknown/C0/C083E3.asm:22 RTL
    case 0xC0841A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08456.asm (unresolved).
bool execute_unresolved_c0_c08456_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08456.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08456: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08456.asm:4 LDA <DEMO_RECORDING_FLAGS + 0
    case 0xC08458: cpu.execute_instruction<0xA5>(0x00007B, 2); return true;
    // src/unknown/C0/C08456.asm:5 AND #DEMO_RECORDING_FLAG::RECORDING
    case 0xC0845A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C08456.asm:5 AND #DEMO_RECORDING_FLAG::RECORDING
    // Overlapping static entry reached from 0xC0845A.
    case 0xC0845C: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C08456.asm:6 BEQ @UNKNOWN1
    case 0xC0845D: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C0/C08456.asm:7 LDA <PAD_RAW +0
    case 0xC0845F: cpu.execute_instruction<0xA5>(0x000077, 2); return true;
    // src/unknown/C0/C08456.asm:8 ORA <PAD_RAW +2
    case 0xC08461: cpu.execute_instruction<0x05>(0x000079, 2); return true;
    // src/unknown/C0/C08456.asm:9 TAX
    case 0xC08463: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08456.asm:10 CMP <DEMO_LAST_INPUT +0
    case 0xC08464: cpu.execute_instruction<0xC5>(0x00008B, 2); return true;
    // src/unknown/C0/C08456.asm:11 BNE @UNKNOWN0
    case 0xC08466: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C08456.asm:12 INC <DEMO_SAME_INPUT_FRAMES
    case 0xC08468: cpu.execute_instruction<0xE6>(0x000089, 2); return true;
    // src/unknown/C0/C08456.asm:13 LDA <DEMO_SAME_INPUT_FRAMES + 0
    case 0xC0846A: cpu.execute_instruction<0xA5>(0x000089, 2); return true;
    // src/unknown/C0/C08456.asm:14 CMP #$00FF
    case 0xC0846C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C0/C08456.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC0846C.
    case 0xC0846E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C08456.asm:15 BNE @UNKNOWN1
    case 0xC0846F: cpu.execute_instruction<0xD0>(0x000024, 2); return true;
    // src/unknown/C0/C08456.asm:17 LDA <DEMO_SAME_INPUT_FRAMES + 0
    case 0xC08471: cpu.execute_instruction<0xA5>(0x000089, 2); return true;
    // src/unknown/C0/C08456.asm:18 STA [<DEMO_WRITE_DESTINATION]
    case 0xC08473: cpu.execute_instruction<0x87>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:19 INC <DEMO_WRITE_DESTINATION
    case 0xC08475: cpu.execute_instruction<0xE6>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:20 LDA <DEMO_LAST_INPUT + 0
    case 0xC08477: cpu.execute_instruction<0xA5>(0x00008B, 2); return true;
    // src/unknown/C0/C08456.asm:21 STA [<DEMO_WRITE_DESTINATION]
    case 0xC08479: cpu.execute_instruction<0x87>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:22 INC <DEMO_WRITE_DESTINATION
    case 0xC0847B: cpu.execute_instruction<0xE6>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:23 INC <DEMO_WRITE_DESTINATION
    case 0xC0847D: cpu.execute_instruction<0xE6>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:24 STX <DEMO_LAST_INPUT
    case 0xC0847F: cpu.execute_instruction<0x86>(0x00008B, 2); return true;
    // src/unknown/C0/C08456.asm:25 STZ <DEMO_SAME_INPUT_FRAMES
    case 0xC08481: cpu.execute_instruction<0x64>(0x000089, 2); return true;
    // src/unknown/C0/C08456.asm:26 INC <DEMO_SAME_INPUT_FRAMES
    case 0xC08483: cpu.execute_instruction<0xE6>(0x000089, 2); return true;
    // src/unknown/C0/C08456.asm:27 LDA #$0000
    case 0xC08485: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C08456.asm:27 LDA #$0000
    // Overlapping static entry reached from 0xC08485.
    case 0xC08487: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/C0/C08456.asm:28 STA [<DEMO_WRITE_DESTINATION]
    case 0xC08488: cpu.execute_instruction<0x87>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:29 LDA <DEMO_WRITE_DESTINATION + 0
    case 0xC0848A: cpu.execute_instruction<0xA5>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:30 BPL @UNKNOWN1
    case 0xC0848C: cpu.execute_instruction<0x10>(0x000007, 2); return true;
    // src/unknown/C0/C08456.asm:31 LDA <DEMO_RECORDING_FLAGS + 0
    case 0xC0848E: cpu.execute_instruction<0xA5>(0x00007B, 2); return true;
    // src/unknown/C0/C08456.asm:32 AND #$FFFF ^ DEMO_RECORDING_FLAG::RECORDING
    case 0xC08490: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C08456.asm:32 AND #$FFFF ^ DEMO_RECORDING_FLAG::RECORDING
    // Overlapping static entry reached from 0xC08490.
    case 0xC08492: cpu.execute_instruction<0x7F>(0x607B85, 4); return true;
    // src/unknown/C0/C08456.asm:33 STA <DEMO_RECORDING_FLAGS
    case 0xC08493: cpu.execute_instruction<0x85>(0x00007B, 2); return true;
    // src/unknown/C0/C08456.asm:35 RTS
    case 0xC08495: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08496.asm (unresolved).
bool execute_unresolved_c0_c08496_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08496.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08496: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08496.asm:5 LDA HVBJOY
    case 0xC08498: cpu.execute_instruction<0xAD>(0x004212, 3); return true;
    // src/unknown/C0/C08496.asm:6 LSR
    case 0xC0849B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C08496.asm:7 BCS @WAIT_UNTIL_READY
    case 0xC0849C: cpu.execute_instruction<0xB0>(0x0000FA, 2); return true;
    // src/unknown/C0/C08496.asm:8 JSR READ_JOYPAD
    case 0xC0849E: cpu.execute_instruction<0x20>(0x00841B, 3); return true;
    // src/unknown/C0/C08496.asm:9 JSR UNKNOWN_C08456
    case 0xC084A1: cpu.execute_instruction<0x20>(0x008456, 3); return true;
    // src/unknown/C0/C08496.asm:10 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC084A4: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08496.asm:11 LDX #$0002
    case 0xC084A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C0/C08496.asm:11 LDX #$0002
    // Overlapping static entry reached from 0xC084A6.
    case 0xC084A8: cpu.execute_instruction<0x00>(0x0000B5, 2); return true;
    // src/unknown/C0/C08496.asm:13 LDA <PAD_RAW,X
    case 0xC084A9: cpu.execute_instruction<0xB5>(0x000077, 2); return true;
    // src/unknown/C0/C08496.asm:14 AND #$FFF0
    case 0xC084AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/unknown/C0/C08496.asm:14 AND #$FFF0
    // Overlapping static entry reached from 0xC084AB.
    case 0xC084AD: cpu.execute_instruction<0xFF>(0xB57585, 4); return true;
    // src/unknown/C0/C08496.asm:15 STA <PAD_TEMP
    case 0xC084AE: cpu.execute_instruction<0x85>(0x000075, 2); return true;
    // src/unknown/C0/C08496.asm:16 LDA <PAD_STATE,X
    case 0xC084B0: cpu.execute_instruction<0xB5>(0x000065, 2); return true;
    // src/unknown/C0/C08496.asm:16 LDA <PAD_STATE,X
    // Overlapping static entry reached from 0xC084AD.
    case 0xC084B1: cpu.execute_instruction<0x65>(0x000049, 2); return true;
    // src/unknown/C0/C08496.asm:17 EOR #$FFFF
    case 0xC084B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C08496.asm:17 EOR #$FFFF
    // Overlapping static entry reached from 0xC084B1.
    case 0xC084B3: cpu.execute_instruction<0xFF>(0x7525FF, 4); return true;
    // src/unknown/C0/C08496.asm:17 EOR #$FFFF
    // Overlapping static entry reached from 0xC084B2.
    case 0xC084B4: cpu.execute_instruction<0xFF>(0x957525, 4); return true;
    // src/unknown/C0/C08496.asm:18 AND <PAD_TEMP + 0
    case 0xC084B5: cpu.execute_instruction<0x25>(0x000075, 2); return true;
    // src/unknown/C0/C08496.asm:19 STA <PAD_PRESS,X
    case 0xC084B7: cpu.execute_instruction<0x95>(0x00006D, 2); return true;
    // src/unknown/C0/C08496.asm:19 STA <PAD_PRESS,X
    // Overlapping static entry reached from 0xC084B4.
    case 0xC084B8: cpu.execute_instruction<0x6D>(0x0075A5, 3); return true;
    // src/unknown/C0/C08496.asm:20 LDA <PAD_TEMP + 0
    case 0xC084B9: cpu.execute_instruction<0xA5>(0x000075, 2); return true;
    // src/unknown/C0/C08496.asm:21 CMP <PAD_STATE,X
    case 0xC084BB: cpu.execute_instruction<0xD5>(0x000065, 2); return true;
    // src/unknown/C0/C08496.asm:22 STA <PAD_STATE,X
    case 0xC084BD: cpu.execute_instruction<0x95>(0x000065, 2); return true;
    // src/unknown/C0/C08496.asm:23 BEQ @UNKNOWN2
    case 0xC084BF: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C0/C08496.asm:24 LDA <PAD_PRESS,X
    case 0xC084C1: cpu.execute_instruction<0xB5>(0x00006D, 2); return true;
    // src/unknown/C0/C08496.asm:25 STA <PAD_HELD,X
    case 0xC084C3: cpu.execute_instruction<0x95>(0x000069, 2); return true;
    // src/unknown/C0/C08496.asm:26 LDA #$0014
    case 0xC084C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C0/C08496.asm:26 LDA #$0014
    // Overlapping static entry reached from 0xC084C5.
    case 0xC084C7: cpu.execute_instruction<0x00>(0x000095, 2); return true;
    // src/unknown/C0/C08496.asm:27 STA <PAD_TIMER,X
    case 0xC084C8: cpu.execute_instruction<0x95>(0x000071, 2); return true;
    // src/unknown/C0/C08496.asm:28 BRA @UNKNOWN4
    case 0xC084CA: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C0/C08496.asm:30 LDY <PAD_TIMER,X
    case 0xC084CC: cpu.execute_instruction<0xB4>(0x000071, 2); return true;
    // src/unknown/C0/C08496.asm:31 BEQ @UNKNOWN3
    case 0xC084CE: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C08496.asm:32 DEC <PAD_TIMER,X
    case 0xC084D0: cpu.execute_instruction<0xD6>(0x000071, 2); return true;
    // src/unknown/C0/C08496.asm:33 STZ <PAD_HELD,X
    case 0xC084D2: cpu.execute_instruction<0x74>(0x000069, 2); return true;
    // src/unknown/C0/C08496.asm:34 BRA @UNKNOWN4
    case 0xC084D4: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C0/C08496.asm:36 STA <PAD_HELD,X
    case 0xC084D6: cpu.execute_instruction<0x95>(0x000069, 2); return true;
    // src/unknown/C0/C08496.asm:37 LDA #$0003
    case 0xC084D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C08496.asm:37 LDA #$0003
    // Overlapping static entry reached from 0xC084D8.
    case 0xC084DA: cpu.execute_instruction<0x00>(0x000095, 2); return true;
    // src/unknown/C0/C08496.asm:38 STA <PAD_TIMER,X
    case 0xC084DB: cpu.execute_instruction<0x95>(0x000071, 2); return true;
    // src/unknown/C0/C08496.asm:40 DEX
    case 0xC084DD: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C08496.asm:41 DEX
    case 0xC084DE: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C08496.asm:42 BPL @UNKNOWN1
    case 0xC084DF: cpu.execute_instruction<0x10>(0x0000C8, 2); return true;
    // src/unknown/C0/C08496.asm:43 LDA f:DEBUG
    case 0xC084E1: cpu.execute_instruction<0xAF>(0x7E46F2, 4); return true;
    // src/unknown/C0/C08496.asm:44 BNE @UNKNOWN5
    case 0xC084E5: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C0/C08496.asm:45 LDA <PAD_STATE + 2
    case 0xC084E7: cpu.execute_instruction<0xA5>(0x000067, 2); return true;
    // src/unknown/C0/C08496.asm:46 ORA <PAD_STATE + 0
    case 0xC084E9: cpu.execute_instruction<0x05>(0x000065, 2); return true;
    // src/unknown/C0/C08496.asm:47 STA <PAD_STATE
    case 0xC084EB: cpu.execute_instruction<0x85>(0x000065, 2); return true;
    // src/unknown/C0/C08496.asm:48 LDA <PAD_HELD + 2
    case 0xC084ED: cpu.execute_instruction<0xA5>(0x00006B, 2); return true;
    // src/unknown/C0/C08496.asm:49 ORA <PAD_HELD + 0
    case 0xC084EF: cpu.execute_instruction<0x05>(0x000069, 2); return true;
    // src/unknown/C0/C08496.asm:50 STA <PAD_HELD
    case 0xC084F1: cpu.execute_instruction<0x85>(0x000069, 2); return true;
    // src/unknown/C0/C08496.asm:51 LDA <PAD_PRESS + 2
    case 0xC084F3: cpu.execute_instruction<0xA5>(0x00006F, 2); return true;
    // src/unknown/C0/C08496.asm:52 ORA <PAD_PRESS + 0
    case 0xC084F5: cpu.execute_instruction<0x05>(0x00006D, 2); return true;
    // src/unknown/C0/C08496.asm:53 STA <PAD_PRESS
    case 0xC084F7: cpu.execute_instruction<0x85>(0x00006D, 2); return true;
    // src/unknown/C0/C08496.asm:55 LDA <PAD_PRESS + 0
    case 0xC084F9: cpu.execute_instruction<0xA5>(0x00006D, 2); return true;
    // src/unknown/C0/C08496.asm:56 BEQ @UNKNOWN6
    case 0xC084FB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C08496.asm:57 INC PLAYER_HAS_DONE_SOMETHING_THIS_FRAME
    case 0xC084FD: cpu.execute_instruction<0xEE>(0x000A2A, 3); return true;
    // src/unknown/C0/C08496.asm:59 RTS
    case 0xC08500: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08529.asm (unresolved).
bool execute_unresolved_c0_c08529_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08529.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC08529: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08529.asm:4 PHD
    case 0xC0852B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:5 PHA
    case 0xC0852C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:6 TDC
    case 0xC0852D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:7 SEC
    case 0xC0852E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:8 SBC #$0004
    case 0xC0852F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C08529.asm:8 SBC #$0004
    // Overlapping static entry reached from 0xC0852F.
    case 0xC08531: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C08529.asm:9 TCD
    case 0xC08532: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:10 PLA
    case 0xC08533: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:11 LDY #$0002
    case 0xC08534: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C08529.asm:11 LDY #$0002
    // Overlapping static entry reached from 0xC08534.
    case 0xC08536: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C08529.asm:12 LDA [$0E],Y
    case 0xC08537: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C08529.asm:13 STA $00
    case 0xC08539: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C08529.asm:14 INY
    case 0xC0853B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:15 INY
    case 0xC0853C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:16 LDA [$0E],Y
    case 0xC0853D: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C08529.asm:17 STA $02
    case 0xC0853F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C08529.asm:18 INY
    case 0xC08541: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:19 INY
    case 0xC08542: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:20 LDA [$0E],Y
    case 0xC08543: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C08529.asm:21 TAX
    case 0xC08545: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:22 LDA [$0E]
    case 0xC08546: cpu.execute_instruction<0xA7>(0x00000E, 2); return true;
    // src/unknown/C0/C08529.asm:23 AND #$01FF
    case 0xC08548: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0001FF, 3); return true;
    // src/unknown/C0/C08529.asm:23 AND #$01FF
    // Overlapping static entry reached from 0xC08548.
    case 0xC0854A: cpu.execute_instruction<0x01>(0x0000A8, 2); return true;
    // src/unknown/C0/C08529.asm:24 TAY
    case 0xC0854B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:25 BRA @UNKNOWN1
    case 0xC0854C: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C0/C08529.asm:27 LDA [$00],Y
    case 0xC0854E: cpu.execute_instruction<0xB7>(0x000000, 2); return true;
    // src/unknown/C0/C08529.asm:28 STA __BSS_START__,X
    case 0xC08550: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C08529.asm:29 INX
    case 0xC08553: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:30 INX
    case 0xC08554: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:32 DEY
    case 0xC08555: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:33 DEY
    case 0xC08556: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:34 BPL @UNKNOWN0
    case 0xC08557: cpu.execute_instruction<0x10>(0x0000F5, 2); return true;
    // src/unknown/C0/C08529.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC08559: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08529.asm:36 LDY #$0001
    case 0xC0855B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C08529.asm:36 LDY #$0001
    // Overlapping static entry reached from 0xC0855B.
    case 0xC0855D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C08529.asm:37 LDA [$0E],Y
    case 0xC0855E: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C08529.asm:38 LSR
    case 0xC08560: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:39 ORA PALETTE_UPLOAD_MODE
    case 0xC08561: cpu.execute_instruction<0x0D>(0x000030, 3); return true;
    // src/unknown/C0/C08529.asm:40 STA PALETTE_UPLOAD_MODE
    case 0xC08564: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C08529.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC08567: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08529.asm:42 PLD
    case 0xC08569: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:43 RTL
    case 0xC0856A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0856B.asm (unresolved).
bool execute_unresolved_c0_c0856b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0856B.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0856B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0856B.asm:4 STA PALETTE_UPLOAD_MODE
    case 0xC0856D: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C0856B.asm:5 REP #PROC_FLAGS::ACCUM8
    case 0xC08570: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0856B.asm:6 RTL
    case 0xC08572: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08573.asm (unresolved).
bool execute_unresolved_c0_c08573_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08573.asm:3 PHP
    case 0xC08573: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08574: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08573.asm:5 LDA $0E
    case 0xC08576: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C08573.asm:6 STA UNREAD_7E008D
    case 0xC08578: cpu.execute_instruction<0x8D>(0x00008D, 3); return true;
    // src/unknown/C0/C08573.asm:7 SEP #PROC_FLAGS::INDEX8
    case 0xC0857B: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C08573.asm:8 LDX $10
    case 0xC0857D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C08573.asm:9 STX UNREAD_7E008D+2
    case 0xC0857F: cpu.execute_instruction<0x8E>(0x00008F, 3); return true;
    // src/unknown/C0/C08573.asm:10 PHD
    case 0xC08582: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:11 PEA $0000
    case 0xC08583: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/unknown/C0/C08573.asm:12 PLD
    case 0xC08586: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:13 PHB
    case 0xC08587: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:14 LDY #$0000
    case 0xC08588: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005A00, 3); return true;
    // src/unknown/C0/C08573.asm:15 PHY
    case 0xC0858A: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:16 PLB
    case 0xC0858B: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:17 REP #PROC_FLAGS::INDEX8
    case 0xC0858C: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C08573.asm:18 BRA @UNKNOWN1
    case 0xC0858E: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C0/C08573.asm:20 INY
    case 0xC08590: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:21 INY
    case 0xC08591: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:22 LDA [$8D],Y
    case 0xC08592: cpu.execute_instruction<0xB7>(0x00008D, 2); return true;
    // src/unknown/C0/C08573.asm:23 STA $93
    case 0xC08594: cpu.execute_instruction<0x85>(0x000093, 2); return true;
    // src/unknown/C0/C08573.asm:24 INY
    case 0xC08596: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:25 INY
    case 0xC08597: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:26 LDA [$8D],Y
    case 0xC08598: cpu.execute_instruction<0xB7>(0x00008D, 2); return true;
    // src/unknown/C0/C08573.asm:27 STA $95
    case 0xC0859A: cpu.execute_instruction<0x85>(0x000095, 2); return true;
    // src/unknown/C0/C08573.asm:28 INY
    case 0xC0859C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:29 INY
    case 0xC0859D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:30 LDA [$8D],Y
    case 0xC0859E: cpu.execute_instruction<0xB7>(0x00008D, 2); return true;
    // src/unknown/C0/C08573.asm:31 STA $97
    case 0xC085A0: cpu.execute_instruction<0x85>(0x000097, 2); return true;
    // src/unknown/C0/C08573.asm:32 INY
    case 0xC085A2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:33 INY
    case 0xC085A3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:34 JSR COPY_TO_VRAM
    case 0xC085A4: cpu.execute_instruction<0x20>(0x00865F, 3); return true;
    // src/unknown/C0/C08573.asm:36 LDA [$8D],Y
    case 0xC085A7: cpu.execute_instruction<0xB7>(0x00008D, 2); return true;
    // src/unknown/C0/C08573.asm:37 STA $91
    case 0xC085A9: cpu.execute_instruction<0x85>(0x000091, 2); return true;
    // src/unknown/C0/C08573.asm:38 AND #$00FF
    case 0xC085AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C08573.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC085AB.
    case 0xC085AD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C08573.asm:39 CMP #$00FF
    case 0xC085AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C0/C08573.asm:39 CMP #$00FF
    // Overlapping static entry reached from 0xC085AE.
    case 0xC085B0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C08573.asm:40 BNE @UNKNOWN0
    case 0xC085B1: cpu.execute_instruction<0xD0>(0x0000DD, 2); return true;
    // src/unknown/C0/C08573.asm:41 PLB
    case 0xC085B3: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:42 PLD
    case 0xC085B4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:43 PLP
    case 0xC085B5: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:44 RTL
    case 0xC085B6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08726.asm (unresolved).
bool execute_unresolved_c0_c08726_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08726.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0871F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08726.asm:4 LDA #$0080
    case 0xC08721: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/unknown/C0/C08726.asm:5 STA INIDISP_MIRROR
    case 0xC08723: cpu.execute_instruction<0x8D>(0x00000D, 3); return true;
    // src/unknown/C0/C08726.asm:5 STA INIDISP_MIRROR
    // Overlapping static entry reached from 0xC08721.
    case 0xC08724: cpu.execute_instruction<0x0D>(0x009C00, 3); return true;
    // src/unknown/C0/C08726.asm:6 STZ HDMAEN_MIRROR
    case 0xC08726: cpu.execute_instruction<0x9C>(0x00001F, 3); return true;
    // src/unknown/C0/C08726.asm:6 STZ HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC08724.
    case 0xC08727: cpu.execute_instruction<0x1F>(0x2B9C00, 4); return true;
    // src/unknown/C0/C08726.asm:10 STZ NEW_FRAME_STARTED
    case 0xC08729: cpu.execute_instruction<0x9C>(0x00002B, 3); return true;
    // src/unknown/C0/C08726.asm:10 STZ NEW_FRAME_STARTED
    // Overlapping static entry reached from 0xC08727.
    case 0xC0872B: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C0/C08726.asm:12 LDA NEW_FRAME_STARTED
    case 0xC0872C: cpu.execute_instruction<0xAD>(0x00002B, 3); return true;
    // src/unknown/C0/C08726.asm:13 BEQ @UNKNOWN0
    case 0xC0872F: cpu.execute_instruction<0xF0>(0x0000FB, 2); return true;
    // src/unknown/C0/C08726.asm:14 LDA #$0000
    case 0xC08731: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C0/C08726.asm:15 STA f:HDMAEN
    case 0xC08733: cpu.execute_instruction<0x8F>(0x00420C, 4); return true;
    // src/unknown/C0/C08726.asm:15 STA f:HDMAEN
    // Overlapping static entry reached from 0xC08731.
    case 0xC08734: cpu.execute_instruction<0x0C>(0x000042, 3); return true;
    // src/unknown/C0/C08726.asm:16 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08737: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08726.asm:17 RTL
    case 0xC08739: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08744.asm (unresolved).
bool execute_unresolved_c0_c08744_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08744.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0873A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08744.asm:4 LDA #$0080
    case 0xC0873C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/unknown/C0/C08744.asm:5 STA INIDISP_MIRROR
    case 0xC0873E: cpu.execute_instruction<0x8D>(0x00000D, 3); return true;
    // src/unknown/C0/C08744.asm:5 STA INIDISP_MIRROR
    // Overlapping static entry reached from 0xC0873C.
    case 0xC0873F: cpu.execute_instruction<0x0D>(0x009C00, 3); return true;
    // src/unknown/C0/C08744.asm:6 STZ NEW_FRAME_STARTED
    case 0xC08741: cpu.execute_instruction<0x9C>(0x00002B, 3); return true;
    // src/unknown/C0/C08744.asm:6 STZ NEW_FRAME_STARTED
    // Overlapping static entry reached from 0xC0873F.
    case 0xC08742: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08744.asm:6 STZ NEW_FRAME_STARTED
    // Overlapping static entry reached from 0xC08742.
    case 0xC08743: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C0/C08744.asm:8 LDA NEW_FRAME_STARTED
    case 0xC08744: cpu.execute_instruction<0xAD>(0x00002B, 3); return true;
    // src/unknown/C0/C08744.asm:9 BEQ @UNKNOWN0
    case 0xC08747: cpu.execute_instruction<0xF0>(0x0000FB, 2); return true;
    // src/unknown/C0/C08744.asm:10 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08749: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08744.asm:11 RTL
    case 0xC0874B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0878B.asm (unresolved).
bool execute_unresolved_c0_c0878b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0878B.asm:3 TAX
    case 0xC08781: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0878B.asm:5 INC NEXT_FRAME_DISPLAY_ID
    case 0xC08782: cpu.execute_instruction<0xEE>(0x00002C, 3); return true;
    // src/unknown/C0/C0878B.asm:6 PHX
    case 0xC08785: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C0878B.asm:7 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC08786: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C0/C0878B.asm:8 PLX
    case 0xC0878A: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0878B.asm:9 DEX
    case 0xC0878B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0878B.asm:10 BNE @UNKNOWN0
    case 0xC0878C: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/unknown/C0/C0878B.asm:11 RTL
    case 0xC0878E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C087AB.asm (unresolved).
bool execute_unresolved_c0_c087ab_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C087AB.asm:3 PHP
    case 0xC087A1: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC087A2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C087AB.asm:5 PHD
    case 0xC087A4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:6 PHA
    case 0xC087A5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:7 TDC
    case 0xC087A6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:8 SEC
    case 0xC087A7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:9 SBC #$0002
    case 0xC087A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000002, 2); else cpu.execute_instruction<0xE9>(0x000002, 3); return true;
    // src/unknown/C0/C087AB.asm:9 SBC #$0002
    // Overlapping static entry reached from 0xC087A8.
    case 0xC087AA: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C087AB.asm:10 TCD
    case 0xC087AB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:11 PLA
    case 0xC087AC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:12 STA $00
    case 0xC087AD: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C087AB.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC087AF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C087AB.asm:14 LDA INIDISP_MIRROR
    case 0xC087B1: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/unknown/C0/C087AB.asm:15 EOR #$00FF
    case 0xC087B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x000AFF, 3); return true;
    // src/unknown/C0/C087AB.asm:16 ASL
    case 0xC087B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:17 ASL
    case 0xC087B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:18 ASL
    case 0xC087B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:19 ASL
    case 0xC087B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:20 AND #$00F0
    case 0xC087BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x0005F0, 3); return true;
    // src/unknown/C0/C087AB.asm:21 ORA $00
    case 0xC087BC: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C0/C087AB.asm:21 ORA $00
    // Overlapping static entry reached from 0xC087BA.
    case 0xC087BD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C087AB.asm:22 STA MOSAIC_MIRROR
    case 0xC087BE: cpu.execute_instruction<0x8D>(0x000010, 3); return true;
    // src/unknown/C0/C087AB.asm:23 PLD
    case 0xC087C1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:24 PLP
    case 0xC087C2: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:25 RTS
    case 0xC087C3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C087AB_redirect.asm (unresolved).
bool execute_unresolved_c0_c087ab_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C087AB_redirect.asm:3 JSR UNKNOWN_C087AB
    case 0xC0879D: cpu.execute_instruction<0x20>(0x0087A1, 3); return true;
    // src/unknown/C0/C087AB_redirect.asm:4 RTL
    case 0xC087A0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0888B.asm (unresolved).
bool execute_unresolved_c0_c0888b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0888B.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0887D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0888B.asm:4 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC0887F: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/unknown/C0/C0888B.asm:5 BEQ @UNKNOWN0
    case 0xC08882: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C0888B.asm:6 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08884: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0888B.asm:7 JSL OAM_CLEAR
    case 0xC08886: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/C0/C0888B.asm:8 JSL UPDATE_SCREEN
    case 0xC0888A: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/unknown/C0/C0888B.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0888E: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C0/C0888B.asm:10 BRA UNKNOWN_C0888B
    case 0xC08892: cpu.execute_instruction<0x80>(0x0000E9, 2); return true;
    // src/unknown/C0/C0888B.asm:12 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08894: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0888B.asm:13 RTL
    case 0xC08896: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C088A5.asm (unresolved).
bool execute_unresolved_c0_c088a5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C088A5.asm:3 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08897: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/unknown/C0/C088A5.asm:4 LDX SPRITEMAP_BANK
    case 0xC08899: cpu.execute_instruction<0xAE>(0x00000B, 3); return true;
    // src/unknown/C0/C088A5.asm:5 STA SPRITEMAP_BANK
    case 0xC0889C: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C088A5.asm:6 TXA
    case 0xC0889F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C088A5.asm:7 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC088A0: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C088A5.asm:8 RTL
    case 0xC088A2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08B19.asm (unresolved).
bool execute_unresolved_c0_c08b19_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08B19.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08B0A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08B19.asm:4 LDA #0
    case 0xC08B0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/unknown/C0/C08B19.asm:5 STA UNREAD_7E0009
    case 0xC08B0E: cpu.execute_instruction<0x8D>(0x000009, 3); return true;
    // src/unknown/C0/C08B19.asm:5 STA UNREAD_7E0009
    // Overlapping static entry reached from 0xC08B0C.
    case 0xC08B0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C200, 3); return true;
    // src/unknown/C0/C08B19.asm:6 REP #PROC_FLAGS::ACCUM8
    case 0xC08B11: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08B19.asm:6 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC08B0F.
    case 0xC08B12: cpu.execute_instruction<0x20>(0x00A322, 3); return true;
    // src/unknown/C0/C08B19.asm:7 JSL OAM_CLEAR
    case 0xC08B13: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/C0/C08B19.asm:7 JSL OAM_CLEAR
    // Overlapping static entry reached from 0xC08B12.
    case 0xC08B15: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:7 JSL OAM_CLEAR
    // Overlapping static entry reached from 0xC08B15.
    case 0xC08B16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000C2, 2); else cpu.execute_instruction<0xC0>(0x0030C2, 3); return true;
    // src/unknown/C0/C08B19.asm:10 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08B17: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08B19.asm:10 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC08B16.
    case 0xC08B18: cpu.execute_instruction<0x30>(0x000020, 2); return true;
    // src/unknown/C0/C08B19.asm:11 JSR UNKNOWN_C08B8E
    case 0xC08B19: cpu.execute_instruction<0x20>(0x008B7F, 3); return true;
    // src/unknown/C0/C08B19.asm:11 JSR UNKNOWN_C08B8E
    // Overlapping static entry reached from 0xC08B18.
    case 0xC08B1A: cpu.execute_instruction<0x7F>(0x20E28B, 4); return true;
    // src/unknown/C0/C08B19.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xC08B1C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08B19.asm:13 PHB
    case 0xC08B1E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:14 PLA
    case 0xC08B1F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:15 CMP #$00FF
    case 0xC08B20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00D0FF, 3); return true;
    // src/unknown/C0/C08B19.asm:16 BNE @UNKNOWN1
    case 0xC08B22: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/unknown/C0/C08B19.asm:16 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC08B20.
    case 0xC08B23: cpu.execute_instruction<0x02>(0x000080, 2); return true;
    // src/unknown/C0/C08B19.asm:18 BRA @UNKNOWN0
    case 0xC08B24: cpu.execute_instruction<0x80>(0x0000FE, 2); return true;
    // src/unknown/C0/C08B19.asm:20 LDA OAM_HIGH_TABLE_BUFFER
    case 0xC08B26: cpu.execute_instruction<0xAD>(0x00000A, 3); return true;
    // src/unknown/C0/C08B19.asm:21 CMP #$0080
    case 0xC08B29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x00F080, 3); return true;
    // src/unknown/C0/C08B19.asm:22 BEQ @UNKNOWN3
    case 0xC08B2B: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C08B19.asm:22 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC08B29.
    case 0xC08B2C: cpu.execute_instruction<0x04>(0x00004A, 2); return true;
    // src/unknown/C0/C08B19.asm:24 LSR
    case 0xC08B2D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:25 LSR
    case 0xC08B2E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:26 BCC @UNKNOWN2
    case 0xC08B2F: cpu.execute_instruction<0x90>(0x0000FC, 2); return true;
    // src/unknown/C0/C08B19.asm:28 LDX OAM_HIGH_TABLE_ADDR
    case 0xC08B31: cpu.execute_instruction<0xAE>(0x000007, 3); return true;
    // src/unknown/C0/C08B19.asm:29 STA a:__BSS_START__,X
    case 0xC08B34: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C08B19.asm:30 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08B37: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08B19.asm:31 LDA NEXT_FRAME_BUF_ID
    case 0xC08B39: cpu.execute_instruction<0xAD>(0x00002E, 3); return true;
    // src/unknown/C0/C08B19.asm:31 LDA NEXT_FRAME_BUF_ID
    // Overlapping static entry reached from 0xC08B18.
    case 0xC08B3A: cpu.execute_instruction<0x2E>(0x003A00, 3); return true;
    // src/unknown/C0/C08B19.asm:32 DEC
    case 0xC08B3C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:33 ASL
    case 0xC08B3D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:34 TAX
    case 0xC08B3E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:35 LDA BG1_X_POS
    case 0xC08B3F: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/C0/C08B19.asm:36 STA BG1_X_POS_BUF,X
    case 0xC08B42: cpu.execute_instruction<0x9D>(0x000041, 3); return true;
    // src/unknown/C0/C08B19.asm:37 LDA BG1_Y_POS
    case 0xC08B45: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/unknown/C0/C08B19.asm:38 STA BG1_Y_POS_BUF,X
    case 0xC08B48: cpu.execute_instruction<0x9D>(0x000045, 3); return true;
    // src/unknown/C0/C08B19.asm:39 LDA BG2_X_POS
    case 0xC08B4B: cpu.execute_instruction<0xAD>(0x000035, 3); return true;
    // src/unknown/C0/C08B19.asm:40 STA BG2_X_POS_BUF,X
    case 0xC08B4E: cpu.execute_instruction<0x9D>(0x000049, 3); return true;
    // src/unknown/C0/C08B19.asm:41 LDA BG2_Y_POS
    case 0xC08B51: cpu.execute_instruction<0xAD>(0x000037, 3); return true;
    // src/unknown/C0/C08B19.asm:42 STA BG2_Y_POS_BUF,X
    case 0xC08B54: cpu.execute_instruction<0x9D>(0x00004D, 3); return true;
    // src/unknown/C0/C08B19.asm:43 LDA BG3_X_POS
    case 0xC08B57: cpu.execute_instruction<0xAD>(0x000039, 3); return true;
    // src/unknown/C0/C08B19.asm:44 STA BG3_X_POS_BUF,X
    case 0xC08B5A: cpu.execute_instruction<0x9D>(0x000051, 3); return true;
    // src/unknown/C0/C08B19.asm:45 LDA BG3_Y_POS
    case 0xC08B5D: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/unknown/C0/C08B19.asm:46 STA BG3_Y_POS_BUF,X
    case 0xC08B60: cpu.execute_instruction<0x9D>(0x000055, 3); return true;
    // src/unknown/C0/C08B19.asm:47 LDA BG4_X_POS
    case 0xC08B63: cpu.execute_instruction<0xAD>(0x00003D, 3); return true;
    // src/unknown/C0/C08B19.asm:48 STA BG4_X_POS_BUF,X
    case 0xC08B66: cpu.execute_instruction<0x9D>(0x000059, 3); return true;
    // src/unknown/C0/C08B19.asm:49 LDA BG4_Y_POS
    case 0xC08B69: cpu.execute_instruction<0xAD>(0x00003F, 3); return true;
    // src/unknown/C0/C08B19.asm:50 STA BG4_Y_POS_BUF,X
    case 0xC08B6C: cpu.execute_instruction<0x9D>(0x00005D, 3); return true;
    // src/unknown/C0/C08B19.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC08B6F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08B19.asm:52 LDA NEXT_FRAME_BUF_ID
    case 0xC08B71: cpu.execute_instruction<0xAD>(0x00002E, 3); return true;
    // src/unknown/C0/C08B19.asm:53 STA NEXT_FRAME_DISPLAY_ID
    case 0xC08B74: cpu.execute_instruction<0x8D>(0x00002C, 3); return true;
    // src/unknown/C0/C08B19.asm:54 EOR #$0003
    case 0xC08B77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000003, 2); else cpu.execute_instruction<0x49>(0x008D03, 3); return true;
    // src/unknown/C0/C08B19.asm:55 STA NEXT_FRAME_BUF_ID
    case 0xC08B79: cpu.execute_instruction<0x8D>(0x00002E, 3); return true;
    // src/unknown/C0/C08B19.asm:55 STA NEXT_FRAME_BUF_ID
    // Overlapping static entry reached from 0xC08B77.
    case 0xC08B7A: cpu.execute_instruction<0x2E>(0x00C200, 3); return true;
    // src/unknown/C0/C08B19.asm:56 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08B7C: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08B19.asm:56 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC08B7A.
    case 0xC08B7D: cpu.execute_instruction<0x30>(0x00006B, 2); return true;
    // src/unknown/C0/C08B19.asm:57 RTL
    case 0xC08B7E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08B8E.asm (unresolved).
bool execute_unresolved_c0_c08b8e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08B8E.asm:3 PHP
    case 0xC08B7F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC08B80: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08B8E.asm:5 LDA UNUSED_7E2402
    case 0xC08B82: cpu.execute_instruction<0xAD>(0x002802, 3); return true;
    // src/unknown/C0/C08B8E.asm:6 CMP #$0000
    case 0xC08B85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C08B8E.asm:6 CMP #$0000
    // Overlapping static entry reached from 0xC08B85.
    case 0xC08B87: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C08B8E.asm:7 BNE @UNKNOWN0
    case 0xC08B88: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C08B8E.asm:8 JSR UNKNOWN_C08C53
    case 0xC08B8A: cpu.execute_instruction<0x20>(0x008C44, 3); return true;
    // src/unknown/C0/C08B8E.asm:10 LDX #$0000
    case 0xC08B8D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C08B8E.asm:10 LDX #$0000
    // Overlapping static entry reached from 0xC08B8D.
    case 0xC08B8F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C08B8E.asm:11 BRA @UNKNOWN2
    case 0xC08B90: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C08B8E.asm:13 LDA PRIORITY_0_SPRITEMAP_BANKS,X
    case 0xC08B92: cpu.execute_instruction<0xBD>(0x0028C4, 3); return true;
    // src/unknown/C0/C08B8E.asm:14 STA SPRITEMAP_BANK
    case 0xC08B95: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C08B8E.asm:15 PHX
    case 0xC08B98: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:16 LDA PRIORITY_0_SPRITEMAPS,X
    case 0xC08B99: cpu.execute_instruction<0xBD>(0x002804, 3); return true;
    // src/unknown/C0/C08B8E.asm:17 PHA
    case 0xC08B9C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:18 LDA PRIORITY_0_SPRITE_Y,X
    case 0xC08B9D: cpu.execute_instruction<0xBD>(0x002884, 3); return true;
    // src/unknown/C0/C08B8E.asm:19 TAY
    case 0xC08BA0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:20 LDA PRIORITY_0_SPRITE_X,X
    case 0xC08BA1: cpu.execute_instruction<0xBD>(0x002844, 3); return true;
    // src/unknown/C0/C08B8E.asm:21 TAX
    case 0xC08BA4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:22 PLA
    case 0xC08BA5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:23 JSL UNKNOWN_C08CD5
    case 0xC08BA6: cpu.execute_instruction<0x22>(0xC08CC6, 4); return true;
    // src/unknown/C0/C08B8E.asm:24 PLX
    case 0xC08BAA: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:25 INX
    case 0xC08BAB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:26 INX
    case 0xC08BAC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:28 CPX PRIORITY_0_SPRITE_OFFSET
    case 0xC08BAD: cpu.execute_instruction<0xEC>(0x002904, 3); return true;
    // src/unknown/C0/C08B8E.asm:29 BCC @UNKNOWN1
    case 0xC08BB0: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C0/C08B8E.asm:30 LDA UNUSED_7E2402
    case 0xC08BB2: cpu.execute_instruction<0xAD>(0x002802, 3); return true;
    // src/unknown/C0/C08B8E.asm:31 CMP #$0001
    case 0xC08BB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C08B8E.asm:31 CMP #$0001
    // Overlapping static entry reached from 0xC08BB5.
    case 0xC08BB7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C08B8E.asm:32 BNE @UNKNOWN3
    case 0xC08BB8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C08B8E.asm:33 JSR UNKNOWN_C08C53
    case 0xC08BBA: cpu.execute_instruction<0x20>(0x008C44, 3); return true;
    // src/unknown/C0/C08B8E.asm:35 LDX #$0000
    case 0xC08BBD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C08B8E.asm:35 LDX #$0000
    // Overlapping static entry reached from 0xC08BBD.
    case 0xC08BBF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C08B8E.asm:36 BRA @UNKNOWN5
    case 0xC08BC0: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C08B8E.asm:38 LDA PRIORITY_1_SPRITEMAP_BANKS,X
    case 0xC08BC2: cpu.execute_instruction<0xBD>(0x0029C6, 3); return true;
    // src/unknown/C0/C08B8E.asm:39 STA SPRITEMAP_BANK
    case 0xC08BC5: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C08B8E.asm:40 PHX
    case 0xC08BC8: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:41 LDA PRIORITY_1_SPRITEMAPS,X
    case 0xC08BC9: cpu.execute_instruction<0xBD>(0x002906, 3); return true;
    // src/unknown/C0/C08B8E.asm:42 PHA
    case 0xC08BCC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:43 LDA PRIORITY_1_SPRITE_Y,X
    case 0xC08BCD: cpu.execute_instruction<0xBD>(0x002986, 3); return true;
    // src/unknown/C0/C08B8E.asm:44 TAY
    case 0xC08BD0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:45 LDA PRIORITY_1_SPRITE_X,X
    case 0xC08BD1: cpu.execute_instruction<0xBD>(0x002946, 3); return true;
    // src/unknown/C0/C08B8E.asm:46 TAX
    case 0xC08BD4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:47 PLA
    case 0xC08BD5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:48 JSL UNKNOWN_C08CD5
    case 0xC08BD6: cpu.execute_instruction<0x22>(0xC08CC6, 4); return true;
    // src/unknown/C0/C08B8E.asm:49 PLX
    case 0xC08BDA: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:50 INX
    case 0xC08BDB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:51 INX
    case 0xC08BDC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:53 CPX PRIORITY_1_SPRITE_OFFSET
    case 0xC08BDD: cpu.execute_instruction<0xEC>(0x002A06, 3); return true;
    // src/unknown/C0/C08B8E.asm:54 BCC @UNKNOWN4
    case 0xC08BE0: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C0/C08B8E.asm:55 LDA UNUSED_7E2402
    case 0xC08BE2: cpu.execute_instruction<0xAD>(0x002802, 3); return true;
    // src/unknown/C0/C08B8E.asm:56 CMP #$0002
    case 0xC08BE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C08B8E.asm:56 CMP #$0002
    // Overlapping static entry reached from 0xC08BE5.
    case 0xC08BE7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C08B8E.asm:57 BNE @UNKNOWN6
    case 0xC08BE8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C08B8E.asm:58 JSR UNKNOWN_C08C53
    case 0xC08BEA: cpu.execute_instruction<0x20>(0x008C44, 3); return true;
    // src/unknown/C0/C08B8E.asm:60 LDX #$0000
    case 0xC08BED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C08B8E.asm:60 LDX #$0000
    // Overlapping static entry reached from 0xC08BED.
    case 0xC08BEF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C08B8E.asm:61 BRA @UNKNOWN8
    case 0xC08BF0: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C08B8E.asm:63 LDA PRIORITY_2_SPRITEMAP_BANKS,X
    case 0xC08BF2: cpu.execute_instruction<0xBD>(0x002AC8, 3); return true;
    // src/unknown/C0/C08B8E.asm:64 STA SPRITEMAP_BANK
    case 0xC08BF5: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C08B8E.asm:65 PHX
    case 0xC08BF8: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:66 LDA PRIORITY_2_SPRITEMAPS,X
    case 0xC08BF9: cpu.execute_instruction<0xBD>(0x002A08, 3); return true;
    // src/unknown/C0/C08B8E.asm:67 PHA
    case 0xC08BFC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:68 LDA PRIORITY_2_SPRITE_Y,X
    case 0xC08BFD: cpu.execute_instruction<0xBD>(0x002A88, 3); return true;
    // src/unknown/C0/C08B8E.asm:69 TAY
    case 0xC08C00: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:70 LDA PRIORITY_2_SPRITE_X,X
    case 0xC08C01: cpu.execute_instruction<0xBD>(0x002A48, 3); return true;
    // src/unknown/C0/C08B8E.asm:71 TAX
    case 0xC08C04: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:72 PLA
    case 0xC08C05: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:73 JSL UNKNOWN_C08CD5
    case 0xC08C06: cpu.execute_instruction<0x22>(0xC08CC6, 4); return true;
    // src/unknown/C0/C08B8E.asm:74 PLX
    case 0xC08C0A: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:75 INX
    case 0xC08C0B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:76 INX
    case 0xC08C0C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:78 CPX PRIORITY_2_SPRITE_OFFSET
    case 0xC08C0D: cpu.execute_instruction<0xEC>(0x002B08, 3); return true;
    // src/unknown/C0/C08B8E.asm:79 BCC @UNKNOWN7
    case 0xC08C10: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C0/C08B8E.asm:80 LDA UNUSED_7E2402
    case 0xC08C12: cpu.execute_instruction<0xAD>(0x002802, 3); return true;
    // src/unknown/C0/C08B8E.asm:81 CMP #$0003
    case 0xC08C15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C08B8E.asm:81 CMP #$0003
    // Overlapping static entry reached from 0xC08C15.
    case 0xC08C17: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C08B8E.asm:82 BNE @UNKNOWN9
    case 0xC08C18: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C08B8E.asm:83 JSR UNKNOWN_C08C53
    case 0xC08C1A: cpu.execute_instruction<0x20>(0x008C44, 3); return true;
    // src/unknown/C0/C08B8E.asm:85 LDX #$0000
    case 0xC08C1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C08B8E.asm:85 LDX #$0000
    // Overlapping static entry reached from 0xC08C1D.
    case 0xC08C1F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C08B8E.asm:86 BRA @UNKNOWN11
    case 0xC08C20: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C08B8E.asm:88 LDA PRIORITY_3_SPRITEMAP_BANKS,X
    case 0xC08C22: cpu.execute_instruction<0xBD>(0x002BCA, 3); return true;
    // src/unknown/C0/C08B8E.asm:89 STA SPRITEMAP_BANK
    case 0xC08C25: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C08B8E.asm:90 PHX
    case 0xC08C28: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:91 LDA PRIORITY_3_SPRITEMAPS,X
    case 0xC08C29: cpu.execute_instruction<0xBD>(0x002B0A, 3); return true;
    // src/unknown/C0/C08B8E.asm:92 PHA
    case 0xC08C2C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:93 LDA PRIORITY_3_SPRITE_Y,X
    case 0xC08C2D: cpu.execute_instruction<0xBD>(0x002B8A, 3); return true;
    // src/unknown/C0/C08B8E.asm:94 TAY
    case 0xC08C30: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:95 LDA PRIORITY_3_SPRITE_X,X
    case 0xC08C31: cpu.execute_instruction<0xBD>(0x002B4A, 3); return true;
    // src/unknown/C0/C08B8E.asm:96 TAX
    case 0xC08C34: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:97 PLA
    case 0xC08C35: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:98 JSL UNKNOWN_C08CD5
    case 0xC08C36: cpu.execute_instruction<0x22>(0xC08CC6, 4); return true;
    // src/unknown/C0/C08B8E.asm:99 PLX
    case 0xC08C3A: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:100 INX
    case 0xC08C3B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:101 INX
    case 0xC08C3C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:103 CPX PRIORITY_3_SPRITE_OFFSET
    case 0xC08C3D: cpu.execute_instruction<0xEC>(0x002C0A, 3); return true;
    // src/unknown/C0/C08B8E.asm:104 BCC @UNKNOWN10
    case 0xC08C40: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C0/C08B8E.asm:105 PLP
    case 0xC08C42: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:106 RTS
    case 0xC08C43: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08C53.asm (unresolved).
bool execute_unresolved_c0_c08c53_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08C53.asm:3 RTS
    case 0xC08C44: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08C54.asm (unresolved).
bool execute_unresolved_c0_c08c54_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08C54.asm:3 JSR UNKNOWN_C08C58
    case 0xC08C45: cpu.execute_instruction<0x20>(0x008C49, 3); return true;
    // src/unknown/C0/C08C54.asm:4 RTL
    case 0xC08C48: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08C58.asm (unresolved).
bool execute_unresolved_c0_c08c58_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08C58.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC08C49: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08C58.asm:4 PHX
    case 0xC08C4B: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C08C58.asm:5 PHA
    case 0xC08C4C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08C58.asm:6 LDA CURRENT_SPRITE_DRAWING_PRIORITY
    case 0xC08C4D: cpu.execute_instruction<0xAD>(0x002800, 3); return true;
    // src/unknown/C0/C08C58.asm:7 ASL
    case 0xC08C50: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C08C58.asm:8 TAX
    case 0xC08C51: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08C58.asm:9 PLA
    case 0xC08C52: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08C58.asm:10 JMP (.LOWORD(UNKNOWN_C08C65),X)
    case 0xC08C53: cpu.execute_instruction<0x7C>(0x008C56, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08C6D.asm (unresolved).
bool execute_unresolved_c0_c08c6d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08C6D.asm:3 LDX PRIORITY_0_SPRITE_OFFSET
    case 0xC08C5E: cpu.execute_instruction<0xAE>(0x002904, 3); return true;
    // src/unknown/C0/C08C6D.asm:4 STA PRIORITY_0_SPRITEMAPS,X
    case 0xC08C61: cpu.execute_instruction<0x9D>(0x002804, 3); return true;
    // src/unknown/C0/C08C6D.asm:5 PLA
    case 0xC08C64: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08C6D.asm:6 STA PRIORITY_0_SPRITE_X,X
    case 0xC08C65: cpu.execute_instruction<0x9D>(0x002844, 3); return true;
    // src/unknown/C0/C08C6D.asm:7 TYA
    case 0xC08C68: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C08C6D.asm:8 STA PRIORITY_0_SPRITE_Y,X
    case 0xC08C69: cpu.execute_instruction<0x9D>(0x002884, 3); return true;
    // src/unknown/C0/C08C6D.asm:9 LDA SPRITEMAP_BANK
    case 0xC08C6C: cpu.execute_instruction<0xAD>(0x00000B, 3); return true;
    // src/unknown/C0/C08C6D.asm:10 STA PRIORITY_0_SPRITEMAP_BANKS,X
    case 0xC08C6F: cpu.execute_instruction<0x9D>(0x0028C4, 3); return true;
    // src/unknown/C0/C08C6D.asm:11 INX
    case 0xC08C72: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08C6D.asm:12 INX
    case 0xC08C73: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08C6D.asm:13 STX PRIORITY_0_SPRITE_OFFSET
    case 0xC08C74: cpu.execute_instruction<0x8E>(0x002904, 3); return true;
    // src/unknown/C0/C08C6D.asm:14 RTS
    case 0xC08C77: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08C87.asm (unresolved).
bool execute_unresolved_c0_c08c87_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08C87.asm:3 LDX PRIORITY_1_SPRITE_OFFSET
    case 0xC08C78: cpu.execute_instruction<0xAE>(0x002A06, 3); return true;
    // src/unknown/C0/C08C87.asm:4 STA PRIORITY_1_SPRITEMAPS,X
    case 0xC08C7B: cpu.execute_instruction<0x9D>(0x002906, 3); return true;
    // src/unknown/C0/C08C87.asm:5 PLA
    case 0xC08C7E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08C87.asm:6 STA PRIORITY_1_SPRITE_X,X
    case 0xC08C7F: cpu.execute_instruction<0x9D>(0x002946, 3); return true;
    // src/unknown/C0/C08C87.asm:7 TYA
    case 0xC08C82: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C08C87.asm:8 STA PRIORITY_1_SPRITE_Y,X
    case 0xC08C83: cpu.execute_instruction<0x9D>(0x002986, 3); return true;
    // src/unknown/C0/C08C87.asm:9 LDA SPRITEMAP_BANK
    case 0xC08C86: cpu.execute_instruction<0xAD>(0x00000B, 3); return true;
    // src/unknown/C0/C08C87.asm:10 STA PRIORITY_1_SPRITEMAP_BANKS,X
    case 0xC08C89: cpu.execute_instruction<0x9D>(0x0029C6, 3); return true;
    // src/unknown/C0/C08C87.asm:11 INX
    case 0xC08C8C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08C87.asm:12 INX
    case 0xC08C8D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08C87.asm:13 STX PRIORITY_1_SPRITE_OFFSET
    case 0xC08C8E: cpu.execute_instruction<0x8E>(0x002A06, 3); return true;
    // src/unknown/C0/C08C87.asm:14 RTS
    case 0xC08C91: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08CA1.asm (unresolved).
bool execute_unresolved_c0_c08ca1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08CA1.asm:3 LDX PRIORITY_2_SPRITE_OFFSET
    case 0xC08C92: cpu.execute_instruction<0xAE>(0x002B08, 3); return true;
    // src/unknown/C0/C08CA1.asm:4 STA PRIORITY_2_SPRITEMAPS,X
    case 0xC08C95: cpu.execute_instruction<0x9D>(0x002A08, 3); return true;
    // src/unknown/C0/C08CA1.asm:5 PLA
    case 0xC08C98: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08CA1.asm:6 STA PRIORITY_2_SPRITE_X,X
    case 0xC08C99: cpu.execute_instruction<0x9D>(0x002A48, 3); return true;
    // src/unknown/C0/C08CA1.asm:7 TYA
    case 0xC08C9C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C08CA1.asm:8 STA PRIORITY_2_SPRITE_Y,X
    case 0xC08C9D: cpu.execute_instruction<0x9D>(0x002A88, 3); return true;
    // src/unknown/C0/C08CA1.asm:9 LDA SPRITEMAP_BANK
    case 0xC08CA0: cpu.execute_instruction<0xAD>(0x00000B, 3); return true;
    // src/unknown/C0/C08CA1.asm:10 STA PRIORITY_2_SPRITEMAP_BANKS,X
    case 0xC08CA3: cpu.execute_instruction<0x9D>(0x002AC8, 3); return true;
    // src/unknown/C0/C08CA1.asm:11 INX
    case 0xC08CA6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CA1.asm:12 INX
    case 0xC08CA7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CA1.asm:13 STX PRIORITY_2_SPRITE_OFFSET
    case 0xC08CA8: cpu.execute_instruction<0x8E>(0x002B08, 3); return true;
    // src/unknown/C0/C08CA1.asm:14 RTS
    case 0xC08CAB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08CBB.asm (unresolved).
bool execute_unresolved_c0_c08cbb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08CBB.asm:3 LDX PRIORITY_3_SPRITE_OFFSET
    case 0xC08CAC: cpu.execute_instruction<0xAE>(0x002C0A, 3); return true;
    // src/unknown/C0/C08CBB.asm:4 STA PRIORITY_3_SPRITEMAPS,X
    case 0xC08CAF: cpu.execute_instruction<0x9D>(0x002B0A, 3); return true;
    // src/unknown/C0/C08CBB.asm:5 PLA
    case 0xC08CB2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08CBB.asm:6 STA PRIORITY_3_SPRITE_X,X
    case 0xC08CB3: cpu.execute_instruction<0x9D>(0x002B4A, 3); return true;
    // src/unknown/C0/C08CBB.asm:7 TYA
    case 0xC08CB6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C08CBB.asm:8 STA PRIORITY_3_SPRITE_Y,X
    case 0xC08CB7: cpu.execute_instruction<0x9D>(0x002B8A, 3); return true;
    // src/unknown/C0/C08CBB.asm:9 LDA SPRITEMAP_BANK
    case 0xC08CBA: cpu.execute_instruction<0xAD>(0x00000B, 3); return true;
    // src/unknown/C0/C08CBB.asm:10 STA PRIORITY_3_SPRITEMAP_BANKS,X
    case 0xC08CBD: cpu.execute_instruction<0x9D>(0x002BCA, 3); return true;
    // src/unknown/C0/C08CBB.asm:11 INX
    case 0xC08CC0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CBB.asm:12 INX
    case 0xC08CC1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CBB.asm:13 STX PRIORITY_3_SPRITE_OFFSET
    case 0xC08CC2: cpu.execute_instruction<0x8E>(0x002C0A, 3); return true;
    // src/unknown/C0/C08CBB.asm:14 RTS
    case 0xC08CC5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08CD5.asm (unresolved).
bool execute_unresolved_c0_c08cd5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08CD5.asm:3 PHP
    case 0xC08CC6: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:4 PHD
    case 0xC08CC7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:5 PEA __BSS_START__
    case 0xC08CC8: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/unknown/C0/C08CD5.asm:6 PLD
    case 0xC08CCB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:7 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08CCC: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08CD5.asm:8 STX <CURRENT_SPRITE_BASE_X + 0
    case 0xC08CCE: cpu.execute_instruction<0x86>(0x00009B, 2); return true;
    // src/unknown/C0/C08CD5.asm:9 STY <CURRENT_SPRITE_BASE_Y + 0
    case 0xC08CD0: cpu.execute_instruction<0x84>(0x00009D, 2); return true;
    // src/unknown/C0/C08CD5.asm:10 TAY
    case 0xC08CD2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:11 LDX <OAM_ADDR + 0
    case 0xC08CD3: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/unknown/C0/C08CD5.asm:12 CPX <OAM_END_ADDR + 0
    case 0xC08CD5: cpu.execute_instruction<0xE4>(0x000005, 2); return true;
    // src/unknown/C0/C08CD5.asm:13 BCC @UNKNOWN0
    case 0xC08CD7: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C08CD5.asm:14 PLD
    case 0xC08CD9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:15 PLP
    case 0xC08CDA: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:16 RTL
    case 0xC08CDB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:18 PHB
    case 0xC08CDC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC08CDD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08CD5.asm:20 LDA <SPRITEMAP_BANK + 0
    case 0xC08CDF: cpu.execute_instruction<0xA5>(0x00000B, 2); return true;
    // src/unknown/C0/C08CD5.asm:21 PHA
    case 0xC08CE1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:22 PLB
    case 0xC08CE2: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:23 BRA @UNKNOWN3
    case 0xC08CE3: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C0/C08CD5.asm:25 LDA a:spritemap::tile,Y
    case 0xC08CE5: cpu.execute_instruction<0xB9>(0x000001, 3); return true;
    // src/unknown/C0/C08CD5.asm:26 TAY
    case 0xC08CE8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:27 BRA @UNKNOWN3
    case 0xC08CE9: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C08CD5.asm:29 INY
    case 0xC08CEB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:30 INY
    case 0xC08CEC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:31 INY
    case 0xC08CED: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:32 INY
    case 0xC08CEE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:33 INY
    case 0xC08CEF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC08CF0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08CD5.asm:36 LDA a:spritemap::y_offset,Y
    case 0xC08CF2: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C08CD5.asm:37 AND #$00FF
    case 0xC08CF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C08CD5.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC08CF5.
    case 0xC08CF7: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C08CD5.asm:38 CMP #$0080
    case 0xC08CF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/C0/C08CD5.asm:38 CMP #$0080
    // Overlapping static entry reached from 0xC08CF8.
    case 0xC08CFA: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C08CD5.asm:39 BCC @UNKNOWN4
    case 0xC08CFB: cpu.execute_instruction<0x90>(0x000006, 2); return true;
    // src/unknown/C0/C08CD5.asm:40 BEQ @UNKNOWN1
    case 0xC08CFD: cpu.execute_instruction<0xF0>(0x0000E6, 2); return true;
    // src/unknown/C0/C08CD5.asm:41 ORA #$FF00
    case 0xC08CFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C0/C08CD5.asm:41 ORA #$FF00
    // Overlapping static entry reached from 0xC08CFF.
    case 0xC08D01: cpu.execute_instruction<0xFF>(0x9D6518, 4); return true;
    // src/unknown/C0/C08CD5.asm:42 CLC
    case 0xC08D02: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:44 ADC <CURRENT_SPRITE_BASE_Y + 0
    case 0xC08D03: cpu.execute_instruction<0x65>(0x00009D, 2); return true;
    // src/unknown/C0/C08CD5.asm:45 DEC
    case 0xC08D05: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:46 CMP #$00E0
    case 0xC08D06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E0, 2); else cpu.execute_instruction<0xC9>(0x0000E0, 3); return true;
    // src/unknown/C0/C08CD5.asm:46 CMP #$00E0
    // Overlapping static entry reached from 0xC08D06.
    case 0xC08D08: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C08CD5.asm:47 BCC @UNKNOWN6
    case 0xC08D09: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // src/unknown/C0/C08CD5.asm:48 CMP #$FFE0
    case 0xC08D0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E0, 2); else cpu.execute_instruction<0xC9>(0x00FFE0, 3); return true;
    // src/unknown/C0/C08CD5.asm:48 CMP #$FFE0
    // Overlapping static entry reached from 0xC08D0B.
    case 0xC08D0D: cpu.execute_instruction<0xFF>(0xE209B0, 4); return true;
    // src/unknown/C0/C08CD5.asm:49 BCS @UNKNOWN6
    case 0xC08D0E: cpu.execute_instruction<0xB0>(0x000009, 2); return true;
    // src/unknown/C0/C08CD5.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC08D10: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08CD5.asm:50 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC08D0D.
    case 0xC08D11: cpu.execute_instruction<0x20>(0x0004B9, 3); return true;
    // src/unknown/C0/C08CD5.asm:52 LDA a:spritemap::special_flags,Y
    case 0xC08D12: cpu.execute_instruction<0xB9>(0x000004, 3); return true;
    // src/unknown/C0/C08CD5.asm:52 LDA a:spritemap::special_flags,Y
    // Overlapping static entry reached from 0xC08D11.
    case 0xC08D14: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C0/C08CD5.asm:53 BPL @UNKNOWN2
    case 0xC08D15: cpu.execute_instruction<0x10>(0x0000D4, 2); return true;
    // src/unknown/C0/C08CD5.asm:54 BRA @UNKNOWN10
    case 0xC08D17: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // src/unknown/C0/C08CD5.asm:57 STA <CURRENT_SPRITE_Y + 0
    case 0xC08D19: cpu.execute_instruction<0x85>(0x00009F, 2); return true;
    // src/unknown/C0/C08CD5.asm:58 LDA a:spritemap::tile,Y
    case 0xC08D1B: cpu.execute_instruction<0xB9>(0x000001, 3); return true;
    // src/unknown/C0/C08CD5.asm:59 STA <oam_entry::starting_tile,X
    case 0xC08D1E: cpu.execute_instruction<0x95>(0x000002, 2); return true;
    // src/unknown/C0/C08CD5.asm:60 LDA a:spritemap::x_offset,Y
    case 0xC08D20: cpu.execute_instruction<0xB9>(0x000003, 3); return true;
    // src/unknown/C0/C08CD5.asm:61 AND #$00FF
    case 0xC08D23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C08CD5.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC08D23.
    case 0xC08D25: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C08CD5.asm:62 CMP #$0080
    case 0xC08D26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/C0/C08CD5.asm:62 CMP #$0080
    // Overlapping static entry reached from 0xC08D26.
    case 0xC08D28: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C08CD5.asm:63 BCC @UNKNOWN7
    case 0xC08D29: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/unknown/C0/C08CD5.asm:64 ORA #$FF00
    case 0xC08D2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C0/C08CD5.asm:64 ORA #$FF00
    // Overlapping static entry reached from 0xC08D2B.
    case 0xC08D2D: cpu.execute_instruction<0xFF>(0x9B6518, 4); return true;
    // src/unknown/C0/C08CD5.asm:65 CLC
    case 0xC08D2E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:67 ADC <CURRENT_SPRITE_BASE_X + 0
    case 0xC08D2F: cpu.execute_instruction<0x65>(0x00009B, 2); return true;
    // src/unknown/C0/C08CD5.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC08D31: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08CD5.asm:69 STA <oam_entry::x_coord,X
    case 0xC08D33: cpu.execute_instruction<0x95>(0x000000, 2); return true;
    // src/unknown/C0/C08CD5.asm:70 XBA
    case 0xC08D35: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:71 BEQ @UNKNOWN8
    case 0xC08D36: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C08CD5.asm:72 CMP #$00FF
    case 0xC08D38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00D0FF, 3); return true;
    // src/unknown/C0/C08CD5.asm:73 BNE @UNKNOWN5
    case 0xC08D3A: cpu.execute_instruction<0xD0>(0x0000D6, 2); return true;
    // src/unknown/C0/C08CD5.asm:73 BNE @UNKNOWN5
    // Overlapping static entry reached from 0xC08D38.
    case 0xC08D3B: cpu.execute_instruction<0xD6>(0x00002A, 2); return true;
    // src/unknown/C0/C08CD5.asm:75 ROL
    case 0xC08D3C: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:76 ROR <OAM_HIGH_TABLE_BUFFER + 0
    case 0xC08D3D: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/unknown/C0/C08CD5.asm:77 LDA a:spritemap::special_flags,Y
    case 0xC08D3F: cpu.execute_instruction<0xB9>(0x000004, 3); return true;
    // src/unknown/C0/C08CD5.asm:78 ROR
    case 0xC08D42: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:79 ROR <OAM_HIGH_TABLE_BUFFER + 0
    case 0xC08D43: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/unknown/C0/C08CD5.asm:80 BCC @UNKNOWN9
    case 0xC08D45: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // src/unknown/C0/C08CD5.asm:81 LDA <OAM_HIGH_TABLE_BUFFER + 0
    case 0xC08D47: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C08CD5.asm:82 STA [<OAM_HIGH_TABLE_ADDR + 0]
    case 0xC08D49: cpu.execute_instruction<0x87>(0x000007, 2); return true;
    // src/unknown/C0/C08CD5.asm:83 INC <OAM_HIGH_TABLE_ADDR + 0
    case 0xC08D4B: cpu.execute_instruction<0xE6>(0x000007, 2); return true;
    // src/unknown/C0/C08CD5.asm:84 LDA #$0080
    case 0xC08D4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008580, 3); return true;
    // src/unknown/C0/C08CD5.asm:85 STA <OAM_HIGH_TABLE_BUFFER + 0
    case 0xC08D4F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C08CD5.asm:85 STA <OAM_HIGH_TABLE_BUFFER + 0
    // Overlapping static entry reached from 0xC08D4D.
    case 0xC08D50: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:87 LDA <CURRENT_SPRITE_Y + 0
    case 0xC08D51: cpu.execute_instruction<0xA5>(0x00009F, 2); return true;
    // src/unknown/C0/C08CD5.asm:88 STA <oam_entry::y_coord,X
    case 0xC08D53: cpu.execute_instruction<0x95>(0x000001, 2); return true;
    // src/unknown/C0/C08CD5.asm:89 INX
    case 0xC08D55: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:90 INX
    case 0xC08D56: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:91 INX
    case 0xC08D57: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:92 INX
    case 0xC08D58: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:93 LDA a:spritemap::special_flags,Y
    case 0xC08D59: cpu.execute_instruction<0xB9>(0x000004, 3); return true;
    // src/unknown/C0/C08CD5.asm:94 BMI @UNKNOWN10
    case 0xC08D5C: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/unknown/C0/C08CD5.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC08D5E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08CD5.asm:96 CPX <OAM_END_ADDR + 0
    case 0xC08D60: cpu.execute_instruction<0xE4>(0x000005, 2); return true;
    // src/unknown/C0/C08CD5.asm:97 BCC @UNKNOWN2
    case 0xC08D62: cpu.execute_instruction<0x90>(0x000087, 2); return true;
    // src/unknown/C0/C08CD5.asm:99 STX <OAM_ADDR + 0
    case 0xC08D64: cpu.execute_instruction<0x86>(0x000003, 2); return true;
    // src/unknown/C0/C08CD5.asm:100 PLB
    case 0xC08D66: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:101 PLD
    case 0xC08D67: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:102 PLP
    case 0xC08D68: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:103 RTL
    case 0xC08D69: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08D79.asm (unresolved).
bool execute_unresolved_c0_c08d79_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08D79.asm:3 PHP
    case 0xC08D6A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C08D79.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08D6B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08D79.asm:5 XBA
    case 0xC08D6D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C08D79.asm:6 LDA BGMODE_MIRROR
    case 0xC08D6E: cpu.execute_instruction<0xAD>(0x00000F, 3); return true;
    // src/unknown/C0/C08D79.asm:7 AND #$00F0
    case 0xC08D71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x008DF0, 3); return true;
    // src/unknown/C0/C08D79.asm:8 STA BGMODE_MIRROR
    case 0xC08D73: cpu.execute_instruction<0x8D>(0x00000F, 3); return true;
    // src/unknown/C0/C08D79.asm:8 STA BGMODE_MIRROR
    // Overlapping static entry reached from 0xC08D71.
    case 0xC08D74: cpu.execute_instruction<0x0F>(0x0DEB00, 4); return true;
    // src/unknown/C0/C08D79.asm:9 XBA
    case 0xC08D76: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C08D79.asm:10 ORA BGMODE_MIRROR
    case 0xC08D77: cpu.execute_instruction<0x0D>(0x00000F, 3); return true;
    // src/unknown/C0/C08D79.asm:10 ORA BGMODE_MIRROR
    // Overlapping static entry reached from 0xC08D74.
    case 0xC08D78: cpu.execute_instruction<0x0F>(0x0F8D00, 4); return true;
    // src/unknown/C0/C08D79.asm:11 STA BGMODE_MIRROR
    case 0xC08D7A: cpu.execute_instruction<0x8D>(0x00000F, 3); return true;
    // src/unknown/C0/C08D79.asm:11 STA BGMODE_MIRROR
    // Overlapping static entry reached from 0xC08D78.
    case 0xC08D7C: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C0/C08D79.asm:12 STA f:BGMODE
    case 0xC08D7D: cpu.execute_instruction<0x8F>(0x002105, 4); return true;
    // src/unknown/C0/C08D79.asm:13 PLP
    case 0xC08D81: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C08D79.asm:14 RTL
    case 0xC08D82: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09279.asm (unresolved).
bool execute_unresolved_c0_c09279_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09279.asm:3 JML (.LOWORD(TEMP_FUNCTION_POINTER))
    case 0xC0925B: cpu.execute_instruction<0xDC>(0x0000BA, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0927C-jp.asm (unresolved).
bool execute_unresolved_c0_c0927c_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0927C-jp.asm:3 LDA #.LOWORD(UNKNOWN_C0DB0F)
    case 0xC0925E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x00DAD7, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:3 LDA #.LOWORD(UNKNOWN_C0DB0F)
    // Overlapping static entry reached from 0xC0925E.
    case 0xC09260: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:4 STA CURRENT_ENTITY_DRAW_CALLBACK
    case 0xC09261: cpu.execute_instruction<0x8D>(0x000A54, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:5 LDX #.LOWORD(-1)
    case 0xC09264: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:5 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC09264.
    case 0xC09266: cpu.execute_instruction<0xFF>(0x0A468E, 4); return true;
    // src/unknown/C0/C0927C-jp.asm:6 STX FIRST_ENTITY
    case 0xC09267: cpu.execute_instruction<0x8E>(0x000A46, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:7 STX ENTITY_NEXT_ENTITY_TABLE+58
    case 0xC0926A: cpu.execute_instruction<0x8E>(0x000ACE, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:8 STX ENTITY_SCRIPT_NEXT_SCRIPTS+138
    case 0xC0926D: cpu.execute_instruction<0x8E>(0x0012DA, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:9 INX
    case 0xC09270: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:10 STX LAST_ENTITY
    case 0xC09271: cpu.execute_instruction<0x8E>(0x000A48, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:11 STX LAST_ALLOCATED_SCRIPT
    case 0xC09274: cpu.execute_instruction<0x8E>(0x000A4A, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:12 CLC
    case 0xC09277: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:13 LDX #56
    case 0xC09278: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000038, 2); else cpu.execute_instruction<0xA2>(0x000038, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:13 LDX #56
    // Overlapping static entry reached from 0xC09278.
    case 0xC0927A: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C0927C-jp.asm:15 TXA
    case 0xC0927B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:16 ADC #2
    case 0xC0927C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x000002, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:16 ADC #2
    // Overlapping static entry reached from 0xC0927C.
    case 0xC0927E: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0927C-jp.asm:17 STA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC0927F: cpu.execute_instruction<0x9D>(0x000A94, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:18 DEX
    case 0xC09282: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:19 DEX
    case 0xC09283: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:20 BPL @UNKNOWN0
    case 0xC09284: cpu.execute_instruction<0x10>(0x0000F5, 2); return true;
    // src/unknown/C0/C0927C-jp.asm:21 LDX #136
    case 0xC09286: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000088, 2); else cpu.execute_instruction<0xA2>(0x000088, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:21 LDX #136
    // Overlapping static entry reached from 0xC09286.
    case 0xC09288: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C0927C-jp.asm:23 TXA
    case 0xC09289: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:24 ADC #2
    case 0xC0928A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x000002, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:24 ADC #2
    // Overlapping static entry reached from 0xC0928A.
    case 0xC0928C: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0927C-jp.asm:25 STA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC0928D: cpu.execute_instruction<0x9D>(0x001250, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:26 DEX
    case 0xC09290: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:27 DEX
    case 0xC09291: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:28 BPL @UNKNOWN1
    case 0xC09292: cpu.execute_instruction<0x10>(0x0000F5, 2); return true;
    // src/unknown/C0/C0927C-jp.asm:29 LDX #58
    case 0xC09294: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003A, 2); else cpu.execute_instruction<0xA2>(0x00003A, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:29 LDX #58
    // Overlapping static entry reached from 0xC09294.
    case 0xC09296: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0927C-jp.asm:30 LDA #.LOWORD(-1)
    case 0xC09297: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:30 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC09297.
    case 0xC09299: cpu.execute_instruction<0xFF>(0x0A589D, 4); return true;
    // src/unknown/C0/C0927C-jp.asm:32 STA ENTITY_SCRIPT_TABLE,X
    case 0xC0929A: cpu.execute_instruction<0x9D>(0x000A58, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:33 DEX
    case 0xC0929D: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:34 DEX
    case 0xC0929E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:35 BPL @UNKNOWN2
    case 0xC0929F: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/unknown/C0/C0927C-jp.asm:36 LDX #58
    case 0xC092A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003A, 2); else cpu.execute_instruction<0xA2>(0x00003A, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:36 LDX #58
    // Overlapping static entry reached from 0xC092A1.
    case 0xC092A3: cpu.execute_instruction<0x00>(0x00009E, 2); return true;
    // src/unknown/C0/C0927C-jp.asm:38 STZ ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC092A4: cpu.execute_instruction<0x9E>(0x001160, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:39 STZ ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC092A7: cpu.execute_instruction<0x9E>(0x0010AC, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:40 DEX
    case 0xC092AA: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:41 DEX
    case 0xC092AB: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:42 BPL @UNKNOWN3
    case 0xC092AC: cpu.execute_instruction<0x10>(0x0000F6, 2); return true;
    // src/unknown/C0/C0927C-jp.asm:43 LDX #6
    case 0xC092AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:43 LDX #6
    // Overlapping static entry reached from 0xC092AE.
    case 0xC092B0: cpu.execute_instruction<0x00>(0x00009E, 2); return true;
    // src/unknown/C0/C0927C-jp.asm:45 STZ ENTITY_BG_HORIZONTAL_OFFSET_HIGH,X
    case 0xC092B1: cpu.execute_instruction<0x9E>(0x001A08, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:46 STZ ENTITY_BG_VERTICAL_OFFSET_HIGH,X
    case 0xC092B4: cpu.execute_instruction<0x9E>(0x001A10, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:47 STZ ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    case 0xC092B7: cpu.execute_instruction<0x9E>(0x001A18, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:48 STZ ENTITY_BG_HORIZONTAL_VELOCITY_HIGH,X
    case 0xC092BA: cpu.execute_instruction<0x9E>(0x001A28, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:49 STZ ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC092BD: cpu.execute_instruction<0x9E>(0x001A20, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:50 STZ ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC092C0: cpu.execute_instruction<0x9E>(0x001A30, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:51 STZ ENTITY_BG_HORIZONTAL_OFFSET_LOW,X
    case 0xC092C3: cpu.execute_instruction<0x9E>(0x0019F8, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:52 STZ ENTITY_BG_VERTICAL_OFFSET_LOW,X
    case 0xC092C6: cpu.execute_instruction<0x9E>(0x001A00, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:53 STZ ENTITY_DRAW_PRIORITY,X
    case 0xC092C9: cpu.execute_instruction<0x9E>(0x001034, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:54 DEX
    case 0xC092CC: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:55 DEX
    case 0xC092CD: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C-jp.asm:56 BPL @UNKNOWN4
    case 0xC092CE: cpu.execute_instruction<0x10>(0x0000E1, 2); return true;
    // src/unknown/C0/C0927C-jp.asm:57 JSR CLEAR_ENTITY_DRAW_SORTING_TABLE
    case 0xC092D0: cpu.execute_instruction<0x20>(0x000000, 3); return true;
    // src/unknown/C0/C0927C-jp.asm:58 RTL
    case 0xC092D3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0943C.asm (unresolved).
bool execute_unresolved_c0_c0943c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0943C.asm:3 LDX FIRST_ENTITY
    case 0xC0941B: cpu.execute_instruction<0xAE>(0x000A46, 3); return true;
    // src/unknown/C0/C0943C.asm:4 BMI @UNKNOWN1
    case 0xC0941E: cpu.execute_instruction<0x30>(0x00000F, 2); return true;
    // src/unknown/C0/C0943C.asm:6 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09420: cpu.execute_instruction<0xBD>(0x0010AC, 3); return true;
    // src/unknown/C0/C0943C.asm:7 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC09423: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C0943C.asm:7 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC09423.
    case 0xC09425: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00AC9D, 3); return true;
    // src/unknown/C0/C0943C.asm:8 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09426: cpu.execute_instruction<0x9D>(0x0010AC, 3); return true;
    // src/unknown/C0/C0943C.asm:8 STA ENTITY_TICK_CALLBACK_HIGH,X
    // Overlapping static entry reached from 0xC09425.
    case 0xC09427: cpu.execute_instruction<0xAC>(0x00BD10, 3); return true;
    // src/unknown/C0/C0943C.asm:8 STA ENTITY_TICK_CALLBACK_HIGH,X
    // Overlapping static entry reached from 0xC09425.
    case 0xC09428: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C0/C0943C.asm:9 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09429: cpu.execute_instruction<0xBD>(0x000A94, 3); return true;
    // src/unknown/C0/C0943C.asm:9 LDA ENTITY_NEXT_ENTITY_TABLE,X
    // Overlapping static entry reached from 0xC09428.
    case 0xC0942A: cpu.execute_instruction<0x94>(0x00000A, 2); return true;
    // src/unknown/C0/C0943C.asm:10 TAX
    case 0xC0942C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0943C.asm:11 BPL @UNKNOWN0
    case 0xC0942D: cpu.execute_instruction<0x10>(0x0000F1, 2); return true;
    // src/unknown/C0/C0943C.asm:13 RTL
    case 0xC0942F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09451.asm (unresolved).
bool execute_unresolved_c0_c09451_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09451.asm:3 LDX FIRST_ENTITY
    case 0xC09430: cpu.execute_instruction<0xAE>(0x000A46, 3); return true;
    // src/unknown/C0/C09451.asm:4 BMI @UNKNOWN1
    case 0xC09433: cpu.execute_instruction<0x30>(0x00000F, 2); return true;
    // src/unknown/C0/C09451.asm:6 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09435: cpu.execute_instruction<0xBD>(0x0010AC, 3); return true;
    // src/unknown/C0/C09451.asm:7 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC09438: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C0/C09451.asm:7 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC09438.
    case 0xC0943A: cpu.execute_instruction<0x3F>(0x10AC9D, 4); return true;
    // src/unknown/C0/C09451.asm:8 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC0943B: cpu.execute_instruction<0x9D>(0x0010AC, 3); return true;
    // src/unknown/C0/C09451.asm:9 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC0943E: cpu.execute_instruction<0xBD>(0x000A94, 3); return true;
    // src/unknown/C0/C09451.asm:10 TAX
    case 0xC09441: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09451.asm:11 BPL @UNKNOWN0
    case 0xC09442: cpu.execute_instruction<0x10>(0x0000F1, 2); return true;
    // src/unknown/C0/C09451.asm:13 RTL
    case 0xC09444: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C094D0.asm (unresolved).
bool execute_unresolved_c0_c094d0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C094D0.asm:3 BIT ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC094AF: cpu.execute_instruction<0x3C>(0x0010AC, 3); return true;
    // src/unknown/C0/C094D0.asm:4 BVS @UNKNOWN1
    case 0xC094B2: cpu.execute_instruction<0x70>(0x00001E, 2); return true;
    // src/unknown/C0/C094D0.asm:5 LDY ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC094B4: cpu.execute_instruction<0xBC>(0x000AD0, 3); return true;
    // src/unknown/C0/C094D0.asm:7 STY $8A
    case 0xC094B7: cpu.execute_instruction<0x84>(0x00008A, 2); return true;
    // src/unknown/C0/C094D0.asm:8 STY CURRENT_SCRIPT_OFFSET
    case 0xC094B9: cpu.execute_instruction<0x8C>(0x001A3E, 3); return true;
    // src/unknown/C0/C094D0.asm:9 STY CURRENT_SCRIPT_SLOT
    case 0xC094BC: cpu.execute_instruction<0x8C>(0x001A3C, 3); return true;
    // src/unknown/C0/C094D0.asm:10 LSR CURRENT_SCRIPT_SLOT
    case 0xC094BF: cpu.execute_instruction<0x4E>(0x001A3C, 3); return true;
    // src/unknown/C0/C094D0.asm:11 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC094C2: cpu.execute_instruction<0xB9>(0x001250, 3); return true;
    // src/unknown/C0/C094D0.asm:12 STA ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC094C5: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/unknown/C0/C094D0.asm:13 JSR UNKNOWN_C09506
    case 0xC094C8: cpu.execute_instruction<0x20>(0x0094E5, 3); return true;
    // src/unknown/C0/C094D0.asm:14 LDY ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC094CB: cpu.execute_instruction<0xAC>(0x000A4E, 3); return true;
    // src/unknown/C0/C094D0.asm:15 BPL @UNKNOWN0
    case 0xC094CE: cpu.execute_instruction<0x10>(0x0000E7, 2); return true;
    // src/unknown/C0/C094D0.asm:16 LDX $88
    case 0xC094D0: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C094D0.asm:18 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC094D2: cpu.execute_instruction<0xBD>(0x0010AC, 3); return true;
    // src/unknown/C0/C094D0.asm:19 BMI @UNKNOWN2
    case 0xC094D5: cpu.execute_instruction<0x30>(0x00000D, 2); return true;
    // src/unknown/C0/C094D0.asm:20 STA CURRENT_ENTITY_TICK_CALLBACK+2
    case 0xC094D7: cpu.execute_instruction<0x8D>(0x000A52, 3); return true;
    // src/unknown/C0/C094D0.asm:21 LDA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC094DA: cpu.execute_instruction<0xBD>(0x001070, 3); return true;
    // src/unknown/C0/C094D0.asm:22 STA CURRENT_ENTITY_TICK_CALLBACK
    case 0xC094DD: cpu.execute_instruction<0x8D>(0x000A50, 3); return true;
    // src/unknown/C0/C094D0.asm:23 JSL JUMP_TO_LOADED_MOVEMENT_PTR
    case 0xC094E0: cpu.execute_instruction<0x22>(0xC09D7D, 4); return true;
    // src/unknown/C0/C094D0.asm:25 RTS
    case 0xC094E4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09506.asm (unresolved).
bool execute_unresolved_c0_c09506_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09506.asm:3 LDX $8A
    case 0xC094E5: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/unknown/C0/C09506.asm:4 LDA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC094E7: cpu.execute_instruction<0xBD>(0x001368, 3); return true;
    // src/unknown/C0/C09506.asm:5 BNE @RETURN
    case 0xC094EA: cpu.execute_instruction<0xD0>(0x000047, 2); return true;
    // src/unknown/C0/C09506.asm:6 LDY ENTITY_SCRIPT_PROGRAM_COUNTERS,X
    case 0xC094EC: cpu.execute_instruction<0xBC>(0x0013F4, 3); return true;
    // src/unknown/C0/C09506.asm:7 LDA ENTITY_SCRIPT_PROGRAM_COUNTER_BANKS,X
    case 0xC094EF: cpu.execute_instruction<0xBD>(0x001480, 3); return true;
    // src/unknown/C0/C09506.asm:8 STA $82
    case 0xC094F2: cpu.execute_instruction<0x85>(0x000082, 2); return true;
    // src/unknown/C0/C09506.asm:9 TXA
    case 0xC094F4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:10 ASL
    case 0xC094F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:11 ASL
    case 0xC094F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:12 ASL
    case 0xC094F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:13 ADC #.LOWORD(ENTITY_SCRIPT_STACKS)
    case 0xC094F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000098, 2); else cpu.execute_instruction<0x69>(0x001598, 3); return true;
    // src/unknown/C0/C09506.asm:13 ADC #.LOWORD(ENTITY_SCRIPT_STACKS)
    // Overlapping static entry reached from 0xC094F8.
    case 0xC094FA: cpu.execute_instruction<0x15>(0x000085, 2); return true;
    // src/unknown/C0/C09506.asm:14 STA $84
    case 0xC094FB: cpu.execute_instruction<0x85>(0x000084, 2); return true;
    // src/unknown/C0/C09506.asm:14 STA $84
    // Overlapping static entry reached from 0xC094FA.
    case 0xC094FC: cpu.execute_instruction<0x84>(0x0000B7, 2); return true;
    // src/unknown/C0/C09506.asm:16 LDA [$80],Y
    case 0xC094FD: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/unknown/C0/C09506.asm:16 LDA [$80],Y
    // Overlapping static entry reached from 0xC094FC.
    case 0xC094FE: cpu.execute_instruction<0x80>(0x0000C8, 2); return true;
    // src/unknown/C0/C09506.asm:17 INY
    case 0xC094FF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:18 AND #$00FF
    case 0xC09500: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C09506.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC09500.
    case 0xC09502: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C09506.asm:19 CMP #$0070
    case 0xC09503: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000070, 2); else cpu.execute_instruction<0xC9>(0x000070, 3); return true;
    // src/unknown/C0/C09506.asm:19 CMP #$0070
    // Overlapping static entry reached from 0xC09503.
    case 0xC09505: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C09506.asm:20 BCS @UNKNOWN1
    case 0xC09506: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C0/C09506.asm:21 ASL
    case 0xC09508: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:22 TAX
    case 0xC09509: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:23 JSR (.LOWORD(MOVEMENT_CTRL_CODES_PTR_TABLE),X)
    case 0xC0950A: cpu.execute_instruction<0xFC>(0x009537, 3); return true;
    // src/unknown/C0/C09506.asm:24 BRA @UNKNOWN2
    case 0xC0950D: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C09506.asm:26 STA $90
    case 0xC0950F: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/unknown/C0/C09506.asm:27 AND #$000F
    case 0xC09511: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C09506.asm:27 AND #$000F
    // Overlapping static entry reached from 0xC09511.
    case 0xC09513: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C09506.asm:28 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09514: cpu.execute_instruction<0x9D>(0x001368, 3); return true;
    // src/unknown/C0/C09506.asm:29 LDA $90
    case 0xC09517: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/unknown/C0/C09506.asm:30 AND #$0070
    case 0xC09519: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000070, 2); else cpu.execute_instruction<0x29>(0x000070, 3); return true;
    // src/unknown/C0/C09506.asm:30 AND #$0070
    // Overlapping static entry reached from 0xC09519.
    case 0xC0951B: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C09506.asm:31 LSR
    case 0xC0951C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:32 LSR
    case 0xC0951D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:33 LSR
    case 0xC0951E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:34 TAX
    case 0xC0951F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:35 JSR (.LOWORD(MOVEMENT_CTRL_CODES_PTR_TABLE)+138,X)
    case 0xC09520: cpu.execute_instruction<0xFC>(0x0095C1, 3); return true;
    // src/unknown/C0/C09506.asm:37 LDX $8A
    case 0xC09523: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/unknown/C0/C09506.asm:38 LDA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09525: cpu.execute_instruction<0xBD>(0x001368, 3); return true;
    // src/unknown/C0/C09506.asm:39 BEQ @UNKNOWN0
    case 0xC09528: cpu.execute_instruction<0xF0>(0x0000D3, 2); return true;
    // src/unknown/C0/C09506.asm:40 TYA
    case 0xC0952A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:41 STA ENTITY_SCRIPT_PROGRAM_COUNTERS,X
    case 0xC0952B: cpu.execute_instruction<0x9D>(0x0013F4, 3); return true;
    // src/unknown/C0/C09506.asm:42 LDA $82
    case 0xC0952E: cpu.execute_instruction<0xA5>(0x000082, 2); return true;
    // src/unknown/C0/C09506.asm:43 STA ENTITY_SCRIPT_PROGRAM_COUNTER_BANKS,X
    case 0xC09530: cpu.execute_instruction<0x9D>(0x001480, 3); return true;
    // src/unknown/C0/C09506.asm:45 DEC ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09533: cpu.execute_instruction<0xDE>(0x001368, 3); return true;
    // src/unknown/C0/C09506.asm:46 RTS
    case 0xC09536: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09907.asm (unresolved).
bool execute_unresolved_c0_c09907_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09907.asm:3 ASL
    case 0xC098E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09907.asm:4 TAX
    case 0xC098E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09907.asm:5 STZ ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC098E8: cpu.execute_instruction<0x9E>(0x000DA0, 3); return true;
    // src/unknown/C0/C09907.asm:6 STZ ENTITY_DELTA_X_TABLE,X
    case 0xC098EB: cpu.execute_instruction<0x9E>(0x000CEC, 3); return true;
    // src/unknown/C0/C09907.asm:7 STZ ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC098EE: cpu.execute_instruction<0x9E>(0x000DDC, 3); return true;
    // src/unknown/C0/C09907.asm:8 STZ ENTITY_DELTA_Y_TABLE,X
    case 0xC098F1: cpu.execute_instruction<0x9E>(0x000D28, 3); return true;
    // src/unknown/C0/C09907.asm:9 STZ ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC098F4: cpu.execute_instruction<0x9E>(0x000E18, 3); return true;
    // src/unknown/C0/C09907.asm:10 STZ ENTITY_DELTA_Z_TABLE,X
    case 0xC098F7: cpu.execute_instruction<0x9E>(0x000D64, 3); return true;
    // src/unknown/C0/C09907.asm:11 RTL
    case 0xC098FA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09AC5.asm (unresolved).
bool execute_unresolved_c0_c09ac5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09AC5.asm:3 LDA ($8C)
    case 0xC09AA4: cpu.execute_instruction<0xB2>(0x00008C, 2); return true;
    // src/unknown/C0/C09AC5.asm:4 AND $90
    case 0xC09AA6: cpu.execute_instruction<0x25>(0x000090, 2); return true;
    // src/unknown/C0/C09AC5.asm:5 STA ($8C)
    case 0xC09AA8: cpu.execute_instruction<0x92>(0x00008C, 2); return true;
    // src/unknown/C0/C09AC5.asm:6 RTS
    case 0xC09AAA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09ACC.asm (unresolved).
bool execute_unresolved_c0_c09acc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09ACC.asm:3 LDA ($8C)
    case 0xC09AAB: cpu.execute_instruction<0xB2>(0x00008C, 2); return true;
    // src/unknown/C0/C09ACC.asm:4 ORA $90
    case 0xC09AAD: cpu.execute_instruction<0x05>(0x000090, 2); return true;
    // src/unknown/C0/C09ACC.asm:5 STA ($8C)
    case 0xC09AAF: cpu.execute_instruction<0x92>(0x00008C, 2); return true;
    // src/unknown/C0/C09ACC.asm:6 RTS
    case 0xC09AB1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09AD3.asm (unresolved).
bool execute_unresolved_c0_c09ad3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09AD3.asm:3 LDA ($8C)
    case 0xC09AB2: cpu.execute_instruction<0xB2>(0x00008C, 2); return true;
    // src/unknown/C0/C09AD3.asm:4 CLC
    case 0xC09AB4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09AD3.asm:5 ADC $90
    case 0xC09AB5: cpu.execute_instruction<0x65>(0x000090, 2); return true;
    // src/unknown/C0/C09AD3.asm:6 STA ($8C)
    case 0xC09AB7: cpu.execute_instruction<0x92>(0x00008C, 2); return true;
    // src/unknown/C0/C09AD3.asm:7 RTS
    case 0xC09AB9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09ADB.asm (unresolved).
bool execute_unresolved_c0_c09adb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09ADB.asm:3 LDA ($8C)
    case 0xC09ABA: cpu.execute_instruction<0xB2>(0x00008C, 2); return true;
    // src/unknown/C0/C09ADB.asm:4 EOR $90
    case 0xC09ABC: cpu.execute_instruction<0x45>(0x000090, 2); return true;
    // src/unknown/C0/C09ADB.asm:5 STA ($8C)
    case 0xC09ABE: cpu.execute_instruction<0x92>(0x00008C, 2); return true;
    // src/unknown/C0/C09ADB.asm:6 RTS
    case 0xC09AC0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C02.asm (unresolved).
bool execute_unresolved_c0_c09c02_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C02.asm:3 LDA LAST_ALLOCATED_SCRIPT
    case 0xC09BE1: cpu.execute_instruction<0xAD>(0x000A4A, 3); return true;
    // src/unknown/C0/C09C02.asm:4 BMI @UNKNOWN2
    case 0xC09BE4: cpu.execute_instruction<0x30>(0x000019, 2); return true;
    // src/unknown/C0/C09C02.asm:5 LDY #.LOWORD(-1)
    case 0xC09BE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09C02.asm:5 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC09BE6.
    case 0xC09BE8: cpu.execute_instruction<0xFF>(0x0A48AD, 4); return true;
    // src/unknown/C0/C09C02.asm:6 LDA LAST_ENTITY
    case 0xC09BE9: cpu.execute_instruction<0xAD>(0x000A48, 3); return true;
    // src/unknown/C0/C09C02.asm:7 BMI @UNKNOWN2
    case 0xC09BEC: cpu.execute_instruction<0x30>(0x000011, 2); return true;
    // src/unknown/C0/C09C02.asm:9 TAX
    case 0xC09BEE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:10 CPX ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09BEF: cpu.execute_instruction<0xEC>(0x000A42, 3); return true;
    // src/unknown/C0/C09C02.asm:11 BCC @UNKNOWN1
    case 0xC09BF2: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C0/C09C02.asm:12 CPX ENTITY_ALLOCATION_MAX_SLOT
    case 0xC09BF4: cpu.execute_instruction<0xEC>(0x000A44, 3); return true;
    // src/unknown/C0/C09C02.asm:13 BCC @UNKNOWN3
    case 0xC09BF7: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // src/unknown/C0/C09C02.asm:15 TXY
    case 0xC09BF9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:16 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09BFA: cpu.execute_instruction<0xBD>(0x000A94, 3); return true;
    // src/unknown/C0/C09C02.asm:17 BPL @UNKNOWN0
    case 0xC09BFD: cpu.execute_instruction<0x10>(0x0000EF, 2); return true;
    // src/unknown/C0/C09C02.asm:19 SEC
    case 0xC09BFF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:20 RTS
    case 0xC09C00: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:22 TYA
    case 0xC09C01: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:23 BPL @UNKNOWN4
    case 0xC09C02: cpu.execute_instruction<0x10>(0x000008, 2); return true;
    // src/unknown/C0/C09C02.asm:24 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C04: cpu.execute_instruction<0xBD>(0x000A94, 3); return true;
    // src/unknown/C0/C09C02.asm:25 STA LAST_ENTITY
    case 0xC09C07: cpu.execute_instruction<0x8D>(0x000A48, 3); return true;
    // src/unknown/C0/C09C02.asm:26 CLC
    case 0xC09C0A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:27 RTS
    case 0xC09C0B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:29 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C0C: cpu.execute_instruction<0xBD>(0x000A94, 3); return true;
    // src/unknown/C0/C09C02.asm:30 STA ENTITY_NEXT_ENTITY_TABLE,Y
    case 0xC09C0F: cpu.execute_instruction<0x99>(0x000A94, 3); return true;
    // src/unknown/C0/C09C02.asm:31 CLC
    case 0xC09C12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:32 RTS
    case 0xC09C13: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C35.asm (unresolved).
bool execute_unresolved_c0_c09c35_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C35.asm:3 ASL
    case 0xC09C14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09C35.asm:4 TAX
    case 0xC09C15: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09C35.asm:5 JSR UNKNOWN_C09C3B
    case 0xC09C16: cpu.execute_instruction<0x20>(0x009C1A, 3); return true;
    // src/unknown/C0/C09C35.asm:6 RTL
    case 0xC09C19: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C3B.asm (unresolved).
bool execute_unresolved_c0_c09c3b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C3B.asm:3 PHA
    case 0xC09C1A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C09C3B.asm:4 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC09C1B: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/C0/C09C3B.asm:5 BMI @UNKNOWN0
    case 0xC09C1E: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/unknown/C0/C09C3B.asm:6 PHY
    case 0xC09C20: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C0/C09C3B.asm:7 LDA #$FFFF
    case 0xC09C21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09C3B.asm:7 LDA #$FFFF
    // Overlapping static entry reached from 0xC09C21.
    case 0xC09C23: cpu.execute_instruction<0xFF>(0x0A589D, 4); return true;
    // src/unknown/C0/C09C3B.asm:8 STA ENTITY_SCRIPT_TABLE,X
    case 0xC09C24: cpu.execute_instruction<0x9D>(0x000A58, 3); return true;
    // src/unknown/C0/C09C3B.asm:9 JSR CLEAR_SPRITE_TICK_CALLBACK
    case 0xC09C27: cpu.execute_instruction<0x20>(0x009D80, 3); return true;
    // src/unknown/C0/C09C3B.asm:10 JSR UNKNOWN_C09C99
    case 0xC09C2A: cpu.execute_instruction<0x20>(0x009C78, 3); return true;
    // src/unknown/C0/C09C3B.asm:11 JSR UNKNOWN_C09C73
    case 0xC09C2D: cpu.execute_instruction<0x20>(0x009C52, 3); return true;
    // src/unknown/C0/C09C3B.asm:12 JSR UNKNOWN_C09C8F
    case 0xC09C30: cpu.execute_instruction<0x20>(0x009C6E, 3); return true;
    // src/unknown/C0/C09C3B.asm:13 PLY
    case 0xC09C33: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C09C3B.asm:15 PLA
    case 0xC09C34: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C09C3B.asm:16 RTS
    case 0xC09C35: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C57.asm (unresolved).
bool execute_unresolved_c0_c09c57_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C57.asm:3 LDA #$FFFF
    case 0xC09C36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09C57.asm:3 LDA #$FFFF
    // Overlapping static entry reached from 0xC09C36.
    case 0xC09C38: cpu.execute_instruction<0xFF>(0x0A949D, 4); return true;
    // src/unknown/C0/C09C57.asm:4 STA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C39: cpu.execute_instruction<0x9D>(0x000A94, 3); return true;
    // src/unknown/C0/C09C57.asm:5 TXA
    case 0xC09C3C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C09C57.asm:6 LDX FIRST_ENTITY
    case 0xC09C3D: cpu.execute_instruction<0xAE>(0x000A46, 3); return true;
    // src/unknown/C0/C09C57.asm:7 BPL @UNKNOWN0
    case 0xC09C40: cpu.execute_instruction<0x10>(0x000005, 2); return true;
    // src/unknown/C0/C09C57.asm:8 STA FIRST_ENTITY
    case 0xC09C42: cpu.execute_instruction<0x8D>(0x000A46, 3); return true;
    // src/unknown/C0/C09C57.asm:9 BRA @UNKNOWN1
    case 0xC09C45: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C09C57.asm:11 TXY
    case 0xC09C47: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C09C57.asm:12 LDX ENTITY_NEXT_ENTITY_TABLE,Y
    case 0xC09C48: cpu.execute_instruction<0xBE>(0x000A94, 3); return true;
    // src/unknown/C0/C09C57.asm:13 BPL @UNKNOWN0
    case 0xC09C4B: cpu.execute_instruction<0x10>(0x0000FA, 2); return true;
    // src/unknown/C0/C09C57.asm:14 STA ENTITY_NEXT_ENTITY_TABLE,Y
    case 0xC09C4D: cpu.execute_instruction<0x99>(0x000A94, 3); return true;
    // src/unknown/C0/C09C57.asm:16 TAX
    case 0xC09C50: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09C57.asm:17 RTS
    case 0xC09C51: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C73.asm (unresolved).
bool execute_unresolved_c0_c09c73_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C73.asm:3 JSR UNKNOWN_C09CB5
    case 0xC09C52: cpu.execute_instruction<0x20>(0x009C94, 3); return true;
    // src/unknown/C0/C09C73.asm:4 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C55: cpu.execute_instruction<0xBD>(0x000A94, 3); return true;
    // src/unknown/C0/C09C73.asm:5 CPY #$FFFF
    case 0xC09C58: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09C73.asm:5 CPY #$FFFF
    // Overlapping static entry reached from 0xC09C58.
    case 0xC09C5A: cpu.execute_instruction<0xFF>(0x9905F0, 4); return true;
    // src/unknown/C0/C09C73.asm:6 BEQ @UNKNOWN0
    case 0xC09C5B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C09C73.asm:7 STA ENTITY_NEXT_ENTITY_TABLE,Y
    case 0xC09C5D: cpu.execute_instruction<0x99>(0x000A94, 3); return true;
    // src/unknown/C0/C09C73.asm:7 STA ENTITY_NEXT_ENTITY_TABLE,Y
    // Overlapping static entry reached from 0xC09C5A.
    case 0xC09C5E: cpu.execute_instruction<0x94>(0x00000A, 2); return true;
    // src/unknown/C0/C09C73.asm:8 BRA @UNKNOWN1
    case 0xC09C60: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C09C73.asm:10 STA FIRST_ENTITY
    case 0xC09C62: cpu.execute_instruction<0x8D>(0x000A46, 3); return true;
    // src/unknown/C0/C09C73.asm:12 CPX NEXT_ACTIVE_ENTITY
    case 0xC09C65: cpu.execute_instruction<0xEC>(0x000A4C, 3); return true;
    // src/unknown/C0/C09C73.asm:13 BNE @UNKNOWN2
    case 0xC09C68: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C09C73.asm:14 STA NEXT_ACTIVE_ENTITY
    case 0xC09C6A: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/unknown/C0/C09C73.asm:16 RTS
    case 0xC09C6D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C8F.asm (unresolved).
bool execute_unresolved_c0_c09c8f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C8F.asm:3 LDA LAST_ENTITY
    case 0xC09C6E: cpu.execute_instruction<0xAD>(0x000A48, 3); return true;
    // src/unknown/C0/C09C8F.asm:4 STA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C71: cpu.execute_instruction<0x9D>(0x000A94, 3); return true;
    // src/unknown/C0/C09C8F.asm:5 STX LAST_ENTITY
    case 0xC09C74: cpu.execute_instruction<0x8E>(0x000A48, 3); return true;
    // src/unknown/C0/C09C8F.asm:6 RTS
    case 0xC09C77: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C99.asm (unresolved).
bool execute_unresolved_c0_c09c99_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C99.asm:3 LDA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09C78: cpu.execute_instruction<0xBD>(0x000AD0, 3); return true;
    // src/unknown/C0/C09C99.asm:4 BMI @UNKNOWN1
    case 0xC09C7B: cpu.execute_instruction<0x30>(0x000016, 2); return true;
    // src/unknown/C0/C09C99.asm:5 PHX
    case 0xC09C7D: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C09C99.asm:6 LDA LAST_ALLOCATED_SCRIPT
    case 0xC09C7E: cpu.execute_instruction<0xAD>(0x000A4A, 3); return true;
    // src/unknown/C0/C09C99.asm:7 PHA
    case 0xC09C81: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C09C99.asm:8 LDA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09C82: cpu.execute_instruction<0xBD>(0x000AD0, 3); return true;
    // src/unknown/C0/C09C99.asm:9 STA LAST_ALLOCATED_SCRIPT
    case 0xC09C85: cpu.execute_instruction<0x8D>(0x000A4A, 3); return true;
    // src/unknown/C0/C09C99.asm:11 TAX
    case 0xC09C88: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09C99.asm:12 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC09C89: cpu.execute_instruction<0xBD>(0x001250, 3); return true;
    // src/unknown/C0/C09C99.asm:13 BPL @UNKNOWN0
    case 0xC09C8C: cpu.execute_instruction<0x10>(0x0000FA, 2); return true;
    // src/unknown/C0/C09C99.asm:14 PLA
    case 0xC09C8E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C09C99.asm:15 STA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC09C8F: cpu.execute_instruction<0x9D>(0x001250, 3); return true;
    // src/unknown/C0/C09C99.asm:16 PLX
    case 0xC09C92: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C09C99.asm:18 RTS
    case 0xC09C93: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09CB5.asm (unresolved).
bool execute_unresolved_c0_c09cb5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09CB5.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC09C94: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C09CB5.asm:4 PHD
    case 0xC09C96: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:5 PHA
    case 0xC09C97: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:6 TDC
    case 0xC09C98: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:7 SEC
    case 0xC09C99: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:8 SBC #$0002
    case 0xC09C9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000002, 2); else cpu.execute_instruction<0xE9>(0x000002, 3); return true;
    // src/unknown/C0/C09CB5.asm:8 SBC #$0002
    // Overlapping static entry reached from 0xC09C9A.
    case 0xC09C9C: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C09CB5.asm:9 TCD
    case 0xC09C9D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:10 PLA
    case 0xC09C9E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:11 STX $00
    case 0xC09C9F: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/unknown/C0/C09CB5.asm:12 LDY #$FFFF
    case 0xC09CA1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09CB5.asm:12 LDY #$FFFF
    // Overlapping static entry reached from 0xC09CA1.
    case 0xC09CA3: cpu.execute_instruction<0xFF>(0x0A46AE, 4); return true;
    // src/unknown/C0/C09CB5.asm:13 LDX FIRST_ENTITY
    case 0xC09CA4: cpu.execute_instruction<0xAE>(0x000A46, 3); return true;
    // src/unknown/C0/C09CB5.asm:15 CPX $00
    case 0xC09CA7: cpu.execute_instruction<0xE4>(0x000000, 2); return true;
    // src/unknown/C0/C09CB5.asm:16 BEQ @UNKNOWN1
    case 0xC09CA9: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C09CB5.asm:17 TXY
    case 0xC09CAB: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:18 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09CAC: cpu.execute_instruction<0xBD>(0x000A94, 3); return true;
    // src/unknown/C0/C09CB5.asm:19 TAX
    case 0xC09CAF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:20 BRA @UNKNOWN0
    case 0xC09CB0: cpu.execute_instruction<0x80>(0x0000F5, 2); return true;
    // src/unknown/C0/C09CB5.asm:22 LDX $00
    case 0xC09CB2: cpu.execute_instruction<0xA6>(0x000000, 2); return true;
    // src/unknown/C0/C09CB5.asm:23 PLD
    case 0xC09CB4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:24 RTS
    case 0xC09CB5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09CD7.asm (unresolved).
bool execute_unresolved_c0_c09cd7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09CD7.asm:3 LDA #$8000
    case 0xC09CB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C09CD7.asm:3 LDA #$8000
    // Overlapping static entry reached from 0xC09CB6.
    case 0xC09CB8: cpu.execute_instruction<0x80>(0x0000AE, 2); return true;
    // src/unknown/C0/C09CD7.asm:4 LDX LAST_ENTITY
    case 0xC09CB9: cpu.execute_instruction<0xAE>(0x000A48, 3); return true;
    // src/unknown/C0/C09CD7.asm:5 BRA @UNKNOWN1
    case 0xC09CBC: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C0/C09CD7.asm:7 LDY ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09CBE: cpu.execute_instruction<0xBC>(0x000A94, 3); return true;
    // src/unknown/C0/C09CD7.asm:8 STA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09CC1: cpu.execute_instruction<0x9D>(0x000A94, 3); return true;
    // src/unknown/C0/C09CD7.asm:9 TYX
    case 0xC09CC4: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C09CD7.asm:11 BPL @UNKNOWN0
    case 0xC09CC5: cpu.execute_instruction<0x10>(0x0000F7, 2); return true;
    // src/unknown/C0/C09CD7.asm:12 LDX #$003A
    case 0xC09CC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003A, 2); else cpu.execute_instruction<0xA2>(0x00003A, 3); return true;
    // src/unknown/C0/C09CD7.asm:12 LDX #$003A
    // Overlapping static entry reached from 0xC09CC7.
    case 0xC09CC9: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C09CD7.asm:13 LDY #$FFFF
    case 0xC09CCA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09CD7.asm:13 LDY #$FFFF
    // Overlapping static entry reached from 0xC09CCA.
    case 0xC09CCC: cpu.execute_instruction<0xFF>(0x0A94BD, 4); return true;
    // src/unknown/C0/C09CD7.asm:15 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09CCD: cpu.execute_instruction<0xBD>(0x000A94, 3); return true;
    // src/unknown/C0/C09CD7.asm:16 CMP #$8000
    case 0xC09CD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C09CD7.asm:16 CMP #$8000
    // Overlapping static entry reached from 0xC09CD0.
    case 0xC09CD2: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/C0/C09CD7.asm:17 BNE @UNKNOWN3
    case 0xC09CD3: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C09CD7.asm:18 TYA
    case 0xC09CD5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C09CD7.asm:19 STA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09CD6: cpu.execute_instruction<0x9D>(0x000A94, 3); return true;
    // src/unknown/C0/C09CD7.asm:20 TXY
    case 0xC09CD9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C09CD7.asm:22 DEX
    case 0xC09CDA: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C09CD7.asm:23 DEX
    case 0xC09CDB: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C09CD7.asm:24 BPL @UNKNOWN2
    case 0xC09CDC: cpu.execute_instruction<0x10>(0x0000EF, 2); return true;
    // src/unknown/C0/C09CD7.asm:25 STY LAST_ENTITY
    case 0xC09CDE: cpu.execute_instruction<0x8C>(0x000A48, 3); return true;
    // src/unknown/C0/C09CD7.asm:26 RTL
    case 0xC09CE1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09D03.asm (unresolved).
bool execute_unresolved_c0_c09d03_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09D03.asm:3 LDY LAST_ALLOCATED_SCRIPT
    case 0xC09CE2: cpu.execute_instruction<0xAC>(0x000A4A, 3); return true;
    // src/unknown/C0/C09D03.asm:4 BPL @UNKNOWN0
    case 0xC09CE5: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // src/unknown/C0/C09D03.asm:5 SEC
    case 0xC09CE7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C09D03.asm:6 RTS
    case 0xC09CE8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C09D03.asm:8 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09CE9: cpu.execute_instruction<0xB9>(0x001250, 3); return true;
    // src/unknown/C0/C09D03.asm:9 STA LAST_ALLOCATED_SCRIPT
    case 0xC09CEC: cpu.execute_instruction<0x8D>(0x000A4A, 3); return true;
    // src/unknown/C0/C09D03.asm:10 CLC
    case 0xC09CEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09D03.asm:11 RTS
    case 0xC09CF0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09D12.asm (unresolved).
bool execute_unresolved_c0_c09d12_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09D12.asm:3 JSR UNKNOWN_C09D1F
    case 0xC09CF1: cpu.execute_instruction<0x20>(0x009CFE, 3); return true;
    // src/unknown/C0/C09D12.asm:4 LDA LAST_ALLOCATED_SCRIPT
    case 0xC09CF4: cpu.execute_instruction<0xAD>(0x000A4A, 3); return true;
    // src/unknown/C0/C09D12.asm:5 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09CF7: cpu.execute_instruction<0x99>(0x001250, 3); return true;
    // src/unknown/C0/C09D12.asm:6 STY LAST_ALLOCATED_SCRIPT
    case 0xC09CFA: cpu.execute_instruction<0x8C>(0x000A4A, 3); return true;
    // src/unknown/C0/C09D12.asm:7 RTS
    case 0xC09CFD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09D1F.asm (unresolved).
bool execute_unresolved_c0_c09d1f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09D1F.asm:3 PHX
    case 0xC09CFE: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C09D1F.asm:4 JSR UNKNOWN_C09D3E
    case 0xC09CFF: cpu.execute_instruction<0x20>(0x009D1D, 3); return true;
    // src/unknown/C0/C09D1F.asm:5 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09D02: cpu.execute_instruction<0xB9>(0x001250, 3); return true;
    // src/unknown/C0/C09D1F.asm:6 CPX #$FFFF
    case 0xC09D05: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09D1F.asm:6 CPX #$FFFF
    // Overlapping static entry reached from 0xC09D05.
    case 0xC09D07: cpu.execute_instruction<0xFF>(0x9D06F0, 4); return true;
    // src/unknown/C0/C09D1F.asm:7 BEQ @UNKNOWN0
    case 0xC09D08: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C09D1F.asm:8 STA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC09D0A: cpu.execute_instruction<0x9D>(0x001250, 3); return true;
    // src/unknown/C0/C09D1F.asm:8 STA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    // Overlapping static entry reached from 0xC09D07.
    case 0xC09D0B: cpu.execute_instruction<0x50>(0x000012, 2); return true;
    // src/unknown/C0/C09D1F.asm:9 PLX
    case 0xC09D0D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C09D1F.asm:10 BRA @UNKNOWN1
    case 0xC09D0E: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C09D1F.asm:12 PLX
    case 0xC09D10: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C09D1F.asm:13 STA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09D11: cpu.execute_instruction<0x9D>(0x000AD0, 3); return true;
    // src/unknown/C0/C09D1F.asm:15 CPY ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC09D14: cpu.execute_instruction<0xCC>(0x000A4E, 3); return true;
    // src/unknown/C0/C09D1F.asm:16 BNE @UNKNOWN2
    case 0xC09D17: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C09D1F.asm:17 STA ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC09D19: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/unknown/C0/C09D1F.asm:17 STA ACTIONSCRIPT_CURRENT_SCRIPT
    // Overlapping static entry reached from 0xC09877.
    case 0xC09D1A: cpu.execute_instruction<0x4E>(0x00600A, 3); return true;
    // src/unknown/C0/C09D1F.asm:19 RTS
    case 0xC09D1C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09D3E.asm (unresolved).
bool execute_unresolved_c0_c09d3e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09D3E.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC09D1D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C09D3E.asm:4 PHD
    case 0xC09D1F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:5 PHA
    case 0xC09D20: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:6 TDC
    case 0xC09D21: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:7 SEC
    case 0xC09D22: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:8 SBC #$0002
    case 0xC09D23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000002, 2); else cpu.execute_instruction<0xE9>(0x000002, 3); return true;
    // src/unknown/C0/C09D3E.asm:8 SBC #$0002
    // Overlapping static entry reached from 0xC09D23.
    case 0xC09D25: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C09D3E.asm:9 TCD
    case 0xC09D26: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:10 PLA
    case 0xC09D27: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:11 STY $00
    case 0xC09D28: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C0/C09D3E.asm:12 LDY ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09D2A: cpu.execute_instruction<0xBC>(0x000AD0, 3); return true;
    // src/unknown/C0/C09D3E.asm:13 LDX #$FFFF
    case 0xC09D2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09D3E.asm:13 LDX #$FFFF
    // Overlapping static entry reached from 0xC09D2D.
    case 0xC09D2F: cpu.execute_instruction<0xFF>(0xF000C4, 4); return true;
    // src/unknown/C0/C09D3E.asm:15 CPY $00
    case 0xC09D30: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // src/unknown/C0/C09D3E.asm:16 BEQ @UNKNOWN1
    case 0xC09D32: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C09D3E.asm:16 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC09D2F.
    case 0xC09D33: cpu.execute_instruction<0x07>(0x0000BB, 2); return true;
    // src/unknown/C0/C09D3E.asm:17 TYX
    case 0xC09D34: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:18 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09D35: cpu.execute_instruction<0xB9>(0x001250, 3); return true;
    // src/unknown/C0/C09D3E.asm:19 TAY
    case 0xC09D38: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:20 BRA @UNKNOWN0
    case 0xC09D39: cpu.execute_instruction<0x80>(0x0000F5, 2); return true;
    // src/unknown/C0/C09D3E.asm:22 LDY $00
    case 0xC09D3B: cpu.execute_instruction<0xA4>(0x000000, 2); return true;
    // src/unknown/C0/C09D3E.asm:23 PLD
    case 0xC09D3D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:24 RTS
    case 0xC09D3E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09D60.asm (unresolved).
bool execute_unresolved_c0_c09d60_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09D60.asm:3 STY $94
    case 0xC09D3F: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09D60.asm:4 STZ $00
    case 0xC09D41: cpu.execute_instruction<0x64>(0x000000, 2); return true;
    // src/unknown/C0/C09D60.asm:5 LDA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09D43: cpu.execute_instruction<0xBD>(0x000AD0, 3); return true;
    // src/unknown/C0/C09D60.asm:6 CMP $94
    case 0xC09D46: cpu.execute_instruction<0xC5>(0x000094, 2); return true;
    // src/unknown/C0/C09D60.asm:7 BEQ @UNKNOWN1
    case 0xC09D48: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C09D60.asm:9 INC $00
    case 0xC09D4A: cpu.execute_instruction<0xE6>(0x000000, 2); return true;
    // src/unknown/C0/C09D60.asm:10 TAY
    case 0xC09D4C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C09D60.asm:11 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09D4D: cpu.execute_instruction<0xB9>(0x001250, 3); return true;
    // src/unknown/C0/C09D60.asm:12 CMP $94
    case 0xC09D50: cpu.execute_instruction<0xC5>(0x000094, 2); return true;
    // src/unknown/C0/C09D60.asm:12 CMP $94
    // Overlapping static entry reached from 0xC053AA.
    case 0xC09D51: cpu.execute_instruction<0x94>(0x0000D0, 2); return true;
    // src/unknown/C0/C09D60.asm:13 BNE @UNKNOWN0
    case 0xC09D52: cpu.execute_instruction<0xD0>(0x0000F6, 2); return true;
    // src/unknown/C0/C09D60.asm:13 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC09D51.
    case 0xC09D53: cpu.execute_instruction<0xF6>(0x0000A5, 2); return true;
    // src/unknown/C0/C09D60.asm:15 LDA $00
    case 0xC09D54: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C09D60.asm:15 LDA $00
    // Overlapping static entry reached from 0xC09D53.
    case 0xC09D55: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/unknown/C0/C09D60.asm:16 RTS
    case 0xC09D56: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09D78.asm (unresolved).
bool execute_unresolved_c0_c09d78_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09D78.asm:3 LDY ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09D57: cpu.execute_instruction<0xBC>(0x000AD0, 3); return true;
    // src/unknown/C0/C09D78.asm:4 DEC
    case 0xC09D5A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C09D78.asm:5 BMI @UNKNOWN1
    case 0xC09D5B: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/unknown/C0/C09D78.asm:7 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09D5D: cpu.execute_instruction<0xB9>(0x001250, 3); return true;
    // src/unknown/C0/C09D78.asm:8 TAY
    case 0xC09D60: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C09D78.asm:9 DEC
    case 0xC09D61: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C09D78.asm:10 BPL @UNKNOWN0
    case 0xC09D62: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/unknown/C0/C09D78.asm:12 RTS
    case 0xC09D64: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09DAE.asm (unresolved).
bool execute_unresolved_c0_c09dae_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09DAE.asm:3 STZ ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09D8D: cpu.execute_instruction<0x9C>(0x000A42, 3); return true;
    // src/unknown/C0/C09DAE.asm:4 LDA #$003C
    case 0xC09D90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C0/C09DAE.asm:4 LDA #$003C
    // Overlapping static entry reached from 0xC09D90.
    case 0xC09D92: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C09DAE.asm:5 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC09D93: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/unknown/C0/C09DAE.asm:7 LDX $88
    case 0xC09D96: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C09DAE.asm:8 JSR UNKNOWN_C09D99
    case 0xC09D98: cpu.execute_instruction<0x20>(0x009D78, 3); return true;
    // src/unknown/C0/C09DAE.asm:9 STA $96
    case 0xC09D9B: cpu.execute_instruction<0x85>(0x000096, 2); return true;
    // src/unknown/C0/C09DAE.asm:10 JSR UNKNOWN_C09D99
    case 0xC09D9D: cpu.execute_instruction<0x20>(0x009D78, 3); return true;
    // src/unknown/C0/C09DAE.asm:11 CLC
    case 0xC09DA0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:12 ADC ENTITY_SCREEN_X_TABLE,X
    case 0xC09DA1: cpu.execute_instruction<0x7D>(0x000B0C, 3); return true;
    // src/unknown/C0/C09DAE.asm:13 STA $98
    case 0xC09DA4: cpu.execute_instruction<0x85>(0x000098, 2); return true;
    // src/unknown/C0/C09DAE.asm:14 JSR UNKNOWN_C09D99
    case 0xC09DA6: cpu.execute_instruction<0x20>(0x009D78, 3); return true;
    // src/unknown/C0/C09DAE.asm:15 CLC
    case 0xC09DA9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:16 ADC ENTITY_SCREEN_Y_TABLE,X
    case 0xC09DAA: cpu.execute_instruction<0x7D>(0x000B48, 3); return true;
    // src/unknown/C0/C09DAE.asm:17 STA $9A
    case 0xC09DAD: cpu.execute_instruction<0x85>(0x00009A, 2); return true;
    // src/unknown/C0/C09DAE.asm:18 JSR UNKNOWN_C09D99
    case 0xC09DAF: cpu.execute_instruction<0x20>(0x009D78, 3); return true;
    // src/unknown/C0/C09DAE.asm:19 CLC
    case 0xC09DB2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:20 ADC ENTITY_ABS_Z_TABLE,X
    case 0xC09DB3: cpu.execute_instruction<0x7D>(0x000BFC, 3); return true;
    // src/unknown/C0/C09DAE.asm:21 STA NEW_ENTITY_POS_Z
    case 0xC09DB6: cpu.execute_instruction<0x8D>(0x000A3E, 3); return true;
    // src/unknown/C0/C09DAE.asm:22 JSR UNKNOWN_C09D99
    case 0xC09DB9: cpu.execute_instruction<0x20>(0x009D78, 3); return true;
    // src/unknown/C0/C09DAE.asm:23 STA NEW_ENTITY_VAR0
    case 0xC09DBC: cpu.execute_instruction<0x8D>(0x000A2E, 3); return true;
    // src/unknown/C0/C09DAE.asm:24 JSR UNKNOWN_C09D99
    case 0xC09DBF: cpu.execute_instruction<0x20>(0x009D78, 3); return true;
    // src/unknown/C0/C09DAE.asm:25 CLC
    case 0xC09DC2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:26 ADC ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC09DC3: cpu.execute_instruction<0x7D>(0x000E90, 3); return true;
    // src/unknown/C0/C09DAE.asm:27 STA NEW_ENTITY_VAR1
    case 0xC09DC6: cpu.execute_instruction<0x8D>(0x000A30, 3); return true;
    // src/unknown/C0/C09DAE.asm:28 STX NEW_ENTITY_VAR2
    case 0xC09DC9: cpu.execute_instruction<0x8E>(0x000A32, 3); return true;
    // src/unknown/C0/C09DAE.asm:29 STZ NEW_ENTITY_VAR3
    case 0xC09DCC: cpu.execute_instruction<0x9C>(0x000A34, 3); return true;
    // src/unknown/C0/C09DAE.asm:30 STZ NEW_ENTITY_VAR4
    case 0xC09DCF: cpu.execute_instruction<0x9C>(0x000A36, 3); return true;
    // src/unknown/C0/C09DAE.asm:31 STZ NEW_ENTITY_VAR5
    case 0xC09DD2: cpu.execute_instruction<0x9C>(0x000A38, 3); return true;
    // src/unknown/C0/C09DAE.asm:32 STZ NEW_ENTITY_VAR6
    case 0xC09DD5: cpu.execute_instruction<0x9C>(0x000A3A, 3); return true;
    // src/unknown/C0/C09DAE.asm:33 STZ NEW_ENTITY_VAR7
    case 0xC09DD8: cpu.execute_instruction<0x9C>(0x000A3C, 3); return true;
    // src/unknown/C0/C09DAE.asm:34 STY $94
    case 0xC09DDB: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09DAE.asm:35 LDY $9A
    case 0xC09DDD: cpu.execute_instruction<0xA4>(0x00009A, 2); return true;
    // src/unknown/C0/C09DAE.asm:36 LDX $98
    case 0xC09DDF: cpu.execute_instruction<0xA6>(0x000098, 2); return true;
    // src/unknown/C0/C09DAE.asm:37 LDA $96
    case 0xC09DE1: cpu.execute_instruction<0xA5>(0x000096, 2); return true;
    // src/unknown/C0/C09DAE.asm:38 AND #$7FFF
    case 0xC09DE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C09DAE.asm:38 AND #$7FFF
    // Overlapping static entry reached from 0xC09DE3.
    case 0xC09DE5: cpu.execute_instruction<0x7F>(0x93004C, 4); return true;
    // src/unknown/C0/C09DAE.asm:39 JMP INIT_ENTITY
    case 0xC09DE6: cpu.execute_instruction<0x4C>(0x009300, 3); return true;
    // src/unknown/C0/C09DAE.asm:40 JSR UNKNOWN_C09D8D
    case 0xC09DE9: cpu.execute_instruction<0x20>(0x009D6C, 3); return true;
    // src/unknown/C0/C09DAE.asm:41 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09DEC: cpu.execute_instruction<0x8D>(0x000A42, 3); return true;
    // src/unknown/C0/C09DAE.asm:42 JSR UNKNOWN_C09D8D
    case 0xC09DEF: cpu.execute_instruction<0x20>(0x009D6C, 3); return true;
    // src/unknown/C0/C09DAE.asm:43 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC09DF2: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/unknown/C0/C09DAE.asm:44 BRA @UNKNOWN0
    case 0xC09DF5: cpu.execute_instruction<0x80>(0x00009F, 2); return true;
    // src/unknown/C0/C09DAE.asm:45 JSR UNKNOWN_C09D8D
    case 0xC09DF7: cpu.execute_instruction<0x20>(0x009D6C, 3); return true;
    // src/unknown/C0/C09DAE.asm:46 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09DFA: cpu.execute_instruction<0x8D>(0x000A42, 3); return true;
    // src/unknown/C0/C09DAE.asm:47 INC
    case 0xC09DFD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:48 INC
    case 0xC09DFE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:49 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC09DFF: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/unknown/C0/C09DAE.asm:50 BRA @UNKNOWN0
    case 0xC09E02: cpu.execute_instruction<0x80>(0x000092, 2); return true;
    // src/unknown/C0/C09DAE.asm:51 JSR UNKNOWN_C09D8D
    case 0xC09E04: cpu.execute_instruction<0x20>(0x009D6C, 3); return true;
    // src/unknown/C0/C09DAE.asm:52 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09E07: cpu.execute_instruction<0x8D>(0x000A42, 3); return true;
    // src/unknown/C0/C09DAE.asm:53 TAX
    case 0xC09E0A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:54 INC
    case 0xC09E0B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:55 INC
    case 0xC09E0C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:56 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC09E0D: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/unknown/C0/C09DAE.asm:57 STY $94
    case 0xC09E10: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09DAE.asm:58 JSR UNKNOWN_C09C3B
    case 0xC09E12: cpu.execute_instruction<0x20>(0x009C1A, 3); return true;
    // src/unknown/C0/C09DAE.asm:59 LDY $94
    case 0xC09E15: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/unknown/C0/C09DAE.asm:60 JMP @UNKNOWN0
    case 0xC09E17: cpu.execute_instruction<0x4C>(0x009D96, 3); return true;
    // src/unknown/C0/C09DAE.asm:61 STZ ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09E1A: cpu.execute_instruction<0x9C>(0x000A42, 3); return true;
    // src/unknown/C0/C09DAE.asm:62 LDA #$003C
    case 0xC09E1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C0/C09DAE.asm:62 LDA #$003C
    // Overlapping static entry reached from 0xC09E1D.
    case 0xC09E1F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C09DAE.asm:63 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC09E20: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/unknown/C0/C09DAE.asm:64 STZ NEW_ENTITY_VAR1
    case 0xC09E23: cpu.execute_instruction<0x9C>(0x000A30, 3); return true;
    // src/unknown/C0/C09DAE.asm:65 STZ NEW_ENTITY_VAR3
    case 0xC09E26: cpu.execute_instruction<0x9C>(0x000A34, 3); return true;
    // src/unknown/C0/C09DAE.asm:66 STZ NEW_ENTITY_VAR4
    case 0xC09E29: cpu.execute_instruction<0x9C>(0x000A36, 3); return true;
    // src/unknown/C0/C09DAE.asm:67 STZ NEW_ENTITY_VAR5
    case 0xC09E2C: cpu.execute_instruction<0x9C>(0x000A38, 3); return true;
    // src/unknown/C0/C09DAE.asm:68 STZ NEW_ENTITY_VAR6
    case 0xC09E2F: cpu.execute_instruction<0x9C>(0x000A3A, 3); return true;
    // src/unknown/C0/C09DAE.asm:69 STZ NEW_ENTITY_VAR7
    case 0xC09E32: cpu.execute_instruction<0x9C>(0x000A3C, 3); return true;
    // src/unknown/C0/C09DAE.asm:70 STZ NEW_ENTITY_POS_Z
    case 0xC09E35: cpu.execute_instruction<0x9C>(0x000A3E, 3); return true;
    // src/unknown/C0/C09DAE.asm:71 JSR UNKNOWN_C09D99
    case 0xC09E38: cpu.execute_instruction<0x20>(0x009D78, 3); return true;
    // src/unknown/C0/C09DAE.asm:72 TAX
    case 0xC09E3B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:73 JSR UNKNOWN_C09D99
    case 0xC09E3C: cpu.execute_instruction<0x20>(0x009D78, 3); return true;
    // src/unknown/C0/C09DAE.asm:74 STY $94
    case 0xC09E3F: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09DAE.asm:75 STA NEW_ENTITY_VAR0
    case 0xC09E41: cpu.execute_instruction<0x8D>(0x000A2E, 3); return true;
    // src/unknown/C0/C09DAE.asm:76 LDA $88
    case 0xC09E44: cpu.execute_instruction<0xA5>(0x000088, 2); return true;
    // src/unknown/C0/C09DAE.asm:77 STA NEW_ENTITY_VAR2
    case 0xC09E46: cpu.execute_instruction<0x8D>(0x000A32, 3); return true;
    // src/unknown/C0/C09DAE.asm:78 TXA
    case 0xC09E49: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:79 AND #$7FFF
    case 0xC09E4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C09DAE.asm:79 AND #$7FFF
    // Overlapping static entry reached from 0xC09E4A.
    case 0xC09E4C: cpu.execute_instruction<0x7F>(0x93004C, 4); return true;
    // src/unknown/C0/C09DAE.asm:80 JMP INIT_ENTITY
    case 0xC09E4D: cpu.execute_instruction<0x4C>(0x009300, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09E71.asm (unresolved).
bool execute_unresolved_c0_c09e71_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09E71.asm:3 JSR UNKNOWN_C09D99
    case 0xC09E50: cpu.execute_instruction<0x20>(0x009D78, 3); return true;
    // src/unknown/C0/C09E71.asm:4 STY $94
    case 0xC09E53: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09E71.asm:5 JMP INIT_ENTITY_WIPE
    case 0xC09E55: cpu.execute_instruction<0x4C>(0x0092D4, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09E79.asm (unresolved).
bool execute_unresolved_c0_c09e79_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09E79.asm:3 JSR UNKNOWN_C09D8D
    case 0xC09E58: cpu.execute_instruction<0x20>(0x009D6C, 3); return true;
    // src/unknown/C0/C09E79.asm:4 STY $94
    case 0xC09E5B: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09E79.asm:5 ASL
    case 0xC09E5D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09E79.asm:6 TAX
    case 0xC09E5E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09E79.asm:7 LDA ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09E5F: cpu.execute_instruction<0xBD>(0x009AD8, 3); return true;
    // src/unknown/C0/C09E79.asm:8 CLC
    case 0xC09E62: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09E79.asm:9 ADC $88
    case 0xC09E63: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/unknown/C0/C09E79.asm:10 TAX
    case 0xC09E65: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09E79.asm:11 LDA __BSS_START__,X
    case 0xC09E66: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C09E79.asm:12 TAX
    case 0xC09E69: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09E79.asm:13 JMP UNKNOWN_C09C3B
    case 0xC09E6A: cpu.execute_instruction<0x4C>(0x009C1A, 3); return true;
    // src/unknown/C0/C09E79.asm:14 JSR UNKNOWN_C09D8D
    case 0xC09E6D: cpu.execute_instruction<0x20>(0x009D6C, 3); return true;
    // src/unknown/C0/C09E79.asm:15 STY $94
    case 0xC09E70: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09E79.asm:16 TAX
    case 0xC09E72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09E79.asm:17 JSR UNKNOWN_C09C3B
    case 0xC09E73: cpu.execute_instruction<0x20>(0x009C1A, 3); return true;
    // src/unknown/C0/C09E79.asm:18 RTL
    case 0xC09E76: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09E98.asm (unresolved).
bool execute_unresolved_c0_c09e98_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09E98.asm:3 LDX FIRST_ENTITY
    case 0xC09E77: cpu.execute_instruction<0xAE>(0x000A46, 3); return true;
    // src/unknown/C0/C09E98.asm:5 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09E7A: cpu.execute_instruction<0xBD>(0x000A94, 3); return true;
    // src/unknown/C0/C09E98.asm:6 STA $96
    case 0xC09E7D: cpu.execute_instruction<0x85>(0x000096, 2); return true;
    // src/unknown/C0/C09E98.asm:7 CPX $88
    case 0xC09E7F: cpu.execute_instruction<0xE4>(0x000088, 2); return true;
    // src/unknown/C0/C09E98.asm:8 BEQ @UNKNOWN1
    case 0xC09E81: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C09E98.asm:9 JSR UNKNOWN_C09C3B
    case 0xC09E83: cpu.execute_instruction<0x20>(0x009C1A, 3); return true;
    // src/unknown/C0/C09E98.asm:11 LDX $96
    case 0xC09E86: cpu.execute_instruction<0xA6>(0x000096, 2); return true;
    // src/unknown/C0/C09E98.asm:12 BPL @UNKNOWN0
    case 0xC09E88: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/unknown/C0/C09E98.asm:13 RTL
    case 0xC09E8A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09EAC.asm (unresolved).
bool execute_unresolved_c0_c09eac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09EAC.asm:3 JSR UNKNOWN_C09D99
    case 0xC09E8B: cpu.execute_instruction<0x20>(0x009D78, 3); return true;
    // src/unknown/C0/C09EAC.asm:4 STY $94
    case 0xC09E8E: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09EAC.asm:5 LDX FIRST_ENTITY
    case 0xC09E90: cpu.execute_instruction<0xAE>(0x000A46, 3); return true;
    // src/unknown/C0/C09EAC.asm:7 LDY ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09E93: cpu.execute_instruction<0xBC>(0x000A94, 3); return true;
    // src/unknown/C0/C09EAC.asm:8 STY $96
    case 0xC09E96: cpu.execute_instruction<0x84>(0x000096, 2); return true;
    // src/unknown/C0/C09EAC.asm:9 CMP ENTITY_SCRIPT_TABLE,X
    case 0xC09E98: cpu.execute_instruction<0xDD>(0x000A58, 3); return true;
    // src/unknown/C0/C09EAC.asm:10 BNE @UNKNOWN1
    case 0xC09E9B: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C09EAC.asm:11 CPX $88
    case 0xC09E9D: cpu.execute_instruction<0xE4>(0x000088, 2); return true;
    // src/unknown/C0/C09EAC.asm:12 BEQ @UNKNOWN1
    case 0xC09E9F: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C09EAC.asm:13 STA $98
    case 0xC09EA1: cpu.execute_instruction<0x85>(0x000098, 2); return true;
    // src/unknown/C0/C09EAC.asm:14 JSR UNKNOWN_C09C3B
    case 0xC09EA3: cpu.execute_instruction<0x20>(0x009C1A, 3); return true;
    // src/unknown/C0/C09EAC.asm:15 LDA $98
    case 0xC09EA6: cpu.execute_instruction<0xA5>(0x000098, 2); return true;
    // src/unknown/C0/C09EAC.asm:17 LDX $96
    case 0xC09EA8: cpu.execute_instruction<0xA6>(0x000096, 2); return true;
    // src/unknown/C0/C09EAC.asm:18 BPL @UNKNOWN0
    case 0xC09EAA: cpu.execute_instruction<0x10>(0x0000E7, 2); return true;
    // src/unknown/C0/C09EAC.asm:19 RTL
    case 0xC09EAC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09ECE.asm (unresolved).
bool execute_unresolved_c0_c09ece_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09ECE.asm:3 JSR UNKNOWN_C09D8D
    case 0xC09EAD: cpu.execute_instruction<0x20>(0x009D6C, 3); return true;
    // src/unknown/C0/C09ECE.asm:4 TAX
    case 0xC09EB0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:5 JSR UNKNOWN_C09D99
    case 0xC09EB1: cpu.execute_instruction<0x20>(0x009D78, 3); return true;
    // src/unknown/C0/C09ECE.asm:6 PHA
    case 0xC09EB4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:7 JSR UNKNOWN_C09D8D
    case 0xC09EB5: cpu.execute_instruction<0x20>(0x009D6C, 3); return true;
    // src/unknown/C0/C09ECE.asm:8 STY $94
    case 0xC09EB8: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09ECE.asm:9 TAY
    case 0xC09EBA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:10 PLA
    case 0xC09EBB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:11 JMP INIT_ENTITY_UNKNOWN2
    case 0xC09EBC: cpu.execute_instruction<0x4C>(0x0093E2, 3); return true;
    // src/unknown/C0/C09ECE.asm:12 LDX CURRENT_ENTITY_OFFSET
    case 0xC09EBF: cpu.execute_instruction<0xAE>(0x001A3A, 3); return true;
    // src/unknown/C0/C09ECE.asm:13 BRA @UNKNOWN0
    case 0xC09EC2: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C09ECE.asm:14 LDX $88
    case 0xC09EC4: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C09ECE.asm:15 BRA @UNKNOWN0
    case 0xC09EC6: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C09ECE.asm:16 ASL
    case 0xC09EC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:17 TAX
    case 0xC09EC9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:19 LDY #$0000
    case 0xC09ECA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C09ECE.asm:19 LDY #$0000
    // Overlapping static entry reached from 0xC09ECA.
    case 0xC09ECC: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C0/C09ECE.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC09ECD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C09ECE.asm:21 LDA ENTITY_SCREEN_X_TABLE+1,X
    case 0xC09ECF: cpu.execute_instruction<0xBD>(0x000B0D, 3); return true;
    // src/unknown/C0/C09ECE.asm:22 BNE @UNKNOWN1
    case 0xC09ED2: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C09ECE.asm:23 LDA ENTITY_SCREEN_Y_TABLE+1,X
    case 0xC09ED4: cpu.execute_instruction<0xBD>(0x000B49, 3); return true;
    // src/unknown/C0/C09ECE.asm:24 BNE @UNKNOWN1
    case 0xC09ED7: cpu.execute_instruction<0xD0>(0x000001, 2); return true;
    // src/unknown/C0/C09ECE.asm:25 DEY
    case 0xC09ED9: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC09EDA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C09ECE.asm:28 TYA
    case 0xC09EDC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:29 RTL
    case 0xC09EDD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09EFF.asm (unresolved).
bool execute_unresolved_c0_c09eff_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09EFF.asm:3 LDX CURRENT_ENTITY_OFFSET
    case 0xC09EDE: cpu.execute_instruction<0xAE>(0x001A3A, 3); return true;
    // src/unknown/C0/C09EFF.asm:4 BRA UNKNOWN_C09EFF_UNKNOWN0
    case 0xC09EE1: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C09EFF.asm:5 LDX $88
    case 0xC09EE3: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C09EFF.asm:6 BRA UNKNOWN_C09EFF_UNKNOWN0
    case 0xC09EE5: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C09EFF.asm:8 ASL
    case 0xC09EE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:9 TAX
    case 0xC09EE8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:11 LDY #$0000
    case 0xC09EE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C09EFF.asm:11 LDY #$0000
    // Overlapping static entry reached from 0xC09EE9.
    case 0xC09EEB: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/unknown/C0/C09EFF.asm:12 LDA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC09EEC: cpu.execute_instruction<0xBD>(0x000C38, 3); return true;
    // src/unknown/C0/C09EFF.asm:13 CLC
    case 0xC09EEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:14 ADC ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC09EF0: cpu.execute_instruction<0x7D>(0x000DA0, 3); return true;
    // src/unknown/C0/C09EFF.asm:15 LDA ENTITY_ABS_X_TABLE,X
    case 0xC09EF3: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C09EFF.asm:16 ADC ENTITY_DELTA_X_TABLE,X
    case 0xC09EF6: cpu.execute_instruction<0x7D>(0x000CEC, 3); return true;
    // src/unknown/C0/C09EFF.asm:17 STA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC09EF9: cpu.execute_instruction<0x8D>(0x002C48, 3); return true;
    // src/unknown/C0/C09EFF.asm:18 CMP ENTITY_ABS_X_TABLE,X
    case 0xC09EFC: cpu.execute_instruction<0xDD>(0x000B84, 3); return true;
    // src/unknown/C0/C09EFF.asm:19 BEQ UNKNOWN_C09EFF_UNKNOWN1
    case 0xC09EFF: cpu.execute_instruction<0xF0>(0x000001, 2); return true;
    // src/unknown/C0/C09EFF.asm:20 INY
    case 0xC09F01: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:22 LDA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC09F02: cpu.execute_instruction<0xBD>(0x000C74, 3); return true;
    // src/unknown/C0/C09EFF.asm:23 CLC
    case 0xC09F05: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:24 ADC ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC09F06: cpu.execute_instruction<0x7D>(0x000DDC, 3); return true;
    // src/unknown/C0/C09EFF.asm:24 ADC ENTITY_DELTA_Y_FRACTION_TABLE,X
    // Overlapping static entry reached from 0xC09F48.
    case 0xC09F07: cpu.execute_instruction<0xDC>(0x00BD0D, 3); return true;
    // src/unknown/C0/C09EFF.asm:25 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC09F09: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C09EFF.asm:26 ADC ENTITY_DELTA_Y_TABLE,X
    case 0xC09F0C: cpu.execute_instruction<0x7D>(0x000D28, 3); return true;
    // src/unknown/C0/C09EFF.asm:27 STA ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC09F0F: cpu.execute_instruction<0x8D>(0x002C4A, 3); return true;
    // src/unknown/C0/C09EFF.asm:28 CMP ENTITY_ABS_Y_TABLE,X
    case 0xC09F12: cpu.execute_instruction<0xDD>(0x000BC0, 3); return true;
    // src/unknown/C0/C09EFF.asm:29 BEQ UNKNOWN_C09EFF_UNKNOWN2
    case 0xC09F15: cpu.execute_instruction<0xF0>(0x000001, 2); return true;
    // src/unknown/C0/C09EFF.asm:30 INY
    case 0xC09F17: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:32 TYA
    case 0xC09F18: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:33 RTL
    case 0xC09F19: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09F3B.asm (unresolved).
bool execute_unresolved_c0_c09f3b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09F3B.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC09F1A: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C09F3B.asm:4 LDA #$FFFF
    case 0xC09F1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09F3B.asm:4 LDA #$FFFF
    // Overlapping static entry reached from 0xC09F1C.
    case 0xC09F1E: cpu.execute_instruction<0xFF>(0x1A3A8D, 4); return true;
    // src/unknown/C0/C09F3B.asm:5 STA CURRENT_ENTITY_OFFSET
    case 0xC09F1F: cpu.execute_instruction<0x8D>(0x001A3A, 3); return true;
    // src/unknown/C0/C09F3B.asm:7 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC09F22: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C09F3B.asm:8 PHA
    case 0xC09F24: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C09F3B.asm:9 LDX #$0000
    case 0xC09F25: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C09F3B.asm:9 LDX #$0000
    // Overlapping static entry reached from 0xC09F25.
    case 0xC09F27: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/unknown/C0/C09F3B.asm:11 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09F28: cpu.execute_instruction<0xBD>(0x0010AC, 3); return true;
    // src/unknown/C0/C09F3B.asm:12 STA ENTITY_CALLBACK_FLAGS_BACKUP,X
    case 0xC09F2B: cpu.execute_instruction<0x9D>(0x002C4C, 3); return true;
    // src/unknown/C0/C09F3B.asm:13 INX
    case 0xC09F2E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C09F3B.asm:14 INX
    case 0xC09F2F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C09F3B.asm:15 CPX #$003C
    case 0xC09F30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00003C, 2); else cpu.execute_instruction<0xE0>(0x00003C, 3); return true;
    // src/unknown/C0/C09F3B.asm:15 CPX #$003C
    // Overlapping static entry reached from 0xC09F30.
    case 0xC09F32: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C09F3B.asm:16 BNE @UNKNOWN0
    case 0xC09F33: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/unknown/C0/C09F3B.asm:17 PLA
    case 0xC09F35: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C09F3B.asm:18 LDX FIRST_ENTITY
    case 0xC09F36: cpu.execute_instruction<0xAE>(0x000A46, 3); return true;
    // src/unknown/C0/C09F3B.asm:19 BMI @UNKNOWN3
    case 0xC09F39: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/unknown/C0/C09F3B.asm:21 CPX CURRENT_ENTITY_OFFSET
    case 0xC09F3B: cpu.execute_instruction<0xEC>(0x001A3A, 3); return true;
    // src/unknown/C0/C09F3B.asm:22 BEQ @UNKNOWN2
    case 0xC09F3E: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C09F3B.asm:23 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09F40: cpu.execute_instruction<0xBD>(0x0010AC, 3); return true;
    // src/unknown/C0/C09F3B.asm:24 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC09F43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C09F3B.asm:24 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC09F43.
    case 0xC09F45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00AC9D, 3); return true;
    // src/unknown/C0/C09F3B.asm:25 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09F46: cpu.execute_instruction<0x9D>(0x0010AC, 3); return true;
    // src/unknown/C0/C09F3B.asm:25 STA ENTITY_TICK_CALLBACK_HIGH,X
    // Overlapping static entry reached from 0xC09F45.
    case 0xC09F47: cpu.execute_instruction<0xAC>(0x00BD10, 3); return true;
    // src/unknown/C0/C09F3B.asm:25 STA ENTITY_TICK_CALLBACK_HIGH,X
    // Overlapping static entry reached from 0xC09F45.
    case 0xC09F48: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C0/C09F3B.asm:27 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09F49: cpu.execute_instruction<0xBD>(0x000A94, 3); return true;
    // src/unknown/C0/C09F3B.asm:27 LDA ENTITY_NEXT_ENTITY_TABLE,X
    // Overlapping static entry reached from 0xC09F48.
    case 0xC09F4A: cpu.execute_instruction<0x94>(0x00000A, 2); return true;
    // src/unknown/C0/C09F3B.asm:28 TAX
    case 0xC09F4C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09F3B.asm:29 BPL @UNKNOWN1
    case 0xC09F4D: cpu.execute_instruction<0x10>(0x0000EC, 2); return true;
    // src/unknown/C0/C09F3B.asm:31 RTL
    case 0xC09F4F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09F71.asm (unresolved).
bool execute_unresolved_c0_c09f71_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09F71.asm:3 LDX #$0000
    case 0xC09F50: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C09F71.asm:3 LDX #$0000
    // Overlapping static entry reached from 0xC09F50.
    case 0xC09F52: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/unknown/C0/C09F71.asm:5 LDA ENTITY_CALLBACK_FLAGS_BACKUP,X
    case 0xC09F53: cpu.execute_instruction<0xBD>(0x002C4C, 3); return true;
    // src/unknown/C0/C09F71.asm:6 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09F56: cpu.execute_instruction<0x9D>(0x0010AC, 3); return true;
    // src/unknown/C0/C09F71.asm:7 INX
    case 0xC09F59: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C09F71.asm:8 INX
    case 0xC09F5A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C09F71.asm:9 CPX #30*2
    case 0xC09F5B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00003C, 2); else cpu.execute_instruction<0xE0>(0x00003C, 3); return true;
    // src/unknown/C0/C09F71.asm:9 CPX #30*2
    // Overlapping static entry reached from 0xC09F5B.
    case 0xC09F5D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C09F71.asm:10 BNE @UNKNOWN0
    case 0xC09F5E: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/unknown/C0/C09F71.asm:11 RTL
    case 0xC09F60: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09FA8.asm (unresolved).
bool execute_unresolved_c0_c09fa8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09FA8.asm:3 JSL RAND
    case 0xC09F87: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C0/C09FA8.asm:4 XBA
    case 0xC09F8B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C09FA8.asm:5 RTL
    case 0xC09F8C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09FAE.asm (unresolved).
bool execute_unresolved_c0_c09fae_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09FAE.asm:3 LDX $88
    case 0xC09FA7: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C09FAE.asm:5 LDA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC09FA9: cpu.execute_instruction<0xBD>(0x000C38, 3); return true;
    // src/unknown/C0/C09FAE.asm:6 CLC
    case 0xC09FAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09FAE.asm:7 ADC ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC09FAD: cpu.execute_instruction<0x7D>(0x000DA0, 3); return true;
    // src/unknown/C0/C09FAE.asm:8 STA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC09FB0: cpu.execute_instruction<0x9D>(0x000C38, 3); return true;
    // src/unknown/C0/C09FAE.asm:9 LDA ENTITY_ABS_X_TABLE,X
    case 0xC09FB3: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C09FAE.asm:10 ADC ENTITY_DELTA_X_TABLE,X
    case 0xC09FB6: cpu.execute_instruction<0x7D>(0x000CEC, 3); return true;
    // src/unknown/C0/C09FAE.asm:11 STA ENTITY_ABS_X_TABLE,X
    case 0xC09FB9: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C09FAE.asm:12 LDA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC09FBC: cpu.execute_instruction<0xBD>(0x000C74, 3); return true;
    // src/unknown/C0/C09FAE.asm:13 CLC
    case 0xC09FBF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09FAE.asm:14 ADC ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC09FC0: cpu.execute_instruction<0x7D>(0x000DDC, 3); return true;
    // src/unknown/C0/C09FAE.asm:15 STA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC09FC3: cpu.execute_instruction<0x9D>(0x000C74, 3); return true;
    // src/unknown/C0/C09FAE.asm:16 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC09FC6: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C09FAE.asm:17 ADC ENTITY_DELTA_Y_TABLE,X
    case 0xC09FC9: cpu.execute_instruction<0x7D>(0x000D28, 3); return true;
    // src/unknown/C0/C09FAE.asm:18 STA ENTITY_ABS_Y_TABLE,X
    case 0xC09FCC: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C09FAE.asm:20 RTS
    case 0xC09FCF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09FF1.asm (unresolved).
bool execute_unresolved_c0_c09ff1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09FF1.asm:3 JSR UNKNOWN_C09FAE_ENTRY2
    case 0xC09FD0: cpu.execute_instruction<0x20>(0x009FA7, 3); return true;
    // src/unknown/C0/C09FF1.asm:4 LDA ENTITY_ABS_Z_FRACTION_TABLE,X
    case 0xC09FD3: cpu.execute_instruction<0xBD>(0x000CB0, 3); return true;
    // src/unknown/C0/C09FF1.asm:5 CLC
    case 0xC09FD6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09FF1.asm:6 ADC ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC09FD7: cpu.execute_instruction<0x7D>(0x000E18, 3); return true;
    // src/unknown/C0/C09FF1.asm:7 STA ENTITY_ABS_Z_FRACTION_TABLE,X
    case 0xC09FDA: cpu.execute_instruction<0x9D>(0x000CB0, 3); return true;
    // src/unknown/C0/C09FF1.asm:8 LDA ENTITY_ABS_Z_TABLE,X
    case 0xC09FDD: cpu.execute_instruction<0xBD>(0x000BFC, 3); return true;
    // src/unknown/C0/C09FF1.asm:9 ADC ENTITY_DELTA_Z_TABLE,X
    case 0xC09FE0: cpu.execute_instruction<0x7D>(0x000D64, 3); return true;
    // src/unknown/C0/C09FF1.asm:10 STA ENTITY_ABS_Z_TABLE,X
    case 0xC09FE3: cpu.execute_instruction<0x9D>(0x000BFC, 3); return true;
    // src/unknown/C0/C09FF1.asm:11 JSL UNKNOWN_C0C7DB
    case 0xC09FE6: cpu.execute_instruction<0x22>(0xC0C7BD, 4); return true;
    // src/unknown/C0/C09FF1.asm:12 RTS
    case 0xC09FEA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A00C.asm (unresolved).
bool execute_unresolved_c0_c0a00c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A00C.asm:3 JSR UNKNOWN_C09FAE_ENTRY2
    case 0xC09FEB: cpu.execute_instruction<0x20>(0x009FA7, 3); return true;
    // src/unknown/C0/C0A00C.asm:4 LDA ENTITY_ABS_Z_FRACTION_TABLE,X
    case 0xC09FEE: cpu.execute_instruction<0xBD>(0x000CB0, 3); return true;
    // src/unknown/C0/C0A00C.asm:5 CLC
    case 0xC09FF1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A00C.asm:6 ADC ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC09FF2: cpu.execute_instruction<0x7D>(0x000E18, 3); return true;
    // src/unknown/C0/C0A00C.asm:7 STA ENTITY_ABS_Z_FRACTION_TABLE,X
    case 0xC09FF5: cpu.execute_instruction<0x9D>(0x000CB0, 3); return true;
    // src/unknown/C0/C0A00C.asm:8 LDA ENTITY_ABS_Z_TABLE,X
    case 0xC09FF8: cpu.execute_instruction<0xBD>(0x000BFC, 3); return true;
    // src/unknown/C0/C0A00C.asm:9 ADC ENTITY_DELTA_Z_TABLE,X
    case 0xC09FFB: cpu.execute_instruction<0x7D>(0x000D64, 3); return true;
    // src/unknown/C0/C0A00C.asm:10 STA ENTITY_ABS_Z_TABLE,X
    case 0xC09FFE: cpu.execute_instruction<0x9D>(0x000BFC, 3); return true;
    // src/unknown/C0/C0A00C.asm:11 RTS
    case 0xC0A001: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A023.asm (unresolved).
bool execute_unresolved_c0_c0a023_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A023.asm:3 LDX $88
    case 0xC0A002: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A023.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A004: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0A023.asm:5 SEC
    case 0xC0A007: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A023.asm:6 SBC BG1_X_POS
    case 0xC0A008: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C0A023.asm:7 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A00B: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/unknown/C0/C0A023.asm:8 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A00E: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A023.asm:9 SEC
    case 0xC0A011: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A023.asm:10 SBC BG1_Y_POS
    case 0xC0A012: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C0A023.asm:11 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A015: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/unknown/C0/C0A023.asm:13 RTS
    case 0xC0A018: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A03A.asm (unresolved).
bool execute_unresolved_c0_c0a03a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A03A.asm:3 LDX $88
    case 0xC0A019: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A03A.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A01B: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0A03A.asm:5 SEC
    case 0xC0A01E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A03A.asm:6 SBC BG1_X_POS
    case 0xC0A01F: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C0A03A.asm:7 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A022: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/unknown/C0/C0A03A.asm:8 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A025: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A03A.asm:9 SEC
    case 0xC0A028: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A03A.asm:10 SBC BG1_Y_POS
    case 0xC0A029: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C0A03A.asm:11 SEC
    case 0xC0A02C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A03A.asm:12 SBC ENTITY_ABS_Z_TABLE,X
    case 0xC0A02D: cpu.execute_instruction<0xFD>(0x000BFC, 3); return true;
    // src/unknown/C0/C0A03A.asm:13 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A030: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/unknown/C0/C0A03A.asm:14 RTS
    case 0xC0A033: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A055.asm (unresolved).
bool execute_unresolved_c0_c0a055_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A055.asm:3 LDX $88
    case 0xC0A034: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A055.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A036: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0A055.asm:5 SEC
    case 0xC0A039: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A055.asm:6 SBC BG3_X_POS
    case 0xC0A03A: cpu.execute_instruction<0xED>(0x000039, 3); return true;
    // src/unknown/C0/C0A055.asm:7 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A03D: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/unknown/C0/C0A055.asm:8 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A040: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A055.asm:9 SEC
    case 0xC0A043: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A055.asm:10 SBC BG3_Y_POS
    case 0xC0A044: cpu.execute_instruction<0xED>(0x00003B, 3); return true;
    // src/unknown/C0/C0A055.asm:11 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A047: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/unknown/C0/C0A055.asm:12 RTS
    case 0xC0A04A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A06C.asm (unresolved).
bool execute_unresolved_c0_c0a06c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A06C.asm:3 LDX $88
    case 0xC0A04B: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A06C.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A04D: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0A06C.asm:5 SEC
    case 0xC0A050: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A06C.asm:6 SBC BG3_X_POS
    case 0xC0A051: cpu.execute_instruction<0xED>(0x000039, 3); return true;
    // src/unknown/C0/C0A06C.asm:7 STA ENTITY_ABS_X_TABLE,X
    case 0xC0A054: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C0A06C.asm:8 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A057: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/unknown/C0/C0A06C.asm:9 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A05A: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A06C.asm:10 SEC
    case 0xC0A05D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A06C.asm:11 SBC BG3_Y_POS
    case 0xC0A05E: cpu.execute_instruction<0xED>(0x00003B, 3); return true;
    // src/unknown/C0/C0A06C.asm:12 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0A061: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A06C.asm:13 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A064: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/unknown/C0/C0A06C.asm:14 RTL
    case 0xC0A067: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A089.asm (unresolved).
bool execute_unresolved_c0_c0a089_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A089.asm:3 LDX $88
    case 0xC0A068: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A089.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A06A: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0A089.asm:5 CLC
    case 0xC0A06D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A089.asm:6 ADC BG3_X_POS
    case 0xC0A06E: cpu.execute_instruction<0x6D>(0x000039, 3); return true;
    // src/unknown/C0/C0A089.asm:7 STA ENTITY_ABS_X_TABLE,X
    case 0xC0A071: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C0A089.asm:8 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A074: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A089.asm:9 CLC
    case 0xC0A077: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A089.asm:10 ADC BG3_Y_POS
    case 0xC0A078: cpu.execute_instruction<0x6D>(0x00003B, 3); return true;
    // src/unknown/C0/C0A089.asm:11 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0A07B: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A089.asm:12 RTL
    case 0xC0A07E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A0A0.asm (unresolved).
bool execute_unresolved_c0_c0a0a0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A0A0.asm:3 LDX $88
    case 0xC0A07F: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A0A0.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A081: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0A0A0.asm:5 SEC
    case 0xC0A084: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A0A0.asm:6 SBC BG3_X_POS
    case 0xC0A085: cpu.execute_instruction<0xED>(0x000039, 3); return true;
    // src/unknown/C0/C0A0A0.asm:7 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A088: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/unknown/C0/C0A0A0.asm:8 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A08B: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A0A0.asm:9 SEC
    case 0xC0A08E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A0A0.asm:10 SBC BG3_Y_POS
    case 0xC0A08F: cpu.execute_instruction<0xED>(0x00003B, 3); return true;
    // src/unknown/C0/C0A0A0.asm:11 SEC
    case 0xC0A092: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A0A0.asm:12 SBC ENTITY_ABS_Z_TABLE,X
    case 0xC0A093: cpu.execute_instruction<0xFD>(0x000BFC, 3); return true;
    // src/unknown/C0/C0A0A0.asm:13 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A096: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/unknown/C0/C0A0A0.asm:14 RTS
    case 0xC0A099: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A0BB.asm (unresolved).
bool execute_unresolved_c0_c0a0bb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A0BB.asm:3 LDX $88
    case 0xC0A09A: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A0BB.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A09C: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0A0BB.asm:5 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A09F: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/unknown/C0/C0A0BB.asm:6 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A0A2: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A0BB.asm:7 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A0A5: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/unknown/C0/C0A0BB.asm:8 RTS
    case 0xC0A0A8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A0CA.asm (unresolved).
bool execute_unresolved_c0_c0a0ca_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A0CA.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC0A0A9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A0CA.asm:4 PHD
    case 0xC0A0AB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:5 PHA
    case 0xC0A0AC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:6 TDC
    case 0xC0A0AD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:7 SEC
    case 0xC0A0AE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:8 SBC #$00A0
    case 0xC0A0AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000A0, 2); else cpu.execute_instruction<0xE9>(0x0000A0, 3); return true;
    // src/unknown/C0/C0A0CA.asm:8 SBC #$00A0
    // Overlapping static entry reached from 0xC0A0AF.
    case 0xC0A0B1: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0A0CA.asm:9 AND #$FF00
    case 0xC0A0B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0A0CA.asm:9 AND #$FF00
    // Overlapping static entry reached from 0xC0A0B2.
    case 0xC0A0B4: cpu.execute_instruction<0xFF>(0x30685B, 4); return true;
    // src/unknown/C0/C0A0CA.asm:10 TCD
    case 0xC0A0B5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:11 PLA
    case 0xC0A0B6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:13 BMI @UNKNOWN0
    case 0xC0A0B7: cpu.execute_instruction<0x30>(0x0000FE, 2); return true;
    // src/unknown/C0/C0A0CA.asm:13 BMI @UNKNOWN0
    // Overlapping static entry reached from 0xC0A0B4.
    case 0xC0A0B8: cpu.execute_instruction<0xFE>(0x00AA0A, 3); return true;
    // src/unknown/C0/C0A0CA.asm:14 ASL
    case 0xC0A0B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:15 TAX
    case 0xC0A0BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:16 STX $88
    case 0xC0A0BB: cpu.execute_instruction<0x86>(0x000088, 2); return true;
    // src/unknown/C0/C0A0CA.asm:17 JSR UNKNOWN_C0A0E3
    case 0xC0A0BD: cpu.execute_instruction<0x20>(0x00A0C2, 3); return true;
    // src/unknown/C0/C0A0CA.asm:18 PLD
    case 0xC0A0C0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:19 RTS
    case 0xC0A0C1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A0E3.asm (unresolved).
bool execute_unresolved_c0_c0a0e3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A0E3.asm:3 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC0A0C2: cpu.execute_instruction<0xBD>(0x001160, 3); return true;
    // src/unknown/C0/C0A0E3.asm:4 BMI @UNKNOWN0
    case 0xC0A0C5: cpu.execute_instruction<0x30>(0x000011, 2); return true;
    // src/unknown/C0/C0A0E3.asm:5 BVS @UNKNOWN0
    case 0xC0A0C7: cpu.execute_instruction<0x70>(0x00000F, 2); return true;
    // src/unknown/C0/C0A0E3.asm:6 STA $8E
    case 0xC0A0C9: cpu.execute_instruction<0x85>(0x00008E, 2); return true;
    // src/unknown/C0/C0A0E3.asm:7 LDA ENTITY_SPRITEMAP_POINTER_LOW,X
    case 0xC0A0CB: cpu.execute_instruction<0xBD>(0x001124, 3); return true;
    // src/unknown/C0/C0A0E3.asm:8 STA $8C
    case 0xC0A0CE: cpu.execute_instruction<0x85>(0x00008C, 2); return true;
    // src/unknown/C0/C0A0E3.asm:9 LDA ENTITY_ANIMATION_FRAME,X
    case 0xC0A0D0: cpu.execute_instruction<0xBD>(0x0010E8, 3); return true;
    // src/unknown/C0/C0A0E3.asm:10 BMI @UNKNOWN0
    case 0xC0A0D3: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C0/C0A0E3.asm:11 JMP (.LOWORD(ENTITY_DRAW_CALLBACK),X)
    case 0xC0A0D5: cpu.execute_instruction<0x7C>(0x0011D8, 3); return true;
    // src/unknown/C0/C0A0E3.asm:13 RTS
    case 0xC0A0D8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A0FA.asm (unresolved).
bool execute_unresolved_c0_c0a0fa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A0FA.asm:3 ASL
    case 0xC0A0D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A0FA.asm:4 TAY
    case 0xC0A0DA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A0FA.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A0DB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0A0FA.asm:6 LDA $8E
    case 0xC0A0DD: cpu.execute_instruction<0xA5>(0x00008E, 2); return true;
    // src/unknown/C0/C0A0FA.asm:7 STA SPRITEMAP_BANK
    case 0xC0A0DF: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C0A0FA.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC0A0E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A0FA.asm:9 LDA [$8C],Y
    case 0xC0A0E4: cpu.execute_instruction<0xB7>(0x00008C, 2); return true;
    // src/unknown/C0/C0A0FA.asm:10 STA $96
    case 0xC0A0E6: cpu.execute_instruction<0x85>(0x000096, 2); return true;
    // src/unknown/C0/C0A0FA.asm:11 LDA ENTITY_DRAW_PRIORITY,X
    case 0xC0A0E8: cpu.execute_instruction<0xBD>(0x001034, 3); return true;
    // src/unknown/C0/C0A0FA.asm:12 STA CURRENT_SPRITE_DRAWING_PRIORITY
    case 0xC0A0EB: cpu.execute_instruction<0x8D>(0x002800, 3); return true;
    // src/unknown/C0/C0A0FA.asm:13 LDY ENTITY_ABS_Y_TABLE,X
    case 0xC0A0EE: cpu.execute_instruction<0xBC>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A0FA.asm:14 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A0F1: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0A0FA.asm:15 TAX
    case 0xC0A0F4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A0FA.asm:16 LDA $96
    case 0xC0A0F5: cpu.execute_instruction<0xA5>(0x000096, 2); return true;
    // src/unknown/C0/C0A0FA.asm:17 JMP UNKNOWN_C08C58
    case 0xC0A0F7: cpu.execute_instruction<0x4C>(0x008C49, 3); return true;
    // src/unknown/C0/C0A0FA.asm:18 RTS
    case 0xC0A0FA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A156.asm (unresolved).
bool execute_unresolved_c0_c0a156_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A156.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC0A135: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A156.asm:4 PHD
    case 0xC0A137: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:5 PHA
    case 0xC0A138: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:6 TDC
    case 0xC0A139: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:7 SEC
    case 0xC0A13A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:8 SBC #$000A
    case 0xC0A13B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/unknown/C0/C0A156.asm:8 SBC #$000A
    // Overlapping static entry reached from 0xC0A13B.
    case 0xC0A13D: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C0A156.asm:9 TCD
    case 0xC0A13E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:10 PLA
    case 0xC0A13F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:11 STA $00
    case 0xC0A140: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0A156.asm:12 STX $02
    case 0xC0A142: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0A156.asm:13 ORA $02
    case 0xC0A144: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0A156.asm:14 BPL @UNKNOWN0
    case 0xC0A146: cpu.execute_instruction<0x10>(0x000005, 2); return true;
    // src/unknown/C0/C0A156.asm:15 LDA #$FFFF
    case 0xC0A148: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A156.asm:15 LDA #$FFFF
    // Overlapping static entry reached from 0xC0A148.
    case 0xC0A14A: cpu.execute_instruction<0xFF>(0xA5602B, 4); return true;
    // src/unknown/C0/C0A156.asm:16 PLD
    case 0xC0A14B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:17 RTS
    case 0xC0A14C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:19 LDA $00
    case 0xC0A14D: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C0A156.asm:19 LDA $00
    // Overlapping static entry reached from 0xC0A14A.
    case 0xC0A14E: cpu.execute_instruction<0x00>(0x0000CD, 2); return true;
    // src/unknown/C0/C0A156.asm:20 CMP CACHED_MAP_BLOCK_X
    case 0xC0A14F: cpu.execute_instruction<0xCD>(0x002C88, 3); return true;
    // src/unknown/C0/C0A156.asm:21 BNE @UNKNOWN1
    case 0xC0A152: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C0/C0A156.asm:22 CPX CACHED_MAP_BLOCK_Y
    case 0xC0A154: cpu.execute_instruction<0xEC>(0x002C8A, 3); return true;
    // src/unknown/C0/C0A156.asm:23 BNE @UNKNOWN1
    case 0xC0A157: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0A156.asm:24 LDA CACHED_MAP_BLOCK_ID
    case 0xC0A159: cpu.execute_instruction<0xAD>(0x002C8C, 3); return true;
    // src/unknown/C0/C0A156.asm:25 PLD
    case 0xC0A15C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:26 RTS
    case 0xC0A15D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:28 STA CACHED_MAP_BLOCK_X
    case 0xC0A15E: cpu.execute_instruction<0x8D>(0x002C88, 3); return true;
    // src/unknown/C0/C0A156.asm:29 STX CACHED_MAP_BLOCK_Y
    case 0xC0A161: cpu.execute_instruction<0x8E>(0x002C8A, 3); return true;
    // src/unknown/C0/C0A156.asm:30 TXA
    case 0xC0A164: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:31 LSR
    case 0xC0A165: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:32 LSR
    case 0xC0A166: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:33 LSR
    case 0xC0A167: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:34 XBA
    case 0xC0A168: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:35 ORA $00
    case 0xC0A169: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C0/C0A156.asm:36 TAY
    case 0xC0A16B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:37 LDA #.HIWORD(MAP_DATA_TILE_TABLE_CHUNK_9)
    case 0xC0A16C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x0000D7, 3); return true;
    // src/unknown/C0/C0A156.asm:37 LDA #.HIWORD(MAP_DATA_TILE_TABLE_CHUNK_9)
    // Overlapping static entry reached from 0xC0A16C.
    case 0xC0A16E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0A156.asm:38 STA $06
    case 0xC0A16F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0A156.asm:39 LDX #.LOWORD(MAP_DATA_TILE_TABLE_CHUNK_9)
    case 0xC0A171: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005000, 3); return true;
    // src/unknown/C0/C0A156.asm:39 LDX #.LOWORD(MAP_DATA_TILE_TABLE_CHUNK_9)
    // Overlapping static entry reached from 0xC0A171.
    case 0xC0A173: cpu.execute_instruction<0x50>(0x0000A5, 2); return true;
    // src/unknown/C0/C0A156.asm:40 LDA $02
    case 0xC0A174: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0A156.asm:40 LDA $02
    // Overlapping static entry reached from 0xC0A173.
    case 0xC0A175: cpu.execute_instruction<0x02>(0x000029, 2); return true;
    // src/unknown/C0/C0A156.asm:41 AND #$0004
    case 0xC0A176: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/unknown/C0/C0A156.asm:41 AND #$0004
    // Overlapping static entry reached from 0xC0A176.
    case 0xC0A178: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A156.asm:42 BEQ @UNKNOWN2
    case 0xC0A179: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0A156.asm:43 LDX #.LOWORD(MAP_DATA_TILE_TABLE_CHUNK_10)
    case 0xC0A17B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x008000, 3); return true;
    // src/unknown/C0/C0A156.asm:43 LDX #.LOWORD(MAP_DATA_TILE_TABLE_CHUNK_10)
    // Overlapping static entry reached from 0xC0A17B.
    case 0xC0A17D: cpu.execute_instruction<0x80>(0x000086, 2); return true;
    // src/unknown/C0/C0A156.asm:45 STX $04
    case 0xC0A17E: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C0A156.asm:46 LDA $02
    case 0xC0A180: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0A156.asm:46 LDA $02
    // Overlapping static entry reached from 0xC0A100.
    case 0xC0A181: cpu.execute_instruction<0x02>(0x000029, 2); return true;
    // src/unknown/C0/C0A156.asm:47 AND #$0007
    case 0xC0A182: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0A156.asm:47 AND #$0007
    // Overlapping static entry reached from 0xC0A182.
    case 0xC0A184: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C0A156.asm:48 ASL
    case 0xC0A185: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:49 ASL
    case 0xC0A186: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:50 TAX
    case 0xC0A187: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:51 LDA [$04],Y
    case 0xC0A188: cpu.execute_instruction<0xB7>(0x000004, 2); return true;
    // src/unknown/C0/C0A156.asm:52 JMP (.LOWORD(UNKNOWN_C0A1AE),X)
    case 0xC0A18A: cpu.execute_instruction<0x7C>(0x00A18D, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A156_redirect.asm (unresolved).
bool execute_unresolved_c0_c0a156_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A156_redirect.asm:3 JSR UNKNOWN_C0A156
    case 0xC0A131: cpu.execute_instruction<0x20>(0x00A135, 3); return true;
    // src/unknown/C0/C0A156_redirect.asm:4 RTL
    case 0xC0A134: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A1CE.asm (unresolved).
bool execute_unresolved_c0_c0a1ce_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A1CE.asm:3 LSR
    case 0xC0A1AD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:4 LSR
    case 0xC0A1AE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:6 LSR
    case 0xC0A1AF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:7 LSR
    case 0xC0A1B0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:9 LSR
    case 0xC0A1B1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:10 LSR
    case 0xC0A1B2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:12 AND #$0003
    case 0xC0A1B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C0A1CE.asm:12 AND #$0003
    // Overlapping static entry reached from 0xC0A1B3.
    case 0xC0A1B5: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/unknown/C0/C0A1CE.asm:13 XBA
    case 0xC0A1B6: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:14 STA $08
    case 0xC0A1B7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1106 LDA src, X
    // Macro caller: src/unknown/C0/C0A1CE.asm:15 MOVE_INT_XPTRSRC f:MAP_DATA_TILE_TABLE_CHUNKS_TABLE, $04
    case 0xC0A1B9: cpu.execute_instruction<0xBF>(0xC42EA2, 4); return true;
    // include/macros.asm:1107 STA dest
    // Macro caller: src/unknown/C0/C0A1CE.asm:15 MOVE_INT_XPTRSRC f:MAP_DATA_TILE_TABLE_CHUNKS_TABLE, $04
    case 0xC0A1BD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:1108 LDA src+2, X
    // Macro caller: src/unknown/C0/C0A1CE.asm:15 MOVE_INT_XPTRSRC f:MAP_DATA_TILE_TABLE_CHUNKS_TABLE, $04
    case 0xC0A1BF: cpu.execute_instruction<0xBF>(0xC42EA4, 4); return true;
    // include/macros.asm:1109 STA dest+2
    // Macro caller: src/unknown/C0/C0A1CE.asm:15 MOVE_INT_XPTRSRC f:MAP_DATA_TILE_TABLE_CHUNKS_TABLE, $04
    case 0xC0A1C3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0A1CE.asm:16 LDA [$04],Y
    case 0xC0A1C5: cpu.execute_instruction<0xB7>(0x000004, 2); return true;
    // src/unknown/C0/C0A1CE.asm:17 AND #$00FF
    case 0xC0A1C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0A1CE.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC0A1C7.
    case 0xC0A1C9: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/unknown/C0/C0A1CE.asm:18 ORA $08
    case 0xC0A1CA: cpu.execute_instruction<0x05>(0x000008, 2); return true;
    // src/unknown/C0/C0A1CE.asm:19 STA CACHED_MAP_BLOCK_ID
    case 0xC0A1CC: cpu.execute_instruction<0x8D>(0x002C8C, 3); return true;
    // src/unknown/C0/C0A1CE.asm:20 PLD
    case 0xC0A1CF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:21 RTS
    case 0xC0A1D0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A1F2.asm (unresolved).
bool execute_unresolved_c0_c0a1f2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A1F2.asm:3 ASL
    case 0xC0A1D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1F2.asm:4 TAX
    case 0xC0A1D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A1F2.asm:5 LDA f:UNKNOWN_C0A20C,X
    case 0xC0A1D3: cpu.execute_instruction<0xBF>(0xC0A1EB, 4); return true;
    // src/unknown/C0/C0A1F2.asm:6 TAX
    case 0xC0A1D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A1F2.asm:7 LDY #$0240
    case 0xC0A1D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000240, 3); return true;
    // src/unknown/C0/C0A1F2.asm:7 LDY #$0240
    // Overlapping static entry reached from 0xC0A1D8.
    case 0xC0A1DA: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C0/C0A1F2.asm:8 LDA #$00BF
    case 0xC0A1DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BF, 2); else cpu.execute_instruction<0xA9>(0x0000BF, 3); return true;
    // src/unknown/C0/C0A1F2.asm:8 LDA #$00BF
    // Overlapping static entry reached from 0xC0A1DB.
    case 0xC0A1DD: cpu.execute_instruction<0x00>(0x000054, 2); return true;
    // src/unknown/C0/C0A1F2.asm:9 MVN #$7E,#$7E
    case 0xC0A1DE: cpu.execute_instruction<0x54>(0x007E7E, 3); return true;
    // src/unknown/C0/C0A1F2.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A1E1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0A1F2.asm:11 LDA #PALETTE_UPLOAD::BG_ONLY
    case 0xC0A1E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x008D08, 3); return true;
    // src/unknown/C0/C0A1F2.asm:12 STA PALETTE_UPLOAD_MODE
    case 0xC0A1E5: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C0A1F2.asm:12 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0A1E3.
    case 0xC0A1E6: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C0/C0A1F2.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0A1E8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A1F2.asm:14 RTL
    case 0xC0A1EA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A21C.asm (unresolved).
bool execute_unresolved_c0_c0a21c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A21C.asm:3 LDY FIRST_ENTITY
    case 0xC0A1FB: cpu.execute_instruction<0xAC>(0x000A46, 3); return true;
    // src/unknown/C0/C0A21C.asm:4 BMI @UNKNOWN1
    case 0xC0A1FE: cpu.execute_instruction<0x30>(0x00000B, 2); return true;
    // src/unknown/C0/C0A21C.asm:6 TYX
    case 0xC0A200: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0A21C.asm:7 CMP ENTITY_NPC_IDS,X
    case 0xC0A201: cpu.execute_instruction<0xDD>(0x003098, 3); return true;
    // src/unknown/C0/C0A21C.asm:8 BEQ @UNKNOWN2
    case 0xC0A204: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0A21C.asm:9 LDY ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC0A206: cpu.execute_instruction<0xBC>(0x000A94, 3); return true;
    // src/unknown/C0/C0A21C.asm:10 BPL @UNKNOWN0
    case 0xC0A209: cpu.execute_instruction<0x10>(0x0000F5, 2); return true;
    // src/unknown/C0/C0A21C.asm:12 LDA #$0000
    case 0xC0A20B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0A21C.asm:12 LDA #$0000
    // Overlapping static entry reached from 0xC0A20B.
    case 0xC0A20D: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C0A21C.asm:14 RTL
    case 0xC0A20E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A230.asm (unresolved).
bool execute_unresolved_c0_c0a230_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A230.asm:3 LDY ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC0A20F: cpu.execute_instruction<0xBC>(0x000E54, 3); return true;
    // src/unknown/C0/C0A230.asm:4 LDA ENTITY_ABS_X_FRACTION_TABLE,Y
    case 0xC0A212: cpu.execute_instruction<0xB9>(0x000C38, 3); return true;
    // src/unknown/C0/C0A230.asm:5 CLC
    case 0xC0A215: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A230.asm:6 ADC ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC0A216: cpu.execute_instruction<0x7D>(0x000C38, 3); return true;
    // src/unknown/C0/C0A230.asm:7 LDA ENTITY_SCREEN_X_TABLE,Y
    case 0xC0A219: cpu.execute_instruction<0xB9>(0x000B0C, 3); return true;
    // src/unknown/C0/C0A230.asm:8 ADC ENTITY_ABS_X_TABLE,X
    case 0xC0A21C: cpu.execute_instruction<0x7D>(0x000B84, 3); return true;
    // src/unknown/C0/C0A230.asm:9 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A21F: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/unknown/C0/C0A230.asm:10 LDA ENTITY_ABS_Y_FRACTION_TABLE,Y
    case 0xC0A222: cpu.execute_instruction<0xB9>(0x000C74, 3); return true;
    // src/unknown/C0/C0A230.asm:11 CLC
    case 0xC0A225: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A230.asm:12 ADC ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC0A226: cpu.execute_instruction<0x7D>(0x000C74, 3); return true;
    // src/unknown/C0/C0A230.asm:13 LDA ENTITY_SCREEN_Y_TABLE,Y
    case 0xC0A229: cpu.execute_instruction<0xB9>(0x000B48, 3); return true;
    // src/unknown/C0/C0A230.asm:14 ADC ENTITY_ABS_Y_TABLE,X
    case 0xC0A22C: cpu.execute_instruction<0x7D>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A230.asm:15 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A22F: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/unknown/C0/C0A230.asm:16 RTS
    case 0xC0A232: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A254.asm (unresolved).
bool execute_unresolved_c0_c0a254_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A254.asm:3 ASL
    case 0xC0A233: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A254.asm:4 TAX
    case 0xC0A234: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A254.asm:5 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A235: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0A254.asm:6 SEC
    case 0xC0A238: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A254.asm:7 SBC BG1_X_POS
    case 0xC0A239: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C0A254.asm:8 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A23C: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/unknown/C0/C0A254.asm:9 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A23F: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A254.asm:10 SEC
    case 0xC0A242: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A254.asm:11 SBC BG1_Y_POS
    case 0xC0A243: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C0A254.asm:12 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A246: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/unknown/C0/C0A254.asm:13 RTL
    case 0xC0A249: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A26B.asm (unresolved).
bool execute_unresolved_c0_c0a26b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A26B.asm:4 LDX $88
    case 0xC0A24A: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A26B.asm:5 CPX CURRENT_LEADING_PARTY_MEMBER_ENTITY
    case 0xC0A24C: cpu.execute_instruction<0xEC>(0x0060FE, 3); return true;
    // src/unknown/C0/C0A26B.asm:6 BEQ @UNKNOWN0
    case 0xC0A24F: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C0/C0A26B.asm:7 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0A251: cpu.execute_instruction<0xBD>(0x000FF8, 3); return true;
    // src/unknown/C0/C0A26B.asm:8 AND #$0000
    case 0xC0A254: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001800, 3); return true;
    // src/unknown/C0/C0A26B.asm:9 CLC
    case 0xC0A256: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A26B.asm:10 BNE @UNKNOWN0
    case 0xC0A257: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/unknown/C0/C0A26B.asm:11 LDA NOT_MOVING_IN_SAME_DIRECTION_FACED
    case 0xC0A259: cpu.execute_instruction<0xAD>(0x00613E, 3); return true;
    // src/unknown/C0/C0A26B.asm:12 BNE @UNKNOWN0
    case 0xC0A25C: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/C0/C0A26B.asm:13 LDA ENTITY_DIRECTIONS,X
    case 0xC0A25E: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/unknown/C0/C0A26B.asm:14 CMP CURRENT_LEADER_DIRECTION
    case 0xC0A261: cpu.execute_instruction<0xCD>(0x0060FC, 3); return true;
    // src/unknown/C0/C0A26B.asm:15 BNE @UNKNOWN0
    case 0xC0A264: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0A26B.asm:16 ASL
    case 0xC0A266: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A26B.asm:17 TAX
    case 0xC0A267: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A26B.asm:18 LDY CURRENT_LEADING_PARTY_MEMBER_ENTITY
    case 0xC0A268: cpu.execute_instruction<0xAC>(0x0060FE, 3); return true;
    // src/unknown/C0/C0A26B.asm:19 JSR (.LOWORD(UNKNOWN_C0A350),X)
    case 0xC0A26B: cpu.execute_instruction<0xFC>(0x00A32F, 3); return true;
    // src/unknown/C0/C0A26B.asm:20 ASL
    case 0xC0A26E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A26B.asm:21 BEQ @UNKNOWN1
    case 0xC0A26F: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C0/C0A26B.asm:23 LDX $88
    case 0xC0A271: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A26B.asm:24 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A273: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0A26B.asm:25 SEC
    case 0xC0A276: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A26B.asm:26 SBC BG1_X_POS
    case 0xC0A277: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C0A26B.asm:27 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A27A: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/unknown/C0/C0A26B.asm:28 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A27D: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A26B.asm:29 SEC
    case 0xC0A280: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A26B.asm:30 SBC BG1_Y_POS
    case 0xC0A281: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C0A26B.asm:31 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A284: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/unknown/C0/C0A26B.asm:33 LDX $88
    case 0xC0A287: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A26B.asm:34 RTS
    case 0xC0A289: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A2B7.asm (unresolved).
bool execute_unresolved_c0_c0a2b7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A2B7.asm:4 LDX $88
    case 0xC0A296: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A2B7.asm:5 LDA ENTITY_SCREEN_X_TABLE,Y
    case 0xC0A298: cpu.execute_instruction<0xB9>(0x000B0C, 3); return true;
    // src/unknown/C0/C0A2B7.asm:6 EOR ENTITY_SCREEN_X_TABLE,X
    case 0xC0A29B: cpu.execute_instruction<0x5D>(0x000B0C, 3); return true;
    // src/unknown/C0/C0A2B7.asm:7 BNE @UNKNOWN2
    case 0xC0A29E: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/unknown/C0/C0A2B7.asm:8 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC0A2A0: cpu.execute_instruction<0xB9>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A2B7.asm:9 SEC
    case 0xC0A2A3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:10 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC0A2A4: cpu.execute_instruction<0xFD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A2B7.asm:11 BPL @UNKNOWN0
    case 0xC0A2A7: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A2B7.asm:11 BPL @UNKNOWN0
    // Overlapping static entry reached from 0xC00FCE.
    case 0xC0A2A8: cpu.execute_instruction<0x04>(0x000049, 2); return true;
    // src/unknown/C0/C0A2B7.asm:12 EOR #$FFFF
    case 0xC0A2A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A2B7.asm:12 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A2A8.
    case 0xC0A2AA: cpu.execute_instruction<0xFF>(0xBC1AFF, 4); return true;
    // src/unknown/C0/C0A2B7.asm:12 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A2A9.
    case 0xC0A2AB: cpu.execute_instruction<0xFF>(0x80BC1A, 4); return true;
    // src/unknown/C0/C0A2B7.asm:13 INC
    case 0xC0A2AC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:15 LDY ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0A2AD: cpu.execute_instruction<0xBC>(0x000F80, 3); return true;
    // src/unknown/C0/C0A2B7.asm:15 LDY ENTITY_SCRIPT_VAR5_TABLE,X
    // Overlapping static entry reached from 0xC0A2AA.
    case 0xC0A2AE: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C0/C0A2B7.asm:15 LDY ENTITY_SCRIPT_VAR5_TABLE,X
    // Overlapping static entry reached from 0xC0A2AB.
    case 0xC0A2AF: cpu.execute_instruction<0x0F>(0xFF38BB, 4); return true;
    // src/unknown/C0/C0A2B7.asm:16 TYX
    case 0xC0A2B0: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:17 SEC
    case 0xC0A2B1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:18 SBC f:UNKNOWN_C0A2AB,X
    case 0xC0A2B2: cpu.execute_instruction<0xFF>(0xC0A28A, 4); return true;
    // src/unknown/C0/C0A2B7.asm:18 SBC f:UNKNOWN_C0A2AB,X
    // Overlapping static entry reached from 0xC0A2AF.
    case 0xC0A2B3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:18 SBC f:UNKNOWN_C0A2AB,X
    // Overlapping static entry reached from 0xC0A2B3.
    case 0xC0A2B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0010C0, 3); return true;
    // src/unknown/C0/C0A2B7.asm:19 BPL @UNKNOWN1
    case 0xC0A2B6: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A2B7.asm:19 BPL @UNKNOWN1
    // Overlapping static entry reached from 0xC0A2B4.
    case 0xC0A2B7: cpu.execute_instruction<0x04>(0x000049, 2); return true;
    // src/unknown/C0/C0A2B7.asm:20 EOR #$FFFF
    case 0xC0A2B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A2B7.asm:20 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A2B7.
    case 0xC0A2B9: cpu.execute_instruction<0xFF>(0xF01AFF, 4); return true;
    // src/unknown/C0/C0A2B7.asm:20 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A2B8.
    case 0xC0A2BA: cpu.execute_instruction<0xFF>(0x01F01A, 4); return true;
    // src/unknown/C0/C0A2B7.asm:21 INC
    case 0xC0A2BB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:23 BEQ @UNKNOWN2
    case 0xC0A2BC: cpu.execute_instruction<0xF0>(0x000001, 2); return true;
    // src/unknown/C0/C0A2B7.asm:23 BEQ @UNKNOWN2
    // Overlapping static entry reached from 0xC0A2B9.
    case 0xC0A2BD: cpu.execute_instruction<0x01>(0x00003A, 2); return true;
    // src/unknown/C0/C0A2B7.asm:24 DEC
    case 0xC0A2BE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:26 RTS
    case 0xC0A2BF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A2E1.asm (unresolved).
bool execute_unresolved_c0_c0a2e1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A2E1.asm:3 LDX $88
    case 0xC0A2C0: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A2E1.asm:4 LDA ENTITY_SCREEN_Y_TABLE,Y
    case 0xC0A2C2: cpu.execute_instruction<0xB9>(0x000B48, 3); return true;
    // src/unknown/C0/C0A2E1.asm:5 EOR ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A2C5: cpu.execute_instruction<0x5D>(0x000B48, 3); return true;
    // src/unknown/C0/C0A2E1.asm:6 BNE @UNKNOWN2
    case 0xC0A2C8: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/unknown/C0/C0A2E1.asm:7 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC0A2CA: cpu.execute_instruction<0xB9>(0x000B84, 3); return true;
    // src/unknown/C0/C0A2E1.asm:8 SEC
    case 0xC0A2CD: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:9 SBC ENTITY_ABS_X_TABLE,X
    case 0xC0A2CE: cpu.execute_instruction<0xFD>(0x000B84, 3); return true;
    // src/unknown/C0/C0A2E1.asm:10 BPL @UNKNOWN0
    case 0xC0A2D1: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A2E1.asm:11 EOR #$FFFF
    case 0xC0A2D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A2E1.asm:11 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A2D3.
    case 0xC0A2D5: cpu.execute_instruction<0xFF>(0x80BC1A, 4); return true;
    // src/unknown/C0/C0A2E1.asm:12 INC
    case 0xC0A2D6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:14 LDY ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0A2D7: cpu.execute_instruction<0xBC>(0x000F80, 3); return true;
    // src/unknown/C0/C0A2E1.asm:14 LDY ENTITY_SCRIPT_VAR5_TABLE,X
    // Overlapping static entry reached from 0xC0A2D5.
    case 0xC0A2D9: cpu.execute_instruction<0x0F>(0xFF38BB, 4); return true;
    // src/unknown/C0/C0A2E1.asm:15 TYX
    case 0xC0A2DA: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:16 SEC
    case 0xC0A2DB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:17 SBC f:UNKNOWN_C0A2AB,X
    case 0xC0A2DC: cpu.execute_instruction<0xFF>(0xC0A28A, 4); return true;
    // src/unknown/C0/C0A2E1.asm:17 SBC f:UNKNOWN_C0A2AB,X
    // Overlapping static entry reached from 0xC0A2D9.
    case 0xC0A2DD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:17 SBC f:UNKNOWN_C0A2AB,X
    // Overlapping static entry reached from 0xC0A2DD.
    case 0xC0A2DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0010C0, 3); return true;
    // src/unknown/C0/C0A2E1.asm:18 BPL @UNKNOWN1
    case 0xC0A2E0: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A2E1.asm:18 BPL @UNKNOWN1
    // Overlapping static entry reached from 0xC0A2DE.
    case 0xC0A2E1: cpu.execute_instruction<0x04>(0x000049, 2); return true;
    // src/unknown/C0/C0A2E1.asm:19 EOR #$FFFF
    case 0xC0A2E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A2E1.asm:19 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A2E1.
    case 0xC0A2E3: cpu.execute_instruction<0xFF>(0xF01AFF, 4); return true;
    // src/unknown/C0/C0A2E1.asm:19 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A2E2.
    case 0xC0A2E4: cpu.execute_instruction<0xFF>(0x01F01A, 4); return true;
    // src/unknown/C0/C0A2E1.asm:20 INC
    case 0xC0A2E5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:22 BEQ @UNKNOWN2
    case 0xC0A2E6: cpu.execute_instruction<0xF0>(0x000001, 2); return true;
    // src/unknown/C0/C0A2E1.asm:22 BEQ @UNKNOWN2
    // Overlapping static entry reached from 0xC0A2E3.
    case 0xC0A2E7: cpu.execute_instruction<0x01>(0x00003A, 2); return true;
    // src/unknown/C0/C0A2E1.asm:23 DEC
    case 0xC0A2E8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:25 RTS
    case 0xC0A2E9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A317.asm (unresolved).
bool execute_unresolved_c0_c0a317_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A317.asm:3 LDX $88
    case 0xC0A2F6: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A317.asm:4 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC0A2F8: cpu.execute_instruction<0xB9>(0x000B84, 3); return true;
    // src/unknown/C0/C0A317.asm:5 SEC
    case 0xC0A2FB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:6 SBC ENTITY_ABS_X_TABLE,X
    case 0xC0A2FC: cpu.execute_instruction<0xFD>(0x000B84, 3); return true;
    // src/unknown/C0/C0A317.asm:7 BPL @UNKNOWN0
    case 0xC0A2FF: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A317.asm:8 EOR #$FFFF
    case 0xC0A301: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A317.asm:8 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A301.
    case 0xC0A303: cpu.execute_instruction<0xFF>(0x00851A, 4); return true;
    // src/unknown/C0/C0A317.asm:9 INC
    case 0xC0A304: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:11 STA $00
    case 0xC0A305: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0A317.asm:12 LDA ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0A307: cpu.execute_instruction<0xBD>(0x000F80, 3); return true;
    // src/unknown/C0/C0A317.asm:13 TAX
    case 0xC0A30A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:14 LDA $00
    case 0xC0A30B: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C0A317.asm:15 CMP f:UNKNOWN_C0A30B,X
    case 0xC0A30D: cpu.execute_instruction<0xDF>(0xC0A2EA, 4); return true;
    // src/unknown/C0/C0A317.asm:16 BCC @UNKNOWN3
    case 0xC0A311: cpu.execute_instruction<0x90>(0x00001B, 2); return true;
    // src/unknown/C0/C0A317.asm:17 LDX $88
    case 0xC0A313: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A317.asm:18 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC0A315: cpu.execute_instruction<0xB9>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A317.asm:19 SEC
    case 0xC0A318: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:20 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC0A319: cpu.execute_instruction<0xFD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0A317.asm:21 BPL @UNKNOWN1
    case 0xC0A31C: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A317.asm:22 EOR #$FFFF
    case 0xC0A31E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A317.asm:22 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A31E.
    case 0xC0A320: cpu.execute_instruction<0xFF>(0xE5381A, 4); return true;
    // src/unknown/C0/C0A317.asm:23 INC
    case 0xC0A321: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:25 SEC
    case 0xC0A322: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:26 SBC $00
    case 0xC0A323: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/unknown/C0/C0A317.asm:26 SBC $00
    // Overlapping static entry reached from 0xC0A320.
    case 0xC0A324: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A317.asm:27 BEQ @UNKNOWN3
    case 0xC0A325: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0A317.asm:28 BPL @UNKNOWN2
    case 0xC0A327: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A317.asm:29 EOR #$FFFF
    case 0xC0A329: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A317.asm:29 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A329.
    case 0xC0A32B: cpu.execute_instruction<0xFF>(0x603A1A, 4); return true;
    // src/unknown/C0/C0A317.asm:30 INC
    case 0xC0A32C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:32 DEC
    case 0xC0A32D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:34 RTS
    case 0xC0A32E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A360.asm (unresolved).
bool execute_unresolved_c0_c0a360_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A360.asm:3 LDX $88
    case 0xC0A33F: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A360.asm:4 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0A341: cpu.execute_instruction<0xBD>(0x00305C, 3); return true;
    // src/unknown/C0/C0A360.asm:5 BMI UNKNOWN_C0A37A_1
    case 0xC0A344: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/unknown/C0/C0A360.asm:6 LDA ENTITY_OBSTACLE_FLAGS,X
    case 0xC0A346: cpu.execute_instruction<0xBD>(0x002CD8, 3); return true;
    // src/unknown/C0/C0A360.asm:7 AND #$00D0
    case 0xC0A349: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000D0, 2); else cpu.execute_instruction<0x29>(0x0000D0, 3); return true;
    // src/unknown/C0/C0A360.asm:7 AND #$00D0
    // Overlapping static entry reached from 0xC0A349.
    case 0xC0A34B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A360.asm:8 BEQ @UNKNOWN0
    case 0xC0A34C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0A360.asm:9 JMP MOVEMENT_CODE_39
    case 0xC0A34E: cpu.execute_instruction<0x4C>(0x0098D1, 3); return true;
    // src/unknown/C0/C0A360.asm:11 LDX $88
    case 0xC0A351: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A360.asm:12 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A353: cpu.execute_instruction<0xBD>(0x002C9C, 3); return true;
    // src/unknown/C0/C0A360.asm:13 BMI UNKNOWN_C0A37A_1
    case 0xC0A356: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C0/C0A360.asm:14 RTS
    case 0xC0A358: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C0A360.asm:16 LDX $88
    case 0xC0A359: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A360.asm:18 JSR UNKNOWN_C09FAE_ENTRY3
    case 0xC0A35B: cpu.execute_instruction<0x20>(0x009FA9, 3); return true;
    // src/unknown/C0/C0A360.asm:19 JSL UNKNOWN_C0C7DB
    case 0xC0A35E: cpu.execute_instruction<0x22>(0xC0C7BD, 4); return true;
    // src/unknown/C0/C0A360.asm:20 RTS
    case 0xC0A362: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A384.asm (unresolved).
bool execute_unresolved_c0_c0a384_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A384.asm:3 LDX $88
    case 0xC0A363: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A384.asm:4 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0A365: cpu.execute_instruction<0xBD>(0x00305C, 3); return true;
    // src/unknown/C0/C0A384.asm:5 BMI @UNKNOWN1
    case 0xC0A368: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/unknown/C0/C0A384.asm:6 LDA ENTITY_OBSTACLE_FLAGS,X
    case 0xC0A36A: cpu.execute_instruction<0xBD>(0x002CD8, 3); return true;
    // src/unknown/C0/C0A384.asm:7 AND #$00D0
    case 0xC0A36D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000D0, 2); else cpu.execute_instruction<0x29>(0x0000D0, 3); return true;
    // src/unknown/C0/C0A384.asm:7 AND #$00D0
    // Overlapping static entry reached from 0xC0A36D.
    case 0xC0A36F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A384.asm:8 BEQ @UNKNOWN0
    case 0xC0A370: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0A384.asm:9 JMP MOVEMENT_CODE_39
    case 0xC0A372: cpu.execute_instruction<0x4C>(0x0098D1, 3); return true;
    // src/unknown/C0/C0A384.asm:11 LDX $88
    case 0xC0A375: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A384.asm:12 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A377: cpu.execute_instruction<0xBD>(0x002C9C, 3); return true;
    // src/unknown/C0/C0A384.asm:13 BMI @UNKNOWN1
    case 0xC0A37A: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C0/C0A384.asm:14 RTS
    case 0xC0A37C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C0A384.asm:15 LDX $88
    case 0xC0A37D: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A384.asm:17 JSR UNKNOWN_C09FAE_ENTRY3
    case 0xC0A37F: cpu.execute_instruction<0x20>(0x009FA9, 3); return true;
    // src/unknown/C0/C0A384.asm:18 RTS
    case 0xC0A382: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A3A4.asm (unresolved).
bool execute_unresolved_c0_c0a3a4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A3A4.asm:3 LDA ENTITY_CURRENT_DISPLAYED_SPRITES,X
    case 0xC0A383: cpu.execute_instruction<0xBD>(0x001AB8, 3); return true;
    // src/unknown/C0/C0A3A4.asm:4 AND #$0001
    case 0xC0A386: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0A3A4.asm:4 AND #$0001
    // Overlapping static entry reached from 0xC0A386.
    case 0xC0A388: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A3A4.asm:5 BEQ @UNKNOWN0
    case 0xC0A389: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0A3A4.asm:6 LDA ENTITY_SPRITEMAP_SIZES,X
    case 0xC0A38B: cpu.execute_instruction<0xBD>(0x002D14, 3); return true;
    // src/unknown/C0/C0A3A4.asm:7 CLC
    case 0xC0A38E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:8 ADC $8C
    case 0xC0A38F: cpu.execute_instruction<0x65>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:9 STA $8C
    case 0xC0A391: cpu.execute_instruction<0x85>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:11 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0A393: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/unknown/C0/C0A3A4.asm:12 LDA #$0030
    case 0xC0A395: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x00A030, 3); return true;
    // src/unknown/C0/C0A3A4.asm:13 LDY #$0020
    case 0xC0A397: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000020, 2); else cpu.execute_instruction<0xA0>(0x008520, 3); return true;
    // src/unknown/C0/C0A3A4.asm:13 LDY #$0020
    // Overlapping static entry reached from 0xC0A395.
    case 0xC0A398: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/unknown/C0/C0A3A4.asm:14 STA $00
    case 0xC0A399: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0A3A4.asm:14 STA $00
    // Overlapping static entry reached from 0xC0A397.
    case 0xC0A39A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0A3A4.asm:15 STA $02
    case 0xC0A39B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0A3A4.asm:16 LDA ENTITY_SURFACE_FLAGS,X
    case 0xC0A39D: cpu.execute_instruction<0xBD>(0x002FA8, 3); return true;
    // src/unknown/C0/C0A3A4.asm:17 LSR
    case 0xC0A3A0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:18 BCC @UNKNOWN1
    case 0xC0A3A1: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0A3A4.asm:19 STY $02
    case 0xC0A3A3: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0A3A4.asm:21 LSR
    case 0xC0A3A5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:22 BCC @UNKNOWN2
    case 0xC0A3A6: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0A3A4.asm:23 STY $00
    case 0xC0A3A8: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C0/C0A3A4.asm:25 LDA ENTITY_UPPER_LOWER_BODY_DIVIDES+1,X
    case 0xC0A3AA: cpu.execute_instruction<0xBD>(0x002FE5, 3); return true;
    // src/unknown/C0/C0A3A4.asm:26 TAX
    case 0xC0A3AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:27 LDY #$00FD
    case 0xC0A3AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FD, 2); else cpu.execute_instruction<0xA0>(0x0080FD, 3); return true;
    // src/unknown/C0/C0A3A4.asm:28 BRA @UNKNOWN4
    case 0xC0A3B0: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0A3A4.asm:28 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC0A3AE.
    case 0xC0A3B1: cpu.execute_instruction<0x0D>(0x00C8C8, 3); return true;
    // src/unknown/C0/C0A3A4.asm:30 INY
    case 0xC0A3B2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:31 INY
    case 0xC0A3B3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:32 INY
    case 0xC0A3B4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:33 INY
    case 0xC0A3B5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:34 INY
    case 0xC0A3B6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:35 LDA [$8C],Y
    case 0xC0A3B7: cpu.execute_instruction<0xB7>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:36 AND #$00CF
    case 0xC0A3B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000CF, 2); else cpu.execute_instruction<0x29>(0x0005CF, 3); return true;
    // src/unknown/C0/C0A3A4.asm:37 ORA $00
    case 0xC0A3BB: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C0/C0A3A4.asm:37 ORA $00
    // Overlapping static entry reached from 0xC0A3B9.
    case 0xC0A3BC: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C0/C0A3A4.asm:38 STA [$8C],Y
    case 0xC0A3BD: cpu.execute_instruction<0x97>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:40 DEX
    case 0xC0A3BF: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:41 BPL @UNKNOWN3
    case 0xC0A3C0: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A3A4.asm:42 LDX $88
    case 0xC0A3C2: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A3A4.asm:43 LDA ENTITY_UPPER_LOWER_BODY_DIVIDES,X
    case 0xC0A3C4: cpu.execute_instruction<0xBD>(0x002FE4, 3); return true;
    // src/unknown/C0/C0A3A4.asm:43 LDA ENTITY_UPPER_LOWER_BODY_DIVIDES,X
    // Overlapping static entry reached from 0xC0836F.
    case 0xC0A3C5: cpu.execute_instruction<0xE4>(0x00002F, 2); return true;
    // src/unknown/C0/C0A3A4.asm:44 TAX
    case 0xC0A3C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:45 BRA @UNKNOWN6
    case 0xC0A3C8: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0A3A4.asm:47 INY
    case 0xC0A3CA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:48 INY
    case 0xC0A3CB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:49 INY
    case 0xC0A3CC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:50 INY
    case 0xC0A3CD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:51 INY
    case 0xC0A3CE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:52 LDA [$8C],Y
    case 0xC0A3CF: cpu.execute_instruction<0xB7>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:53 AND #$00CF
    case 0xC0A3D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000CF, 2); else cpu.execute_instruction<0x29>(0x0005CF, 3); return true;
    // src/unknown/C0/C0A3A4.asm:54 ORA $02
    case 0xC0A3D3: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0A3A4.asm:54 ORA $02
    // Overlapping static entry reached from 0xC0A3D1.
    case 0xC0A3D4: cpu.execute_instruction<0x02>(0x000097, 2); return true;
    // src/unknown/C0/C0A3A4.asm:55 STA [$8C],Y
    case 0xC0A3D5: cpu.execute_instruction<0x97>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:57 DEX
    case 0xC0A3D7: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:58 BPL @UNKNOWN5
    case 0xC0A3D8: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A3A4.asm:59 REP #PROC_FLAGS::INDEX8
    case 0xC0A3DA: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0A3A4.asm:60 LDX $88
    case 0xC0A3DC: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A3A4.asm:61 LDA $8E
    case 0xC0A3DE: cpu.execute_instruction<0xA5>(0x00008E, 2); return true;
    // src/unknown/C0/C0A3A4.asm:62 STA SPRITEMAP_BANK
    case 0xC0A3E0: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C0A3A4.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC0A3E3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A3A4.asm:64 LDA ENTITY_DRAW_PRIORITY,X
    case 0xC0A3E5: cpu.execute_instruction<0xBD>(0x001034, 3); return true;
    // src/unknown/C0/C0A3A4.asm:65 STA CURRENT_SPRITE_DRAWING_PRIORITY
    case 0xC0A3E8: cpu.execute_instruction<0x8D>(0x002800, 3); return true;
    // src/unknown/C0/C0A3A4.asm:66 TAY
    case 0xC0A3EB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:67 AND #$8000
    case 0xC0A3EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C0A3A4.asm:67 AND #$8000
    // Overlapping static entry reached from 0xC0A3EC.
    case 0xC0A3EE: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A3A4.asm:68 BEQ @UNKNOWN7
    case 0xC0A3EF: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C0/C0A3A4.asm:69 TYA
    case 0xC0A3F1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:70 AND #$003F
    case 0xC0A3F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0A3A4.asm:70 AND #$003F
    // Overlapping static entry reached from 0xC0A3F2.
    case 0xC0A3F4: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C0A3A4.asm:71 ASL
    case 0xC0A3F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:72 TAX
    case 0xC0A3F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:73 LDA ENTITY_DRAW_PRIORITY,X
    case 0xC0A3F7: cpu.execute_instruction<0xBD>(0x001034, 3); return true;
    // src/unknown/C0/C0A3A4.asm:74 LDX $88
    case 0xC0A3FA: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A3A4.asm:75 STA CURRENT_SPRITE_DRAWING_PRIORITY
    case 0xC0A3FC: cpu.execute_instruction<0x8D>(0x002800, 3); return true;
    // src/unknown/C0/C0A3A4.asm:76 TYA
    case 0xC0A3FF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:77 AND #$4000
    case 0xC0A400: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/C0/C0A3A4.asm:77 AND #$4000
    // Overlapping static entry reached from 0xC0A400.
    case 0xC0A402: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:78 BNE @UNKNOWN7
    case 0xC0A403: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0A3A4.asm:79 LDA #$0000
    case 0xC0A405: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0A3A4.asm:79 LDA #$0000
    // Overlapping static entry reached from 0xC0A405.
    case 0xC0A407: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0A3A4.asm:80 STA ENTITY_DRAW_PRIORITY,X
    case 0xC0A408: cpu.execute_instruction<0x9D>(0x001034, 3); return true;
    // src/unknown/C0/C0A3A4.asm:82 JSL UNKNOWN_C0AC43
    case 0xC0A40B: cpu.execute_instruction<0x22>(0xC0AC22, 4); return true;
    // src/unknown/C0/C0A3A4.asm:83 LDX $88
    case 0xC0A40F: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A3A4.asm:84 LDA $8E
    case 0xC0A411: cpu.execute_instruction<0xA5>(0x00008E, 2); return true;
    // src/unknown/C0/C0A3A4.asm:85 STA SPRITEMAP_BANK
    case 0xC0A413: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C0A3A4.asm:86 LDY ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A416: cpu.execute_instruction<0xBC>(0x000B48, 3); return true;
    // src/unknown/C0/C0A3A4.asm:87 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A419: cpu.execute_instruction<0xBD>(0x000B0C, 3); return true;
    // src/unknown/C0/C0A3A4.asm:88 TAX
    case 0xC0A41C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:89 LDA $8C
    case 0xC0A41D: cpu.execute_instruction<0xA5>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:90 JMP UNKNOWN_C08C58
    case 0xC0A41F: cpu.execute_instruction<0x4C>(0x008C49, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A443.asm (unresolved).
bool execute_unresolved_c0_c0a443_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A443.asm:3 LDX $88
    case 0xC0A422: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A443.asm:4 LDA PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC0A424: cpu.execute_instruction<0xAD>(0x002C8E, 3); return true;
    // src/unknown/C0/C0A443.asm:5 CLC
    case 0xC0A427: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:6 ADC CURRENT_ENTITY_SLOT
    case 0xC0A428: cpu.execute_instruction<0x6D>(0x001A38, 3); return true;
    // src/unknown/C0/C0A443.asm:7 LSR
    case 0xC0A42B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:8 LSR
    case 0xC0A42C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:9 LSR
    case 0xC0A42D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:10 AND #$0001
    case 0xC0A42E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0A443.asm:10 AND #$0001
    // Overlapping static entry reached from 0xC0A42E.
    case 0xC0A430: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0A443.asm:11 STA $00
    case 0xC0A431: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:12 LDA ENTITY_DIRECTIONS,X
    case 0xC0A433: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/unknown/C0/C0A443.asm:13 ASL
    case 0xC0A436: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:14 ORA $00
    case 0xC0A437: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:15 STA $02
    case 0xC0A439: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:16 LDA ENTITY_WALKING_STYLES,X
    case 0xC0A43B: cpu.execute_instruction<0xBD>(0x003020, 3); return true;
    // src/unknown/C0/C0A443.asm:17 XBA
    case 0xC0A43E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:18 ORA $02
    case 0xC0A43F: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:19 CMP ENTITY_ANIMATION_FINGERPRINTS,X
    case 0xC0A441: cpu.execute_instruction<0xDD>(0x001AF4, 3); return true;
    // src/unknown/C0/C0A443.asm:20 BNE @UNKNOWN8
    case 0xC0A444: cpu.execute_instruction<0xD0>(0x000001, 2); return true;
    // src/unknown/C0/C0A443.asm:21 RTL
    case 0xC0A446: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:23 STA ENTITY_ANIMATION_FINGERPRINTS,X
    case 0xC0A447: cpu.execute_instruction<0x9D>(0x001AF4, 3); return true;
    // src/unknown/C0/C0A443.asm:24 LDA $00
    case 0xC0A44A: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:25 STA USE_SECOND_SPRITE_FRAME
    case 0xC0A44C: cpu.execute_instruction<0x8D>(0x002C90, 3); return true;
    // src/unknown/C0/C0A443.asm:26 BRA UNKNOWN_C0A443_UNKNOWN10
    case 0xC0A44F: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/unknown/C0/C0A443.asm:27 LDA FRAME_COUNTER
    case 0xC0A451: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/unknown/C0/C0A443.asm:28 LSR
    case 0xC0A454: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:29 LSR
    case 0xC0A455: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:30 LSR
    case 0xC0A456: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:31 AND #$0001
    case 0xC0A457: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0A443.asm:31 AND #$0001
    // Overlapping static entry reached from 0xC0A457.
    case 0xC0A459: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0A443.asm:32 STA USE_SECOND_SPRITE_FRAME
    case 0xC0A45A: cpu.execute_instruction<0x8D>(0x002C90, 3); return true;
    // src/unknown/C0/C0A443.asm:33 BRA UNKNOWN_C0A443_UNKNOWN10
    case 0xC0A45D: cpu.execute_instruction<0x80>(0x000042, 2); return true;
    // src/unknown/C0/C0A443.asm:35 LDY $88
    case 0xC0A45F: cpu.execute_instruction<0xA4>(0x000088, 2); return true;
    // src/unknown/C0/C0A443.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC0A461: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A443.asm:37 PHD
    case 0xC0A463: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:38 PHA
    case 0xC0A464: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:39 TDC
    case 0xC0A465: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:40 SEC
    case 0xC0A466: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:41 SBC #$0006
    case 0xC0A467: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000006, 2); else cpu.execute_instruction<0xE9>(0x000006, 3); return true;
    // src/unknown/C0/C0A443.asm:41 SBC #$0006
    // Overlapping static entry reached from 0xC0A467.
    case 0xC0A469: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C0A443.asm:42 TCD
    case 0xC0A46A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:43 PLA
    case 0xC0A46B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:44 BRA UNKNOWN_C0A443_UNKNOWN9
    case 0xC0A46C: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0A443.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC0A46E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A443.asm:47 PHD
    case 0xC0A470: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:48 PHA
    case 0xC0A471: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:49 TDC
    case 0xC0A472: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:50 SEC
    case 0xC0A473: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:51 SBC #$0006
    case 0xC0A474: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000006, 2); else cpu.execute_instruction<0xE9>(0x000006, 3); return true;
    // src/unknown/C0/C0A443.asm:51 SBC #$0006
    // Overlapping static entry reached from 0xC0A474.
    case 0xC0A476: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C0A443.asm:52 TCD
    case 0xC0A477: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:53 PLA
    case 0xC0A478: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:54 ASL
    case 0xC0A479: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:55 TAY
    case 0xC0A47A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:57 LDA ENTITY_ANIMATION_FRAME,Y
    case 0xC0A47B: cpu.execute_instruction<0xB9>(0x0010E8, 3); return true;
    // src/unknown/C0/C0A443.asm:58 STA USE_SECOND_SPRITE_FRAME
    case 0xC0A47E: cpu.execute_instruction<0x8D>(0x002C90, 3); return true;
    // src/unknown/C0/C0A443.asm:59 JSL UNKNOWN_C0A443_ENTRY4
    case 0xC0A481: cpu.execute_instruction<0x22>(0xC0A4A3, 4); return true;
    // src/unknown/C0/C0A443.asm:60 PLD
    case 0xC0A485: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:61 RTL
    case 0xC0A486: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:63 STZ USE_SECOND_SPRITE_FRAME
    case 0xC0A487: cpu.execute_instruction<0x9C>(0x002C90, 3); return true;
    // src/unknown/C0/C0A443.asm:64 JSL UNKNOWN_C0C711
    case 0xC0A48A: cpu.execute_instruction<0x22>(0xC0C6F3, 4); return true;
    // src/unknown/C0/C0A443.asm:65 BNE UNKNOWN_C0A443_UNKNOWN10
    case 0xC0A48E: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/unknown/C0/C0A443.asm:66 RTL
    case 0xC0A490: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:68 LDA #$0001
    case 0xC0A491: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0A443.asm:68 LDA #$0001
    // Overlapping static entry reached from 0xC0A491.
    case 0xC0A493: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0A443.asm:69 STA USE_SECOND_SPRITE_FRAME
    case 0xC0A494: cpu.execute_instruction<0x8D>(0x002C90, 3); return true;
    // src/unknown/C0/C0A443.asm:70 JSL UNKNOWN_C0C711
    case 0xC0A497: cpu.execute_instruction<0x22>(0xC0C6F3, 4); return true;
    // src/unknown/C0/C0A443.asm:71 BNE UNKNOWN_C0A443_UNKNOWN10
    case 0xC0A49B: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C0A443.asm:72 RTL
    case 0xC0A49D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:74 STZ USE_SECOND_SPRITE_FRAME
    case 0xC0A49E: cpu.execute_instruction<0x9C>(0x002C90, 3); return true;
    // src/unknown/C0/C0A443.asm:76 LDY $88
    case 0xC0A4A1: cpu.execute_instruction<0xA4>(0x000088, 2); return true;
    // src/unknown/C0/C0A443.asm:78 STY $08
    case 0xC0A4A3: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0A443.asm:79 LDA ENTITY_TILE_HEIGHTS,Y
    case 0xC0A4A5: cpu.execute_instruction<0xB9>(0x002EB8, 3); return true;
    // src/unknown/C0/C0A443.asm:80 STA $00
    case 0xC0A4A8: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:81 LDA ENTITY_BYTE_WIDTHS,Y
    case 0xC0A4AA: cpu.execute_instruction<0xB9>(0x002E7C, 3); return true;
    // src/unknown/C0/C0A443.asm:82 STA DMA_COPY_SIZE
    case 0xC0A4AD: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/unknown/C0/C0A443.asm:83 LDA ENTITY_VRAM_ADDRESS,Y
    case 0xC0A4B0: cpu.execute_instruction<0xB9>(0x002D8C, 3); return true;
    // src/unknown/C0/C0A443.asm:84 STA DMA_COPY_VRAM_DEST
    case 0xC0A4B3: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A443.asm:85 LDA ENTITY_GRAPHICS_PTR_HIGH,Y
    case 0xC0A4B6: cpu.execute_instruction<0xB9>(0x002E04, 3); return true;
    // src/unknown/C0/C0A443.asm:86 STA $04
    case 0xC0A4B9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0A443.asm:87 LDA ENTITY_GRAPHICS_PTR_LOW,Y
    case 0xC0A4BB: cpu.execute_instruction<0xB9>(0x002DC8, 3); return true;
    // src/unknown/C0/C0A443.asm:88 STA $02
    case 0xC0A4BE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:89 LDA ENTITY_DIRECTIONS,Y
    case 0xC0A4C0: cpu.execute_instruction<0xB9>(0x002EF4, 3); return true;
    // src/unknown/C0/C0A443.asm:90 ASL
    case 0xC0A4C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:91 TAX
    case 0xC0A4C4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:92 LDA f:SPRITE_DIRECTION_MAPPING_4_DIRECTION,X
    case 0xC0A4C5: cpu.execute_instruction<0xBF>(0xC0A5EA, 4); return true;
    // src/unknown/C0/C0A443.asm:93 BEQ @UNKNOWN12
    case 0xC0A4C9: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0A443.asm:94 TAX
    case 0xC0A4CB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:95 LDA $02
    case 0xC0A4CC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:96 CLC
    case 0xC0A4CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:98 ADC #$0004
    case 0xC0A4CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000004, 2); else cpu.execute_instruction<0x69>(0x000004, 3); return true;
    // src/unknown/C0/C0A443.asm:98 ADC #$0004
    // Overlapping static entry reached from 0xC0A4CF.
    case 0xC0A4D1: cpu.execute_instruction<0x00>(0x0000CA, 2); return true;
    // src/unknown/C0/C0A443.asm:99 DEX
    case 0xC0A4D2: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:100 BNE @UNKNOWN11
    case 0xC0A4D3: cpu.execute_instruction<0xD0>(0x0000FA, 2); return true;
    // src/unknown/C0/C0A443.asm:101 STA $02
    case 0xC0A4D5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:103 LDA USE_SECOND_SPRITE_FRAME
    case 0xC0A4D7: cpu.execute_instruction<0xAD>(0x002C90, 3); return true;
    // src/unknown/C0/C0A443.asm:104 BEQ @UNKNOWN13
    case 0xC0A4DA: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C0A443.asm:105 INC $02
    case 0xC0A4DC: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:106 INC $02
    case 0xC0A4DE: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:108 LDA [$02]
    case 0xC0A4E0: cpu.execute_instruction<0xA7>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:109 AND #$0002
    case 0xC0A4E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C0A443.asm:109 AND #$0002
    // Overlapping static entry reached from 0xC0A4E2.
    case 0xC0A4E4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0A443.asm:110 BNE @UNKNOWN14
    case 0xC0A4E5: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/unknown/C0/C0A443.asm:111 LDA ENTITY_SURFACE_FLAGS,Y
    case 0xC0A4E7: cpu.execute_instruction<0xB9>(0x002FA8, 3); return true;
    // src/unknown/C0/C0A443.asm:112 STA $06
    case 0xC0A4EA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0A443.asm:113 AND #$0008
    case 0xC0A4EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/unknown/C0/C0A443.asm:113 AND #$0008
    // Overlapping static entry reached from 0xC0A4EC.
    case 0xC0A4EE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A443.asm:114 BEQ @UNKNOWN14
    case 0xC0A4EF: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C0/C0A443.asm:115 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A4F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0A443.asm:116 LDA #$0003
    case 0xC0A4F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008D03, 3); return true;
    // src/unknown/C0/C0A443.asm:117 STA DMA_COPY_MODE
    case 0xC0A4F5: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/unknown/C0/C0A443.asm:117 STA DMA_COPY_MODE
    // Overlapping static entry reached from 0xC0A4F3.
    case 0xC0A4F6: cpu.execute_instruction<0x91>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:118 LDA #.BANKBYTE(UNKNOWN_C40BE8)
    case 0xC0A4F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x008DC4, 3); return true;
    // src/unknown/C0/C0A443.asm:119 STA DMA_COPY_RAM_SRC + 2
    case 0xC0A4FA: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/unknown/C0/C0A443.asm:119 STA DMA_COPY_RAM_SRC + 2
    // Overlapping static entry reached from 0xC0A4F8.
    case 0xC0A4FB: cpu.execute_instruction<0x96>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xC0A4FD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A443.asm:121 LDA #.LOWORD(UNKNOWN_C40BE8)
    case 0xC0A4FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000B34, 3); return true;
    // src/unknown/C0/C0A443.asm:121 LDA #.LOWORD(UNKNOWN_C40BE8)
    // Overlapping static entry reached from 0xC0A4FF.
    case 0xC0A501: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:122 STA DMA_COPY_RAM_SRC
    case 0xC0A502: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A443.asm:123 JSL UNKNOWN_C0A56E
    case 0xC0A505: cpu.execute_instruction<0x22>(0xC0A54D, 4); return true;
    // src/unknown/C0/C0A443.asm:124 DEC $00
    case 0xC0A509: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:125 BEQ @UNKNOWN16
    case 0xC0A50B: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/unknown/C0/C0A443.asm:126 LDA $06
    case 0xC0A50D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0A443.asm:127 AND #$0004
    case 0xC0A50F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/unknown/C0/C0A443.asm:127 AND #$0004
    // Overlapping static entry reached from 0xC0A50F.
    case 0xC0A511: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A443.asm:128 BEQ @UNKNOWN14
    case 0xC0A512: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0A443.asm:129 JSL UNKNOWN_C0A56E
    case 0xC0A514: cpu.execute_instruction<0x22>(0xC0A54D, 4); return true;
    // src/unknown/C0/C0A443.asm:130 DEC $00
    case 0xC0A518: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:131 BEQ @UNKNOWN16
    case 0xC0A51A: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/unknown/C0/C0A443.asm:133 LDY $08
    case 0xC0A51C: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // src/unknown/C0/C0A443.asm:133 LDY $08
    // Overlapping static entry reached from 0xC01CA7.
    case 0xC0A51D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:134 LDA [$02]
    case 0xC0A51E: cpu.execute_instruction<0xA7>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:135 STA ENTITY_CURRENT_DISPLAYED_SPRITES,Y
    case 0xC0A520: cpu.execute_instruction<0x99>(0x001AB8, 3); return true;
    // src/unknown/C0/C0A443.asm:136 AND #$FFF0
    case 0xC0A523: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/unknown/C0/C0A443.asm:136 AND #$FFF0
    // Overlapping static entry reached from 0xC0A523.
    case 0xC0A525: cpu.execute_instruction<0xFF>(0x00948D, 4); return true;
    // src/unknown/C0/C0A443.asm:137 STA DMA_COPY_RAM_SRC
    case 0xC0A526: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A443.asm:138 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A529: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0A443.asm:139 LDA #$0000
    case 0xC0A52B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/unknown/C0/C0A443.asm:140 STA DMA_COPY_MODE
    case 0xC0A52D: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/unknown/C0/C0A443.asm:140 STA DMA_COPY_MODE
    // Overlapping static entry reached from 0xC0A52B.
    case 0xC0A52E: cpu.execute_instruction<0x91>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:141 LDA ENTITY_GRAPHICS_SPRITE_BANK,Y
    case 0xC0A530: cpu.execute_instruction<0xB9>(0x002E40, 3); return true;
    // src/unknown/C0/C0A443.asm:142 STA DMA_COPY_RAM_SRC + 2
    case 0xC0A533: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/unknown/C0/C0A443.asm:143 REP #PROC_FLAGS::ACCUM8
    case 0xC0A536: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A443.asm:145 JSL UNKNOWN_C0A56E
    case 0xC0A538: cpu.execute_instruction<0x22>(0xC0A54D, 4); return true;
    // src/unknown/C0/C0A443.asm:146 DEC $00
    case 0xC0A53C: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:147 BEQ @UNKNOWN16
    case 0xC0A53E: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0A443.asm:148 LDA DMA_COPY_RAM_SRC
    case 0xC0A540: cpu.execute_instruction<0xAD>(0x000094, 3); return true;
    // src/unknown/C0/C0A443.asm:149 CLC
    case 0xC0A543: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:150 ADC DMA_COPY_SIZE
    case 0xC0A544: cpu.execute_instruction<0x6D>(0x000092, 3); return true;
    // src/unknown/C0/C0A443.asm:151 STA DMA_COPY_RAM_SRC
    case 0xC0A547: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A443.asm:152 BRA @UNKNOWN15
    case 0xC0A54A: cpu.execute_instruction<0x80>(0x0000EC, 2); return true;
    // src/unknown/C0/C0A443.asm:154 RTL
    case 0xC0A54C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A56E.asm (unresolved).
bool execute_unresolved_c0_c0a56e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A56E.asm:3 LDA DMA_COPY_SIZE
    case 0xC0A54D: cpu.execute_instruction<0xAD>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:4 LSR
    case 0xC0A550: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:5 CLC
    case 0xC0A551: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:6 ADC DMA_COPY_VRAM_DEST
    case 0xC0A552: cpu.execute_instruction<0x6D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:7 DEC
    case 0xC0A555: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:8 EOR DMA_COPY_VRAM_DEST
    case 0xC0A556: cpu.execute_instruction<0x4D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:9 AND #$0100
    case 0xC0A559: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:9 AND #$0100
    // Overlapping static entry reached from 0xC0A559.
    case 0xC0A55B: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A56E.asm:10 BEQ @UNKNOWN0
    case 0xC0A55C: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C0/C0A56E.asm:10 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC0A55B.
    case 0xC0A55D: cpu.execute_instruction<0x4F>(0x0094AD, 4); return true;
    // src/unknown/C0/C0A56E.asm:11 LDA DMA_COPY_RAM_SRC
    case 0xC0A55E: cpu.execute_instruction<0xAD>(0x000094, 3); return true;
    // src/unknown/C0/C0A56E.asm:12 PHA
    case 0xC0A561: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:13 LDA DMA_COPY_SIZE
    case 0xC0A562: cpu.execute_instruction<0xAD>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:14 PHA
    case 0xC0A565: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:15 LDA DMA_COPY_VRAM_DEST
    case 0xC0A566: cpu.execute_instruction<0xAD>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:16 PHA
    case 0xC0A569: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:17 CLC
    case 0xC0A56A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:18 ADC #$0100
    case 0xC0A56B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:18 ADC #$0100
    // Overlapping static entry reached from 0xC0A56B.
    case 0xC0A56D: cpu.execute_instruction<0x01>(0x000029, 2); return true;
    // src/unknown/C0/C0A56E.asm:19 AND #$FF00
    case 0xC0A56E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0A56E.asm:19 AND #$FF00
    // Overlapping static entry reached from 0xC0A56D.
    case 0xC0A56F: cpu.execute_instruction<0x00>(0x0000FF, 2); return true;
    // src/unknown/C0/C0A56E.asm:19 AND #$FF00
    // Overlapping static entry reached from 0xC0A56E.
    case 0xC0A570: cpu.execute_instruction<0xFF>(0xED3848, 4); return true;
    // src/unknown/C0/C0A56E.asm:20 PHA
    case 0xC0A571: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:21 SEC
    case 0xC0A572: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:22 SBC DMA_COPY_VRAM_DEST
    case 0xC0A573: cpu.execute_instruction<0xED>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:22 SBC DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC0A570.
    case 0xC0A574: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C0/C0A56E.asm:23 ASL
    case 0xC0A576: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:24 STA DMA_COPY_SIZE
    case 0xC0A577: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:25 JSL PREPARE_VRAM_COPY_COMMON
    case 0xC0A57A: cpu.execute_instruction<0x22>(0xC08643, 4); return true;
    // src/unknown/C0/C0A56E.asm:27 LDA DMA_COPY_RAM_SRC
    case 0xC0A57E: cpu.execute_instruction<0xAD>(0x000094, 3); return true;
    // src/unknown/C0/C0A56E.asm:28 CLC
    case 0xC0A581: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:29 ADC DMA_COPY_SIZE
    case 0xC0A582: cpu.execute_instruction<0x6D>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:30 STA DMA_COPY_RAM_SRC
    case 0xC0A585: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A56E.asm:31 PLA
    case 0xC0A588: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:32 CLC
    case 0xC0A589: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:33 ADC #$0100
    case 0xC0A58A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:33 ADC #$0100
    // Overlapping static entry reached from 0xC0A58A.
    case 0xC0A58C: cpu.execute_instruction<0x01>(0x00008D, 2); return true;
    // src/unknown/C0/C0A56E.asm:34 STA DMA_COPY_VRAM_DEST
    case 0xC0A58D: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:34 STA DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC0A58C.
    case 0xC0A58E: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C0/C0A56E.asm:35 PLX
    case 0xC0A590: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:36 PLA
    case 0xC0A591: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:37 PHA
    case 0xC0A592: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:38 PHX
    case 0xC0A593: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:39 SEC
    case 0xC0A594: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:40 SBC DMA_COPY_SIZE
    case 0xC0A595: cpu.execute_instruction<0xED>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:41 STA DMA_COPY_SIZE
    case 0xC0A598: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:42 JSL PREPARE_VRAM_COPY_COMMON
    case 0xC0A59B: cpu.execute_instruction<0x22>(0xC08643, 4); return true;
    // src/unknown/C0/C0A56E.asm:44 PLA
    case 0xC0A59F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:45 STA DMA_COPY_VRAM_DEST
    case 0xC0A5A0: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:46 PLA
    case 0xC0A5A3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:47 STA DMA_COPY_SIZE
    case 0xC0A5A4: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:48 PLA
    case 0xC0A5A7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:49 STA DMA_COPY_RAM_SRC
    case 0xC0A5A8: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A56E.asm:50 BRA @UNKNOWN1
    case 0xC0A5AB: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C0A56E.asm:52 JSL PREPARE_VRAM_COPY_COMMON
    case 0xC0A5AD: cpu.execute_instruction<0x22>(0xC08643, 4); return true;
    // src/unknown/C0/C0A56E.asm:55 LDA DMA_COPY_VRAM_DEST
    case 0xC0A5B1: cpu.execute_instruction<0xAD>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:56 AND #$0100
    case 0xC0A5B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:56 AND #$0100
    // Overlapping static entry reached from 0xC0A5B4.
    case 0xC0A5B6: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C0/C0A56E.asm:57 BNE @UNKNOWN2
    case 0xC0A5B7: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0A56E.asm:57 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC0A5B6.
    case 0xC0A5B8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:58 LDA DMA_COPY_VRAM_DEST
    case 0xC0A5B9: cpu.execute_instruction<0xAD>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:59 CLC
    case 0xC0A5BC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:60 ADC #$0100
    case 0xC0A5BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:60 ADC #$0100
    // Overlapping static entry reached from 0xC0A5BD.
    case 0xC0A5BF: cpu.execute_instruction<0x01>(0x00008D, 2); return true;
    // src/unknown/C0/C0A56E.asm:61 STA DMA_COPY_VRAM_DEST
    case 0xC0A5C0: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:61 STA DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC0A5BF.
    case 0xC0A5C1: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C0/C0A56E.asm:62 RTL
    case 0xC0A5C3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:64 LDA DMA_COPY_SIZE
    case 0xC0A5C4: cpu.execute_instruction<0xAD>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:65 CLC
    case 0xC0A5C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:66 ADC #$0020
    case 0xC0A5C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/C0/C0A56E.asm:66 ADC #$0020
    // Overlapping static entry reached from 0xC0A5C8.
    case 0xC0A5CA: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0A56E.asm:67 AND #$FFC0
    case 0xC0A5CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x00FFC0, 3); return true;
    // src/unknown/C0/C0A56E.asm:67 AND #$FFC0
    // Overlapping static entry reached from 0xC0A5CB.
    case 0xC0A5CD: cpu.execute_instruction<0xFF>(0x6D184A, 4); return true;
    // src/unknown/C0/C0A56E.asm:68 LSR
    case 0xC0A5CE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:69 CLC
    case 0xC0A5CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:70 ADC DMA_COPY_VRAM_DEST
    case 0xC0A5D0: cpu.execute_instruction<0x6D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:70 ADC DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC0A5CD.
    case 0xC0A5D1: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C0/C0A56E.asm:71 PHA
    case 0xC0A5D3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:72 EOR DMA_COPY_VRAM_DEST
    case 0xC0A5D4: cpu.execute_instruction<0x4D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:73 AND #$0100
    case 0xC0A5D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:73 AND #$0100
    // Overlapping static entry reached from 0xC0A5D7.
    case 0xC0A5D9: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A56E.asm:74 BEQ @UNKNOWN3
    case 0xC0A5DA: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0A56E.asm:74 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC0A5D9.
    case 0xC0A5DB: cpu.execute_instruction<0x05>(0x000068, 2); return true;
    // src/unknown/C0/C0A56E.asm:75 PLA
    case 0xC0A5DC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:76 STA DMA_COPY_VRAM_DEST
    case 0xC0A5DD: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:77 RTL
    case 0xC0A5E0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:79 PLA
    case 0xC0A5E1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:80 SEC
    case 0xC0A5E2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:81 SBC #$0100
    case 0xC0A5E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:81 SBC #$0100
    // Overlapping static entry reached from 0xC0A5E3.
    case 0xC0A5E5: cpu.execute_instruction<0x01>(0x00008D, 2); return true;
    // src/unknown/C0/C0A56E.asm:82 STA DMA_COPY_VRAM_DEST
    case 0xC0A5E6: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:82 STA DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC0A5E5.
    case 0xC0A5E7: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C0/C0A56E.asm:83 RTL
    case 0xC0A5E9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A643.asm (unresolved).
bool execute_unresolved_c0_c0a643_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A643.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A622: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A643.asm:4 STY $94
    case 0xC0A626: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A643.asm:5 JSL SET_DIRECTION
    case 0xC0A628: cpu.execute_instruction<0x22>(0xC0A63E, 4); return true;
    // src/unknown/C0/C0A643.asm:6 STA ENTITY_NPC_IDS,X
    case 0xC0A62C: cpu.execute_instruction<0x9D>(0x003098, 3); return true;
    // src/unknown/C0/C0A643.asm:7 RTL
    case 0xC0A62F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A66D.asm (unresolved).
bool execute_unresolved_c0_c0a66d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A66D.asm:3 LDX $88
    case 0xC0A64C: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A66D.asm:4 STA ENTITY_DIRECTIONS,X
    case 0xC0A64E: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C0A66D.asm:5 RTL
    case 0xC0A651: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A673.asm (unresolved).
bool execute_unresolved_c0_c0a673_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A673.asm:3 LDX $88
    case 0xC0A652: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A673.asm:3 LDX $88
    // Overlapping static entry reached from 0xC0A6B4.
    case 0xC0A653: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0A673.asm:4 LDA ENTITY_DIRECTIONS,X
    case 0xC0A654: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/unknown/C0/C0A673.asm:5 RTL
    case 0xC0A657: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A685.asm (unresolved).
bool execute_unresolved_c0_c0a685_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A685.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A664: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A685.asm:4 STY $94
    case 0xC0A668: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A685.asm:6 LDX $88
    case 0xC0A66A: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A685.asm:7 STA ENTITY_MOVEMENT_SPEEDS,X
    case 0xC0A66C: cpu.execute_instruction<0x9D>(0x002F30, 3); return true;
    // src/unknown/C0/C0A685.asm:8 RTL
    case 0xC0A66F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A691.asm (unresolved).
bool execute_unresolved_c0_c0a691_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A691.asm:3 LDX $88
    case 0xC0A670: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A691.asm:4 LDA ENTITY_MOVEMENT_SPEEDS,X
    case 0xC0A672: cpu.execute_instruction<0xBD>(0x002F30, 3); return true;
    // src/unknown/C0/C0A691.asm:5 RTL
    case 0xC0A675: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A697.asm (unresolved).
bool execute_unresolved_c0_c0a697_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A697.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A676: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/unknown/C0/C0A697.asm:4 STY $94
    case 0xC0A67A: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A697.asm:5 JSL UNKNOWN_C0C83B
    case 0xC0A67C: cpu.execute_instruction<0x22>(0xC0C81D, 4); return true;
    // src/unknown/C0/C0A697.asm:6 RTL
    case 0xC0A680: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A6A2.asm (unresolved).
bool execute_unresolved_c0_c0a6a2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A6A2.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A681: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A6A2.asm:4 STY $94
    case 0xC0A685: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A6A2.asm:5 JSL UNKNOWN_C0CA4E
    case 0xC0A687: cpu.execute_instruction<0x22>(0xC0CA30, 4); return true;
    // src/unknown/C0/C0A6A2.asm:6 RTL
    case 0xC0A68B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A6AD.asm (unresolved).
bool execute_unresolved_c0_c0a6ad_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A6AD.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A68C: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A6AD.asm:4 STY $94
    case 0xC0A690: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A6AD.asm:5 JSL UNKNOWN_C0CBD3
    case 0xC0A692: cpu.execute_instruction<0x22>(0xC0CBB5, 4); return true;
    // src/unknown/C0/C0A6AD.asm:6 RTL
    case 0xC0A696: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A6B8.asm (unresolved).
bool execute_unresolved_c0_c0a6b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A6B8.asm:3 LDY #$0000
    case 0xC0A697: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0A6B8.asm:3 LDY #$0000
    // Overlapping static entry reached from 0xC0A697.
    case 0xC0A699: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0A6B8.asm:4 LDX $88
    case 0xC0A69A: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A6B8.asm:5 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A69C: cpu.execute_instruction<0xBD>(0x002C9C, 3); return true;
    // src/unknown/C0/C0A6B8.asm:6 BMI @UNKNOWN0
    case 0xC0A69F: cpu.execute_instruction<0x30>(0x000001, 2); return true;
    // src/unknown/C0/C0A6B8.asm:7 DEY
    case 0xC0A6A1: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0A6B8.asm:9 TYA
    case 0xC0A6A2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0A6B8.asm:10 RTL
    case 0xC0A6A3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A6C5.asm (unresolved).
bool execute_unresolved_c0_c0a6c5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A6C5.asm:3 LDX $88
    case 0xC0A6A4: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A6C5.asm:4 LDA ENTITY_OBSTACLE_FLAGS,X
    case 0xC0A6A6: cpu.execute_instruction<0xBD>(0x002CD8, 3); return true;
    // src/unknown/C0/C0A6C5.asm:5 RTL
    case 0xC0A6A9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A6CB.asm (unresolved).
bool execute_unresolved_c0_c0a6cb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A6CB.asm:3 LDX $88
    case 0xC0A6AA: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A6CB.asm:4 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0A6AC: cpu.execute_instruction<0xBD>(0x00305C, 3); return true;
    // src/unknown/C0/C0A6CB.asm:5 RTL
    case 0xC0A6AF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A6E3.asm (unresolved).
bool execute_unresolved_c0_c0a6e3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A6E3.asm:3 LDX $88
    case 0xC0A6C2: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A6E3.asm:4 STX SPRITE_UPDATE_ENTITY_OFFSET
    case 0xC0A6C4: cpu.execute_instruction<0x8E>(0x002C94, 3); return true;
    // src/unknown/C0/C0A6E3.asm:5 LDA ENTITY_WALKING_STYLES,X
    case 0xC0A6C7: cpu.execute_instruction<0xBD>(0x003020, 3); return true;
    // src/unknown/C0/C0A6E3.asm:6 XBA
    case 0xC0A6CA: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0A6E3.asm:7 ORA ENTITY_DIRECTIONS,X
    case 0xC0A6CB: cpu.execute_instruction<0x1D>(0x002EF4, 3); return true;
    // src/unknown/C0/C0A6E3.asm:8 CMP ENTITY_ANIMATION_FINGERPRINTS,X
    case 0xC0A6CE: cpu.execute_instruction<0xDD>(0x001AF4, 3); return true;
    // src/unknown/C0/C0A6E3.asm:9 BEQ @UNKNOWN0
    case 0xC0A6D1: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0A6E3.asm:10 STA ENTITY_ANIMATION_FINGERPRINTS,X
    case 0xC0A6D3: cpu.execute_instruction<0x9D>(0x001AF4, 3); return true;
    // src/unknown/C0/C0A6E3.asm:10 STA ENTITY_ANIMATION_FINGERPRINTS,X
    // Overlapping static entry reached from 0xC0A752.
    case 0xC0A6D4: cpu.execute_instruction<0xF4>(0x00201A, 3); return true;
    // src/unknown/C0/C0A6E3.asm:11 JSR UNKNOWN_C0A794
    case 0xC0A6D6: cpu.execute_instruction<0x20>(0x00A773, 3); return true;
    // src/unknown/C0/C0A6E3.asm:11 JSR UNKNOWN_C0A794
    // Overlapping static entry reached from 0xC0A6D4.
    case 0xC0A6D7: cpu.execute_instruction<0x73>(0x0000A7, 2); return true;
    // src/unknown/C0/C0A6E3.asm:12 RTL
    case 0xC0A6D9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A6E3.asm:14 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0A6DA: cpu.execute_instruction<0xBD>(0x000FF8, 3); return true;
    // src/unknown/C0/C0A6E3.asm:15 BPL @UNKNOWN1
    case 0xC0A6DD: cpu.execute_instruction<0x10>(0x000008, 2); return true;
    // src/unknown/C0/C0A6E3.asm:16 AND #$FFFF ^ SPRITE_TABLE_10_FLAGS::UNKNOWN15
    case 0xC0A6DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C0A6E3.asm:16 AND #$FFFF ^ SPRITE_TABLE_10_FLAGS::UNKNOWN15
    // Overlapping static entry reached from 0xC0A6DF.
    case 0xC0A6E1: cpu.execute_instruction<0x7F>(0x0FF89D, 4); return true;
    // src/unknown/C0/C0A6E3.asm:17 STA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0A6E2: cpu.execute_instruction<0x9D>(0x000FF8, 3); return true;
    // src/unknown/C0/C0A6E3.asm:18 BRA @UNKNOWN5
    case 0xC0A6E5: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C0/C0A6E3.asm:20 AND #$2000
    case 0xC0A6E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/unknown/C0/C0A6E3.asm:20 AND #$2000
    // Overlapping static entry reached from 0xC0A6E7.
    case 0xC0A6E9: cpu.execute_instruction<0x20>(0x000AF0, 3); return true;
    // src/unknown/C0/C0A6E3.asm:21 BEQ @UNKNOWN2
    case 0xC0A6EA: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C0A6E3.asm:22 LDA ENTITY_ANIMATION_FRAME,X
    case 0xC0A6EC: cpu.execute_instruction<0xBD>(0x0010E8, 3); return true;
    // src/unknown/C0/C0A6E3.asm:23 BEQ @UNKNOWN6
    case 0xC0A6EF: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/unknown/C0/C0A6E3.asm:24 STZ ENTITY_ANIMATION_FRAME,X
    case 0xC0A6F1: cpu.execute_instruction<0x9E>(0x0010E8, 3); return true;
    // src/unknown/C0/C0A6E3.asm:25 BRA @UNKNOWN5
    case 0xC0A6F4: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/unknown/C0/C0A6E3.asm:27 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0A6F6: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/unknown/C0/C0A6E3.asm:28 BNE @UNKNOWN6
    case 0xC0A6F9: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/unknown/C0/C0A6E3.asm:29 DEC ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC0A6FB: cpu.execute_instruction<0xDE>(0x000ECC, 3); return true;
    // src/unknown/C0/C0A6E3.asm:30 BMI @UNKNOWN3
    case 0xC0A6FE: cpu.execute_instruction<0x30>(0x000002, 2); return true;
    // src/unknown/C0/C0A6E3.asm:31 BNE @UNKNOWN6
    case 0xC0A700: cpu.execute_instruction<0xD0>(0x000030, 2); return true;
    // src/unknown/C0/C0A6E3.asm:33 LDA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC0A702: cpu.execute_instruction<0xBD>(0x000F08, 3); return true;
    // src/unknown/C0/C0A6E3.asm:34 STA ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC0A705: cpu.execute_instruction<0x9D>(0x000ECC, 3); return true;
    // src/unknown/C0/C0A6E3.asm:35 LDA ENTITY_ANIMATION_FRAME,X
    case 0xC0A708: cpu.execute_instruction<0xBD>(0x0010E8, 3); return true;
    // src/unknown/C0/C0A6E3.asm:36 EOR #$0002
    case 0xC0A70B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000002, 2); else cpu.execute_instruction<0x49>(0x000002, 3); return true;
    // src/unknown/C0/C0A6E3.asm:36 EOR #$0002
    // Overlapping static entry reached from 0xC0A70B.
    case 0xC0A70D: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0A6E3.asm:37 STA ENTITY_ANIMATION_FRAME,X
    case 0xC0A70E: cpu.execute_instruction<0x9D>(0x0010E8, 3); return true;
    // src/unknown/C0/C0A6E3.asm:38 BNE @UNKNOWN5
    case 0xC0A711: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/unknown/C0/C0A6E3.asm:39 CPX FOOTSTEP_SOUND_IGNORE_ENTITY
    case 0xC0A713: cpu.execute_instruction<0xEC>(0x002C96, 3); return true;
    // src/unknown/C0/C0A6E3.asm:40 BNE @UNKNOWN5
    case 0xC0A716: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C0/C0A6E3.asm:41 LDX FOOTSTEP_SOUND_ID_OVERRIDE
    case 0xC0A718: cpu.execute_instruction<0xAE>(0x002C9A, 3); return true;
    // src/unknown/C0/C0A6E3.asm:42 BNE @UNKNOWN4
    case 0xC0A71B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C0A6E3.asm:43 LDX FOOTSTEP_SOUND_ID
    case 0xC0A71D: cpu.execute_instruction<0xAE>(0x002C98, 3); return true;
    // src/unknown/C0/C0A6E3.asm:45 LDA f:FOOTSTEP_SOUND_TABLE,X
    case 0xC0A720: cpu.execute_instruction<0xBF>(0xC40B20, 4); return true;
    // src/unknown/C0/C0A6E3.asm:46 BEQ @UNKNOWN5
    case 0xC0A724: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C0A6E3.asm:47 LDX DISABLED_TRANSITIONS
    case 0xC0A726: cpu.execute_instruction<0xAE>(0x00B68A, 3); return true;
    // src/unknown/C0/C0A6E3.asm:48 BNE @UNKNOWN5
    case 0xC0A729: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C0A6E3.asm:49 JSL PLAY_SOUND
    case 0xC0A72B: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C0/C0A6E3.asm:51 JSR UNKNOWN_C0A794
    case 0xC0A72F: cpu.execute_instruction<0x20>(0x00A773, 3); return true;
    // src/unknown/C0/C0A6E3.asm:53 LDX $88
    case 0xC0A732: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A6E3.asm:54 LDA PSI_TELEPORT_DESTINATION
    case 0xC0A734: cpu.execute_instruction<0xAD>(0x00A141, 3); return true;
    // src/unknown/C0/C0A6E3.asm:55 BNE @UNKNOWN10
    case 0xC0A737: cpu.execute_instruction<0xD0>(0x000025, 2); return true;
    // src/unknown/C0/C0A6E3.asm:56 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0A739: cpu.execute_instruction<0xAD>(0x0060DE, 3); return true;
    // src/unknown/C0/C0A6E3.asm:57 BEQ @UNKNOWN10
    case 0xC0A73C: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C0/C0A6E3.asm:58 CMP #$002D
    case 0xC0A73E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002D, 2); else cpu.execute_instruction<0xC9>(0x00002D, 3); return true;
    // src/unknown/C0/C0A6E3.asm:58 CMP #$002D
    // Overlapping static entry reached from 0xC0A73E.
    case 0xC0A740: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0A6E3.asm:59 BCS @UNKNOWN7
    case 0xC0A741: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0A6E3.asm:60 AND #$0003
    case 0xC0A743: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C0A6E3.asm:60 AND #$0003
    // Overlapping static entry reached from 0xC0A743.
    case 0xC0A745: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0A6E3.asm:61 BNE @UNKNOWN8
    case 0xC0A746: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C0A6E3.asm:63 AND #$0001
    case 0xC0A748: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0A6E3.asm:63 AND #$0001
    // Overlapping static entry reached from 0xC0A748.
    case 0xC0A74A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0A6E3.asm:64 BNE @UNKNOWN8
    case 0xC0A74B: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0A6E3.asm:65 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC0A74D: cpu.execute_instruction<0xBD>(0x001160, 3); return true;
    // src/unknown/C0/C0A6E3.asm:66 ORA #$8000
    case 0xC0A750: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C0/C0A6E3.asm:66 ORA #$8000
    // Overlapping static entry reached from 0xC0A750.
    case 0xC0A752: cpu.execute_instruction<0x80>(0x000080, 2); return true;
    // src/unknown/C0/C0A6E3.asm:67 BRA @UNKNOWN9
    case 0xC0A753: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C0A6E3.asm:69 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC0A755: cpu.execute_instruction<0xBD>(0x001160, 3); return true;
    // src/unknown/C0/C0A6E3.asm:70 AND #$7FFF
    case 0xC0A758: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C0A6E3.asm:70 AND #$7FFF
    // Overlapping static entry reached from 0xC0A758.
    case 0xC0A75A: cpu.execute_instruction<0x7F>(0x11609D, 4); return true;
    // src/unknown/C0/C0A6E3.asm:72 STA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC0A75B: cpu.execute_instruction<0x9D>(0x001160, 3); return true;
    // src/unknown/C0/C0A6E3.asm:74 RTL
    case 0xC0A75E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A780.asm (unresolved).
bool execute_unresolved_c0_c0a780_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A780.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC0A75F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A780.asm:4 PHD
    case 0xC0A761: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:5 PHA
    case 0xC0A762: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:6 TDC
    case 0xC0A763: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:7 SEC
    case 0xC0A764: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:8 SBC #$0008
    case 0xC0A765: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C0/C0A780.asm:8 SBC #$0008
    // Overlapping static entry reached from 0xC0A765.
    case 0xC0A767: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C0A780.asm:9 TCD
    case 0xC0A768: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:10 PLA
    case 0xC0A769: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:11 ASL
    case 0xC0A76A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:12 STA SPRITE_UPDATE_ENTITY_OFFSET
    case 0xC0A76B: cpu.execute_instruction<0x8D>(0x002C94, 3); return true;
    // src/unknown/C0/C0A780.asm:13 JSR UNKNOWN_C0A794
    case 0xC0A76E: cpu.execute_instruction<0x20>(0x00A773, 3); return true;
    // src/unknown/C0/C0A780.asm:14 PLD
    case 0xC0A771: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:15 RTL
    case 0xC0A772: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A794.asm (unresolved).
bool execute_unresolved_c0_c0a794_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A794.asm:3 LDY SPRITE_UPDATE_ENTITY_OFFSET
    case 0xC0A773: cpu.execute_instruction<0xAC>(0x002C94, 3); return true;
    // src/unknown/C0/C0A794.asm:4 LDA ENTITY_TILE_HEIGHTS,Y
    case 0xC0A776: cpu.execute_instruction<0xB9>(0x002EB8, 3); return true;
    // src/unknown/C0/C0A794.asm:5 STA $00
    case 0xC0A779: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:6 LDA ENTITY_BYTE_WIDTHS,Y
    case 0xC0A77B: cpu.execute_instruction<0xB9>(0x002E7C, 3); return true;
    // src/unknown/C0/C0A794.asm:7 STA DMA_COPY_SIZE
    case 0xC0A77E: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/unknown/C0/C0A794.asm:8 LDA ENTITY_VRAM_ADDRESS,Y
    case 0xC0A781: cpu.execute_instruction<0xB9>(0x002D8C, 3); return true;
    // src/unknown/C0/C0A794.asm:9 STA DMA_COPY_VRAM_DEST
    case 0xC0A784: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A794.asm:10 LDA ENTITY_GRAPHICS_PTR_HIGH,Y
    case 0xC0A787: cpu.execute_instruction<0xB9>(0x002E04, 3); return true;
    // src/unknown/C0/C0A794.asm:11 STA $04
    case 0xC0A78A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0A794.asm:12 LDA ENTITY_DIRECTIONS,Y
    case 0xC0A78C: cpu.execute_instruction<0xB9>(0x002EF4, 3); return true;
    // src/unknown/C0/C0A794.asm:13 ASL
    case 0xC0A78F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:14 TAX
    case 0xC0A790: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:15 LDA f:SPRITE_DIRECTION_MAPPING_8_DIRECTION,X
    case 0xC0A791: cpu.execute_instruction<0xBF>(0xC0A602, 4); return true;
    // src/unknown/C0/C0A794.asm:16 ASL
    case 0xC0A795: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:17 ASL
    case 0xC0A796: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:18 CLC
    case 0xC0A797: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:19 ADC ENTITY_GRAPHICS_PTR_LOW,Y
    case 0xC0A798: cpu.execute_instruction<0x79>(0x002DC8, 3); return true;
    // src/unknown/C0/C0A794.asm:20 ADC ENTITY_ANIMATION_FRAME,Y
    case 0xC0A79B: cpu.execute_instruction<0x79>(0x0010E8, 3); return true;
    // src/unknown/C0/C0A794.asm:21 STA $02
    case 0xC0A79E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0A794.asm:22 LDA [$02]
    case 0xC0A7A0: cpu.execute_instruction<0xA7>(0x000002, 2); return true;
    // src/unknown/C0/C0A794.asm:23 AND #$0002
    case 0xC0A7A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C0A794.asm:23 AND #$0002
    // Overlapping static entry reached from 0xC0A7A2.
    case 0xC0A7A4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0A794.asm:24 BNE @UNKNOWN0
    case 0xC0A7A5: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/unknown/C0/C0A794.asm:25 LDA ENTITY_SURFACE_FLAGS,Y
    case 0xC0A7A7: cpu.execute_instruction<0xB9>(0x002FA8, 3); return true;
    // src/unknown/C0/C0A794.asm:26 STA $06
    case 0xC0A7AA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0A794.asm:27 AND #$0008
    case 0xC0A7AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/unknown/C0/C0A794.asm:27 AND #$0008
    // Overlapping static entry reached from 0xC0A7AC.
    case 0xC0A7AE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A794.asm:28 BEQ @UNKNOWN0
    case 0xC0A7AF: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C0/C0A794.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A7B1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0A794.asm:30 LDA #$0003
    case 0xC0A7B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008D03, 3); return true;
    // src/unknown/C0/C0A794.asm:31 STA DMA_COPY_MODE
    case 0xC0A7B5: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/unknown/C0/C0A794.asm:31 STA DMA_COPY_MODE
    // Overlapping static entry reached from 0xC0A7B3.
    case 0xC0A7B6: cpu.execute_instruction<0x91>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:32 LDA #.BANKBYTE(UNKNOWN_C40BE8)
    case 0xC0A7B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x008DC4, 3); return true;
    // src/unknown/C0/C0A794.asm:33 STA DMA_COPY_RAM_SRC + 2
    case 0xC0A7BA: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/unknown/C0/C0A794.asm:33 STA DMA_COPY_RAM_SRC + 2
    // Overlapping static entry reached from 0xC0A7B8.
    case 0xC0A7BB: cpu.execute_instruction<0x96>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC0A7BD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A794.asm:35 LDA #.LOWORD(UNKNOWN_C40BE8)
    case 0xC0A7BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000B34, 3); return true;
    // src/unknown/C0/C0A794.asm:35 LDA #.LOWORD(UNKNOWN_C40BE8)
    // Overlapping static entry reached from 0xC0A7BF.
    case 0xC0A7C1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:36 STA DMA_COPY_RAM_SRC
    case 0xC0A7C2: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A794.asm:37 JSL UNKNOWN_C0A56E
    case 0xC0A7C5: cpu.execute_instruction<0x22>(0xC0A54D, 4); return true;
    // src/unknown/C0/C0A794.asm:38 DEC $00
    case 0xC0A7C9: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:39 BEQ @UNKNOWN2
    case 0xC0A7CB: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/unknown/C0/C0A794.asm:40 LDA $06
    case 0xC0A7CD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0A794.asm:41 AND #$0004
    case 0xC0A7CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/unknown/C0/C0A794.asm:41 AND #$0004
    // Overlapping static entry reached from 0xC0A7CF.
    case 0xC0A7D1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A794.asm:42 BEQ @UNKNOWN0
    case 0xC0A7D2: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0A794.asm:43 JSL UNKNOWN_C0A56E
    case 0xC0A7D4: cpu.execute_instruction<0x22>(0xC0A54D, 4); return true;
    // src/unknown/C0/C0A794.asm:44 DEC $00
    case 0xC0A7D8: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:45 BEQ @UNKNOWN2
    case 0xC0A7DA: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/unknown/C0/C0A794.asm:47 LDY SPRITE_UPDATE_ENTITY_OFFSET
    case 0xC0A7DC: cpu.execute_instruction<0xAC>(0x002C94, 3); return true;
    // src/unknown/C0/C0A794.asm:48 LDA [$02]
    case 0xC0A7DF: cpu.execute_instruction<0xA7>(0x000002, 2); return true;
    // src/unknown/C0/C0A794.asm:49 STA ENTITY_CURRENT_DISPLAYED_SPRITES,Y
    case 0xC0A7E1: cpu.execute_instruction<0x99>(0x001AB8, 3); return true;
    // src/unknown/C0/C0A794.asm:50 AND #$FFFE
    case 0xC0A7E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C0/C0A794.asm:50 AND #$FFFE
    // Overlapping static entry reached from 0xC0A7E4.
    case 0xC0A7E6: cpu.execute_instruction<0xFF>(0x00948D, 4); return true;
    // src/unknown/C0/C0A794.asm:51 STA DMA_COPY_RAM_SRC
    case 0xC0A7E7: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A794.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A7EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0A794.asm:53 LDA #$0000
    case 0xC0A7EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/unknown/C0/C0A794.asm:54 STA DMA_COPY_MODE
    case 0xC0A7EE: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/unknown/C0/C0A794.asm:54 STA DMA_COPY_MODE
    // Overlapping static entry reached from 0xC0A7EC.
    case 0xC0A7EF: cpu.execute_instruction<0x91>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:55 LDA ENTITY_GRAPHICS_SPRITE_BANK,Y
    case 0xC0A7F1: cpu.execute_instruction<0xB9>(0x002E40, 3); return true;
    // src/unknown/C0/C0A794.asm:56 STA DMA_COPY_RAM_SRC + 2
    case 0xC0A7F4: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/unknown/C0/C0A794.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC0A7F7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A794.asm:59 JSL UNKNOWN_C0A56E
    case 0xC0A7F9: cpu.execute_instruction<0x22>(0xC0A54D, 4); return true;
    // src/unknown/C0/C0A794.asm:60 DEC $00
    case 0xC0A7FD: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:61 BEQ @UNKNOWN2
    case 0xC0A7FF: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0A794.asm:62 LDA DMA_COPY_RAM_SRC
    case 0xC0A801: cpu.execute_instruction<0xAD>(0x000094, 3); return true;
    // src/unknown/C0/C0A794.asm:63 CLC
    case 0xC0A804: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:64 ADC DMA_COPY_SIZE
    case 0xC0A805: cpu.execute_instruction<0x6D>(0x000092, 3); return true;
    // src/unknown/C0/C0A794.asm:65 STA DMA_COPY_RAM_SRC
    case 0xC0A808: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A794.asm:66 BRA @UNKNOWN1
    case 0xC0A80B: cpu.execute_instruction<0x80>(0x0000EC, 2); return true;
    // src/unknown/C0/C0A794.asm:68 RTS
    case 0xC0A80D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A841.asm (unresolved).
bool execute_unresolved_c0_c0a841_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A841.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A820: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A841.asm:4 STY $94
    case 0xC0A824: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A841.asm:5 JSL PLAY_SOUND
    case 0xC0A826: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C0/C0A841.asm:6 RTL
    case 0xC0A82A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A84C.asm (unresolved).
bool execute_unresolved_c0_c0a84c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A84C.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A82B: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A84C.asm:4 STY $94
    case 0xC0A82F: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A84C.asm:5 JSL GET_EVENT_FLAG
    case 0xC0A831: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C0/C0A84C.asm:6 RTL
    case 0xC0A835: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A857.asm (unresolved).
bool execute_unresolved_c0_c0a857_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A857.asm:3 PHA
    case 0xC0A836: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A857.asm:4 JSL MOVEMENT_DATA_READ16
    case 0xC0A837: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A857.asm:5 STY $94
    case 0xC0A83B: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A857.asm:6 PLX
    case 0xC0A83D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A857.asm:7 JSL SET_EVENT_FLAG
    case 0xC0A83E: cpu.execute_instruction<0x22>(0xC21506, 4); return true;
    // src/unknown/C0/C0A857.asm:8 RTL
    case 0xC0A842: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A864.asm (unresolved).
bool execute_unresolved_c0_c0a864_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A864.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A843: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/unknown/C0/C0A864.asm:4 STY $94
    case 0xC0A847: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A864.asm:5 JSL UNKNOWN_C46C9B
    case 0xC0A849: cpu.execute_instruction<0x22>(0xC44A1F, 4); return true;
    // src/unknown/C0/C0A864.asm:6 RTL
    case 0xC0A84D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A86F.asm (unresolved).
bool execute_unresolved_c0_c0a86f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A86F.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A84E: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A86F.asm:4 STY $94
    case 0xC0A852: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A86F.asm:5 JSL UNKNOWN_C46CC7
    case 0xC0A854: cpu.execute_instruction<0x22>(0xC44A4B, 4); return true;
    // src/unknown/C0/C0A86F.asm:6 RTL
    case 0xC0A858: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A87A.asm (unresolved).
bool execute_unresolved_c0_c0a87a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A87A.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A859: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A87A.asm:4 PHA
    case 0xC0A85D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A87A.asm:5 STY $94
    case 0xC0A85E: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A87A.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A860: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A87A.asm:7 STY $94
    case 0xC0A864: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A87A.asm:8 PLX
    case 0xC0A866: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A87A.asm:9 JSL UNKNOWN_C46CF5
    case 0xC0A867: cpu.execute_instruction<0x22>(0xC44A79, 4); return true;
    // src/unknown/C0/C0A87A.asm:10 RTL
    case 0xC0A86B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A88D.asm (unresolved).
bool execute_unresolved_c0_c0a88d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A88D.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A86C: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A88D.asm:4 PHA
    case 0xC0A870: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A88D.asm:5 STY $94
    case 0xC0A871: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A88D.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A873: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A88D.asm:7 STY $94
    case 0xC0A877: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A88D.asm:8 PLX
    case 0xC0A879: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A88D.asm:9 JSL UNKNOWN_C46E4F
    case 0xC0A87A: cpu.execute_instruction<0x22>(0xC44BD3, 4); return true;
    // src/unknown/C0/C0A88D.asm:10 RTL
    case 0xC0A87E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8A0.asm (unresolved).
bool execute_unresolved_c0_c0a8a0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8A0.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A87F: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A8A0.asm:4 PHA
    case 0xC0A883: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A8A0.asm:5 STY $94
    case 0xC0A884: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A8A0.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A886: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A8A0.asm:7 STY $94
    case 0xC0A88A: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A8A0.asm:8 PLX
    case 0xC0A88C: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A8A0.asm:9 JSL UNKNOWN_C466F0
    case 0xC0A88D: cpu.execute_instruction<0x22>(0xC44466, 4); return true;
    // src/unknown/C0/C0A8A0.asm:10 RTL
    case 0xC0A891: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8B3.asm (unresolved).
bool execute_unresolved_c0_c0a8b3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8B3.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A892: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A8B3.asm:4 PHA
    case 0xC0A896: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A8B3.asm:5 STY $94
    case 0xC0A897: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A8B3.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A899: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A8B3.asm:7 STY $94
    case 0xC0A89D: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A8B3.asm:8 PLX
    case 0xC0A89F: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A8B3.asm:9 JSL UNKNOWN_C46C5E
    case 0xC0A8A0: cpu.execute_instruction<0x22>(0xC449E2, 4); return true;
    // src/unknown/C0/C0A8B3.asm:10 RTL
    case 0xC0A8A4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8C6.asm (unresolved).
bool execute_unresolved_c0_c0a8c6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8C6.asm:3 LDA #$0000
    case 0xC0A8A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0A8C6.asm:3 LDA #$0000
    // Overlapping static entry reached from 0xC0A8A5.
    case 0xC0A8A7: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C0/C0A8C6.asm:4 LDX #$0000
    case 0xC0A8A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0A8C6.asm:4 LDX #$0000
    // Overlapping static entry reached from 0xC0A8A8.
    case 0xC0A8AA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0A8C6.asm:5 JSL UNKNOWN_C47143
    case 0xC0A8AB: cpu.execute_instruction<0x22>(0xC44EC7, 4); return true;
    // src/unknown/C0/C0A8C6.asm:6 RTL
    case 0xC0A8AF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8D1.asm (unresolved).
bool execute_unresolved_c0_c0a8d1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8D1.asm:3 LDA #$0001
    case 0xC0A8B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0A8D1.asm:3 LDA #$0001
    // Overlapping static entry reached from 0xC0A8B0.
    case 0xC0A8B2: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C0/C0A8D1.asm:4 LDX #$0000
    case 0xC0A8B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0A8D1.asm:4 LDX #$0000
    // Overlapping static entry reached from 0xC0A8B3.
    case 0xC0A8B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0A8D1.asm:5 JSL UNKNOWN_C47143
    case 0xC0A8B6: cpu.execute_instruction<0x22>(0xC44EC7, 4); return true;
    // src/unknown/C0/C0A8D1.asm:6 RTL
    case 0xC0A8BA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8DC.asm (unresolved).
bool execute_unresolved_c0_c0a8dc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8DC.asm:3 LDA #$0000
    case 0xC0A8BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0A8DC.asm:3 LDA #$0000
    // Overlapping static entry reached from 0xC0A8BB.
    case 0xC0A8BD: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C0/C0A8DC.asm:4 LDX #$0001
    case 0xC0A8BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0A8DC.asm:4 LDX #$0001
    // Overlapping static entry reached from 0xC0A8BE.
    case 0xC0A8C0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0A8DC.asm:5 JSL UNKNOWN_C47143
    case 0xC0A8C1: cpu.execute_instruction<0x22>(0xC44EC7, 4); return true;
    // src/unknown/C0/C0A8DC.asm:6 RTL
    case 0xC0A8C5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8E7.asm (unresolved).
bool execute_unresolved_c0_c0a8e7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8E7.asm:3 LDA #$0000
    case 0xC0A8C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0A8E7.asm:3 LDA #$0000
    // Overlapping static entry reached from 0xC0A8C6.
    case 0xC0A8C8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0A8E7.asm:4 JSL UNKNOWN_C472A8
    case 0xC0A8C9: cpu.execute_instruction<0x22>(0xC4502C, 4); return true;
    // src/unknown/C0/C0A8E7.asm:5 RTL
    case 0xC0A8CD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8EF.asm (unresolved).
bool execute_unresolved_c0_c0a8ef_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8EF.asm:3 LDA #$0001
    case 0xC0A8CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0A8EF.asm:3 LDA #$0001
    // Overlapping static entry reached from 0xC0A8CE.
    case 0xC0A8D0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0A8EF.asm:4 JSL UNKNOWN_C472A8
    case 0xC0A8D1: cpu.execute_instruction<0x22>(0xC4502C, 4); return true;
    // src/unknown/C0/C0A8EF.asm:5 RTL
    case 0xC0A8D5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A92D.asm (unresolved).
bool execute_unresolved_c0_c0a92d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A92D.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A90C: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A92D.asm:4 STY $94
    case 0xC0A910: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A92D.asm:5 JSL UNKNOWN_C46B8D
    case 0xC0A912: cpu.execute_instruction<0x22>(0xC44909, 4); return true;
    // src/unknown/C0/C0A92D.asm:6 RTL
    case 0xC0A916: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A938.asm (unresolved).
bool execute_unresolved_c0_c0a938_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A938.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A917: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A938.asm:4 STY $94
    case 0xC0A91B: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A938.asm:5 JSL UNKNOWN_C46BBB
    case 0xC0A91D: cpu.execute_instruction<0x22>(0xC44937, 4); return true;
    // src/unknown/C0/C0A938.asm:6 RTL
    case 0xC0A921: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A94E.asm (unresolved).
bool execute_unresolved_c0_c0a94e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A94E.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A92D: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A94E.asm:4 STY $94
    case 0xC0A931: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A94E.asm:5 JSL UNKNOWN_C46984
    case 0xC0A933: cpu.execute_instruction<0x22>(0xC44700, 4); return true;
    // src/unknown/C0/C0A94E.asm:6 RTL
    case 0xC0A937: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A959.asm (unresolved).
bool execute_unresolved_c0_c0a959_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A959.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A938: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A959.asm:4 STY $94
    case 0xC0A93C: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A959.asm:5 JSL UNKNOWN_C469F1
    case 0xC0A93E: cpu.execute_instruction<0x22>(0xC4476D, 4); return true;
    // src/unknown/C0/C0A959.asm:6 RTL
    case 0xC0A942: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A964.asm (unresolved).
bool execute_unresolved_c0_c0a964_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A964.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A943: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A964.asm:4 PHA
    case 0xC0A947: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A964.asm:5 STY $94
    case 0xC0A948: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A964.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A94A: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A964.asm:7 STY $94
    case 0xC0A94E: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A964.asm:8 PLX
    case 0xC0A950: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A964.asm:9 JSL UNKNOWN_C47225
    case 0xC0A951: cpu.execute_instruction<0x22>(0xC44FA9, 4); return true;
    // src/unknown/C0/C0A964.asm:10 RTL
    case 0xC0A955: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A98B.asm (unresolved).
bool execute_unresolved_c0_c0a98b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A98B.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A96A: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A98B.asm:4 PHA
    case 0xC0A96E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A98B.asm:5 STY $94
    case 0xC0A96F: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A98B.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A971: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A98B.asm:7 TAX
    case 0xC0A975: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A98B.asm:8 STY $94
    case 0xC0A976: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A98B.asm:9 PLA
    case 0xC0A978: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A98B.asm:10 JSL UNKNOWN_C46534
    case 0xC0A979: cpu.execute_instruction<0x22>(0xC442A2, 4); return true;
    // src/unknown/C0/C0A98B.asm:11 RTL
    case 0xC0A97D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A99F.asm (unresolved).
bool execute_unresolved_c0_c0a99f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A99F.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A97E: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A99F.asm:4 PHA
    case 0xC0A982: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A99F.asm:5 STY $94
    case 0xC0A983: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A99F.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A985: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A99F.asm:7 TAX
    case 0xC0A989: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A99F.asm:8 STY $94
    case 0xC0A98A: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A99F.asm:9 PLA
    case 0xC0A98C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A99F.asm:10 JSL CREATE_ENTITY_AT_V01_PLUS_BG3Y
    case 0xC0A98D: cpu.execute_instruction<0x22>(0xC4BF08, 4); return true;
    // src/unknown/C0/C0A99F.asm:10 JSL CREATE_ENTITY_AT_V01_PLUS_BG3Y
    // Overlapping static entry reached from 0xC48DED.
    case 0xC0A98F: cpu.execute_instruction<0xBF>(0x226BC4, 4); return true;
    // src/unknown/C0/C0A99F.asm:11 RTL
    case 0xC0A991: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A9B3.asm (unresolved).
bool execute_unresolved_c0_c0a9b3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A9B3.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A992: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A9B3.asm:3 JSL MOVEMENT_DATA_READ16
    // Overlapping static entry reached from 0xC0A98F.
    case 0xC0A993: cpu.execute_instruction<0x73>(0x00009D, 2); return true;
    // src/unknown/C0/C0A9B3.asm:3 JSL MOVEMENT_DATA_READ16
    // Overlapping static entry reached from 0xC0A993.
    case 0xC0A995: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000048, 2); else cpu.execute_instruction<0xC0>(0x008448, 3); return true;
    // src/unknown/C0/C0A9B3.asm:4 PHA
    case 0xC0A996: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A9B3.asm:5 STY $94
    case 0xC0A997: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9B3.asm:5 STY $94
    // Overlapping static entry reached from 0xC0A995.
    case 0xC0A998: cpu.execute_instruction<0x94>(0x000022, 2); return true;
    // src/unknown/C0/C0A9B3.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A999: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A9B3.asm:6 JSL MOVEMENT_DATA_READ16
    // Overlapping static entry reached from 0xC0A998.
    case 0xC0A99A: cpu.execute_instruction<0x73>(0x00009D, 2); return true;
    // src/unknown/C0/C0A9B3.asm:6 JSL MOVEMENT_DATA_READ16
    // Overlapping static entry reached from 0xC0A99A.
    case 0xC0A99C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000048, 2); else cpu.execute_instruction<0xC0>(0x008448, 3); return true;
    // src/unknown/C0/C0A9B3.asm:7 PHA
    case 0xC0A99D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A9B3.asm:8 STY $94
    case 0xC0A99E: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9B3.asm:8 STY $94
    // Overlapping static entry reached from 0xC0A99C.
    case 0xC0A99F: cpu.execute_instruction<0x94>(0x000022, 2); return true;
    // src/unknown/C0/C0A9B3.asm:9 JSL MOVEMENT_DATA_READ16
    case 0xC0A9A0: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A9B3.asm:9 JSL MOVEMENT_DATA_READ16
    // Overlapping static entry reached from 0xC0A99F.
    case 0xC0A9A1: cpu.execute_instruction<0x73>(0x00009D, 2); return true;
    // src/unknown/C0/C0A9B3.asm:9 JSL MOVEMENT_DATA_READ16
    // Overlapping static entry reached from 0xC0A9A1.
    case 0xC0A9A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000084, 2); else cpu.execute_instruction<0xC0>(0x009484, 3); return true;
    // src/unknown/C0/C0A9B3.asm:10 STY $94
    case 0xC0A9A4: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9B3.asm:10 STY $94
    // Overlapping static entry reached from 0xC0A9A3.
    case 0xC0A9A5: cpu.execute_instruction<0x94>(0x0000A8, 2); return true;
    // src/unknown/C0/C0A9B3.asm:11 TAY
    case 0xC0A9A6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A9B3.asm:12 PLX
    case 0xC0A9A7: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A9B3.asm:13 PLA
    case 0xC0A9A8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A9B3.asm:14 JSL PRINT_CAST_NAME
    case 0xC0A9A9: cpu.execute_instruction<0x22>(0xC4BD19, 4); return true;
    // src/unknown/C0/C0A9B3.asm:15 RTL
    case 0xC0A9AD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A9CF.asm (unresolved).
bool execute_unresolved_c0_c0a9cf_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A9CF.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A9AE: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A9CF.asm:4 PHA
    case 0xC0A9B2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A9CF.asm:5 STY $94
    case 0xC0A9B3: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9CF.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A9B5: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A9CF.asm:7 PHA
    case 0xC0A9B9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A9CF.asm:8 STY $94
    case 0xC0A9BA: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9CF.asm:9 JSL MOVEMENT_DATA_READ16
    case 0xC0A9BC: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A9CF.asm:10 STY $94
    case 0xC0A9C0: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9CF.asm:11 TAY
    case 0xC0A9C2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A9CF.asm:12 PLX
    case 0xC0A9C3: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A9CF.asm:13 PLA
    case 0xC0A9C4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A9CF.asm:14 JSL PRINT_CAST_NAME_PARTY
    case 0xC0A9C5: cpu.execute_instruction<0x22>(0xC4BD9D, 4); return true;
    // src/unknown/C0/C0A9CF.asm:15 RTL
    case 0xC0A9C9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A9EB.asm (unresolved).
bool execute_unresolved_c0_c0a9eb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A9EB.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A9CA: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A9EB.asm:4 PHA
    case 0xC0A9CE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A9EB.asm:5 STY $94
    case 0xC0A9CF: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9EB.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A9D1: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A9EB.asm:7 PHA
    case 0xC0A9D5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A9EB.asm:8 STY $94
    case 0xC0A9D6: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9EB.asm:9 JSL MOVEMENT_DATA_READ16
    case 0xC0A9D8: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0A9EB.asm:10 STY $94
    case 0xC0A9DC: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9EB.asm:11 TAY
    case 0xC0A9DE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A9EB.asm:12 PLX
    case 0xC0A9DF: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A9EB.asm:13 PLA
    case 0xC0A9E0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A9EB.asm:14 JSL PRINT_CAST_NAME_ENTITY_VAR0
    case 0xC0A9E1: cpu.execute_instruction<0x22>(0xC4BE0A, 4); return true;
    // src/unknown/C0/C0A9EB.asm:15 RTL
    case 0xC0A9E5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AA23.asm (unresolved).
bool execute_unresolved_c0_c0aa23_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AA23.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0AA02: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0AA23.asm:4 PHA
    case 0xC0AA06: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0AA23.asm:5 STY $94
    case 0xC0AA07: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA23.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0AA09: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0AA23.asm:7 PHA
    case 0xC0AA0D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0AA23.asm:8 STY $94
    case 0xC0AA0E: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA23.asm:9 JSL MOVEMENT_DATA_READ16
    case 0xC0AA10: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0AA23.asm:10 STY $94
    case 0xC0AA14: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA23.asm:11 TAY
    case 0xC0AA16: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0AA23.asm:12 PLX
    case 0xC0AA17: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0AA23.asm:13 PLA
    case 0xC0AA18: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0AA23.asm:14 JSL UNKNOWN_C47765
    case 0xC0AA19: cpu.execute_instruction<0x22>(0xC454E9, 4); return true;
    // src/unknown/C0/C0AA23.asm:15 RTL
    case 0xC0AA1D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AA3F.asm (unresolved).
bool execute_unresolved_c0_c0aa3f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AA3F.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0AA1E: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0AA3F.asm:4 LDX #$0033
    case 0xC0AA20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000033, 2); else cpu.execute_instruction<0xA2>(0x000033, 3); return true;
    // src/unknown/C0/C0AA3F.asm:4 LDX #$0033
    // Overlapping static entry reached from 0xC0AA20.
    case 0xC0AA22: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C0/C0AA3F.asm:5 DEC
    case 0xC0AA23: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0AA3F.asm:6 BNE @UNKNOWN0
    case 0xC0AA24: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C0AA3F.asm:7 LDX #$00B3
    case 0xC0AA26: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B3, 2); else cpu.execute_instruction<0xA2>(0x0000B3, 3); return true;
    // src/unknown/C0/C0AA3F.asm:7 LDX #$00B3
    // Overlapping static entry reached from 0xC0AA26.
    case 0xC0AA28: cpu.execute_instruction<0x00>(0x0000DA, 2); return true;
    // src/unknown/C0/C0AA3F.asm:9 PHX
    case 0xC0AA29: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C0AA3F.asm:10 JSL MOVEMENT_DATA_READ8
    case 0xC0AA2A: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/unknown/C0/C0AA3F.asm:11 STY $94
    case 0xC0AA2E: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA3F.asm:12 STA ACTIONSCRIPT_COLDATA_BLUE
    case 0xC0AA30: cpu.execute_instruction<0x8D>(0x00A03D, 3); return true;
    // src/unknown/C0/C0AA3F.asm:13 JSL MOVEMENT_DATA_READ8
    case 0xC0AA33: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/unknown/C0/C0AA3F.asm:14 STY $94
    case 0xC0AA37: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA3F.asm:15 STA ACTIONSCRIPT_COLDATA_GREEN
    case 0xC0AA39: cpu.execute_instruction<0x8D>(0x00A03E, 3); return true;
    // src/unknown/C0/C0AA3F.asm:16 JSL MOVEMENT_DATA_READ8
    case 0xC0AA3C: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/unknown/C0/C0AA3F.asm:17 STY $94
    case 0xC0AA40: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA3F.asm:18 STA ACTIONSCRIPT_COLDATA_RED
    case 0xC0AA42: cpu.execute_instruction<0x8D>(0x00A03F, 3); return true;
    // src/unknown/C0/C0AA3F.asm:19 PLA
    case 0xC0AA45: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0AA3F.asm:20 JSL UNKNOWN_C42439
    case 0xC0AA46: cpu.execute_instruction<0x22>(0xC42377, 4); return true;
    // src/unknown/C0/C0AA3F.asm:21 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0AA4A: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0AA3F.asm:22 RTL
    case 0xC0AA4C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AA6E.asm (unresolved).
bool execute_unresolved_c0_c0aa6e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AA6E.asm:3 LDX $88
    case 0xC0AA4D: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AA6E.asm:4 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC0AA4F: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C0/C0AA6E.asm:5 BNE @UNKNOWN0
    case 0xC0AA52: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/unknown/C0/C0AA6E.asm:6 JSL MOVEMENT_DATA_READ8
    case 0xC0AA54: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/unknown/C0/C0AA6E.asm:7 STY $94
    case 0xC0AA58: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA6E.asm:8 STA ENTITY_DIRECTIONS,X
    case 0xC0AA5A: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C0AA6E.asm:9 JSL MOVEMENT_DATA_READ8
    case 0xC0AA5D: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/unknown/C0/C0AA6E.asm:10 STY $94
    case 0xC0AA61: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA6E.asm:11 STA ENTITY_ANIMATION_FRAME,X
    case 0xC0AA63: cpu.execute_instruction<0x9D>(0x0010E8, 3); return true;
    // src/unknown/C0/C0AA6E.asm:12 STA USE_SECOND_SPRITE_FRAME
    case 0xC0AA66: cpu.execute_instruction<0x8D>(0x002C90, 3); return true;
    // src/unknown/C0/C0AA6E.asm:13 TXY
    case 0xC0AA69: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0AA6E.asm:14 JSL UNKNOWN_C0A443_ENTRY4
    case 0xC0AA6A: cpu.execute_instruction<0x22>(0xC0A4A3, 4); return true;
    // src/unknown/C0/C0AA6E.asm:15 RTL
    case 0xC0AA6E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0AA6E.asm:17 LDX $88
    case 0xC0AA6F: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AA6E.asm:18 JSL MOVEMENT_DATA_READ8
    case 0xC0AA71: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/unknown/C0/C0AA6E.asm:19 STY $94
    case 0xC0AA75: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA6E.asm:20 STA ENTITY_DIRECTIONS,X
    case 0xC0AA77: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C0AA6E.asm:21 JSL MOVEMENT_DATA_READ8
    case 0xC0AA7A: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/unknown/C0/C0AA6E.asm:22 STY $94
    case 0xC0AA7E: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA6E.asm:23 ASL
    case 0xC0AA80: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0AA6E.asm:24 STA ENTITY_ANIMATION_FRAME,X
    case 0xC0AA81: cpu.execute_instruction<0x9D>(0x0010E8, 3); return true;
    // src/unknown/C0/C0AA6E.asm:25 STX SPRITE_UPDATE_ENTITY_OFFSET
    case 0xC0AA84: cpu.execute_instruction<0x8E>(0x002C94, 3); return true;
    // src/unknown/C0/C0AA6E.asm:26 JSR UNKNOWN_C0A794
    case 0xC0AA87: cpu.execute_instruction<0x20>(0x00A773, 3); return true;
    // src/unknown/C0/C0AA6E.asm:27 RTL
    case 0xC0AA8A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AAAC.asm (unresolved).
bool execute_unresolved_c0_c0aaac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AAAC.asm:3 LDX $88
    case 0xC0AA8B: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AAAC.asm:4 STX SPRITE_UPDATE_ENTITY_OFFSET
    case 0xC0AA8D: cpu.execute_instruction<0x8E>(0x002C94, 3); return true;
    // src/unknown/C0/C0AAAC.asm:5 JSR UNKNOWN_C0A794
    case 0xC0AA90: cpu.execute_instruction<0x20>(0x00A773, 3); return true;
    // src/unknown/C0/C0AAAC.asm:6 RTL
    case 0xC0AA93: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AAB5.asm (unresolved).
bool execute_unresolved_c0_c0aab5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AAB5.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0AA94: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0AAB5.asm:4 STA $90
    case 0xC0AA98: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/unknown/C0/C0AAB5.asm:5 JSL MOVEMENT_DATA_READ8
    case 0xC0AA9A: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/unknown/C0/C0AAB5.asm:6 TAX
    case 0xC0AA9E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0AAB5.asm:7 JSL MOVEMENT_DATA_READ8
    case 0xC0AA9F: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/unknown/C0/C0AAB5.asm:8 STY $94
    case 0xC0AAA3: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AAB5.asm:9 LDY $90
    case 0xC0AAA5: cpu.execute_instruction<0xA4>(0x000090, 2); return true;
    // src/unknown/C0/C0AAB5.asm:10 JSL UNKNOWN_C497C0
    case 0xC0AAA7: cpu.execute_instruction<0x22>(0xC46E0A, 4); return true;
    // src/unknown/C0/C0AAB5.asm:11 RTL
    case 0xC0AAAB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AACD.asm (unresolved).
bool execute_unresolved_c0_c0aacd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AACD.asm:3 LDX #$0002
    case 0xC0AAAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C0/C0AACD.asm:3 LDX #$0002
    // Overlapping static entry reached from 0xC0AAAC.
    case 0xC0AAAE: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C0AACD.asm:4 RTL
    case 0xC0AAAF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AAD1.asm (unresolved).
bool execute_unresolved_c0_c0aad1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AAD1.asm:3 LDX #$0004
    case 0xC0AAB0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C0/C0AAD1.asm:3 LDX #$0004
    // Overlapping static entry reached from 0xC0AAB0.
    case 0xC0AAB2: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C0AAD1.asm:4 RTL
    case 0xC0AAB3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AAD5.asm (unresolved).
bool execute_unresolved_c0_c0aad5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AAD5.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0AAB4: cpu.execute_instruction<0x22>(0xC09D65, 4); return true;
    // src/unknown/C0/C0AAD5.asm:4 STY $94
    case 0xC0AAB8: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AAD5.asm:5 INC
    case 0xC0AABA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0AAD5.asm:6 STA $90
    case 0xC0AABB: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/unknown/C0/C0AAD5.asm:7 JSL MOVEMENT_DATA_READ16
    case 0xC0AABD: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/unknown/C0/C0AAD5.asm:8 STY $94
    case 0xC0AAC1: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AAD5.asm:9 STA $92
    case 0xC0AAC3: cpu.execute_instruction<0x85>(0x000092, 2); return true;
    // src/unknown/C0/C0AAD5.asm:10 LDY #$000C
    case 0xC0AAC5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C0/C0AAD5.asm:10 LDY #$000C
    // Overlapping static entry reached from 0xC0AAC5.
    case 0xC0AAC7: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C0/C0AAD5.asm:11 LDA ($84),Y
    case 0xC0AAC8: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/unknown/C0/C0AAD5.asm:12 BNE @UNKNOWN0
    case 0xC0AACA: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C0AAD5.asm:13 LDA $90
    case 0xC0AACC: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/unknown/C0/C0AAD5.asm:14 STA ($84),Y
    case 0xC0AACE: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/unknown/C0/C0AAD5.asm:16 LDA ($84),Y
    case 0xC0AAD0: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/unknown/C0/C0AAD5.asm:17 DEC
    case 0xC0AAD2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0AAD5.asm:18 STA ($84),Y
    case 0xC0AAD3: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/unknown/C0/C0AAD5.asm:19 BEQ @UNKNOWN1
    case 0xC0AAD5: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C0AAD5.asm:20 LDA $92
    case 0xC0AAD7: cpu.execute_instruction<0xA5>(0x000092, 2); return true;
    // src/unknown/C0/C0AAD5.asm:21 STA $94
    case 0xC0AAD9: cpu.execute_instruction<0x85>(0x000094, 2); return true;
    // src/unknown/C0/C0AAD5.asm:23 RTL
    case 0xC0AADB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AAFD.asm (unresolved).
bool execute_unresolved_c0_c0aafd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AAFD.asm:3 LDA #$0000
    case 0xC0AADC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0AAFD.asm:3 LDA #$0000
    // Overlapping static entry reached from 0xC0AADC.
    case 0xC0AADE: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C0AAFD.asm:4 LDY #$000C
    case 0xC0AADF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C0/C0AAFD.asm:4 LDY #$000C
    // Overlapping static entry reached from 0xC0AADF.
    case 0xC0AAE1: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C0AAFD.asm:5 STA ($84),Y
    case 0xC0AAE2: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/unknown/C0/C0AAFD.asm:6 RTL
    case 0xC0AAE4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0ABBD.asm (unresolved).
bool execute_unresolved_c0_c0abbd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0ABBD.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AB9C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0ABBD.asm:4 STA f:APUIO0
    case 0xC0AB9E: cpu.execute_instruction<0x8F>(0x002140, 4); return true;
    // src/unknown/C0/C0ABBD.asm:5 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0ABA2: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0ABBD.asm:6 RTL
    case 0xC0ABA4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AC0C.asm (unresolved).
bool execute_unresolved_c0_c0ac0c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AC0C.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ABEB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0AC0C.asm:4 ORA AUDIO_EFFECT_UPPER_BIT_FLIPPER
    case 0xC0ABED: cpu.execute_instruction<0x0D>(0x001B39, 3); return true;
    // src/unknown/C0/C0AC0C.asm:5 STA f:APUIO1
    case 0xC0ABF0: cpu.execute_instruction<0x8F>(0x002141, 4); return true;
    // src/unknown/C0/C0AC0C.asm:6 LDA #$0080
    case 0xC0ABF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x004D80, 3); return true;
    // src/unknown/C0/C0AC0C.asm:7 EOR AUDIO_EFFECT_UPPER_BIT_FLIPPER
    case 0xC0ABF6: cpu.execute_instruction<0x4D>(0x001B39, 3); return true;
    // src/unknown/C0/C0AC0C.asm:7 EOR AUDIO_EFFECT_UPPER_BIT_FLIPPER
    // Overlapping static entry reached from 0xC0ABF4.
    case 0xC0ABF7: cpu.execute_instruction<0x39>(0x008D1B, 3); return true;
    // src/unknown/C0/C0AC0C.asm:8 STA AUDIO_EFFECT_UPPER_BIT_FLIPPER
    case 0xC0ABF9: cpu.execute_instruction<0x8D>(0x001B39, 3); return true;
    // src/unknown/C0/C0AC0C.asm:8 STA AUDIO_EFFECT_UPPER_BIT_FLIPPER
    // Overlapping static entry reached from 0xC0ABF7.
    case 0xC0ABFA: cpu.execute_instruction<0x39>(0x00C21B, 3); return true;
    // src/unknown/C0/C0AC0C.asm:9 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0ABFC: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0AC0C.asm:9 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC0ABFA.
    case 0xC0ABFD: cpu.execute_instruction<0x30>(0x00006B, 2); return true;
    // src/unknown/C0/C0AC0C.asm:10 RTL
    case 0xC0ABFE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AC20.asm (unresolved).
bool execute_unresolved_c0_c0ac20_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AC20.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ABFF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0AC20.asm:4 LDA f:APUIO0
    case 0xC0AC01: cpu.execute_instruction<0xAF>(0x002140, 4); return true;
    // src/unknown/C0/C0AC20.asm:5 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0AC05: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0AC20.asm:6 AND #$00FF
    case 0xC0AC07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0AC20.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC0AC07.
    case 0xC0AC09: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C0AC20.asm:7 RTL
    case 0xC0AC0A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AC3A.asm (unresolved).
bool execute_unresolved_c0_c0ac3a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AC3A.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AC19: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0AC3A.asm:4 STA f:APUIO2
    case 0xC0AC1B: cpu.execute_instruction<0x8F>(0x002142, 4); return true;
    // src/unknown/C0/C0AC3A.asm:5 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0AC1F: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0AC3A.asm:6 RTL
    case 0xC0AC21: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AC43.asm (unresolved).
bool execute_unresolved_c0_c0ac43_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AC43.asm:3 LDA #$00C4
    case 0xC0AC22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // src/unknown/C0/C0AC43.asm:3 LDA #$00C4
    // Overlapping static entry reached from 0xC0AC22.
    case 0xC0AC24: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0AC43.asm:4 STA $04
    case 0xC0AC25: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0AC43.asm:5 STA SPRITEMAP_BANK
    case 0xC0AC27: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C0AC43.asm:6 LDY #$0000
    case 0xC0AC2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0AC43.asm:6 LDY #$0000
    // Overlapping static entry reached from 0xC0AC2A.
    case 0xC0AC2C: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/unknown/C0/C0AC43.asm:7 LDA ENTITY_SURFACE_FLAGS,X
    case 0xC0AC2D: cpu.execute_instruction<0xBD>(0x002FA8, 3); return true;
    // src/unknown/C0/C0AC43.asm:8 AND #$0001
    case 0xC0AC30: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0AC43.asm:8 AND #$0001
    // Overlapping static entry reached from 0xC0AC30.
    case 0xC0AC32: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0AC43.asm:9 BEQ @UNKNOWN0
    case 0xC0AC33: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0AC43.asm:10 LDY #$0005
    case 0xC0AC35: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C0/C0AC43.asm:10 LDY #$0005
    // Overlapping static entry reached from 0xC0AC35.
    case 0xC0AC37: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C0AC43.asm:12 STY $00
    case 0xC0AC38: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C0/C0AC43.asm:13 LDA ENTITY_SURFACE_FLAGS,X
    case 0xC0AC3A: cpu.execute_instruction<0xBD>(0x002FA8, 3); return true;
    // src/unknown/C0/C0AC43.asm:14 AND #$000C
    case 0xC0AC3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/unknown/C0/C0AC43.asm:14 AND #$000C
    // Overlapping static entry reached from 0xC0AC3D.
    case 0xC0AC3F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0AC43.asm:15 BEQ @UNKNOWN4
    case 0xC0AC40: cpu.execute_instruction<0xF0>(0x000074, 2); return true;
    // src/unknown/C0/C0AC43.asm:16 CMP #$0004
    case 0xC0AC42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0AC43.asm:16 CMP #$0004
    // Overlapping static entry reached from 0xC0AC42.
    case 0xC0AC44: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0AC43.asm:17 BEQ @UNKNOWN6
    case 0xC0AC45: cpu.execute_instruction<0xF0>(0x000079, 2); return true;
    // src/unknown/C0/C0AC43.asm:18 LDA ENTITY_BYTE_WIDTHS,X
    case 0xC0AC47: cpu.execute_instruction<0xBD>(0x002E7C, 3); return true;
    // src/unknown/C0/C0AC43.asm:19 CMP #$0040
    case 0xC0AC4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C0/C0AC43.asm:19 CMP #$0040
    // Overlapping static entry reached from 0xC0AC4A.
    case 0xC0AC4C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0AC43.asm:20 BNE @UNKNOWN2
    case 0xC0AC4D: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // src/unknown/C0/C0AC43.asm:21 LDA ENTITY_RIPPLE_OVERLAY_PTRS,X
    case 0xC0AC4F: cpu.execute_instruction<0xBD>(0x00341C, 3); return true;
    // src/unknown/C0/C0AC43.asm:22 STA $02
    case 0xC0AC52: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0AC43.asm:23 LDA ENTITY_RIPPLE_NEXT_UPDATE_FRAMES,X
    case 0xC0AC54: cpu.execute_instruction<0xBD>(0x003458, 3); return true;
    // src/unknown/C0/C0AC43.asm:24 BNE @UNKNOWN1
    case 0xC0AC57: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C0AC43.asm:25 LDA #.LOWORD(ENTITY_RIPPLE_SPRITEMAPS)
    case 0xC0AC59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000094, 2); else cpu.execute_instruction<0xA9>(0x003494, 3); return true;
    // src/unknown/C0/C0AC43.asm:25 LDA #.LOWORD(ENTITY_RIPPLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC0AC59.
    case 0xC0AC5B: cpu.execute_instruction<0x34>(0x000020, 2); return true;
    // src/unknown/C0/C0AC43.asm:26 JSR UNKNOWN_C0AD56
    case 0xC0AC5C: cpu.execute_instruction<0x20>(0x00AD35, 3); return true;
    // src/unknown/C0/C0AC43.asm:26 JSR UNKNOWN_C0AD56
    // Overlapping static entry reached from 0xC0AC5B.
    case 0xC0AC5D: cpu.execute_instruction<0x35>(0x0000AD, 2); return true;
    // src/unknown/C0/C0AC43.asm:27 LDX $88
    case 0xC0AC5F: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AC43.asm:28 STA ENTITY_RIPPLE_OVERLAY_PTRS,X
    case 0xC0AC61: cpu.execute_instruction<0x9D>(0x00341C, 3); return true;
    // src/unknown/C0/C0AC43.asm:29 TYA
    case 0xC0AC64: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:30 STA ENTITY_RIPPLE_NEXT_UPDATE_FRAMES,X
    case 0xC0AC65: cpu.execute_instruction<0x9D>(0x003458, 3); return true;
    // src/unknown/C0/C0AC43.asm:32 DEC ENTITY_RIPPLE_NEXT_UPDATE_FRAMES,X
    case 0xC0AC68: cpu.execute_instruction<0xDE>(0x003458, 3); return true;
    // src/unknown/C0/C0AC43.asm:32 DEC ENTITY_RIPPLE_NEXT_UPDATE_FRAMES,X
    // Overlapping static entry reached from 0xC0ABFD.
    case 0xC0AC6A: cpu.execute_instruction<0x34>(0x0000BD, 2); return true;
    // src/unknown/C0/C0AC43.asm:33 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0AC6B: cpu.execute_instruction<0xBD>(0x000B0C, 3); return true;
    // src/unknown/C0/C0AC43.asm:33 LDA ENTITY_SCREEN_X_TABLE,X
    // Overlapping static entry reached from 0xC0AC6A.
    case 0xC0AC6C: cpu.execute_instruction<0x0C>(0x00850B, 3); return true;
    // src/unknown/C0/C0AC43.asm:34 STA $06
    case 0xC0AC6E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:34 STA $06
    // Overlapping static entry reached from 0xC0AC6C.
    case 0xC0AC6F: cpu.execute_instruction<0x06>(0x0000BC, 2); return true;
    // src/unknown/C0/C0AC43.asm:35 LDY ENTITY_SCREEN_Y_TABLE,X
    case 0xC0AC70: cpu.execute_instruction<0xBC>(0x000B48, 3); return true;
    // src/unknown/C0/C0AC43.asm:35 LDY ENTITY_SCREEN_Y_TABLE,X
    // Overlapping static entry reached from 0xC0AC6F.
    case 0xC0AC71: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:35 LDY ENTITY_SCREEN_Y_TABLE,X
    // Overlapping static entry reached from 0xC0AC71.
    case 0xC0AC72: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:36 LDA ENTITY_RIPPLE_SPRITEMAPS,X
    case 0xC0AC73: cpu.execute_instruction<0xBD>(0x003494, 3); return true;
    // src/unknown/C0/C0AC43.asm:37 CLC
    case 0xC0AC76: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:38 ADC $00
    case 0xC0AC77: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0AC43.asm:39 LDX $06
    case 0xC0AC79: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:40 JSR UNKNOWN_C08C58
    case 0xC0AC7B: cpu.execute_instruction<0x20>(0x008C49, 3); return true;
    // src/unknown/C0/C0AC43.asm:41 BRA @UNKNOWN4
    case 0xC0AC7E: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unknown/C0/C0AC43.asm:43 LDA ENTITY_BIG_RIPPLE_OVERLAY_PTRS,X
    case 0xC0AC80: cpu.execute_instruction<0xBD>(0x0034D0, 3); return true;
    // src/unknown/C0/C0AC43.asm:44 STA $02
    case 0xC0AC83: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0AC43.asm:45 LDA ENTITY_BIG_RIPPLE_NEXT_UPDATE_FRAMES,X
    case 0xC0AC85: cpu.execute_instruction<0xBD>(0x00350C, 3); return true;
    // src/unknown/C0/C0AC43.asm:46 BNE @UNKNOWN3
    case 0xC0AC88: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C0AC43.asm:47 LDA #.LOWORD(ENTITY_BIG_RIPPLE_SPRITEMAPS)
    case 0xC0AC8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000048, 2); else cpu.execute_instruction<0xA9>(0x003548, 3); return true;
    // src/unknown/C0/C0AC43.asm:47 LDA #.LOWORD(ENTITY_BIG_RIPPLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC0AC8A.
    case 0xC0AC8C: cpu.execute_instruction<0x35>(0x000020, 2); return true;
    // src/unknown/C0/C0AC43.asm:48 JSR UNKNOWN_C0AD56
    case 0xC0AC8D: cpu.execute_instruction<0x20>(0x00AD35, 3); return true;
    // src/unknown/C0/C0AC43.asm:48 JSR UNKNOWN_C0AD56
    // Overlapping static entry reached from 0xC0AC8C.
    case 0xC0AC8E: cpu.execute_instruction<0x35>(0x0000AD, 2); return true;
    // src/unknown/C0/C0AC43.asm:49 LDX $88
    case 0xC0AC90: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AC43.asm:50 STA ENTITY_BIG_RIPPLE_OVERLAY_PTRS,X
    case 0xC0AC92: cpu.execute_instruction<0x9D>(0x0034D0, 3); return true;
    // src/unknown/C0/C0AC43.asm:51 TYA
    case 0xC0AC95: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:52 STA ENTITY_BIG_RIPPLE_NEXT_UPDATE_FRAMES,X
    case 0xC0AC96: cpu.execute_instruction<0x9D>(0x00350C, 3); return true;
    // src/unknown/C0/C0AC43.asm:54 DEC ENTITY_BIG_RIPPLE_NEXT_UPDATE_FRAMES,X
    case 0xC0AC99: cpu.execute_instruction<0xDE>(0x00350C, 3); return true;
    // src/unknown/C0/C0AC43.asm:55 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0AC9C: cpu.execute_instruction<0xBD>(0x000B0C, 3); return true;
    // src/unknown/C0/C0AC43.asm:56 STA $06
    case 0xC0AC9F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:57 LDA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0ACA1: cpu.execute_instruction<0xBD>(0x000B48, 3); return true;
    // src/unknown/C0/C0AC43.asm:58 CLC
    case 0xC0ACA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:59 ADC #$0008
    case 0xC0ACA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C0/C0AC43.asm:59 ADC #$0008
    // Overlapping static entry reached from 0xC0ACA5.
    case 0xC0ACA7: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0AC43.asm:60 TAY
    case 0xC0ACA8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:61 LDA ENTITY_BIG_RIPPLE_SPRITEMAPS,X
    case 0xC0ACA9: cpu.execute_instruction<0xBD>(0x003548, 3); return true;
    // src/unknown/C0/C0AC43.asm:62 CLC
    case 0xC0ACAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:63 ADC $00
    case 0xC0ACAD: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0AC43.asm:64 ADC $00
    case 0xC0ACAF: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0AC43.asm:65 LDX $06
    case 0xC0ACB1: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:66 JSR UNKNOWN_C08C58
    case 0xC0ACB3: cpu.execute_instruction<0x20>(0x008C49, 3); return true;
    // src/unknown/C0/C0AC43.asm:68 LDX $88
    case 0xC0ACB6: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AC43.asm:69 LDA ENTITY_OVERLAY_FLAGS,X
    case 0xC0ACB8: cpu.execute_instruction<0xBD>(0x003278, 3); return true;
    // src/unknown/C0/C0AC43.asm:70 BNE @UNKNOWN5
    case 0xC0ACBB: cpu.execute_instruction<0xD0>(0x000001, 2); return true;
    // src/unknown/C0/C0AC43.asm:71 RTL
    case 0xC0ACBD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:73 BPL @UNKNOWN8
    case 0xC0ACBE: cpu.execute_instruction<0x10>(0x000038, 2); return true;
    // src/unknown/C0/C0AC43.asm:75 CPX #$002E
    case 0xC0ACC0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00002E, 2); else cpu.execute_instruction<0xE0>(0x00002E, 3); return true;
    // src/unknown/C0/C0AC43.asm:75 CPX #$002E
    // Overlapping static entry reached from 0xC0ACC0.
    case 0xC0ACC2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0AC43.asm:76 BCC @UNKNOWN10
    case 0xC0ACC3: cpu.execute_instruction<0x90>(0x00006F, 2); return true;
    // src/unknown/C0/C0AC43.asm:77 LDA ENTITY_SWEATING_OVERLAY_PTRS,X
    case 0xC0ACC5: cpu.execute_instruction<0xBD>(0x003368, 3); return true;
    // src/unknown/C0/C0AC43.asm:78 STA $02
    case 0xC0ACC8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0AC43.asm:79 LDA ENTITY_SWEATING_NEXT_UPDATE_FRAMES,X
    case 0xC0ACCA: cpu.execute_instruction<0xBD>(0x0033A4, 3); return true;
    // src/unknown/C0/C0AC43.asm:80 BNE @UNKNOWN7
    case 0xC0ACCD: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C0AC43.asm:81 LDA #.LOWORD(ENTITY_SWEATING_SPRITEMAPS)
    case 0xC0ACCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0033E0, 3); return true;
    // src/unknown/C0/C0AC43.asm:81 LDA #.LOWORD(ENTITY_SWEATING_SPRITEMAPS)
    // Overlapping static entry reached from 0xC0ACCF.
    case 0xC0ACD1: cpu.execute_instruction<0x33>(0x000020, 2); return true;
    // src/unknown/C0/C0AC43.asm:82 JSR UNKNOWN_C0AD56
    case 0xC0ACD2: cpu.execute_instruction<0x20>(0x00AD35, 3); return true;
    // src/unknown/C0/C0AC43.asm:82 JSR UNKNOWN_C0AD56
    // Overlapping static entry reached from 0xC0ACD1.
    case 0xC0ACD3: cpu.execute_instruction<0x35>(0x0000AD, 2); return true;
    // src/unknown/C0/C0AC43.asm:83 LDX $88
    case 0xC0ACD5: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AC43.asm:84 STA ENTITY_SWEATING_OVERLAY_PTRS,X
    case 0xC0ACD7: cpu.execute_instruction<0x9D>(0x003368, 3); return true;
    // src/unknown/C0/C0AC43.asm:85 TYA
    case 0xC0ACDA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:86 STA ENTITY_SWEATING_NEXT_UPDATE_FRAMES,X
    case 0xC0ACDB: cpu.execute_instruction<0x9D>(0x0033A4, 3); return true;
    // src/unknown/C0/C0AC43.asm:88 DEC ENTITY_SWEATING_NEXT_UPDATE_FRAMES,X
    case 0xC0ACDE: cpu.execute_instruction<0xDE>(0x0033A4, 3); return true;
    // src/unknown/C0/C0AC43.asm:89 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0ACE1: cpu.execute_instruction<0xBD>(0x000B0C, 3); return true;
    // src/unknown/C0/C0AC43.asm:90 STA $06
    case 0xC0ACE4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:91 LDY ENTITY_SCREEN_Y_TABLE,X
    case 0xC0ACE6: cpu.execute_instruction<0xBC>(0x000B48, 3); return true;
    // src/unknown/C0/C0AC43.asm:92 LDA ENTITY_SWEATING_SPRITEMAPS,X
    case 0xC0ACE9: cpu.execute_instruction<0xBD>(0x0033E0, 3); return true;
    // src/unknown/C0/C0AC43.asm:93 BEQ @UNKNOWN8
    case 0xC0ACEC: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C0AC43.asm:94 CLC
    case 0xC0ACEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:95 ADC $00
    case 0xC0ACEF: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0AC43.asm:96 LDX $06
    case 0xC0ACF1: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:97 JSR UNKNOWN_C08C58
    case 0xC0ACF3: cpu.execute_instruction<0x20>(0x008C49, 3); return true;
    // src/unknown/C0/C0AC43.asm:98 LDX $88
    case 0xC0ACF6: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AC43.asm:100 LDA ENTITY_OVERLAY_FLAGS,X
    case 0xC0ACF8: cpu.execute_instruction<0xBD>(0x003278, 3); return true;
    // src/unknown/C0/C0AC43.asm:101 AND #$4000
    case 0xC0ACFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/C0/C0AC43.asm:101 AND #$4000
    // Overlapping static entry reached from 0xC0ACFB.
    case 0xC0ACFD: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:102 BEQ @UNKNOWN10
    case 0xC0ACFE: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/C0/C0AC43.asm:103 CPX #$002E
    case 0xC0AD00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00002E, 2); else cpu.execute_instruction<0xE0>(0x00002E, 3); return true;
    // src/unknown/C0/C0AC43.asm:103 CPX #$002E
    // Overlapping static entry reached from 0xC0AD00.
    case 0xC0AD02: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0AC43.asm:104 BCC @UNKNOWN10
    case 0xC0AD03: cpu.execute_instruction<0x90>(0x00002F, 2); return true;
    // src/unknown/C0/C0AC43.asm:105 LDA ENTITY_MUSHROOMIZED_OVERLAY_PTRS,X
    case 0xC0AD05: cpu.execute_instruction<0xBD>(0x0032B4, 3); return true;
    // src/unknown/C0/C0AC43.asm:106 STA $02
    case 0xC0AD08: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0AC43.asm:107 LDA ENTITY_MUSHROOMIZED_NEXT_UPDATE_FRAMES,X
    case 0xC0AD0A: cpu.execute_instruction<0xBD>(0x0032F0, 3); return true;
    // src/unknown/C0/C0AC43.asm:108 BNE @UNKNOWN9
    case 0xC0AD0D: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C0AC43.asm:109 LDA #.LOWORD(ENTITY_MUSHROOMIZED_SPRITEMAPS)
    case 0xC0AD0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x00332C, 3); return true;
    // src/unknown/C0/C0AC43.asm:109 LDA #.LOWORD(ENTITY_MUSHROOMIZED_SPRITEMAPS)
    // Overlapping static entry reached from 0xC0AD0F.
    case 0xC0AD11: cpu.execute_instruction<0x33>(0x000020, 2); return true;
    // src/unknown/C0/C0AC43.asm:110 JSR UNKNOWN_C0AD56
    case 0xC0AD12: cpu.execute_instruction<0x20>(0x00AD35, 3); return true;
    // src/unknown/C0/C0AC43.asm:110 JSR UNKNOWN_C0AD56
    // Overlapping static entry reached from 0xC0AD11.
    case 0xC0AD13: cpu.execute_instruction<0x35>(0x0000AD, 2); return true;
    // src/unknown/C0/C0AC43.asm:111 LDX $88
    case 0xC0AD15: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AC43.asm:112 STA ENTITY_MUSHROOMIZED_OVERLAY_PTRS,X
    case 0xC0AD17: cpu.execute_instruction<0x9D>(0x0032B4, 3); return true;
    // src/unknown/C0/C0AC43.asm:113 TYA
    case 0xC0AD1A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:114 STA ENTITY_MUSHROOMIZED_NEXT_UPDATE_FRAMES,X
    case 0xC0AD1B: cpu.execute_instruction<0x9D>(0x0032F0, 3); return true;
    // src/unknown/C0/C0AC43.asm:116 DEC ENTITY_MUSHROOMIZED_NEXT_UPDATE_FRAMES,X
    case 0xC0AD1E: cpu.execute_instruction<0xDE>(0x0032F0, 3); return true;
    // src/unknown/C0/C0AC43.asm:117 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0AD21: cpu.execute_instruction<0xBD>(0x000B0C, 3); return true;
    // src/unknown/C0/C0AC43.asm:118 STA $06
    case 0xC0AD24: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:119 LDY ENTITY_SCREEN_Y_TABLE,X
    case 0xC0AD26: cpu.execute_instruction<0xBC>(0x000B48, 3); return true;
    // src/unknown/C0/C0AC43.asm:120 LDA ENTITY_MUSHROOMIZED_SPRITEMAPS,X
    case 0xC0AD29: cpu.execute_instruction<0xBD>(0x00332C, 3); return true;
    // src/unknown/C0/C0AC43.asm:121 CLC
    case 0xC0AD2C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:122 ADC $00
    case 0xC0AD2D: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0AC43.asm:123 LDX $06
    case 0xC0AD2F: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:124 JSR UNKNOWN_C08C58
    case 0xC0AD31: cpu.execute_instruction<0x20>(0x008C49, 3); return true;
    // src/unknown/C0/C0AC43.asm:126 RTL
    case 0xC0AD34: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AD56.asm (unresolved).
bool execute_unresolved_c0_c0ad56_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AD56.asm:7 CLC
    case 0xC0AD35: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:8 ADC $88
    case 0xC0AD36: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/unknown/C0/C0AD56.asm:9 TAX
    case 0xC0AD38: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:10 LDY #$0000
    case 0xC0AD39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0AD56.asm:10 LDY #$0000
    // Overlapping static entry reached from 0xC0AD39.
    case 0xC0AD3B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0AD56.asm:12 LDA [$02],Y
    case 0xC0AD3C: cpu.execute_instruction<0xB7>(0x000002, 2); return true;
    // src/unknown/C0/C0AD56.asm:13 INY
    case 0xC0AD3E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:14 INY
    case 0xC0AD3F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:15 CMP #$0001
    case 0xC0AD40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0AD56.asm:15 CMP #$0001
    // Overlapping static entry reached from 0xC0AD40.
    case 0xC0AD42: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0AD56.asm:16 BNE @NOTCMD1
    case 0xC0AD43: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C0AD56.asm:17 LDA [$02],Y
    case 0xC0AD45: cpu.execute_instruction<0xB7>(0x000002, 2); return true;
    // src/unknown/C0/C0AD56.asm:18 INY
    case 0xC0AD47: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:19 INY
    case 0xC0AD48: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:20 STA __BSS_START__,X
    case 0xC0AD49: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0AD56.asm:21 BRA @NEXTCMD
    case 0xC0AD4C: cpu.execute_instruction<0x80>(0x0000EE, 2); return true;
    // src/unknown/C0/C0AD56.asm:23 CMP #$0003
    case 0xC0AD4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0AD56.asm:23 CMP #$0003
    // Overlapping static entry reached from 0xC0AD4E.
    case 0xC0AD50: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0AD56.asm:24 BNE @CMD2
    case 0xC0AD51: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C0AD56.asm:25 LDA [$02],Y
    case 0xC0AD53: cpu.execute_instruction<0xB7>(0x000002, 2); return true;
    // src/unknown/C0/C0AD56.asm:26 STA $02
    case 0xC0AD55: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0AD56.asm:27 LDY #$0000
    case 0xC0AD57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0AD56.asm:27 LDY #$0000
    // Overlapping static entry reached from 0xC0AD57.
    case 0xC0AD59: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0AD56.asm:28 BRA @NEXTCMD
    case 0xC0AD5A: cpu.execute_instruction<0x80>(0x0000E0, 2); return true;
    // src/unknown/C0/C0AD56.asm:30 LDA [$02],Y
    case 0xC0AD5C: cpu.execute_instruction<0xB7>(0x000002, 2); return true;
    // src/unknown/C0/C0AD56.asm:31 INY
    case 0xC0AD5E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:32 INY
    case 0xC0AD5F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:33 STY $08
    case 0xC0AD60: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0AD56.asm:34 TAY
    case 0xC0AD62: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:35 LDA $02
    case 0xC0AD63: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0AD56.asm:36 CLC
    case 0xC0AD65: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:37 ADC $08
    case 0xC0AD66: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // src/unknown/C0/C0AD56.asm:38 RTS
    case 0xC0AD68: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AD9F.asm (unresolved).
bool execute_unresolved_c0_c0ad9f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AD9F.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AD7E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0AD9F.asm:4 LDA BG3_Y_POS
    case 0xC0AD80: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/unknown/C0/C0AD9F.asm:5 STA f:BG3VOFS
    case 0xC0AD83: cpu.execute_instruction<0x8F>(0x002112, 4); return true;
    // src/unknown/C0/C0AD9F.asm:6 LDA BG3_Y_POS+1
    case 0xC0AD87: cpu.execute_instruction<0xAD>(0x00003C, 3); return true;
    // src/unknown/C0/C0AD9F.asm:7 STA f:BG3VOFS
    case 0xC0AD8A: cpu.execute_instruction<0x8F>(0x002112, 4); return true;
    // src/unknown/C0/C0AD9F.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC0AD8E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0AD9F.asm:9 RTS
    case 0xC0AD90: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AE34.asm (unresolved).
bool execute_unresolved_c0_c0ae34_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AE34.asm:3 TAX
    case 0xC0AE13: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0AE34.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AE14: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0AE34.asm:5 LDA HDMAEN_MIRROR
    case 0xC0AE16: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/unknown/C0/C0AE34.asm:6 AND f:UNKNOWN_C0AE44,X
    case 0xC0AE19: cpu.execute_instruction<0x3F>(0xC0AE23, 4); return true;
    // src/unknown/C0/C0AE34.asm:7 STA HDMAEN_MIRROR
    case 0xC0AE1D: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/unknown/C0/C0AE34.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC0AE20: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0AE34.asm:9 RTL
    case 0xC0AE22: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AFCD.asm (unresolved).
bool execute_unresolved_c0_c0afcd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AFCD.asm:3 TAX
    case 0xC0AFAC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0AFCD.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AFAD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0AFCD.asm:5 LDA f:UNKNOWN_C0AFF1,X
    case 0xC0AFAF: cpu.execute_instruction<0xBF>(0xC0AFD0, 4); return true;
    // src/unknown/C0/C0AFCD.asm:6 STA TM_MIRROR
    case 0xC0AFB3: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C0/C0AFCD.asm:7 LDA f:UNKNOWN_C0AFF1+11,X
    case 0xC0AFB6: cpu.execute_instruction<0xBF>(0xC0AFDB, 4); return true;
    // src/unknown/C0/C0AFCD.asm:8 STA TD_MIRROR
    case 0xC0AFBA: cpu.execute_instruction<0x8D>(0x00001B, 3); return true;
    // src/unknown/C0/C0AFCD.asm:9 LDA f:UNKNOWN_C0AFF1+21,X
    case 0xC0AFBD: cpu.execute_instruction<0xBF>(0xC0AFE5, 4); return true;
    // src/unknown/C0/C0AFCD.asm:10 STA f:CGWSEL
    case 0xC0AFC1: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C0/C0AFCD.asm:11 LDA f:UNKNOWN_C0AFF1+31,X
    case 0xC0AFC5: cpu.execute_instruction<0xBF>(0xC0AFEF, 4); return true;
    // src/unknown/C0/C0AFCD.asm:12 STA f:CGADSUB
    case 0xC0AFC9: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C0/C0AFCD.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0AFCD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0AFCD.asm:14 RTL
    case 0xC0AFCF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0B0AA.asm (unresolved).
bool execute_unresolved_c0_c0b0aa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0B0AA.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC0B089: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0AA.asm:4 LDA #$00FF
    case 0xC0B08B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B0AA.asm:4 LDA #$00FF
    // Overlapping static entry reached from 0xC0B08B.
    case 0xC0B08D: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C0/C0B0AA.asm:5 STA f:WH0
    case 0xC0B08E: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C0/C0B0AA.asm:6 STA f:WH2
    case 0xC0B092: cpu.execute_instruction<0x8F>(0x002128, 4); return true;
    // src/unknown/C0/C0B0AA.asm:7 RTL
    case 0xC0B096: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0B0B8.asm (unresolved).
bool execute_unresolved_c0_c0b0b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0B0B8.asm:3 TAY
    case 0xC0B097: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:4 ASL
    case 0xC0B098: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:5 ASL
    case 0xC0B099: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:6 ASL
    case 0xC0B09A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:7 ASL
    case 0xC0B09B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:8 TAX
    case 0xC0B09C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B09D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0B8.asm:10 LDA $10
    case 0xC0B09F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0B0B8.asm:11 STA f:A1B0,X
    case 0xC0B0A1: cpu.execute_instruction<0x9F>(0x004304, 4); return true;
    // src/unknown/C0/C0B0B8.asm:12 STA f:DASB0,X
    case 0xC0B0A5: cpu.execute_instruction<0x9F>(0x004307, 4); return true;
    // src/unknown/C0/C0B0B8.asm:13 LDA #$0026
    case 0xC0B0A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x009F26, 3); return true;
    // src/unknown/C0/C0B0B8.asm:14 STA f:BBAD0,X
    case 0xC0B0AB: cpu.execute_instruction<0x9F>(0x004301, 4); return true;
    // src/unknown/C0/C0B0B8.asm:14 STA f:BBAD0,X
    // Overlapping static entry reached from 0xC0B0A9.
    case 0xC0B0AC: cpu.execute_instruction<0x01>(0x000043, 2); return true;
    // src/unknown/C0/C0B0B8.asm:14 STA f:BBAD0,X
    // Overlapping static entry reached from 0xC0B0AC.
    case 0xC0B0AE: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/unknown/C0/C0B0B8.asm:15 LDA [$0E]
    case 0xC0B0AF: cpu.execute_instruction<0xA7>(0x00000E, 2); return true;
    // src/unknown/C0/C0B0B8.asm:16 STA f:DMAP0,X
    case 0xC0B0B1: cpu.execute_instruction<0x9F>(0x004300, 4); return true;
    // src/unknown/C0/C0B0B8.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC0B0B5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0B8.asm:18 LDA $0E
    case 0xC0B0B7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0B0B8.asm:19 INC
    case 0xC0B0B9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:20 STA f:A1T0L,X
    case 0xC0B0BA: cpu.execute_instruction<0x9F>(0x004302, 4); return true;
    // src/unknown/C0/C0B0B8.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B0BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0B8.asm:22 TYX
    case 0xC0B0C0: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:23 LDA HDMAEN_MIRROR
    case 0xC0B0C1: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/unknown/C0/C0B0B8.asm:24 ORA f:DMA_FLAGS,X
    case 0xC0B0C4: cpu.execute_instruction<0x1F>(0xC0ADF5, 4); return true;
    // src/unknown/C0/C0B0B8.asm:25 STA HDMAEN_MIRROR
    case 0xC0B0C8: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/unknown/C0/C0B0B8.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC0B0CB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0B8.asm:27 RTL
    case 0xC0B0CD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0B0EF.asm (unresolved).
bool execute_unresolved_c0_c0b0ef_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0B0EF.asm:3 PHA
    case 0xC0B0CE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:4 PHX
    case 0xC0B0CF: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:5 ASL
    case 0xC0B0D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:6 ASL
    case 0xC0B0D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:7 ASL
    case 0xC0B0D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:8 ASL
    case 0xC0B0D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:9 TAX
    case 0xC0B0D4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B0D5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0EF.asm:11 LDA #$00E4
    case 0xC0B0D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E4, 2); else cpu.execute_instruction<0xA9>(0x008DE4, 3); return true;
    // src/unknown/C0/C0B0EF.asm:12 STA SWIRL_WINDOW_HDMA_TABLE
    case 0xC0B0D9: cpu.execute_instruction<0x8D>(0x00434C, 3); return true;
    // src/unknown/C0/C0B0EF.asm:12 STA SWIRL_WINDOW_HDMA_TABLE
    // Overlapping static entry reached from 0xC0B0D7.
    case 0xC0B0DA: cpu.execute_instruction<0x4C>(0x00A043, 3); return true;
    // src/unknown/C0/C0B0EF.asm:13 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER)
    case 0xC0B0DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000056, 2); else cpu.execute_instruction<0xA0>(0x004356, 3); return true;
    // src/unknown/C0/C0B0EF.asm:13 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER)
    // Overlapping static entry reached from 0xC0B0DC.
    case 0xC0B0DE: cpu.execute_instruction<0x43>(0x00008C, 2); return true;
    // src/unknown/C0/C0B0EF.asm:14 STY SWIRL_WINDOW_HDMA_TABLE + 1
    case 0xC0B0DF: cpu.execute_instruction<0x8C>(0x00434D, 3); return true;
    // src/unknown/C0/C0B0EF.asm:14 STY SWIRL_WINDOW_HDMA_TABLE + 1
    // Overlapping static entry reached from 0xC0B0DE.
    case 0xC0B0E0: cpu.execute_instruction<0x4D>(0x00A943, 3); return true;
    // src/unknown/C0/C0B0EF.asm:15 LDA #$00FC
    case 0xC0B0E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x008DFC, 3); return true;
    // src/unknown/C0/C0B0EF.asm:15 LDA #$00FC
    // Overlapping static entry reached from 0xC0B0E0.
    case 0xC0B0E3: cpu.execute_instruction<0xFC>(0x004F8D, 3); return true;
    // src/unknown/C0/C0B0EF.asm:16 STA SWIRL_WINDOW_HDMA_TABLE + 3
    case 0xC0B0E4: cpu.execute_instruction<0x8D>(0x00434F, 3); return true;
    // src/unknown/C0/C0B0EF.asm:16 STA SWIRL_WINDOW_HDMA_TABLE + 3
    // Overlapping static entry reached from 0xC0B0E2.
    case 0xC0B0E5: cpu.execute_instruction<0x4F>(0x00A943, 4); return true;
    // src/unknown/C0/C0B0EF.asm:16 STA SWIRL_WINDOW_HDMA_TABLE + 3
    // Overlapping static entry reached from 0xC0B0E3.
    case 0xC0B0E6: cpu.execute_instruction<0x43>(0x0000A9, 2); return true;
    // src/unknown/C0/C0B0EF.asm:17 LDA #$0000
    case 0xC0B0E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/unknown/C0/C0B0EF.asm:17 LDA #$0000
    // Overlapping static entry reached from 0xC0B0E6.
    case 0xC0B0E8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0B0EF.asm:18 STA SWIRL_WINDOW_HDMA_TABLE + 6
    case 0xC0B0E9: cpu.execute_instruction<0x8D>(0x004352, 3); return true;
    // src/unknown/C0/C0B0EF.asm:18 STA SWIRL_WINDOW_HDMA_TABLE + 6
    // Overlapping static entry reached from 0xC0B0E7.
    case 0xC0B0EA: cpu.execute_instruction<0x52>(0x000043, 2); return true;
    // src/unknown/C0/C0B0EF.asm:19 LDA #$007E
    case 0xC0B0EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x009F7E, 3); return true;
    // src/unknown/C0/C0B0EF.asm:20 STA f:A1B0,X
    case 0xC0B0EE: cpu.execute_instruction<0x9F>(0x004304, 4); return true;
    // src/unknown/C0/C0B0EF.asm:20 STA f:A1B0,X
    // Overlapping static entry reached from 0xC0B0EC.
    case 0xC0B0EF: cpu.execute_instruction<0x04>(0x000043, 2); return true;
    // src/unknown/C0/C0B0EF.asm:20 STA f:A1B0,X
    // Overlapping static entry reached from 0xC0B0EF.
    case 0xC0B0F1: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C0/C0B0EF.asm:21 STA f:DASB0,X
    case 0xC0B0F2: cpu.execute_instruction<0x9F>(0x004307, 4); return true;
    // src/unknown/C0/C0B0EF.asm:22 LDA #$0026
    case 0xC0B0F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x009F26, 3); return true;
    // src/unknown/C0/C0B0EF.asm:23 STA f:BBAD0,X
    case 0xC0B0F8: cpu.execute_instruction<0x9F>(0x004301, 4); return true;
    // src/unknown/C0/C0B0EF.asm:23 STA f:BBAD0,X
    // Overlapping static entry reached from 0xC0B0F6.
    case 0xC0B0F9: cpu.execute_instruction<0x01>(0x000043, 2); return true;
    // src/unknown/C0/C0B0EF.asm:23 STA f:BBAD0,X
    // Overlapping static entry reached from 0xC0B0F9.
    case 0xC0B0FB: cpu.execute_instruction<0x00>(0x000068, 2); return true;
    // src/unknown/C0/C0B0EF.asm:24 PLA
    case 0xC0B0FC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:25 STA f:DMAP0,X
    case 0xC0B0FD: cpu.execute_instruction<0x9F>(0x004300, 4); return true;
    // src/unknown/C0/C0B0EF.asm:26 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER) + 200
    case 0xC0B101: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001E, 2); else cpu.execute_instruction<0xA0>(0x00441E, 3); return true;
    // src/unknown/C0/C0B0EF.asm:26 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER) + 200
    // Overlapping static entry reached from 0xC0B101.
    case 0xC0B103: cpu.execute_instruction<0x44>(0x000429, 3); return true;
    // src/unknown/C0/C0B0EF.asm:27 AND #$0004
    case 0xC0B104: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x00F004, 3); return true;
    // src/unknown/C0/C0B0EF.asm:28 BEQ @UNKNOWN0
    case 0xC0B106: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0B0EF.asm:28 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC0B104.
    case 0xC0B107: cpu.execute_instruction<0x03>(0x0000A0, 2); return true;
    // src/unknown/C0/C0B0EF.asm:29 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER) + 400
    case 0xC0B108: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E6, 2); else cpu.execute_instruction<0xA0>(0x0044E6, 3); return true;
    // src/unknown/C0/C0B0EF.asm:29 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER) + 400
    // Overlapping static entry reached from 0xC0B107.
    case 0xC0B109: cpu.execute_instruction<0xE6>(0x000044, 2); return true;
    // src/unknown/C0/C0B0EF.asm:29 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER) + 400
    // Overlapping static entry reached from 0xC0B108.
    case 0xC0B10A: cpu.execute_instruction<0x44>(0x00508C, 3); return true;
    // src/unknown/C0/C0B0EF.asm:31 STY SWIRL_WINDOW_HDMA_TABLE + 4
    case 0xC0B10B: cpu.execute_instruction<0x8C>(0x004350, 3); return true;
    // src/unknown/C0/C0B0EF.asm:31 STY SWIRL_WINDOW_HDMA_TABLE + 4
    // Overlapping static entry reached from 0xC0B10A.
    case 0xC0B10D: cpu.execute_instruction<0x43>(0x000068, 2); return true;
    // src/unknown/C0/C0B0EF.asm:32 PLA
    case 0xC0B10E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC0B10F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0EF.asm:34 LDA #.LOWORD(SWIRL_WINDOW_HDMA_TABLE)
    case 0xC0B111: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004C, 2); else cpu.execute_instruction<0xA9>(0x00434C, 3); return true;
    // src/unknown/C0/C0B0EF.asm:34 LDA #.LOWORD(SWIRL_WINDOW_HDMA_TABLE)
    // Overlapping static entry reached from 0xC0B111.
    case 0xC0B113: cpu.execute_instruction<0x43>(0x00009F, 2); return true;
    // src/unknown/C0/C0B0EF.asm:35 STA f:A1T0L,X
    case 0xC0B114: cpu.execute_instruction<0x9F>(0x004302, 4); return true;
    // src/unknown/C0/C0B0EF.asm:35 STA f:A1T0L,X
    // Overlapping static entry reached from 0xC0B113.
    case 0xC0B115: cpu.execute_instruction<0x02>(0x000043, 2); return true;
    // src/unknown/C0/C0B0EF.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B118: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0EF.asm:37 PLX
    case 0xC0B11A: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:38 LDA HDMAEN_MIRROR
    case 0xC0B11B: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/unknown/C0/C0B0EF.asm:39 ORA f:DMA_FLAGS,X
    case 0xC0B11E: cpu.execute_instruction<0x1F>(0xC0ADF5, 4); return true;
    // src/unknown/C0/C0B0EF.asm:40 STA HDMAEN_MIRROR
    case 0xC0B122: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/unknown/C0/C0B0EF.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC0B125: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0EF.asm:42 RTL
    case 0xC0B127: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
