// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C4/C4A67E.asm (unresolved).
bool execute_unresolved_c4_c4a67e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4A67E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47AE7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    case 0xC47AE9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    case 0xC47AEA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    case 0xC47AEB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    case 0xC47AEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EF, 2); else cpu.execute_instruction<0x69>(0x00FFEF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC47AEC.
    case 0xC47AEE: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    case 0xC47AEF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    case 0xC47AF0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:11 STX @OPTIONS
    case 0xC47AF1: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4A67E.asm:11 STX @OPTIONS
    // Overlapping static entry reached from 0xC47AEE.
    case 0xC47AF2: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C4A67E.asm:12 STA @VIRTUAL04
    case 0xC47AF3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4A67E.asm:13 LDA @OPTIONS
    case 0xC47AF5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4A67E.asm:14 AND #$0002
    case 0xC47AF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C4/C4A67E.asm:14 AND #$0002
    // Overlapping static entry reached from 0xC47AF7.
    case 0xC47AF9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A67E.asm:15 BEQ @UNKNOWN0
    case 0xC47AFA: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C4/C4A67E.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC47AFC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:17 LDA #1
    case 0xC47AFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C4A67E.asm:18 STA SWIRL_INVERT_ENABLED
    case 0xC47B00: cpu.execute_instruction<0x8D>(0x00B09B, 3); return true;
    // src/unknown/C4/C4A67E.asm:18 STA SWIRL_INVERT_ENABLED
    // Overlapping static entry reached from 0xC47AFE.
    case 0xC47B01: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:18 STA SWIRL_INVERT_ENABLED
    // Overlapping static entry reached from 0xC47B01.
    case 0xC47B02: cpu.execute_instruction<0xB0>(0x000080, 2); return true;
    // src/unknown/C4/C4A67E.asm:19 BRA @UNKNOWN1
    case 0xC47B03: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4A67E.asm:19 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC47B02.
    case 0xC47B04: cpu.execute_instruction<0x05>(0x0000E2, 2); return true;
    // src/unknown/C4/C4A67E.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC47B05: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:21 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47B04.
    case 0xC47B06: cpu.execute_instruction<0x20>(0x009B9C, 3); return true;
    // src/unknown/C4/C4A67E.asm:22 STZ SWIRL_INVERT_ENABLED
    case 0xC47B07: cpu.execute_instruction<0x9C>(0x00B09B, 3); return true;
    // src/unknown/C4/C4A67E.asm:22 STZ SWIRL_INVERT_ENABLED
    // Overlapping static entry reached from 0xC47B06.
    case 0xC47B09: cpu.execute_instruction<0xB0>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A67E.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC47B0A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:24 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47B09.
    case 0xC47B0B: cpu.execute_instruction<0x20>(0x0002A5, 3); return true;
    // src/unknown/C4/C4A67E.asm:25 LDA @OPTIONS
    case 0xC47B0C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4A67E.asm:26 AND #$0001
    case 0xC47B0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C4A67E.asm:26 AND #$0001
    // Overlapping static entry reached from 0xC47B0E.
    case 0xC47B10: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A67E.asm:27 BEQ @UNKNOWN2
    case 0xC47B11: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C4/C4A67E.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC47B13: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:29 LDA #1
    case 0xC47B15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C4A67E.asm:30 STA SWIRL_REVERSED
    case 0xC47B17: cpu.execute_instruction<0x8D>(0x00B09C, 3); return true;
    // src/unknown/C4/C4A67E.asm:30 STA SWIRL_REVERSED
    // Overlapping static entry reached from 0xC47B15.
    case 0xC47B18: cpu.execute_instruction<0x9C>(0x0080B0, 3); return true;
    // src/unknown/C4/C4A67E.asm:31 BRA @UNKNOWN3
    case 0xC47B1A: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4A67E.asm:31 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC47B18.
    case 0xC47B1B: cpu.execute_instruction<0x05>(0x0000E2, 2); return true;
    // src/unknown/C4/C4A67E.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC47B1C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:33 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47B1B.
    case 0xC47B1D: cpu.execute_instruction<0x20>(0x009C9C, 3); return true;
    // src/unknown/C4/C4A67E.asm:34 STZ SWIRL_REVERSED
    case 0xC47B1E: cpu.execute_instruction<0x9C>(0x00B09C, 3); return true;
    // src/unknown/C4/C4A67E.asm:34 STZ SWIRL_REVERSED
    // Overlapping static entry reached from 0xC47B1D.
    case 0xC47B20: cpu.execute_instruction<0xB0>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A67E.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC47B21: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:36 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47B20.
    case 0xC47B22: cpu.execute_instruction<0x20>(0x0002A5, 3); return true;
    // src/unknown/C4/C4A67E.asm:37 LDA @OPTIONS
    case 0xC47B23: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4A67E.asm:38 AND #$0004
    case 0xC47B25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/unknown/C4/C4A67E.asm:38 AND #$0004
    // Overlapping static entry reached from 0xC47B25.
    case 0xC47B27: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A67E.asm:39 BEQ @UNKNOWN4
    case 0xC47B28: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C4/C4A67E.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC47B2A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:40 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47B67.
    case 0xC47B2B: cpu.execute_instruction<0x20>(0x0020A9, 3); return true;
    // src/unknown/C4/C4A67E.asm:41 LDA #32
    case 0xC47B2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008D20, 3); return true;
    // src/unknown/C4/C4A67E.asm:42 STA SWIRL_MASK_SETTINGS
    case 0xC47B2E: cpu.execute_instruction<0x8D>(0x00B09D, 3); return true;
    // src/unknown/C4/C4A67E.asm:42 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC47B2C.
    case 0xC47B2F: cpu.execute_instruction<0x9D>(0x0080B0, 3); return true;
    // src/unknown/C4/C4A67E.asm:43 BRA @UNKNOWN5
    case 0xC47B31: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C4/C4A67E.asm:43 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC47B2F.
    case 0xC47B32: cpu.execute_instruction<0x07>(0x0000E2, 2); return true;
    // src/unknown/C4/C4A67E.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC47B33: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:45 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47B32.
    case 0xC47B34: cpu.execute_instruction<0x20>(0x001FA9, 3); return true;
    // src/unknown/C4/C4A67E.asm:46 LDA #31
    case 0xC47B35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x008D1F, 3); return true;
    // src/unknown/C4/C4A67E.asm:47 STA SWIRL_MASK_SETTINGS
    case 0xC47B37: cpu.execute_instruction<0x8D>(0x00B09D, 3); return true;
    // src/unknown/C4/C4A67E.asm:47 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC47B35.
    case 0xC47B38: cpu.execute_instruction<0x9D>(0x00A9B0, 3); return true;
    // src/unknown/C4/C4A67E.asm:49 LDA #1
    case 0xC47B3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C4A67E.asm:49 LDA #1
    // Overlapping static entry reached from 0xC47B38.
    case 0xC47B3B: cpu.execute_instruction<0x01>(0x00008D, 2); return true;
    // src/unknown/C4/C4A67E.asm:50 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC47B3C: cpu.execute_instruction<0x8D>(0x00B097, 3); return true;
    // src/unknown/C4/C4A67E.asm:50 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    // Overlapping static entry reached from 0xC47B3A.
    case 0xC47B3D: cpu.execute_instruction<0x97>(0x0000B0, 2); return true;
    // src/unknown/C4/C4A67E.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC47B3F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:52 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC47B41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x00DD41, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:52 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC47B41.
    case 0xC47B43: cpu.execute_instruction<0xDD>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A67E.asm:52 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC47B44: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:52 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC47B46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:52 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC47B46.
    case 0xC47B48: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A67E.asm:52 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC47B49: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A67E.asm:53 LDA @VIRTUAL04
    case 0xC47B4B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4A67E.asm:54 ASL
    case 0xC47B4D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:55 ASL
    case 0xC47B4E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:56 STA @LOCAL01
    case 0xC47B4F: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4A67E.asm:57 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47B51: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4A67E.asm:57 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47B53: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4A67E.asm:57 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47B55: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4A67E.asm:57 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47B57: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4A67E.asm:58 CLC
    case 0xC47B59: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:59 ADC @VIRTUAL0A
    case 0xC47B5A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4A67E.asm:60 STA @VIRTUAL0A
    case 0xC47B5C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4A67E.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC47B5E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:62 LDA [@VIRTUAL0A]
    case 0xC47B60: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A67E.asm:63 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    case 0xC47B62: cpu.execute_instruction<0x8D>(0x00B098, 3); return true;
    // src/unknown/C4/C4A67E.asm:64 LDY #.LOWORD(SWIRL_FRAMES_LEFT)
    case 0xC47B65: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000099, 2); else cpu.execute_instruction<0xA0>(0x00B099, 3); return true;
    // src/unknown/C4/C4A67E.asm:64 LDY #.LOWORD(SWIRL_FRAMES_LEFT)
    // Overlapping static entry reached from 0xC47B65.
    case 0xC47B67: cpu.execute_instruction<0xB0>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A67E.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC47B68: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:65 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47B67.
    case 0xC47B69: cpu.execute_instruction<0x20>(0x000FA5, 3); return true;
    // src/unknown/C4/C4A67E.asm:66 LDA @LOCAL01
    case 0xC47B6A: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C4A67E.asm:67 INC
    case 0xC47B6C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:68 INC
    case 0xC47B6D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4A67E.asm:69 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47B6E: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4A67E.asm:69 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47B70: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4A67E.asm:69 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47B72: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4A67E.asm:69 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47B74: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4A67E.asm:70 CLC
    case 0xC47B76: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:71 ADC @VIRTUAL0A
    case 0xC47B77: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4A67E.asm:72 STA @VIRTUAL0A
    case 0xC47B79: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4A67E.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC47B7B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:74 LDA [@VIRTUAL0A]
    case 0xC47B7D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A67E.asm:75 STA __BSS_START__,Y
    case 0xC47B7F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A67E.asm:76 LDX #.LOWORD(SWIRL_HDMA_TABLE_ID)
    case 0xC47B82: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00009A, 2); else cpu.execute_instruction<0xA2>(0x00B09A, 3); return true;
    // src/unknown/C4/C4A67E.asm:76 LDX #.LOWORD(SWIRL_HDMA_TABLE_ID)
    // Overlapping static entry reached from 0xC47B82.
    case 0xC47B84: cpu.execute_instruction<0xB0>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A67E.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC47B85: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:77 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47B84.
    case 0xC47B86: cpu.execute_instruction<0x20>(0x000FA5, 3); return true;
    // src/unknown/C4/C4A67E.asm:78 LDA @LOCAL01
    case 0xC47B87: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C4A67E.asm:79 INC
    case 0xC47B89: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:80 CLC
    case 0xC47B8A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:81 ADC @VIRTUAL06
    case 0xC47B8B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A67E.asm:82 STA @VIRTUAL06
    case 0xC47B8D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4A67E.asm:83 SEP #PROC_FLAGS::ACCUM8
    case 0xC47B8F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:84 LDA [@VIRTUAL06]
    case 0xC47B91: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4A67E.asm:85 STA @LOCAL00
    case 0xC47B93: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4A67E.asm:86 STA __BSS_START__,X
    case 0xC47B95: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A67E.asm:87 REP #PROC_FLAGS::ACCUM8
    case 0xC47B98: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:88 LDA SWIRL_REVERSED
    case 0xC47B9A: cpu.execute_instruction<0xAD>(0x00B09C, 3); return true;
    // src/unknown/C4/C4A67E.asm:89 AND #$00FF
    case 0xC47B9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A67E.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC47B9D.
    case 0xC47B9F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A67E.asm:90 BEQ @UNKNOWN6
    case 0xC47BA0: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C4/C4A67E.asm:90 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xC47C03.
    case 0xC47BA1: cpu.execute_instruction<0x0F>(0xB920E2, 4); return true;
    // src/unknown/C4/C4A67E.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xC47BA2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:92 LDA __BSS_START__,Y
    case 0xC47BA4: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A67E.asm:92 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC47BA1.
    case 0xC47BA5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A67E.asm:93 STA @VIRTUAL00
    case 0xC47BA7: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4A67E.asm:94 LDA @LOCAL00
    case 0xC47BA9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4A67E.asm:95 CLC
    case 0xC47BAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:96 ADC @VIRTUAL00
    case 0xC47BAC: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C4/C4A67E.asm:97 STA __BSS_START__,X
    case 0xC47BAE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A67E.asm:99 LDY #.LOWORD(LOADED_OVAL_WINDOW)
    case 0xC47BB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A1, 2); else cpu.execute_instruction<0xA0>(0x00B0A1, 3); return true;
    // src/unknown/C4/C4A67E.asm:99 LDY #.LOWORD(LOADED_OVAL_WINDOW)
    // Overlapping static entry reached from 0xC47BB1.
    case 0xC47BB3: cpu.execute_instruction<0xB0>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A67E.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC47BB4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:100 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47BB3.
    case 0xC47BB5: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A67E.asm:101 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC47BB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A67E.asm:101 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC47BB6.
    case 0xC47BB8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C4/C4A67E.asm:101 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC47BB9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A67E.asm:101 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC47BBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A67E.asm:101 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC47BBB.
    case 0xC47BBD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C4/C4A67E.asm:101 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC47BBE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C4/C4A67E.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC47BC0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C4/C4A67E.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC47BC2: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C4/C4A67E.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC47BC5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C4/C4A67E.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC47BC7: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C4/C4A67E.asm:103 LDA @VIRTUAL04
    case 0xC47BCA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4A67E.asm:104 BNE @UNKNOWN7
    case 0xC47BCC: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    case 0xC47BCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000037, 2); else cpu.execute_instruction<0xA9>(0x007A37, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    // Overlapping static entry reached from 0xC47BCE.
    case 0xC47BD0: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    case 0xC47BD1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    case 0xC47BD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    // Overlapping static entry reached from 0xC47BD3.
    case 0xC47BD5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    case 0xC47BD6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C4/C4A67E.asm:106 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC47BD8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C4/C4A67E.asm:106 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC47C2E.
    case 0xC47BD9: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C4/C4A67E.asm:106 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC47BDA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C4/C4A67E.asm:106 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC47BD9.
    case 0xC47BDB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C4/C4A67E.asm:106 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC47BDD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C4/C4A67E.asm:106 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC47BDF: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C4/C4A67E.asm:108 SEP #PROC_FLAGS::ACCUM8
    case 0xC47BE2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:109 STZ SWIRL_HDMA_CHANNEL_OFFSET
    case 0xC47BE4: cpu.execute_instruction<0x9C>(0x00B09E, 3); return true;
    // src/unknown/C4/C4A67E.asm:110 STZ SWIRL_LENGTH_PADDING
    case 0xC47BE7: cpu.execute_instruction<0x9C>(0x00B09F, 3); return true;
    // src/unknown/C4/C4A67E.asm:111 LDA #1
    case 0xC47BEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C4A67E.asm:112 STA SWIRL_AUTO_RESTORE
    case 0xC47BEC: cpu.execute_instruction<0x8D>(0x00B0A0, 3); return true;
    // src/unknown/C4/C4A67E.asm:112 STA SWIRL_AUTO_RESTORE
    // Overlapping static entry reached from 0xC47BEA.
    case 0xC47BED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000B0, 2); else cpu.execute_instruction<0xA0>(0x00C2B0, 3); return true;
    // src/unknown/C4/C4A67E.asm:113 REP #PROC_FLAGS::ACCUM8
    case 0xC47BEF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:113 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47BED.
    case 0xC47BF0: cpu.execute_instruction<0x20>(0x0002A5, 3); return true;
    // src/unknown/C4/C4A67E.asm:114 LDA @OPTIONS
    case 0xC47BF1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4A67E.asm:115 AND #$0080
    case 0xC47BF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C4/C4A67E.asm:115 AND #$0080
    // Overlapping static entry reached from 0xC47BF3.
    case 0xC47BF5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A67E.asm:116 BEQ @UNKNOWN8
    case 0xC47BF6: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C4/C4A67E.asm:117 LDA @VIRTUAL04
    case 0xC47BF8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4A67E.asm:118 SEP #PROC_FLAGS::ACCUM8
    case 0xC47BFA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:119 STA SWIRL_NEXT_SWIRL
    case 0xC47BFC: cpu.execute_instruction<0x8D>(0x00B0B9, 3); return true;
    // src/unknown/C4/C4A67E.asm:120 LDA #4
    case 0xC47BFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/unknown/C4/C4A67E.asm:121 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    case 0xC47C01: cpu.execute_instruction<0x8D>(0x00B098, 3); return true;
    // src/unknown/C4/C4A67E.asm:121 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    // Overlapping static entry reached from 0xC47BFF.
    case 0xC47C02: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:121 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    // Overlapping static entry reached from 0xC47C02.
    case 0xC47C03: cpu.execute_instruction<0xB0>(0x00009C, 2); return true;
    // src/unknown/C4/C4A67E.asm:122 STZ SWIRL_REPEAT_SPEED
    case 0xC47C04: cpu.execute_instruction<0x9C>(0x00B0BA, 3); return true;
    // src/unknown/C4/C4A67E.asm:122 STZ SWIRL_REPEAT_SPEED
    // Overlapping static entry reached from 0xC47C03.
    case 0xC47C05: cpu.execute_instruction<0xBA>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:122 STZ SWIRL_REPEAT_SPEED
    // Overlapping static entry reached from 0xC47C05.
    case 0xC47C06: cpu.execute_instruction<0xB0>(0x0000A9, 2); return true;
    // src/unknown/C4/C4A67E.asm:123 LDA #8
    case 0xC47C07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x008D08, 3); return true;
    // src/unknown/C4/C4A67E.asm:123 LDA #8
    // Overlapping static entry reached from 0xC47C06.
    case 0xC47C08: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:124 STA SWIRL_REPEATS_UNTIL_SPEED_UP
    case 0xC47C09: cpu.execute_instruction<0x8D>(0x00B0BB, 3); return true;
    // src/unknown/C4/C4A67E.asm:124 STA SWIRL_REPEATS_UNTIL_SPEED_UP
    // Overlapping static entry reached from 0xC47C07.
    case 0xC47C0A: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:124 STA SWIRL_REPEATS_UNTIL_SPEED_UP
    // Overlapping static entry reached from 0xC47C0A.
    case 0xC47C0B: cpu.execute_instruction<0xB0>(0x000080, 2); return true;
    // src/unknown/C4/C4A67E.asm:125 BRA @UNKNOWN9
    case 0xC47C0C: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4A67E.asm:125 BRA @UNKNOWN9
    // Overlapping static entry reached from 0xC47C0B.
    case 0xC47C0D: cpu.execute_instruction<0x05>(0x0000E2, 2); return true;
    // src/unknown/C4/C4A67E.asm:127 SEP #PROC_FLAGS::ACCUM8
    case 0xC47C0E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:127 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47C0D.
    case 0xC47C0F: cpu.execute_instruction<0x20>(0x00B99C, 3); return true;
    // src/unknown/C4/C4A67E.asm:128 STZ SWIRL_NEXT_SWIRL
    case 0xC47C10: cpu.execute_instruction<0x9C>(0x00B0B9, 3); return true;
    // src/unknown/C4/C4A67E.asm:128 STZ SWIRL_NEXT_SWIRL
    // Overlapping static entry reached from 0xC47C0F.
    case 0xC47C12: cpu.execute_instruction<0xB0>(0x000022, 2); return true;
    // src/unknown/C4/C4A67E.asm:130 JSL UNKNOWN_C0B0AA
    case 0xC47C13: cpu.execute_instruction<0x22>(0xC0B089, 4); return true;
    // src/unknown/C4/C4A67E.asm:130 JSL UNKNOWN_C0B0AA
    // Overlapping static entry reached from 0xC47C12.
    case 0xC47C14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000B0, 2); else cpu.execute_instruction<0x89>(0x00C0B0, 3); return true;
    // src/unknown/C4/C4A67E.asm:130 JSL UNKNOWN_C0B0AA
    // Overlapping static entry reached from 0xC47C14.
    case 0xC47C16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4A67E.asm:131 END_C_FUNCTION
    case 0xC47C17: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4A67E.asm:131 END_C_FUNCTION
    case 0xC47C18: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4A7B0.asm (unresolved).
bool execute_unresolved_c4_c4a7b0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4A7B0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47C19: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4A7B0.asm:9 END_STACK_VARS
    case 0xC47C1B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4A7B0.asm:9 END_STACK_VARS
    case 0xC47C1C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A7B0.asm:9 END_STACK_VARS
    case 0xC47C1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E9, 2); else cpu.execute_instruction<0x69>(0x00FFE9, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A7B0.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC47C1D.
    case 0xC47C1F: cpu.execute_instruction<0xFF>(0x97AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4A7B0.asm:9 END_STACK_VARS
    case 0xC47C20: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:10 LDA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC47C21: cpu.execute_instruction<0xAD>(0x00B097, 3); return true;
    // src/unknown/C4/C4A7B0.asm:10 LDA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    // Overlapping static entry reached from 0xC47C1F.
    case 0xC47C23: cpu.execute_instruction<0xB0>(0x000029, 2); return true;
    // src/unknown/C4/C4A7B0.asm:11 AND #$00FF
    case 0xC47C24: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC47C23.
    case 0xC47C25: cpu.execute_instruction<0xFF>(0x03D000, 4); return true;
    // src/unknown/C4/C4A7B0.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC47C24.
    case 0xC47C26: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:12 BEQL @UNKNOWN34
    case 0xC47C27: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:12 BEQL @UNKNOWN34
    case 0xC47C29: cpu.execute_instruction<0x4C>(0x0080BC, 3); return true;
    // src/unknown/C4/C4A7B0.asm:13 LDY #.LOWORD(LOADED_OVAL_WINDOW)
    case 0xC47C2C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A1, 2); else cpu.execute_instruction<0xA0>(0x00B0A1, 3); return true;
    // src/unknown/C4/C4A7B0.asm:13 LDY #.LOWORD(LOADED_OVAL_WINDOW)
    // Overlapping static entry reached from 0xC47C2C.
    case 0xC47C2E: cpu.execute_instruction<0xB0>(0x0000A9, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC47C2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC47C2E.
    case 0xC47C30: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC47C2F.
    case 0xC47C31: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC47C32: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC47C34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC47C34.
    case 0xC47C36: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC47C37: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC47C39: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC47C3C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC47C3E: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC47C41: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4A7B0.asm:16 CMP @VIRTUAL06+2
    case 0xC47C43: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:17 BNE @UNKNOWN1
    case 0xC47C45: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C4/C4A7B0.asm:18 LDA @VIRTUAL0A
    case 0xC47C47: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:19 CMP @VIRTUAL06
    case 0xC47C49: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:21 BEQL @UNKNOWN19
    case 0xC47C4B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:21 BEQL @UNKNOWN19
    case 0xC47C4D: cpu.execute_instruction<0x4C>(0x007E83, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:21 BEQL @UNKNOWN19
    // Overlapping static entry reached from 0xC47C23.
    case 0xC47C4E: cpu.execute_instruction<0x83>(0x00007E, 2); return true;
    // src/unknown/C4/C4A7B0.asm:22 LDX #.LOWORD(FRAMES_UNTIL_NEXT_SWIRL_UPDATE)
    case 0xC47C50: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000097, 2); else cpu.execute_instruction<0xA2>(0x00B097, 3); return true;
    // src/unknown/C4/C4A7B0.asm:22 LDX #.LOWORD(FRAMES_UNTIL_NEXT_SWIRL_UPDATE)
    // Overlapping static entry reached from 0xC47C50.
    case 0xC47C52: cpu.execute_instruction<0xB0>(0x0000E2, 2); return true;
    // src/unknown/C4/C4A7B0.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC47C53: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:23 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47C52.
    case 0xC47C54: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:24 LDA __BSS_START__,X
    case 0xC47C55: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:24 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC47C54.
    case 0xC47C57: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:25 DEC
    case 0xC47C58: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:26 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC47C59: cpu.execute_instruction<0x8D>(0x00B097, 3); return true;
    // src/unknown/C4/C4A7B0.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC47C5C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:28 AND #$00FF
    case 0xC47C5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC47C5E.
    case 0xC47C60: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:29 BNEL @UNKNOWN9
    case 0xC47C61: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:29 BNEL @UNKNOWN9
    case 0xC47C63: cpu.execute_instruction<0x4C>(0x007D7E, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC47C66: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC47C69: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC47C6B: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC47C6E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC47CE9.
    case 0xC47C6F: cpu.execute_instruction<0x0C>(0x0020E2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC47C70: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:32 LDA [@VIRTUAL0A]
    case 0xC47C72: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:33 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC47C74: cpu.execute_instruction<0x8D>(0x00B097, 3); return true;
    // src/unknown/C4/C4A7B0.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC47C77: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:35 AND #$00FF
    case 0xC47C79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC47C79.
    case 0xC47C7B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:36 BNE @UNKNOWN4
    case 0xC47C7C: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C4/C4A7B0.asm:37 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC47C7E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:37 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC47C80: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:37 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC47C83: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:37 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC47C85: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C4/C4A7B0.asm:38 JMP @UNKNOWN34
    case 0xC47C88: cpu.execute_instruction<0x4C>(0x0080BC, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47C8B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47C8E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47C90: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47C93: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:41 LDY #oval_window::centre_x
    case 0xC47C95: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4A7B0.asm:41 LDY #oval_window::centre_x
    // Overlapping static entry reached from 0xC47C95.
    case 0xC47C97: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:42 LDA [@VIRTUAL06],Y
    case 0xC47C98: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:43 CMP #$8000
    case 0xC47C9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:43 CMP #$8000
    // Overlapping static entry reached from 0xC47C9A.
    case 0xC47C9C: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:44 BEQ @UNKNOWN5
    case 0xC47C9D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C4A7B0.asm:45 STA LOADED_OVAL_WINDOW_CENTRE_X
    case 0xC47C9F: cpu.execute_instruction<0x8D>(0x00B0A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A7B0.asm:47 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC47CA2: cpu.execute_instruction<0xAD>(0x00B0A1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:47 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC47CA5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:47 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC47CA7: cpu.execute_instruction<0xAD>(0x00B0A3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:47 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC47CAA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:48 LDY #oval_window::centre_y
    case 0xC47CAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4A7B0.asm:48 LDY #oval_window::centre_y
    // Overlapping static entry reached from 0xC47CAC.
    case 0xC47CAE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:49 LDA [@VIRTUAL06],Y
    case 0xC47CAF: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:50 CMP #$8000
    case 0xC47CB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:50 CMP #$8000
    // Overlapping static entry reached from 0xC47CB1.
    case 0xC47CB3: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:51 BEQ @UNKNOWN6
    case 0xC47CB4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C4A7B0.asm:52 STA LOADED_OVAL_WINDOW_CENTRE_Y
    case 0xC47CB6: cpu.execute_instruction<0x8D>(0x00B0A7, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A7B0.asm:54 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC47CB9: cpu.execute_instruction<0xAD>(0x00B0A1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:54 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC47CBC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:54 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC47CBE: cpu.execute_instruction<0xAD>(0x00B0A3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:54 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC47CC1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:55 LDY #oval_window::initial_width
    case 0xC47CC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4A7B0.asm:55 LDY #oval_window::initial_width
    // Overlapping static entry reached from 0xC47CC3.
    case 0xC47CC5: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:56 LDA [@VIRTUAL06],Y
    case 0xC47CC6: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:57 CMP #$8000
    case 0xC47CC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:57 CMP #$8000
    // Overlapping static entry reached from 0xC47CC8.
    case 0xC47CCA: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:58 BEQ @UNKNOWN7
    case 0xC47CCB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C4A7B0.asm:59 STA LOADED_OVAL_WINDOW_WIDTH
    case 0xC47CCD: cpu.execute_instruction<0x8D>(0x00B0A9, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A7B0.asm:61 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC47CD0: cpu.execute_instruction<0xAD>(0x00B0A1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:61 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC47CD3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:61 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC47CD5: cpu.execute_instruction<0xAD>(0x00B0A3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:61 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC47CD8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:62 LDY #oval_window::initial_height
    case 0xC47CDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4A7B0.asm:62 LDY #oval_window::initial_height
    // Overlapping static entry reached from 0xC47CDA.
    case 0xC47CDC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:63 LDA [@VIRTUAL06],Y
    case 0xC47CDD: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:64 CMP #$8000
    case 0xC47CDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:64 CMP #$8000
    // Overlapping static entry reached from 0xC47CDF.
    case 0xC47CE1: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:65 BEQ @UNKNOWN8
    case 0xC47CE2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C4A7B0.asm:66 STA LOADED_OVAL_WINDOW_HEIGHT
    case 0xC47CE4: cpu.execute_instruction<0x8D>(0x00B0AB, 3); return true;
    // src/unknown/C4/C4A7B0.asm:68 LDY #.LOWORD(LOADED_OVAL_WINDOW)
    case 0xC47CE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A1, 2); else cpu.execute_instruction<0xA0>(0x00B0A1, 3); return true;
    // src/unknown/C4/C4A7B0.asm:68 LDY #.LOWORD(LOADED_OVAL_WINDOW)
    // Overlapping static entry reached from 0xC47CE7.
    case 0xC47CE9: cpu.execute_instruction<0xB0>(0x000084, 2); return true;
    // src/unknown/C4/C4A7B0.asm:69 STY @LOCAL03
    case 0xC47CEA: cpu.execute_instruction<0x84>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:69 STY @LOCAL03
    // Overlapping static entry reached from 0xC47CE9.
    case 0xC47CEB: cpu.execute_instruction<0x15>(0x0000B9, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:70 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47CEC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:70 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC47CEB.
    case 0xC47CED: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:70 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47CEF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:70 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47CF1: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:70 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47CF4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:71 LDY #oval_window::centre_x_add
    case 0xC47CF6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C4A7B0.asm:71 LDY #oval_window::centre_x_add
    // Overlapping static entry reached from 0xC47CF6.
    case 0xC47CF8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:72 LDA [@VIRTUAL06],Y
    case 0xC47CF9: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:73 STA LOADED_OVAL_WINDOW_CENTRE_X_ADD
    case 0xC47CFB: cpu.execute_instruction<0x8D>(0x00B0AD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:74 LDY @LOCAL03
    case 0xC47CFE: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:75 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D00: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:75 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D03: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:75 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D05: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:75 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D08: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:76 LDY #oval_window::centre_y_add
    case 0xC47D0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C4A7B0.asm:76 LDY #oval_window::centre_y_add
    // Overlapping static entry reached from 0xC47D0A.
    case 0xC47D0C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:77 LDA [@VIRTUAL06],Y
    case 0xC47D0D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:78 STA LOADED_OVAL_WINDOW_CENTRE_Y_ADD
    case 0xC47D0F: cpu.execute_instruction<0x8D>(0x00B0AF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:79 LDY @LOCAL03
    case 0xC47D12: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:80 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D14: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:80 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D17: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:80 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D19: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:80 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D1C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:81 LDY #oval_window::width_velocity
    case 0xC47D1E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/unknown/C4/C4A7B0.asm:81 LDY #oval_window::width_velocity
    // Overlapping static entry reached from 0xC47D1E.
    case 0xC47D20: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:82 LDA [@VIRTUAL06],Y
    case 0xC47D21: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:83 STA LOADED_OVAL_WINDOW_WIDTH_VELOCITY
    case 0xC47D23: cpu.execute_instruction<0x8D>(0x00B0B1, 3); return true;
    // src/unknown/C4/C4A7B0.asm:84 LDY @LOCAL03
    case 0xC47D26: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:85 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D28: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:85 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D2B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:85 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D2D: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:85 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D30: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:86 LDY #oval_window::height_velocity
    case 0xC47D32: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C4A7B0.asm:86 LDY #oval_window::height_velocity
    // Overlapping static entry reached from 0xC47D32.
    case 0xC47D34: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:87 LDA [@VIRTUAL06],Y
    case 0xC47D35: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:88 STA LOADED_OVAL_WINDOW_HEIGHT_VELOCITY
    case 0xC47D37: cpu.execute_instruction<0x8D>(0x00B0B3, 3); return true;
    // src/unknown/C4/C4A7B0.asm:89 LDY @LOCAL03
    case 0xC47D3A: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:90 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D3C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:90 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D3F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:90 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D41: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:90 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D44: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:91 LDY #oval_window::width_acceleration
    case 0xC47D46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/unknown/C4/C4A7B0.asm:91 LDY #oval_window::width_acceleration
    // Overlapping static entry reached from 0xC47D46.
    case 0xC47D48: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:92 LDA [@VIRTUAL06],Y
    case 0xC47D49: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:93 STA LOADED_OVAL_WINDOW_WIDTH_ACCELERATION
    case 0xC47D4B: cpu.execute_instruction<0x8D>(0x00B0B5, 3); return true;
    // src/unknown/C4/C4A7B0.asm:93 STA LOADED_OVAL_WINDOW_WIDTH_ACCELERATION
    // Overlapping static entry reached from 0xC47D8D.
    case 0xC47D4C: cpu.execute_instruction<0xB5>(0x0000B0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:94 LDY @LOCAL03
    case 0xC47D4E: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:95 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D50: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:95 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D53: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:95 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D55: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:95 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D58: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:95 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC47D9A.
    case 0xC47D59: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:96 LDY #oval_window::height_acceleration
    case 0xC47D5A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000014, 2); else cpu.execute_instruction<0xA0>(0x000014, 3); return true;
    // src/unknown/C4/C4A7B0.asm:96 LDY #oval_window::height_acceleration
    // Overlapping static entry reached from 0xC47D5A.
    case 0xC47D5C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:97 LDA [@VIRTUAL06],Y
    case 0xC47D5D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:98 STA LOADED_OVAL_WINDOW_HEIGHT_ACCELERATION
    case 0xC47D5F: cpu.execute_instruction<0x8D>(0x00B0B7, 3); return true;
    // src/unknown/C4/C4A7B0.asm:99 LDY @LOCAL03
    case 0xC47D62: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:100 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D64: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:100 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D67: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:100 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D69: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:100 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC47D6C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:101 LDA #.SIZEOF(oval_window)
    case 0xC47D6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x000016, 3); return true;
    // src/unknown/C4/C4A7B0.asm:101 LDA #.SIZEOF(oval_window)
    // Overlapping static entry reached from 0xC47D6E.
    case 0xC47D70: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4A7B0.asm:102 CLC
    case 0xC47D71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:103 ADC @VIRTUAL06
    case 0xC47D72: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:104 STA @VIRTUAL06
    case 0xC47D74: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:105 STA __BSS_START__,Y
    case 0xC47D76: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:106 LDA @VIRTUAL06+2
    case 0xC47D79: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:107 STA __BSS_START__+2,Y
    case 0xC47D7B: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C4/C4A7B0.asm:109 LDX #.LOWORD(LOADED_OVAL_WINDOW_CENTRE_X)
    case 0xC47D7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A5, 2); else cpu.execute_instruction<0xA2>(0x00B0A5, 3); return true;
    // src/unknown/C4/C4A7B0.asm:109 LDX #.LOWORD(LOADED_OVAL_WINDOW_CENTRE_X)
    // Overlapping static entry reached from 0xC47D7E.
    case 0xC47D80: cpu.execute_instruction<0xB0>(0x0000BD, 2); return true;
    // src/unknown/C4/C4A7B0.asm:110 LDA __BSS_START__,X
    case 0xC47D81: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:110 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC47D80.
    case 0xC47D82: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:111 CLC
    case 0xC47D84: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:112 ADC LOADED_OVAL_WINDOW_CENTRE_X_ADD
    case 0xC47D85: cpu.execute_instruction<0x6D>(0x00B0AD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:113 STA __BSS_START__,X
    case 0xC47D88: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:114 LDX #.LOWORD(LOADED_OVAL_WINDOW_CENTRE_Y)
    case 0xC47D8B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A7, 2); else cpu.execute_instruction<0xA2>(0x00B0A7, 3); return true;
    // src/unknown/C4/C4A7B0.asm:114 LDX #.LOWORD(LOADED_OVAL_WINDOW_CENTRE_Y)
    // Overlapping static entry reached from 0xC47D8B.
    case 0xC47D8D: cpu.execute_instruction<0xB0>(0x0000BD, 2); return true;
    // src/unknown/C4/C4A7B0.asm:115 LDA __BSS_START__,X
    case 0xC47D8E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:115 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC47D8D.
    case 0xC47D8F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:116 CLC
    case 0xC47D91: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:117 ADC LOADED_OVAL_WINDOW_CENTRE_Y_ADD
    case 0xC47D92: cpu.execute_instruction<0x6D>(0x00B0AF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:118 STA __BSS_START__,X
    case 0xC47D95: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:119 LDX #.LOWORD(LOADED_OVAL_WINDOW_WIDTH_VELOCITY)
    case 0xC47D98: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B1, 2); else cpu.execute_instruction<0xA2>(0x00B0B1, 3); return true;
    // src/unknown/C4/C4A7B0.asm:119 LDX #.LOWORD(LOADED_OVAL_WINDOW_WIDTH_VELOCITY)
    // Overlapping static entry reached from 0xC47D98.
    case 0xC47D9A: cpu.execute_instruction<0xB0>(0x0000BD, 2); return true;
    // src/unknown/C4/C4A7B0.asm:120 LDA __BSS_START__,X
    case 0xC47D9B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:120 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC47D9A.
    case 0xC47D9C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:121 CLC
    case 0xC47D9E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:122 ADC LOADED_OVAL_WINDOW_WIDTH_ACCELERATION
    case 0xC47D9F: cpu.execute_instruction<0x6D>(0x00B0B5, 3); return true;
    // src/unknown/C4/C4A7B0.asm:123 STA __BSS_START__,X
    case 0xC47DA2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:124 LDY #.LOWORD(LOADED_OVAL_WINDOW_HEIGHT_VELOCITY)
    case 0xC47DA5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000B3, 2); else cpu.execute_instruction<0xA0>(0x00B0B3, 3); return true;
    // src/unknown/C4/C4A7B0.asm:124 LDY #.LOWORD(LOADED_OVAL_WINDOW_HEIGHT_VELOCITY)
    // Overlapping static entry reached from 0xC47DA5.
    case 0xC47DA7: cpu.execute_instruction<0xB0>(0x0000B9, 2); return true;
    // src/unknown/C4/C4A7B0.asm:125 LDA __BSS_START__,Y
    case 0xC47DA8: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:125 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC47DA7.
    case 0xC47DA9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:126 CLC
    case 0xC47DAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:127 ADC LOADED_OVAL_WINDOW_HEIGHT_ACCELERATION
    case 0xC47DAC: cpu.execute_instruction<0x6D>(0x00B0B7, 3); return true;
    // src/unknown/C4/C4A7B0.asm:128 STA __BSS_START__,Y
    case 0xC47DAF: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:129 LDA __BSS_START__,X
    case 0xC47DB2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:130 STA @LOCAL03
    case 0xC47DB5: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:131 STA @VIRTUAL02
    case 0xC47DB7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:132 LDA #0
    case 0xC47DB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:132 LDA #0
    // Overlapping static entry reached from 0xC47DB9.
    case 0xC47DBB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4A7B0.asm:133 CLC
    case 0xC47DBC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:134 SBC @VIRTUAL02
    case 0xC47DBD: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:135 BRANCHLTEQS @UNKNOWN12
    case 0xC47DBF: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:135 BRANCHLTEQS @UNKNOWN12
    case 0xC47DC1: cpu.execute_instruction<0x10>(0x00001E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C4A7B0.asm:135 BRANCHLTEQS @UNKNOWN12
    case 0xC47DC3: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:135 BRANCHLTEQS @UNKNOWN12
    case 0xC47DC5: cpu.execute_instruction<0x30>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:136 LDX #.LOWORD(LOADED_OVAL_WINDOW_WIDTH)
    case 0xC47DC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A9, 2); else cpu.execute_instruction<0xA2>(0x00B0A9, 3); return true;
    // src/unknown/C4/C4A7B0.asm:136 LDX #.LOWORD(LOADED_OVAL_WINDOW_WIDTH)
    // Overlapping static entry reached from 0xC47DC7.
    case 0xC47DC9: cpu.execute_instruction<0xB0>(0x0000A5, 2); return true;
    // src/unknown/C4/C4A7B0.asm:137 LDA @LOCAL03
    case 0xC47DCA: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:137 LDA @LOCAL03
    // Overlapping static entry reached from 0xC47DC9.
    case 0xC47DCB: cpu.execute_instruction<0x15>(0x000049, 2); return true;
    // src/unknown/C4/C4A7B0.asm:138 EOR #$FFFF
    case 0xC47DCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:138 EOR #$FFFF
    // Overlapping static entry reached from 0xC47DCB.
    case 0xC47DCD: cpu.execute_instruction<0xFF>(0x851AFF, 4); return true;
    // src/unknown/C4/C4A7B0.asm:138 EOR #$FFFF
    // Overlapping static entry reached from 0xC47DCC.
    case 0xC47DCE: cpu.execute_instruction<0xFF>(0x02851A, 4); return true;
    // src/unknown/C4/C4A7B0.asm:139 INC
    case 0xC47DCF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:140 STA @VIRTUAL02
    case 0xC47DD0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:140 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC47DCD.
    case 0xC47DD1: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/unknown/C4/C4A7B0.asm:141 LDA __BSS_START__,X
    case 0xC47DD2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:142 CMP @VIRTUAL02
    case 0xC47DD5: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:143 BCS @UNKNOWN12
    case 0xC47DD7: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:144 LDA #0
    case 0xC47DD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:144 LDA #0
    // Overlapping static entry reached from 0xC47DD9.
    case 0xC47DDB: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4A7B0.asm:145 STA __BSS_START__,X
    case 0xC47DDC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:145 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC47E1F.
    case 0xC47DDE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4A7B0.asm:146 BRA @UNKNOWN13
    case 0xC47DDF: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C4A7B0.asm:148 LDX #.LOWORD(LOADED_OVAL_WINDOW_WIDTH)
    case 0xC47DE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A9, 2); else cpu.execute_instruction<0xA2>(0x00B0A9, 3); return true;
    // src/unknown/C4/C4A7B0.asm:148 LDX #.LOWORD(LOADED_OVAL_WINDOW_WIDTH)
    // Overlapping static entry reached from 0xC47DE1.
    case 0xC47DE3: cpu.execute_instruction<0xB0>(0x0000BD, 2); return true;
    // src/unknown/C4/C4A7B0.asm:149 LDA __BSS_START__,X
    case 0xC47DE4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:149 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC47DE3.
    case 0xC47DE5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:150 CLC
    case 0xC47DE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:151 ADC LOADED_OVAL_WINDOW_WIDTH_VELOCITY
    case 0xC47DE8: cpu.execute_instruction<0x6D>(0x00B0B1, 3); return true;
    // src/unknown/C4/C4A7B0.asm:152 STA __BSS_START__,X
    case 0xC47DEB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:154 LDA LOADED_OVAL_WINDOW_HEIGHT_VELOCITY
    case 0xC47DEE: cpu.execute_instruction<0xAD>(0x00B0B3, 3); return true;
    // src/unknown/C4/C4A7B0.asm:155 STA @LOCAL03
    case 0xC47DF1: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:156 STA @VIRTUAL02
    case 0xC47DF3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:157 LDA #0
    case 0xC47DF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:157 LDA #0
    // Overlapping static entry reached from 0xC47DF5.
    case 0xC47DF7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4A7B0.asm:158 CLC
    case 0xC47DF8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:159 SBC @VIRTUAL02
    case 0xC47DF9: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:160 BRANCHLTEQS @UNKNOWN16
    case 0xC47DFB: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:160 BRANCHLTEQS @UNKNOWN16
    case 0xC47DFD: cpu.execute_instruction<0x10>(0x00001E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C4A7B0.asm:160 BRANCHLTEQS @UNKNOWN16
    case 0xC47DFF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:160 BRANCHLTEQS @UNKNOWN16
    case 0xC47E01: cpu.execute_instruction<0x30>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:161 LDX #.LOWORD(LOADED_OVAL_WINDOW_HEIGHT)
    case 0xC47E03: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AB, 2); else cpu.execute_instruction<0xA2>(0x00B0AB, 3); return true;
    // src/unknown/C4/C4A7B0.asm:161 LDX #.LOWORD(LOADED_OVAL_WINDOW_HEIGHT)
    // Overlapping static entry reached from 0xC47E03.
    case 0xC47E05: cpu.execute_instruction<0xB0>(0x0000A5, 2); return true;
    // src/unknown/C4/C4A7B0.asm:162 LDA @LOCAL03
    case 0xC47E06: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:162 LDA @LOCAL03
    // Overlapping static entry reached from 0xC47E05.
    case 0xC47E07: cpu.execute_instruction<0x15>(0x000049, 2); return true;
    // src/unknown/C4/C4A7B0.asm:163 EOR #$FFFF
    case 0xC47E08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:163 EOR #$FFFF
    // Overlapping static entry reached from 0xC47E07.
    case 0xC47E09: cpu.execute_instruction<0xFF>(0x851AFF, 4); return true;
    // src/unknown/C4/C4A7B0.asm:163 EOR #$FFFF
    // Overlapping static entry reached from 0xC47E08.
    case 0xC47E0A: cpu.execute_instruction<0xFF>(0x02851A, 4); return true;
    // src/unknown/C4/C4A7B0.asm:164 INC
    case 0xC47E0B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:165 STA @VIRTUAL02
    case 0xC47E0C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:165 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC47E09.
    case 0xC47E0D: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/unknown/C4/C4A7B0.asm:166 LDA __BSS_START__,X
    case 0xC47E0E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:167 CMP @VIRTUAL02
    case 0xC47E11: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:168 BCS @UNKNOWN16
    case 0xC47E13: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:169 LDA #0
    case 0xC47E15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:169 LDA #0
    // Overlapping static entry reached from 0xC47E15.
    case 0xC47E17: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4A7B0.asm:170 STA __BSS_START__,X
    case 0xC47E18: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:171 BRA @UNKNOWN17
    case 0xC47E1B: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C4A7B0.asm:173 LDX #.LOWORD(LOADED_OVAL_WINDOW_HEIGHT)
    case 0xC47E1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AB, 2); else cpu.execute_instruction<0xA2>(0x00B0AB, 3); return true;
    // src/unknown/C4/C4A7B0.asm:173 LDX #.LOWORD(LOADED_OVAL_WINDOW_HEIGHT)
    // Overlapping static entry reached from 0xC47E1D.
    case 0xC47E1F: cpu.execute_instruction<0xB0>(0x0000BD, 2); return true;
    // src/unknown/C4/C4A7B0.asm:174 LDA __BSS_START__,X
    case 0xC47E20: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:174 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC47E1F.
    case 0xC47E21: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:175 CLC
    case 0xC47E23: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:176 ADC LOADED_OVAL_WINDOW_HEIGHT_VELOCITY
    case 0xC47E24: cpu.execute_instruction<0x6D>(0x00B0B3, 3); return true;
    // src/unknown/C4/C4A7B0.asm:177 STA __BSS_START__,X
    case 0xC47E27: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:179 LDA LOADED_OVAL_WINDOW_WIDTH
    case 0xC47E2A: cpu.execute_instruction<0xAD>(0x00B0A9, 3); return true;
    // src/unknown/C4/C4A7B0.asm:180 BNE @UNKNOWN18
    case 0xC47E2D: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/unknown/C4/C4A7B0.asm:181 LDA LOADED_OVAL_WINDOW_HEIGHT
    case 0xC47E2F: cpu.execute_instruction<0xAD>(0x00B0AB, 3); return true;
    // src/unknown/C4/C4A7B0.asm:182 BNE @UNKNOWN18
    case 0xC47E32: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/unknown/C4/C4A7B0.asm:183 SEP #PROC_FLAGS::ACCUM8
    case 0xC47E34: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:184 STZ FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC47E36: cpu.execute_instruction<0x9C>(0x00B097, 3); return true;
    // src/unknown/C4/C4A7B0.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC47E39: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:186 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC47E3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:186 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC47E3B.
    case 0xC47E3D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:186 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC47E3E: cpu.execute_instruction<0x8D>(0x00B0A1, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:186 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC47E41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:186 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC47E41.
    case 0xC47E43: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:186 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC47E44: cpu.execute_instruction<0x8D>(0x00B0A3, 3); return true;
    // src/unknown/C4/C4A7B0.asm:187 JMP @UNKNOWN34
    case 0xC47E47: cpu.execute_instruction<0x4C>(0x0080BC, 3); return true;
    // src/unknown/C4/C4A7B0.asm:189 LDA LOADED_OVAL_WINDOW_HEIGHT
    case 0xC47E4A: cpu.execute_instruction<0xAD>(0x00B0AB, 3); return true;
    // src/unknown/C4/C4A7B0.asm:190 XBA
    case 0xC47E4D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:191 AND #$00FF
    case 0xC47E4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:191 AND #$00FF
    // Overlapping static entry reached from 0xC47E4E.
    case 0xC47E50: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4A7B0.asm:192 STA @LOCAL00
    case 0xC47E51: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4A7B0.asm:193 LDA LOADED_OVAL_WINDOW_WIDTH
    case 0xC47E53: cpu.execute_instruction<0xAD>(0x00B0A9, 3); return true;
    // src/unknown/C4/C4A7B0.asm:194 XBA
    case 0xC47E56: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:195 AND #$00FF
    case 0xC47E57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:195 AND #$00FF
    // Overlapping static entry reached from 0xC47E57.
    case 0xC47E59: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4A7B0.asm:196 TAY
    case 0xC47E5A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:197 LDX LOADED_OVAL_WINDOW_CENTRE_Y
    case 0xC47E5B: cpu.execute_instruction<0xAE>(0x00B0A7, 3); return true;
    // src/unknown/C4/C4A7B0.asm:198 LDA LOADED_OVAL_WINDOW_CENTRE_X
    case 0xC47E5E: cpu.execute_instruction<0xAD>(0x00B0A5, 3); return true;
    // src/unknown/C4/C4A7B0.asm:199 JSL UNKNOWN_C0B149
    case 0xC47E61: cpu.execute_instruction<0x22>(0xC0B128, 4); return true;
    // src/unknown/C4/C4A7B0.asm:200 LDX #65
    case 0xC47E65: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000041, 2); else cpu.execute_instruction<0xA2>(0x000041, 3); return true;
    // src/unknown/C4/C4A7B0.asm:200 LDX #65
    // Overlapping static entry reached from 0xC47E65.
    case 0xC47E67: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4A7B0.asm:201 LDA #3
    case 0xC47E68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C4/C4A7B0.asm:201 LDA #3
    // Overlapping static entry reached from 0xC47E85.
    case 0xC47E69: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:201 LDA #3
    // Overlapping static entry reached from 0xC47E68.
    case 0xC47E6A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4A7B0.asm:202 JSL UNKNOWN_C0B0EF
    case 0xC47E6B: cpu.execute_instruction<0x22>(0xC0B0CE, 4); return true;
    // src/unknown/C4/C4A7B0.asm:203 LDA SWIRL_INVERT_ENABLED
    case 0xC47E6F: cpu.execute_instruction<0xAD>(0x00B09B, 3); return true;
    // src/unknown/C4/C4A7B0.asm:204 AND #$00FF
    case 0xC47E72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:204 AND #$00FF
    // Overlapping static entry reached from 0xC47E72.
    case 0xC47E74: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4A7B0.asm:205 TAX
    case 0xC47E75: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:206 LDA SWIRL_MASK_SETTINGS
    case 0xC47E76: cpu.execute_instruction<0xAD>(0x00B09D, 3); return true;
    // src/unknown/C4/C4A7B0.asm:207 AND #$00FF
    case 0xC47E79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:207 AND #$00FF
    // Overlapping static entry reached from 0xC47E79.
    case 0xC47E7B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4A7B0.asm:208 JSL SET_WINDOW_MASK
    case 0xC47E7C: cpu.execute_instruction<0x22>(0xC0B026, 4); return true;
    // src/unknown/C4/C4A7B0.asm:209 JMP @UNKNOWN34
    case 0xC47E80: cpu.execute_instruction<0x4C>(0x0080BC, 3); return true;
    // src/unknown/C4/C4A7B0.asm:211 LDX #.LOWORD(FRAMES_UNTIL_NEXT_SWIRL_UPDATE)
    case 0xC47E83: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000097, 2); else cpu.execute_instruction<0xA2>(0x00B097, 3); return true;
    // src/unknown/C4/C4A7B0.asm:211 LDX #.LOWORD(FRAMES_UNTIL_NEXT_SWIRL_UPDATE)
    // Overlapping static entry reached from 0xC47E83.
    case 0xC47E85: cpu.execute_instruction<0xB0>(0x0000E2, 2); return true;
    // src/unknown/C4/C4A7B0.asm:212 SEP #PROC_FLAGS::ACCUM8
    case 0xC47E86: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:212 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47E85.
    case 0xC47E87: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:213 LDA __BSS_START__,X
    case 0xC47E88: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:213 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC47E87.
    case 0xC47E8A: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:214 DEC
    case 0xC47E8B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:215 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC47E8C: cpu.execute_instruction<0x8D>(0x00B097, 3); return true;
    // src/unknown/C4/C4A7B0.asm:216 REP #PROC_FLAGS::ACCUM8
    case 0xC47E8F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:217 AND #$00FF
    case 0xC47E91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:217 AND #$00FF
    // Overlapping static entry reached from 0xC47E91.
    case 0xC47E93: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:218 BNEL @UNKNOWN34
    case 0xC47E94: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:218 BNEL @UNKNOWN34
    case 0xC47E96: cpu.execute_instruction<0x4C>(0x0080BC, 3); return true;
    // src/unknown/C4/C4A7B0.asm:220 LDX #.LOWORD(SWIRL_FRAMES_LEFT)
    case 0xC47E99: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000099, 2); else cpu.execute_instruction<0xA2>(0x00B099, 3); return true;
    // src/unknown/C4/C4A7B0.asm:220 LDX #.LOWORD(SWIRL_FRAMES_LEFT)
    // Overlapping static entry reached from 0xC47E99.
    case 0xC47E9B: cpu.execute_instruction<0xB0>(0x000086, 2); return true;
    // src/unknown/C4/C4A7B0.asm:221 STX @LOCAL03
    case 0xC47E9C: cpu.execute_instruction<0x86>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:221 STX @LOCAL03
    // Overlapping static entry reached from 0xC47E9B.
    case 0xC47E9D: cpu.execute_instruction<0x15>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A7B0.asm:222 REP #PROC_FLAGS::ACCUM8
    case 0xC47E9E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:222 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47E9D.
    case 0xC47E9F: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:223 LDA __BSS_START__,X
    case 0xC47EA0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:223 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC47E9F.
    case 0xC47EA2: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C4A7B0.asm:224 AND #$00FF
    case 0xC47EA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:224 AND #$00FF
    // Overlapping static entry reached from 0xC47EA3.
    case 0xC47EA5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:225 BEQL @UNKNOWN24
    case 0xC47EA6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:225 BEQL @UNKNOWN24
    case 0xC47EA8: cpu.execute_instruction<0x4C>(0x007F89, 3); return true;
    // src/unknown/C4/C4A7B0.asm:226 SEP #PROC_FLAGS::ACCUM8
    case 0xC47EAB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:227 LDA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    case 0xC47EAD: cpu.execute_instruction<0xAD>(0x00B098, 3); return true;
    // src/unknown/C4/C4A7B0.asm:228 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC47EB0: cpu.execute_instruction<0x8D>(0x00B097, 3); return true;
    // src/unknown/C4/C4A7B0.asm:229 LDY #.LOWORD(SWIRL_HDMA_CHANNEL_OFFSET)
    case 0xC47EB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009E, 2); else cpu.execute_instruction<0xA0>(0x00B09E, 3); return true;
    // src/unknown/C4/C4A7B0.asm:229 LDY #.LOWORD(SWIRL_HDMA_CHANNEL_OFFSET)
    // Overlapping static entry reached from 0xC47EB3.
    case 0xC47EB5: cpu.execute_instruction<0xB0>(0x000084, 2); return true;
    // src/unknown/C4/C4A7B0.asm:230 STY @LOCAL02
    case 0xC47EB6: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/unknown/C4/C4A7B0.asm:230 STY @LOCAL02
    // Overlapping static entry reached from 0xC47EB5.
    case 0xC47EB7: cpu.execute_instruction<0x13>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A7B0.asm:231 REP #PROC_FLAGS::ACCUM8
    case 0xC47EB8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:231 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47EB7.
    case 0xC47EB9: cpu.execute_instruction<0x20>(0x0000B9, 3); return true;
    // src/unknown/C4/C4A7B0.asm:232 LDA __BSS_START__,Y
    case 0xC47EBA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:232 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC47EB9.
    case 0xC47EBC: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C4A7B0.asm:233 AND #$00FF
    case 0xC47EBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:233 AND #$00FF
    // Overlapping static entry reached from 0xC47EBD.
    case 0xC47EBF: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:234 INC
    case 0xC47EC0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:235 INC
    case 0xC47EC1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:236 INC
    case 0xC47EC2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:237 JSL UNKNOWN_C0AE34
    case 0xC47EC3: cpu.execute_instruction<0x22>(0xC0AE13, 4); return true;
    // src/unknown/C4/C4A7B0.asm:238 LDY @LOCAL02
    case 0xC47EC7: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C4/C4A7B0.asm:239 SEP #PROC_FLAGS::ACCUM8
    case 0xC47EC9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:240 LDA __BSS_START__,Y
    case 0xC47ECB: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:241 INC
    case 0xC47ECE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:242 STA __BSS_START__,Y
    case 0xC47ECF: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:243 AND #$0001
    case 0xC47ED2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x009901, 3); return true;
    // src/unknown/C4/C4A7B0.asm:244 STA __BSS_START__,Y
    case 0xC47ED4: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:244 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC47ED2.
    case 0xC47ED5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:245 REP #PROC_FLAGS::ACCUM8
    case 0xC47ED7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:246 LDA SWIRL_REVERSED
    case 0xC47ED9: cpu.execute_instruction<0xAD>(0x00B09C, 3); return true;
    // src/unknown/C4/C4A7B0.asm:247 AND #$00FF
    case 0xC47EDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:247 AND #$00FF
    // Overlapping static entry reached from 0xC47EDC.
    case 0xC47EDE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:248 BNE @UNKNOWN22
    case 0xC47EDF: cpu.execute_instruction<0xD0>(0x00004B, 2); return true;
    // src/unknown/C4/C4A7B0.asm:249 LDX #.LOWORD(SWIRL_HDMA_TABLE_ID)
    case 0xC47EE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00009A, 2); else cpu.execute_instruction<0xA2>(0x00B09A, 3); return true;
    // src/unknown/C4/C4A7B0.asm:249 LDX #.LOWORD(SWIRL_HDMA_TABLE_ID)
    // Overlapping static entry reached from 0xC47EE1.
    case 0xC47EE3: cpu.execute_instruction<0xB0>(0x000086, 2); return true;
    // src/unknown/C4/C4A7B0.asm:250 STX @LOCAL03
    case 0xC47EE4: cpu.execute_instruction<0x86>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:250 STX @LOCAL03
    // Overlapping static entry reached from 0xC47EE3.
    case 0xC47EE5: cpu.execute_instruction<0x15>(0x0000E2, 2); return true;
    // src/unknown/C4/C4A7B0.asm:251 SEP #PROC_FLAGS::ACCUM8
    case 0xC47EE6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:251 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47EE5.
    case 0xC47EE7: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:252 LDA __BSS_START__,X
    case 0xC47EE8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:252 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC47EE7.
    case 0xC47EEA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4A7B0.asm:253 STA @LOCAL01
    case 0xC47EEB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:254 REP #PROC_FLAGS::ACCUM8
    case 0xC47EED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:255 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC47EEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:255 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC47EEF.
    case 0xC47EF1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A7B0.asm:255 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC47EF2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:255 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC47EF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:255 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC47EF4.
    case 0xC47EF6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:255 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC47EF7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:256 LDA @LOCAL01
    case 0xC47EF9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:257 AND #$00FF
    case 0xC47EFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:257 AND #$00FF
    // Overlapping static entry reached from 0xC47EFB.
    case 0xC47EFD: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:258 ASL
    case 0xC47EFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:259 TAX
    case 0xC47EFF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:260 LDA f:SWIRL_POINTER_TABLE,X
    case 0xC47F00: cpu.execute_instruction<0xBF>(0xCEDC45, 4); return true;
    // src/unknown/C4/C4A7B0.asm:261 CLC
    case 0xC47F04: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:262 ADC @VIRTUAL06
    case 0xC47F05: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:263 STA @VIRTUAL06
    case 0xC47F07: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:264 SEP #PROC_FLAGS::ACCUM8
    case 0xC47F09: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:265 LDA @LOCAL01
    case 0xC47F0B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:266 INC
    case 0xC47F0D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:267 LDX @LOCAL03
    case 0xC47F0E: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:268 STA __BSS_START__,X
    case 0xC47F10: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:268 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC47F2E.
    case 0xC47F12: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A7B0.asm:269 REP #PROC_FLAGS::ACCUM8
    case 0xC47F13: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A7B0.asm:270 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47F15: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:270 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47F17: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:270 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47F19: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:270 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47F1B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4A7B0.asm:271 LDA __BSS_START__,Y
    case 0xC47F1D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:272 AND #$00FF
    case 0xC47F20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:272 AND #$00FF
    // Overlapping static entry reached from 0xC47F20.
    case 0xC47F22: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:273 INC
    case 0xC47F23: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:274 INC
    case 0xC47F24: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:275 INC
    case 0xC47F25: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:276 JSL UNKNOWN_C0B0B8
    case 0xC47F26: cpu.execute_instruction<0x22>(0xC0B097, 4); return true;
    // src/unknown/C4/C4A7B0.asm:277 BRA @UNKNOWN23
    case 0xC47F2A: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C4/C4A7B0.asm:279 LDX #.LOWORD(SWIRL_HDMA_TABLE_ID)
    case 0xC47F2C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00009A, 2); else cpu.execute_instruction<0xA2>(0x00B09A, 3); return true;
    // src/unknown/C4/C4A7B0.asm:279 LDX #.LOWORD(SWIRL_HDMA_TABLE_ID)
    // Overlapping static entry reached from 0xC47F2C.
    case 0xC47F2E: cpu.execute_instruction<0xB0>(0x0000E2, 2); return true;
    // src/unknown/C4/C4A7B0.asm:280 SEP #PROC_FLAGS::ACCUM8
    case 0xC47F2F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:280 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47F2E.
    case 0xC47F30: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:281 LDA __BSS_START__,X
    case 0xC47F31: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:281 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC47F30.
    case 0xC47F33: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:282 DEC
    case 0xC47F34: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:283 STA @LOCAL01
    case 0xC47F35: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:284 STA __BSS_START__,X
    case 0xC47F37: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:285 REP #PROC_FLAGS::ACCUM8
    case 0xC47F3A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:286 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC47F3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:286 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC47F3C.
    case 0xC47F3E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A7B0.asm:286 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC47F3F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:286 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC47F41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:286 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC47F41.
    case 0xC47F43: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:286 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC47F44: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:287 LDA @LOCAL01
    case 0xC47F46: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:288 AND #$00FF
    case 0xC47F48: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:288 AND #$00FF
    // Overlapping static entry reached from 0xC47F48.
    case 0xC47F4A: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:289 ASL
    case 0xC47F4B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:290 TAX
    case 0xC47F4C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:291 LDA f:SWIRL_POINTER_TABLE,X
    case 0xC47F4D: cpu.execute_instruction<0xBF>(0xCEDC45, 4); return true;
    // src/unknown/C4/C4A7B0.asm:292 CLC
    case 0xC47F51: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:293 ADC @VIRTUAL06
    case 0xC47F52: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:294 STA @VIRTUAL06
    case 0xC47F54: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:295 STA @LOCAL00
    case 0xC47F56: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4A7B0.asm:296 LDA @VIRTUAL06+2
    case 0xC47F58: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:297 STA @LOCAL00+2
    case 0xC47F5A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4A7B0.asm:298 LDA __BSS_START__,Y
    case 0xC47F5C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:299 AND #$00FF
    case 0xC47F5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:299 AND #$00FF
    // Overlapping static entry reached from 0xC47F7C.
    case 0xC47F60: cpu.execute_instruction<0xFF>(0x1A1A00, 4); return true;
    // src/unknown/C4/C4A7B0.asm:299 AND #$00FF
    // Overlapping static entry reached from 0xC47F5F.
    case 0xC47F61: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:300 INC
    case 0xC47F62: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:301 INC
    case 0xC47F63: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:302 INC
    case 0xC47F64: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:303 JSL UNKNOWN_C0B0B8
    case 0xC47F65: cpu.execute_instruction<0x22>(0xC0B097, 4); return true;
    // src/unknown/C4/C4A7B0.asm:305 LDA SWIRL_INVERT_ENABLED
    case 0xC47F69: cpu.execute_instruction<0xAD>(0x00B09B, 3); return true;
    // src/unknown/C4/C4A7B0.asm:306 AND #$00FF
    case 0xC47F6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:306 AND #$00FF
    // Overlapping static entry reached from 0xC47F6C.
    case 0xC47F6E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4A7B0.asm:307 TAX
    case 0xC47F6F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:308 LDA SWIRL_MASK_SETTINGS
    case 0xC47F70: cpu.execute_instruction<0xAD>(0x00B09D, 3); return true;
    // src/unknown/C4/C4A7B0.asm:309 AND #$00FF
    case 0xC47F73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:309 AND #$00FF
    // Overlapping static entry reached from 0xC47F73.
    case 0xC47F75: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4A7B0.asm:310 JSL SET_WINDOW_MASK
    case 0xC47F76: cpu.execute_instruction<0x22>(0xC0B026, 4); return true;
    // src/unknown/C4/C4A7B0.asm:311 LDX #.LOWORD(SWIRL_FRAMES_LEFT)
    case 0xC47F7A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000099, 2); else cpu.execute_instruction<0xA2>(0x00B099, 3); return true;
    // src/unknown/C4/C4A7B0.asm:311 LDX #.LOWORD(SWIRL_FRAMES_LEFT)
    // Overlapping static entry reached from 0xC47F7A.
    case 0xC47F7C: cpu.execute_instruction<0xB0>(0x0000E2, 2); return true;
    // src/unknown/C4/C4A7B0.asm:312 SEP #PROC_FLAGS::ACCUM8
    case 0xC47F7D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:312 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47F7C.
    case 0xC47F7E: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:313 LDA __BSS_START__,X
    case 0xC47F7F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:313 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC47F9D.
    case 0xC47F81: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:314 DEC
    case 0xC47F82: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:315 STA __BSS_START__,X
    case 0xC47F83: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:315 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC47FDC.
    case 0xC47F84: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:316 JMP @UNKNOWN34
    case 0xC47F86: cpu.execute_instruction<0x4C>(0x0080BC, 3); return true;
    // src/unknown/C4/C4A7B0.asm:319 LDA #.LOWORD(SWIRL_NEXT_SWIRL)
    case 0xC47F89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B9, 2); else cpu.execute_instruction<0xA9>(0x00B0B9, 3); return true;
    // src/unknown/C4/C4A7B0.asm:319 LDA #.LOWORD(SWIRL_NEXT_SWIRL)
    // Overlapping static entry reached from 0xC47F89.
    case 0xC47F8B: cpu.execute_instruction<0xB0>(0x000085, 2); return true;
    // src/unknown/C4/C4A7B0.asm:320 STA @VIRTUAL02
    case 0xC47F8C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:320 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC47F8B.
    case 0xC47F8D: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/unknown/C4/C4A7B0.asm:321 LDX @VIRTUAL02
    case 0xC47F8E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:322 LDA __BSS_START__,X
    case 0xC47F90: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:323 AND #$00FF
    case 0xC47F93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:323 AND #$00FF
    // Overlapping static entry reached from 0xC47F93.
    case 0xC47F95: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:324 BEQL @UNKNOWN32
    case 0xC47F96: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:324 BEQL @UNKNOWN32
    case 0xC47F98: cpu.execute_instruction<0x4C>(0x008070, 3); return true;
    // src/unknown/C4/C4A7B0.asm:325 LDY #.LOWORD(SWIRL_REPEATS_UNTIL_SPEED_UP)
    case 0xC47F9B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000BB, 2); else cpu.execute_instruction<0xA0>(0x00B0BB, 3); return true;
    // src/unknown/C4/C4A7B0.asm:325 LDY #.LOWORD(SWIRL_REPEATS_UNTIL_SPEED_UP)
    // Overlapping static entry reached from 0xC47F9B.
    case 0xC47F9D: cpu.execute_instruction<0xB0>(0x0000E2, 2); return true;
    // src/unknown/C4/C4A7B0.asm:326 SEP #PROC_FLAGS::ACCUM8
    case 0xC47F9E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:326 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47F9D.
    case 0xC47F9F: cpu.execute_instruction<0x20>(0x0000B9, 3); return true;
    // src/unknown/C4/C4A7B0.asm:327 LDA __BSS_START__,Y
    case 0xC47FA0: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:327 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC47F9F.
    case 0xC47FA2: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:328 DEC
    case 0xC47FA3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:329 STA __BSS_START__,Y
    case 0xC47FA4: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:330 REP #PROC_FLAGS::ACCUM8
    case 0xC47FA7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:331 AND #$00FF
    case 0xC47FA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:331 AND #$00FF
    // Overlapping static entry reached from 0xC47FA9.
    case 0xC47FAB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:332 BEQ @UNKNOWN27
    case 0xC47FAC: cpu.execute_instruction<0xF0>(0x00006B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:333 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC47FAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x00DD41, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:333 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC47FAE.
    case 0xC47FB0: cpu.execute_instruction<0xDD>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A7B0.asm:333 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC47FB1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:333 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC47FB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:333 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC47FB3.
    case 0xC47FB5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:333 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC47FB6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:334 LDX @VIRTUAL02
    case 0xC47FB8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:335 LDA __BSS_START__,X
    case 0xC47FBA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:336 AND #$00FF
    case 0xC47FBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:336 AND #$00FF
    // Overlapping static entry reached from 0xC47FBD.
    case 0xC47FBF: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:337 ASL
    case 0xC47FC0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:338 ASL
    case 0xC47FC1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:339 INC
    case 0xC47FC2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:340 INC
    case 0xC47FC3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4A7B0.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47FC4: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47FC6: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47FC8: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47FCA: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4A7B0.asm:342 CLC
    case 0xC47FCC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:343 ADC @VIRTUAL0A
    case 0xC47FCD: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:344 STA @VIRTUAL0A
    case 0xC47FCF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:345 SEP #PROC_FLAGS::ACCUM8
    case 0xC47FD1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:346 LDA [@VIRTUAL0A]
    case 0xC47FD3: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:347 LDX @LOCAL03
    case 0xC47FD5: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:347 LDX @LOCAL03
    // Overlapping static entry reached from 0xC48054.
    case 0xC47FD6: cpu.execute_instruction<0x15>(0x00009D, 2); return true;
    // src/unknown/C4/C4A7B0.asm:348 STA __BSS_START__,X
    case 0xC47FD7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:348 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC47FD6.
    case 0xC47FD8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:349 LDY #.LOWORD(SWIRL_HDMA_TABLE_ID)
    case 0xC47FDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009A, 2); else cpu.execute_instruction<0xA0>(0x00B09A, 3); return true;
    // src/unknown/C4/C4A7B0.asm:349 LDY #.LOWORD(SWIRL_HDMA_TABLE_ID)
    // Overlapping static entry reached from 0xC47FDA.
    case 0xC47FDC: cpu.execute_instruction<0xB0>(0x0000A6, 2); return true;
    // src/unknown/C4/C4A7B0.asm:350 LDX @VIRTUAL02
    case 0xC47FDD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:350 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC47FDC.
    case 0xC47FDE: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A7B0.asm:351 REP #PROC_FLAGS::ACCUM8
    case 0xC47FDF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:352 LDA __BSS_START__,X
    case 0xC47FE1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:353 AND #$00FF
    case 0xC47FE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:353 AND #$00FF
    // Overlapping static entry reached from 0xC47FE4.
    case 0xC47FE6: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:354 ASL
    case 0xC47FE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:355 ASL
    case 0xC47FE8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:356 INC
    case 0xC47FE9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:357 CLC
    case 0xC47FEA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:358 ADC @VIRTUAL06
    case 0xC47FEB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:359 STA @VIRTUAL06
    case 0xC47FED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:360 SEP #PROC_FLAGS::ACCUM8
    case 0xC47FEF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:361 LDA [@VIRTUAL06]
    case 0xC47FF1: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:362 STA @LOCAL01
    case 0xC47FF3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:363 STA __BSS_START__,Y
    case 0xC47FF5: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:364 REP #PROC_FLAGS::ACCUM8
    case 0xC47FF8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:365 LDA SWIRL_REVERSED
    case 0xC47FFA: cpu.execute_instruction<0xAD>(0x00B09C, 3); return true;
    // src/unknown/C4/C4A7B0.asm:366 AND #$00FF
    case 0xC47FFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:366 AND #$00FF
    // Overlapping static entry reached from 0xC47FFD.
    case 0xC47FFF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:367 BEQL @UNKNOWN20
    case 0xC48000: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:367 BEQL @UNKNOWN20
    case 0xC48002: cpu.execute_instruction<0x4C>(0x007E99, 3); return true;
    // src/unknown/C4/C4A7B0.asm:368 LDX @LOCAL03
    case 0xC48005: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:369 SEP #PROC_FLAGS::ACCUM8
    case 0xC48007: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:370 LDA __BSS_START__,X
    case 0xC48009: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:371 STA @VIRTUAL00
    case 0xC4800C: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:372 LDA @LOCAL01
    case 0xC4800E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:373 CLC
    case 0xC48010: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:374 ADC @VIRTUAL00
    case 0xC48011: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:375 STA __BSS_START__,Y
    case 0xC48013: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:376 JMP @UNKNOWN20
    case 0xC48016: cpu.execute_instruction<0x4C>(0x007E99, 3); return true;
    // src/unknown/C4/C4A7B0.asm:378 LDX #.LOWORD(SWIRL_REPEAT_SPEED)
    case 0xC48019: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000BA, 2); else cpu.execute_instruction<0xA2>(0x00B0BA, 3); return true;
    // src/unknown/C4/C4A7B0.asm:378 LDX #.LOWORD(SWIRL_REPEAT_SPEED)
    // Overlapping static entry reached from 0xC48019.
    case 0xC4801B: cpu.execute_instruction<0xB0>(0x0000E2, 2); return true;
    // src/unknown/C4/C4A7B0.asm:379 SEP #PROC_FLAGS::ACCUM8
    case 0xC4801C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:379 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4801B.
    case 0xC4801D: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:380 LDA __BSS_START__,X
    case 0xC4801E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:380 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4801D.
    case 0xC48020: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:381 INC
    case 0xC48021: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:382 STA __BSS_START__,X
    case 0xC48022: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:383 REP #PROC_FLAGS::ACCUM8
    case 0xC48025: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:383 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC48062.
    case 0xC48026: cpu.execute_instruction<0x20>(0x00FF29, 3); return true;
    // src/unknown/C4/C4A7B0.asm:384 AND #$00FF
    case 0xC48027: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:384 AND #$00FF
    // Overlapping static entry reached from 0xC48027.
    case 0xC48029: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4A7B0.asm:385 CMP #1
    case 0xC4802A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4A7B0.asm:385 CMP #1
    // Overlapping static entry reached from 0xC4802A.
    case 0xC4802C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:386 BEQ @UNKNOWN28
    case 0xC4802D: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C4/C4A7B0.asm:387 CMP #2
    case 0xC4802F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4A7B0.asm:387 CMP #2
    // Overlapping static entry reached from 0xC4802F.
    case 0xC48031: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:388 BEQ @UNKNOWN29
    case 0xC48032: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:389 CMP #3
    case 0xC48034: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4A7B0.asm:389 CMP #3
    // Overlapping static entry reached from 0xC48034.
    case 0xC48036: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:390 BEQ @UNKNOWN30
    case 0xC48037: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C4/C4A7B0.asm:391 BRA @UNKNOWN31
    case 0xC48039: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C4/C4A7B0.asm:393 SEP #PROC_FLAGS::ACCUM8
    case 0xC4803B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:394 LDA #4
    case 0xC4803D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x009904, 3); return true;
    // src/unknown/C4/C4A7B0.asm:395 STA __BSS_START__,Y
    case 0xC4803F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:395 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC4803D.
    case 0xC48040: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:396 LDA #3
    case 0xC48042: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008D03, 3); return true;
    // src/unknown/C4/C4A7B0.asm:397 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    case 0xC48044: cpu.execute_instruction<0x8D>(0x00B098, 3); return true;
    // src/unknown/C4/C4A7B0.asm:397 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    // Overlapping static entry reached from 0xC48042.
    case 0xC48045: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:397 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    // Overlapping static entry reached from 0xC48045.
    case 0xC48046: cpu.execute_instruction<0xB0>(0x000080, 2); return true;
    // src/unknown/C4/C4A7B0.asm:398 BRA @UNKNOWN31
    case 0xC48047: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:398 BRA @UNKNOWN31
    // Overlapping static entry reached from 0xC48046.
    case 0xC48048: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:400 SEP #PROC_FLAGS::ACCUM8
    case 0xC48049: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:401 LDA #6
    case 0xC4804B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009906, 3); return true;
    // src/unknown/C4/C4A7B0.asm:402 STA __BSS_START__,Y
    case 0xC4804D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:402 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC4804B.
    case 0xC4804E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:403 LDA #2
    case 0xC48050: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008D02, 3); return true;
    // src/unknown/C4/C4A7B0.asm:404 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    case 0xC48052: cpu.execute_instruction<0x8D>(0x00B098, 3); return true;
    // src/unknown/C4/C4A7B0.asm:404 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    // Overlapping static entry reached from 0xC48050.
    case 0xC48053: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:404 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    // Overlapping static entry reached from 0xC48053.
    case 0xC48054: cpu.execute_instruction<0xB0>(0x000080, 2); return true;
    // src/unknown/C4/C4A7B0.asm:405 BRA @UNKNOWN31
    case 0xC48055: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C4/C4A7B0.asm:405 BRA @UNKNOWN31
    // Overlapping static entry reached from 0xC48054.
    case 0xC48056: cpu.execute_instruction<0x0C>(0x0020E2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:407 SEP #PROC_FLAGS::ACCUM8
    case 0xC48057: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:408 LDA #12
    case 0xC48059: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00990C, 3); return true;
    // src/unknown/C4/C4A7B0.asm:409 STA __BSS_START__,Y
    case 0xC4805B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:409 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC48059.
    case 0xC4805C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:410 LDA #1
    case 0xC4805E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C4A7B0.asm:411 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    case 0xC48060: cpu.execute_instruction<0x8D>(0x00B098, 3); return true;
    // src/unknown/C4/C4A7B0.asm:411 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    // Overlapping static entry reached from 0xC4805E.
    case 0xC48061: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:411 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    // Overlapping static entry reached from 0xC48061.
    case 0xC48062: cpu.execute_instruction<0xB0>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A7B0.asm:413 REP #PROC_FLAGS::ACCUM8
    case 0xC48063: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:413 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC48062.
    case 0xC48064: cpu.execute_instruction<0x20>(0x00BBAD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:414 LDA SWIRL_REPEATS_UNTIL_SPEED_UP
    case 0xC48065: cpu.execute_instruction<0xAD>(0x00B0BB, 3); return true;
    // src/unknown/C4/C4A7B0.asm:414 LDA SWIRL_REPEATS_UNTIL_SPEED_UP
    // Overlapping static entry reached from 0xC48064.
    case 0xC48067: cpu.execute_instruction<0xB0>(0x000029, 2); return true;
    // src/unknown/C4/C4A7B0.asm:415 AND #$00FF
    case 0xC48068: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:415 AND #$00FF
    // Overlapping static entry reached from 0xC48067.
    case 0xC48069: cpu.execute_instruction<0xFF>(0x03F000, 4); return true;
    // src/unknown/C4/C4A7B0.asm:415 AND #$00FF
    // Overlapping static entry reached from 0xC48068.
    case 0xC4806A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:416 BNEL @UNKNOWN20
    case 0xC4806B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:416 BNEL @UNKNOWN20
    case 0xC4806D: cpu.execute_instruction<0x4C>(0x007E99, 3); return true;
    // src/unknown/C4/C4A7B0.asm:418 LDX #.LOWORD(SWIRL_LENGTH_PADDING)
    case 0xC48070: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00009F, 2); else cpu.execute_instruction<0xA2>(0x00B09F, 3); return true;
    // src/unknown/C4/C4A7B0.asm:418 LDX #.LOWORD(SWIRL_LENGTH_PADDING)
    // Overlapping static entry reached from 0xC48070.
    case 0xC48072: cpu.execute_instruction<0xB0>(0x0000BD, 2); return true;
    // src/unknown/C4/C4A7B0.asm:419 LDA __BSS_START__,X
    case 0xC48073: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:419 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC48072.
    case 0xC48074: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:420 AND #$00FF
    case 0xC48076: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:420 AND #$00FF
    // Overlapping static entry reached from 0xC48076.
    case 0xC48078: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:421 BEQ @UNKNOWN33
    case 0xC48079: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C4/C4A7B0.asm:422 SEP #PROC_FLAGS::ACCUM8
    case 0xC4807B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:423 LDA #1
    case 0xC4807D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C4A7B0.asm:424 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC4807F: cpu.execute_instruction<0x8D>(0x00B097, 3); return true;
    // src/unknown/C4/C4A7B0.asm:424 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    // Overlapping static entry reached from 0xC4807D.
    case 0xC48080: cpu.execute_instruction<0x97>(0x0000B0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:425 LDA __BSS_START__,X
    case 0xC48082: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:426 DEC
    case 0xC48085: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:427 STA __BSS_START__,X
    case 0xC48086: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:428 BRA @UNKNOWN34
    case 0xC48089: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C4/C4A7B0.asm:431 LDA SWIRL_AUTO_RESTORE
    case 0xC4808B: cpu.execute_instruction<0xAD>(0x00B0A0, 3); return true;
    // src/unknown/C4/C4A7B0.asm:432 AND #$00FF
    case 0xC4808E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:432 AND #$00FF
    // Overlapping static entry reached from 0xC4808E.
    case 0xC48090: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:433 BEQ @UNKNOWN34
    case 0xC48091: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/unknown/C4/C4A7B0.asm:433 BEQ @UNKNOWN34
    // Overlapping static entry reached from 0xC48067.
    case 0xC48092: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000AD, 2); else cpu.execute_instruction<0x29>(0x009EAD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:434 LDA SWIRL_HDMA_CHANNEL_OFFSET
    case 0xC48093: cpu.execute_instruction<0xAD>(0x00B09E, 3); return true;
    // src/unknown/C4/C4A7B0.asm:434 LDA SWIRL_HDMA_CHANNEL_OFFSET
    // Overlapping static entry reached from 0xC48092.
    case 0xC48094: cpu.execute_instruction<0x9E>(0x0029B0, 3); return true;
    // src/unknown/C4/C4A7B0.asm:434 LDA SWIRL_HDMA_CHANNEL_OFFSET
    // Overlapping static entry reached from 0xC48092.
    case 0xC48095: cpu.execute_instruction<0xB0>(0x000029, 2); return true;
    // src/unknown/C4/C4A7B0.asm:435 AND #$00FF
    case 0xC48096: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:435 AND #$00FF
    // Overlapping static entry reached from 0xC48095.
    case 0xC48097: cpu.execute_instruction<0xFF>(0x1A1A00, 4); return true;
    // src/unknown/C4/C4A7B0.asm:435 AND #$00FF
    // Overlapping static entry reached from 0xC48096.
    case 0xC48098: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:436 INC
    case 0xC48099: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:437 INC
    case 0xC4809A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:438 INC
    case 0xC4809B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:439 JSL UNKNOWN_C0AE34
    case 0xC4809C: cpu.execute_instruction<0x22>(0xC0AE13, 4); return true;
    // src/unknown/C4/C4A7B0.asm:440 LDX #0
    case 0xC480A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:440 LDX #0
    // Overlapping static entry reached from 0xC480A0.
    case 0xC480A2: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:441 TXA
    case 0xC480A3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:442 JSL SET_WINDOW_MASK
    case 0xC480A4: cpu.execute_instruction<0x22>(0xC0B026, 4); return true;
    // src/unknown/C4/C4A7B0.asm:443 JSL UNKNOWN_C2DE96
    case 0xC480A8: cpu.execute_instruction<0x22>(0xC2DE0B, 4); return true;
    // src/unknown/C4/C4A7B0.asm:444 LDY #0
    case 0xC480AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:444 LDY #0
    // Overlapping static entry reached from 0xC480AC.
    case 0xC480AE: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C4/C4A7B0.asm:445 TYX
    case 0xC480AF: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:446 TYA
    case 0xC480B0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:447 JSL SET_COLDATA
    case 0xC480B1: cpu.execute_instruction<0x22>(0xC0AFF9, 4); return true;
    // src/unknown/C4/C4A7B0.asm:448 LDA CURRENT_LAYER_CONFIG
    case 0xC480B5: cpu.execute_instruction<0xAD>(0x00AF5F, 3); return true;
    // src/unknown/C4/C4A7B0.asm:449 JSL UNKNOWN_C0AFCD
    case 0xC480B8: cpu.execute_instruction<0x22>(0xC0AFAC, 4); return true;
    // src/unknown/C4/C4A7B0.asm:451 REP #PROC_FLAGS::ACCUM8
    case 0xC480BC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4A7B0.asm:452 END_C_FUNCTION
    case 0xC480BE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4A7B0.asm:452 END_C_FUNCTION
    case 0xC480BF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B1B8.asm (unresolved).
bool execute_unresolved_c4_c4b1b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B1B8.asm:4 BEGIN_C_FUNCTION
    case 0xC48625: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    case 0xC48627: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    case 0xC48628: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    case 0xC48629: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    case 0xC4862A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC4862A.
    case 0xC4862C: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    case 0xC4862D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    case 0xC4862E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:14 STY @LOCAL02
    case 0xC4862F: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C4B1B8.asm:14 STY @LOCAL02
    // Overlapping static entry reached from 0xC4862C.
    case 0xC48630: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // src/unknown/C4/C4B1B8.asm:15 STA @VIRTUAL04
    case 0xC48631: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4B1B8.asm:15 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC48630.
    case 0xC48632: cpu.execute_instruction<0x04>(0x0000C0, 2); return true;
    // src/unknown/C4/C4B1B8.asm:16 CPY #$00FF
    case 0xC48633: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0000FF, 3); return true;
    // src/unknown/C4/C4B1B8.asm:16 CPY #$00FF
    // Overlapping static entry reached from 0xC48632.
    case 0xC48634: cpu.execute_instruction<0xFF>(0x05D000, 4); return true;
    // src/unknown/C4/C4B1B8.asm:16 CPY #$00FF
    // Overlapping static entry reached from 0xC48633.
    case 0xC48635: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4B1B8.asm:17 BNE @UNKNOWN0
    case 0xC48636: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4B1B8.asm:18 LDA @VIRTUAL04
    case 0xC48638: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B1B8.asm:19 JMP @UNKNOWN1
    case 0xC4863A: cpu.execute_instruction<0x4C>(0x0086D6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC4863D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x006541, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4863D.
    case 0xC4863F: cpu.execute_instruction<0x65>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC48640: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4863F.
    case 0xC48641: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC48642: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC48642.
    case 0xC48644: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC48645: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4B1B8.asm:22 TXA
    case 0xC48647: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:23 ASL
    case 0xC48648: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:24 ASL
    case 0xC48649: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:25 CLC
    case 0xC4864A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:26 ADC @VIRTUAL0A
    case 0xC4864B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4B1B8.asm:27 STA @VIRTUAL0A
    case 0xC4864D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4864F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4864F.
    case 0xC48651: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC48652: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC48654: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC48655: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC48657: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC48659: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4B1B8.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC4865B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B1B8.asm:30 LDY #sprite_grouping::width
    case 0xC4865D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4B1B8.asm:30 LDY #sprite_grouping::width
    // Overlapping static entry reached from 0xC4865D.
    case 0xC4865F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4B1B8.asm:31 LDA [@VIRTUAL06],Y
    case 0xC48660: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC48662: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B1B8.asm:33 AND #$00FF
    case 0xC48664: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4B1B8.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC48664.
    case 0xC48666: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4B1B8.asm:34 ASL
    case 0xC48667: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:35 STA @VIRTUAL02
    case 0xC48668: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B1B8.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC4866A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B1B8.asm:37 LDY #sprite_grouping::spritebank
    case 0xC4866C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4B1B8.asm:37 LDY #sprite_grouping::spritebank
    // Overlapping static entry reached from 0xC4866C.
    case 0xC4866E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4B1B8.asm:38 LDA [@VIRTUAL06],Y
    case 0xC4866F: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC48671: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B1B8.asm:40 AND #$00FF
    case 0xC48673: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4B1B8.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC48673.
    case 0xC48675: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B1B8.asm:41 STA @LOCAL01+2
    case 0xC48676: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B1B8.asm:42 LDY @LOCAL02
    case 0xC48678: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4B1B8.asm:43 TYA
    case 0xC4867A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:44 ASL
    case 0xC4867B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:45 CLC
    case 0xC4867C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:46 ADC #sprite_grouping::spritepointerarray
    case 0xC4867D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/unknown/C4/C4B1B8.asm:46 ADC #sprite_grouping::spritepointerarray
    // Overlapping static entry reached from 0xC4867D.
    case 0xC4867F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4B1B8.asm:47 CLC
    case 0xC48680: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:48 ADC @VIRTUAL06
    case 0xC48681: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:49 STA @VIRTUAL06
    case 0xC48683: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:50 LDA [@VIRTUAL06]
    case 0xC48685: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:51 AND #$FFFE
    case 0xC48687: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C4/C4B1B8.asm:51 AND #$FFFE
    // Overlapping static entry reached from 0xC48687.
    case 0xC48689: cpu.execute_instruction<0xFF>(0x851285, 4); return true;
    // src/unknown/C4/C4B1B8.asm:52 STA @LOCAL01
    case 0xC4868A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B1B8.asm:53 STA @VIRTUAL06
    case 0xC4868C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:53 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC48689.
    case 0xC4868D: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // src/unknown/C4/C4B1B8.asm:54 LDA @LOCAL01+2
    case 0xC4868E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B1B8.asm:54 LDA @LOCAL01+2
    // Overlapping static entry reached from 0xC4868D.
    case 0xC4868F: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C4/C4B1B8.asm:55 STA @VIRTUAL06+2
    case 0xC48690: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B1B8.asm:55 STA @VIRTUAL06+2
    // Overlapping static entry reached from 0xC4868F.
    case 0xC48691: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B1B8.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48692: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B1B8.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48694: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B1B8.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48696: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B1B8.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48698: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4B1B8.asm:57 LDY @VIRTUAL04
    case 0xC4869A: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C4B1B8.asm:58 LDX @VIRTUAL02
    case 0xC4869C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B1B8.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC4869E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B1B8.asm:60 LDA #0
    case 0xC486A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C4B1B8.asm:61 JSL PREPARE_VRAM_COPY
    case 0xC486A2: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C4B1B8.asm:61 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC486A0.
    case 0xC486A3: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C4B1B8.asm:61 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC486A3.
    case 0xC486A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0002A5, 3); return true;
    // src/unknown/C4/C4B1B8.asm:63 LDA @VIRTUAL02
    case 0xC486A6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B1B8.asm:63 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC486A5.
    case 0xC486A7: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C4/C4B1B8.asm:64 CLC
    case 0xC486A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:65 ADC @LOCAL01
    case 0xC486A9: cpu.execute_instruction<0x65>(0x000012, 2); return true;
    // src/unknown/C4/C4B1B8.asm:66 STA @LOCAL01
    case 0xC486AB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B1B8.asm:67 STA @VIRTUAL06
    case 0xC486AD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:68 LDA @LOCAL01+2
    case 0xC486AF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B1B8.asm:69 STA @VIRTUAL06+2
    case 0xC486B1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B1B8.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC486B3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B1B8.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC486B5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B1B8.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC486B7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B1B8.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC486B9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4B1B8.asm:71 LDA @VIRTUAL04
    case 0xC486BB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B1B8.asm:72 CLC
    case 0xC486BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:73 ADC #256
    case 0xC486BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C4/C4B1B8.asm:73 ADC #256
    // Overlapping static entry reached from 0xC486BE.
    case 0xC486C0: cpu.execute_instruction<0x01>(0x0000A8, 2); return true;
    // src/unknown/C4/C4B1B8.asm:74 TAY
    case 0xC486C1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:75 LDX @VIRTUAL02
    case 0xC486C2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B1B8.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC486C4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B1B8.asm:77 LDA #0
    case 0xC486C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C4B1B8.asm:78 JSL PREPARE_VRAM_COPY
    case 0xC486C8: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C4B1B8.asm:78 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC486C6.
    case 0xC486C9: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C4B1B8.asm:78 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC486C9.
    case 0xC486CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0002A5, 3); return true;
    // src/unknown/C4/C4B1B8.asm:79 LDA @VIRTUAL02
    case 0xC486CC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B1B8.asm:79 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC486CB.
    case 0xC486CD: cpu.execute_instruction<0x02>(0x00004A, 2); return true;
    // src/unknown/C4/C4B1B8.asm:80 LSR
    case 0xC486CE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:81 STA @VIRTUAL02
    case 0xC486CF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B1B8.asm:82 LDA @VIRTUAL04
    case 0xC486D1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B1B8.asm:83 CLC
    case 0xC486D3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:84 ADC @VIRTUAL02
    case 0xC486D4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B1B8.asm:86 END_C_FUNCTION
    case 0xC486D6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4B1B8.asm:86 END_C_FUNCTION
    case 0xC486D7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B329.asm (unresolved).
bool execute_unresolved_c4_c4b329_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B329.asm:3 BEGIN_C_FUNCTION
    case 0xC48796: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    case 0xC48798: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    case 0xC48799: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    case 0xC4879A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    case 0xC4879B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4879B.
    case 0xC4879D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    case 0xC4879E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    case 0xC4879F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:9 STX @LOCAL00
    case 0xC487A0: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4B329.asm:9 STX @LOCAL00
    // Overlapping static entry reached from 0xC4879D.
    case 0xC487A1: cpu.execute_instruction<0x0E>(0x0001C9, 3); return true;
    // src/unknown/C4/C4B329.asm:10 CMP #1
    case 0xC487A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4B329.asm:10 CMP #1
    // Overlapping static entry reached from 0xC487A2.
    case 0xC487A4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4B329.asm:11 BEQ @UNKNOWN1
    case 0xC487A5: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C4/C4B329.asm:12 CMP #4
    case 0xC487A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4B329.asm:12 CMP #4
    // Overlapping static entry reached from 0xC487A7.
    case 0xC487A9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4B329.asm:13 BEQ @UNKNOWN2
    case 0xC487AA: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/unknown/C4/C4B329.asm:14 CMP #2
    case 0xC487AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4B329.asm:14 CMP #2
    // Overlapping static entry reached from 0xC487AC.
    case 0xC487AE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4B329.asm:15 BEQ @UNKNOWN3
    case 0xC487AF: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/unknown/C4/C4B329.asm:16 CMP #5
    case 0xC487B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C4/C4B329.asm:16 CMP #5
    // Overlapping static entry reached from 0xC487B1.
    case 0xC487B3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4B329.asm:17 BEQL @UNKNOWN6
    case 0xC487B4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4B329.asm:17 BEQL @UNKNOWN6
    case 0xC487B6: cpu.execute_instruction<0x4C>(0x00883B, 3); return true;
    // src/unknown/C4/C4B329.asm:18 CMP #3
    case 0xC487B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4B329.asm:18 CMP #3
    // Overlapping static entry reached from 0xC487B9.
    case 0xC487BB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4B329.asm:19 BEQ @UNKNOWN4
    case 0xC487BC: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C4/C4B329.asm:20 CMP #6
    case 0xC487BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C4/C4B329.asm:20 CMP #6
    // Overlapping static entry reached from 0xC487BE.
    case 0xC487C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4B329.asm:21 BEQ @UNKNOWN5
    case 0xC487C1: cpu.execute_instruction<0xF0>(0x000060, 2); return true;
    // src/unknown/C4/C4B329.asm:22 BRA @UNKNOWN6
    case 0xC487C3: cpu.execute_instruction<0x80>(0x000076, 2); return true;
    // src/unknown/C4/C4B329.asm:24 TXA
    case 0xC487C5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:25 ASL
    case 0xC487C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:26 TAX
    case 0xC487C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:27 LDA f:UNKNOWN_C42A41,X
    case 0xC487C8: cpu.execute_instruction<0xBF>(0xC4297F, 4); return true;
    // src/unknown/C4/C4B329.asm:28 CLC
    case 0xC487CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:29 ADC #8
    case 0xC487CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C4/C4B329.asm:29 ADC #8
    // Overlapping static entry reached from 0xC487CD.
    case 0xC487CF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B329.asm:30 STA @VIRTUAL02
    case 0xC487D0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:31 LDA ACTIVE_MANPU_Y
    case 0xC487D2: cpu.execute_instruction<0xAD>(0x00B5CF, 3); return true;
    // src/unknown/C4/C4B329.asm:32 SEC
    case 0xC487D5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:33 SBC @VIRTUAL02
    case 0xC487D6: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:34 STA ACTIVE_MANPU_Y
    case 0xC487D8: cpu.execute_instruction<0x8D>(0x00B5CF, 3); return true;
    // src/unknown/C4/C4B329.asm:36 LDX @LOCAL00
    case 0xC487DB: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4B329.asm:37 TXA
    case 0xC487DD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:38 ASL
    case 0xC487DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:39 TAX
    case 0xC487DF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:40 LDA f:UNKNOWN_C42A1F,X
    case 0xC487E0: cpu.execute_instruction<0xBF>(0xC4295D, 4); return true;
    // src/unknown/C4/C4B329.asm:41 SEC
    case 0xC487E4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:42 SBC #8
    case 0xC487E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C4B329.asm:42 SBC #8
    // Overlapping static entry reached from 0xC487E5.
    case 0xC487E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B329.asm:43 STA @VIRTUAL02
    case 0xC487E8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:44 LDA ACTIVE_MANPU_X
    case 0xC487EA: cpu.execute_instruction<0xAD>(0x00B5CD, 3); return true;
    // src/unknown/C4/C4B329.asm:45 SEC
    case 0xC487ED: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:46 SBC @VIRTUAL02
    case 0xC487EE: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:47 STA ACTIVE_MANPU_X
    case 0xC487F0: cpu.execute_instruction<0x8D>(0x00B5CD, 3); return true;
    // src/unknown/C4/C4B329.asm:48 BRA @UNKNOWN6
    case 0xC487F3: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C4/C4B329.asm:50 TXA
    case 0xC487F5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:51 ASL
    case 0xC487F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:52 TAX
    case 0xC487F7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:53 LDA f:UNKNOWN_C42A41,X
    case 0xC487F8: cpu.execute_instruction<0xBF>(0xC4297F, 4); return true;
    // src/unknown/C4/C4B329.asm:54 SEC
    case 0xC487FC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:55 SBC #8
    case 0xC487FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C4B329.asm:55 SBC #8
    // Overlapping static entry reached from 0xC487FD.
    case 0xC487FF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B329.asm:56 STA @VIRTUAL02
    case 0xC48800: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:57 LDA ACTIVE_MANPU_Y
    case 0xC48802: cpu.execute_instruction<0xAD>(0x00B5CF, 3); return true;
    // src/unknown/C4/C4B329.asm:58 SEC
    case 0xC48805: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:59 SBC @VIRTUAL02
    case 0xC48806: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:60 STA ACTIVE_MANPU_Y
    case 0xC48808: cpu.execute_instruction<0x8D>(0x00B5CF, 3); return true;
    // src/unknown/C4/C4B329.asm:61 BRA @UNKNOWN6
    case 0xC4880B: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C4/C4B329.asm:63 TXA
    case 0xC4880D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:64 ASL
    case 0xC4880E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:65 TAX
    case 0xC4880F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:66 LDA f:UNKNOWN_C42A41,X
    case 0xC48810: cpu.execute_instruction<0xBF>(0xC4297F, 4); return true;
    // src/unknown/C4/C4B329.asm:67 CLC
    case 0xC48814: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:68 ADC #8
    case 0xC48815: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C4/C4B329.asm:68 ADC #8
    // Overlapping static entry reached from 0xC48815.
    case 0xC48817: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B329.asm:69 STA @VIRTUAL02
    case 0xC48818: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:70 LDA ACTIVE_MANPU_Y
    case 0xC4881A: cpu.execute_instruction<0xAD>(0x00B5CF, 3); return true;
    // src/unknown/C4/C4B329.asm:71 SEC
    case 0xC4881D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:72 SBC @VIRTUAL02
    case 0xC4881E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:73 STA ACTIVE_MANPU_Y
    case 0xC48820: cpu.execute_instruction<0x8D>(0x00B5CF, 3); return true;
    // src/unknown/C4/C4B329.asm:75 LDX @LOCAL00
    case 0xC48823: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4B329.asm:76 TXA
    case 0xC48825: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:77 ASL
    case 0xC48826: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:78 TAX
    case 0xC48827: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:79 LDA f:UNKNOWN_C42A1F,X
    case 0xC48828: cpu.execute_instruction<0xBF>(0xC4295D, 4); return true;
    // src/unknown/C4/C4B329.asm:80 CLC
    case 0xC4882C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:81 ADC #8
    case 0xC4882D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C4/C4B329.asm:81 ADC #8
    // Overlapping static entry reached from 0xC4882D.
    case 0xC4882F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B329.asm:82 STA @VIRTUAL02
    case 0xC48830: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:83 LDA ACTIVE_MANPU_X
    case 0xC48832: cpu.execute_instruction<0xAD>(0x00B5CD, 3); return true;
    // src/unknown/C4/C4B329.asm:84 SEC
    case 0xC48835: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:85 SBC @VIRTUAL02
    case 0xC48836: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:86 STA ACTIVE_MANPU_X
    case 0xC48838: cpu.execute_instruction<0x8D>(0x00B5CD, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B329.asm:88 END_C_FUNCTION
    case 0xC4883B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4B329.asm:88 END_C_FUNCTION
    case 0xC4883C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B4BE.asm (unresolved).
bool execute_unresolved_c4_c4b4be_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B4BE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4892B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    case 0xC4892D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    case 0xC4892E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    case 0xC4892F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    case 0xC48930: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC48930.
    case 0xC48932: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    case 0xC48933: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    case 0xC48934: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:8 CMP #.LOWORD(-1)
    case 0xC48935: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B4BE.asm:8 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC48932.
    case 0xC48936: cpu.execute_instruction<0xFF>(0x2FF0FF, 4); return true;
    // src/unknown/C4/C4B4BE.asm:8 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC48935.
    case 0xC48937: cpu.execute_instruction<0xFF>(0x092FF0, 4); return true;
    // src/unknown/C4/C4B4BE.asm:9 BEQ @UNKNOWN3
    case 0xC48938: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/unknown/C4/C4B4BE.asm:10 ORA #$C000
    case 0xC4893A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C4B4BE.asm:10 ORA #$C000
    // Overlapping static entry reached from 0xC48937.
    case 0xC4893B: cpu.execute_instruction<0x00>(0x0000C0, 2); return true;
    // src/unknown/C4/C4B4BE.asm:10 ORA #$C000
    // Overlapping static entry reached from 0xC4893A.
    case 0xC4893C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000285, 3); return true;
    // src/unknown/C4/C4B4BE.asm:11 STA @VIRTUAL02
    case 0xC4893D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B4BE.asm:11 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4893C.
    case 0xC4893E: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/C4/C4B4BE.asm:12 LDY #0
    case 0xC4893F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4B4BE.asm:12 LDY #0
    // Overlapping static entry reached from 0xC4893F.
    case 0xC48941: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4B4BE.asm:13 STY @LOCAL00
    case 0xC48942: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4B4BE.asm:14 BRA @UNKNOWN2
    case 0xC48944: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C4/C4B4BE.asm:16 TYA
    case 0xC48946: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:17 ASL
    case 0xC48947: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:18 CLC
    case 0xC48948: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:19 ADC #.LOWORD(ENTITY_DRAW_PRIORITY)
    case 0xC48949: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000034, 2); else cpu.execute_instruction<0x69>(0x001034, 3); return true;
    // src/unknown/C4/C4B4BE.asm:19 ADC #.LOWORD(ENTITY_DRAW_PRIORITY)
    // Overlapping static entry reached from 0xC48949.
    case 0xC4894B: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C4B4BE.asm:20 TAX
    case 0xC4894C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:21 LDA __BSS_START__,X
    case 0xC4894D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4B4BE.asm:22 CMP @VIRTUAL02
    case 0xC48950: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4B4BE.asm:23 BNE @UNKNOWN1
    case 0xC48952: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C4/C4B4BE.asm:24 LDA #0
    case 0xC48954: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B4BE.asm:24 LDA #0
    // Overlapping static entry reached from 0xC48954.
    case 0xC48956: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4B4BE.asm:25 STA __BSS_START__,X
    case 0xC48957: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4B4BE.asm:26 TYA
    case 0xC4895A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:27 JSL UNKNOWN_C02140
    case 0xC4895B: cpu.execute_instruction<0x22>(0xC0214E, 4); return true;
    // src/unknown/C4/C4B4BE.asm:29 LDY @LOCAL00
    case 0xC4895F: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4B4BE.asm:30 INY
    case 0xC48961: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:31 STY @LOCAL00
    case 0xC48962: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4B4BE.asm:33 CPY #MAX_ENTITIES
    case 0xC48964: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001E, 2); else cpu.execute_instruction<0xC0>(0x00001E, 3); return true;
    // src/unknown/C4/C4B4BE.asm:33 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC48964.
    case 0xC48966: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4B4BE.asm:34 BCC @UNKNOWN0
    case 0xC48967: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B4BE.asm:36 END_C_FUNCTION
    case 0xC48969: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B4BE.asm:36 END_C_FUNCTION
    case 0xC4896A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B4FE.asm (unresolved).
bool execute_unresolved_c4_c4b4fe_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B4FE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4896B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    case 0xC4896D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    case 0xC4896E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    case 0xC4896F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    case 0xC48970: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC48970.
    case 0xC48972: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    case 0xC48973: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    case 0xC48974: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B4FE.asm:8 TXY
    case 0xC48975: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4B4FE.asm:9 STY @LOCAL00
    case 0xC48976: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4B4FE.asm:10 TAX
    case 0xC48978: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B4FE.asm:11 JSL UNKNOWN_C4608C
    case 0xC48979: cpu.execute_instruction<0x22>(0xC43DDA, 4); return true;
    // src/unknown/C4/C4B4FE.asm:12 LDY @LOCAL00
    case 0xC4897D: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4B4FE.asm:13 TYX
    case 0xC4897F: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4B4FE.asm:14 JSL SPAWN_FLOATING_SPRITE
    case 0xC48980: cpu.execute_instruction<0x22>(0xC4883D, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B4FE.asm:15 END_C_FUNCTION
    case 0xC48984: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B4FE.asm:15 END_C_FUNCTION
    case 0xC48985: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B519.asm (unresolved).
bool execute_unresolved_c4_c4b519_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B519.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48986: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B519.asm:6 JSL UNKNOWN_C4608C
    case 0xC48988: cpu.execute_instruction<0x22>(0xC43DDA, 4); return true;
    // src/unknown/C4/C4B519.asm:7 JSL UNKNOWN_C4B4BE
    case 0xC4898C: cpu.execute_instruction<0x22>(0xC4892B, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B519.asm:8 END_C_FUNCTION
    case 0xC48990: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B524.asm (unresolved).
bool execute_unresolved_c4_c4b524_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B524.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48991: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    case 0xC48993: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    case 0xC48994: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    case 0xC48995: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    case 0xC48996: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC48996.
    case 0xC48998: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    case 0xC48999: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    case 0xC4899A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B524.asm:8 TXY
    case 0xC4899B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4B524.asm:9 STY @LOCAL00
    case 0xC4899C: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4B524.asm:10 TAX
    case 0xC4899E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B524.asm:11 JSL UNKNOWN_C4605A
    case 0xC4899F: cpu.execute_instruction<0x22>(0xC43DA8, 4); return true;
    // src/unknown/C4/C4B524.asm:12 LDY @LOCAL00
    case 0xC489A3: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4B524.asm:13 TYX
    case 0xC489A5: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4B524.asm:14 JSL SPAWN_FLOATING_SPRITE
    case 0xC489A6: cpu.execute_instruction<0x22>(0xC4883D, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B524.asm:15 END_C_FUNCTION
    case 0xC489AA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B524.asm:15 END_C_FUNCTION
    case 0xC489AB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B53F.asm (unresolved).
bool execute_unresolved_c4_c4b53f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B53F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC489AC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B53F.asm:6 JSL UNKNOWN_C4605A
    case 0xC489AE: cpu.execute_instruction<0x22>(0xC43DA8, 4); return true;
    // src/unknown/C4/C4B53F.asm:7 JSL UNKNOWN_C4B4BE
    case 0xC489B2: cpu.execute_instruction<0x22>(0xC4892B, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B53F.asm:8 END_C_FUNCTION
    case 0xC489B6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B54A.asm (unresolved).
bool execute_unresolved_c4_c4b54a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B54A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC489B7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    case 0xC489B9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    case 0xC489BA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    case 0xC489BB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    case 0xC489BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC489BC.
    case 0xC489BE: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    case 0xC489BF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    case 0xC489C0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B54A.asm:9 TXY
    case 0xC489C1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4B54A.asm:10 STY @LOCAL00
    case 0xC489C2: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4B54A.asm:11 TAX
    case 0xC489C4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B54A.asm:12 JSL UNKNOWN_C46028
    case 0xC489C5: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/unknown/C4/C4B54A.asm:13 LDY @LOCAL00
    case 0xC489C9: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4B54A.asm:14 TYX
    case 0xC489CB: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4B54A.asm:15 JSL SPAWN_FLOATING_SPRITE
    case 0xC489CC: cpu.execute_instruction<0x22>(0xC4883D, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B54A.asm:16 END_C_FUNCTION
    case 0xC489D0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B54A.asm:16 END_C_FUNCTION
    case 0xC489D1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B565.asm (unresolved).
bool execute_unresolved_c4_c4b565_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B565.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC489D2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B565.asm:6 JSL UNKNOWN_C46028
    case 0xC489D4: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/unknown/C4/C4B565.asm:7 JSL UNKNOWN_C4B4BE
    case 0xC489D8: cpu.execute_instruction<0x22>(0xC4892B, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B565.asm:8 END_C_FUNCTION
    case 0xC489DC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B570.asm (unresolved).
bool execute_unresolved_c4_c4b570_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B570.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC489DD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B570.asm:5 LDX #1
    case 0xC489DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C4B570.asm:5 LDX #1
    // Overlapping static entry reached from 0xC489DF.
    case 0xC489E1: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B570.asm:6 LDA #24
    case 0xC489E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C4B570.asm:6 LDA #24
    // Overlapping static entry reached from 0xC489E2.
    case 0xC489E4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4B570.asm:7 JSL SPAWN_FLOATING_SPRITE
    case 0xC489E5: cpu.execute_instruction<0x22>(0xC4883D, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B570.asm:8 END_C_FUNCTION
    case 0xC489E9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B57D.asm (unresolved).
bool execute_unresolved_c4_c4b57d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B57D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC489EA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B57D.asm:5 LDA #24
    case 0xC489EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C4B57D.asm:5 LDA #24
    // Overlapping static entry reached from 0xC489EC.
    case 0xC489EE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4B57D.asm:6 JSL UNKNOWN_C4B4BE
    case 0xC489EF: cpu.execute_instruction<0x22>(0xC4892B, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B57D.asm:7 END_C_FUNCTION
    case 0xC489F3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B587.asm (unresolved).
bool execute_unresolved_c4_c4b587_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B587.asm:3 BEGIN_C_FUNCTION
    case 0xC489F4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B587.asm:7 LDX PATH_HEAP_CURRENT
    case 0xC489F6: cpu.execute_instruction<0xAE>(0x00B60F, 3); return true;
    // src/unknown/C4/C4B587.asm:8 CLC
    case 0xC489F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B587.asm:9 ADC PATH_HEAP_CURRENT
    case 0xC489FA: cpu.execute_instruction<0x6D>(0x00B60F, 3); return true;
    // src/unknown/C4/C4B587.asm:10 STA PATH_HEAP_CURRENT
    case 0xC489FD: cpu.execute_instruction<0x8D>(0x00B60F, 3); return true;
    // src/unknown/C4/C4B587.asm:11 TXA
    case 0xC48A00: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4B587.asm:12 END_C_FUNCTION
    case 0xC48A01: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B595.asm (unresolved).
bool execute_unresolved_c4_c4b595_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B595.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48A02: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B595.asm:6 LDA PATH_HEAP_CURRENT
    case 0xC48A04: cpu.execute_instruction<0xAD>(0x00B60F, 3); return true;
    // src/unknown/C4/C4B595.asm:7 SEC
    case 0xC48A07: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B595.asm:8 SBC PATH_HEAP_START
    case 0xC48A08: cpu.execute_instruction<0xED>(0x00B60D, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B595.asm:9 END_C_FUNCTION
    case 0xC48A0B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B59F.asm (unresolved).
bool execute_unresolved_c4_c4b59f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B59F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48A0C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    case 0xC48A0E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    case 0xC48A0F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    case 0xC48A10: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    case 0xC48A11: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CC, 2); else cpu.execute_instruction<0x69>(0x00FFCC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    // Overlapping static entry reached from 0xC48A11.
    case 0xC48A13: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    case 0xC48A14: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    case 0xC48A15: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:38 STY @VIRTUAL04
    case 0xC48A16: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:38 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC48A13.
    case 0xC48A17: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/unknown/C4/C4B59F.asm:39 STX @VIRTUAL02
    case 0xC48A18: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:39 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC48A17.
    case 0xC48A19: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C4B59F.asm:40 STA @LOCAL12
    case 0xC48A1A: cpu.execute_instruction<0x85>(0x000032, 2); return true;
    // src/unknown/C4/C4B59F.asm:41 LDA @PARAM0B
    case 0xC48A1C: cpu.execute_instruction<0xA5>(0x000054, 2); return true;
    // src/unknown/C4/C4B59F.asm:42 STA @LOCAL11
    case 0xC48A1E: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/unknown/C4/C4B59F.asm:43 LDY @PARAM0A
    case 0xC48A20: cpu.execute_instruction<0xA4>(0x000052, 2); return true;
    // src/unknown/C4/C4B59F.asm:44 STY @LOCAL10
    case 0xC48A22: cpu.execute_instruction<0x84>(0x00002E, 2); return true;
    // src/unknown/C4/C4B59F.asm:45 LDA @PARAM09
    case 0xC48A24: cpu.execute_instruction<0xA5>(0x000050, 2); return true;
    // src/unknown/C4/C4B59F.asm:46 STA @LOCAL0F
    case 0xC48A26: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/unknown/C4/C4B59F.asm:47 LDA @PARAM08
    case 0xC48A28: cpu.execute_instruction<0xA5>(0x00004E, 2); return true;
    // src/unknown/C4/C4B59F.asm:48 STA @LOCAL0E
    case 0xC48A2A: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C4/C4B59F.asm:49 LDX @PARAM07
    case 0xC48A2C: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // src/unknown/C4/C4B59F.asm:50 STX @LOCAL0D
    case 0xC48A2E: cpu.execute_instruction<0x86>(0x000028, 2); return true;
    // src/unknown/C4/C4B59F.asm:51 LDA @PARAM06
    case 0xC48A30: cpu.execute_instruction<0xA5>(0x00004A, 2); return true;
    // src/unknown/C4/C4B59F.asm:52 STA @LOCAL0C
    case 0xC48A32: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C4/C4B59F.asm:53 LDA @PARAM05
    case 0xC48A34: cpu.execute_instruction<0xA5>(0x000048, 2); return true;
    // src/unknown/C4/C4B59F.asm:54 STA @LOCAL0B
    case 0xC48A36: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C4/C4B59F.asm:55 LDX @PARAM04
    case 0xC48A38: cpu.execute_instruction<0xA6>(0x000046, 2); return true;
    // src/unknown/C4/C4B59F.asm:56 STX @LOCAL0A
    case 0xC48A3A: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B59F.asm:57 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC48A3C: cpu.execute_instruction<0xA5>(0x000042, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B59F.asm:57 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC48A3E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B59F.asm:57 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC48A40: cpu.execute_instruction<0xA5>(0x000044, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B59F.asm:57 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC48A42: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B59F.asm:58 STZ @LOCAL09
    case 0xC48A44: cpu.execute_instruction<0x64>(0x000020, 2); return true;
    // src/unknown/C4/C4B59F.asm:59 LDA @VIRTUAL02
    case 0xC48A46: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:60 STA PATH_HEAP_START
    case 0xC48A48: cpu.execute_instruction<0x8D>(0x00B60D, 3); return true;
    // src/unknown/C4/C4B59F.asm:61 LDA @VIRTUAL02
    case 0xC48A4B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:62 STA PATH_HEAP_CURRENT
    case 0xC48A4D: cpu.execute_instruction<0x8D>(0x00B60F, 3); return true;
    // src/unknown/C4/C4B59F.asm:63 LDA @VIRTUAL02
    case 0xC48A50: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:64 CLC
    case 0xC48A52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:65 ADC @LOCAL12
    case 0xC48A53: cpu.execute_instruction<0x65>(0x000032, 2); return true;
    // src/unknown/C4/C4B59F.asm:66 STA PATH_HEAP_END
    case 0xC48A55: cpu.execute_instruction<0x8D>(0x00B611, 3); return true;
    // src/unknown/C4/C4B59F.asm:67 LDX @VIRTUAL04
    case 0xC48A58: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:68 LDA __BSS_START__,X
    case 0xC48A5A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4B59F.asm:69 STA PATH_MATRIX_ROWS
    case 0xC48A5D: cpu.execute_instruction<0x8D>(0x00B5D5, 3); return true;
    // src/unknown/C4/C4B59F.asm:70 LDX @VIRTUAL04
    case 0xC48A60: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:71 LDY __BSS_START__+2,X
    case 0xC48A62: cpu.execute_instruction<0xBC>(0x000002, 3); return true;
    // src/unknown/C4/C4B59F.asm:72 STY PATH_MATRIX_COLUMNS
    case 0xC48A65: cpu.execute_instruction<0x8C>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B59F.asm:73 LDX @LOCAL0A
    case 0xC48A68: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C4/C4B59F.asm:74 STX PATH_MATRIX_BORDER
    case 0xC48A6A: cpu.execute_instruction<0x8E>(0x00B5D9, 3); return true;
    // src/unknown/C4/C4B59F.asm:75 JSL MULT16
    case 0xC48A6D: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4B59F.asm:76 STA PATH_MATRIX_SIZE
    case 0xC48A71: cpu.execute_instruction<0x8D>(0x00B5DB, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B59F.asm:77 MOVE_INT @VIRTUAL06, PATH_MATRIX_BUFFER
    case 0xC48A74: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B59F.asm:77 MOVE_INT @VIRTUAL06, PATH_MATRIX_BUFFER
    case 0xC48A76: cpu.execute_instruction<0x8D>(0x00B5D1, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B59F.asm:77 MOVE_INT @VIRTUAL06, PATH_MATRIX_BUFFER
    case 0xC48A79: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B59F.asm:77 MOVE_INT @VIRTUAL06, PATH_MATRIX_BUFFER
    case 0xC48A7B: cpu.execute_instruction<0x8D>(0x00B5D3, 3); return true;
    // src/unknown/C4/C4B59F.asm:78 LDA @LOCAL11
    case 0xC48A7E: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/unknown/C4/C4B59F.asm:79 ASL
    case 0xC48A80: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:80 STA @VIRTUAL02
    case 0xC48A81: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:81 INC
    case 0xC48A83: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:82 INC
    case 0xC48A84: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:83 JSR UNKNOWN_C4B587
    case 0xC48A85: cpu.execute_instruction<0x20>(0x0089F4, 3); return true;
    // src/unknown/C4/C4B59F.asm:84 STA @LOCAL08
    case 0xC48A88: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:85 STA PATH_SEARCH_TEMP_START
    case 0xC48A8A: cpu.execute_instruction<0x8D>(0x00B5DD, 3); return true;
    // src/unknown/C4/C4B59F.asm:86 CLC
    case 0xC48A8D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:87 ADC @VIRTUAL02
    case 0xC48A8E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:88 STA PATH_SEARCH_TEMP_END
    case 0xC48A90: cpu.execute_instruction<0x8D>(0x00B5DF, 3); return true;
    // src/unknown/C4/C4B59F.asm:89 LDA @LOCAL08
    case 0xC48A93: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:90 STA PATH_SEARCH_TEMP_B
    case 0xC48A95: cpu.execute_instruction<0x8D>(0x00B5E3, 3); return true;
    // src/unknown/C4/C4B59F.asm:91 STA PATH_SEARCH_TEMP_A
    case 0xC48A98: cpu.execute_instruction<0x8D>(0x00B5E1, 3); return true;
    // src/unknown/C4/C4B59F.asm:92 LDA PATH_MATRIX_COLUMNS
    case 0xC48A9B: cpu.execute_instruction<0xAD>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B59F.asm:93 EOR #$FFFF
    case 0xC48A9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B59F.asm:93 EOR #$FFFF
    // Overlapping static entry reached from 0xC48A9E.
    case 0xC48AA0: cpu.execute_instruction<0xFF>(0xE58D1A, 4); return true;
    // src/unknown/C4/C4B59F.asm:94 INC
    case 0xC48AA1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:95 STA PATH_CARDINAL_OFFSET
    case 0xC48AA2: cpu.execute_instruction<0x8D>(0x00B5E5, 3); return true;
    // src/unknown/C4/C4B59F.asm:95 STA PATH_CARDINAL_OFFSET
    // Overlapping static entry reached from 0xC48AA0.
    case 0xC48AA4: cpu.execute_instruction<0xB5>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B59F.asm:96 LDA #1
    case 0xC48AA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4B59F.asm:96 LDA #1
    // Overlapping static entry reached from 0xC48AA4.
    case 0xC48AA6: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C4/C4B59F.asm:96 LDA #1
    // Overlapping static entry reached from 0xC48AA5.
    case 0xC48AA7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4B59F.asm:97 STA PATH_CARDINAL_OFFSET+2
    case 0xC48AA8: cpu.execute_instruction<0x8D>(0x00B5E7, 3); return true;
    // src/unknown/C4/C4B59F.asm:98 LDA PATH_MATRIX_COLUMNS
    case 0xC48AAB: cpu.execute_instruction<0xAD>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B59F.asm:99 STA PATH_CARDINAL_OFFSET+4
    case 0xC48AAE: cpu.execute_instruction<0x8D>(0x00B5E9, 3); return true;
    // src/unknown/C4/C4B59F.asm:100 LDA #.LOWORD(-1)
    case 0xC48AB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B59F.asm:100 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC48AB1.
    case 0xC48AB3: cpu.execute_instruction<0xFF>(0xB5EB8D, 4); return true;
    // src/unknown/C4/C4B59F.asm:101 STA PATH_CARDINAL_OFFSET+6
    case 0xC48AB4: cpu.execute_instruction<0x8D>(0x00B5EB, 3); return true;
    // src/unknown/C4/C4B59F.asm:102 STA PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 0 + pathfinder_coords::y_coord
    case 0xC48AB7: cpu.execute_instruction<0x8D>(0x00B5ED, 3); return true;
    // src/unknown/C4/C4B59F.asm:103 STZ PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 0 + pathfinder_coords::x_coord
    case 0xC48ABA: cpu.execute_instruction<0x9C>(0x00B5EF, 3); return true;
    // src/unknown/C4/C4B59F.asm:104 STZ PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 1 + pathfinder_coords::y_coord
    case 0xC48ABD: cpu.execute_instruction<0x9C>(0x00B5F1, 3); return true;
    // src/unknown/C4/C4B59F.asm:105 LDA #1
    case 0xC48AC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4B59F.asm:105 LDA #1
    // Overlapping static entry reached from 0xC48AC0.
    case 0xC48AC2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4B59F.asm:106 STA PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 1 + pathfinder_coords::x_coord
    case 0xC48AC3: cpu.execute_instruction<0x8D>(0x00B5F3, 3); return true;
    // src/unknown/C4/C4B59F.asm:107 STA PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 2 + pathfinder_coords::y_coord
    case 0xC48AC6: cpu.execute_instruction<0x8D>(0x00B5F5, 3); return true;
    // src/unknown/C4/C4B59F.asm:108 STZ PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 2 + pathfinder_coords::x_coord
    case 0xC48AC9: cpu.execute_instruction<0x9C>(0x00B5F7, 3); return true;
    // src/unknown/C4/C4B59F.asm:109 STZ PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 3 + pathfinder_coords::y_coord
    case 0xC48ACC: cpu.execute_instruction<0x9C>(0x00B5F9, 3); return true;
    // src/unknown/C4/C4B59F.asm:110 LDA #.LOWORD(-1)
    case 0xC48ACF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B59F.asm:110 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC48ACF.
    case 0xC48AD1: cpu.execute_instruction<0xFF>(0xB5FB8D, 4); return true;
    // src/unknown/C4/C4B59F.asm:111 STA PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 3 + pathfinder_coords::x_coord
    case 0xC48AD2: cpu.execute_instruction<0x8D>(0x00B5FB, 3); return true;
    // src/unknown/C4/C4B59F.asm:112 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 0 + pathfinder_coords::y_coord
    case 0xC48AD5: cpu.execute_instruction<0x8D>(0x00B5FD, 3); return true;
    // src/unknown/C4/C4B59F.asm:113 LDA #1
    case 0xC48AD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4B59F.asm:113 LDA #1
    // Overlapping static entry reached from 0xC48AD8.
    case 0xC48ADA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4B59F.asm:114 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 0 + pathfinder_coords::x_coord
    case 0xC48ADB: cpu.execute_instruction<0x8D>(0x00B5FF, 3); return true;
    // src/unknown/C4/C4B59F.asm:115 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 1 + pathfinder_coords::y_coord
    case 0xC48ADE: cpu.execute_instruction<0x8D>(0x00B601, 3); return true;
    // src/unknown/C4/C4B59F.asm:116 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 1 + pathfinder_coords::x_coord
    case 0xC48AE1: cpu.execute_instruction<0x8D>(0x00B603, 3); return true;
    // src/unknown/C4/C4B59F.asm:117 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 2 + pathfinder_coords::y_coord
    case 0xC48AE4: cpu.execute_instruction<0x8D>(0x00B605, 3); return true;
    // src/unknown/C4/C4B59F.asm:118 LDA #.LOWORD(-1)
    case 0xC48AE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B59F.asm:118 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC48AE7.
    case 0xC48AE9: cpu.execute_instruction<0xFF>(0xB6078D, 4); return true;
    // src/unknown/C4/C4B59F.asm:119 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 2 + pathfinder_coords::x_coord
    case 0xC48AEA: cpu.execute_instruction<0x8D>(0x00B607, 3); return true;
    // src/unknown/C4/C4B59F.asm:120 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 3 + pathfinder_coords::y_coord
    case 0xC48AED: cpu.execute_instruction<0x8D>(0x00B609, 3); return true;
    // src/unknown/C4/C4B59F.asm:121 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 3 + pathfinder_coords::x_coord
    case 0xC48AF0: cpu.execute_instruction<0x8D>(0x00B60B, 3); return true;
    // src/unknown/C4/C4B59F.asm:122 LDA @LOCAL10
    case 0xC48AF3: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/unknown/C4/C4B59F.asm:123 CMP #251
    case 0xC48AF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FB, 2); else cpu.execute_instruction<0xC9>(0x0000FB, 3); return true;
    // src/unknown/C4/C4B59F.asm:123 CMP #251
    // Overlapping static entry reached from 0xC48AF5.
    case 0xC48AF7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4B59F.asm:124 BCC @UNKNOWN0
    case 0xC48AF8: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C4/C4B59F.asm:125 LDA #251
    case 0xC48AFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x0000FB, 3); return true;
    // src/unknown/C4/C4B59F.asm:125 LDA #251
    // Overlapping static entry reached from 0xC48AFA.
    case 0xC48AFC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B59F.asm:126 STA @LOCAL10
    case 0xC48AFD: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/unknown/C4/C4B59F.asm:128 LDA @LOCAL0D
    case 0xC48AFF: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C4B59F.asm:129 ASL
    case 0xC48B01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:130 JSR UNKNOWN_C4B587
    case 0xC48B02: cpu.execute_instruction<0x20>(0x0089F4, 3); return true;
    // src/unknown/C4/C4B59F.asm:131 STA @LOCAL07
    case 0xC48B05: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4B59F.asm:132 LDY @LOCAL07
    case 0xC48B07: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C4/C4B59F.asm:133 LDX @LOCAL0E
    case 0xC48B09: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C4/C4B59F.asm:134 LDA @LOCAL0D
    case 0xC48B0B: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C4B59F.asm:135 JSR UNKNOWN_C4B859
    case 0xC48B0D: cpu.execute_instruction<0x20>(0x008CC6, 3); return true;
    // src/unknown/C4/C4B59F.asm:136 LDA @LOCAL10
    case 0xC48B10: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/unknown/C4/C4B59F.asm:137 ASL
    case 0xC48B12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:138 ASL
    case 0xC48B13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:139 JSR UNKNOWN_C4B587
    case 0xC48B14: cpu.execute_instruction<0x20>(0x0089F4, 3); return true;
    // src/unknown/C4/C4B59F.asm:140 STA @LOCAL0E
    case 0xC48B17: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C4/C4B59F.asm:141 JSR UNKNOWN_C4B7A5
    case 0xC48B19: cpu.execute_instruction<0x20>(0x008C12, 3); return true;
    // src/unknown/C4/C4B59F.asm:142 STZ @LOCAL06
    case 0xC48B1C: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/unknown/C4/C4B59F.asm:143 STZ @LOCAL05
    case 0xC48B1E: cpu.execute_instruction<0x64>(0x000018, 2); return true;
    // src/unknown/C4/C4B59F.asm:144 LDA #0
    case 0xC48B20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B59F.asm:144 LDA #0
    // Overlapping static entry reached from 0xC48B20.
    case 0xC48B22: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B59F.asm:145 STA @VIRTUAL04
    case 0xC48B23: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:146 JMP @UNKNOWN10
    case 0xC48B25: cpu.execute_instruction<0x4C>(0x008C03, 3); return true;
    // src/unknown/C4/C4B59F.asm:148 LDA @VIRTUAL04
    case 0xC48B28: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:149 ASL
    case 0xC48B2A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:150 TAY
    case 0xC48B2B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:151 LDA (@LOCAL07),Y
    case 0xC48B2C: cpu.execute_instruction<0xB1>(0x00001C, 2); return true;
    // src/unknown/C4/C4B59F.asm:152 STA @VIRTUAL02
    case 0xC48B2E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:153 STA @LOCAL12
    case 0xC48B30: cpu.execute_instruction<0x85>(0x000032, 2); return true;
    // src/unknown/C4/C4B59F.asm:154 LDX @VIRTUAL02
    case 0xC48B32: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:155 LDA __BSS_START__+2,X
    case 0xC48B34: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C4/C4B59F.asm:156 CMP @LOCAL06
    case 0xC48B37: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C4/C4B59F.asm:157 BNE @UNKNOWN2
    case 0xC48B39: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C4/C4B59F.asm:158 LDX @VIRTUAL02
    case 0xC48B3B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:159 LDA __BSS_START__+4,X
    case 0xC48B3D: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C4/C4B59F.asm:160 CMP @LOCAL05
    case 0xC48B40: cpu.execute_instruction<0xC5>(0x000018, 2); return true;
    // src/unknown/C4/C4B59F.asm:161 BEQ @UNKNOWN6
    case 0xC48B42: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/unknown/C4/C4B59F.asm:163 LDY #1
    case 0xC48B44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4B59F.asm:163 LDY #1
    // Overlapping static entry reached from 0xC48B44.
    case 0xC48B46: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4B59F.asm:164 STY @LOCAL04
    case 0xC48B47: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C4B59F.asm:165 LDX @VIRTUAL02
    case 0xC48B49: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:166 LDA __BSS_START__+2,X
    case 0xC48B4B: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C4/C4B59F.asm:167 STA @LOCAL06
    case 0xC48B4E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4B59F.asm:168 LDX @VIRTUAL02
    case 0xC48B50: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:169 LDA __BSS_START__+4,X
    case 0xC48B52: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C4/C4B59F.asm:170 STA @LOCAL05
    case 0xC48B55: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4B59F.asm:171 LDA @VIRTUAL04
    case 0xC48B57: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:172 INC
    case 0xC48B59: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:173 STA @LOCAL08
    case 0xC48B5A: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:174 BRA @UNKNOWN4
    case 0xC48B5C: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C4/C4B59F.asm:176 ASL
    case 0xC48B5E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:177 TAY
    case 0xC48B5F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:178 LDA (@LOCAL07),Y
    case 0xC48B60: cpu.execute_instruction<0xB1>(0x00001C, 2); return true;
    // src/unknown/C4/C4B59F.asm:179 TAX
    case 0xC48B62: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:180 LDA __BSS_START__+2,X
    case 0xC48B63: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C4/C4B59F.asm:181 CMP @LOCAL06
    case 0xC48B66: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C4/C4B59F.asm:182 BNE @UNKNOWN5
    case 0xC48B68: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/unknown/C4/C4B59F.asm:183 LDA __BSS_START__+4,X
    case 0xC48B6A: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C4/C4B59F.asm:184 CMP @LOCAL05
    case 0xC48B6D: cpu.execute_instruction<0xC5>(0x000018, 2); return true;
    // src/unknown/C4/C4B59F.asm:185 BNE @UNKNOWN5
    case 0xC48B6F: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C4/C4B59F.asm:186 LDY @LOCAL04
    case 0xC48B71: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4B59F.asm:187 INY
    case 0xC48B73: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:188 STY @LOCAL04
    case 0xC48B74: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C4B59F.asm:189 LDA @LOCAL08
    case 0xC48B76: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:190 INC
    case 0xC48B78: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:191 STA @LOCAL08
    case 0xC48B79: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:193 CMP @LOCAL0D
    case 0xC48B7B: cpu.execute_instruction<0xC5>(0x000028, 2); return true;
    // src/unknown/C4/C4B59F.asm:194 BCC @UNKNOWN3
    case 0xC48B7D: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // src/unknown/C4/C4B59F.asm:196 LDA @VIRTUAL04
    case 0xC48B7F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:197 ASL
    case 0xC48B81: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:198 CLC
    case 0xC48B82: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:199 ADC @LOCAL07
    case 0xC48B83: cpu.execute_instruction<0x65>(0x00001C, 2); return true;
    // src/unknown/C4/C4B59F.asm:200 TAX
    case 0xC48B85: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:201 LDY @LOCAL04
    case 0xC48B86: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4B59F.asm:202 TYA
    case 0xC48B88: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:203 JSR UNKNOWN_C4B923
    case 0xC48B89: cpu.execute_instruction<0x20>(0x008D68, 3); return true;
    // src/unknown/C4/C4B59F.asm:204 LDY @LOCAL04
    case 0xC48B8C: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4B59F.asm:205 STY @LOCAL00
    case 0xC48B8E: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4B59F.asm:206 LDA @LOCAL10
    case 0xC48B90: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/unknown/C4/C4B59F.asm:207 STA @LOCAL01
    case 0xC48B92: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4B59F.asm:208 LDA @LOCAL0F
    case 0xC48B94: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/unknown/C4/C4B59F.asm:209 STA @LOCAL02
    case 0xC48B96: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B59F.asm:210 LDY @VIRTUAL02
    case 0xC48B98: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:211 LDX @LOCAL0C
    case 0xC48B9A: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/unknown/C4/C4B59F.asm:212 LDA @LOCAL0B
    case 0xC48B9C: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C4/C4B59F.asm:213 JSR UNKNOWN_C4BAF6
    case 0xC48B9E: cpu.execute_instruction<0x20>(0x008F3B, 3); return true;
    // src/unknown/C4/C4B59F.asm:215 LDY @LOCAL0E
    case 0xC48BA1: cpu.execute_instruction<0xA4>(0x00002A, 2); return true;
    // src/unknown/C4/C4B59F.asm:216 LDX @LOCAL10
    case 0xC48BA3: cpu.execute_instruction<0xA6>(0x00002E, 2); return true;
    // src/unknown/C4/C4B59F.asm:217 LDA @VIRTUAL02
    case 0xC48BA5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:218 CLC
    case 0xC48BA7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:219 ADC #6
    case 0xC48BA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C4/C4B59F.asm:219 ADC #6
    // Overlapping static entry reached from 0xC48BA8.
    case 0xC48BAA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4B59F.asm:220 JSR UNKNOWN_C4BD9A
    case 0xC48BAB: cpu.execute_instruction<0x20>(0x0091D5, 3); return true;
    // src/unknown/C4/C4B59F.asm:221 LDX @VIRTUAL02
    case 0xC48BAE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:222 STA __BSS_START__+14,X
    case 0xC48BB0: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
    // src/unknown/C4/C4B59F.asm:223 LDX @LOCAL0E
    case 0xC48BB3: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C4/C4B59F.asm:224 JSR UNKNOWN_C4BF7F
    case 0xC48BB5: cpu.execute_instruction<0x20>(0x0093BA, 3); return true;
    // src/unknown/C4/C4B59F.asm:225 STA @LOCAL03
    case 0xC48BB8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B59F.asm:226 ASL
    case 0xC48BBA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:227 ASL
    case 0xC48BBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:228 JSR UNKNOWN_C4B587
    case 0xC48BBC: cpu.execute_instruction<0x20>(0x0089F4, 3); return true;
    // src/unknown/C4/C4B59F.asm:229 STA @LOCAL0A
    case 0xC48BBF: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4B59F.asm:230 STZ @LOCAL08
    case 0xC48BC1: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:231 BRA @UNKNOWN8
    case 0xC48BC3: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C4/C4B59F.asm:233 LDA @LOCAL08
    case 0xC48BC5: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:234 ASL
    case 0xC48BC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:235 ASL
    case 0xC48BC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:236 TAX
    case 0xC48BC9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:237 STX @VIRTUAL02
    case 0xC48BCA: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:238 LDA @LOCAL0A
    case 0xC48BCC: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4B59F.asm:239 CLC
    case 0xC48BCE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:240 ADC @VIRTUAL02
    case 0xC48BCF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:241 TAY
    case 0xC48BD1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:242 TXA
    case 0xC48BD2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:243 CLC
    case 0xC48BD3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:244 ADC @LOCAL0E
    case 0xC48BD4: cpu.execute_instruction<0x65>(0x00002A, 2); return true;
    // src/unknown/C4/C4B59F.asm:245 TAX
    case 0xC48BD6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1120 LDA src, X
    // Macro caller: src/unknown/C4/C4B59F.asm:246 MOVE_INT_XPTRSRC_YPTRDEST __BSS_START__, __BSS_START__
    case 0xC48BD7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:1121 STA dest, Y
    // Macro caller: src/unknown/C4/C4B59F.asm:246 MOVE_INT_XPTRSRC_YPTRDEST __BSS_START__, __BSS_START__
    case 0xC48BDA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1122 LDA src+2, X
    // Macro caller: src/unknown/C4/C4B59F.asm:246 MOVE_INT_XPTRSRC_YPTRDEST __BSS_START__, __BSS_START__
    case 0xC48BDD: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:1123 STA dest+2, Y
    // Macro caller: src/unknown/C4/C4B59F.asm:246 MOVE_INT_XPTRSRC_YPTRDEST __BSS_START__, __BSS_START__
    case 0xC48BE0: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C4/C4B59F.asm:247 INC @LOCAL08
    case 0xC48BE3: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:249 LDA @LOCAL08
    case 0xC48BE5: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:250 CMP @LOCAL03
    case 0xC48BE7: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C4/C4B59F.asm:251 BCC @UNKNOWN7
    case 0xC48BE9: cpu.execute_instruction<0x90>(0x0000DA, 2); return true;
    // src/unknown/C4/C4B59F.asm:252 LDA @LOCAL03
    case 0xC48BEB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B59F.asm:253 LDX @LOCAL12
    case 0xC48BED: cpu.execute_instruction<0xA6>(0x000032, 2); return true;
    // src/unknown/C4/C4B59F.asm:254 STX @VIRTUAL02
    case 0xC48BEF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:255 STA __BSS_START__+10,X
    case 0xC48BF1: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/unknown/C4/C4B59F.asm:256 LDA @LOCAL0A
    case 0xC48BF4: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4B59F.asm:257 LDX @VIRTUAL02
    case 0xC48BF6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:258 STA __BSS_START__+12,X
    case 0xC48BF8: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/unknown/C4/C4B59F.asm:259 LDA @LOCAL03
    case 0xC48BFB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B59F.asm:260 BEQ @UNKNOWN9
    case 0xC48BFD: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:261 INC @LOCAL09
    case 0xC48BFF: cpu.execute_instruction<0xE6>(0x000020, 2); return true;
    // src/unknown/C4/C4B59F.asm:263 INC @VIRTUAL04
    case 0xC48C01: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:265 LDA @VIRTUAL04
    case 0xC48C03: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:266 CMP @LOCAL0D
    case 0xC48C05: cpu.execute_instruction<0xC5>(0x000028, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4B59F.asm:267 BCCL @UNKNOWN1
    case 0xC48C07: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4B59F.asm:267 BCCL @UNKNOWN1
    case 0xC48C09: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4B59F.asm:267 BCCL @UNKNOWN1
    case 0xC48C0B: cpu.execute_instruction<0x4C>(0x008B28, 3); return true;
    // src/unknown/C4/C4B59F.asm:268 LDA @LOCAL09
    case 0xC48C0E: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B59F.asm:269 END_C_FUNCTION
    case 0xC48C10: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B59F.asm:269 END_C_FUNCTION
    case 0xC48C11: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B721-jp.asm (unresolved).
bool execute_unresolved_c4_c4b721_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B721-jp.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC4B721: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B721-jp.asm:18 END_STACK_VARS
    case 0xC4B723: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B721-jp.asm:18 END_STACK_VARS
    case 0xC4B724: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B721-jp.asm:18 END_STACK_VARS
    case 0xC4B725: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B721-jp.asm:18 END_STACK_VARS
    case 0xC4B726: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B721-jp.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B726.
    case 0xC4B728: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B721-jp.asm:18 END_STACK_VARS
    case 0xC4B729: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B721-jp.asm:18 END_STACK_VARS
    case 0xC4B72A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:19 STA @LOCAL06
    case 0xC4B72B: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:19 STA @LOCAL06
    // Overlapping static entry reached from 0xC4B728.
    case 0xC4B72C: cpu.execute_instruction<0x1C>(0x002CA5, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:20 LDA @PARAM03
    case 0xC4B72D: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:21 STA @VIRTUAL02
    case 0xC4B72F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:22 LDA UNKNOWN_7EB4CF
    case 0xC4B731: cpu.execute_instruction<0xAD>(0x00B6A2, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:23 ASL
    case 0xC4B734: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:24 ASL
    case 0xC4B735: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:25 ASL
    case 0xC4B736: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:26 ASL
    case 0xC4B737: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:27 STORE_INT1632 @VIRTUAL0A
    case 0xC4B738: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:27 STORE_INT1632 @VIRTUAL0A
    case 0xC4B73A: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:28 CLC
    case 0xC4B73C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C4B721-jp.asm:29 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL0A
    case 0xC4B73D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4B721-jp.asm:29 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL0A
    case 0xC4B73F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4B721-jp.asm:29 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B73F.
    case 0xC4B741: cpu.execute_instruction<0x20>(0x000A85, 3); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:29 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL0A
    case 0xC4B742: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:29 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL0A
    case 0xC4B744: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4B721-jp.asm:29 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL0A
    case 0xC4B746: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4B721-jp.asm:29 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B746.
    case 0xC4B748: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:29 VAR_ADD_CONST_INT_ASSIGN BUFFER + $2000, @VIRTUAL0A
    case 0xC4B749: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:30 LDA @LOCAL06
    case 0xC4B74B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:31 ASL
    case 0xC4B74D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:32 ASL
    case 0xC4B74E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:33 ASL
    case 0xC4B74F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:34 ASL
    case 0xC4B750: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:35 STORE_INT1632 @VIRTUAL06
    case 0xC4B751: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:35 STORE_INT1632 @VIRTUAL06
    case 0xC4B753: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:36 CLC
    case 0xC4B755: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C4B721-jp.asm:37 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4B756: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4B721-jp.asm:37 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4B758: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4B721-jp.asm:37 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B758.
    case 0xC4B75A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:37 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4B75B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:37 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4B75D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4B721-jp.asm:37 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4B75F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4B721-jp.asm:37 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B75F.
    case 0xC4B761: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:37 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4B762: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B721-jp.asm:38 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4B764: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:38 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4B766: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:38 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4B768: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:38 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4B76A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:39 TYA
    case 0xC4B76C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:40 ASL
    case 0xC4B76D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:41 ASL
    case 0xC4B76E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:42 ASL
    case 0xC4B76F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:43 ASL
    case 0xC4B770: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:44 TAY
    case 0xC4B771: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:45 STY @LOCAL04
    case 0xC4B772: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:46 CPX #8
    case 0xC4B774: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:46 CPX #8
    // Overlapping static entry reached from 0xC4B774.
    case 0xC4B776: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4B721-jp.asm:47 BNEL @UNKNOWN6
    case 0xC4B777: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:47 BNEL @UNKNOWN6
    case 0xC4B779: cpu.execute_instruction<0x4C>(0x00B89A, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:48 LDA @VIRTUAL02
    case 0xC4B77C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4B721-jp.asm:49 BEQL @UNKNOWN3
    case 0xC4B77E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:49 BEQL @UNKNOWN3
    case 0xC4B780: cpu.execute_instruction<0x4C>(0x00B804, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:50 LDX #0
    case 0xC4B783: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:50 LDX #0
    // Overlapping static entry reached from 0xC4B783.
    case 0xC4B785: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:51 STX @LOCAL03
    case 0xC4B786: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:52 BRA @UNKNOWN2
    case 0xC4B788: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B78A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:55 LDA [@LOCAL05]
    case 0xC4B78C: cpu.execute_instruction<0xA7>(0x000018, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:56 EOR #$00FF
    case 0xC4B78E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:57 STA @VIRTUAL00
    case 0xC4B790: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:57 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC4B78E.
    case 0xC4B791: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC4B792: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:59 LDA @VIRTUAL02
    case 0xC4B794: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B796: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:61 STA @VIRTUAL01
    case 0xC4B798: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:62 SEP #PROC_FLAGS::INDEX8
    case 0xC4B79A: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:63 LDY @VIRTUAL01
    case 0xC4B79C: cpu.execute_instruction<0xA4>(0x000001, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:64 LDA @VIRTUAL00
    case 0xC4B79E: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:65 JSL ASR8_UNKNOWN1
    case 0xC4B7A0: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C4B721-jp.asm:66 STA @VIRTUAL00
    case 0xC4B7A4: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:67 LDA [@VIRTUAL0A]
    case 0xC4B7A6: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:68 ORA @VIRTUAL00
    case 0xC4B7A8: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:69 STA [@VIRTUAL0A]
    case 0xC4B7AA: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:70 REP #PROC_FLAGS::INDEX8
    case 0xC4B7AC: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:71 LDY #256
    case 0xC4B7AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:71 LDY #256
    // Overlapping static entry reached from 0xC4B7AE.
    case 0xC4B7B0: cpu.execute_instruction<0x01>(0x0000B7, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:72 LDA [@LOCAL05],Y
    case 0xC4B7B1: cpu.execute_instruction<0xB7>(0x000018, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:72 LDA [@LOCAL05],Y
    // Overlapping static entry reached from 0xC4B7B0.
    case 0xC4B7B2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:73 EOR #$00FF
    case 0xC4B7B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:74 STA @VIRTUAL00
    case 0xC4B7B5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:74 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC4B7B3.
    case 0xC4B7B6: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:75 SEP #PROC_FLAGS::INDEX8
    case 0xC4B7B7: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:76 LDY @VIRTUAL01
    case 0xC4B7B9: cpu.execute_instruction<0xA4>(0x000001, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:77 LDA @VIRTUAL00
    case 0xC4B7BB: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:78 JSL ASR8_UNKNOWN1
    case 0xC4B7BD: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C4B721-jp.asm:79 STA @VIRTUAL00
    case 0xC4B7C1: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:80 REP #PROC_FLAGS::INDEX8
    case 0xC4B7C3: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:81 LDY @LOCAL04
    case 0xC4B7C5: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC4B7C7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:83 TYA
    case 0xC4B7C9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4B721-jp.asm:84 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4B7CA: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:84 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4B7CC: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:84 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4B7CE: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:84 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4B7D0: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:85 CLC
    case 0xC4B7D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:86 ADC @VIRTUAL06
    case 0xC4B7D3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:87 STA @VIRTUAL06
    case 0xC4B7D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:88 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B7D7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:89 LDA [@VIRTUAL06]
    case 0xC4B7D9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:90 ORA @VIRTUAL00
    case 0xC4B7DB: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:91 STA [@VIRTUAL06]
    case 0xC4B7DD: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:92 LDX @LOCAL03
    case 0xC4B7DF: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:93 INX
    case 0xC4B7E1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:94 STX @LOCAL03
    case 0xC4B7E2: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC4B7E4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B721-jp.asm:96 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4B7E6: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:96 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4B7E8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:96 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4B7EA: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:96 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4B7EC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:97 INC @VIRTUAL06
    case 0xC4B7EE: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B721-jp.asm:98 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4B7F0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:98 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4B7F2: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:98 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4B7F4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:98 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4B7F6: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:99 INC @VIRTUAL0A
    case 0xC4B7F8: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:101 CPX #16
    case 0xC4B7FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:101 CPX #16
    // Overlapping static entry reached from 0xC4B7FA.
    case 0xC4B7FC: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4B721-jp.asm:102 BCCL @UNKNOWN1
    case 0xC4B7FD: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4B721-jp.asm:102 BCCL @UNKNOWN1
    case 0xC4B7FF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:102 BCCL @UNKNOWN1
    case 0xC4B801: cpu.execute_instruction<0x4C>(0x00B78A, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:104 LDA @LOCAL06
    case 0xC4B804: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:105 ASL
    case 0xC4B806: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:106 ASL
    case 0xC4B807: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:107 ASL
    case 0xC4B808: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:108 ASL
    case 0xC4B809: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:109 STORE_INT1632 @VIRTUAL06
    case 0xC4B80A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:109 STORE_INT1632 @VIRTUAL06
    case 0xC4B80C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:110 CLC
    case 0xC4B80E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C4B721-jp.asm:111 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4B80F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4B721-jp.asm:111 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4B811: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4B721-jp.asm:111 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B811.
    case 0xC4B813: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:111 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4B814: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:111 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4B816: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4B721-jp.asm:111 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4B818: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4B721-jp.asm:111 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B818.
    case 0xC4B81A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:111 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4B81B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B721-jp.asm:112 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B81D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:112 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B81F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:112 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B821: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:112 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B823: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:113 LDX #0
    case 0xC4B825: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:113 LDX #0
    // Overlapping static entry reached from 0xC4B825.
    case 0xC4B827: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:114 STX @LOCAL03
    case 0xC4B828: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:115 BRA @UNKNOWN5
    case 0xC4B82A: cpu.execute_instruction<0x80>(0x000064, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:117 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B82C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:118 LDA [@VIRTUAL06]
    case 0xC4B82E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:119 EOR #$00FF
    case 0xC4B830: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:120 STA @LOCAL01
    case 0xC4B832: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:120 STA @LOCAL01
    // Overlapping static entry reached from 0xC4B830.
    case 0xC4B833: cpu.execute_instruction<0x0F>(0xA520C2, 4); return true;
    // src/unknown/C4/C4B721-jp.asm:121 REP #PROC_FLAGS::ACCUM8
    case 0xC4B834: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:122 LDA @VIRTUAL02
    case 0xC4B836: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:122 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4B833.
    case 0xC4B837: cpu.execute_instruction<0x02>(0x0000E2, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:123 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B838: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:124 STA @VIRTUAL00
    case 0xC4B83A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:125 SEP #PROC_FLAGS::INDEX8
    case 0xC4B83C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:126 LDY @VIRTUAL00
    case 0xC4B83E: cpu.execute_instruction<0xA4>(0x000000, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:127 LDA @LOCAL01
    case 0xC4B840: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:128 JSL ASL16_ENTRY2
    case 0xC4B842: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C4/C4B721-jp.asm:129 STA [@VIRTUAL0A]
    case 0xC4B846: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:130 REP #PROC_FLAGS::INDEX8
    case 0xC4B848: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:131 LDY #256
    case 0xC4B84A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:131 LDY #256
    // Overlapping static entry reached from 0xC4B84A.
    case 0xC4B84C: cpu.execute_instruction<0x01>(0x0000B7, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:132 LDA [@VIRTUAL06],Y
    case 0xC4B84D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:132 LDA [@VIRTUAL06],Y
    // Overlapping static entry reached from 0xC4B84C.
    case 0xC4B84E: cpu.execute_instruction<0x06>(0x000049, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:133 EOR #$00FF
    case 0xC4B84F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00E2FF, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:133 EOR #$00FF
    // Overlapping static entry reached from 0xC4B84E.
    case 0xC4B850: cpu.execute_instruction<0xFF>(0xA410E2, 4); return true;
    // src/unknown/C4/C4B721-jp.asm:134 SEP #PROC_FLAGS::INDEX8
    case 0xC4B851: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:134 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC4B84F.
    case 0xC4B852: cpu.execute_instruction<0x10>(0x0000A4, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:135 LDY @VIRTUAL00
    case 0xC4B853: cpu.execute_instruction<0xA4>(0x000000, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:135 LDY @VIRTUAL00
    // Overlapping static entry reached from 0xC4B852.
    case 0xC4B854: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:136 JSL ASL16_ENTRY2
    case 0xC4B855: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C4/C4B721-jp.asm:137 STA @LOCAL00
    case 0xC4B859: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:138 REP #PROC_FLAGS::INDEX8
    case 0xC4B85B: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:139 LDY @LOCAL04
    case 0xC4B85D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:140 REP #PROC_FLAGS::ACCUM8
    case 0xC4B85F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:141 TYA
    case 0xC4B861: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4B721-jp.asm:142 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4B862: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:142 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4B864: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:142 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4B866: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:142 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4B868: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:143 CLC
    case 0xC4B86A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:144 ADC @VIRTUAL06
    case 0xC4B86B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:145 STA @VIRTUAL06
    case 0xC4B86D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:146 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B86F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:147 LDA @LOCAL00
    case 0xC4B871: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:148 STA [@VIRTUAL06]
    case 0xC4B873: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:149 LDX @LOCAL03
    case 0xC4B875: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:150 INX
    case 0xC4B877: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:151 STX @LOCAL03
    case 0xC4B878: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:152 REP #PROC_FLAGS::ACCUM8
    case 0xC4B87A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B721-jp.asm:153 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B87C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:153 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B87E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:153 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B880: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:153 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B882: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:154 INC @VIRTUAL06
    case 0xC4B884: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B721-jp.asm:155 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B886: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:155 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B888: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:155 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B88A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:155 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B88C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:156 INC @VIRTUAL0A
    case 0xC4B88E: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:158 CPX #16
    case 0xC4B890: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:158 CPX #16
    // Overlapping static entry reached from 0xC4B890.
    case 0xC4B892: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:159 BCC @UNKNOWN4
    case 0xC4B893: cpu.execute_instruction<0x90>(0x000097, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:160 INC UNKNOWN_7EB4CF
    case 0xC4B895: cpu.execute_instruction<0xEE>(0x00B6A2, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:161 BRA @UNKNOWN9
    case 0xC4B898: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:163 LDX #0
    case 0xC4B89A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:163 LDX #0
    // Overlapping static entry reached from 0xC4B89A.
    case 0xC4B89C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:164 BRA @UNKNOWN8
    case 0xC4B89D: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:166 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B89F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:167 LDA #0
    case 0xC4B8A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:168 STA [@VIRTUAL0A]
    case 0xC4B8A3: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:168 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC4B8A1.
    case 0xC4B8A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:169 REP #PROC_FLAGS::ACCUM8
    case 0xC4B8A5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:170 TYA
    case 0xC4B8A7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:171 PHA
    case 0xC4B8A8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B721-jp.asm:172 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4B8A9: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:172 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4B8AB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:172 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4B8AD: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:172 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4B8AF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:173 PLA
    case 0xC4B8B1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:174 CLC
    case 0xC4B8B2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:175 ADC @VIRTUAL06
    case 0xC4B8B3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:176 STA @VIRTUAL06
    case 0xC4B8B5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:177 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B8B7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:178 LDA #0
    case 0xC4B8B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:179 STA [@VIRTUAL06]
    case 0xC4B8BB: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:179 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4B8B9.
    case 0xC4B8BC: cpu.execute_instruction<0x06>(0x0000E8, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:180 INX
    case 0xC4B8BD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:181 REP #PROC_FLAGS::ACCUM8
    case 0xC4B8BE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B721-jp.asm:182 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4B8C0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:182 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4B8C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:182 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4B8C4: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:182 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4B8C6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:183 INC @VIRTUAL06
    case 0xC4B8C8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B721-jp.asm:184 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4B8CA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B721-jp.asm:184 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4B8CC: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:184 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4B8CE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B721-jp.asm:184 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4B8D0: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:185 INC @VIRTUAL0A
    case 0xC4B8D2: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:187 CPX #16
    case 0xC4B8D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:187 CPX #16
    // Overlapping static entry reached from 0xC4B8D4.
    case 0xC4B8D6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:188 BCC @UNKNOWN7
    case 0xC4B8D7: cpu.execute_instruction<0x90>(0x0000C6, 2); return true;
    // src/unknown/C4/C4B721-jp.asm:190 LDA UNKNOWN_7EB4CF
    case 0xC4B8D9: cpu.execute_instruction<0xAD>(0x00B6A2, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:191 CLC
    case 0xC4B8DC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B721-jp.asm:192 ADC #$2200
    case 0xC4B8DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002200, 3); return true;
    // src/unknown/C4/C4B721-jp.asm:192 ADC #$2200
    // Overlapping static entry reached from 0xC4B8DD.
    case 0xC4B8DF: cpu.execute_instruction<0x22>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B721-jp.asm:193 END_C_FUNCTION
    case 0xC4B8E0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B721-jp.asm:193 END_C_FUNCTION
    case 0xC4B8E1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B7A5.asm (unresolved).
bool execute_unresolved_c4_c4b7a5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B7A5.asm:3 BEGIN_C_FUNCTION
    case 0xC48C12: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B7A5.asm:6 END_STACK_VARS
    case 0xC48C14: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B7A5.asm:6 END_STACK_VARS
    case 0xC48C15: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B7A5.asm:6 END_STACK_VARS
    case 0xC48C16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B7A5.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC48C16.
    case 0xC48C18: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B7A5.asm:6 END_STACK_VARS
    case 0xC48C19: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:7 LDX #0
    case 0xC48C1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B7A5.asm:7 LDX #0
    // Overlapping static entry reached from 0xC48C1A.
    case 0xC48C1C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4B7A5.asm:8 BRA @UNKNOWN1
    case 0xC48C1D: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC48C1F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B7A5.asm:11 LDA #253
    case 0xC48C21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0085FD, 3); return true;
    // src/unknown/C4/C4B7A5.asm:12 STA @LOCAL00
    case 0xC48C23: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:12 STA @LOCAL00
    // Overlapping static entry reached from 0xC48C21.
    case 0xC48C24: cpu.execute_instruction<0x0E>(0x0020C2, 3); return true;
    // src/unknown/C4/C4B7A5.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC48C25: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B7A5.asm:14 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48C27: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B7A5.asm:14 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48C2A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:14 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48C2C: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:14 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48C2F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B7A5.asm:15 LDA PATH_MATRIX_COLUMNS
    case 0xC48C31: cpu.execute_instruction<0xAD>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B7A5.asm:16 DEC
    case 0xC48C34: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:17 STA @VIRTUAL02
    case 0xC48C35: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B7A5.asm:18 LDY PATH_MATRIX_COLUMNS
    case 0xC48C37: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B7A5.asm:19 TXA
    case 0xC48C3A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:20 JSL MULT16
    case 0xC48C3B: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4B7A5.asm:21 CLC
    case 0xC48C3F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:22 ADC @VIRTUAL02
    case 0xC48C40: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B7A5.asm:23 CLC
    case 0xC48C42: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:24 ADC @VIRTUAL06
    case 0xC48C43: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:25 STA @VIRTUAL06
    case 0xC48C45: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC48C47: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B7A5.asm:27 LDA @LOCAL00
    case 0xC48C49: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:28 STA [@VIRTUAL06]
    case 0xC48C4B: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC48C4D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B7A5.asm:30 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48C4F: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B7A5.asm:30 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48C52: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:30 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48C54: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:30 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48C57: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B7A5.asm:31 LDY PATH_MATRIX_COLUMNS
    case 0xC48C59: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B7A5.asm:32 TXA
    case 0xC48C5C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:33 JSL MULT16
    case 0xC48C5D: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4B7A5.asm:34 CLC
    case 0xC48C61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:35 ADC @VIRTUAL06
    case 0xC48C62: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:36 STA @VIRTUAL06
    case 0xC48C64: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC48C66: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B7A5.asm:38 LDA @LOCAL00
    case 0xC48C68: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:39 STA [@VIRTUAL06]
    case 0xC48C6A: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:40 INX
    case 0xC48C6C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:42 CPX PATH_MATRIX_ROWS
    case 0xC48C6D: cpu.execute_instruction<0xEC>(0x00B5D5, 3); return true;
    // src/unknown/C4/C4B7A5.asm:43 BCC @UNKNOWN0
    case 0xC48C70: cpu.execute_instruction<0x90>(0x0000AD, 2); return true;
    // src/unknown/C4/C4B7A5.asm:44 LDX #0
    case 0xC48C72: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B7A5.asm:44 LDX #0
    // Overlapping static entry reached from 0xC48C72.
    case 0xC48C74: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4B7A5.asm:45 BRA @UNKNOWN3
    case 0xC48C75: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C4/C4B7A5.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC48C77: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B7A5.asm:48 LDA #253
    case 0xC48C79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0085FD, 3); return true;
    // src/unknown/C4/C4B7A5.asm:49 STA @LOCAL00
    case 0xC48C7B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:49 STA @LOCAL00
    // Overlapping static entry reached from 0xC48C79.
    case 0xC48C7C: cpu.execute_instruction<0x0E>(0x0020C2, 3); return true;
    // src/unknown/C4/C4B7A5.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC48C7D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B7A5.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48C7F: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B7A5.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48C82: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48C84: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48C87: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B7A5.asm:52 STX @VIRTUAL02
    case 0xC48C89: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B7A5.asm:53 LDY PATH_MATRIX_COLUMNS
    case 0xC48C8B: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B7A5.asm:54 LDA PATH_MATRIX_ROWS
    case 0xC48C8E: cpu.execute_instruction<0xAD>(0x00B5D5, 3); return true;
    // src/unknown/C4/C4B7A5.asm:55 DEC
    case 0xC48C91: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:56 JSL MULT16
    case 0xC48C92: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4B7A5.asm:57 CLC
    case 0xC48C96: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:58 ADC @VIRTUAL02
    case 0xC48C97: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B7A5.asm:59 CLC
    case 0xC48C99: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:60 ADC @VIRTUAL06
    case 0xC48C9A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:61 STA @VIRTUAL06
    case 0xC48C9C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC48C9E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B7A5.asm:63 LDA @LOCAL00
    case 0xC48CA0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:64 STA [@VIRTUAL06]
    case 0xC48CA2: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC48CA4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B7A5.asm:66 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48CA6: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B7A5.asm:66 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48CA9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:66 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48CAB: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:66 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48CAE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B7A5.asm:67 TXA
    case 0xC48CB0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:68 CLC
    case 0xC48CB1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:69 ADC @VIRTUAL06
    case 0xC48CB2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:70 STA @VIRTUAL06
    case 0xC48CB4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC48CB6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B7A5.asm:72 LDA @LOCAL00
    case 0xC48CB8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:72 LDA @LOCAL00
    // Overlapping static entry reached from 0xC48D11.
    case 0xC48CB9: cpu.execute_instruction<0x0E>(0x000687, 3); return true;
    // src/unknown/C4/C4B7A5.asm:73 STA [@VIRTUAL06]
    case 0xC48CBA: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:74 INX
    case 0xC48CBC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:76 CPX PATH_MATRIX_COLUMNS
    case 0xC48CBD: cpu.execute_instruction<0xEC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B7A5.asm:77 BCC @UNKNOWN2
    case 0xC48CC0: cpu.execute_instruction<0x90>(0x0000B5, 2); return true;
    // src/unknown/C4/C4B7A5.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC48CC2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B7A5.asm:79 END_C_FUNCTION
    case 0xC48CC4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4B7A5.asm:79 END_C_FUNCTION
    case 0xC48CC5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B859-jp.asm (unresolved).
bool execute_unresolved_c4_c4b859_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B859-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC48CC6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B859-jp.asm:14 END_STACK_VARS
    case 0xC48CC8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B859-jp.asm:14 END_STACK_VARS
    case 0xC48CC9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B859-jp.asm:14 END_STACK_VARS
    case 0xC48CCA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B859-jp.asm:14 END_STACK_VARS
    case 0xC48CCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B859-jp.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC48CCB.
    case 0xC48CCD: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B859-jp.asm:14 END_STACK_VARS
    case 0xC48CCE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B859-jp.asm:14 END_STACK_VARS
    case 0xC48CCF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:15 STY @LOCAL05
    case 0xC48CD0: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:15 STY @LOCAL05
    // Overlapping static entry reached from 0xC48CCD.
    case 0xC48CD1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:16 STA @LOCAL04
    case 0xC48CD2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:17 DEC
    case 0xC48CD4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:18 STA @LOCAL03
    case 0xC48CD5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:19 LDA #0
    case 0xC48CD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B859-jp.asm:19 LDA #0
    // Overlapping static entry reached from 0xC48CD7.
    case 0xC48CD9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:20 STA @LOCAL02
    case 0xC48CDA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:21 BRA @UNKNOWN1
    case 0xC48CDC: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:23 ASL
    case 0xC48CDE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:24 TAY
    case 0xC48CDF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:25 LDA @LOCAL02
    case 0xC48CE0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:601 STA scratch
    // Macro caller: src/unknown/C4/C4B859-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC48CE2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:602 ASL
    // Macro caller: src/unknown/C4/C4B859-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC48CE4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:603 ASL
    // Macro caller: src/unknown/C4/C4B859-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC48CE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:604 ASL
    // Macro caller: src/unknown/C4/C4B859-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC48CE6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:605 ADC scratch
    // Macro caller: src/unknown/C4/C4B859-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC48CE7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:606 ASL
    // Macro caller: src/unknown/C4/C4B859-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC48CE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:27 STA @VIRTUAL02
    case 0xC48CEA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:28 TXA
    case 0xC48CEC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:29 CLC
    case 0xC48CED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:30 ADC @VIRTUAL02
    case 0xC48CEE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:31 STA (@LOCAL05),Y
    case 0xC48CF0: cpu.execute_instruction<0x91>(0x000018, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:32 LDA @LOCAL02
    case 0xC48CF2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:33 INC
    case 0xC48CF4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:34 STA @LOCAL02
    case 0xC48CF5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:36 CMP @LOCAL04
    case 0xC48CF7: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:37 BCC @UNKNOWN0
    case 0xC48CF9: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:38 LDA @LOCAL04
    case 0xC48CFB: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:39 CMP #1
    case 0xC48CFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4B859-jp.asm:39 CMP #1
    // Overlapping static entry reached from 0xC48CFD.
    case 0xC48CFF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4B859-jp.asm:40 BLTEQ @UNKNOWN11
    case 0xC48D00: cpu.execute_instruction<0x90>(0x000064, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C4B859-jp.asm:40 BLTEQ @UNKNOWN11
    case 0xC48D02: cpu.execute_instruction<0xF0>(0x000062, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:42 LDA #0
    case 0xC48D04: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B859-jp.asm:42 LDA #0
    // Overlapping static entry reached from 0xC48D04.
    case 0xC48D06: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:43 STA @VIRTUAL04
    case 0xC48D07: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:44 BRA @UNKNOWN10
    case 0xC48D09: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:46 LDA #.LOWORD(-1)
    case 0xC48D0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B859-jp.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC48D0B.
    case 0xC48D0D: cpu.execute_instruction<0xFF>(0x850285, 4); return true;
    // src/unknown/C4/C4B859-jp.asm:47 STA @VIRTUAL02
    case 0xC48D0E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:48 STA @LOCAL01
    case 0xC48D10: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:48 STA @LOCAL01
    // Overlapping static entry reached from 0xC48D0D.
    case 0xC48D11: cpu.execute_instruction<0x10>(0x0000A6, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:49 LDX @VIRTUAL04
    case 0xC48D12: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:49 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC48D11.
    case 0xC48D13: cpu.execute_instruction<0x04>(0x000080, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:50 BRA @UNKNOWN9
    case 0xC48D14: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:50 BRA @UNKNOWN9
    // Overlapping static entry reached from 0xC48D13.
    case 0xC48D15: cpu.execute_instruction<0x26>(0x00008A, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:52 TXA
    case 0xC48D16: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:53 ASL
    case 0xC48D17: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:54 TAY
    case 0xC48D18: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:55 LDA (@LOCAL05),Y
    case 0xC48D19: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:56 TAY
    case 0xC48D1B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:57 LDA __BSS_START__+2,Y
    case 0xC48D1C: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // src/unknown/C4/C4B859-jp.asm:58 STA @LOCAL02
    case 0xC48D1F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:59 LDA __BSS_START__+4,Y
    case 0xC48D21: cpu.execute_instruction<0xB9>(0x000004, 3); return true;
    // src/unknown/C4/C4B859-jp.asm:60 TAY
    case 0xC48D24: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:61 LDA @LOCAL02
    case 0xC48D25: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:62 CMP @VIRTUAL02
    case 0xC48D27: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:63 BEQ @UNKNOWN6
    case 0xC48D29: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:64 CMP @VIRTUAL02
    case 0xC48D2B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:65 BCS @UNKNOWN8
    case 0xC48D2D: cpu.execute_instruction<0xB0>(0x00000C, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:66 BRA @UNKNOWN7
    case 0xC48D2F: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:68 CPY @LOCAL01
    case 0xC48D31: cpu.execute_instruction<0xC4>(0x000010, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:69 BCS @UNKNOWN8
    case 0xC48D33: cpu.execute_instruction<0xB0>(0x000006, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:71 STA @VIRTUAL02
    case 0xC48D35: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:72 STY @LOCAL01
    case 0xC48D37: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:73 STX @LOCAL00
    case 0xC48D39: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:75 INX
    case 0xC48D3B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:77 CPX @LOCAL04
    case 0xC48D3C: cpu.execute_instruction<0xE4>(0x000016, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:78 BCC @UNKNOWN5
    case 0xC48D3E: cpu.execute_instruction<0x90>(0x0000D6, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:79 LDA @VIRTUAL04
    case 0xC48D40: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:80 ASL
    case 0xC48D42: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:81 CLC
    case 0xC48D43: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:82 ADC @LOCAL05
    case 0xC48D44: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:83 TAY
    case 0xC48D46: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:84 LDA __BSS_START__,Y
    case 0xC48D47: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4B859-jp.asm:85 STA @LOCAL02
    case 0xC48D4A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:86 LDA @LOCAL00
    case 0xC48D4C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:87 ASL
    case 0xC48D4E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:88 CLC
    case 0xC48D4F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:89 ADC @LOCAL05
    case 0xC48D50: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:90 TAX
    case 0xC48D52: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B859-jp.asm:91 LDA __BSS_START__,X
    case 0xC48D53: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4B859-jp.asm:92 STA __BSS_START__,Y
    case 0xC48D56: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4B859-jp.asm:93 LDA @LOCAL02
    case 0xC48D59: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:94 STA __BSS_START__,X
    case 0xC48D5B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4B859-jp.asm:95 INC @VIRTUAL04
    case 0xC48D5E: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:97 LDA @VIRTUAL04
    case 0xC48D60: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:98 CMP @LOCAL03
    case 0xC48D62: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C4/C4B859-jp.asm:99 BCC @UNKNOWN4
    case 0xC48D64: cpu.execute_instruction<0x90>(0x0000A5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B859-jp.asm:101 END_C_FUNCTION
    case 0xC48D66: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4B859-jp.asm:101 END_C_FUNCTION
    case 0xC48D67: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B8E2-jp.asm (unresolved).
bool execute_unresolved_c4_c4b8e2_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B8E2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC4B8DF.
    case 0xC4B8E3: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:14 END_STACK_VARS
    case 0xC4B8E4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:14 END_STACK_VARS
    case 0xC4B8E5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:14 END_STACK_VARS
    case 0xC4B8E6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:14 END_STACK_VARS
    case 0xC4B8E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B8E7.
    case 0xC4B8E9: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:14 END_STACK_VARS
    case 0xC4B8EA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:14 END_STACK_VARS
    case 0xC4B8EB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:15 STX @VIRTUAL04
    case 0xC4B8EC: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:15 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC4B8E9.
    case 0xC4B8ED: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:16 STA @LOCAL07
    case 0xC4B8EE: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:16 STA @LOCAL07
    // Overlapping static entry reached from 0xC4B8ED.
    case 0xC4B8EF: cpu.execute_instruction<0x1E>(0x0004A5, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:17 LDA @VIRTUAL04
    case 0xC4B8F0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:18 ASL
    case 0xC4B8F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:19 INC
    case 0xC4B8F3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:20 INC
    case 0xC4B8F4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:21 CLC
    case 0xC4B8F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:22 ADC UNKNOWN_7EB4CF
    case 0xC4B8F6: cpu.execute_instruction<0x6D>(0x00B6A2, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:23 CMP #256
    case 0xC4B8F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:23 CMP #256
    // Overlapping static entry reached from 0xC4B8F9.
    case 0xC4B8FB: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:24 BLTEQ @UNKNOWN0
    case 0xC4B8FC: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:24 BLTEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC4B8FB.
    case 0xC4B8FD: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:24 BLTEQ @UNKNOWN0
    case 0xC4B8FE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:24 BLTEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC4B8FD.
    case 0xC4B8FF: cpu.execute_instruction<0x03>(0x00009C, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:25 STZ UNKNOWN_7EB4CF
    case 0xC4B900: cpu.execute_instruction<0x9C>(0x00B6A2, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:25 STZ UNKNOWN_7EB4CF
    // Overlapping static entry reached from 0xC4B8FF.
    case 0xC4B901: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B6, 2); else cpu.execute_instruction<0xA2>(0x00ADB6, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:27 LDA UNKNOWN_7EB4CF
    case 0xC4B903: cpu.execute_instruction<0xAD>(0x00B6A2, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:27 LDA UNKNOWN_7EB4CF
    // Overlapping static entry reached from 0xC4B901.
    case 0xC4B904: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B6, 2); else cpu.execute_instruction<0xA2>(0x0085B6, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:28 STA @LOCAL06
    case 0xC4B906: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:28 STA @LOCAL06
    // Overlapping static entry reached from 0xC4B904.
    case 0xC4B907: cpu.execute_instruction<0x1C>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:29 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B908: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:29 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B908.
    case 0xC4B90A: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:29 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B90B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:29 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B90D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:29 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B90D.
    case 0xC4B90F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:29 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B910: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:30 LDA @LOCAL07
    case 0xC4B912: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:31 ASL
    case 0xC4B914: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:32 CLC
    case 0xC4B915: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:33 ADC @VIRTUAL06
    case 0xC4B916: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:34 STA @VIRTUAL06
    case 0xC4B918: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:35 STA @LOCAL04
    case 0xC4B91A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:36 LDA @VIRTUAL06+2
    case 0xC4B91C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:37 STA @LOCAL05
    case 0xC4B91E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:38 LDA [@VIRTUAL06]
    case 0xC4B920: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:39 AND #$03FF
    case 0xC4B922: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:39 AND #$03FF
    // Overlapping static entry reached from 0xC4B922.
    case 0xC4B924: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:40 STA @LOCAL03
    case 0xC4B925: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:40 STA @LOCAL03
    // Overlapping static entry reached from 0xC4B924.
    case 0xC4B926: cpu.execute_instruction<0x16>(0x0000A5, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:41 LDA @VIRTUAL04
    case 0xC4B927: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:41 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC4B926.
    case 0xC4B928: cpu.execute_instruction<0x04>(0x000029, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:42 AND #$0001
    case 0xC4B929: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:42 AND #$0001
    // Overlapping static entry reached from 0xC4B928.
    case 0xC4B92A: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:42 AND #$0001
    // Overlapping static entry reached from 0xC4B929.
    case 0xC4B92B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:43 BEQL @UNKNOWN3_2
    case 0xC4B92C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:43 BEQL @UNKNOWN3_2
    case 0xC4B92E: cpu.execute_instruction<0x4C>(0x00BA43, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:44 LDA @VIRTUAL04
    case 0xC4B931: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:45 ASL
    case 0xC4B933: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:46 STA @LOCAL02
    case 0xC4B934: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:47 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B936: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:47 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B938: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:47 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B93A: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:47 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B93C: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:48 CLC
    case 0xC4B93E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:49 ADC @VIRTUAL0A
    case 0xC4B93F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:50 STA @VIRTUAL0A
    case 0xC4B941: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:51 LDA @LOCAL02
    case 0xC4B943: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:52 STA @VIRTUAL02
    case 0xC4B945: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:53 LDA #2
    case 0xC4B947: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:53 LDA #2
    // Overlapping static entry reached from 0xC4B947.
    case 0xC4B949: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:54 SEC
    case 0xC4B94A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:55 SBC @VIRTUAL02
    case 0xC4B94B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:56 EOR #$FFFF
    case 0xC4B94D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:56 EOR #$FFFF
    // Overlapping static entry reached from 0xC4B94D.
    case 0xC4B94F: cpu.execute_instruction<0xFF>(0x65181A, 4); return true;
    // src/unknown/C4/C4B8E2-jp.asm:57 INC
    case 0xC4B950: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:58 CLC
    case 0xC4B951: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:59 ADC @VIRTUAL06
    case 0xC4B952: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:59 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC4B94F.
    case 0xC4B953: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:60 STA @VIRTUAL06
    case 0xC4B954: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:60 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC4B953.
    case 0xC4B955: cpu.execute_instruction<0x06>(0x0000A7, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:61 LDA [@VIRTUAL06]
    case 0xC4B956: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:61 LDA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4B955.
    case 0xC4B957: cpu.execute_instruction<0x06>(0x000087, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:62 STA [@VIRTUAL0A]
    case 0xC4B958: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:62 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC4B957.
    case 0xC4B959: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:63 LDA @LOCAL02
    case 0xC4B95A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:64 CLC
    case 0xC4B95C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:65 ADC #64
    case 0xC4B95D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:65 ADC #64
    // Overlapping static entry reached from 0xC4B95D.
    case 0xC4B95F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:66 STA @LOCAL02
    case 0xC4B960: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:67 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC4B962: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:67 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC4B964: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:67 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC4B966: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:67 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC4B968: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:68 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B96A: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:68 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B96C: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:68 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B96E: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:68 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B970: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:69 CLC
    case 0xC4B972: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:70 ADC @VIRTUAL0A
    case 0xC4B973: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:71 STA @VIRTUAL0A
    case 0xC4B975: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:72 LDA @LOCAL02
    case 0xC4B977: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:73 STA @VIRTUAL02
    case 0xC4B979: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:74 LDA #2
    case 0xC4B97B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:74 LDA #2
    // Overlapping static entry reached from 0xC4B97B.
    case 0xC4B97D: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:75 SEC
    case 0xC4B97E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:76 SBC @VIRTUAL02
    case 0xC4B97F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:77 EOR #$FFFF
    case 0xC4B981: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:77 EOR #$FFFF
    // Overlapping static entry reached from 0xC4B981.
    case 0xC4B983: cpu.execute_instruction<0xFF>(0x65181A, 4); return true;
    // src/unknown/C4/C4B8E2-jp.asm:78 INC
    case 0xC4B984: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:79 CLC
    case 0xC4B985: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:80 ADC @VIRTUAL06
    case 0xC4B986: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:80 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC4B983.
    case 0xC4B987: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:81 STA @VIRTUAL06
    case 0xC4B988: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:81 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC4B987.
    case 0xC4B989: cpu.execute_instruction<0x06>(0x0000A7, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:82 LDA [@VIRTUAL06]
    case 0xC4B98A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:82 LDA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4B989.
    case 0xC4B98B: cpu.execute_instruction<0x06>(0x000087, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:83 STA [@VIRTUAL0A]
    case 0xC4B98C: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:83 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC4B98B.
    case 0xC4B98D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:84 INC @VIRTUAL04
    case 0xC4B98E: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:85 LDA #4
    case 0xC4B990: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:85 LDA #4
    // Overlapping static entry reached from 0xC4B990.
    case 0xC4B992: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:86 STA @LOCAL02
    case 0xC4B993: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:87 STA @LOCAL00
    case 0xC4B995: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:88 LDY @VIRTUAL04
    case 0xC4B997: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:89 TAX
    case 0xC4B999: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:90 LDA #64
    case 0xC4B99A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:90 LDA #64
    // Overlapping static entry reached from 0xC4B99A.
    case 0xC4B99C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:91 JSL UNKNOWN_C4B721
    case 0xC4B99D: cpu.execute_instruction<0x22>(0xC4B721, 4); return true;
    // src/unknown/C4/C4B8E2-jp.asm:92 STA @LOCAL07
    case 0xC4B9A1: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:93 STA @VIRTUAL02
    case 0xC4B9A3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:94 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4B9A5: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:94 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4B9A7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:94 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4B9A9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:94 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4B9AB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:95 LDA [@VIRTUAL06]
    case 0xC4B9AD: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:96 AND #$1C00
    case 0xC4B9AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001C00, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:96 AND #$1C00
    // Overlapping static entry reached from 0xC4B9AF.
    case 0xC4B9B1: cpu.execute_instruction<0x1C>(0x000205, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:97 ORA @VIRTUAL02
    case 0xC4B9B2: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:98 STA [@VIRTUAL06]
    case 0xC4B9B4: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:99 LDA #64
    case 0xC4B9B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:99 LDA #64
    // Overlapping static entry reached from 0xC4B9B6.
    case 0xC4B9B8: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:100 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B9B9: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:100 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B9BB: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:100 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B9BD: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:100 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B9BF: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:101 CLC
    case 0xC4B9C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:102 ADC @VIRTUAL0A
    case 0xC4B9C2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:103 STA @VIRTUAL0A
    case 0xC4B9C4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:104 LDA @LOCAL07
    case 0xC4B9C6: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:105 CLC
    case 0xC4B9C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:106 ADC @VIRTUAL04
    case 0xC4B9C9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:107 STA @VIRTUAL02
    case 0xC4B9CB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:108 LDA [@VIRTUAL0A]
    case 0xC4B9CD: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:109 AND #$1C00
    case 0xC4B9CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001C00, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:109 AND #$1C00
    // Overlapping static entry reached from 0xC4B9CF.
    case 0xC4B9D1: cpu.execute_instruction<0x1C>(0x000205, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:110 ORA @VIRTUAL02
    case 0xC4B9D2: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:111 STA [@VIRTUAL0A]
    case 0xC4B9D4: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:112 INC @VIRTUAL06
    case 0xC4B9D6: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:113 INC @VIRTUAL06
    case 0xC4B9D8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:114 LDA #0
    case 0xC4B9DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:114 LDA #0
    // Overlapping static entry reached from 0xC4B9DA.
    case 0xC4B9DC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:115 STA @VIRTUAL02
    case 0xC4B9DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:116 STA @LOCAL01
    case 0xC4B9DF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:117 BRA @UNKNOWN3
    case 0xC4B9E1: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:119 LDA @LOCAL02
    case 0xC4B9E3: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:120 STA @LOCAL00
    case 0xC4B9E5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:121 LDY @VIRTUAL04
    case 0xC4B9E7: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:122 LDX #8
    case 0xC4B9E9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:122 LDX #8
    // Overlapping static entry reached from 0xC4B9E9.
    case 0xC4B9EB: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:123 LDA @LOCAL03
    case 0xC4B9EC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:124 JSL UNKNOWN_C4B721
    case 0xC4B9EE: cpu.execute_instruction<0x22>(0xC4B721, 4); return true;
    // src/unknown/C4/C4B8E2-jp.asm:125 TAX
    case 0xC4B9F2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:126 LDA [@VIRTUAL06]
    case 0xC4B9F3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:127 STA @LOCAL07
    case 0xC4B9F5: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:128 AND #$03FF
    case 0xC4B9F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:128 AND #$03FF
    // Overlapping static entry reached from 0xC4B9F7.
    case 0xC4B9F9: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:129 STA @LOCAL03
    case 0xC4B9FA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:129 STA @LOCAL03
    // Overlapping static entry reached from 0xC4B9F9.
    case 0xC4B9FB: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:130 STX @VIRTUAL02
    case 0xC4B9FC: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:130 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4B9FB.
    case 0xC4B9FD: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:131 LDA @LOCAL07
    case 0xC4B9FE: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:132 AND #$1C00
    case 0xC4BA00: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001C00, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:132 AND #$1C00
    // Overlapping static entry reached from 0xC4BA00.
    case 0xC4BA02: cpu.execute_instruction<0x1C>(0x000205, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:133 ORA @VIRTUAL02
    case 0xC4BA03: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:134 STA [@VIRTUAL06]
    case 0xC4BA05: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:135 LDA #64
    case 0xC4BA07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:135 LDA #64
    // Overlapping static entry reached from 0xC4BA07.
    case 0xC4BA09: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:136 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC4BA0A: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:136 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC4BA0C: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:136 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC4BA0E: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:136 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC4BA10: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:137 CLC
    case 0xC4BA12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:138 ADC @VIRTUAL0A
    case 0xC4BA13: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:139 STA @VIRTUAL0A
    case 0xC4BA15: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:140 TXA
    case 0xC4BA17: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:141 CLC
    case 0xC4BA18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:142 ADC @VIRTUAL04
    case 0xC4BA19: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:143 STA @VIRTUAL02
    case 0xC4BA1B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:144 LDA [@VIRTUAL0A]
    case 0xC4BA1D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:145 AND #$1C00
    case 0xC4BA1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001C00, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:145 AND #$1C00
    // Overlapping static entry reached from 0xC4BA1F.
    case 0xC4BA21: cpu.execute_instruction<0x1C>(0x000205, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:146 ORA @VIRTUAL02
    case 0xC4BA22: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:147 STA [@VIRTUAL0A]
    case 0xC4BA24: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:148 INC @VIRTUAL06
    case 0xC4BA26: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:149 INC @VIRTUAL06
    case 0xC4BA28: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:150 LDA @LOCAL01
    case 0xC4BA2A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:151 STA @VIRTUAL02
    case 0xC4BA2C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:152 INC @VIRTUAL02
    case 0xC4BA2E: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:153 LDA @VIRTUAL02
    case 0xC4BA30: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:154 STA @LOCAL01
    case 0xC4BA32: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:156 LDA @VIRTUAL04
    case 0xC4BA34: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:157 DEC
    case 0xC4BA36: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:158 PHA
    case 0xC4BA37: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:159 LDA @VIRTUAL02
    case 0xC4BA38: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:160 PLY
    case 0xC4BA3A: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:161 STY @VIRTUAL02
    case 0xC4BA3B: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:162 CMP @VIRTUAL02
    case 0xC4BA3D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:163 BCC @UNKNOWN2
    case 0xC4BA3F: cpu.execute_instruction<0x90>(0x0000A2, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:164 BRA @UNKNOWN6
    case 0xC4BA41: cpu.execute_instruction<0x80>(0x000063, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:166 STZ @LOCAL02
    case 0xC4BA43: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:167 LDA #0
    case 0xC4BA45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:167 LDA #0
    // Overlapping static entry reached from 0xC4BA45.
    case 0xC4BA47: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:168 STA @VIRTUAL02
    case 0xC4BA48: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:169 STA @LOCAL01
    case 0xC4BA4A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:170 BRA @UNKNOWN5
    case 0xC4BA4C: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:172 LDA @LOCAL02
    case 0xC4BA4E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:173 STA @LOCAL00
    case 0xC4BA50: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:174 LDY @VIRTUAL04
    case 0xC4BA52: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:175 LDX #8
    case 0xC4BA54: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:175 LDX #8
    // Overlapping static entry reached from 0xC4BA54.
    case 0xC4BA56: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:176 LDA @LOCAL03
    case 0xC4BA57: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:177 JSL UNKNOWN_C4B721
    case 0xC4BA59: cpu.execute_instruction<0x22>(0xC4B721, 4); return true;
    // src/unknown/C4/C4B8E2-jp.asm:178 DEC
    case 0xC4BA5D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:179 STA @LOCAL07
    case 0xC4BA5E: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:180 STA @VIRTUAL02
    case 0xC4BA60: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:181 LDA [@VIRTUAL06]
    case 0xC4BA62: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:182 AND #$1C00
    case 0xC4BA64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001C00, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:182 AND #$1C00
    // Overlapping static entry reached from 0xC4BA64.
    case 0xC4BA66: cpu.execute_instruction<0x1C>(0x000205, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:183 ORA @VIRTUAL02
    case 0xC4BA67: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:184 STA [@VIRTUAL06]
    case 0xC4BA69: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:185 LDA #64
    case 0xC4BA6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:185 LDA #64
    // Overlapping static entry reached from 0xC4BA6B.
    case 0xC4BA6D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:186 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4BA6E: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:186 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4BA70: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:186 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4BA72: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:186 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4BA74: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:187 CLC
    case 0xC4BA76: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:188 ADC @VIRTUAL0A
    case 0xC4BA77: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:189 STA @VIRTUAL0A
    case 0xC4BA79: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:190 LDA @LOCAL07
    case 0xC4BA7B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:191 CLC
    case 0xC4BA7D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:192 ADC @VIRTUAL04
    case 0xC4BA7E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:193 STA @VIRTUAL02
    case 0xC4BA80: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:194 LDA [@VIRTUAL0A]
    case 0xC4BA82: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:195 AND #$1C00
    case 0xC4BA84: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001C00, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:195 AND #$1C00
    // Overlapping static entry reached from 0xC4BA84.
    case 0xC4BA86: cpu.execute_instruction<0x1C>(0x000205, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:196 ORA @VIRTUAL02
    case 0xC4BA87: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:197 STA [@VIRTUAL0A]
    case 0xC4BA89: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:198 INC @VIRTUAL06
    case 0xC4BA8B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:199 INC @VIRTUAL06
    case 0xC4BA8D: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:200 LDA [@VIRTUAL06]
    case 0xC4BA8F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:201 AND #$03FF
    case 0xC4BA91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:201 AND #$03FF
    // Overlapping static entry reached from 0xC4BA91.
    case 0xC4BA93: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:202 STA @LOCAL03
    case 0xC4BA94: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:202 STA @LOCAL03
    // Overlapping static entry reached from 0xC4BA93.
    case 0xC4BA95: cpu.execute_instruction<0x16>(0x0000A5, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:203 LDA @LOCAL01
    case 0xC4BA96: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:203 LDA @LOCAL01
    // Overlapping static entry reached from 0xC4BA95.
    case 0xC4BA97: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:204 STA @VIRTUAL02
    case 0xC4BA98: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:204 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4BA97.
    case 0xC4BA99: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:205 INC @VIRTUAL02
    case 0xC4BA9A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:206 LDA @VIRTUAL02
    case 0xC4BA9C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:207 STA @LOCAL01
    case 0xC4BA9E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:209 LDA @VIRTUAL02
    case 0xC4BAA0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:210 CMP @VIRTUAL04
    case 0xC4BAA2: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:211 BCC @UNKNOWN4
    case 0xC4BAA4: cpu.execute_instruction<0x90>(0x0000A8, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:213 LDA @VIRTUAL04
    case 0xC4BAA6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:214 INC
    case 0xC4BAA8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:215 CLC
    case 0xC4BAA9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:216 ADC UNKNOWN_7EB4CF
    case 0xC4BAAA: cpu.execute_instruction<0x6D>(0x00B6A2, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:217 STA UNKNOWN_7EB4CF
    case 0xC4BAAD: cpu.execute_instruction<0x8D>(0x00B6A2, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:218 LDA @VIRTUAL04
    case 0xC4BAB0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:219 ASL
    case 0xC4BAB2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:220 ASL
    case 0xC4BAB3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:221 ASL
    case 0xC4BAB4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:222 ASL
    case 0xC4BAB5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:223 STA @VIRTUAL02
    case 0xC4BAB6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:224 LOADPTR BUFFER + $2000, @VIRTUAL06
    case 0xC4BAB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:224 LOADPTR BUFFER + $2000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BAB8.
    case 0xC4BABA: cpu.execute_instruction<0x20>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:224 LOADPTR BUFFER + $2000, @VIRTUAL06
    case 0xC4BABB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:224 LOADPTR BUFFER + $2000, @VIRTUAL06
    case 0xC4BABD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:224 LOADPTR BUFFER + $2000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BABD.
    case 0xC4BABF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:224 LOADPTR BUFFER + $2000, @VIRTUAL06
    case 0xC4BAC0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:225 LDA @LOCAL06
    case 0xC4BAC2: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:226 ASL
    case 0xC4BAC4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:227 ASL
    case 0xC4BAC5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:228 ASL
    case 0xC4BAC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:229 ASL
    case 0xC4BAC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:230 STORE_INT1632 @VIRTUAL0A
    case 0xC4BAC8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:230 STORE_INT1632 @VIRTUAL0A
    case 0xC4BACA: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:231 CLC
    case 0xC4BACC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:232 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4BACD: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:232 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4BACF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:232 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4BAD1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:232 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4BAD3: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:232 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4BAD5: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:232 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4BAD7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:233 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4BAD9: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:233 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4BADB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:233 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4BADD: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:233 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4BADF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:234 LDA @LOCAL06
    case 0xC4BAE1: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:235 ASL
    case 0xC4BAE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:236 ASL
    case 0xC4BAE4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:237 ASL
    case 0xC4BAE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:238 CLC
    case 0xC4BAE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:239 ADC #$7000
    case 0xC4BAE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007000, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:239 ADC #$7000
    // Overlapping static entry reached from 0xC4BAE7.
    case 0xC4BAE9: cpu.execute_instruction<0x70>(0x0000A8, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:240 TAY
    case 0xC4BAEA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:241 LDX @VIRTUAL02
    case 0xC4BAEB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:242 SEP #%00100000
    case 0xC4BAED: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:243 LDA #0
    case 0xC4BAEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:244 JSL PREPARE_VRAM_COPY
    case 0xC4BAF1: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C4B8E2-jp.asm:244 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BAEF.
    case 0xC4BAF2: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:244 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BAF2.
    case 0xC4BAF4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0004A5, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:245 LDA @VIRTUAL04
    case 0xC4BAF5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:245 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC4BAF4.
    case 0xC4BAF6: cpu.execute_instruction<0x04>(0x000018, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:246 CLC
    case 0xC4BAF7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:247 ADC @LOCAL06
    case 0xC4BAF8: cpu.execute_instruction<0x65>(0x00001C, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:248 STA @LOCAL06
    case 0xC4BAFA: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:249 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4BAFC: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:249 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4BAFE: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:249 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4BB00: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:249 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4BB02: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:250 ASL
    case 0xC4BB04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:251 ASL
    case 0xC4BB05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:252 ASL
    case 0xC4BB06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:253 ASL
    case 0xC4BB07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:254 STORE_INT1632 @VIRTUAL06
    case 0xC4BB08: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:254 STORE_INT1632 @VIRTUAL06
    case 0xC4BB0A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:255 CLC
    case 0xC4BB0C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:256 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BB0D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:256 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BB0F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:256 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BB11: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:256 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BB13: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:256 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BB15: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:256 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BB17: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:257 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BB19: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:257 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BB1B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:257 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BB1D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:257 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BB1F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:258 LDA @LOCAL06
    case 0xC4BB21: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:259 ASL
    case 0xC4BB23: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:260 ASL
    case 0xC4BB24: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:261 ASL
    case 0xC4BB25: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:262 CLC
    case 0xC4BB26: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:264 ADC #$7000
    case 0xC4BB27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007000, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:264 ADC #$7000
    // Overlapping static entry reached from 0xC4BB27.
    case 0xC4BB29: cpu.execute_instruction<0x70>(0x0000A8, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:265 TAY
    case 0xC4BB2A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B8E2-jp.asm:266 LDX @VIRTUAL02
    case 0xC4BB2B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:267 SEP #%00100000
    case 0xC4BB2D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:268 LDA #0
    case 0xC4BB2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C4B8E2-jp.asm:269 JSL PREPARE_VRAM_COPY
    case 0xC4BB31: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C4B8E2-jp.asm:269 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BB2F.
    case 0xC4BB32: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C4B8E2-jp.asm:269 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BB32.
    case 0xC4BB34: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:270 END_C_FUNCTION
    case 0xC4BB35: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B8E2-jp.asm:270 END_C_FUNCTION
    case 0xC4BB36: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B923.asm (unresolved).
bool execute_unresolved_c4_c4b923_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B923.asm:3 BEGIN_C_FUNCTION
    case 0xC48D68: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    case 0xC48D6A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    case 0xC48D6B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    case 0xC48D6C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    case 0xC48D6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC48D6D.
    case 0xC48D6F: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    case 0xC48D70: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    case 0xC48D71: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:13 STX @LOCAL04
    case 0xC48D72: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C4/C4B923.asm:13 STX @LOCAL04
    // Overlapping static entry reached from 0xC48D6F.
    case 0xC48D73: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // src/unknown/C4/C4B923.asm:14 STA @VIRTUAL04
    case 0xC48D74: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4B923.asm:14 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC48D73.
    case 0xC48D75: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B923.asm:15 LDA #0
    case 0xC48D76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:15 LDA #0
    // Overlapping static entry reached from 0xC48D75.
    case 0xC48D77: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4B923.asm:15 LDA #0
    // Overlapping static entry reached from 0xC48D76.
    case 0xC48D78: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B923.asm:16 STA @LOCAL03
    case 0xC48D79: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:17 BRA @UNKNOWN2
    case 0xC48D7B: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B923.asm:19 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48D7D: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B923.asm:19 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48D80: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B923.asm:19 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48D82: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B923.asm:19 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48D85: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B923.asm:20 LDA @LOCAL03
    case 0xC48D87: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:21 CLC
    case 0xC48D89: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:22 ADC @VIRTUAL06
    case 0xC48D8A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:23 STA @VIRTUAL06
    case 0xC48D8C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC48D8E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:25 LDA [@VIRTUAL06]
    case 0xC48D90: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:26 CMP #<-3
    case 0xC48D92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00F0FD, 3); return true;
    // src/unknown/C4/C4B923.asm:27 BEQ @UNKNOWN1
    case 0xC48D94: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C4B923.asm:27 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC48D92.
    case 0xC48D95: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B923.asm:28 LDA #<-2
    case 0xC48D96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0087FE, 3); return true;
    // src/unknown/C4/C4B923.asm:28 LDA #<-2
    // Overlapping static entry reached from 0xC48D95.
    case 0xC48D97: cpu.execute_instruction<0xFE>(0x000687, 3); return true;
    // src/unknown/C4/C4B923.asm:29 STA [@VIRTUAL06]
    case 0xC48D98: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:29 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC48D96.
    case 0xC48D99: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4B923.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC48D9A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:31 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC48D99.
    case 0xC48D9B: cpu.execute_instruction<0x20>(0x0014A5, 3); return true;
    // src/unknown/C4/C4B923.asm:32 LDA @LOCAL03
    case 0xC48D9C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:33 INC
    case 0xC48D9E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:34 STA @LOCAL03
    case 0xC48D9F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:36 CMP PATH_MATRIX_SIZE
    case 0xC48DA1: cpu.execute_instruction<0xCD>(0x00B5DB, 3); return true;
    // src/unknown/C4/C4B923.asm:37 BCC @UNKNOWN0
    case 0xC48DA4: cpu.execute_instruction<0x90>(0x0000D7, 2); return true;
    // src/unknown/C4/C4B923.asm:38 LDA #0
    case 0xC48DA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:38 LDA #0
    // Overlapping static entry reached from 0xC48DA6.
    case 0xC48DA8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B923.asm:39 STA @VIRTUAL02
    case 0xC48DA9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:40 STA @LOCAL02
    case 0xC48DAB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B923.asm:41 JMP @UNKNOWN27
    case 0xC48DAD: cpu.execute_instruction<0x4C>(0x008F2E, 3); return true;
    // src/unknown/C4/C4B923.asm:43 LDA @VIRTUAL02
    case 0xC48DB0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:44 ASL
    case 0xC48DB2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:45 TAY
    case 0xC48DB3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:46 LDA (@LOCAL04),Y
    case 0xC48DB4: cpu.execute_instruction<0xB1>(0x000016, 2); return true;
    // src/unknown/C4/C4B923.asm:47 TAY
    case 0xC48DB6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:48 STY @LOCAL01
    case 0xC48DB7: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C4B923.asm:49 LDA __BSS_START__,Y
    case 0xC48DB9: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:50 BNE @UNKNOWN5
    case 0xC48DBC: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B923.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48DBE: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B923.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48DC1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B923.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48DC3: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B923.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48DC6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B923.asm:52 LDA a:pathfinder::origin + pathfinder_coords::y_coord,Y
    case 0xC48DC8: cpu.execute_instruction<0xB9>(0x000006, 3); return true;
    // src/unknown/C4/C4B923.asm:53 LDY PATH_MATRIX_COLUMNS
    case 0xC48DCB: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B923.asm:54 JSL MULT16
    case 0xC48DCE: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4B923.asm:55 LDY @LOCAL01
    case 0xC48DD2: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C4B923.asm:56 CLC
    case 0xC48DD4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:57 ADC a:pathfinder::origin + pathfinder_coords::x_coord,Y
    case 0xC48DD5: cpu.execute_instruction<0x79>(0x000008, 3); return true;
    // src/unknown/C4/C4B923.asm:58 CLC
    case 0xC48DD8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:59 ADC @VIRTUAL06
    case 0xC48DD9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:60 STA @VIRTUAL06
    case 0xC48DDB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC48DDD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:62 LDA [@VIRTUAL06]
    case 0xC48DDF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:63 CMP #<-3
    case 0xC48DE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00D0FD, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4B923.asm:64 BEQL @UNKNOWN26
    case 0xC48DE3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4B923.asm:64 BEQL @UNKNOWN26
    // Overlapping static entry reached from 0xC48DE1.
    case 0xC48DE4: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4B923.asm:64 BEQL @UNKNOWN26
    case 0xC48DE5: cpu.execute_instruction<0x4C>(0x008F22, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4B923.asm:64 BEQL @UNKNOWN26
    // Overlapping static entry reached from 0xC48DE4.
    case 0xC48DE6: cpu.execute_instruction<0x22>(0xFFA98F, 4); return true;
    // src/unknown/C4/C4B923.asm:65 LDA #<-1
    case 0xC48DE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C4B923.asm:66 STA [@VIRTUAL06]
    case 0xC48DEA: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:66 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC48DE8.
    case 0xC48DEB: cpu.execute_instruction<0x06>(0x00004C, 2); return true;
    // src/unknown/C4/C4B923.asm:67 JMP @UNKNOWN26
    case 0xC48DEC: cpu.execute_instruction<0x4C>(0x008F22, 3); return true;
    // src/unknown/C4/C4B923.asm:67 JMP @UNKNOWN26
    // Overlapping static entry reached from 0xC48DEB.
    case 0xC48DED: cpu.execute_instruction<0x22>(0x00A98F, 4); return true;
    // src/unknown/C4/C4B923.asm:70 LDA #0
    case 0xC48DEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:70 LDA #0
    // Overlapping static entry reached from 0xC48DEF.
    case 0xC48DF1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B923.asm:71 STA @LOCAL00
    case 0xC48DF2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:72 BRA @UNKNOWN10
    case 0xC48DF4: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C4/C4B923.asm:74 LDX #0
    case 0xC48DF6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:74 LDX #0
    // Overlapping static entry reached from 0xC48DF6.
    case 0xC48DF8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4B923.asm:75 BRA @UNKNOWN9
    case 0xC48DF9: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C4/C4B923.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC48DFB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B923.asm:78 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48DFD: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B923.asm:78 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48E00: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B923.asm:78 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48E02: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B923.asm:78 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48E05: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B923.asm:79 STX @VIRTUAL02
    case 0xC48E07: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:80 LDY PATH_MATRIX_COLUMNS
    case 0xC48E09: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B923.asm:81 LDA @LOCAL00
    case 0xC48E0C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:82 JSL MULT16
    case 0xC48E0E: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4B923.asm:83 CLC
    case 0xC48E12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:84 ADC @VIRTUAL02
    case 0xC48E13: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:85 CLC
    case 0xC48E15: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:86 ADC @VIRTUAL06
    case 0xC48E16: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:87 STA @VIRTUAL06
    case 0xC48E18: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:88 SEP #PROC_FLAGS::ACCUM8
    case 0xC48E1A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:89 LDA [@VIRTUAL06]
    case 0xC48E1C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:90 CMP #<-3
    case 0xC48E1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00F0FD, 3); return true;
    // src/unknown/C4/C4B923.asm:91 BEQ @UNKNOWN8
    case 0xC48E20: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C4B923.asm:91 BEQ @UNKNOWN8
    // Overlapping static entry reached from 0xC48E1E.
    case 0xC48E21: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B923.asm:92 LDA #<-1
    case 0xC48E22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C4B923.asm:92 LDA #<-1
    // Overlapping static entry reached from 0xC48E21.
    case 0xC48E23: cpu.execute_instruction<0xFF>(0xE80687, 4); return true;
    // src/unknown/C4/C4B923.asm:93 STA [@VIRTUAL06]
    case 0xC48E24: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:93 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC48E22.
    case 0xC48E25: cpu.execute_instruction<0x06>(0x0000E8, 2); return true;
    // src/unknown/C4/C4B923.asm:95 INX
    case 0xC48E26: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:97 CPX PATH_MATRIX_COLUMNS
    case 0xC48E27: cpu.execute_instruction<0xEC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B923.asm:98 BCC @UNKNOWN7
    case 0xC48E2A: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/unknown/C4/C4B923.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC48E2C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:100 LDA @LOCAL00
    case 0xC48E2E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:101 INC
    case 0xC48E30: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:102 STA @LOCAL00
    case 0xC48E31: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:104 CMP PATH_MATRIX_BORDER
    case 0xC48E33: cpu.execute_instruction<0xCD>(0x00B5D9, 3); return true;
    // src/unknown/C4/C4B923.asm:105 BCC @UNKNOWN6
    case 0xC48E36: cpu.execute_instruction<0x90>(0x0000BE, 2); return true;
    // src/unknown/C4/C4B923.asm:106 LDA PATH_MATRIX_ROWS
    case 0xC48E38: cpu.execute_instruction<0xAD>(0x00B5D5, 3); return true;
    // src/unknown/C4/C4B923.asm:107 SEC
    case 0xC48E3B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:108 SBC PATH_MATRIX_BORDER
    case 0xC48E3C: cpu.execute_instruction<0xED>(0x00B5D9, 3); return true;
    // src/unknown/C4/C4B923.asm:109 STA @LOCAL00
    case 0xC48E3F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:110 BRA @UNKNOWN15
    case 0xC48E41: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C4/C4B923.asm:112 LDX #0
    case 0xC48E43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:112 LDX #0
    // Overlapping static entry reached from 0xC48E43.
    case 0xC48E45: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4B923.asm:113 BRA @UNKNOWN14
    case 0xC48E46: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C4/C4B923.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC48E48: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B923.asm:116 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48E4A: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B923.asm:116 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48E4D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B923.asm:116 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48E4F: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B923.asm:116 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48E52: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B923.asm:117 STX @VIRTUAL02
    case 0xC48E54: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:118 LDY PATH_MATRIX_COLUMNS
    case 0xC48E56: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B923.asm:119 LDA @LOCAL00
    case 0xC48E59: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:120 JSL MULT16
    case 0xC48E5B: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4B923.asm:121 CLC
    case 0xC48E5F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:122 ADC @VIRTUAL02
    case 0xC48E60: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:123 CLC
    case 0xC48E62: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:124 ADC @VIRTUAL06
    case 0xC48E63: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:125 STA @VIRTUAL06
    case 0xC48E65: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:126 SEP #PROC_FLAGS::ACCUM8
    case 0xC48E67: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:127 LDA [@VIRTUAL06]
    case 0xC48E69: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:128 CMP #<-3
    case 0xC48E6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00F0FD, 3); return true;
    // src/unknown/C4/C4B923.asm:129 BEQ @UNKNOWN13
    case 0xC48E6D: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C4B923.asm:129 BEQ @UNKNOWN13
    // Overlapping static entry reached from 0xC48E6B.
    case 0xC48E6E: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B923.asm:130 LDA #<-1
    case 0xC48E6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C4B923.asm:130 LDA #<-1
    // Overlapping static entry reached from 0xC48E6E.
    case 0xC48E70: cpu.execute_instruction<0xFF>(0xE80687, 4); return true;
    // src/unknown/C4/C4B923.asm:131 STA [@VIRTUAL06]
    case 0xC48E71: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:131 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC48E6F.
    case 0xC48E72: cpu.execute_instruction<0x06>(0x0000E8, 2); return true;
    // src/unknown/C4/C4B923.asm:133 INX
    case 0xC48E73: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:135 CPX PATH_MATRIX_COLUMNS
    case 0xC48E74: cpu.execute_instruction<0xEC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B923.asm:136 BCC @UNKNOWN12
    case 0xC48E77: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/unknown/C4/C4B923.asm:137 REP #PROC_FLAGS::ACCUM8
    case 0xC48E79: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:138 LDA @LOCAL00
    case 0xC48E7B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:139 INC
    case 0xC48E7D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:140 STA @LOCAL00
    case 0xC48E7E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:142 CMP PATH_MATRIX_ROWS
    case 0xC48E80: cpu.execute_instruction<0xCD>(0x00B5D5, 3); return true;
    // src/unknown/C4/C4B923.asm:143 BCC @UNKNOWN11
    case 0xC48E83: cpu.execute_instruction<0x90>(0x0000BE, 2); return true;
    // src/unknown/C4/C4B923.asm:144 LDX #0
    case 0xC48E85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:144 LDX #0
    // Overlapping static entry reached from 0xC48E85.
    case 0xC48E87: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4B923.asm:145 BRA @UNKNOWN20
    case 0xC48E88: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C4/C4B923.asm:147 LDA #0
    case 0xC48E8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:147 LDA #0
    // Overlapping static entry reached from 0xC48E8A.
    case 0xC48E8C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B923.asm:148 STA @LOCAL03
    case 0xC48E8D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:149 BRA @UNKNOWN19
    case 0xC48E8F: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B923.asm:151 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48E91: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B923.asm:151 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48E94: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B923.asm:151 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48E96: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B923.asm:151 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48E99: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B923.asm:152 STX @VIRTUAL02
    case 0xC48E9B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:153 LDY PATH_MATRIX_COLUMNS
    case 0xC48E9D: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B923.asm:154 LDA @LOCAL03
    case 0xC48EA0: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:155 JSL MULT16
    case 0xC48EA2: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4B923.asm:156 CLC
    case 0xC48EA6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:157 ADC @VIRTUAL02
    case 0xC48EA7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:158 CLC
    case 0xC48EA9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:159 ADC @VIRTUAL06
    case 0xC48EAA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:160 STA @VIRTUAL06
    case 0xC48EAC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:161 SEP #PROC_FLAGS::ACCUM8
    case 0xC48EAE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:162 LDA [@VIRTUAL06]
    case 0xC48EB0: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:163 CMP #<-3
    case 0xC48EB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00F0FD, 3); return true;
    // src/unknown/C4/C4B923.asm:164 BEQ @UNKNOWN18
    case 0xC48EB4: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C4B923.asm:164 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xC48EB2.
    case 0xC48EB5: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B923.asm:165 LDA #<-1
    case 0xC48EB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C4B923.asm:165 LDA #<-1
    // Overlapping static entry reached from 0xC48EB5.
    case 0xC48EB7: cpu.execute_instruction<0xFF>(0xC20687, 4); return true;
    // src/unknown/C4/C4B923.asm:166 STA [@VIRTUAL06]
    case 0xC48EB8: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:166 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC48EB6.
    case 0xC48EB9: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4B923.asm:168 REP #PROC_FLAGS::ACCUM8
    case 0xC48EBA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:168 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC48EB9.
    case 0xC48EBB: cpu.execute_instruction<0x20>(0x0014A5, 3); return true;
    // src/unknown/C4/C4B923.asm:169 LDA @LOCAL03
    case 0xC48EBC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:170 INC
    case 0xC48EBE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:171 STA @LOCAL03
    case 0xC48EBF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:173 CMP PATH_MATRIX_ROWS
    case 0xC48EC1: cpu.execute_instruction<0xCD>(0x00B5D5, 3); return true;
    // src/unknown/C4/C4B923.asm:174 BCC @UNKNOWN17
    case 0xC48EC4: cpu.execute_instruction<0x90>(0x0000CB, 2); return true;
    // src/unknown/C4/C4B923.asm:175 INX
    case 0xC48EC6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:177 CPX PATH_MATRIX_BORDER
    case 0xC48EC7: cpu.execute_instruction<0xEC>(0x00B5D9, 3); return true;
    // src/unknown/C4/C4B923.asm:178 BCC @UNKNOWN16
    case 0xC48ECA: cpu.execute_instruction<0x90>(0x0000BE, 2); return true;
    // src/unknown/C4/C4B923.asm:179 LDA PATH_MATRIX_COLUMNS
    case 0xC48ECC: cpu.execute_instruction<0xAD>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B923.asm:180 SEC
    case 0xC48ECF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:181 SBC PATH_MATRIX_BORDER
    case 0xC48ED0: cpu.execute_instruction<0xED>(0x00B5D9, 3); return true;
    // src/unknown/C4/C4B923.asm:182 TAX
    case 0xC48ED3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:183 BRA @UNKNOWN25
    case 0xC48ED4: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C4/C4B923.asm:185 LDA #0
    case 0xC48ED6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:185 LDA #0
    // Overlapping static entry reached from 0xC48ED6.
    case 0xC48ED8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B923.asm:186 STA @LOCAL03
    case 0xC48ED9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:187 BRA @UNKNOWN24
    case 0xC48EDB: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B923.asm:189 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48EDD: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B923.asm:189 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48EE0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B923.asm:189 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48EE2: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B923.asm:189 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48EE5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B923.asm:190 STX @VIRTUAL02
    case 0xC48EE7: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:191 LDY PATH_MATRIX_COLUMNS
    case 0xC48EE9: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B923.asm:192 LDA @LOCAL03
    case 0xC48EEC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:193 JSL MULT16
    case 0xC48EEE: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4B923.asm:194 CLC
    case 0xC48EF2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:195 ADC @VIRTUAL02
    case 0xC48EF3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:196 CLC
    case 0xC48EF5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:197 ADC @VIRTUAL06
    case 0xC48EF6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:198 STA @VIRTUAL06
    case 0xC48EF8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:199 SEP #PROC_FLAGS::ACCUM8
    case 0xC48EFA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:200 LDA [@VIRTUAL06]
    case 0xC48EFC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:201 CMP #<-3
    case 0xC48EFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00F0FD, 3); return true;
    // src/unknown/C4/C4B923.asm:202 BEQ @UNKNOWN23
    case 0xC48F00: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C4B923.asm:202 BEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC48EFE.
    case 0xC48F01: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B923.asm:203 LDA #<-1
    case 0xC48F02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C4B923.asm:203 LDA #<-1
    // Overlapping static entry reached from 0xC48F01.
    case 0xC48F03: cpu.execute_instruction<0xFF>(0xC20687, 4); return true;
    // src/unknown/C4/C4B923.asm:204 STA [@VIRTUAL06]
    case 0xC48F04: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:204 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC48F02.
    case 0xC48F05: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4B923.asm:206 REP #PROC_FLAGS::ACCUM8
    case 0xC48F06: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:206 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC48F05.
    case 0xC48F07: cpu.execute_instruction<0x20>(0x0014A5, 3); return true;
    // src/unknown/C4/C4B923.asm:207 LDA @LOCAL03
    case 0xC48F08: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:208 INC
    case 0xC48F0A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:209 STA @LOCAL03
    case 0xC48F0B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:211 CMP PATH_MATRIX_ROWS
    case 0xC48F0D: cpu.execute_instruction<0xCD>(0x00B5D5, 3); return true;
    // src/unknown/C4/C4B923.asm:212 BCC @UNKNOWN22
    case 0xC48F10: cpu.execute_instruction<0x90>(0x0000CB, 2); return true;
    // src/unknown/C4/C4B923.asm:213 INX
    case 0xC48F12: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:215 CPX PATH_MATRIX_COLUMNS
    case 0xC48F13: cpu.execute_instruction<0xEC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4B923.asm:216 BCC @UNKNOWN21
    case 0xC48F16: cpu.execute_instruction<0x90>(0x0000BE, 2); return true;
    // src/unknown/C4/C4B923.asm:217 LDY @LOCAL01
    case 0xC48F18: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C4B923.asm:218 TYX
    case 0xC48F1A: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:219 STZ a:pathfinder::origin + pathfinder_coords::y_coord,X
    case 0xC48F1B: cpu.execute_instruction<0x9E>(0x000006, 3); return true;
    // src/unknown/C4/C4B923.asm:220 TYX
    case 0xC48F1E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:221 STZ a:pathfinder::origin + pathfinder_coords::x_coord,X
    case 0xC48F1F: cpu.execute_instruction<0x9E>(0x000008, 3); return true;
    // src/unknown/C4/C4B923.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC48F22: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:224 LDA @LOCAL02
    case 0xC48F24: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4B923.asm:225 STA @VIRTUAL02
    case 0xC48F26: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:226 INC @VIRTUAL02
    case 0xC48F28: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:227 LDA @VIRTUAL02
    case 0xC48F2A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:228 STA @LOCAL02
    case 0xC48F2C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B923.asm:230 LDA @VIRTUAL02
    case 0xC48F2E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:231 CMP @VIRTUAL04
    case 0xC48F30: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4B923.asm:232 BCCL @UNKNOWN3
    case 0xC48F32: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4B923.asm:232 BCCL @UNKNOWN3
    case 0xC48F34: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4B923.asm:232 BCCL @UNKNOWN3
    case 0xC48F36: cpu.execute_instruction<0x4C>(0x008DB0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B923.asm:233 END_C_FUNCTION
    case 0xC48F39: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4B923.asm:233 END_C_FUNCTION
    case 0xC48F3A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4BAF6-jp.asm (unresolved).
bool execute_unresolved_c4_c4baf6_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC48F3B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:24 END_STACK_VARS
    case 0xC48F3D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:24 END_STACK_VARS
    case 0xC48F3E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:24 END_STACK_VARS
    case 0xC48F3F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:24 END_STACK_VARS
    case 0xC48F40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D9, 2); else cpu.execute_instruction<0x69>(0x00FFD9, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:24 END_STACK_VARS
    // Overlapping static entry reached from 0xC48F40.
    case 0xC48F42: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:24 END_STACK_VARS
    case 0xC48F43: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:24 END_STACK_VARS
    case 0xC48F44: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:25 STY @LOCAL0C
    case 0xC48F45: cpu.execute_instruction<0x84>(0x000025, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:25 STY @LOCAL0C
    // Overlapping static entry reached from 0xC48F42.
    case 0xC48F46: cpu.execute_instruction<0x25>(0x000086, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:26 STX @VIRTUAL04
    case 0xC48F47: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:26 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC48F46.
    case 0xC48F48: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:27 STA @VIRTUAL02
    case 0xC48F49: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:27 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC48F48.
    case 0xC48F4A: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:28 STA @LOCAL0B
    case 0xC48F4B: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:29 LDY @PARAM05
    case 0xC48F4D: cpu.execute_instruction<0xA4>(0x000039, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:30 STY @LOCAL0A
    case 0xC48F4F: cpu.execute_instruction<0x84>(0x000021, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:31 LDA @PARAM04
    case 0xC48F51: cpu.execute_instruction<0xA5>(0x000037, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:32 STA @LOCAL09
    case 0xC48F53: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:33 LDX @PARAM03
    case 0xC48F55: cpu.execute_instruction<0xA6>(0x000035, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:34 STX @LOCAL08
    case 0xC48F57: cpu.execute_instruction<0x86>(0x00001D, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:35 LDY #2
    case 0xC48F59: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:35 LDY #2
    // Overlapping static entry reached from 0xC48F59.
    case 0xC48F5B: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:36 LDA (@LOCAL0C),Y
    case 0xC48F5C: cpu.execute_instruction<0xB1>(0x000025, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:37 STA @LOCAL07
    case 0xC48F5E: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:38 LDY #4
    case 0xC48F60: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:38 LDY #4
    // Overlapping static entry reached from 0xC48F60.
    case 0xC48F62: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:39 LDA (@LOCAL0C),Y
    case 0xC48F63: cpu.execute_instruction<0xB1>(0x000025, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:40 STA @LOCAL06
    case 0xC48F65: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:41 STZ @LOCAL05
    case 0xC48F67: cpu.execute_instruction<0x64>(0x000017, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:42 STZ @LOCAL04
    case 0xC48F69: cpu.execute_instruction<0x64>(0x000015, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:43 LDX PATH_SEARCH_TEMP_START
    case 0xC48F6B: cpu.execute_instruction<0xAE>(0x00B5DD, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:44 STX PATH_SEARCH_TEMP_B
    case 0xC48F6E: cpu.execute_instruction<0x8E>(0x00B5E3, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:45 STX PATH_SEARCH_TEMP_A
    case 0xC48F71: cpu.execute_instruction<0x8E>(0x00B5E1, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:46 LDA #0
    case 0xC48F74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:46 LDA #0
    // Overlapping static entry reached from 0xC48F74.
    case 0xC48F76: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:47 STA @LOCAL03
    case 0xC48F77: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:48 BRA @UNKNOWN3
    case 0xC48F79: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:50 ASL
    case 0xC48F7B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:51 ASL
    case 0xC48F7C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:52 STA @VIRTUAL02
    case 0xC48F7D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:53 LDA @VIRTUAL04
    case 0xC48F7F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:54 CLC
    case 0xC48F81: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:55 ADC @VIRTUAL02
    case 0xC48F82: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:56 TAX
    case 0xC48F84: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:57 LDY PATH_MATRIX_COLUMNS
    case 0xC48F85: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:58 LDA __BSS_START__,X
    case 0xC48F88: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:59 JSL MULT16
    case 0xC48F8B: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4BAF6-jp.asm:60 CLC
    case 0xC48F8F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:61 ADC __BSS_START__+2,X
    case 0xC48F90: cpu.execute_instruction<0x7D>(0x000002, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:62 LDX PATH_SEARCH_TEMP_B
    case 0xC48F93: cpu.execute_instruction<0xAE>(0x00B5E3, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:63 STA __BSS_START__,X
    case 0xC48F96: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:64 LDA PATH_SEARCH_TEMP_B
    case 0xC48F99: cpu.execute_instruction<0xAD>(0x00B5E3, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:65 CMP PATH_SEARCH_TEMP_END
    case 0xC48F9C: cpu.execute_instruction<0xCD>(0x00B5DF, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:66 BNE @UNKNOWN1
    case 0xC48F9F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:67 LDX PATH_SEARCH_TEMP_START
    case 0xC48FA1: cpu.execute_instruction<0xAE>(0x00B5DD, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:68 BRA @UNKNOWN2
    case 0xC48FA4: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:70 LDX PATH_SEARCH_TEMP_B
    case 0xC48FA6: cpu.execute_instruction<0xAE>(0x00B5E3, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:71 INX
    case 0xC48FA9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:72 INX
    case 0xC48FAA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:74 STX PATH_SEARCH_TEMP_B
    case 0xC48FAB: cpu.execute_instruction<0x8E>(0x00B5E3, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:75 LDA @LOCAL03
    case 0xC48FAE: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:76 INC
    case 0xC48FB0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:77 STA @LOCAL03
    case 0xC48FB1: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:79 LDX @LOCAL0B
    case 0xC48FB3: cpu.execute_instruction<0xA6>(0x000023, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:80 STX @VIRTUAL02
    case 0xC48FB5: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:81 CMP @VIRTUAL02
    case 0xC48FB7: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:82 BCC @UNKNOWN0
    case 0xC48FB9: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:83 JMP @UNKNOWN30
    case 0xC48FBB: cpu.execute_instruction<0x4C>(0x0091C6, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:85 LDX PATH_SEARCH_TEMP_A
    case 0xC48FBE: cpu.execute_instruction<0xAE>(0x00B5E1, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:86 LDA __BSS_START__,X
    case 0xC48FC1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:87 STA @VIRTUAL04
    case 0xC48FC4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:88 LDA PATH_SEARCH_TEMP_A
    case 0xC48FC6: cpu.execute_instruction<0xAD>(0x00B5E1, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:89 CMP PATH_SEARCH_TEMP_END
    case 0xC48FC9: cpu.execute_instruction<0xCD>(0x00B5DF, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:90 BNE @UNKNOWN5
    case 0xC48FCC: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:91 LDX PATH_SEARCH_TEMP_START
    case 0xC48FCE: cpu.execute_instruction<0xAE>(0x00B5DD, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:92 BRA @UNKNOWN6
    case 0xC48FD1: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:94 LDX PATH_SEARCH_TEMP_A
    case 0xC48FD3: cpu.execute_instruction<0xAE>(0x00B5E1, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:95 INX
    case 0xC48FD6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:96 INX
    case 0xC48FD7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:98 STX PATH_SEARCH_TEMP_A
    case 0xC48FD8: cpu.execute_instruction<0x8E>(0x00B5E1, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:99 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48FDB: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:99 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48FDE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:99 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48FE0: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:99 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC48FE3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:100 LDA @VIRTUAL04
    case 0xC48FE5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:101 CLC
    case 0xC48FE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:102 ADC @VIRTUAL06
    case 0xC48FE8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:103 STA @VIRTUAL06
    case 0xC48FEA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC48FEC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:105 LDA [@VIRTUAL06]
    case 0xC48FEE: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:106 STA @VIRTUAL00
    case 0xC48FF0: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:107 CMP #<-2
    case 0xC48FF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FE, 2); else cpu.execute_instruction<0xC9>(0x00B0FE, 3); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:108 BCCL @UNKNOWN30
    case 0xC48FF4: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:108 BCCL @UNKNOWN30
    // Overlapping static entry reached from 0xC48FF2.
    case 0xC48FF5: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:108 BCCL @UNKNOWN30
    case 0xC48FF6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:108 BCCL @UNKNOWN30
    // Overlapping static entry reached from 0xC48FF5.
    case 0xC48FF7: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:108 BCCL @UNKNOWN30
    case 0xC48FF8: cpu.execute_instruction<0x4C>(0x0091C6, 3); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:108 BCCL @UNKNOWN30
    // Overlapping static entry reached from 0xC48FF7.
    case 0xC48FF9: cpu.execute_instruction<0xC6>(0x000091, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:109 REP #PROC_FLAGS::ACCUM8
    case 0xC48FFB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:110 LDA #1
    case 0xC48FFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:110 LDA #1
    // Overlapping static entry reached from 0xC48FFD.
    case 0xC48FFF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:111 STA @VIRTUAL02
    case 0xC49000: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:112 STA @LOCAL02
    case 0xC49002: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:113 LDY @VIRTUAL04
    case 0xC49004: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:114 LDX #0
    case 0xC49006: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:114 LDX #0
    // Overlapping static entry reached from 0xC49006.
    case 0xC49008: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:115 BRA @UNKNOWN12
    case 0xC49009: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:117 LDA #0
    case 0xC4900B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:117 LDA #0
    // Overlapping static entry reached from 0xC4900B.
    case 0xC4900D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:118 STA @LOCAL01
    case 0xC4900E: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:119 BRA @UNKNOWN11
    case 0xC49010: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:121 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49012: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:121 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49015: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:121 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49017: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:121 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4901A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:122 LDA @LOCAL01
    case 0xC4901C: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:123 STA @VIRTUAL02
    case 0xC4901E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:124 TYA
    case 0xC49020: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:125 CLC
    case 0xC49021: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:126 ADC @VIRTUAL02
    case 0xC49022: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:127 CLC
    case 0xC49024: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:128 ADC @VIRTUAL06
    case 0xC49025: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:129 STA @VIRTUAL06
    case 0xC49027: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC49029: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:131 LDA [@VIRTUAL06]
    case 0xC4902B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:132 CMP #<-3
    case 0xC4902D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00D0FD, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:133 BNE @UNKNOWN10
    case 0xC4902F: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:133 BNE @UNKNOWN10
    // Overlapping static entry reached from 0xC4902D.
    case 0xC49030: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC49031: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:135 LDA #0
    case 0xC49033: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:135 LDA #0
    // Overlapping static entry reached from 0xC49033.
    case 0xC49035: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:136 STA @VIRTUAL02
    case 0xC49036: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:137 STA @LOCAL02
    case 0xC49038: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:138 BRA @UNKNOWN13
    case 0xC4903A: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:140 REP #PROC_FLAGS::ACCUM8
    case 0xC4903C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:141 LDA @LOCAL01
    case 0xC4903E: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:142 INC
    case 0xC49040: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:143 STA @LOCAL01
    case 0xC49041: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:145 CMP @LOCAL06
    case 0xC49043: cpu.execute_instruction<0xC5>(0x000019, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:146 BCC @UNKNOWN9
    case 0xC49045: cpu.execute_instruction<0x90>(0x0000CB, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:147 TYA
    case 0xC49047: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:148 CLC
    case 0xC49048: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:149 ADC PATH_MATRIX_COLUMNS
    case 0xC49049: cpu.execute_instruction<0x6D>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:150 TAY
    case 0xC4904C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:151 INX
    case 0xC4904D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:153 CPX @LOCAL07
    case 0xC4904E: cpu.execute_instruction<0xE4>(0x00001B, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:154 BCC @UNKNOWN8
    case 0xC49050: cpu.execute_instruction<0x90>(0x0000B9, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:156 LDA @LOCAL02
    case 0xC49052: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:157 STA @VIRTUAL02
    case 0xC49054: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:158 BNE @UNKNOWN14
    case 0xC49056: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:159 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49058: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:159 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4905B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:159 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4905D: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:159 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49060: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:160 LDA @VIRTUAL04
    case 0xC49062: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:161 CLC
    case 0xC49064: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:162 ADC @VIRTUAL06
    case 0xC49065: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:163 STA @VIRTUAL06
    case 0xC49067: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:164 SEP #PROC_FLAGS::ACCUM8
    case 0xC49069: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:165 LDA #<-4
    case 0xC4906B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0087FC, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:166 STA [@VIRTUAL06]
    case 0xC4906D: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:166 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4906B.
    case 0xC4906E: cpu.execute_instruction<0x06>(0x00004C, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:167 JMP @UNKNOWN30
    case 0xC4906F: cpu.execute_instruction<0x4C>(0x0091C6, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:167 JMP @UNKNOWN30
    // Overlapping static entry reached from 0xC4906E.
    case 0xC49070: cpu.execute_instruction<0xC6>(0x000091, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:169 SEP #PROC_FLAGS::ACCUM8
    case 0xC49072: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:170 LDA @VIRTUAL00
    case 0xC49074: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:171 CMP #<-1
    case 0xC49076: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00D0FF, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:172 BNE @UNKNOWN15
    case 0xC49078: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:172 BNE @UNKNOWN15
    // Overlapping static entry reached from 0xC49076.
    case 0xC49079: cpu.execute_instruction<0x27>(0x0000C2, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:173 REP #PROC_FLAGS::ACCUM8
    case 0xC4907A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:173 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC49079.
    case 0xC4907B: cpu.execute_instruction<0x20>(0x0017E6, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:174 INC @LOCAL05
    case 0xC4907C: cpu.execute_instruction<0xE6>(0x000017, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:175 LDA (@LOCAL0C)
    case 0xC4907E: cpu.execute_instruction<0xB2>(0x000025, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:176 CMP #1
    case 0xC49080: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:176 CMP #1
    // Overlapping static entry reached from 0xC49080.
    case 0xC49082: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:177 BNE @UNKNOWN15
    case 0xC49083: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:178 LDY PATH_MATRIX_COLUMNS
    case 0xC49085: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:179 LDA @VIRTUAL04
    case 0xC49088: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:180 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC4908A: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C4/C4BAF6-jp.asm:181 LDY #6
    case 0xC4908E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:181 LDY #6
    // Overlapping static entry reached from 0xC4908E.
    case 0xC49090: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:182 STA (@LOCAL0C),Y
    case 0xC49091: cpu.execute_instruction<0x91>(0x000025, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:183 LDY PATH_MATRIX_COLUMNS
    case 0xC49093: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:184 LDA @VIRTUAL04
    case 0xC49096: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:185 JSL MODULUS16
    case 0xC49098: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/unknown/C4/C4BAF6-jp.asm:186 LDY #8
    case 0xC4909C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:186 LDY #8
    // Overlapping static entry reached from 0xC4909C.
    case 0xC4909E: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:187 STA (@LOCAL0C),Y
    case 0xC4909F: cpu.execute_instruction<0x91>(0x000025, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:189 SEP #PROC_FLAGS::ACCUM8
    case 0xC490A1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:190 LDA #<-4
    case 0xC490A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0085FC, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:191 STA @VIRTUAL00
    case 0xC490A5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:191 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC490A3.
    case 0xC490A6: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:192 LDX #0
    case 0xC490A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:192 LDX #0
    // Overlapping static entry reached from 0xC490A7.
    case 0xC490A9: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:193 STX @LOCAL03
    case 0xC490AA: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:194 BRA @UNKNOWN23
    case 0xC490AC: cpu.execute_instruction<0x80>(0x000076, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:196 REP #PROC_FLAGS::ACCUM8
    case 0xC490AE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:197 TXA
    case 0xC490B0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:198 ASL
    case 0xC490B1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:199 TAX
    case 0xC490B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:200 LDA @VIRTUAL04
    case 0xC490B3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:201 CLC
    case 0xC490B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:202 ADC PATH_CARDINAL_OFFSET,X
    case 0xC490B6: cpu.execute_instruction<0x7D>(0x00B5E5, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:203 STA @LOCAL01
    case 0xC490B9: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:204 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC490BB: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:204 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC490BE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:204 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC490C0: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:204 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC490C3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:205 LDA @LOCAL01
    case 0xC490C5: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:206 CLC
    case 0xC490C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:207 ADC @VIRTUAL06
    case 0xC490C8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:208 STA @VIRTUAL06
    case 0xC490CA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:209 SEP #PROC_FLAGS::ACCUM8
    case 0xC490CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:210 LDA [@VIRTUAL06]
    case 0xC490CE: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:211 STA @VIRTUAL01
    case 0xC490D0: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:212 CMP #<-2
    case 0xC490D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FE, 2); else cpu.execute_instruction<0xC9>(0x0090FE, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:213 BCC @UNKNOWN21
    case 0xC490D4: cpu.execute_instruction<0x90>(0x00003D, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:213 BCC @UNKNOWN21
    // Overlapping static entry reached from 0xC490D2.
    case 0xC490D5: cpu.execute_instruction<0x3D>(0x0020C2, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:214 REP #PROC_FLAGS::ACCUM8
    case 0xC490D6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:215 LDA PATH_SEARCH_TEMP_A
    case 0xC490D8: cpu.execute_instruction<0xAD>(0x00B5E1, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:216 CMP PATH_SEARCH_TEMP_START
    case 0xC490DB: cpu.execute_instruction<0xCD>(0x00B5DD, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:217 BNE @UNKNOWN17
    case 0xC490DE: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:218 LDA PATH_SEARCH_TEMP_B
    case 0xC490E0: cpu.execute_instruction<0xAD>(0x00B5E3, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:219 CMP PATH_SEARCH_TEMP_END
    case 0xC490E3: cpu.execute_instruction<0xCD>(0x00B5DF, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:220 BEQ @UNKNOWN22
    case 0xC490E6: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:221 BRA @UNKNOWN18
    case 0xC490E8: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:223 LDA PATH_SEARCH_TEMP_B
    case 0xC490EA: cpu.execute_instruction<0xAD>(0x00B5E3, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:224 INC
    case 0xC490ED: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:225 INC
    case 0xC490EE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:226 CMP PATH_SEARCH_TEMP_A
    case 0xC490EF: cpu.execute_instruction<0xCD>(0x00B5E1, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:227 BEQ @UNKNOWN22
    case 0xC490F2: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:229 LDA @LOCAL01
    case 0xC490F4: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:230 LDX PATH_SEARCH_TEMP_B
    case 0xC490F6: cpu.execute_instruction<0xAE>(0x00B5E3, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:231 STA __BSS_START__,X
    case 0xC490F9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:232 LDA PATH_SEARCH_TEMP_B
    case 0xC490FC: cpu.execute_instruction<0xAD>(0x00B5E3, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:233 CMP PATH_SEARCH_TEMP_END
    case 0xC490FF: cpu.execute_instruction<0xCD>(0x00B5DF, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:234 BNE @UNKNOWN19
    case 0xC49102: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:235 LDY PATH_SEARCH_TEMP_START
    case 0xC49104: cpu.execute_instruction<0xAC>(0x00B5DD, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:236 BRA @UNKNOWN20
    case 0xC49107: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:238 LDY PATH_SEARCH_TEMP_B
    case 0xC49109: cpu.execute_instruction<0xAC>(0x00B5E3, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:239 INY
    case 0xC4910C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:240 INY
    case 0xC4910D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:242 STY PATH_SEARCH_TEMP_B
    case 0xC4910E: cpu.execute_instruction<0x8C>(0x00B5E3, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:243 BRA @UNKNOWN22
    case 0xC49111: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:245 LDA @VIRTUAL00
    case 0xC49113: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:246 CMP @VIRTUAL01
    case 0xC49115: cpu.execute_instruction<0xC5>(0x000001, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:247 BLTEQ @UNKNOWN22
    case 0xC49117: cpu.execute_instruction<0x90>(0x000006, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:247 BLTEQ @UNKNOWN22
    case 0xC49119: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:248 LDA @VIRTUAL01
    case 0xC4911B: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:249 STA @VIRTUAL00
    case 0xC4911D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:251 LDX @LOCAL03
    case 0xC4911F: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:252 INX
    case 0xC49121: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:253 STX @LOCAL03
    case 0xC49122: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:255 CPX #4
    case 0xC49124: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:255 CPX #4
    // Overlapping static entry reached from 0xC49124.
    case 0xC49126: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:256 BCCL @UNKNOWN16
    case 0xC49127: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:256 BCCL @UNKNOWN16
    case 0xC49129: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:256 BCCL @UNKNOWN16
    case 0xC4912B: cpu.execute_instruction<0x4C>(0x0090AE, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:257 REP #PROC_FLAGS::ACCUM8
    case 0xC4912E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:258 LDA @VIRTUAL00
    case 0xC49130: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:259 AND #$00FF
    case 0xC49132: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:259 AND #$00FF
    // Overlapping static entry reached from 0xC49132.
    case 0xC49134: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:260 CMP #<-4
    case 0xC49135: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FC, 2); else cpu.execute_instruction<0xC9>(0x0000FC, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:260 CMP #<-4
    // Overlapping static entry reached from 0xC49135.
    case 0xC49137: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:261 BNE @UNKNOWN25
    case 0xC49138: cpu.execute_instruction<0xD0>(0x000019, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:262 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4913A: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:262 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4913D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:262 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4913F: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:262 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49142: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:263 LDA @VIRTUAL04
    case 0xC49144: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:264 CLC
    case 0xC49146: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:265 ADC @VIRTUAL06
    case 0xC49147: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:266 STA @VIRTUAL06
    case 0xC49149: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:267 SEP #PROC_FLAGS::ACCUM8
    case 0xC4914B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:268 LDA #0
    case 0xC4914D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:269 STA [@VIRTUAL06]
    case 0xC4914F: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:269 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4914D.
    case 0xC49150: cpu.execute_instruction<0x06>(0x000080, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:270 BRA @UNKNOWN29
    case 0xC49151: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:270 BRA @UNKNOWN29
    // Overlapping static entry reached from 0xC49150.
    case 0xC49152: cpu.execute_instruction<0x61>(0x0000E2, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:272 SEP #PROC_FLAGS::ACCUM8
    case 0xC49153: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:272 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC49152.
    case 0xC49154: cpu.execute_instruction<0x20>(0x0000A5, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:273 LDA @VIRTUAL00
    case 0xC49155: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:274 INC
    case 0xC49157: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:275 STA @LOCAL00
    case 0xC49158: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:276 REP #PROC_FLAGS::ACCUM8
    case 0xC4915A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:277 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4915C: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:277 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4915F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:277 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49161: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:277 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49164: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:278 LDA @VIRTUAL04
    case 0xC49166: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:279 CLC
    case 0xC49168: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:280 ADC @VIRTUAL06
    case 0xC49169: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:281 STA @VIRTUAL06
    case 0xC4916B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:282 SEP #PROC_FLAGS::ACCUM8
    case 0xC4916D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:283 LDA @LOCAL00
    case 0xC4916F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:284 STA [@VIRTUAL06]
    case 0xC49171: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:285 REP #PROC_FLAGS::ACCUM8
    case 0xC49173: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:286 AND #$00FF
    case 0xC49175: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:286 AND #$00FF
    // Overlapping static entry reached from 0xC49175.
    case 0xC49177: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:287 CMP @LOCAL09
    case 0xC49178: cpu.execute_instruction<0xC5>(0x00001F, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:288 BNE @UNKNOWN29
    case 0xC4917A: cpu.execute_instruction<0xD0>(0x000038, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:289 LDA #0
    case 0xC4917C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:289 LDA #0
    // Overlapping static entry reached from 0xC4917C.
    case 0xC4917E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:290 STA @LOCAL01
    case 0xC4917F: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:291 BRA @UNKNOWN28
    case 0xC49181: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:293 ASL
    case 0xC49183: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:294 TAX
    case 0xC49184: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:295 LDA @VIRTUAL04
    case 0xC49185: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:296 CLC
    case 0xC49187: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:297 ADC PATH_CARDINAL_OFFSET,X
    case 0xC49188: cpu.execute_instruction<0x7D>(0x00B5E5, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:298 TAX
    case 0xC4918B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:299 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4918C: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:299 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4918F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:299 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49191: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:299 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49194: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:300 TXA
    case 0xC49196: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:301 CLC
    case 0xC49197: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:302 ADC @VIRTUAL06
    case 0xC49198: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:303 STA @VIRTUAL06
    case 0xC4919A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:304 SEP #PROC_FLAGS::ACCUM8
    case 0xC4919C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:305 LDA [@VIRTUAL06]
    case 0xC4919E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:306 CMP #<-2
    case 0xC491A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FE, 2); else cpu.execute_instruction<0xC9>(0x0090FE, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:307 BCC @UNKNOWN27
    case 0xC491A2: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:307 BCC @UNKNOWN27
    // Overlapping static entry reached from 0xC491A0.
    case 0xC491A3: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:308 LDA #<-4
    case 0xC491A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0087FC, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:308 LDA #<-4
    // Overlapping static entry reached from 0xC491A3.
    case 0xC491A5: cpu.execute_instruction<0xFC>(0x000687, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:309 STA [@VIRTUAL06]
    case 0xC491A6: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:309 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC491A4.
    case 0xC491A7: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:311 REP #PROC_FLAGS::ACCUM8
    case 0xC491A8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:311 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC491A7.
    case 0xC491A9: cpu.execute_instruction<0x20>(0x000FA5, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:312 LDA @LOCAL01
    case 0xC491AA: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:313 INC
    case 0xC491AC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6-jp.asm:314 STA @LOCAL01
    case 0xC491AD: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:316 CMP #4
    case 0xC491AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:316 CMP #4
    // Overlapping static entry reached from 0xC491AF.
    case 0xC491B1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:317 BCC @UNKNOWN26
    case 0xC491B2: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:319 REP #PROC_FLAGS::ACCUM8
    case 0xC491B4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:320 INC @LOCAL04
    case 0xC491B6: cpu.execute_instruction<0xE6>(0x000015, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:321 LDA @LOCAL0A
    case 0xC491B8: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:322 CMP @LOCAL04
    case 0xC491BA: cpu.execute_instruction<0xC5>(0x000015, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:323 BLTEQ @UNKNOWN31
    case 0xC491BC: cpu.execute_instruction<0x90>(0x000015, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:323 BLTEQ @UNKNOWN31
    case 0xC491BE: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:324 LDA @LOCAL05
    case 0xC491C0: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:325 CMP @LOCAL08
    case 0xC491C2: cpu.execute_instruction<0xC5>(0x00001D, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:326 BEQ @UNKNOWN31
    case 0xC491C4: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:328 REP #PROC_FLAGS::ACCUM8
    case 0xC491C6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6-jp.asm:329 LDA PATH_SEARCH_TEMP_A
    case 0xC491C8: cpu.execute_instruction<0xAD>(0x00B5E1, 3); return true;
    // src/unknown/C4/C4BAF6-jp.asm:330 CMP PATH_SEARCH_TEMP_B
    case 0xC491CB: cpu.execute_instruction<0xCD>(0x00B5E3, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:331 BNEL @UNKNOWN4
    case 0xC491CE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:331 BNEL @UNKNOWN4
    case 0xC491D0: cpu.execute_instruction<0x4C>(0x008FBE, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:333 END_C_FUNCTION
    case 0xC491D3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4BAF6-jp.asm:333 END_C_FUNCTION
    case 0xC491D4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4BD9A.asm (unresolved).
bool execute_unresolved_c4_c4bd9a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4BD9A.asm:3 BEGIN_C_FUNCTION
    case 0xC491D5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    case 0xC491D7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    case 0xC491D8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    case 0xC491D9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    case 0xC491DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D2, 2); else cpu.execute_instruction<0x69>(0x00FFD2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    // Overlapping static entry reached from 0xC491DA.
    case 0xC491DC: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    case 0xC491DD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    case 0xC491DE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:26 STY @LOCAL0F
    case 0xC491DF: cpu.execute_instruction<0x84>(0x00002C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:26 STY @LOCAL0F
    // Overlapping static entry reached from 0xC491DC.
    case 0xC491E0: cpu.execute_instruction<0x2C>(0x002A86, 3); return true;
    // src/unknown/C4/C4BD9A.asm:27 STX @LOCAL0E
    case 0xC491E1: cpu.execute_instruction<0x86>(0x00002A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:28 TAX
    case 0xC491E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:29 LDA __BSS_START__,X
    case 0xC491E4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4BD9A.asm:30 STA @LOCAL0D
    case 0xC491E7: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:31 LDA __BSS_START__+2,X
    case 0xC491E9: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C4/C4BD9A.asm:32 STA @LOCAL0C
    case 0xC491EC: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:33 LDY #0
    case 0xC491EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4BD9A.asm:33 LDY #0
    // Overlapping static entry reached from 0xC491EE.
    case 0xC491F0: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4BD9A.asm:34 STY @LOCAL0B
    case 0xC491F1: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BD9A.asm:35 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC491F3: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:35 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC491F6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:35 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC491F8: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:35 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC491FB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BD9A.asm:36 LDY PATH_MATRIX_COLUMNS
    case 0xC491FD: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4BD9A.asm:37 LDA @LOCAL0D
    case 0xC49200: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:38 JSL MULT16
    case 0xC49202: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4BD9A.asm:39 CLC
    case 0xC49206: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:40 ADC @LOCAL0C
    case 0xC49207: cpu.execute_instruction<0x65>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:41 CLC
    case 0xC49209: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:42 ADC @VIRTUAL06
    case 0xC4920A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:43 STA @VIRTUAL06
    case 0xC4920C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC4920E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:45 LDA [@VIRTUAL06]
    case 0xC49210: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:46 STA @VIRTUAL00
    case 0xC49212: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:47 CMP #<-5
    case 0xC49214: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FB, 2); else cpu.execute_instruction<0xC9>(0x0090FB, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:48 BLTEQ @UNKNOWN0
    case 0xC49216: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:48 BLTEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC49214.
    case 0xC49217: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:48 BLTEQ @UNKNOWN0
    case 0xC49218: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C4/C4BD9A.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC4921A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:50 LDA #0
    case 0xC4921C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4BD9A.asm:50 LDA #0
    // Overlapping static entry reached from 0xC4921C.
    case 0xC4921E: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:51 JMP @UNKNOWN14
    case 0xC4921F: cpu.execute_instruction<0x4C>(0x0093B8, 3); return true;
    // src/unknown/C4/C4BD9A.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC49222: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:54 LDA @LOCAL0E
    case 0xC49224: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:55 BNE @UNKNOWN1
    case 0xC49226: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:56 LDA #0
    case 0xC49228: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4BD9A.asm:56 LDA #0
    // Overlapping static entry reached from 0xC49228.
    case 0xC4922A: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:57 JMP @UNKNOWN14
    case 0xC4922B: cpu.execute_instruction<0x4C>(0x0093B8, 3); return true;
    // src/unknown/C4/C4BD9A.asm:59 LDX @LOCAL0F
    case 0xC4922E: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:60 LDA @LOCAL0D
    case 0xC49230: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:61 STA __BSS_START__,X
    case 0xC49232: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4BD9A.asm:62 LDA @LOCAL0C
    case 0xC49235: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:63 STA __BSS_START__+2,X
    case 0xC49237: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C4/C4BD9A.asm:64 LDA #1
    case 0xC4923A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4BD9A.asm:64 LDA #1
    // Overlapping static entry reached from 0xC4923A.
    case 0xC4923C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BD9A.asm:65 STA @LOCAL0A
    case 0xC4923D: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4BD9A.asm:66 JMP @UNKNOWN12
    case 0xC4923F: cpu.execute_instruction<0x4C>(0x0093AC, 3); return true;
    // src/unknown/C4/C4BD9A.asm:68 LDA #666
    case 0xC49242: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00029A, 3); return true;
    // src/unknown/C4/C4BD9A.asm:68 LDA #666
    // Overlapping static entry reached from 0xC49242.
    case 0xC49244: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C4BD9A.asm:69 STA @LOCAL09
    case 0xC49245: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:70 STA @LOCAL08
    case 0xC49247: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4BD9A.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC49249: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:72 LDA @VIRTUAL00
    case 0xC4924B: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:73 DEC
    case 0xC4924D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:74 STA @VIRTUAL00
    case 0xC4924E: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:75 LDY @LOCAL0B
    case 0xC49250: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/unknown/C4/C4BD9A.asm:76 STY @VIRTUAL02
    case 0xC49252: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC49254: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:78 LDA @VIRTUAL02
    case 0xC49256: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:79 STA @LOCAL07
    case 0xC49258: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:80 STZ @LOCAL0B
    case 0xC4925A: cpu.execute_instruction<0x64>(0x000024, 2); return true;
    // src/unknown/C4/C4BD9A.asm:81 JMP @UNKNOWN7
    case 0xC4925C: cpu.execute_instruction<0x4C>(0x009351, 3); return true;
    // src/unknown/C4/C4BD9A.asm:83 LDA @VIRTUAL02
    case 0xC4925F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:84 ASL
    case 0xC49261: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:85 ASL
    case 0xC49262: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:86 TAY
    case 0xC49263: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:87 LDA PATH_CARDINAL_INDEX + pathfinder_coords::y_coord,Y
    case 0xC49264: cpu.execute_instruction<0xB9>(0x00B5ED, 3); return true;
    // src/unknown/C4/C4BD9A.asm:88 CLC
    case 0xC49267: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:89 ADC @LOCAL0D
    case 0xC49268: cpu.execute_instruction<0x65>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:90 TAX
    case 0xC4926A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:91 LDA PATH_CARDINAL_INDEX + pathfinder_coords::x_coord,Y
    case 0xC4926B: cpu.execute_instruction<0xB9>(0x00B5EF, 3); return true;
    // src/unknown/C4/C4BD9A.asm:92 CLC
    case 0xC4926E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:93 ADC @LOCAL0C
    case 0xC4926F: cpu.execute_instruction<0x65>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:94 STA @LOCAL06
    case 0xC49271: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:95 LDA @VIRTUAL02
    case 0xC49273: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:96 INC
    case 0xC49275: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:97 AND #$0003
    case 0xC49276: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C4/C4BD9A.asm:97 AND #$0003
    // Overlapping static entry reached from 0xC49276.
    case 0xC49278: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BD9A.asm:98 STA @VIRTUAL04
    case 0xC49279: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BD9A.asm:99 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4927B: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:99 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4927E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:99 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49280: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:99 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49283: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BD9A.asm:100 LDA @LOCAL06
    case 0xC49285: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:101 STA @VIRTUAL02
    case 0xC49287: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:102 LDY PATH_MATRIX_COLUMNS
    case 0xC49289: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4BD9A.asm:103 TXA
    case 0xC4928C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:104 JSL MULT16
    case 0xC4928D: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4BD9A.asm:105 CLC
    case 0xC49291: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:106 ADC @VIRTUAL02
    case 0xC49292: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:107 CLC
    case 0xC49294: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:108 ADC @VIRTUAL06
    case 0xC49295: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:109 STA @VIRTUAL06
    case 0xC49297: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:110 SEP #PROC_FLAGS::ACCUM8
    case 0xC49299: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:111 LDA [@VIRTUAL06]
    case 0xC4929B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:112 CMP @VIRTUAL00
    case 0xC4929D: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4BD9A.asm:113 BNEL @UNKNOWN6
    case 0xC4929F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:113 BNEL @UNKNOWN6
    case 0xC492A1: cpu.execute_instruction<0x4C>(0x009347, 3); return true;
    // src/unknown/C4/C4BD9A.asm:114 REP #PROC_FLAGS::ACCUM8
    case 0xC492A4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:115 LDA @LOCAL09
    case 0xC492A6: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:116 CMP #666
    case 0xC492A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00009A, 2); else cpu.execute_instruction<0xC9>(0x00029A, 3); return true;
    // src/unknown/C4/C4BD9A.asm:116 CMP #666
    // Overlapping static entry reached from 0xC492A8.
    case 0xC492AA: cpu.execute_instruction<0x02>(0x0000D0, 2); return true;
    // src/unknown/C4/C4BD9A.asm:117 BNE @UNKNOWN5
    case 0xC492AB: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:118 LDA @LOCAL07
    case 0xC492AD: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:119 STA @VIRTUAL02
    case 0xC492AF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:120 STA @LOCAL09
    case 0xC492B1: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:121 STX @LOCAL00
    case 0xC492B3: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4BD9A.asm:122 LDA @LOCAL06
    case 0xC492B5: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:123 STA @LOCAL01
    case 0xC492B7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4BD9A.asm:125 LDA @LOCAL07
    case 0xC492B9: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:126 STA @VIRTUAL02
    case 0xC492BB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:127 ASL
    case 0xC492BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:128 ASL
    case 0xC492BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:129 TAX
    case 0xC492BF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:130 LDA PATH_DIAGONAL_INDEX + pathfinder_coords::y_coord,X
    case 0xC492C0: cpu.execute_instruction<0xBD>(0x00B5FD, 3); return true;
    // src/unknown/C4/C4BD9A.asm:131 CLC
    case 0xC492C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:132 ADC @LOCAL0D
    case 0xC492C4: cpu.execute_instruction<0x65>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:133 STA @LOCAL05
    case 0xC492C6: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4BD9A.asm:134 LDA PATH_DIAGONAL_INDEX + pathfinder_coords::x_coord,X
    case 0xC492C8: cpu.execute_instruction<0xBD>(0x00B5FF, 3); return true;
    // src/unknown/C4/C4BD9A.asm:135 CLC
    case 0xC492CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:136 ADC @LOCAL0C
    case 0xC492CC: cpu.execute_instruction<0x65>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:137 TAY
    case 0xC492CE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:138 STY @LOCAL04
    case 0xC492CF: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C4BD9A.asm:139 LDA @VIRTUAL00
    case 0xC492D1: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:140 AND #$00FF
    case 0xC492D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4BD9A.asm:140 AND #$00FF
    // Overlapping static entry reached from 0xC492D3.
    case 0xC492D5: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:141 DEC
    case 0xC492D6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:142 PHA
    case 0xC492D7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BD9A.asm:143 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC492D8: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:143 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC492DB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:143 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC492DD: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:143 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC492E0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BD9A.asm:144 STY @VIRTUAL02
    case 0xC492E2: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:145 LDY PATH_MATRIX_COLUMNS
    case 0xC492E4: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4BD9A.asm:146 LDA @LOCAL05
    case 0xC492E7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4BD9A.asm:147 JSL MULT16
    case 0xC492E9: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4BD9A.asm:148 CLC
    case 0xC492ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:149 ADC @VIRTUAL02
    case 0xC492EE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:150 CLC
    case 0xC492F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:151 ADC @VIRTUAL06
    case 0xC492F1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:152 STA @VIRTUAL06
    case 0xC492F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:153 LDA [@VIRTUAL06]
    case 0xC492F5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:154 AND #$00FF
    case 0xC492F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4BD9A.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC492F7.
    case 0xC492F9: cpu.execute_instruction<0x00>(0x00007A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:155 PLY
    case 0xC492FA: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:156 STY @VIRTUAL02
    case 0xC492FB: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:157 CMP @VIRTUAL02
    case 0xC492FD: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:158 BNE @UNKNOWN6
    case 0xC492FF: cpu.execute_instruction<0xD0>(0x000046, 2); return true;
    // src/unknown/C4/C4BD9A.asm:159 LDA @VIRTUAL04
    case 0xC49301: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BD9A.asm:160 ASL
    case 0xC49303: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:161 ASL
    case 0xC49304: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:162 TAX
    case 0xC49305: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BD9A.asm:163 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49306: cpu.execute_instruction<0xAD>(0x00B5D1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:163 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC49309: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:163 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4930B: cpu.execute_instruction<0xAD>(0x00B5D3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:163 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4930E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BD9A.asm:164 LDA PATH_CARDINAL_INDEX + pathfinder_coords::x_coord,X
    case 0xC49310: cpu.execute_instruction<0xBD>(0x00B5EF, 3); return true;
    // src/unknown/C4/C4BD9A.asm:165 CLC
    case 0xC49313: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:166 ADC @LOCAL0C
    case 0xC49314: cpu.execute_instruction<0x65>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:167 STA @VIRTUAL02
    case 0xC49316: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:168 LDY PATH_MATRIX_COLUMNS
    case 0xC49318: cpu.execute_instruction<0xAC>(0x00B5D7, 3); return true;
    // src/unknown/C4/C4BD9A.asm:169 LDA PATH_CARDINAL_INDEX + pathfinder_coords::y_coord,X
    case 0xC4931B: cpu.execute_instruction<0xBD>(0x00B5ED, 3); return true;
    // src/unknown/C4/C4BD9A.asm:170 CLC
    case 0xC4931E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:171 ADC @LOCAL0D
    case 0xC4931F: cpu.execute_instruction<0x65>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:172 JSL MULT16
    case 0xC49321: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4BD9A.asm:173 CLC
    case 0xC49325: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:174 ADC @VIRTUAL02
    case 0xC49326: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:175 CLC
    case 0xC49328: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:176 ADC @VIRTUAL06
    case 0xC49329: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:177 STA @VIRTUAL06
    case 0xC4932B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:178 SEP #PROC_FLAGS::ACCUM8
    case 0xC4932D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:179 LDA [@VIRTUAL06]
    case 0xC4932F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:180 CMP @VIRTUAL00
    case 0xC49331: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:181 BNE @UNKNOWN6
    case 0xC49333: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C4/C4BD9A.asm:182 REP #PROC_FLAGS::ACCUM8
    case 0xC49335: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:183 LDA @LOCAL07
    case 0xC49337: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:184 STA @VIRTUAL02
    case 0xC49339: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:185 STA @LOCAL08
    case 0xC4933B: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4BD9A.asm:186 LDA @LOCAL05
    case 0xC4933D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4BD9A.asm:187 STA @LOCAL02
    case 0xC4933F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4BD9A.asm:188 LDY @LOCAL04
    case 0xC49341: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4BD9A.asm:189 STY @LOCAL03
    case 0xC49343: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C4BD9A.asm:190 BRA @UNKNOWN8
    case 0xC49345: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C4/C4BD9A.asm:192 REP #PROC_FLAGS::ACCUM8
    case 0xC49347: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:193 LDA @VIRTUAL04
    case 0xC49349: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BD9A.asm:194 STA @VIRTUAL02
    case 0xC4934B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:195 STA @LOCAL07
    case 0xC4934D: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:196 INC @LOCAL0B
    case 0xC4934F: cpu.execute_instruction<0xE6>(0x000024, 2); return true;
    // src/unknown/C4/C4BD9A.asm:198 LDA @LOCAL0B
    case 0xC49351: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C4/C4BD9A.asm:199 CMP #4
    case 0xC49353: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4BD9A.asm:199 CMP #4
    // Overlapping static entry reached from 0xC49353.
    case 0xC49355: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4BD9A.asm:200 BCCL @UNKNOWN3
    case 0xC49356: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4BD9A.asm:200 BCCL @UNKNOWN3
    case 0xC49358: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:200 BCCL @UNKNOWN3
    case 0xC4935A: cpu.execute_instruction<0x4C>(0x00925F, 3); return true;
    // src/unknown/C4/C4BD9A.asm:202 LDA @LOCAL08
    case 0xC4935D: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4BD9A.asm:203 CMP #666
    case 0xC4935F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00009A, 2); else cpu.execute_instruction<0xC9>(0x00029A, 3); return true;
    // src/unknown/C4/C4BD9A.asm:203 CMP #666
    // Overlapping static entry reached from 0xC4935F.
    case 0xC49361: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C4/C4BD9A.asm:204 BEQ @UNKNOWN9
    case 0xC49362: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C4/C4BD9A.asm:205 LDA @LOCAL02
    case 0xC49364: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4BD9A.asm:206 STA @LOCAL0D
    case 0xC49366: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:207 LDA @LOCAL03
    case 0xC49368: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4BD9A.asm:208 STA @LOCAL0C
    case 0xC4936A: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:209 LDY @LOCAL08
    case 0xC4936C: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/unknown/C4/C4BD9A.asm:210 STY @LOCAL0B
    case 0xC4936E: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/unknown/C4/C4BD9A.asm:211 SEP #PROC_FLAGS::ACCUM8
    case 0xC49370: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:212 LDA @VIRTUAL00
    case 0xC49372: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:213 DEC
    case 0xC49374: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:214 STA @VIRTUAL00
    case 0xC49375: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:215 BRA @UNKNOWN10
    case 0xC49377: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C4/C4BD9A.asm:218 LDA @LOCAL09
    case 0xC49379: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:219 CMP #666
    case 0xC4937B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00009A, 2); else cpu.execute_instruction<0xC9>(0x00029A, 3); return true;
    // src/unknown/C4/C4BD9A.asm:219 CMP #666
    // Overlapping static entry reached from 0xC4937B.
    case 0xC4937D: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C4/C4BD9A.asm:220 BEQ @UNKNOWN13
    case 0xC4937E: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C4/C4BD9A.asm:221 LDA @LOCAL00
    case 0xC49380: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4BD9A.asm:222 STA @LOCAL0D
    case 0xC49382: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:223 LDA @LOCAL01
    case 0xC49384: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4BD9A.asm:224 STA @LOCAL0C
    case 0xC49386: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:225 LDY @LOCAL09
    case 0xC49388: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:226 STY @LOCAL0B
    case 0xC4938A: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/unknown/C4/C4BD9A.asm:228 REP #PROC_FLAGS::ACCUM8
    case 0xC4938C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:229 LDA @LOCAL0E
    case 0xC4938E: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:230 CMP @LOCAL0A
    case 0xC49390: cpu.execute_instruction<0xC5>(0x000022, 2); return true;
    // src/unknown/C4/C4BD9A.asm:231 BNE @UNKNOWN11
    case 0xC49392: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C4/C4BD9A.asm:232 LDA @LOCAL0A
    case 0xC49394: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4BD9A.asm:233 BRA @UNKNOWN14
    case 0xC49396: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:235 LDA @LOCAL0A
    case 0xC49398: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4BD9A.asm:236 ASL
    case 0xC4939A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:237 ASL
    case 0xC4939B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:238 CLC
    case 0xC4939C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:239 ADC @LOCAL0F
    case 0xC4939D: cpu.execute_instruction<0x65>(0x00002C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:240 TAX
    case 0xC4939F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:241 LDA @LOCAL0D
    case 0xC493A0: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:242 STA __BSS_START__,X
    case 0xC493A2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4BD9A.asm:243 LDA @LOCAL0C
    case 0xC493A5: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:244 STA __BSS_START__+2,X
    case 0xC493A7: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C4/C4BD9A.asm:245 INC @LOCAL0A
    case 0xC493AA: cpu.execute_instruction<0xE6>(0x000022, 2); return true;
    // src/unknown/C4/C4BD9A.asm:247 LDA @VIRTUAL00
    case 0xC493AC: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:248 AND #$00FF
    case 0xC493AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4BD9A.asm:248 AND #$00FF
    // Overlapping static entry reached from 0xC493AE.
    case 0xC493B0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4BD9A.asm:249 BNEL @UNKNOWN2
    case 0xC493B1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:249 BNEL @UNKNOWN2
    case 0xC493B3: cpu.execute_instruction<0x4C>(0x009242, 3); return true;
    // src/unknown/C4/C4BD9A.asm:251 LDA @LOCAL0A
    case 0xC493B6: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4BD9A.asm:253 END_C_FUNCTION
    case 0xC493B8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4BD9A.asm:253 END_C_FUNCTION
    case 0xC493B9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4BF7F.asm (unresolved).
bool execute_unresolved_c4_c4bf7f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4BF7F.asm:3 BEGIN_C_FUNCTION
    case 0xC493BA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    case 0xC493BC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    case 0xC493BD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    case 0xC493BE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    case 0xC493BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC493BF.
    case 0xC493C1: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    case 0xC493C2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    case 0xC493C3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:18 STX @LOCAL08
    case 0xC493C4: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C4BF7F.asm:18 STX @LOCAL08
    // Overlapping static entry reached from 0xC493C1.
    case 0xC493C5: cpu.execute_instruction<0x1E>(0x001C85, 3); return true;
    // src/unknown/C4/C4BF7F.asm:19 STA @LOCAL07
    case 0xC493C6: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4BF7F.asm:20 CMP #3
    case 0xC493C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4BF7F.asm:20 CMP #3
    // Overlapping static entry reached from 0xC493C8.
    case 0xC493CA: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4BF7F.asm:21 BCCL @UNKNOWN6
    case 0xC493CB: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4BF7F.asm:21 BCCL @UNKNOWN6
    case 0xC493CD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4BF7F.asm:21 BCCL @UNKNOWN6
    case 0xC493CF: cpu.execute_instruction<0x4C>(0x009495, 3); return true;
    // src/unknown/C4/C4BF7F.asm:22 LDA __BSS_START__+4,X
    case 0xC493D2: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C4/C4BF7F.asm:23 STA @VIRTUAL04
    case 0xC493D5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:24 LDA __BSS_START__+6,X
    case 0xC493D7: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C4/C4BF7F.asm:25 STA @VIRTUAL02
    case 0xC493DA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:26 STA @LOCAL06
    case 0xC493DC: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4BF7F.asm:27 LDA __BSS_START__,X
    case 0xC493DE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4BF7F.asm:28 STA @VIRTUAL02
    case 0xC493E1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:29 LDA @VIRTUAL04
    case 0xC493E3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:30 SEC
    case 0xC493E5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:31 SBC @VIRTUAL02
    case 0xC493E6: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:32 STA @LOCAL05
    case 0xC493E8: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4BF7F.asm:33 LDA @LOCAL06
    case 0xC493EA: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4BF7F.asm:34 STA @VIRTUAL02
    case 0xC493EC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:35 SEC
    case 0xC493EE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:36 SBC __BSS_START__+2,X
    case 0xC493EF: cpu.execute_instruction<0xFD>(0x000002, 3); return true;
    // src/unknown/C4/C4BF7F.asm:37 STA @LOCAL04
    case 0xC493F2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4BF7F.asm:38 LDA #1
    case 0xC493F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4BF7F.asm:38 LDA #1
    // Overlapping static entry reached from 0xC493F4.
    case 0xC493F6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BF7F.asm:39 STA @LOCAL03
    case 0xC493F7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4BF7F.asm:40 LDA #2
    case 0xC493F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C4BF7F.asm:40 LDA #2
    // Overlapping static entry reached from 0xC493F9.
    case 0xC493FB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BF7F.asm:41 STA @LOCAL02
    case 0xC493FC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4BF7F.asm:42 JMP @UNKNOWN4
    case 0xC493FE: cpu.execute_instruction<0x4C>(0x009485, 3); return true;
    // src/unknown/C4/C4BF7F.asm:44 LDA @LOCAL02
    case 0xC49401: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4BF7F.asm:45 ASL
    case 0xC49403: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:46 ASL
    case 0xC49404: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:47 STA @VIRTUAL02
    case 0xC49405: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:48 LDX @LOCAL08
    case 0xC49407: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/unknown/C4/C4BF7F.asm:49 TXA
    case 0xC49409: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:50 CLC
    case 0xC4940A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:51 ADC @VIRTUAL02
    case 0xC4940B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:52 TAY
    case 0xC4940D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:53 LDA __BSS_START__,Y
    case 0xC4940E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4BF7F.asm:54 STA @LOCAL01
    case 0xC49411: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4BF7F.asm:55 LDA __BSS_START__+2,Y
    case 0xC49413: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // src/unknown/C4/C4BF7F.asm:56 TAY
    case 0xC49416: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:57 STY @LOCAL00
    case 0xC49417: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4BF7F.asm:58 LDA @LOCAL01
    case 0xC49419: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4BF7F.asm:59 STA @VIRTUAL02
    case 0xC4941B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:60 LDA @VIRTUAL04
    case 0xC4941D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:61 CLC
    case 0xC4941F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:62 ADC @LOCAL05
    case 0xC49420: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C4/C4BF7F.asm:63 CMP @VIRTUAL02
    case 0xC49422: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:64 BNE @UNKNOWN2
    case 0xC49424: cpu.execute_instruction<0xD0>(0x000028, 2); return true;
    // src/unknown/C4/C4BF7F.asm:65 LDA @LOCAL06
    case 0xC49426: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4BF7F.asm:66 STA @VIRTUAL02
    case 0xC49428: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:67 CLC
    case 0xC4942A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:68 ADC @LOCAL04
    case 0xC4942B: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C4/C4BF7F.asm:69 STY @VIRTUAL02
    case 0xC4942D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:70 CMP @VIRTUAL02
    case 0xC4942F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:71 BNE @UNKNOWN2
    case 0xC49431: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/unknown/C4/C4BF7F.asm:72 LDA @LOCAL03
    case 0xC49433: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4BF7F.asm:73 ASL
    case 0xC49435: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:74 ASL
    case 0xC49436: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:75 STA @VIRTUAL04
    case 0xC49437: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:76 TXA
    case 0xC49439: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:77 CLC
    case 0xC4943A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:78 ADC @VIRTUAL04
    case 0xC4943B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:79 STA @VIRTUAL02
    case 0xC4943D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:80 LDA @LOCAL01
    case 0xC4943F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4BF7F.asm:81 LDX @VIRTUAL02
    case 0xC49441: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:82 STA __BSS_START__,X
    case 0xC49443: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4BF7F.asm:83 TYA
    case 0xC49446: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:84 LDX @VIRTUAL02
    case 0xC49447: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:85 STA __BSS_START__+2,X
    case 0xC49449: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C4/C4BF7F.asm:86 BRA @UNKNOWN3
    case 0xC4944C: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/unknown/C4/C4BF7F.asm:88 INC @LOCAL03
    case 0xC4944E: cpu.execute_instruction<0xE6>(0x000014, 2); return true;
    // src/unknown/C4/C4BF7F.asm:89 LDA @LOCAL03
    case 0xC49450: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4BF7F.asm:90 ASL
    case 0xC49452: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:91 ASL
    case 0xC49453: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:92 STA @VIRTUAL02
    case 0xC49454: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:93 TXA
    case 0xC49456: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:94 CLC
    case 0xC49457: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:95 ADC @VIRTUAL02
    case 0xC49458: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:96 STA @LOCAL05
    case 0xC4945A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4BF7F.asm:97 LDA @LOCAL01
    case 0xC4945C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4BF7F.asm:98 STA (@LOCAL05)
    case 0xC4945E: cpu.execute_instruction<0x92>(0x000018, 2); return true;
    // src/unknown/C4/C4BF7F.asm:99 TYA
    case 0xC49460: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:100 LDY #2
    case 0xC49461: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4BF7F.asm:100 LDY #2
    // Overlapping static entry reached from 0xC49461.
    case 0xC49463: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C4/C4BF7F.asm:101 STA (@LOCAL05),Y
    case 0xC49464: cpu.execute_instruction<0x91>(0x000018, 2); return true;
    // src/unknown/C4/C4BF7F.asm:102 LDA @LOCAL01
    case 0xC49466: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4BF7F.asm:103 SEC
    case 0xC49468: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:104 SBC @VIRTUAL04
    case 0xC49469: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:105 STA @LOCAL05
    case 0xC4946B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4BF7F.asm:106 LDA @LOCAL06
    case 0xC4946D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4BF7F.asm:107 STA @VIRTUAL02
    case 0xC4946F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:108 LDY @LOCAL00
    case 0xC49471: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4BF7F.asm:109 TYA
    case 0xC49473: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:110 SEC
    case 0xC49474: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:111 SBC @VIRTUAL02
    case 0xC49475: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:112 STA @LOCAL04
    case 0xC49477: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4BF7F.asm:114 LDA @LOCAL01
    case 0xC49479: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4BF7F.asm:115 STA @VIRTUAL04
    case 0xC4947B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:116 STY @VIRTUAL02
    case 0xC4947D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:117 LDA @VIRTUAL02
    case 0xC4947F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:118 STA @LOCAL06
    case 0xC49481: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4BF7F.asm:119 INC @LOCAL02
    case 0xC49483: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/unknown/C4/C4BF7F.asm:121 LDA @LOCAL02
    case 0xC49485: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4BF7F.asm:122 CMP @LOCAL07
    case 0xC49487: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4BF7F.asm:123 BCCL @UNKNOWN1
    case 0xC49489: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4BF7F.asm:123 BCCL @UNKNOWN1
    case 0xC4948B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4BF7F.asm:123 BCCL @UNKNOWN1
    case 0xC4948D: cpu.execute_instruction<0x4C>(0x009401, 3); return true;
    // src/unknown/C4/C4BF7F.asm:124 LDA @LOCAL03
    case 0xC49490: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4BF7F.asm:125 INC
    case 0xC49492: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:126 STA @LOCAL07
    case 0xC49493: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4BF7F.asm:128 LDA @LOCAL07
    case 0xC49495: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4BF7F.asm:129 END_C_FUNCTION
    case 0xC49497: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4BF7F.asm:129 END_C_FUNCTION
    case 0xC49498: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C2DE.asm (unresolved).
bool execute_unresolved_c4_c4c2de_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C2DE.asm:3 BEGIN_C_FUNCTION
    case 0xC495B5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C2DE.asm:8 END_STACK_VARS
    case 0xC495B7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C2DE.asm:8 END_STACK_VARS
    case 0xC495B8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C2DE.asm:8 END_STACK_VARS
    case 0xC495B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C2DE.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC495B9.
    case 0xC495BB: cpu.execute_instruction<0xFF>(0x4AAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C2DE.asm:8 END_STACK_VARS
    case 0xC495BC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:14 LDA PARTY_MEMBERS_ALIVE_OVERWORLD
    case 0xC495BD: cpu.execute_instruction<0xAD>(0x00514A, 3); return true;
    // src/unknown/C4/C4C2DE.asm:14 LDA PARTY_MEMBERS_ALIVE_OVERWORLD
    // Overlapping static entry reached from 0xC495BB.
    case 0xC495BF: cpu.execute_instruction<0x51>(0x0000D0, 2); return true;
    // src/unknown/C4/C4C2DE.asm:15 BNE @UNKNOWN1
    case 0xC495C0: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C4/C4C2DE.asm:15 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC495BF.
    case 0xC495C1: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C2DE.asm:16 LDA #MUSIC::YOU_LOSE
    case 0xC495C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C4/C4C2DE.asm:16 LDA #MUSIC::YOU_LOSE
    // Overlapping static entry reached from 0xC495C1.
    case 0xC495C3: cpu.execute_instruction<0x07>(0x000000, 2); return true;
    // src/unknown/C4/C4C2DE.asm:16 LDA #MUSIC::YOU_LOSE
    // Overlapping static entry reached from 0xC495C2.
    case 0xC495C4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C2DE.asm:17 JSL CHANGE_MUSIC
    case 0xC495C5: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/C4/C4C2DE.asm:17 JSL CHANGE_MUSIC
    // Overlapping static entry reached from 0xC49640.
    case 0xC495C7: cpu.execute_instruction<0xCF>(0x00A0C4, 4); return true;
    // src/unknown/C4/C4C2DE.asm:18 LDY #$0000
    case 0xC495C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4C2DE.asm:18 LDY #$0000
    // Overlapping static entry reached from 0xC495C9.
    case 0xC495CB: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C4C2DE.asm:19 LDX #$0001
    case 0xC495CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C4C2DE.asm:19 LDX #$0001
    // Overlapping static entry reached from 0xC495CC.
    case 0xC495CE: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C4C2DE.asm:20 TXA
    case 0xC495CF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:21 JSL FADE_OUT_WITH_MOSAIC
    case 0xC495D0: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/unknown/C4/C4C2DE.asm:23 STZ LOADED_ANIMATED_TILE_COUNT
    case 0xC495D4: cpu.execute_instruction<0x9C>(0x0047F8, 3); return true;
    // src/unknown/C4/C4C2DE.asm:24 STZ MAP_PALETTE_ANIMATION_LOADED
    case 0xC495D7: cpu.execute_instruction<0x9C>(0x0047FA, 3); return true;
    // src/unknown/C4/C4C2DE.asm:25 STZ ITEM_TRANSFORMATIONS_LOADED
    case 0xC495DA: cpu.execute_instruction<0x9C>(0x00A130, 3); return true;
    // src/unknown/C4/C4C2DE.asm:26 LDA #$0009
    case 0xC495DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C4/C4C2DE.asm:26 LDA #$0009
    // Overlapping static entry reached from 0xC495DD.
    case 0xC495DF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C2DE.asm:27 JSL UNKNOWN_C08D79
    case 0xC495E0: cpu.execute_instruction<0x22>(0xC08D6A, 4); return true;
    // src/unknown/C4/C4C2DE.asm:28 LDY #VRAM::GAME_OVER_LAYER_1_TILES
    case 0xC495E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4C2DE.asm:28 LDY #VRAM::GAME_OVER_LAYER_1_TILES
    // Overlapping static entry reached from 0xC495E4.
    case 0xC495E6: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C4C2DE.asm:29 LDX #VRAM::GAME_OVER_LAYER_1_TILEMAP
    case 0xC495E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/unknown/C4/C4C2DE.asm:29 LDX #VRAM::GAME_OVER_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xC49661.
    case 0xC495E8: cpu.execute_instruction<0x00>(0x000058, 2); return true;
    // src/unknown/C4/C4C2DE.asm:29 LDX #VRAM::GAME_OVER_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xC495E7.
    case 0xC495E9: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:30 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC495EA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:31 JSL SET_BG1_VRAM_LOCATION
    case 0xC495EB: cpu.execute_instruction<0x22>(0xC08D8F, 4); return true;
    // src/unknown/C4/C4C2DE.asm:32 LDY #VRAM::GAME_OVER_LAYER_2_TILES
    case 0xC495EF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/unknown/C4/C4C2DE.asm:32 LDY #VRAM::GAME_OVER_LAYER_2_TILES
    // Overlapping static entry reached from 0xC495EF.
    case 0xC495F1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:33 LDX #VRAM::GAME_OVER_LAYER_2_TILEMAP
    case 0xC495F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/unknown/C4/C4C2DE.asm:33 LDX #VRAM::GAME_OVER_LAYER_2_TILEMAP
    // Overlapping static entry reached from 0xC495F2.
    case 0xC495F4: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/unknown/C4/C4C2DE.asm:34 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC495F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C2DE.asm:34 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC495F5.
    case 0xC495F7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C2DE.asm:35 JSL SET_BG3_VRAM_LOCATION
    case 0xC495F8: cpu.execute_instruction<0x22>(0xC08E0D, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:36 LOADPTR BUFFER, $06
    case 0xC495FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:36 LOADPTR BUFFER, $06
    // Overlapping static entry reached from 0xC495FC.
    case 0xC495FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:36 LOADPTR BUFFER, $06
    case 0xC495FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:36 LOADPTR BUFFER, $06
    case 0xC49601: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:36 LOADPTR BUFFER, $06
    // Overlapping static entry reached from 0xC49601.
    case 0xC49603: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:36 LOADPTR BUFFER, $06
    case 0xC49604: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:37 LOADPTR UNKNOWN_E1CFAF, @LOCAL00
    case 0xC49606: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005A, 2); else cpu.execute_instruction<0xA9>(0x00CA5A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:37 LOADPTR UNKNOWN_E1CFAF, @LOCAL00
    // Overlapping static entry reached from 0xC49606.
    case 0xC49608: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:37 LOADPTR UNKNOWN_E1CFAF, @LOCAL00
    case 0xC49609: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:37 LOADPTR UNKNOWN_E1CFAF, @LOCAL00
    case 0xC4960B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:37 LOADPTR UNKNOWN_E1CFAF, @LOCAL00
    // Overlapping static entry reached from 0xC4960B.
    case 0xC4960D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:37 LOADPTR UNKNOWN_E1CFAF, @LOCAL00
    case 0xC4960E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:38 MOVE_INT $06, @LOCAL01
    case 0xC49610: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:38 MOVE_INT $06, @LOCAL01
    case 0xC49612: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:38 MOVE_INT $06, @LOCAL01
    case 0xC49614: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:38 MOVE_INT $06, @LOCAL01
    case 0xC49616: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C2DE.asm:39 JSL DECOMP
    case 0xC49618: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/unknown/C4/C4C2DE.asm:40 LDA GAME_STATE + game_state::party_members
    case 0xC4961C: cpu.execute_instruction<0xAD>(0x009B20, 3); return true;
    // src/unknown/C4/C4C2DE.asm:41 AND #$00FF
    case 0xC4961F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4C2DE.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC4961F.
    case 0xC49621: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4C2DE.asm:42 CMP #$0003
    case 0xC49622: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4C2DE.asm:42 CMP #$0003
    // Overlapping static entry reached from 0xC49622.
    case 0xC49624: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C2DE.asm:43 BEQ @UNKNOWN2
    case 0xC49625: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC49627: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC49629: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4962B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4962D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4962F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    // Overlapping static entry reached from 0xC4962F.
    case 0xC49631: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC49632: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x008000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    // Overlapping static entry reached from 0xC49632.
    case 0xC49634: cpu.execute_instruction<0x80>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC49635: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC49637: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC49638: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C4C2DE.asm:45 BRA @UNKNOWN3
    case 0xC4963C: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4963E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    // Overlapping static entry reached from 0xC4963E.
    case 0xC49640: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC49641: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC49643: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    // Overlapping static entry reached from 0xC49643.
    case 0xC49645: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC49646: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC49648: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    // Overlapping static entry reached from 0xC49648.
    case 0xC4964A: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4964B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x008000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    // Overlapping static entry reached from 0xC4964B.
    case 0xC4964D: cpu.execute_instruction<0x80>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4964E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC49650: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC49651: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:51 LOADPTR BUFFER, $06
    case 0xC49655: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:51 LOADPTR BUFFER, $06
    // Overlapping static entry reached from 0xC49655.
    case 0xC49657: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:51 LOADPTR BUFFER, $06
    case 0xC49658: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:51 LOADPTR BUFFER, $06
    case 0xC4965A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:51 LOADPTR BUFFER, $06
    // Overlapping static entry reached from 0xC4965A.
    case 0xC4965C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:51 LOADPTR BUFFER, $06
    case 0xC4965D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    case 0xC4965F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000093, 2); else cpu.execute_instruction<0xA9>(0x00D093, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    // Overlapping static entry reached from 0xC4965F.
    case 0xC49661: cpu.execute_instruction<0xD0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    case 0xC49662: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    // Overlapping static entry reached from 0xC49661.
    case 0xC49663: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    case 0xC49664: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    // Overlapping static entry reached from 0xC49664.
    case 0xC49666: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    case 0xC49667: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:53 MOVE_INT $06, @LOCAL01
    case 0xC49669: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:53 MOVE_INT $06, @LOCAL01
    case 0xC4966B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:53 MOVE_INT $06, @LOCAL01
    case 0xC4966D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:53 MOVE_INT $06, @LOCAL01
    case 0xC4966F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C2DE.asm:54 JSL DECOMP
    case 0xC49671: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC49675: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC49677: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC49679: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC4967B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC4967D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    // Overlapping static entry reached from 0xC4967D.
    case 0xC4967F: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC49680: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    // Overlapping static entry reached from 0xC49680.
    case 0xC49682: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC49683: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC49685: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC49687: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    // Overlapping static entry reached from 0xC49685.
    case 0xC49688: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    // Overlapping static entry reached from 0xC49688.
    case 0xC4968A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC4968B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    // Overlapping static entry reached from 0xC4968A.
    case 0xC4968C: cpu.execute_instruction<0x00>(0x000002, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    // Overlapping static entry reached from 0xC4968B.
    case 0xC4968D: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC4968E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC49690: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC49691: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC49693: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC49694: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC49696: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/unknown/C4/C4C2DE.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC49698: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    case 0xC4969A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x00CF9F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    // Overlapping static entry reached from 0xC4969A.
    case 0xC4969C: cpu.execute_instruction<0xCF>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    case 0xC4969D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    case 0xC4969F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    // Overlapping static entry reached from 0xC4969C.
    case 0xC496A0: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    // Overlapping static entry reached from 0xC4969F.
    case 0xC496A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    case 0xC496A2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:60 MOVE_INT @TMP, @LOCAL01
    case 0xC496A4: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:60 MOVE_INT @TMP, @LOCAL01
    case 0xC496A6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:60 MOVE_INT @TMP, @LOCAL01
    case 0xC496A8: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:60 MOVE_INT @TMP, @LOCAL01
    case 0xC496AA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C2DE.asm:61 JSL DECOMP
    case 0xC496AC: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/unknown/C4/C4C2DE.asm:62 LDY #$02E0
    case 0xC496B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E0, 2); else cpu.execute_instruction<0xA0>(0x0002E0, 3); return true;
    // src/unknown/C4/C4C2DE.asm:62 LDY #$02E0
    // Overlapping static entry reached from 0xC496B0.
    case 0xC496B2: cpu.execute_instruction<0x02>(0x000084, 2); return true;
    // src/unknown/C4/C4C2DE.asm:63 STY @LOCAL02
    case 0xC496B3: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:64 MOVE_INT @TMP, @LOCAL00
    case 0xC496B5: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:64 MOVE_INT @TMP, @LOCAL00
    case 0xC496B7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:64 MOVE_INT @TMP, @LOCAL00
    case 0xC496B9: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:64 MOVE_INT @TMP, @LOCAL00
    case 0xC496BB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4C2DE.asm:65 LDX #$0020
    case 0xC496BD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C4/C4C2DE.asm:65 LDX #$0020
    // Overlapping static entry reached from 0xC496BD.
    case 0xC496BF: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C4/C4C2DE.asm:66 TYA
    case 0xC496C0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:67 JSL MEMCPY16
    case 0xC496C1: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C4C2DE.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC496C5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/C4/C4C2DE.asm:69 STZ_BADOPT @LOCAL00
    case 0xC496C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:69 STZ_BADOPT @LOCAL00
    case 0xC496C9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:69 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC496C7.
    case 0xC496CA: cpu.execute_instruction<0x0E>(0x00C0A2, 3); return true;
    // src/unknown/C4/C4C2DE.asm:70 LDX #$00C0
    case 0xC496CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/unknown/C4/C4C2DE.asm:70 LDX #$00C0
    // Overlapping static entry reached from 0xC496CB.
    case 0xC496CD: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4C2DE.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC496CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4C2DE.asm:72 LDA #$0220
    case 0xC496D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000220, 3); return true;
    // src/unknown/C4/C4C2DE.asm:72 LDA #$0220
    // Overlapping static entry reached from 0xC496D0.
    case 0xC496D2: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4C2DE.asm:73 JSL MEMSET16
    case 0xC496D3: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4C2DE.asm:74 LDY @LOCAL02
    case 0xC496D7: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4C2DE.asm:75 TYA
    case 0xC496D9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:76 PROMOTENEARPTRA @TMP
    case 0xC496DA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4C2DE.asm:76 PROMOTENEARPTRA @TMP
    case 0xC496DC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C2DE.asm:76 PROMOTENEARPTRA @TMP
    case 0xC496DD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4C2DE.asm:76 PROMOTENEARPTRA @TMP
    case 0xC496DF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:76 PROMOTENEARPTRA @TMP
    case 0xC496E0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4C2DE.asm:76 PROMOTENEARPTRA @TMP
    case 0xC496E2: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/unknown/C4/C4C2DE.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC496E4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:78 MOVE_INT @TMP, @LOCAL00
    case 0xC496E6: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:78 MOVE_INT @TMP, @LOCAL00
    case 0xC496E8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:78 MOVE_INT @TMP, @LOCAL00
    case 0xC496EA: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:78 MOVE_INT @TMP, @LOCAL00
    case 0xC496EC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4C2DE.asm:79 LDX #$0020
    case 0xC496EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C4/C4C2DE.asm:79 LDX #$0020
    // Overlapping static entry reached from 0xC496EE.
    case 0xC496F0: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C2DE.asm:80 LDA #$0240
    case 0xC496F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/unknown/C4/C4C2DE.asm:80 LDA #$0240
    // Overlapping static entry reached from 0xC496F1.
    case 0xC496F3: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4C2DE.asm:81 JSL MEMCPY16
    case 0xC496F4: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C4C2DE.asm:82 JSL UNKNOWN_C200D9
    case 0xC496F8: cpu.execute_instruction<0x22>(0xC200D9, 4); return true;
    // src/unknown/C4/C4C2DE.asm:83 JSL LOAD_WINDOW_GFX
    case 0xC496FC: cpu.execute_instruction<0x22>(0xC459AB, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:85 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_2_TILES, $3800, $00
    case 0xC49700: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:85 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_2_TILES, $3800, $00
    case 0xC49702: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:85 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_2_TILES, $3800, $00
    case 0xC49704: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:85 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_2_TILES, $3800, $00
    case 0xC49706: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:85 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_2_TILES, $3800, $00
    case 0xC49708: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:85 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_2_TILES, $3800, $00
    // Overlapping static entry reached from 0xC49708.
    case 0xC4970A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:85 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_2_TILES, $3800, $00
    case 0xC4970B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:85 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_2_TILES, $3800, $00
    // Overlapping static entry reached from 0xC4970B.
    case 0xC4970D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C2DE.asm:85 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_2_TILES, $3800, $00
    case 0xC4970E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C4C2DE.asm:85 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_2_TILES, $3800, $00
    case 0xC49710: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4C2DE.asm:85 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_2_TILES, $3800, $00
    case 0xC49712: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4C2DE.asm:85 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_2_TILES, $3800, $00
    // Overlapping static entry reached from 0xC49710.
    case 0xC49713: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4C2DE.asm:85 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_2_TILES, $3800, $00
    // Overlapping static entry reached from 0xC49713.
    case 0xC49715: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x001A22, 3); return true;
    // src/unknown/C4/C4C2DE.asm:90 JSL UNKNOWN_C47F87
    case 0xC49716: cpu.execute_instruction<0x22>(0xC45C1A, 4); return true;
    // src/unknown/C4/C4C2DE.asm:90 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC49715.
    case 0xC49717: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:90 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC49715.
    case 0xC49718: cpu.execute_instruction<0x5C>(0x18A9C4, 4); return true;
    // src/unknown/C4/C4C2DE.asm:91 LDA #$0018
    case 0xC4971A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C4C2DE.asm:91 LDA #$0018
    // Overlapping static entry reached from 0xC4971A.
    case 0xC4971C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C2DE.asm:92 JSL UNKNOWN_C0856B
    case 0xC4971D: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C4/C4C2DE.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC49721: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4C2DE.asm:94 LDA #$0005
    case 0xC49723: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x008D05, 3); return true;
    // src/unknown/C4/C4C2DE.asm:95 STA TM_MIRROR
    case 0xC49725: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C4/C4C2DE.asm:95 STA TM_MIRROR
    // Overlapping static entry reached from 0xC49723.
    case 0xC49726: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:95 STA TM_MIRROR
    // Overlapping static entry reached from 0xC49726.
    case 0xC49727: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4C2DE.asm:96 REP #PROC_FLAGS::ACCUM8
    case 0xC49728: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4C2DE.asm:97 STZ PARTY_MEMBERS_ALIVE_OVERWORLD
    case 0xC4972A: cpu.execute_instruction<0x9C>(0x00514A, 3); return true;
    // src/unknown/C4/C4C2DE.asm:98 STZ BG2_Y_POS
    case 0xC4972D: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/unknown/C4/C4C2DE.asm:99 STZ BG2_X_POS
    case 0xC49730: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/unknown/C4/C4C2DE.asm:100 STZ BG1_X_POS
    case 0xC49733: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/unknown/C4/C4C2DE.asm:101 STZ BG1_X_POS
    case 0xC49736: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/unknown/C4/C4C2DE.asm:102 LDX #$0001
    case 0xC49739: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C4C2DE.asm:102 LDX #$0001
    // Overlapping static entry reached from 0xC49739.
    case 0xC4973B: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C4C2DE.asm:103 TXA
    case 0xC4973C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:104 JSL FADE_IN
    case 0xC4973D: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/unknown/C4/C4C2DE.asm:105 JSL UNKNOWN_C0888B
    case 0xC49741: cpu.execute_instruction<0x22>(0xC0887D, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C2DE.asm:106 END_C_FUNCTION
    case 0xC49745: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C2DE.asm:106 END_C_FUNCTION
    case 0xC49746: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C45F-jp.asm (unresolved).
bool execute_unresolved_c4_c4c45f_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC49747: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:10 END_STACK_VARS
    case 0xC49749: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:10 END_STACK_VARS
    case 0xC4974A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:10 END_STACK_VARS
    case 0xC4974B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:10 END_STACK_VARS
    case 0xC4974C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4974C.
    case 0xC4974E: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:10 END_STACK_VARS
    case 0xC4974F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:10 END_STACK_VARS
    case 0xC49750: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:11 TAX
    case 0xC49751: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:12 STX @LOCAL02
    case 0xC49752: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC49754: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC49754.
    case 0xC49756: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC49757: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC49759: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC49759.
    case 0xC4975B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC4975C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4975E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49760: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49762: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49764: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL0A
    case 0xC49766: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC49766.
    case 0xC49768: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL0A
    case 0xC49769: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL0A
    case 0xC4976B: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL0A
    case 0xC4976C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL0A
    case 0xC4976E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL0A
    case 0xC4976F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL0A
    case 0xC49771: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC49773: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:18 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC49775: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:18 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC49777: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:18 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC49779: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:18 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC4977B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:19 LDA #BPP4PALETTE_SIZE * 6
    case 0xC4977D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // src/unknown/C4/C4C45F-jp.asm:19 LDA #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC4977D.
    case 0xC4977F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:20 JSL MEMCPY24
    case 0xC49780: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/unknown/C4/C4C45F-jp.asm:21 LDX @LOCAL02
    case 0xC49784: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:22 TXA
    case 0xC49786: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:23 ASL
    case 0xC49787: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:24 ASL
    case 0xC49788: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:25 ASL
    case 0xC49789: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:26 ASL
    case 0xC4978A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:27 ASL
    case 0xC4978B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4978C: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4978E: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC49790: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC49792: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:29 CLC
    case 0xC49794: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:30 ADC @VIRTUAL0A
    case 0xC49795: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:31 STA @VIRTUAL0A
    case 0xC49797: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:32 STA @LOCAL00
    case 0xC49799: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:33 LDA @VIRTUAL0A+2
    case 0xC4979B: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:34 STA @LOCAL00+2
    case 0xC4979D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL0A
    case 0xC4979F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0002E0, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4979F.
    case 0xC497A1: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL0A
    case 0xC497A2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL0A
    case 0xC497A4: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL0A
    case 0xC497A5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL0A
    case 0xC497A7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL0A
    case 0xC497A8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL0A
    case 0xC497AA: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC497AC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC497AE: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC497B0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC497B2: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC497B4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:38 LDA #BPP4PALETTE_SIZE * 1
    case 0xC497B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C4/C4C45F-jp.asm:38 LDA #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC497B6.
    case 0xC497B8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:39 JSL MEMCPY24
    case 0xC497B9: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/unknown/C4/C4C45F-jp.asm:40 LDX @LOCAL02
    case 0xC497BD: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:41 TXA
    case 0xC497BF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:42 DEC
    case 0xC497C0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:43 ASL
    case 0xC497C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:44 ASL
    case 0xC497C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:45 ASL
    case 0xC497C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:46 ASL
    case 0xC497C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:47 ASL
    case 0xC497C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:49 CLC
    case 0xC497C6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F-jp.asm:50 ADC @VIRTUAL06
    case 0xC497C7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:51 STA @VIRTUAL06
    case 0xC497C9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:52 STA @LOCAL00
    case 0xC497CB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:53 LDA @VIRTUAL06+2
    case 0xC497CD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:54 STA @LOCAL00+2
    case 0xC497CF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC497D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0002C0, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    // Overlapping static entry reached from 0xC497D1.
    case 0xC497D3: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC497D4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC497D6: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC497D7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC497D9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC497DA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC497DC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC497DE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC497E0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC497E2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC497E4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC497E6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:58 LDA #BPP4PALETTE_SIZE * 1
    case 0xC497E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C4/C4C45F-jp.asm:58 LDA #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC497E8.
    case 0xC497EA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C45F-jp.asm:59 JSL MEMCPY24
    case 0xC497EB: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:60 END_C_FUNCTION
    case 0xC497EF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C45F-jp.asm:60 END_C_FUNCTION
    case 0xC497F0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C519.asm (unresolved).
bool execute_unresolved_c4_c4c519_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C519.asm:3 BEGIN_C_FUNCTION
    case 0xC497F1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    case 0xC497F3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    case 0xC497F4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    case 0xC497F5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    case 0xC497F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC497F6.
    case 0xC497F8: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    case 0xC497F9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    case 0xC497FA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4C519.asm:9 TXY
    case 0xC497FB: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4C519.asm:10 STY @LOCAL01
    case 0xC497FC: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C4C519.asm:11 TAX
    case 0xC497FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C519.asm:12 JSR UNKNOWN_C4C45F
    case 0xC497FF: cpu.execute_instruction<0x20>(0x009747, 3); return true;
    // src/unknown/C4/C4C519.asm:13 LDY @LOCAL01
    case 0xC49802: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C4C519.asm:14 TYA
    case 0xC49804: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4C519.asm:15 JSL INITIALIZE_MAP_PALETTE_FADE
    case 0xC49805: cpu.execute_instruction<0x22>(0xC46852, 4); return true;
    // src/unknown/C4/C4C519.asm:16 BRA @UNKNOWN2
    case 0xC49809: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C4/C4C519.asm:18 LDA PAD_PRESS
    case 0xC4980B: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4C519.asm:19 BEQ @UNKNOWN1
    case 0xC4980E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C519.asm:20 LDA #.LOWORD(-1)
    case 0xC49810: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4C519.asm:20 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC49810.
    case 0xC49812: cpu.execute_instruction<0xFF>(0x222880, 4); return true;
    // src/unknown/C4/C4C519.asm:21 BRA @UNKNOWN3
    case 0xC49813: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C4/C4C519.asm:23 JSL UNKNOWN_C492D2
    case 0xC49815: cpu.execute_instruction<0x22>(0xC4691C, 4); return true;
    // src/unknown/C4/C4C519.asm:23 JSL UNKNOWN_C492D2
    // Overlapping static entry reached from 0xC49812.
    case 0xC49816: cpu.execute_instruction<0x1C>(0x00C469, 3); return true;
    // src/unknown/C4/C4C519.asm:24 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC49819: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C4/C4C519.asm:25 LDY @LOCAL01
    case 0xC4981D: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C4C519.asm:26 DEY
    case 0xC4981F: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4C519.asm:27 STY @LOCAL01
    case 0xC49820: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C4C519.asm:29 LDY @LOCAL01
    case 0xC49822: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C4C519.asm:30 BNE @UNKNOWN0
    case 0xC49824: cpu.execute_instruction<0xD0>(0x0000E5, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C519.asm:31 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC49826: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C519.asm:31 LOADPTR BUFFER + $7800, @LOCAL00
    // Overlapping static entry reached from 0xC49826.
    case 0xC49828: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C519.asm:31 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC49829: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C519.asm:31 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC4982B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C519.asm:31 LOADPTR BUFFER + $7800, @LOCAL00
    // Overlapping static entry reached from 0xC4982B.
    case 0xC4982D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C519.asm:31 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC4982E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4C519.asm:32 LDX #BPP4PALETTE_SIZE * 6
    case 0xC49830: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/unknown/C4/C4C519.asm:32 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC49830.
    case 0xC49832: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C519.asm:33 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC49833: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/unknown/C4/C4C519.asm:33 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC49833.
    case 0xC49835: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4C519.asm:34 JSL MEMCPY16
    case 0xC49836: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C4C519.asm:35 LDA #0
    case 0xC4983A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C519.asm:35 LDA #0
    // Overlapping static entry reached from 0xC4983A.
    case 0xC4983C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C519.asm:37 END_C_FUNCTION
    case 0xC4983D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C519.asm:37 END_C_FUNCTION
    case 0xC4983E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C58F.asm (unresolved).
bool execute_unresolved_c4_c4c58f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C58F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49867: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    case 0xC49869: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    case 0xC4986A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    case 0xC4986B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    case 0xC4986C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4986C.
    case 0xC4986E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    case 0xC4986F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    case 0xC49870: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4C58F.asm:10 STA @VIRTUAL02
    case 0xC49871: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4C58F.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4986E.
    case 0xC49872: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC49873: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49873.
    case 0xC49875: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC49876: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC49878: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC49879: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4987B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4987C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4987E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4C58F.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC49880: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C58F.asm:13 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC49882: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C58F.asm:13 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC49884: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C58F.asm:13 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC49886: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C58F.asm:13 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC49888: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C58F.asm:14 LDA #^PALETTES
    case 0xC4988A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/C4/C4C58F.asm:14 LDA #^PALETTES
    // Overlapping static entry reached from 0xC4988A.
    case 0xC4988C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4C58F.asm:15 STA @LOCAL01+2
    case 0xC4988D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C58F.asm:16 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4988F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C58F.asm:16 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC49891: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C58F.asm:16 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC49893: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C58F.asm:16 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC49895: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C58F.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49897: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C58F.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49899: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C58F.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4989B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C58F.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4989D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4C58F.asm:18 LDA #100
    case 0xC4989F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // src/unknown/C4/C4C58F.asm:18 LDA #100
    // Overlapping static entry reached from 0xC4989F.
    case 0xC498A1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C58F.asm:19 JSL UNKNOWN_C4954C
    case 0xC498A2: cpu.execute_instruction<0x22>(0xC46B96, 4); return true;
    // src/unknown/C4/C4C58F.asm:20 LDX #.LOWORD(-1)
    case 0xC498A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4C58F.asm:20 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC498A6.
    case 0xC498A8: cpu.execute_instruction<0xFF>(0x2202A5, 4); return true;
    // src/unknown/C4/C4C58F.asm:21 LDA @VIRTUAL02
    case 0xC498A9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C58F.asm:22 JSL UNKNOWN_C496E7
    case 0xC498AB: cpu.execute_instruction<0x22>(0xC46D31, 4); return true;
    // src/unknown/C4/C4C58F.asm:22 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC498A8.
    case 0xC498AC: cpu.execute_instruction<0x31>(0x00006D, 2); return true;
    // src/unknown/C4/C4C58F.asm:22 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC498AC.
    case 0xC498AE: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C58F.asm:23 LDA #0
    case 0xC498AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C58F.asm:23 LDA #0
    // Overlapping static entry reached from 0xC498AE.
    case 0xC498B0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4C58F.asm:23 LDA #0
    // Overlapping static entry reached from 0xC498AF.
    case 0xC498B1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4C58F.asm:24 STA @LOCAL02
    case 0xC498B2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C58F.asm:25 BRA @UNKNOWN1
    case 0xC498B4: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C4C58F.asm:27 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC498B6: cpu.execute_instruction<0x22>(0xC4262B, 4); return true;
    // src/unknown/C4/C4C58F.asm:28 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC498BA: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C4/C4C58F.asm:29 LDA @LOCAL02
    case 0xC498BE: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C58F.asm:30 INC
    case 0xC498C0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4C58F.asm:31 STA @LOCAL02
    case 0xC498C1: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C58F.asm:33 CMP @VIRTUAL02
    case 0xC498C3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4C58F.asm:34 BCC @UNKNOWN0
    case 0xC498C5: cpu.execute_instruction<0x90>(0x0000EF, 2); return true;
    // src/unknown/C4/C4C58F.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC498C7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4C58F.asm:36 LDA #<-1
    case 0xC498C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C4C58F.asm:37 STA @LOCAL00
    case 0xC498CB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4C58F.asm:37 STA @LOCAL00
    // Overlapping static entry reached from 0xC498C9.
    case 0xC498CC: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C4/C4C58F.asm:38 LDX #BPP4PALETTE_SIZE * 16
    case 0xC498CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/C4/C4C58F.asm:38 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC498CD.
    case 0xC498CF: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/unknown/C4/C4C58F.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC498D0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4C58F.asm:40 LDA #.LOWORD(PALETTES)
    case 0xC498D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C4C58F.asm:40 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC498D2.
    case 0xC498D4: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4C58F.asm:41 JSL MEMSET16
    case 0xC498D5: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4C58F.asm:42 LDA #24
    case 0xC498D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C4C58F.asm:42 LDA #24
    // Overlapping static entry reached from 0xC498D9.
    case 0xC498DB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C58F.asm:43 JSL UNKNOWN_C0856B
    case 0xC498DC: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C4/C4C58F.asm:44 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC498E0: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C58F.asm:45 END_C_FUNCTION
    case 0xC498E4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4C58F.asm:45 END_C_FUNCTION
    case 0xC498E5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C60E.asm (unresolved).
bool execute_unresolved_c4_c4c60e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C60E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC498E6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    case 0xC498E8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    case 0xC498E9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    case 0xC498EA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    case 0xC498EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC498EB.
    case 0xC498ED: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    case 0xC498EE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    case 0xC498EF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4C60E.asm:8 STA @VIRTUAL02
    case 0xC498F0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4C60E.asm:8 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC498ED.
    case 0xC498F1: cpu.execute_instruction<0x02>(0x0000A2, 2); return true;
    // src/unknown/C4/C4C60E.asm:9 LDX #.LOWORD(-1)
    case 0xC498F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4C60E.asm:9 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC498F2.
    case 0xC498F4: cpu.execute_instruction<0xFF>(0x2202A5, 4); return true;
    // src/unknown/C4/C4C60E.asm:10 LDA @VIRTUAL02
    case 0xC498F5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C60E.asm:11 JSL UNKNOWN_C496E7
    case 0xC498F7: cpu.execute_instruction<0x22>(0xC46D31, 4); return true;
    // src/unknown/C4/C4C60E.asm:11 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC498F4.
    case 0xC498F8: cpu.execute_instruction<0x31>(0x00006D, 2); return true;
    // src/unknown/C4/C4C60E.asm:11 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC498F8.
    case 0xC498FA: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C60E.asm:12 LDA #0
    case 0xC498FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C60E.asm:12 LDA #0
    // Overlapping static entry reached from 0xC498FA.
    case 0xC498FC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4C60E.asm:12 LDA #0
    // Overlapping static entry reached from 0xC498FB.
    case 0xC498FD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4C60E.asm:13 STA @LOCAL00
    case 0xC498FE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4C60E.asm:14 BRA @UNKNOWN1
    case 0xC49900: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C4/C4C60E.asm:16 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC49902: cpu.execute_instruction<0x22>(0xC4262B, 4); return true;
    // src/unknown/C4/C4C60E.asm:17 JSL OAM_CLEAR
    case 0xC49906: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/C4/C4C60E.asm:18 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC4990A: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/unknown/C4/C4C60E.asm:19 JSL UPDATE_SCREEN
    case 0xC4990E: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/unknown/C4/C4C60E.asm:20 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC49912: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C4/C4C60E.asm:21 LDA @LOCAL00
    case 0xC49916: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4C60E.asm:22 INC
    case 0xC49918: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4C60E.asm:23 STA @LOCAL00
    case 0xC49919: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4C60E.asm:25 CMP @VIRTUAL02
    case 0xC4991B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4C60E.asm:26 BCC @UNKNOWN0
    case 0xC4991D: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/unknown/C4/C4C60E.asm:27 JSL UNKNOWN_C49740
    case 0xC4991F: cpu.execute_instruction<0x22>(0xC46D8A, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C60E.asm:28 END_C_FUNCTION
    case 0xC49923: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4C60E.asm:28 END_C_FUNCTION
    case 0xC49924: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C64D.asm (unresolved).
bool execute_unresolved_c4_c4c64d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C64D.asm:3 BEGIN_C_FUNCTION
    case 0xC49925: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C64D.asm:7 END_STACK_VARS
    case 0xC49927: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C64D.asm:7 END_STACK_VARS
    case 0xC49928: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C64D.asm:7 END_STACK_VARS
    case 0xC49929: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C64D.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC49929.
    case 0xC4992B: cpu.execute_instruction<0xFF>(0x3CA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C64D.asm:7 END_STACK_VARS
    case 0xC4992C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4C64D.asm:8 LDA #60
    case 0xC4992D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C4/C4C64D.asm:8 LDA #60
    // Overlapping static entry reached from 0xC4992D.
    case 0xC4992F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:9 JSR SKIPPABLE_PAUSE
    case 0xC49930: cpu.execute_instruction<0x20>(0x00983F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    case 0xC49933: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x003C40, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    // Overlapping static entry reached from 0xC49933.
    case 0xC49935: cpu.execute_instruction<0x3C>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    case 0xC49936: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    case 0xC49938: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    // Overlapping static entry reached from 0xC49938.
    case 0xC4993A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    case 0xC4993B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    case 0xC4993D: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/unknown/C4/C4C64D.asm:11 JSL UNKNOWN_C1DD5F
    case 0xC49941: cpu.execute_instruction<0x22>(0xC1DB3C, 4); return true;
    // src/unknown/C4/C4C64D.asm:12 LDA EVENT_FLAG_NOCONTINUE_SELECTED
    case 0xC49945: cpu.execute_instruction<0xAF>(0xC30184, 4); return true;
    // src/unknown/C4/C4C64D.asm:13 JSL GET_EVENT_FLAG
    case 0xC49949: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C4/C4C64D.asm:14 CMP #0
    case 0xC4994D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:14 CMP #0
    // Overlapping static entry reached from 0xC4994D.
    case 0xC4994F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4C64D.asm:15 BNE @UNKNOWN0
    case 0xC49950: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C4/C4C64D.asm:16 LDA #60
    case 0xC49952: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C4/C4C64D.asm:16 LDA #60
    // Overlapping static entry reached from 0xC49952.
    case 0xC49954: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:17 JSR SKIPPABLE_PAUSE
    case 0xC49955: cpu.execute_instruction<0x20>(0x00983F, 3); return true;
    // src/unknown/C4/C4C64D.asm:18 LDA #.LOWORD(-1)
    case 0xC49958: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4C64D.asm:18 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC49958.
    case 0xC4995A: cpu.execute_instruction<0xFF>(0x99EE4C, 4); return true;
    // src/unknown/C4/C4C64D.asm:19 JMP @UNKNOWN9
    case 0xC4995B: cpu.execute_instruction<0x4C>(0x0099EE, 3); return true;
    // src/unknown/C4/C4C64D.asm:21 LDA #60
    case 0xC4995E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C4/C4C64D.asm:21 LDA #60
    // Overlapping static entry reached from 0xC4995E.
    case 0xC49960: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:22 JSR SKIPPABLE_PAUSE
    case 0xC49961: cpu.execute_instruction<0x20>(0x00983F, 3); return true;
    // src/unknown/C4/C4C64D.asm:23 CMP #0
    case 0xC49964: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:23 CMP #0
    // Overlapping static entry reached from 0xC49964.
    case 0xC49966: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:24 BEQ @UNKNOWN1
    case 0xC49967: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C4/C4C64D.asm:25 LDA #0
    case 0xC49969: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:25 LDA #0
    // Overlapping static entry reached from 0xC49969.
    case 0xC4996B: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C4/C4C64D.asm:26 JMP @UNKNOWN9
    case 0xC4996C: cpu.execute_instruction<0x4C>(0x0099EE, 3); return true;
    // src/unknown/C4/C4C64D.asm:28 LDX #90
    case 0xC4996F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00005A, 2); else cpu.execute_instruction<0xA2>(0x00005A, 3); return true;
    // src/unknown/C4/C4C64D.asm:28 LDX #90
    // Overlapping static entry reached from 0xC4996F.
    case 0xC49971: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C64D.asm:29 LDA #1
    case 0xC49972: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C64D.asm:29 LDA #1
    // Overlapping static entry reached from 0xC49972.
    case 0xC49974: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:30 JSR UNKNOWN_C4C519
    case 0xC49975: cpu.execute_instruction<0x20>(0x0097F1, 3); return true;
    // src/unknown/C4/C4C64D.asm:31 CMP #0
    case 0xC49978: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:31 CMP #0
    // Overlapping static entry reached from 0xC49978.
    case 0xC4997A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:32 BEQ @UNKNOWN2
    case 0xC4997B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:33 LDA #0
    case 0xC4997D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:33 LDA #0
    // Overlapping static entry reached from 0xC4997D.
    case 0xC4997F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:34 BRA @UNKNOWN9
    case 0xC49980: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/unknown/C4/C4C64D.asm:36 LDA #1
    case 0xC49982: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C64D.asm:36 LDA #1
    // Overlapping static entry reached from 0xC49982.
    case 0xC49984: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:37 JSR SKIPPABLE_PAUSE
    case 0xC49985: cpu.execute_instruction<0x20>(0x00983F, 3); return true;
    // src/unknown/C4/C4C64D.asm:38 CMP #0
    case 0xC49988: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:38 CMP #0
    // Overlapping static entry reached from 0xC49988.
    case 0xC4998A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:39 BEQ @UNKNOWN3
    case 0xC4998B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:40 LDA #0
    case 0xC4998D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:40 LDA #0
    // Overlapping static entry reached from 0xC4998D.
    case 0xC4998F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:41 BRA @UNKNOWN9
    case 0xC49990: cpu.execute_instruction<0x80>(0x00005C, 2); return true;
    // src/unknown/C4/C4C64D.asm:43 LDX #90
    case 0xC49992: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00005A, 2); else cpu.execute_instruction<0xA2>(0x00005A, 3); return true;
    // src/unknown/C4/C4C64D.asm:43 LDX #90
    // Overlapping static entry reached from 0xC49992.
    case 0xC49994: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C64D.asm:44 LDA #2
    case 0xC49995: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C4C64D.asm:44 LDA #2
    // Overlapping static entry reached from 0xC49995.
    case 0xC49997: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:45 JSR UNKNOWN_C4C519
    case 0xC49998: cpu.execute_instruction<0x20>(0x0097F1, 3); return true;
    // src/unknown/C4/C4C64D.asm:46 CMP #0
    case 0xC4999B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:46 CMP #0
    // Overlapping static entry reached from 0xC4999B.
    case 0xC4999D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:47 BEQ @UNKNOWN4
    case 0xC4999E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:48 LDA #0
    case 0xC499A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:48 LDA #0
    // Overlapping static entry reached from 0xC499A0.
    case 0xC499A2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:49 BRA @UNKNOWN9
    case 0xC499A3: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/unknown/C4/C4C64D.asm:51 LDA #1
    case 0xC499A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C64D.asm:51 LDA #1
    // Overlapping static entry reached from 0xC499A5.
    case 0xC499A7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:52 JSR SKIPPABLE_PAUSE
    case 0xC499A8: cpu.execute_instruction<0x20>(0x00983F, 3); return true;
    // src/unknown/C4/C4C64D.asm:53 CMP #0
    case 0xC499AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:53 CMP #0
    // Overlapping static entry reached from 0xC499AB.
    case 0xC499AD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:54 BEQ @UNKNOWN5
    case 0xC499AE: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:55 LDA #0
    case 0xC499B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:55 LDA #0
    // Overlapping static entry reached from 0xC499B0.
    case 0xC499B2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:56 BRA @UNKNOWN9
    case 0xC499B3: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/unknown/C4/C4C64D.asm:58 LDX #90
    case 0xC499B5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00005A, 2); else cpu.execute_instruction<0xA2>(0x00005A, 3); return true;
    // src/unknown/C4/C4C64D.asm:58 LDX #90
    // Overlapping static entry reached from 0xC499B5.
    case 0xC499B7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C64D.asm:59 LDA #3
    case 0xC499B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C4/C4C64D.asm:59 LDA #3
    // Overlapping static entry reached from 0xC499B8.
    case 0xC499BA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:60 JSR UNKNOWN_C4C519
    case 0xC499BB: cpu.execute_instruction<0x20>(0x0097F1, 3); return true;
    // src/unknown/C4/C4C64D.asm:61 CMP #0
    case 0xC499BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:61 CMP #0
    // Overlapping static entry reached from 0xC499BE.
    case 0xC499C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:62 BEQ @UNKNOWN6
    case 0xC499C1: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:63 LDA #0
    case 0xC499C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:63 LDA #0
    // Overlapping static entry reached from 0xC499C3.
    case 0xC499C5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:64 BRA @UNKNOWN9
    case 0xC499C6: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C4/C4C64D.asm:66 LDA #1
    case 0xC499C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C64D.asm:66 LDA #1
    // Overlapping static entry reached from 0xC499C8.
    case 0xC499CA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:67 JSR SKIPPABLE_PAUSE
    case 0xC499CB: cpu.execute_instruction<0x20>(0x00983F, 3); return true;
    // src/unknown/C4/C4C64D.asm:68 CMP #0
    case 0xC499CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:68 CMP #0
    // Overlapping static entry reached from 0xC499CE.
    case 0xC499D0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:69 BEQ @UNKNOWN7
    case 0xC499D1: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:70 LDA #0
    case 0xC499D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:70 LDA #0
    // Overlapping static entry reached from 0xC499D3.
    case 0xC499D5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:71 BRA @UNKNOWN9
    case 0xC499D6: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C4/C4C64D.asm:73 LDX #8
    case 0xC499D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C4/C4C64D.asm:73 LDX #8
    // Overlapping static entry reached from 0xC499D8.
    case 0xC499DA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C64D.asm:74 LDA #4
    case 0xC499DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C4C64D.asm:74 LDA #4
    // Overlapping static entry reached from 0xC499DB.
    case 0xC499DD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:75 JSR UNKNOWN_C4C519
    case 0xC499DE: cpu.execute_instruction<0x20>(0x0097F1, 3); return true;
    // src/unknown/C4/C4C64D.asm:76 CMP #0
    case 0xC499E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:76 CMP #0
    // Overlapping static entry reached from 0xC499E1.
    case 0xC499E3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:77 BEQ @UNKNOWN8
    case 0xC499E4: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:78 LDA #0
    case 0xC499E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:78 LDA #0
    // Overlapping static entry reached from 0xC499E6.
    case 0xC499E8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:79 BRA @UNKNOWN9
    case 0xC499E9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C4C64D.asm:81 LDA #0
    case 0xC499EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:81 LDA #0
    // Overlapping static entry reached from 0xC499EB.
    case 0xC499ED: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C64D.asm:83 END_C_FUNCTION
    case 0xC499EE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C64D.asm:83 END_C_FUNCTION
    case 0xC499EF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C8A4.asm (unresolved).
bool execute_unresolved_c4_c4c8a4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C8A4.asm:3 BEGIN_C_FUNCTION
    case 0xC49B74: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C8A4.asm:6 END_STACK_VARS
    case 0xC49B76: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C8A4.asm:6 END_STACK_VARS
    case 0xC49B77: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C8A4.asm:6 END_STACK_VARS
    case 0xC49B78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C8A4.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC49B78.
    case 0xC49B7A: cpu.execute_instruction<0xFF>(0x789C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C8A4.asm:6 END_STACK_VARS
    case 0xC49B7B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4C8A4.asm:7 STZ ENTITY_FADE_STATES_BUFFER
    case 0xC49B7C: cpu.execute_instruction<0x9C>(0x00B678, 3); return true;
    // src/unknown/C4/C4C8A4.asm:7 STZ ENTITY_FADE_STATES_BUFFER
    // Overlapping static entry reached from 0xC49B7A.
    case 0xC49B7E: cpu.execute_instruction<0xB6>(0x00009C, 2); return true;
    // src/unknown/C4/C4C8A4.asm:8 STZ ENTITY_FADE_STATES_LENGTH
    case 0xC49B7F: cpu.execute_instruction<0x9C>(0x00B67A, 3); return true;
    // src/unknown/C4/C4C8A4.asm:8 STZ ENTITY_FADE_STATES_LENGTH
    // Overlapping static entry reached from 0xC49B7E.
    case 0xC49B80: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C4C8A4.asm:8 STZ ENTITY_FADE_STATES_LENGTH
    // Overlapping static entry reached from 0xC49B80.
    case 0xC49B81: cpu.execute_instruction<0xB6>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C8A4.asm:9 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC49B82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007C00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C8A4.asm:9 LOADPTR BUFFER + $7C00, @VIRTUAL06
    // Overlapping static entry reached from 0xC49B81.
    case 0xC49B83: cpu.execute_instruction<0x00>(0x00007C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C8A4.asm:9 LOADPTR BUFFER + $7C00, @VIRTUAL06
    // Overlapping static entry reached from 0xC49B82.
    case 0xC49B84: cpu.execute_instruction<0x7C>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C8A4.asm:9 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC49B85: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C8A4.asm:9 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC49B87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C8A4.asm:9 LOADPTR BUFFER + $7C00, @VIRTUAL06
    // Overlapping static entry reached from 0xC49B87.
    case 0xC49B89: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C8A4.asm:9 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC49B8A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C8A4.asm:10 MOVE_INT @VIRTUAL06, ENTITY_FADE_STATES
    case 0xC49B8C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C8A4.asm:10 MOVE_INT @VIRTUAL06, ENTITY_FADE_STATES
    case 0xC49B8E: cpu.execute_instruction<0x8D>(0x00B67E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C8A4.asm:10 MOVE_INT @VIRTUAL06, ENTITY_FADE_STATES
    case 0xC49B91: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C8A4.asm:10 MOVE_INT @VIRTUAL06, ENTITY_FADE_STATES
    case 0xC49B93: cpu.execute_instruction<0x8D>(0x00B680, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C8A4.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49B96: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C8A4.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49B98: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C8A4.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49B9A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C8A4.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49B9C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4C8A4.asm:12 LDX #1024
    case 0xC49B9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000400, 3); return true;
    // src/unknown/C4/C4C8A4.asm:12 LDX #1024
    // Overlapping static entry reached from 0xC49B9E.
    case 0xC49BA0: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // src/unknown/C4/C4C8A4.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC49BA1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4C8A4.asm:13 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC49BA0.
    case 0xC49BA2: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C4/C4C8A4.asm:14 LDA #0
    case 0xC49BA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C4C8A4.asm:15 JSL MEMSET24
    case 0xC49BA5: cpu.execute_instruction<0x22>(0xC08F06, 4); return true;
    // src/unknown/C4/C4C8A4.asm:15 JSL MEMSET24
    // Overlapping static entry reached from 0xC49BA3.
    case 0xC49BA6: cpu.execute_instruction<0x06>(0x00008F, 2); return true;
    // src/unknown/C4/C4C8A4.asm:15 JSL MEMSET24
    // Overlapping static entry reached from 0xC49BA6.
    case 0xC49BA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C8A4.asm:16 END_C_FUNCTION
    case 0xC49BA9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C8A4.asm:16 END_C_FUNCTION
    case 0xC49BAA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C8DB.asm (unresolved).
bool execute_unresolved_c4_c4c8db_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C8DB.asm:3 BEGIN_C_FUNCTION
    case 0xC49BAB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4C8DB.asm:6 LDX ENTITY_FADE_STATES_BUFFER
    case 0xC49BAD: cpu.execute_instruction<0xAE>(0x00B678, 3); return true;
    // src/unknown/C4/C4C8DB.asm:7 CLC
    case 0xC49BB0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C8DB.asm:8 ADC ENTITY_FADE_STATES_BUFFER
    case 0xC49BB1: cpu.execute_instruction<0x6D>(0x00B678, 3); return true;
    // src/unknown/C4/C4C8DB.asm:9 STA ENTITY_FADE_STATES_BUFFER
    case 0xC49BB4: cpu.execute_instruction<0x8D>(0x00B678, 3); return true;
    // src/unknown/C4/C4C8DB.asm:10 TXA
    case 0xC49BB7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C8DB.asm:11 END_C_FUNCTION
    case 0xC49BB8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C8E9.asm (unresolved).
bool execute_unresolved_c4_c4c8e9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C8E9.asm:3 BEGIN_C_FUNCTION
    case 0xC49BB9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    case 0xC49BBB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    case 0xC49BBC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    case 0xC49BBD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    case 0xC49BBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC49BBE.
    case 0xC49BC0: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    case 0xC49BC1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    case 0xC49BC2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C4C8E9.asm:8 STORE_INT1632 @VIRTUAL06
    case 0xC49BC3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C4C8E9.asm:8 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC49BC0.
    case 0xC49BC4: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C4C8E9.asm:8 STORE_INT1632 @VIRTUAL06
    case 0xC49BC5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C4C8E9.asm:8 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC49BC4.
    case 0xC49BC6: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4C8E9.asm:9 CLC
    case 0xC49BC7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC49BC8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC49BCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC49BCA.
    case 0xC49BCC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC49BCD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC49BCF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC49BD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC49BD1.
    case 0xC49BD3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC49BD4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4C8E9.asm:11 BRA @UNKNOWN1
    case 0xC49BD6: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C4/C4C8E9.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC49BD8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4C8E9.asm:14 LDA #0
    case 0xC49BDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C4C8E9.asm:15 STA [@VIRTUAL06]
    case 0xC49BDC: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4C8E9.asm:15 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC49BDA.
    case 0xC49BDD: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4C8E9.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC49BDE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4C8E9.asm:16 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC49BDD.
    case 0xC49BDF: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C4C8E9.asm:17 INC @VIRTUAL06
    case 0xC49BE0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4C8E9.asm:18 DEX
    case 0xC49BE2: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4C8E9.asm:20 CPX #0
    case 0xC49BE3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C4/C4C8E9.asm:20 CPX #0
    // Overlapping static entry reached from 0xC49BE3.
    case 0xC49BE5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4C8E9.asm:21 BNE @UNKNOWN0
    case 0xC49BE6: cpu.execute_instruction<0xD0>(0x0000F0, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C8E9.asm:22 END_C_FUNCTION
    case 0xC49BE8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C8E9.asm:22 END_C_FUNCTION
    case 0xC49BE9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C91A.asm (unresolved).
bool execute_unresolved_c4_c4c91a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C91A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49BEA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    case 0xC49BEC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    case 0xC49BED: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    case 0xC49BEE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    case 0xC49BEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC49BEF.
    case 0xC49BF1: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    case 0xC49BF2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    case 0xC49BF3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:15 STX @VIRTUAL02
    case 0xC49BF4: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:15 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC49BF1.
    case 0xC49BF5: cpu.execute_instruction<0x02>(0x000086, 2); return true;
    // src/unknown/C4/C4C91A.asm:16 STX @LOCAL06
    case 0xC49BF6: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4C91A.asm:17 STA @VIRTUAL04
    case 0xC49BF8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:18 STA @LOCAL05
    case 0xC49BFA: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4C91A.asm:19 LDA @VIRTUAL02
    case 0xC49BFC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4C91A.asm:20 BEQL @UNKNOWN15
    case 0xC49BFE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4C91A.asm:20 BEQL @UNKNOWN15
    case 0xC49C00: cpu.execute_instruction<0x4C>(0x009E1D, 3); return true;
    // src/unknown/C4/C4C91A.asm:21 LDA @VIRTUAL02
    case 0xC49C03: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:22 CMP #1
    case 0xC49C05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4C91A.asm:22 CMP #1
    // Overlapping static entry reached from 0xC49C4E.
    case 0xC49C06: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C4/C4C91A.asm:22 CMP #1
    // Overlapping static entry reached from 0xC49C05.
    case 0xC49C07: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4C91A.asm:23 BEQL @UNKNOWN15
    case 0xC49C08: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4C91A.asm:23 BEQL @UNKNOWN15
    case 0xC49C0A: cpu.execute_instruction<0x4C>(0x009E1D, 3); return true;
    // src/unknown/C4/C4C91A.asm:24 LDA @VIRTUAL02
    case 0xC49C0D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:25 CMP #6
    case 0xC49C0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C4/C4C91A.asm:25 CMP #6
    // Overlapping static entry reached from 0xC49C0F.
    case 0xC49C11: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4C91A.asm:26 BEQL @UNKNOWN15
    case 0xC49C12: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4C91A.asm:26 BEQL @UNKNOWN15
    case 0xC49C14: cpu.execute_instruction<0x4C>(0x009E1D, 3); return true;
    // src/unknown/C4/C4C91A.asm:27 LDA @VIRTUAL04
    case 0xC49C17: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:28 ASL
    case 0xC49C19: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:29 TAX
    case 0xC49C1A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:30 LDA ENTITY_TILE_HEIGHTS,X
    case 0xC49C1B: cpu.execute_instruction<0xBD>(0x002EB8, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4C91A.asm:31 BEQL @UNKNOWN15
    case 0xC49C1E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4C91A.asm:31 BEQL @UNKNOWN15
    case 0xC49C20: cpu.execute_instruction<0x4C>(0x009E1D, 3); return true;
    // src/unknown/C4/C4C91A.asm:32 LDA ENTITY_FADE_ENTITY
    case 0xC49C23: cpu.execute_instruction<0xAD>(0x00B67C, 3); return true;
    // src/unknown/C4/C4C91A.asm:33 CMP #.LOWORD(-1)
    case 0xC49C26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4C91A.asm:33 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC49C26.
    case 0xC49C28: cpu.execute_instruction<0xFF>(0x201DD0, 4); return true;
    // src/unknown/C4/C4C91A.asm:34 BNE @UNKNOWN4
    case 0xC49C29: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/unknown/C4/C4C91A.asm:35 JSR UNKNOWN_C4C8A4
    case 0xC49C2B: cpu.execute_instruction<0x20>(0x009B74, 3); return true;
    // src/unknown/C4/C4C91A.asm:35 JSR UNKNOWN_C4C8A4
    // Overlapping static entry reached from 0xC49C28.
    case 0xC49C2C: cpu.execute_instruction<0x74>(0x00009B, 2); return true;
    // src/unknown/C4/C4C91A.asm:36 STZ NEW_ENTITY_VAR3
    case 0xC49C2E: cpu.execute_instruction<0x9C>(0x000A34, 3); return true;
    // src/unknown/C4/C4C91A.asm:37 STZ NEW_ENTITY_VAR2
    case 0xC49C31: cpu.execute_instruction<0x9C>(0x000A32, 3); return true;
    // src/unknown/C4/C4C91A.asm:38 STZ NEW_ENTITY_VAR1
    case 0xC49C34: cpu.execute_instruction<0x9C>(0x000A30, 3); return true;
    // src/unknown/C4/C4C91A.asm:39 STZ NEW_ENTITY_VAR0
    case 0xC49C37: cpu.execute_instruction<0x9C>(0x000A2E, 3); return true;
    // src/unknown/C4/C4C91A.asm:40 LDY #0
    case 0xC49C3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4C91A.asm:40 LDY #0
    // Overlapping static entry reached from 0xC49C3A.
    case 0xC49C3C: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C4/C4C91A.asm:41 TYX
    case 0xC49C3D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:42 LDA #EVENT_SCRIPT::EVENT_859
    case 0xC49C3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000057, 2); else cpu.execute_instruction<0xA9>(0x000357, 3); return true;
    // src/unknown/C4/C4C91A.asm:42 LDA #EVENT_SCRIPT::EVENT_859
    // Overlapping static entry reached from 0xC49C3E.
    case 0xC49C40: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C4/C4C91A.asm:43 JSL INIT_ENTITY_WIPE
    case 0xC49C41: cpu.execute_instruction<0x22>(0xC092D4, 4); return true;
    // src/unknown/C4/C4C91A.asm:43 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC49C40.
    case 0xC49C42: cpu.execute_instruction<0xD4>(0x000092, 2); return true;
    // src/unknown/C4/C4C91A.asm:43 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC49C42.
    case 0xC49C44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00008D, 2); else cpu.execute_instruction<0xC0>(0x007C8D, 3); return true;
    // src/unknown/C4/C4C91A.asm:44 STA ENTITY_FADE_ENTITY
    case 0xC49C45: cpu.execute_instruction<0x8D>(0x00B67C, 3); return true;
    // src/unknown/C4/C4C91A.asm:44 STA ENTITY_FADE_ENTITY
    // Overlapping static entry reached from 0xC49C44.
    case 0xC49C46: cpu.execute_instruction<0x7C>(0x00ADB6, 3); return true;
    // src/unknown/C4/C4C91A.asm:44 STA ENTITY_FADE_ENTITY
    // Overlapping static entry reached from 0xC49C44.
    case 0xC49C47: cpu.execute_instruction<0xB6>(0x0000AD, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49C48: cpu.execute_instruction<0xAD>(0x00B67E, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49C47.
    case 0xC49C49: cpu.execute_instruction<0x7E>(0x0085B6, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49C4B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49C49.
    case 0xC49C4C: cpu.execute_instruction<0x06>(0x0000AD, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49C4D: cpu.execute_instruction<0xAD>(0x00B680, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49C4C.
    case 0xC49C4E: cpu.execute_instruction<0x80>(0x0000B6, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49C50: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4C91A.asm:47 LDA ENTITY_FADE_STATES_LENGTH
    case 0xC49C52: cpu.execute_instruction<0xAD>(0x00B67A, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/C4/C4C91A.asm:48 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC49C55: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/C4/C4C91A.asm:48 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC49C57: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/C4/C4C91A.asm:48 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC49C58: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/C4/C4C91A.asm:48 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC49C59: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/C4/C4C91A.asm:48 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC49C5B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/C4/C4C91A.asm:48 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC49C5C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:49 CLC
    case 0xC49C5D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:50 ADC @VIRTUAL06
    case 0xC49C5E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:51 STA @VIRTUAL06
    case 0xC49C60: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:52 STA @LOCAL04
    case 0xC49C62: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:53 LDA @VIRTUAL06+2
    case 0xC49C64: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4C91A.asm:54 STA @LOCAL04+2
    case 0xC49C66: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4C91A.asm:55 LDA @LOCAL05
    case 0xC49C68: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4C91A.asm:56 STA @VIRTUAL04
    case 0xC49C6A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:57 LDY #0
    case 0xC49C6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4C91A.asm:57 LDY #0
    // Overlapping static entry reached from 0xC49C6C.
    case 0xC49C6E: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:58 STA [@LOCAL04],Y
    case 0xC49C6F: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:59 LDA @VIRTUAL04
    case 0xC49C71: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:60 ASL
    case 0xC49C73: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:61 TAY
    case 0xC49C74: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:62 STY @LOCAL03
    case 0xC49C75: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:63 TYA
    case 0xC49C77: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:64 CLC
    case 0xC49C78: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:65 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC49C79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/C4/C4C91A.asm:65 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC49C79.
    case 0xC49C7B: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C4C91A.asm:66 TAX
    case 0xC49C7C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:67 LDA __BSS_START__,X
    case 0xC49C7D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4C91A.asm:68 ORA #$4000
    case 0xC49C80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x004000, 3); return true;
    // src/unknown/C4/C4C91A.asm:68 ORA #$4000
    // Overlapping static entry reached from 0xC49C80.
    case 0xC49C82: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:69 STA __BSS_START__,X
    case 0xC49C83: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4C91A.asm:70 LDA @VIRTUAL02
    case 0xC49C86: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:71 LDY #2
    case 0xC49C88: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4C91A.asm:71 LDY #2
    // Overlapping static entry reached from 0xC49C88.
    case 0xC49C8A: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:72 STA [@LOCAL04],Y
    case 0xC49C8B: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:73 LDY @LOCAL03
    case 0xC49C8D: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:74 LDA ENTITY_SIZES,Y
    case 0xC49C8F: cpu.execute_instruction<0xB9>(0x002F6C, 3); return true;
    // src/unknown/C4/C4C91A.asm:75 STA @LOCAL02
    case 0xC49C92: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:76 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC49C94: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:76 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC49C96: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:76 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC49C98: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C91A.asm:76 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC49C9A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4C91A.asm:77 LDA #6
    case 0xC49C9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C4/C4C91A.asm:77 LDA #6
    // Overlapping static entry reached from 0xC49C9C.
    case 0xC49C9E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:78 CLC
    case 0xC49C9F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:79 ADC @VIRTUAL0A
    case 0xC49CA0: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:80 STA @VIRTUAL0A
    case 0xC49CA2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:81 LDA @LOCAL02
    case 0xC49CA4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:82 ASL
    case 0xC49CA6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:83 TAX
    case 0xC49CA7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:84 LDA f:UNKNOWN_C42A63,X
    case 0xC49CA8: cpu.execute_instruction<0xBF>(0xC429A1, 4); return true;
    // src/unknown/C4/C4C91A.asm:85 STA [@VIRTUAL0A]
    case 0xC49CAC: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:86 LDA ENTITY_TILE_HEIGHTS,Y
    case 0xC49CAE: cpu.execute_instruction<0xB9>(0x002EB8, 3); return true;
    // src/unknown/C4/C4C91A.asm:87 ASL
    case 0xC49CB1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:88 ASL
    case 0xC49CB2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:89 ASL
    case 0xC49CB3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:90 STA @LOCAL02
    case 0xC49CB4: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:91 LDY #8
    case 0xC49CB6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4C91A.asm:91 LDY #8
    // Overlapping static entry reached from 0xC49CB6.
    case 0xC49CB8: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:92 STA [@LOCAL04],Y
    case 0xC49CB9: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:93 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC49CBB: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:93 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC49CBD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:93 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC49CBF: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C91A.asm:93 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC49CC1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4C91A.asm:94 LDA #14
    case 0xC49CC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C4/C4C91A.asm:94 LDA #14
    // Overlapping static entry reached from 0xC49CC3.
    case 0xC49CC5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:95 CLC
    case 0xC49CC6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:96 ADC @VIRTUAL06
    case 0xC49CC7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:97 STA @VIRTUAL06
    case 0xC49CC9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:98 STA @LOCAL01
    case 0xC49CCB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4C91A.asm:99 LDA @VIRTUAL06+2
    case 0xC49CCD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4C91A.asm:100 STA @LOCAL01+2
    case 0xC49CCF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C91A.asm:101 LDA @LOCAL02
    case 0xC49CD1: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:102 TAY
    case 0xC49CD3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:103 LDA [@VIRTUAL0A]
    case 0xC49CD4: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:104 JSL MULT16
    case 0xC49CD6: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4C91A.asm:105 LSR
    case 0xC49CDA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:106 STA @LOCAL02
    case 0xC49CDB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:107 STA [@VIRTUAL06]
    case 0xC49CDD: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:108 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC49CDF: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:108 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC49CE1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:108 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC49CE3: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C91A.asm:108 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC49CE5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4C91A.asm:109 LDA #10
    case 0xC49CE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C4/C4C91A.asm:109 LDA #10
    // Overlapping static entry reached from 0xC49CE7.
    case 0xC49CE9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:110 CLC
    case 0xC49CEA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:111 ADC @VIRTUAL0A
    case 0xC49CEB: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:112 STA @VIRTUAL0A
    case 0xC49CED: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:113 LDA @LOCAL02
    case 0xC49CEF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:114 ASL
    case 0xC49CF1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:115 JSR UNKNOWN_C4C8DB
    case 0xC49CF2: cpu.execute_instruction<0x20>(0x009BAB, 3); return true;
    // src/unknown/C4/C4C91A.asm:116 STA @LOCAL03
    case 0xC49CF5: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:117 STA [@VIRTUAL0A]
    case 0xC49CF7: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:118 LDA [@VIRTUAL06]
    case 0xC49CF9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:119 ASL
    case 0xC49CFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:120 TAX
    case 0xC49CFC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:121 LDA @LOCAL03
    case 0xC49CFD: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:122 JSR UNKNOWN_C4C8E9
    case 0xC49CFF: cpu.execute_instruction<0x20>(0x009BB9, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:123 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC49D02: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:123 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC49D04: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:123 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC49D06: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C91A.asm:123 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC49D08: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4C91A.asm:124 LDA #12
    case 0xC49D0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C4/C4C91A.asm:124 LDA #12
    // Overlapping static entry reached from 0xC49D0A.
    case 0xC49D0C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:125 CLC
    case 0xC49D0D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:126 ADC @VIRTUAL06
    case 0xC49D0E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:127 STA @VIRTUAL06
    case 0xC49D10: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:128 STA @LOCAL00
    case 0xC49D12: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4C91A.asm:129 LDA @VIRTUAL06+2
    case 0xC49D14: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4C91A.asm:130 STA @LOCAL00+2
    case 0xC49D16: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:131 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC49D18: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:131 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC49D1A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:131 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC49D1C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C91A.asm:131 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC49D1E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4C91A.asm:132 LDA [@VIRTUAL06]
    case 0xC49D20: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:133 STA @VIRTUAL02
    case 0xC49D22: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:134 LDA [@VIRTUAL0A]
    case 0xC49D24: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:135 CLC
    case 0xC49D26: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:136 ADC @VIRTUAL02
    case 0xC49D27: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:137 STA [@LOCAL00]
    case 0xC49D29: cpu.execute_instruction<0x87>(0x00000E, 2); return true;
    // src/unknown/C4/C4C91A.asm:138 LDA #0
    case 0xC49D2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C91A.asm:138 LDA #0
    // Overlapping static entry reached from 0xC49D2B.
    case 0xC49D2D: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C4C91A.asm:139 LDY #18
    case 0xC49D2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/unknown/C4/C4C91A.asm:139 LDY #18
    // Overlapping static entry reached from 0xC49D2E.
    case 0xC49D30: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:140 STA [@LOCAL04],Y
    case 0xC49D31: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:141 LDY #16
    case 0xC49D33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C4C91A.asm:141 LDY #16
    // Overlapping static entry reached from 0xC49D33.
    case 0xC49D35: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:142 STA [@LOCAL04],Y
    case 0xC49D36: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:143 LDA @LOCAL06
    case 0xC49D38: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C4/C4C91A.asm:144 STA @VIRTUAL02
    case 0xC49D3A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:145 CMP #2
    case 0xC49D3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4C91A.asm:145 CMP #2
    // Overlapping static entry reached from 0xC49D3C.
    case 0xC49D3E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:146 BEQ @UNKNOWN5
    case 0xC49D3F: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C4/C4C91A.asm:147 LDA @VIRTUAL02
    case 0xC49D41: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:148 CMP #3
    case 0xC49D43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4C91A.asm:148 CMP #3
    // Overlapping static entry reached from 0xC49D43.
    case 0xC49D45: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:149 BEQ @UNKNOWN5
    case 0xC49D46: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C4/C4C91A.asm:150 LDA @VIRTUAL02
    case 0xC49D48: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:151 CMP #4
    case 0xC49D4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4C91A.asm:151 CMP #4
    // Overlapping static entry reached from 0xC49D4A.
    case 0xC49D4C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:152 BEQ @UNKNOWN5
    case 0xC49D4D: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C4C91A.asm:153 LDA @VIRTUAL02
    case 0xC49D4F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:154 CMP #5
    case 0xC49D51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C4/C4C91A.asm:154 CMP #5
    // Overlapping static entry reached from 0xC49D51.
    case 0xC49D53: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4C91A.asm:155 BNE @UNKNOWN6
    case 0xC49D54: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C4/C4C91A.asm:157 LDY #10
    case 0xC49D56: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C4C91A.asm:157 LDY #10
    // Overlapping static entry reached from 0xC49D56.
    case 0xC49D58: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4C91A.asm:158 LDA [@LOCAL04],Y
    case 0xC49D59: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:159 STA @LOCAL02
    case 0xC49D5B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:160 BRA @UNKNOWN7
    case 0xC49D5D: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:162 LDA [@LOCAL00]
    case 0xC49D5F: cpu.execute_instruction<0xA7>(0x00000E, 2); return true;
    // src/unknown/C4/C4C91A.asm:163 STA @LOCAL02
    case 0xC49D61: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:165 LDA @VIRTUAL04
    case 0xC49D63: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:166 CMP #24
    case 0xC49D65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000018, 3); return true;
    // src/unknown/C4/C4C91A.asm:166 CMP #24
    // Overlapping static entry reached from 0xC49D65.
    case 0xC49D67: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4C91A.asm:167 BCC @UNKNOWN8
    case 0xC49D68: cpu.execute_instruction<0x90>(0x000011, 2); return true;
    // src/unknown/C4/C4C91A.asm:168 LDY #14
    case 0xC49D6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/unknown/C4/C4C91A.asm:168 LDY #14
    // Overlapping static entry reached from 0xC49D6A.
    case 0xC49D6C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4C91A.asm:169 LDA [@LOCAL04],Y
    case 0xC49D6D: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:170 TAY
    case 0xC49D6F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:171 LDA @LOCAL02
    case 0xC49D70: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:172 TAX
    case 0xC49D72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:173 LDA @VIRTUAL04
    case 0xC49D73: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:174 JSL UNKNOWN_C4283F
    case 0xC49D75: cpu.execute_instruction<0x22>(0xC4277D, 4); return true;
    // src/unknown/C4/C4C91A.asm:175 BRA @UNKNOWN9
    case 0xC49D79: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C4/C4C91A.asm:177 LDY #14
    case 0xC49D7B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/unknown/C4/C4C91A.asm:177 LDY #14
    // Overlapping static entry reached from 0xC49D7B.
    case 0xC49D7D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4C91A.asm:178 LDA [@LOCAL04],Y
    case 0xC49D7E: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:179 TAY
    case 0xC49D80: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:180 LDA @LOCAL02
    case 0xC49D81: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:181 TAX
    case 0xC49D83: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:182 LDA @VIRTUAL04
    case 0xC49D84: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:183 JSL UNKNOWN_C42884
    case 0xC49D86: cpu.execute_instruction<0x22>(0xC427C2, 4); return true;
    // src/unknown/C4/C4C91A.asm:185 LDA ENTITY_FADE_ENTITY
    case 0xC49D8A: cpu.execute_instruction<0xAD>(0x00B67C, 3); return true;
    // src/unknown/C4/C4C91A.asm:186 STA @LOCAL02
    case 0xC49D8D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:187 LDA @VIRTUAL02
    case 0xC49D8F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:188 CMP #2
    case 0xC49D91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4C91A.asm:188 CMP #2
    // Overlapping static entry reached from 0xC49D91.
    case 0xC49D93: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:189 BEQ @UNKNOWN10
    case 0xC49D94: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C4/C4C91A.asm:190 CMP #7
    case 0xC49D96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C4/C4C91A.asm:190 CMP #7
    // Overlapping static entry reached from 0xC49D96.
    case 0xC49D98: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:191 BEQ @UNKNOWN10
    case 0xC49D99: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C4/C4C91A.asm:192 CMP #3
    case 0xC49D9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4C91A.asm:192 CMP #3
    // Overlapping static entry reached from 0xC49D9B.
    case 0xC49D9D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:193 BEQ @UNKNOWN11
    case 0xC49D9E: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/unknown/C4/C4C91A.asm:194 CMP #8
    case 0xC49DA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C4/C4C91A.asm:194 CMP #8
    // Overlapping static entry reached from 0xC49DA0.
    case 0xC49DA2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:195 BEQ @UNKNOWN11
    case 0xC49DA3: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C4/C4C91A.asm:196 CMP #4
    case 0xC49DA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4C91A.asm:196 CMP #4
    // Overlapping static entry reached from 0xC49DA5.
    case 0xC49DA7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:197 BEQ @UNKNOWN12
    case 0xC49DA8: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C4/C4C91A.asm:198 CMP #9
    case 0xC49DAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C4/C4C91A.asm:198 CMP #9
    // Overlapping static entry reached from 0xC49DAA.
    case 0xC49DAC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:199 BEQ @UNKNOWN12
    case 0xC49DAD: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/unknown/C4/C4C91A.asm:200 CMP #5
    case 0xC49DAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C4/C4C91A.asm:200 CMP #5
    // Overlapping static entry reached from 0xC49DAF.
    case 0xC49DB1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:201 BEQ @UNKNOWN13
    case 0xC49DB2: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/unknown/C4/C4C91A.asm:202 CMP #10
    case 0xC49DB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C4/C4C91A.asm:202 CMP #10
    // Overlapping static entry reached from 0xC49DB4.
    case 0xC49DB6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:203 BEQ @UNKNOWN13
    case 0xC49DB7: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/unknown/C4/C4C91A.asm:204 BRA @UNKNOWN14
    case 0xC49DB9: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/unknown/C4/C4C91A.asm:206 LDA @LOCAL02
    case 0xC49DBB: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:207 ASL
    case 0xC49DBD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:208 TAX
    case 0xC49DBE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:209 LDA #1
    case 0xC49DBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C91A.asm:209 LDA #1
    // Overlapping static entry reached from 0xC49DBF.
    case 0xC49DC1: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4C91A.asm:210 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC49DC2: cpu.execute_instruction<0x9D>(0x000E54, 3); return true;
    // src/unknown/C4/C4C91A.asm:211 LDY #4
    case 0xC49DC5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4C91A.asm:211 LDY #4
    // Overlapping static entry reached from 0xC49DC5.
    case 0xC49DC7: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:212 STA [@LOCAL04],Y
    case 0xC49DC8: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:213 BRA @UNKNOWN14
    case 0xC49DCA: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C4/C4C91A.asm:215 LDA @LOCAL02
    case 0xC49DCC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:216 ASL
    case 0xC49DCE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:217 TAX
    case 0xC49DCF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:218 LDA #1
    case 0xC49DD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C91A.asm:218 LDA #1
    // Overlapping static entry reached from 0xC49DD0.
    case 0xC49DD2: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4C91A.asm:219 STA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC49DD3: cpu.execute_instruction<0x9D>(0x000E90, 3); return true;
    // src/unknown/C4/C4C91A.asm:220 LDA #2
    case 0xC49DD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C4C91A.asm:220 LDA #2
    // Overlapping static entry reached from 0xC49DD6.
    case 0xC49DD8: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C4C91A.asm:221 LDY #4
    case 0xC49DD9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4C91A.asm:221 LDY #4
    // Overlapping static entry reached from 0xC49DD9.
    case 0xC49DDB: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:222 STA [@LOCAL04],Y
    case 0xC49DDC: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:223 BRA @UNKNOWN14
    case 0xC49DDE: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C4/C4C91A.asm:225 LDA @LOCAL02
    case 0xC49DE0: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:226 ASL
    case 0xC49DE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:227 TAX
    case 0xC49DE3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:228 LDA #1
    case 0xC49DE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C91A.asm:228 LDA #1
    // Overlapping static entry reached from 0xC49E2D.
    case 0xC49DE5: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C4/C4C91A.asm:228 LDA #1
    // Overlapping static entry reached from 0xC49DE4.
    case 0xC49DE6: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4C91A.asm:229 STA ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC49DE7: cpu.execute_instruction<0x9D>(0x000ECC, 3); return true;
    // src/unknown/C4/C4C91A.asm:230 LDA #3
    case 0xC49DEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C4/C4C91A.asm:230 LDA #3
    // Overlapping static entry reached from 0xC49DEA.
    case 0xC49DEC: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C4C91A.asm:231 LDY #4
    case 0xC49DED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4C91A.asm:231 LDY #4
    // Overlapping static entry reached from 0xC49DED.
    case 0xC49DEF: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:232 STA [@LOCAL04],Y
    case 0xC49DF0: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:233 BRA @UNKNOWN14
    case 0xC49DF2: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C4/C4C91A.asm:235 LDA @LOCAL02
    case 0xC49DF4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:236 ASL
    case 0xC49DF6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:237 TAX
    case 0xC49DF7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:238 LDA #1
    case 0xC49DF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C91A.asm:238 LDA #1
    // Overlapping static entry reached from 0xC49DF8.
    case 0xC49DFA: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4C91A.asm:239 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC49DFB: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/C4/C4C91A.asm:240 LDA #4
    case 0xC49DFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C4C91A.asm:240 LDA #4
    // Overlapping static entry reached from 0xC49DFE.
    case 0xC49E00: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4C91A.asm:241 TAY
    case 0xC49E01: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:242 STA [@LOCAL04],Y
    case 0xC49E02: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:244 LDA @LOCAL02
    case 0xC49E04: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:245 ASL
    case 0xC49E06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:246 TAX
    case 0xC49E07: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:247 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC49E08: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C4/C4C91A.asm:248 CLC
    case 0xC49E0B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:249 ADC ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC49E0C: cpu.execute_instruction<0x7D>(0x000E90, 3); return true;
    // src/unknown/C4/C4C91A.asm:250 CLC
    case 0xC49E0F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:251 ADC ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC49E10: cpu.execute_instruction<0x7D>(0x000ECC, 3); return true;
    // src/unknown/C4/C4C91A.asm:252 CLC
    case 0xC49E13: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:253 ADC ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC49E14: cpu.execute_instruction<0x7D>(0x000F08, 3); return true;
    // src/unknown/C4/C4C91A.asm:254 STA ENTITY_SCRIPT_VAR4_TABLE,X
    case 0xC49E17: cpu.execute_instruction<0x9D>(0x000F44, 3); return true;
    // src/unknown/C4/C4C91A.asm:255 INC ENTITY_FADE_STATES_LENGTH
    case 0xC49E1A: cpu.execute_instruction<0xEE>(0x00B67A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C91A.asm:257 END_C_FUNCTION
    case 0xC49E1D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4C91A.asm:257 END_C_FUNCTION
    case 0xC49E1E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CB4F.asm (unresolved).
bool execute_unresolved_c4_c4cb4f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CB4F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49E1F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CB4F.asm:5 END_STACK_VARS
    case 0xC49E21: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CB4F.asm:5 END_STACK_VARS
    case 0xC49E22: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CB4F.asm:5 END_STACK_VARS
    case 0xC49E23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CB4F.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC49E23.
    case 0xC49E25: cpu.execute_instruction<0xFF>(0x7EAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CB4F.asm:5 END_STACK_VARS
    case 0xC49E26: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49E27: cpu.execute_instruction<0xAD>(0x00B67E, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49E25.
    case 0xC49E29: cpu.execute_instruction<0xB6>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49E2A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49E29.
    case 0xC49E2B: cpu.execute_instruction<0x06>(0x0000AD, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49E2C: cpu.execute_instruction<0xAD>(0x00B680, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49E2B.
    case 0xC49E2D: cpu.execute_instruction<0x80>(0x0000B6, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49E2F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CB4F.asm:7 LDY #0
    case 0xC49E31: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4CB4F.asm:7 LDY #0
    // Overlapping static entry reached from 0xC49E31.
    case 0xC49E33: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4CB4F.asm:8 BRA @UNKNOWN1
    case 0xC49E34: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB4F.asm:10 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49E36: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB4F.asm:10 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49E38: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB4F.asm:10 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49E3A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CB4F.asm:10 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49E3C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4CB4F.asm:11 LDA [@VIRTUAL0A]
    case 0xC49E3E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CB4F.asm:12 ASL
    case 0xC49E40: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CB4F.asm:13 CLC
    case 0xC49E41: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CB4F.asm:14 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC49E42: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/C4/C4CB4F.asm:14 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC49E42.
    case 0xC49E44: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C4CB4F.asm:15 TAX
    case 0xC49E45: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CB4F.asm:16 LDA __BSS_START__,X
    case 0xC49E46: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4CB4F.asm:17 AND #$BFFF
    case 0xC49E49: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00BFFF, 3); return true;
    // src/unknown/C4/C4CB4F.asm:17 AND #$BFFF
    // Overlapping static entry reached from 0xC49E49.
    case 0xC49E4B: cpu.execute_instruction<0xBF>(0x00009D, 4); return true;
    // src/unknown/C4/C4CB4F.asm:18 STA __BSS_START__,X
    case 0xC49E4C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4CB4F.asm:19 LDA #20
    case 0xC49E4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4CB4F.asm:19 LDA #20
    // Overlapping static entry reached from 0xC49E4F.
    case 0xC49E51: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CB4F.asm:20 CLC
    case 0xC49E52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CB4F.asm:21 ADC @VIRTUAL06
    case 0xC49E53: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CB4F.asm:22 STA @VIRTUAL06
    case 0xC49E55: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CB4F.asm:23 INY
    case 0xC49E57: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4CB4F.asm:25 CPY ENTITY_FADE_STATES_LENGTH
    case 0xC49E58: cpu.execute_instruction<0xCC>(0x00B67A, 3); return true;
    // src/unknown/C4/C4CB4F.asm:26 BCC @UNKNOWN0
    case 0xC49E5B: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4CB4F.asm:27 END_C_FUNCTION
    case 0xC49E5D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4CB4F.asm:27 END_C_FUNCTION
    case 0xC49E5E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CB8F.asm (unresolved).
bool execute_unresolved_c4_c4cb8f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CB8F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49E5F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CB8F.asm:6 END_STACK_VARS
    case 0xC49E61: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CB8F.asm:6 END_STACK_VARS
    case 0xC49E62: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CB8F.asm:6 END_STACK_VARS
    case 0xC49E63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CB8F.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC49E63.
    case 0xC49E65: cpu.execute_instruction<0xFF>(0x7EAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CB8F.asm:6 END_STACK_VARS
    case 0xC49E66: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49E67: cpu.execute_instruction<0xAD>(0x00B67E, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49E65.
    case 0xC49E69: cpu.execute_instruction<0xB6>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49E6A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49E69.
    case 0xC49E6B: cpu.execute_instruction<0x06>(0x0000AD, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49E6C: cpu.execute_instruction<0xAD>(0x00B680, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49E6B.
    case 0xC49E6D: cpu.execute_instruction<0x80>(0x0000B6, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49E6F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CB8F.asm:8 LDX #0
    case 0xC49E71: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4CB8F.asm:8 LDX #0
    // Overlapping static entry reached from 0xC49E71.
    case 0xC49E73: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4CB8F.asm:9 STX @LOCAL00
    case 0xC49E74: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4CB8F.asm:10 BRA @UNKNOWN2
    case 0xC49E76: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C4/C4CB8F.asm:12 LDY #4
    case 0xC49E78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4CB8F.asm:12 LDY #4
    // Overlapping static entry reached from 0xC49EC1.
    case 0xC49E79: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/unknown/C4/C4CB8F.asm:12 LDY #4
    // Overlapping static entry reached from 0xC49E78.
    case 0xC49E7A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CB8F.asm:13 LDA [@VIRTUAL06],Y
    case 0xC49E7B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4CB8F.asm:14 CMP #1
    case 0xC49E7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4CB8F.asm:14 CMP #1
    // Overlapping static entry reached from 0xC49E7D.
    case 0xC49E7F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4CB8F.asm:15 BNE @UNKNOWN1
    case 0xC49E80: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB8F.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49E82: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB8F.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49E84: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49E86: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49E88: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4CB8F.asm:17 LDA [@VIRTUAL0A]
    case 0xC49E8A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CB8F.asm:18 ASL
    case 0xC49E8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CB8F.asm:19 TAX
    case 0xC49E8D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CB8F.asm:20 STZ ENTITY_ANIMATION_FRAME,X
    case 0xC49E8E: cpu.execute_instruction<0x9E>(0x0010E8, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB8F.asm:22 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49E91: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB8F.asm:22 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49E93: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:22 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49E95: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:22 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49E97: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4CB8F.asm:23 LDA [@VIRTUAL0A]
    case 0xC49E99: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CB8F.asm:24 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC49E9B: cpu.execute_instruction<0x22>(0xC0A46E, 4); return true;
    // src/unknown/C4/C4CB8F.asm:25 LDA #20
    case 0xC49E9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4CB8F.asm:25 LDA #20
    // Overlapping static entry reached from 0xC49E9F.
    case 0xC49EA1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CB8F.asm:26 CLC
    case 0xC49EA2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CB8F.asm:27 ADC @VIRTUAL06
    case 0xC49EA3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CB8F.asm:28 STA @VIRTUAL06
    case 0xC49EA5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CB8F.asm:29 LDX @LOCAL00
    case 0xC49EA7: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4CB8F.asm:30 INX
    case 0xC49EA9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4CB8F.asm:31 STX @LOCAL00
    case 0xC49EAA: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4CB8F.asm:33 CPX ENTITY_FADE_STATES_LENGTH
    case 0xC49EAC: cpu.execute_instruction<0xEC>(0x00B67A, 3); return true;
    // src/unknown/C4/C4CB8F.asm:34 BCC @UNKNOWN0
    case 0xC49EAF: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4CB8F.asm:35 END_C_FUNCTION
    case 0xC49EB1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4CB8F.asm:35 END_C_FUNCTION
    case 0xC49EB2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CBE3.asm (unresolved).
bool execute_unresolved_c4_c4cbe3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CBE3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49EB3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CBE3.asm:6 END_STACK_VARS
    case 0xC49EB5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CBE3.asm:6 END_STACK_VARS
    case 0xC49EB6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CBE3.asm:6 END_STACK_VARS
    case 0xC49EB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CBE3.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC49EB7.
    case 0xC49EB9: cpu.execute_instruction<0xFF>(0x7EAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CBE3.asm:6 END_STACK_VARS
    case 0xC49EBA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49EBB: cpu.execute_instruction<0xAD>(0x00B67E, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49EB9.
    case 0xC49EBD: cpu.execute_instruction<0xB6>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49EBE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49EBD.
    case 0xC49EBF: cpu.execute_instruction<0x06>(0x0000AD, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49EC0: cpu.execute_instruction<0xAD>(0x00B680, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49EBF.
    case 0xC49EC1: cpu.execute_instruction<0x80>(0x0000B6, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49EC3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CBE3.asm:8 LDX #0
    case 0xC49EC5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4CBE3.asm:8 LDX #0
    // Overlapping static entry reached from 0xC49EC5.
    case 0xC49EC7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4CBE3.asm:9 STX @LOCAL00
    case 0xC49EC8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4CBE3.asm:10 BRA @UNKNOWN2
    case 0xC49ECA: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C4/C4CBE3.asm:12 LDY #4
    case 0xC49ECC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4CBE3.asm:12 LDY #4
    // Overlapping static entry reached from 0xC49ECC.
    case 0xC49ECE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CBE3.asm:13 LDA [@VIRTUAL06],Y
    case 0xC49ECF: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4CBE3.asm:14 CMP #1
    case 0xC49ED1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4CBE3.asm:14 CMP #1
    // Overlapping static entry reached from 0xC49ED1.
    case 0xC49ED3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4CBE3.asm:15 BNE @UNKNOWN1
    case 0xC49ED4: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CBE3.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49ED6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CBE3.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49ED8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CBE3.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49EDA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CBE3.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49EDC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4CBE3.asm:17 LDA [@VIRTUAL0A]
    case 0xC49EDE: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CBE3.asm:18 ASL
    case 0xC49EE0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CBE3.asm:19 TAX
    case 0xC49EE1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CBE3.asm:20 LDA #.LOWORD(-1)
    case 0xC49EE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4CBE3.asm:20 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC49EE2.
    case 0xC49EE4: cpu.execute_instruction<0xFF>(0x10E89D, 4); return true;
    // src/unknown/C4/C4CBE3.asm:21 STA ENTITY_ANIMATION_FRAME,X
    case 0xC49EE5: cpu.execute_instruction<0x9D>(0x0010E8, 3); return true;
    // src/unknown/C4/C4CBE3.asm:23 LDA #20
    case 0xC49EE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4CBE3.asm:23 LDA #20
    // Overlapping static entry reached from 0xC49EE8.
    case 0xC49EEA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CBE3.asm:24 CLC
    case 0xC49EEB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CBE3.asm:25 ADC @VIRTUAL06
    case 0xC49EEC: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CBE3.asm:26 STA @VIRTUAL06
    case 0xC49EEE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CBE3.asm:27 LDX @LOCAL00
    case 0xC49EF0: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4CBE3.asm:28 INX
    case 0xC49EF2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4CBE3.asm:29 STX @LOCAL00
    case 0xC49EF3: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4CBE3.asm:31 CPX ENTITY_FADE_STATES_LENGTH
    case 0xC49EF5: cpu.execute_instruction<0xEC>(0x00B67A, 3); return true;
    // src/unknown/C4/C4CBE3.asm:32 BCC @UNKNOWN0
    case 0xC49EF8: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4CBE3.asm:33 END_C_FUNCTION
    case 0xC49EFA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4CBE3.asm:33 END_C_FUNCTION
    case 0xC49EFB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CC2F.asm (unresolved).
bool execute_unresolved_c4_c4cc2f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CC2F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49EFF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CC2F.asm:14 END_STACK_VARS
    case 0xC49F01: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CC2F.asm:14 END_STACK_VARS
    case 0xC49F02: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CC2F.asm:14 END_STACK_VARS
    case 0xC49F03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CC2F.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC49F03.
    case 0xC49F05: cpu.execute_instruction<0xFF>(0x1E645B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CC2F.asm:14 END_STACK_VARS
    case 0xC49F06: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:15 STZ @LOCAL07
    case 0xC49F07: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/unknown/C4/C4CC2F.asm:16 LDA #0
    case 0xC49F09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CC2F.asm:16 LDA #0
    // Overlapping static entry reached from 0xC49F09.
    case 0xC49F0B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CC2F.asm:17 STA @VIRTUAL04
    case 0xC49F0C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CC2F.asm:18 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49F0E: cpu.execute_instruction<0xAD>(0x00B67E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:18 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49F11: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:18 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49F13: cpu.execute_instruction<0xAD>(0x00B680, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:18 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC49F16: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CC2F.asm:19 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC49F18: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:19 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC49F1A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:19 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC49F1C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:19 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC49F1E: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4CC2F.asm:20 LDA #0
    case 0xC49F20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CC2F.asm:20 LDA #0
    // Overlapping static entry reached from 0xC49F20.
    case 0xC49F22: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CC2F.asm:21 STA @VIRTUAL02
    case 0xC49F23: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:22 STA @LOCAL05
    case 0xC49F25: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:23 JMP @UNKNOWN4
    case 0xC49F27: cpu.execute_instruction<0x4C>(0x00A001, 3); return true;
    // src/unknown/C4/C4CC2F.asm:25 LDY #4
    case 0xC49F2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4CC2F.asm:25 LDY #4
    // Overlapping static entry reached from 0xC49F2A.
    case 0xC49F2C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CC2F.asm:26 LDA [@LOCAL06],Y
    case 0xC49F2D: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:27 CMP #2
    case 0xC49F2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4CC2F.asm:27 CMP #2
    // Overlapping static entry reached from 0xC49F2F.
    case 0xC49F31: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4CC2F.asm:28 BNEL @UNKNOWN3
    case 0xC49F32: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:28 BNEL @UNKNOWN3
    case 0xC49F34: cpu.execute_instruction<0x4C>(0x009FE1, 3); return true;
    // src/unknown/C4/C4CC2F.asm:29 INC @VIRTUAL04
    case 0xC49F37: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CC2F.asm:30 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC49F39: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:30 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC49F3B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:30 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC49F3D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:30 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC49F3F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CC2F.asm:31 LDA #18
    case 0xC49F41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/C4/C4CC2F.asm:31 LDA #18
    // Overlapping static entry reached from 0xC49F41.
    case 0xC49F43: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:32 CLC
    case 0xC49F44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:33 ADC @VIRTUAL06
    case 0xC49F45: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:34 STA @VIRTUAL06
    case 0xC49F47: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:35 STA @LOCAL03
    case 0xC49F49: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4CC2F.asm:36 LDA @VIRTUAL06+2
    case 0xC49F4B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4CC2F.asm:37 STA @LOCAL04
    case 0xC49F4D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4CC2F.asm:38 LDA [@LOCAL03]
    case 0xC49F4F: cpu.execute_instruction<0xA7>(0x000014, 2); return true;
    // src/unknown/C4/C4CC2F.asm:39 CMP #2
    case 0xC49F51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4CC2F.asm:39 CMP #2
    // Overlapping static entry reached from 0xC49F51.
    case 0xC49F53: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4CC2F.asm:40 BNE @UNKNOWN2
    case 0xC49F54: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4CC2F.asm:41 INC @LOCAL07
    case 0xC49F56: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // src/unknown/C4/C4CC2F.asm:42 JMP @UNKNOWN3
    case 0xC49F58: cpu.execute_instruction<0x4C>(0x009FE1, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CC2F.asm:44 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC49F5B: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:44 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC49F5D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:44 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC49F5F: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:44 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC49F61: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4CC2F.asm:45 LDA #16
    case 0xC49F63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C4CC2F.asm:45 LDA #16
    // Overlapping static entry reached from 0xC49F63.
    case 0xC49F65: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:46 CLC
    case 0xC49F66: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:47 ADC @VIRTUAL0A
    case 0xC49F67: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:48 STA @VIRTUAL0A
    case 0xC49F69: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:49 LDA [@VIRTUAL0A]
    case 0xC49F6B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:50 STA @LOCAL02
    case 0xC49F6D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4CC2F.asm:51 LDY #6
    case 0xC49F6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4CC2F.asm:51 LDY #6
    // Overlapping static entry reached from 0xC49F6F.
    case 0xC49F71: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CC2F.asm:52 LDA [@LOCAL06],Y
    case 0xC49F72: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:53 LSR
    case 0xC49F74: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:54 LSR
    case 0xC49F75: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:55 LSR
    case 0xC49F76: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:56 TAX
    case 0xC49F77: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:57 LDY #8
    case 0xC49F78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4CC2F.asm:57 LDY #8
    // Overlapping static entry reached from 0xC49F78.
    case 0xC49F7A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4CC2F.asm:58 LDA @LOCAL02
    case 0xC49F7B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4CC2F.asm:59 JSL MODULUS16
    case 0xC49F7D: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/unknown/C4/C4CC2F.asm:60 ASL
    case 0xC49F81: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:61 STA @VIRTUAL02
    case 0xC49F82: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:62 TXA
    case 0xC49F84: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:63 ASL
    case 0xC49F85: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:64 ASL
    case 0xC49F86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:65 ASL
    case 0xC49F87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:66 ASL
    case 0xC49F88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:67 ASL
    case 0xC49F89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:68 TAY
    case 0xC49F8A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:69 LDA @LOCAL02
    case 0xC49F8B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4CC2F.asm:70 LSR
    case 0xC49F8D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:71 LSR
    case 0xC49F8E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:72 LSR
    case 0xC49F8F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:73 JSL MULT16
    case 0xC49F90: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4CC2F.asm:74 CLC
    case 0xC49F94: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:75 ADC @VIRTUAL02
    case 0xC49F95: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:76 STA @LOCAL02
    case 0xC49F97: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CC2F.asm:77 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC49F99: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:77 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC49F9B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:77 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC49F9D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:77 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC49F9F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CC2F.asm:78 LDA #12
    case 0xC49FA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C4/C4CC2F.asm:78 LDA #12
    // Overlapping static entry reached from 0xC49FA1.
    case 0xC49FA3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:79 CLC
    case 0xC49FA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:80 ADC @VIRTUAL06
    case 0xC49FA5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:81 STA @VIRTUAL06
    case 0xC49FA7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:82 STX @LOCAL00
    case 0xC49FA9: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4CC2F.asm:83 LDA @LOCAL02
    case 0xC49FAB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4CC2F.asm:84 TAY
    case 0xC49FAD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:85 STY @LOCAL01
    case 0xC49FAE: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C4CC2F.asm:86 LDY #10
    case 0xC49FB0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C4CC2F.asm:86 LDY #10
    // Overlapping static entry reached from 0xC49FB0.
    case 0xC49FB2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CC2F.asm:87 LDA [@LOCAL06],Y
    case 0xC49FB3: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:88 TAX
    case 0xC49FB5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:89 LDA [@VIRTUAL06]
    case 0xC49FB6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:90 LDY @LOCAL01
    case 0xC49FB8: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C4CC2F.asm:91 JSL UNKNOWN_C428D1
    case 0xC49FBA: cpu.execute_instruction<0x22>(0xC4280F, 4); return true;
    // src/unknown/C4/C4CC2F.asm:92 LDY #0
    case 0xC49FBE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4CC2F.asm:92 LDY #0
    // Overlapping static entry reached from 0xC49FBE.
    case 0xC49FC0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CC2F.asm:93 LDA [@LOCAL06],Y
    case 0xC49FC1: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:94 TAX
    case 0xC49FC3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:95 LDA [@VIRTUAL06]
    case 0xC49FC4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:96 JSL UNKNOWN_C429AE
    case 0xC49FC6: cpu.execute_instruction<0x22>(0xC428EC, 4); return true;
    // src/unknown/C4/C4CC2F.asm:97 LDA [@VIRTUAL0A]
    case 0xC49FCA: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:98 INC
    case 0xC49FCC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:99 INC
    case 0xC49FCD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:100 STA [@VIRTUAL0A]
    case 0xC49FCE: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:101 LDY #8
    case 0xC49FD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4CC2F.asm:101 LDY #8
    // Overlapping static entry reached from 0xC49FD0.
    case 0xC49FD2: cpu.execute_instruction<0x00>(0x0000D7, 2); return true;
    // src/unknown/C4/C4CC2F.asm:102 CMP [@LOCAL06],Y
    case 0xC49FD3: cpu.execute_instruction<0xD7>(0x00001A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:103 BCC @UNKNOWN3
    case 0xC49FD5: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:104 LDA #1
    case 0xC49FD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4CC2F.asm:104 LDA #1
    // Overlapping static entry reached from 0xC49FD7.
    case 0xC49FD9: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/C4/C4CC2F.asm:105 STA [@VIRTUAL0A]
    case 0xC49FDA: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:106 LDA [@LOCAL03]
    case 0xC49FDC: cpu.execute_instruction<0xA7>(0x000014, 2); return true;
    // src/unknown/C4/C4CC2F.asm:107 INC
    case 0xC49FDE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:108 STA [@LOCAL03]
    case 0xC49FDF: cpu.execute_instruction<0x87>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CC2F.asm:110 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC49FE1: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:110 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC49FE3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:110 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC49FE5: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:110 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC49FE7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CC2F.asm:111 LDA #20
    case 0xC49FE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4CC2F.asm:111 LDA #20
    // Overlapping static entry reached from 0xC49FE9.
    case 0xC49FEB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:112 CLC
    case 0xC49FEC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:113 ADC @VIRTUAL06
    case 0xC49FED: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:114 STA @VIRTUAL06
    case 0xC49FEF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:115 STA @LOCAL06
    case 0xC49FF1: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:116 LDA @VIRTUAL06+2
    case 0xC49FF3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4CC2F.asm:117 STA @LOCAL06+2
    case 0xC49FF5: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4CC2F.asm:118 LDA @LOCAL05
    case 0xC49FF7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:119 STA @VIRTUAL02
    case 0xC49FF9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:120 INC @VIRTUAL02
    case 0xC49FFB: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:121 LDA @VIRTUAL02
    case 0xC49FFD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:122 STA @LOCAL05
    case 0xC49FFF: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:124 LDA @VIRTUAL02
    case 0xC4A001: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:125 CMP ENTITY_FADE_STATES_LENGTH
    case 0xC4A003: cpu.execute_instruction<0xCD>(0x00B67A, 3); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4CC2F.asm:126 BCCL @UNKNOWN0
    case 0xC4A006: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4CC2F.asm:126 BCCL @UNKNOWN0
    case 0xC4A008: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:126 BCCL @UNKNOWN0
    case 0xC4A00A: cpu.execute_instruction<0x4C>(0x009F2A, 3); return true;
    // src/unknown/C4/C4CC2F.asm:127 LDA @VIRTUAL04
    case 0xC4A00D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4CC2F.asm:128 SEC
    case 0xC4A00F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:129 SBC @LOCAL07
    case 0xC4A010: cpu.execute_instruction<0xE5>(0x00001E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4CC2F.asm:130 END_C_FUNCTION
    case 0xC4A012: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4CC2F.asm:130 END_C_FUNCTION
    case 0xC4A013: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CD44.asm (unresolved).
bool execute_unresolved_c4_c4cd44_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CD44.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A014: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CD44.asm:13 END_STACK_VARS
    case 0xC4A016: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CD44.asm:13 END_STACK_VARS
    case 0xC4A017: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CD44.asm:13 END_STACK_VARS
    case 0xC4A018: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CD44.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A018.
    case 0xC4A01A: cpu.execute_instruction<0xFF>(0x1E645B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CD44.asm:13 END_STACK_VARS
    case 0xC4A01B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:14 STZ @LOCAL06
    case 0xC4A01C: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/unknown/C4/C4CD44.asm:15 LDA #0
    case 0xC4A01E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CD44.asm:15 LDA #0
    // Overlapping static entry reached from 0xC4A01E.
    case 0xC4A020: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CD44.asm:16 STA @VIRTUAL04
    case 0xC4A021: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CD44.asm:17 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4A023: cpu.execute_instruction<0xAD>(0x00B67E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CD44.asm:17 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4A026: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:17 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4A028: cpu.execute_instruction<0xAD>(0x00B680, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:17 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4A02B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4CD44.asm:18 LDA #0
    case 0xC4A02D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CD44.asm:18 LDA #0
    // Overlapping static entry reached from 0xC4A02D.
    case 0xC4A02F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CD44.asm:19 STA @VIRTUAL02
    case 0xC4A030: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:20 STA @LOCAL05
    case 0xC4A032: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4CD44.asm:21 JMP @UNKNOWN8
    case 0xC4A034: cpu.execute_instruction<0x4C>(0x00A16D, 3); return true;
    // src/unknown/C4/C4CD44.asm:23 LDY #4
    case 0xC4A037: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4CD44.asm:23 LDY #4
    // Overlapping static entry reached from 0xC4A037.
    case 0xC4A039: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:24 LDA [@VIRTUAL0A],Y
    case 0xC4A03A: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:25 CMP #3
    case 0xC4A03C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4CD44.asm:25 CMP #3
    // Overlapping static entry reached from 0xC4A03C.
    case 0xC4A03E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4CD44.asm:26 BNEL @UNKNOWN7
    case 0xC4A03F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4CD44.asm:26 BNEL @UNKNOWN7
    case 0xC4A041: cpu.execute_instruction<0x4C>(0x00A15B, 3); return true;
    // src/unknown/C4/C4CD44.asm:27 INC @VIRTUAL04
    case 0xC4A044: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4CD44.asm:28 LDY #18
    case 0xC4A046: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/unknown/C4/C4CD44.asm:28 LDY #18
    // Overlapping static entry reached from 0xC4A046.
    case 0xC4A048: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:29 LDA [@VIRTUAL0A],Y
    case 0xC4A049: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:30 CMP #2
    case 0xC4A04B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4CD44.asm:30 CMP #2
    // Overlapping static entry reached from 0xC4A04B.
    case 0xC4A04D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4CD44.asm:31 BNE @UNKNOWN2
    case 0xC4A04E: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4CD44.asm:32 INC @LOCAL06
    case 0xC4A050: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // src/unknown/C4/C4CD44.asm:33 JMP @UNKNOWN7
    case 0xC4A052: cpu.execute_instruction<0x4C>(0x00A15B, 3); return true;
    // src/unknown/C4/C4CD44.asm:35 CMP #0
    case 0xC4A055: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4CD44.asm:35 CMP #0
    // Overlapping static entry reached from 0xC4A055.
    case 0xC4A057: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4CD44.asm:36 BEQ @UNKNOWN4
    case 0xC4A058: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/unknown/C4/C4CD44.asm:37 LDY #16
    case 0xC4A05A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C4CD44.asm:37 LDY #16
    // Overlapping static entry reached from 0xC4A05A.
    case 0xC4A05C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:38 LDA [@VIRTUAL0A],Y
    case 0xC4A05D: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:39 STA @LOCAL04
    case 0xC4A05F: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:40 AND #$0001
    case 0xC4A061: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C4CD44.asm:40 AND #$0001
    // Overlapping static entry reached from 0xC4A061.
    case 0xC4A063: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4CD44.asm:41 BNE @UNKNOWN3
    case 0xC4A064: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4CD44.asm:42 LDA @LOCAL04
    case 0xC4A066: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:43 TAX
    case 0xC4A068: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:44 BRA @UNKNOWN6
    case 0xC4A069: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C4/C4CD44.asm:46 LDA @LOCAL04
    case 0xC4A06B: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:47 STA @VIRTUAL02
    case 0xC4A06D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:48 LDY #6
    case 0xC4A06F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4CD44.asm:48 LDY #6
    // Overlapping static entry reached from 0xC4A06F.
    case 0xC4A071: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:49 LDA [@VIRTUAL0A],Y
    case 0xC4A072: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:50 SEC
    case 0xC4A074: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:51 SBC @VIRTUAL02
    case 0xC4A075: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:52 TAX
    case 0xC4A077: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:53 DEX
    case 0xC4A078: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:54 BRA @UNKNOWN6
    case 0xC4A079: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C4/C4CD44.asm:56 LDY #16
    case 0xC4A07B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C4CD44.asm:56 LDY #16
    // Overlapping static entry reached from 0xC4A07B.
    case 0xC4A07D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:57 LDA [@VIRTUAL0A],Y
    case 0xC4A07E: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:58 STA @LOCAL04
    case 0xC4A080: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:59 AND #$0001
    case 0xC4A082: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C4CD44.asm:59 AND #$0001
    // Overlapping static entry reached from 0xC4A082.
    case 0xC4A084: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4CD44.asm:60 BEQ @UNKNOWN5
    case 0xC4A085: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4CD44.asm:61 LDA @LOCAL04
    case 0xC4A087: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:62 TAX
    case 0xC4A089: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:63 BRA @UNKNOWN6
    case 0xC4A08A: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C4/C4CD44.asm:65 LDA @LOCAL04
    case 0xC4A08C: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:66 STA @VIRTUAL02
    case 0xC4A08E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:67 LDY #6
    case 0xC4A090: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4CD44.asm:67 LDY #6
    // Overlapping static entry reached from 0xC4A090.
    case 0xC4A092: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:68 LDA [@VIRTUAL0A],Y
    case 0xC4A093: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:69 SEC
    case 0xC4A095: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:70 SBC @VIRTUAL02
    case 0xC4A096: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:71 TAX
    case 0xC4A098: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:72 DEX
    case 0xC4A099: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:74 LDA #12
    case 0xC4A09A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C4/C4CD44.asm:74 LDA #12
    // Overlapping static entry reached from 0xC4A09A.
    case 0xC4A09C: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4CD44.asm:75 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4A09D: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4CD44.asm:75 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4A09F: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:75 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4A0A1: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:75 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4A0A3: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:76 CLC
    case 0xC4A0A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:77 ADC @VIRTUAL06
    case 0xC4A0A6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:78 STA @VIRTUAL06
    case 0xC4A0A8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:79 STA @LOCAL03
    case 0xC4A0AA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4CD44.asm:80 LDA @VIRTUAL06+2
    case 0xC4A0AC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:81 STA @LOCAL03+2
    case 0xC4A0AE: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CD44.asm:82 LDA #6
    case 0xC4A0B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C4/C4CD44.asm:82 LDA #6
    // Overlapping static entry reached from 0xC4A0B0.
    case 0xC4A0B2: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4CD44.asm:83 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4A0B3: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4CD44.asm:83 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4A0B5: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:83 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4A0B7: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:83 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4A0B9: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:84 CLC
    case 0xC4A0BB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:85 ADC @VIRTUAL06
    case 0xC4A0BC: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:86 STA @VIRTUAL06
    case 0xC4A0BE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:87 STA @LOCAL02
    case 0xC4A0C0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4CD44.asm:88 LDA @VIRTUAL06+2
    case 0xC4A0C2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:89 STA @LOCAL02+2
    case 0xC4A0C4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4CD44.asm:90 LDY #8
    case 0xC4A0C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4CD44.asm:90 LDY #8
    // Overlapping static entry reached from 0xC4A0C6.
    case 0xC4A0C8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:91 LDA [@VIRTUAL0A],Y
    case 0xC4A0C9: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:92 STA @LOCAL00
    case 0xC4A0CB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4CD44.asm:93 LDA [@LOCAL02]
    case 0xC4A0CD: cpu.execute_instruction<0xA7>(0x000012, 2); return true;
    // src/unknown/C4/C4CD44.asm:94 LSR
    case 0xC4A0CF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:95 LSR
    case 0xC4A0D0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:96 LSR
    case 0xC4A0D1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:97 ASL
    case 0xC4A0D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:98 ASL
    case 0xC4A0D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:99 ASL
    case 0xC4A0D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:100 ASL
    case 0xC4A0D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:101 ASL
    case 0xC4A0D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:102 STA @LOCAL01
    case 0xC4A0D7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4CD44.asm:103 TXY
    case 0xC4A0D9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:104 STY @LOCAL04
    case 0xC4A0DA: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:105 LDY #10
    case 0xC4A0DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C4CD44.asm:105 LDY #10
    // Overlapping static entry reached from 0xC4A0DC.
    case 0xC4A0DE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:106 LDA [@VIRTUAL0A],Y
    case 0xC4A0DF: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:107 TAX
    case 0xC4A0E1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CD44.asm:108 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4A0E2: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CD44.asm:108 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4A0E4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:108 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4A0E6: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:108 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4A0E8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:109 LDA [@VIRTUAL06]
    case 0xC4A0EA: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:110 LDY @LOCAL04
    case 0xC4A0EC: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:111 JSL UNKNOWN_C428FC
    case 0xC4A0EE: cpu.execute_instruction<0x22>(0xC4283A, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CD44.asm:112 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4A0F2: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CD44.asm:112 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4A0F4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:112 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4A0F6: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:112 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4A0F8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:113 LDA [@VIRTUAL06]
    case 0xC4A0FA: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:114 TAX
    case 0xC4A0FC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CD44.asm:115 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4A0FD: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CD44.asm:115 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4A0FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:115 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4A101: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:115 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4A103: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:116 LDA [@VIRTUAL06]
    case 0xC4A105: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:117 JSL UNKNOWN_C429AE
    case 0xC4A107: cpu.execute_instruction<0x22>(0xC428EC, 4); return true;
    // src/unknown/C4/C4CD44.asm:118 LDA #16
    case 0xC4A10B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C4CD44.asm:118 LDA #16
    // Overlapping static entry reached from 0xC4A10B.
    case 0xC4A10D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4CD44.asm:119 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4A10E: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4CD44.asm:119 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4A110: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:119 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4A112: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:119 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4A114: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:120 CLC
    case 0xC4A116: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:121 ADC @VIRTUAL06
    case 0xC4A117: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:122 STA @VIRTUAL06
    case 0xC4A119: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:123 STA @LOCAL03
    case 0xC4A11B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4CD44.asm:124 LDA @VIRTUAL06+2
    case 0xC4A11D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:125 STA @LOCAL03+2
    case 0xC4A11F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CD44.asm:126 LDA [@VIRTUAL06]
    case 0xC4A121: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:127 INC
    case 0xC4A123: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:128 STA @LOCAL04
    case 0xC4A124: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:129 STA [@VIRTUAL06]
    case 0xC4A126: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:130 LDA [@LOCAL02]
    case 0xC4A128: cpu.execute_instruction<0xA7>(0x000012, 2); return true;
    // src/unknown/C4/C4CD44.asm:131 LSR
    case 0xC4A12A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:132 STA @VIRTUAL02
    case 0xC4A12B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:133 LDA @LOCAL04
    case 0xC4A12D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:134 CMP @VIRTUAL02
    case 0xC4A12F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:135 BCC @UNKNOWN7
    case 0xC4A131: cpu.execute_instruction<0x90>(0x000028, 2); return true;
    // src/unknown/C4/C4CD44.asm:136 LDA #18
    case 0xC4A133: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/C4/C4CD44.asm:136 LDA #18
    // Overlapping static entry reached from 0xC4A133.
    case 0xC4A135: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4CD44.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4A136: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4CD44.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4A138: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4A13A: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4A13C: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:138 CLC
    case 0xC4A13E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:139 ADC @VIRTUAL06
    case 0xC4A13F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:140 STA @VIRTUAL06
    case 0xC4A141: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:141 STA @LOCAL02
    case 0xC4A143: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4CD44.asm:142 LDA @VIRTUAL06+2
    case 0xC4A145: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:143 STA @LOCAL02+2
    case 0xC4A147: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4CD44.asm:144 LDA [@LOCAL02]
    case 0xC4A149: cpu.execute_instruction<0xA7>(0x000012, 2); return true;
    // src/unknown/C4/C4CD44.asm:145 INC
    case 0xC4A14B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:146 STA [@LOCAL02]
    case 0xC4A14C: cpu.execute_instruction<0x87>(0x000012, 2); return true;
    // src/unknown/C4/C4CD44.asm:147 LDA #0
    case 0xC4A14E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CD44.asm:147 LDA #0
    // Overlapping static entry reached from 0xC4A14E.
    case 0xC4A150: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4CD44.asm:148 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC4A151: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4CD44.asm:148 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC4A153: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:148 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC4A155: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:148 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC4A157: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:149 STA [@VIRTUAL06]
    case 0xC4A159: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:151 LDA #20
    case 0xC4A15B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4CD44.asm:151 LDA #20
    // Overlapping static entry reached from 0xC4A15B.
    case 0xC4A15D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CD44.asm:152 CLC
    case 0xC4A15E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:153 ADC @VIRTUAL0A
    case 0xC4A15F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:154 STA @VIRTUAL0A
    case 0xC4A161: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:155 LDA @LOCAL05
    case 0xC4A163: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4CD44.asm:156 STA @VIRTUAL02
    case 0xC4A165: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:157 INC @VIRTUAL02
    case 0xC4A167: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:158 LDA @VIRTUAL02
    case 0xC4A169: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:159 STA @LOCAL05
    case 0xC4A16B: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4CD44.asm:161 LDA @VIRTUAL02
    case 0xC4A16D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:162 CMP ENTITY_FADE_STATES_LENGTH
    case 0xC4A16F: cpu.execute_instruction<0xCD>(0x00B67A, 3); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4CD44.asm:163 BCCL @UNKNOWN0
    case 0xC4A172: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4CD44.asm:163 BCCL @UNKNOWN0
    case 0xC4A174: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4CD44.asm:163 BCCL @UNKNOWN0
    case 0xC4A176: cpu.execute_instruction<0x4C>(0x00A037, 3); return true;
    // src/unknown/C4/C4CD44.asm:164 LDA @VIRTUAL04
    case 0xC4A179: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4CD44.asm:165 SEC
    case 0xC4A17B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:166 SBC @LOCAL06
    case 0xC4A17C: cpu.execute_instruction<0xE5>(0x00001E, 2); return true;
    // src/unknown/C4/C4CD44.asm:167 PLD
    case 0xC4A17E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:168 RTL
    case 0xC4A17F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CEB0.asm (unresolved).
bool execute_unresolved_c4_c4ceb0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CEB0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A180: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CEB0.asm:5 END_STACK_VARS
    case 0xC4A182: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CEB0.asm:5 END_STACK_VARS
    case 0xC4A183: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CEB0.asm:5 END_STACK_VARS
    case 0xC4A184: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CEB0.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A184.
    case 0xC4A186: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CEB0.asm:5 END_STACK_VARS
    case 0xC4A187: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4A188: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007F00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A188.
    case 0xC4A18A: cpu.execute_instruction<0x7F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4A18B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4A18D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A18A.
    case 0xC4A18E: cpu.execute_instruction<0x7F>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A18D.
    case 0xC4A18F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4A190: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CEB0.asm:7 LDX #0
    case 0xC4A192: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4CEB0.asm:7 LDX #0
    // Overlapping static entry reached from 0xC4A192.
    case 0xC4A194: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4CEB0.asm:8 BRA @UNKNOWN1
    case 0xC4A195: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C4/C4CEB0.asm:10 LDA #0
    case 0xC4A197: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CEB0.asm:10 LDA #0
    // Overlapping static entry reached from 0xC4A197.
    case 0xC4A199: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/C4/C4CEB0.asm:11 STA [@VIRTUAL06]
    case 0xC4A19A: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4CEB0.asm:12 INC @VIRTUAL06
    case 0xC4A19C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4CEB0.asm:13 INC @VIRTUAL06
    case 0xC4A19E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4CEB0.asm:14 INX
    case 0xC4A1A0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4CEB0.asm:16 CPX #64
    case 0xC4A1A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000040, 2); else cpu.execute_instruction<0xE0>(0x000040, 3); return true;
    // src/unknown/C4/C4CEB0.asm:16 CPX #64
    // Overlapping static entry reached from 0xC4A1A1.
    case 0xC4A1A3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4CEB0.asm:17 BCC @UNKNOWN0
    case 0xC4A1A4: cpu.execute_instruction<0x90>(0x0000F1, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4CEB0.asm:18 END_C_FUNCTION
    case 0xC4A1A6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4CEB0.asm:18 END_C_FUNCTION
    case 0xC4A1A7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CED8.asm (unresolved).
bool execute_unresolved_c4_c4ced8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CED8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A1A8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CED8.asm:12 END_STACK_VARS
    case 0xC4A1AA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CED8.asm:12 END_STACK_VARS
    case 0xC4A1AB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CED8.asm:12 END_STACK_VARS
    case 0xC4A1AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CED8.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A1AC.
    case 0xC4A1AE: cpu.execute_instruction<0xFF>(0x7EAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CED8.asm:12 END_STACK_VARS
    case 0xC4A1AF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CED8.asm:13 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4A1B0: cpu.execute_instruction<0xAD>(0x00B67E, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CED8.asm:13 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A1AE.
    case 0xC4A1B2: cpu.execute_instruction<0xB6>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CED8.asm:13 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4A1B3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CED8.asm:13 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A1B2.
    case 0xC4A1B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CED8.asm:13 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4A1B5: cpu.execute_instruction<0xAD>(0x00B680, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CED8.asm:13 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4A1B8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4A1BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007F00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A1BA.
    case 0xC4A1BC: cpu.execute_instruction<0x7F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4A1BD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4A1BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A1BC.
    case 0xC4A1C0: cpu.execute_instruction<0x7F>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A1BF.
    case 0xC4A1C1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4A1C2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CED8.asm:15 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC4A1C4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CED8.asm:15 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC4A1C6: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CED8.asm:15 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC4A1C8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CED8.asm:15 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC4A1CA: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4CED8.asm:16 JSL RAND
    case 0xC4A1CC: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C4/C4CED8.asm:17 AND #$003F
    case 0xC4A1D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C4/C4CED8.asm:17 AND #$003F
    // Overlapping static entry reached from 0xC4A1D0.
    case 0xC4A1D2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CED8.asm:18 STA @LOCAL05
    case 0xC4A1D3: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:19 ASL
    case 0xC4A1D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:20 CLC
    case 0xC4A1D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:21 ADC @VIRTUAL06
    case 0xC4A1D7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:22 STA @VIRTUAL06
    case 0xC4A1D9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:23 LDA [@VIRTUAL06]
    case 0xC4A1DB: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:24 BEQ @UNKNOWN1
    case 0xC4A1DD: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C4/C4CED8.asm:26 LDA @LOCAL05
    case 0xC4A1DF: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:27 INC
    case 0xC4A1E1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:28 AND #$003F
    case 0xC4A1E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C4/C4CED8.asm:28 AND #$003F
    // Overlapping static entry reached from 0xC4A1E2.
    case 0xC4A1E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CED8.asm:29 STA @LOCAL05
    case 0xC4A1E5: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:30 ASL
    case 0xC4A1E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4CED8.asm:31 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4A1E8: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4CED8.asm:31 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4A1EA: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4CED8.asm:31 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4A1EC: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4CED8.asm:31 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4A1EE: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4CED8.asm:32 CLC
    case 0xC4A1F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:33 ADC @VIRTUAL06
    case 0xC4A1F1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:34 STA @VIRTUAL06
    case 0xC4A1F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:35 LDA [@VIRTUAL06]
    case 0xC4A1F5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:36 BNE @UNKNOWN0
    case 0xC4A1F7: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C4/C4CED8.asm:38 LDA @LOCAL05
    case 0xC4A1F9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:39 ASL
    case 0xC4A1FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4CED8.asm:40 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4A1FC: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4CED8.asm:40 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4A1FE: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4CED8.asm:40 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4A200: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4CED8.asm:40 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4A202: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4CED8.asm:41 CLC
    case 0xC4A204: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:42 ADC @VIRTUAL06
    case 0xC4A205: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:43 STA @VIRTUAL06
    case 0xC4A207: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:44 LDA #1
    case 0xC4A209: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4CED8.asm:44 LDA #1
    // Overlapping static entry reached from 0xC4A209.
    case 0xC4A20B: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/C4/C4CED8.asm:45 STA [@VIRTUAL06]
    case 0xC4A20C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:46 LDA @LOCAL05
    case 0xC4A20E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:47 LSR
    case 0xC4A210: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:48 LSR
    case 0xC4A211: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:49 LSR
    case 0xC4A212: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:50 STA @LOCAL04
    case 0xC4A213: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4CED8.asm:51 LDY #8
    case 0xC4A215: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4CED8.asm:51 LDY #8
    // Overlapping static entry reached from 0xC4A215.
    case 0xC4A217: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4CED8.asm:52 LDA @LOCAL05
    case 0xC4A218: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:53 JSL MODULUS16
    case 0xC4A21A: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/unknown/C4/C4CED8.asm:54 STA @LOCAL03
    case 0xC4A21E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4CED8.asm:55 STZ @LOCAL02
    case 0xC4A220: cpu.execute_instruction<0x64>(0x000012, 2); return true;
    // src/unknown/C4/C4CED8.asm:56 JMP @UNKNOWN10
    case 0xC4A222: cpu.execute_instruction<0x4C>(0x00A2D1, 3); return true;
    // src/unknown/C4/C4CED8.asm:58 LDY #4
    case 0xC4A225: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4CED8.asm:58 LDY #4
    // Overlapping static entry reached from 0xC4A225.
    case 0xC4A227: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CED8.asm:59 LDA [@VIRTUAL0A],Y
    case 0xC4A228: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:60 CMP #4
    case 0xC4A22A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4CED8.asm:60 CMP #4
    // Overlapping static entry reached from 0xC4A22A.
    case 0xC4A22C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4CED8.asm:61 BNEL @UNKNOWN9
    case 0xC4A22D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4CED8.asm:61 BNEL @UNKNOWN9
    case 0xC4A22F: cpu.execute_instruction<0x4C>(0x00A2C7, 3); return true;
    // src/unknown/C4/C4CED8.asm:62 LDA #0
    case 0xC4A232: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CED8.asm:62 LDA #0
    // Overlapping static entry reached from 0xC4A232.
    case 0xC4A234: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CED8.asm:63 STA @VIRTUAL04
    case 0xC4A235: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4CED8.asm:64 BRA @UNKNOWN7
    case 0xC4A237: cpu.execute_instruction<0x80>(0x000065, 2); return true;
    // src/unknown/C4/C4CED8.asm:66 LDA #0
    case 0xC4A239: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CED8.asm:66 LDA #0
    // Overlapping static entry reached from 0xC4A239.
    case 0xC4A23B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CED8.asm:67 STA @VIRTUAL02
    case 0xC4A23C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:68 STA @LOCAL01
    case 0xC4A23E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4CED8.asm:69 BRA @UNKNOWN6
    case 0xC4A240: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/unknown/C4/C4CED8.asm:71 LDA @LOCAL01
    case 0xC4A242: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4CED8.asm:72 STA @VIRTUAL02
    case 0xC4A244: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:73 ASL
    case 0xC4A246: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:74 ASL
    case 0xC4A247: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:75 ASL
    case 0xC4A248: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:76 ASL
    case 0xC4A249: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:77 ASL
    case 0xC4A24A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:78 PHA
    case 0xC4A24B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:79 LDA @LOCAL04
    case 0xC4A24C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4CED8.asm:80 ASL
    case 0xC4A24E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:81 STA @VIRTUAL02
    case 0xC4A24F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:82 LDA @VIRTUAL04
    case 0xC4A251: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4CED8.asm:83 JSL MULT16
    case 0xC4A253: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C4CED8.asm:84 ASL
    case 0xC4A257: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:85 ASL
    case 0xC4A258: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:86 ASL
    case 0xC4A259: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:87 ASL
    case 0xC4A25A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:88 ASL
    case 0xC4A25B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:89 CLC
    case 0xC4A25C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:90 ADC @VIRTUAL02
    case 0xC4A25D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:91 PLY
    case 0xC4A25F: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:92 STY @VIRTUAL02
    case 0xC4A260: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:93 CLC
    case 0xC4A262: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:94 ADC @VIRTUAL02
    case 0xC4A263: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:95 STA @LOCAL05
    case 0xC4A265: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:96 LDA @LOCAL03
    case 0xC4A267: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4CED8.asm:97 STA @LOCAL00
    case 0xC4A269: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4CED8.asm:98 LDA @LOCAL05
    case 0xC4A26B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:99 TAY
    case 0xC4A26D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:100 STY @LOCAL05
    case 0xC4A26E: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:101 LDY #10
    case 0xC4A270: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C4CED8.asm:101 LDY #10
    // Overlapping static entry reached from 0xC4A270.
    case 0xC4A272: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CED8.asm:102 LDA [@VIRTUAL0A],Y
    case 0xC4A273: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:103 TAX
    case 0xC4A275: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:104 LDY #12
    case 0xC4A276: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C4CED8.asm:104 LDY #12
    // Overlapping static entry reached from 0xC4A276.
    case 0xC4A278: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CED8.asm:105 LDA [@VIRTUAL0A],Y
    case 0xC4A279: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:106 LDY @LOCAL05
    case 0xC4A27B: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:107 JSL UNKNOWN_C42965
    case 0xC4A27D: cpu.execute_instruction<0x22>(0xC428A3, 4); return true;
    // src/unknown/C4/C4CED8.asm:108 LDA @LOCAL01
    case 0xC4A281: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4CED8.asm:109 STA @VIRTUAL02
    case 0xC4A283: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:110 INC @VIRTUAL02
    case 0xC4A285: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:111 LDA @VIRTUAL02
    case 0xC4A287: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:112 STA @LOCAL01
    case 0xC4A289: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4CED8.asm:114 LDY #6
    case 0xC4A28B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4CED8.asm:114 LDY #6
    // Overlapping static entry reached from 0xC4A28B.
    case 0xC4A28D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CED8.asm:115 LDA [@VIRTUAL0A],Y
    case 0xC4A28E: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:116 LSR
    case 0xC4A290: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:117 LSR
    case 0xC4A291: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:118 LSR
    case 0xC4A292: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:119 TAY
    case 0xC4A293: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:120 LDA @VIRTUAL02
    case 0xC4A294: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:121 STY @VIRTUAL02
    case 0xC4A296: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:122 CMP @VIRTUAL02
    case 0xC4A298: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:123 BCC @UNKNOWN5
    case 0xC4A29A: cpu.execute_instruction<0x90>(0x0000A6, 2); return true;
    // src/unknown/C4/C4CED8.asm:124 INC @VIRTUAL04
    case 0xC4A29C: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4CED8.asm:126 LDY #8
    case 0xC4A29E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4CED8.asm:126 LDY #8
    // Overlapping static entry reached from 0xC4A29E.
    case 0xC4A2A0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CED8.asm:127 LDA [@VIRTUAL0A],Y
    case 0xC4A2A1: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:128 LSR
    case 0xC4A2A3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:129 LSR
    case 0xC4A2A4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:130 LSR
    case 0xC4A2A5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:131 STA @VIRTUAL02
    case 0xC4A2A6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:132 LDA @VIRTUAL04
    case 0xC4A2A8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4CED8.asm:133 CMP @VIRTUAL02
    case 0xC4A2AA: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4CED8.asm:134 BCCL @UNKNOWN4
    case 0xC4A2AC: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4CED8.asm:134 BCCL @UNKNOWN4
    case 0xC4A2AE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4CED8.asm:134 BCCL @UNKNOWN4
    case 0xC4A2B0: cpu.execute_instruction<0x4C>(0x00A239, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CED8.asm:135 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4A2B3: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CED8.asm:135 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4A2B5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CED8.asm:135 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4A2B7: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CED8.asm:135 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4A2B9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CED8.asm:136 LDA [@VIRTUAL06]
    case 0xC4A2BB: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:137 TAX
    case 0xC4A2BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:138 LDY #12
    case 0xC4A2BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C4CED8.asm:138 LDY #12
    // Overlapping static entry reached from 0xC4A2BE.
    case 0xC4A2C0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CED8.asm:139 LDA [@VIRTUAL0A],Y
    case 0xC4A2C1: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:140 JSL UNKNOWN_C429AE
    case 0xC4A2C3: cpu.execute_instruction<0x22>(0xC428EC, 4); return true;
    // src/unknown/C4/C4CED8.asm:142 LDA #20
    case 0xC4A2C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4CED8.asm:142 LDA #20
    // Overlapping static entry reached from 0xC4A2C7.
    case 0xC4A2C9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:143 CLC
    case 0xC4A2CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:144 ADC @VIRTUAL0A
    case 0xC4A2CB: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:145 STA @VIRTUAL0A
    case 0xC4A2CD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:146 INC @LOCAL02
    case 0xC4A2CF: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/unknown/C4/C4CED8.asm:148 LDA ENTITY_FADE_STATES_LENGTH
    case 0xC4A2D1: cpu.execute_instruction<0xAD>(0x00B67A, 3); return true;
    // src/unknown/C4/C4CED8.asm:149 CMP @LOCAL02
    case 0xC4A2D4: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/unknown/C4/C4CED8.asm:150 BGTL @UNKNOWN2
    case 0xC4A2D6: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/unknown/C4/C4CED8.asm:150 BGTL @UNKNOWN2
    case 0xC4A2D8: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/unknown/C4/C4CED8.asm:150 BGTL @UNKNOWN2
    case 0xC4A2DA: cpu.execute_instruction<0x4C>(0x00A225, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4CED8.asm:151 END_C_FUNCTION
    case 0xC4A2DD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4CED8.asm:151 END_C_FUNCTION
    case 0xC4A2DE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D00F.asm (unresolved).
bool execute_unresolved_c4_c4d00f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D00F.asm:3 BEGIN_C_FUNCTION
    case 0xC4A2DF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    case 0xC4A2E1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    case 0xC4A2E2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    case 0xC4A2E3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    case 0xC4A2E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A2E4.
    case 0xC4A2E6: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    case 0xC4A2E7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    case 0xC4A2E8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:11 STA @VIRTUAL02
    case 0xC4A2E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D00F.asm:11 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4A2E6.
    case 0xC4A2EA: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    case 0xC4A2EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00F67B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A2EB.
    case 0xC4A2ED: cpu.execute_instruction<0xF6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    case 0xC4A2EE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A2ED.
    case 0xC4A2EF: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    case 0xC4A2F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A2EF.
    case 0xC4A2F1: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A2F0.
    case 0xC4A2F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    case 0xC4A2F3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4D00F.asm:13 TYA
    case 0xC4A2F5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:14 ASL
    case 0xC4A2F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:15 PHA
    case 0xC4A2F7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:16 TXA
    case 0xC4A2F8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:17 SEC
    case 0xC4A2F9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:18 SBC #$41
    case 0xC4A2FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000041, 2); else cpu.execute_instruction<0xE9>(0x000041, 3); return true;
    // src/unknown/C4/C4D00F.asm:18 SBC #$41
    // Overlapping static entry reached from 0xC4A2FA.
    case 0xC4A2FC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/unknown/C4/C4D00F.asm:19 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC4A2FD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/unknown/C4/C4D00F.asm:19 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC4A2FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/unknown/C4/C4D00F.asm:19 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC4A300: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/unknown/C4/C4D00F.asm:19 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC4A301: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/unknown/C4/C4D00F.asm:19 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC4A303: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:20 PLY
    case 0xC4A304: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:21 STY @VIRTUAL04
    case 0xC4A305: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C4D00F.asm:22 CLC
    case 0xC4A307: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:23 ADC @VIRTUAL04
    case 0xC4A308: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4D00F.asm:24 CLC
    case 0xC4A30A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:25 ADC @VIRTUAL06
    case 0xC4A30B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4D00F.asm:26 STA @VIRTUAL06
    case 0xC4A30D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4D00F.asm:27 LDX #2
    case 0xC4A30F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C4/C4D00F.asm:27 LDX #2
    // Overlapping static entry reached from 0xC4A30F.
    case 0xC4A311: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D00F.asm:28 STX @LOCAL00
    case 0xC4A312: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D00F.asm:29 BRA @UNKNOWN1
    case 0xC4A314: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C4D00F.asm:31 LDX @VIRTUAL02
    case 0xC4A316: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4D00F.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A318: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D00F.asm:33 STA __BSS_START__,X
    case 0xC4A31A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D00F.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC4A31D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D00F.asm:35 INC @VIRTUAL06
    case 0xC4A31F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4D00F.asm:36 INC @VIRTUAL02
    case 0xC4A321: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4D00F.asm:37 LDX @LOCAL00
    case 0xC4A323: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4D00F.asm:38 DEX
    case 0xC4A325: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:39 STX @LOCAL00
    case 0xC4A326: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D00F.asm:41 BEQ @UNKNOWN2
    case 0xC4A328: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C4D00F.asm:42 LDA [@VIRTUAL06]
    case 0xC4A32A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4D00F.asm:43 AND #$00FF
    case 0xC4A32C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D00F.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC4A32C.
    case 0xC4A32E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D00F.asm:44 BNE @UNKNOWN0
    case 0xC4A32F: cpu.execute_instruction<0xD0>(0x0000E5, 2); return true;
    // src/unknown/C4/C4D00F.asm:46 LDA @VIRTUAL02
    case 0xC4A331: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D00F.asm:47 END_C_FUNCTION
    case 0xC4A333: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4D00F.asm:47 END_C_FUNCTION
    case 0xC4A334: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
