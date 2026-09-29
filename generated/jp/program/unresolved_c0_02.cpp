// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C0/C041E3.asm (unresolved).
bool execute_unresolved_c0_c041e3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C041E3.asm:3 BEGIN_C_FUNCTION
    case 0xC0446A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C041E3.asm:7 END_STACK_VARS
    case 0xC0446C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C041E3.asm:7 END_STACK_VARS
    case 0xC0446D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C041E3.asm:7 END_STACK_VARS
    case 0xC0446E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C041E3.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0446E.
    case 0xC04470: cpu.execute_instruction<0xFF>(0x30AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C041E3.asm:7 END_STACK_VARS
    case 0xC04471: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:8 LDA GAME_STATE+game_state::leader_direction
    case 0xC04472: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C041E3.asm:8 LDA GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC04470.
    case 0xC04474: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:9 AND #$FFFE
    case 0xC04475: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C0/C041E3.asm:9 AND #$FFFE
    // Overlapping static entry reached from 0xC04475.
    case 0xC04477: cpu.execute_instruction<0xFF>(0x1084A8, 4); return true;
    // src/unknown/C0/C041E3.asm:10 TAY
    case 0xC04478: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:11 STY @LOCAL01
    case 0xC04479: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C041E3.asm:12 TYX
    case 0xC0447B: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:13 STX @LOCAL00
    case 0xC0447C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:14 TXA
    case 0xC0447E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:15 JSR UNKNOWN_C04116
    case 0xC0447F: cpu.execute_instruction<0x20>(0x00439D, 3); return true;
    // src/unknown/C0/C041E3.asm:16 CMP #.LOWORD(-1)
    case 0xC04482: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C041E3.asm:16 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04482.
    case 0xC04484: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C041E3.asm:17 BEQ @UNKNOWN0
    case 0xC04485: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C041E3.asm:18 CMP #0
    case 0xC04487: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C041E3.asm:18 CMP #0
    // Overlapping static entry reached from 0xC04484.
    case 0xC04488: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C041E3.asm:18 CMP #0
    // Overlapping static entry reached from 0xC04487.
    case 0xC04489: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C041E3.asm:19 BEQ @UNKNOWN0
    case 0xC0448A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C041E3.asm:20 LDX @LOCAL00
    case 0xC0448C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:21 TXA
    case 0xC0448E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:22 BRA @UNKNOWN4
    case 0xC0448F: cpu.execute_instruction<0x80>(0x00006D, 2); return true;
    // src/unknown/C0/C041E3.asm:24 LDX @LOCAL00
    case 0xC04491: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:25 TXA
    case 0xC04493: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:26 INC
    case 0xC04494: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:27 INC
    case 0xC04495: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:28 AND #$0007
    case 0xC04496: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C041E3.asm:28 AND #$0007
    // Overlapping static entry reached from 0xC04496.
    case 0xC04498: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C041E3.asm:29 TAX
    case 0xC04499: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:30 STX @LOCAL00
    case 0xC0449A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:31 STX GAME_STATE+game_state::leader_direction
    case 0xC0449C: cpu.execute_instruction<0x8E>(0x009B30, 3); return true;
    // src/unknown/C0/C041E3.asm:32 TXA
    case 0xC0449F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:33 JSR UNKNOWN_C04116
    case 0xC044A0: cpu.execute_instruction<0x20>(0x00439D, 3); return true;
    // src/unknown/C0/C041E3.asm:34 CMP #.LOWORD(-1)
    case 0xC044A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C041E3.asm:34 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC044A3.
    case 0xC044A5: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C041E3.asm:35 BEQ @UNKNOWN1
    case 0xC044A6: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C041E3.asm:36 CMP #0
    case 0xC044A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C041E3.asm:36 CMP #0
    // Overlapping static entry reached from 0xC044A5.
    case 0xC044A9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C041E3.asm:36 CMP #0
    // Overlapping static entry reached from 0xC044A8.
    case 0xC044AA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C041E3.asm:37 BEQ @UNKNOWN1
    case 0xC044AB: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C041E3.asm:38 LDX @LOCAL00
    case 0xC044AD: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:39 TXA
    case 0xC044AF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:40 BRA @UNKNOWN4
    case 0xC044B0: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C0/C041E3.asm:42 LDX @LOCAL00
    case 0xC044B2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:43 TXA
    case 0xC044B4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:44 INC
    case 0xC044B5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:45 INC
    case 0xC044B6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:46 INC
    case 0xC044B7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:47 INC
    case 0xC044B8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:48 AND #$0007
    case 0xC044B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C041E3.asm:48 AND #$0007
    // Overlapping static entry reached from 0xC044B9.
    case 0xC044BB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C041E3.asm:49 TAX
    case 0xC044BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:50 STX @LOCAL00
    case 0xC044BD: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:51 STX GAME_STATE+game_state::leader_direction
    case 0xC044BF: cpu.execute_instruction<0x8E>(0x009B30, 3); return true;
    // src/unknown/C0/C041E3.asm:52 TXA
    case 0xC044C2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:53 JSR UNKNOWN_C04116
    case 0xC044C3: cpu.execute_instruction<0x20>(0x00439D, 3); return true;
    // src/unknown/C0/C041E3.asm:54 CMP #.LOWORD(-1)
    case 0xC044C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C041E3.asm:54 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC044C6.
    case 0xC044C8: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C041E3.asm:55 BEQ @UNKNOWN2
    case 0xC044C9: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C041E3.asm:56 CMP #0
    case 0xC044CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C041E3.asm:56 CMP #0
    // Overlapping static entry reached from 0xC044C8.
    case 0xC044CC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C041E3.asm:56 CMP #0
    // Overlapping static entry reached from 0xC044CB.
    case 0xC044CD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C041E3.asm:57 BEQ @UNKNOWN2
    case 0xC044CE: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C041E3.asm:58 LDX @LOCAL00
    case 0xC044D0: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:59 TXA
    case 0xC044D2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:60 BRA @UNKNOWN4
    case 0xC044D3: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C041E3.asm:62 LDX @LOCAL00
    case 0xC044D5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:63 TXA
    case 0xC044D7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:64 DEC
    case 0xC044D8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:65 DEC
    case 0xC044D9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:66 AND #$0007
    case 0xC044DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C041E3.asm:66 AND #$0007
    // Overlapping static entry reached from 0xC044DA.
    case 0xC044DC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C041E3.asm:67 TAX
    case 0xC044DD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:68 STX @LOCAL00
    case 0xC044DE: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:69 STX GAME_STATE+game_state::leader_direction
    case 0xC044E0: cpu.execute_instruction<0x8E>(0x009B30, 3); return true;
    // src/unknown/C0/C041E3.asm:70 TXA
    case 0xC044E3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:71 JSR UNKNOWN_C04116
    case 0xC044E4: cpu.execute_instruction<0x20>(0x00439D, 3); return true;
    // src/unknown/C0/C041E3.asm:72 CMP #.LOWORD(-1)
    case 0xC044E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C041E3.asm:72 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC044E7.
    case 0xC044E9: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C041E3.asm:73 BEQ @UNKNOWN3
    case 0xC044EA: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C041E3.asm:74 CMP #0
    case 0xC044EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C041E3.asm:74 CMP #0
    // Overlapping static entry reached from 0xC044E9.
    case 0xC044ED: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C041E3.asm:74 CMP #0
    // Overlapping static entry reached from 0xC044EC.
    case 0xC044EE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C041E3.asm:75 BEQ @UNKNOWN3
    case 0xC044EF: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C041E3.asm:76 LDX @LOCAL00
    case 0xC044F1: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C041E3.asm:77 TXA
    case 0xC044F3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C041E3.asm:78 BRA @UNKNOWN4
    case 0xC044F4: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C041E3.asm:80 LDY @LOCAL01
    case 0xC044F6: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C041E3.asm:81 STY GAME_STATE+game_state::leader_direction
    case 0xC044F8: cpu.execute_instruction<0x8C>(0x009B30, 3); return true;
    // src/unknown/C0/C041E3.asm:82 LDA #.LOWORD(-1)
    case 0xC044FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C041E3.asm:82 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC044FB.
    case 0xC044FD: cpu.execute_instruction<0xFF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C041E3.asm:84 END_C_FUNCTION
    case 0xC044FE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C041E3.asm:84 END_C_FUNCTION
    case 0xC044FF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C042C2.asm (unresolved).
bool execute_unresolved_c0_c042c2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C042C2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04549: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC0454B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC0454C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC0454D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC0454E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0454E.
    case 0xC04550: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC04551: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC04552: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:8 TAX
    case 0xC04553: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:9 STX @LOCAL00
    case 0xC04554: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C042C2.asm:10 TXA
    case 0xC04556: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:11 ASL
    case 0xC04557: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:12 PHA
    case 0xC04558: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:13 LDA GAME_STATE+game_state::leader_direction
    case 0xC04559: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C042C2.asm:14 ASL
    case 0xC0455C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:15 TAX
    case 0xC0455D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:16 LDA f:UNKNOWN_C3E168,X
    case 0xC0455E: cpu.execute_instruction<0xBF>(0xC3E152, 4); return true;
    // src/unknown/C0/C042C2.asm:17 PLX
    case 0xC04562: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:18 STA ENTITY_DIRECTIONS,X
    case 0xC04563: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C042C2.asm:19 LDX @LOCAL00
    case 0xC04566: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C042C2.asm:20 TXA
    case 0xC04568: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:21 JSL UNKNOWN_C09907
    case 0xC04569: cpu.execute_instruction<0x22>(0xC098E6, 4); return true;
    // src/unknown/C0/C042C2.asm:22 LDX @LOCAL00
    case 0xC0456D: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C042C2.asm:23 TXA
    case 0xC0456F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C042C2.asm:24 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC04570: cpu.execute_instruction<0x22>(0xC0A46E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C042C2.asm:25 END_C_FUNCTION
    case 0xC04574: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C042C2.asm:25 END_C_FUNCTION
    case 0xC04575: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C042EF.asm (unresolved).
bool execute_unresolved_c0_c042ef_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C042EF.asm:3 BEGIN_C_FUNCTION
    case 0xC04576: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC04578: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC04579: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC0457A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC0457B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC0457B.
    case 0xC0457D: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC0457E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC0457F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:14 STA @LOCAL06
    case 0xC04580: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C042EF.asm:14 STA @LOCAL06
    // Overlapping static entry reached from 0xC0457D.
    case 0xC04581: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:15 ASL
    case 0xC04582: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:16 TAX
    case 0xC04583: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:17 LDA f:UNKNOWN_C3E148,X
    case 0xC04584: cpu.execute_instruction<0xBF>(0xC3E132, 4); return true;
    // src/unknown/C0/C042EF.asm:18 STA @LOCAL05
    case 0xC04588: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C042EF.asm:19 LDA f:UNKNOWN_C3E158,X
    case 0xC0458A: cpu.execute_instruction<0xBF>(0xC3E142, 4); return true;
    // src/unknown/C0/C042EF.asm:20 STA @LOCAL04
    case 0xC0458E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C042EF.asm:21 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC04590: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C042EF.asm:22 CLC
    case 0xC04593: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:23 ADC @LOCAL05
    case 0xC04594: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C0/C042EF.asm:24 STA @LOCAL03
    case 0xC04596: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C042EF.asm:25 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC04598: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C042EF.asm:26 CLC
    case 0xC0459B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:27 ADC @LOCAL04
    case 0xC0459C: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C0/C042EF.asm:28 STA @VIRTUAL04
    case 0xC0459E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C042EF.asm:29 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC045A0: cpu.execute_instruction<0xAD>(0x0060DE, 3); return true;
    // src/unknown/C0/C042EF.asm:30 STA @LOCAL02
    case 0xC045A3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C042EF.asm:31 LDA #1
    case 0xC045A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C042EF.asm:31 LDA #1
    // Overlapping static entry reached from 0xC045A5.
    case 0xC045A7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C042EF.asm:32 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC045A8: cpu.execute_instruction<0x8D>(0x0060DE, 3); return true;
    // src/unknown/C0/C042EF.asm:34 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC045AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x009B3A, 3); return true;
    // src/unknown/C0/C042EF.asm:34 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC045AB.
    case 0xC045AD: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:35 STA @VIRTUAL02
    case 0xC045AE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C042EF.asm:36 LDX @VIRTUAL02
    case 0xC045B0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C042EF.asm:37 LDA __BSS_START__,X
    case 0xC045B2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C042EF.asm:38 TAY
    case 0xC045B5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:39 LDX @VIRTUAL04
    case 0xC045B6: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C042EF.asm:40 LDA @LOCAL03
    case 0xC045B8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C042EF.asm:41 JSL NPC_COLLISION_CHECK
    case 0xC045BA: cpu.execute_instruction<0x22>(0xC06224, 4); return true;
    // src/unknown/C0/C042EF.asm:42 STA @LOCAL01
    case 0xC045BE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C042EF.asm:43 CMP #$8000
    case 0xC045C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C042EF.asm:43 CMP #$8000
    // Overlapping static entry reached from 0xC045C0.
    case 0xC045C2: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C0/C042EF.asm:44 BCS @UNKNOWN1
    case 0xC045C3: cpu.execute_instruction<0xB0>(0x00000F, 2); return true;
    // src/unknown/C0/C042EF.asm:45 ASL
    case 0xC045C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:46 TAX
    case 0xC045C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:47 LDA ENTITY_NPC_IDS,X
    case 0xC045C7: cpu.execute_instruction<0xBD>(0x003098, 3); return true;
    // src/unknown/C0/C042EF.asm:48 STA INTERACTING_NPC_ID
    case 0xC045CA: cpu.execute_instruction<0x8D>(0x0060E8, 3); return true;
    // src/unknown/C0/C042EF.asm:49 LDA @LOCAL01
    case 0xC045CD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C042EF.asm:50 STA INTERACTING_NPC_ENTITY
    case 0xC045CF: cpu.execute_instruction<0x8D>(0x0060EA, 3); return true;
    // src/unknown/C0/C042EF.asm:51 BRA @UNKNOWN7
    case 0xC045D2: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/unknown/C0/C042EF.asm:53 LDA @LOCAL06
    case 0xC045D4: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C042EF.asm:54 STA @LOCAL00
    case 0xC045D6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C042EF.asm:55 LDX @VIRTUAL02
    case 0xC045D8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C042EF.asm:56 LDA __BSS_START__,X
    case 0xC045DA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C042EF.asm:57 TAY
    case 0xC045DD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:58 LDX @VIRTUAL04
    case 0xC045DE: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C042EF.asm:59 LDA @LOCAL03
    case 0xC045E0: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C042EF.asm:60 JSL UNKNOWN_C05CD7
    case 0xC045E2: cpu.execute_instruction<0x22>(0xC05F05, 4); return true;
    // src/unknown/C0/C042EF.asm:61 AND #$0082
    case 0xC045E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000082, 2); else cpu.execute_instruction<0x29>(0x000082, 3); return true;
    // src/unknown/C0/C042EF.asm:61 AND #$0082
    // Overlapping static entry reached from 0xC045E6.
    case 0xC045E8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C042EF.asm:62 CMP #130
    case 0xC045E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000082, 2); else cpu.execute_instruction<0xC9>(0x000082, 3); return true;
    // src/unknown/C0/C042EF.asm:62 CMP #130
    // Overlapping static entry reached from 0xC045E9.
    case 0xC045EB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C042EF.asm:63 BNE @UNKNOWN7
    case 0xC045EC: cpu.execute_instruction<0xD0>(0x000038, 2); return true;
    // src/unknown/C0/C042EF.asm:64 LDA @LOCAL05
    case 0xC045EE: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C042EF.asm:65 BEQ @UNKNOWN4
    case 0xC045F0: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C042EF.asm:66 LDA @LOCAL05
    case 0xC045F2: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C042EF.asm:67 AND #$8000
    case 0xC045F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C042EF.asm:67 AND #$8000
    // Overlapping static entry reached from 0xC045F4.
    case 0xC045F6: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C042EF.asm:68 BEQ @UNKNOWN2
    case 0xC045F7: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C042EF.asm:69 LDX #.LOWORD(-8)
    case 0xC045F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F8, 2); else cpu.execute_instruction<0xA2>(0x00FFF8, 3); return true;
    // src/unknown/C0/C042EF.asm:69 LDX #.LOWORD(-8)
    // Overlapping static entry reached from 0xC045F9.
    case 0xC045FB: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/unknown/C0/C042EF.asm:70 BRA @UNKNOWN3
    case 0xC045FC: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C042EF.asm:72 LDX #8
    case 0xC045FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C0/C042EF.asm:72 LDX #8
    // Overlapping static entry reached from 0xC045FB.
    case 0xC045FF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:72 LDX #8
    // Overlapping static entry reached from 0xC045FE.
    case 0xC04600: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C042EF.asm:74 TXA
    case 0xC04601: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:75 CLC
    case 0xC04602: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:76 ADC @LOCAL03
    case 0xC04603: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C0/C042EF.asm:77 STA @LOCAL03
    case 0xC04605: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C042EF.asm:79 LDA @LOCAL04
    case 0xC04607: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C042EF.asm:80 BEQ @UNKNOWN0
    case 0xC04609: cpu.execute_instruction<0xF0>(0x0000A0, 2); return true;
    // src/unknown/C0/C042EF.asm:81 LDA @LOCAL04
    case 0xC0460B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C042EF.asm:82 AND #$8000
    case 0xC0460D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C042EF.asm:82 AND #$8000
    // Overlapping static entry reached from 0xC0460D.
    case 0xC0460F: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C042EF.asm:83 BEQ @UNKNOWN5
    case 0xC04610: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C042EF.asm:84 LDX #.LOWORD(-8)
    case 0xC04612: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F8, 2); else cpu.execute_instruction<0xA2>(0x00FFF8, 3); return true;
    // src/unknown/C0/C042EF.asm:84 LDX #.LOWORD(-8)
    // Overlapping static entry reached from 0xC04612.
    case 0xC04614: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/unknown/C0/C042EF.asm:85 BRA @UNKNOWN6
    case 0xC04615: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C042EF.asm:87 LDX #8
    case 0xC04617: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C0/C042EF.asm:87 LDX #8
    // Overlapping static entry reached from 0xC04614.
    case 0xC04618: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:87 LDX #8
    // Overlapping static entry reached from 0xC04617.
    case 0xC04619: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C042EF.asm:89 STX @VIRTUAL02
    case 0xC0461A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C042EF.asm:90 LDA @VIRTUAL04
    case 0xC0461C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C042EF.asm:91 CLC
    case 0xC0461E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:92 ADC @VIRTUAL02
    case 0xC0461F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C042EF.asm:93 STA @VIRTUAL04
    case 0xC04621: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C042EF.asm:94 JMP @UNKNOWN0
    case 0xC04623: cpu.execute_instruction<0x4C>(0x0045AB, 3); return true;
    // src/unknown/C0/C042EF.asm:96 LDA @LOCAL02
    case 0xC04626: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C042EF.asm:97 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC04628: cpu.execute_instruction<0x8D>(0x0060DE, 3); return true;
    // src/unknown/C0/C042EF.asm:98 LDA INTERACTING_NPC_ID
    case 0xC0462B: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // src/unknown/C0/C042EF.asm:99 BEQ @UNKNOWN8
    case 0xC0462E: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C042EF.asm:100 LDA INTERACTING_NPC_ID
    case 0xC04630: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // src/unknown/C0/C042EF.asm:101 CMP #.LOWORD(-1)
    case 0xC04633: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C042EF.asm:101 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04633.
    case 0xC04635: cpu.execute_instruction<0xFF>(0xA506D0, 4); return true;
    // src/unknown/C0/C042EF.asm:102 BNE @UNKNOWN9
    case 0xC04636: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C042EF.asm:104 LDA @LOCAL06
    case 0xC04638: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C042EF.asm:104 LDA @LOCAL06
    // Overlapping static entry reached from 0xC04635.
    case 0xC04639: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C042EF.asm:105 JSL UNKNOWN_C065C2
    case 0xC0463A: cpu.execute_instruction<0x22>(0xC067F0, 4); return true;
    // src/unknown/C0/C042EF.asm:107 LDA INTERACTING_NPC_ID
    case 0xC0463E: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C042EF.asm:108 END_C_FUNCTION
    case 0xC04641: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C042EF.asm:108 END_C_FUNCTION
    case 0xC04642: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C043BC.asm (unresolved).
bool execute_unresolved_c0_c043bc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C043BC.asm:3 BEGIN_C_FUNCTION
    case 0xC04643: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC04645: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC04646: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC04647: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC04647.
    case 0xC04649: cpu.execute_instruction<0xFF>(0x30AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C043BC.asm:8 END_STACK_VARS
    case 0xC0464A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:9 LDA GAME_STATE+game_state::leader_direction
    case 0xC0464B: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C043BC.asm:9 LDA GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC04649.
    case 0xC0464D: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:10 AND #$FFFE
    case 0xC0464E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C0/C043BC.asm:10 AND #$FFFE
    // Overlapping static entry reached from 0xC0464E.
    case 0xC04650: cpu.execute_instruction<0xFF>(0x1084A8, 4); return true;
    // src/unknown/C0/C043BC.asm:11 TAY
    case 0xC04651: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:12 STY @LOCAL01
    case 0xC04652: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C043BC.asm:13 TYX
    case 0xC04654: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:14 STX @LOCAL00
    case 0xC04655: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:15 TXA
    case 0xC04657: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:16 JSR UNKNOWN_C042EF
    case 0xC04658: cpu.execute_instruction<0x20>(0x004576, 3); return true;
    // src/unknown/C0/C043BC.asm:17 CMP #.LOWORD(-1)
    case 0xC0465B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C043BC.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0465B.
    case 0xC0465D: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C043BC.asm:18 BEQ @UNKNOWN0
    case 0xC0465E: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C043BC.asm:19 CMP #0
    case 0xC04660: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C043BC.asm:19 CMP #0
    // Overlapping static entry reached from 0xC0465D.
    case 0xC04661: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C043BC.asm:19 CMP #0
    // Overlapping static entry reached from 0xC04660.
    case 0xC04662: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C043BC.asm:20 BEQ @UNKNOWN0
    case 0xC04663: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C043BC.asm:21 LDX @LOCAL00
    case 0xC04665: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:22 TXA
    case 0xC04667: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:23 BRA @UNKNOWN4
    case 0xC04668: cpu.execute_instruction<0x80>(0x00006D, 2); return true;
    // src/unknown/C0/C043BC.asm:25 LDX @LOCAL00
    case 0xC0466A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:26 TXA
    case 0xC0466C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:27 INC
    case 0xC0466D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:28 INC
    case 0xC0466E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:29 AND #$0007
    case 0xC0466F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C043BC.asm:29 AND #$0007
    // Overlapping static entry reached from 0xC0466F.
    case 0xC04671: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C043BC.asm:30 TAX
    case 0xC04672: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:31 STX @LOCAL00
    case 0xC04673: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:32 STX GAME_STATE+game_state::leader_direction
    case 0xC04675: cpu.execute_instruction<0x8E>(0x009B30, 3); return true;
    // src/unknown/C0/C043BC.asm:33 TXA
    case 0xC04678: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:34 JSR UNKNOWN_C042EF
    case 0xC04679: cpu.execute_instruction<0x20>(0x004576, 3); return true;
    // src/unknown/C0/C043BC.asm:35 CMP #.LOWORD(-1)
    case 0xC0467C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C043BC.asm:35 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0467C.
    case 0xC0467E: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C043BC.asm:36 BEQ @UNKNOWN1
    case 0xC0467F: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C043BC.asm:37 CMP #0
    case 0xC04681: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C043BC.asm:37 CMP #0
    // Overlapping static entry reached from 0xC0467E.
    case 0xC04682: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C043BC.asm:37 CMP #0
    // Overlapping static entry reached from 0xC04681.
    case 0xC04683: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C043BC.asm:38 BEQ @UNKNOWN1
    case 0xC04684: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C043BC.asm:39 LDX @LOCAL00
    case 0xC04686: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:40 TXA
    case 0xC04688: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:41 BRA @UNKNOWN4
    case 0xC04689: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C0/C043BC.asm:43 LDX @LOCAL00
    case 0xC0468B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:44 TXA
    case 0xC0468D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:45 INC
    case 0xC0468E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:46 INC
    case 0xC0468F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:47 INC
    case 0xC04690: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:48 INC
    case 0xC04691: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:49 AND #$0007
    case 0xC04692: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C043BC.asm:49 AND #$0007
    // Overlapping static entry reached from 0xC04692.
    case 0xC04694: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C043BC.asm:50 TAX
    case 0xC04695: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:51 STX @LOCAL00
    case 0xC04696: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:52 STX GAME_STATE+game_state::leader_direction
    case 0xC04698: cpu.execute_instruction<0x8E>(0x009B30, 3); return true;
    // src/unknown/C0/C043BC.asm:53 TXA
    case 0xC0469B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:54 JSR UNKNOWN_C042EF
    case 0xC0469C: cpu.execute_instruction<0x20>(0x004576, 3); return true;
    // src/unknown/C0/C043BC.asm:55 CMP #.LOWORD(-1)
    case 0xC0469F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C043BC.asm:55 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0469F.
    case 0xC046A1: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C043BC.asm:56 BEQ @UNKNOWN2
    case 0xC046A2: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C043BC.asm:57 CMP #0
    case 0xC046A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C043BC.asm:57 CMP #0
    // Overlapping static entry reached from 0xC046A1.
    case 0xC046A5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C043BC.asm:57 CMP #0
    // Overlapping static entry reached from 0xC046A4.
    case 0xC046A6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C043BC.asm:58 BEQ @UNKNOWN2
    case 0xC046A7: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C043BC.asm:59 LDX @LOCAL00
    case 0xC046A9: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:60 TXA
    case 0xC046AB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:61 BRA @UNKNOWN4
    case 0xC046AC: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C043BC.asm:63 LDX @LOCAL00
    case 0xC046AE: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:64 TXA
    case 0xC046B0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:65 DEC
    case 0xC046B1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:66 DEC
    case 0xC046B2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:67 AND #$0007
    case 0xC046B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C043BC.asm:67 AND #$0007
    // Overlapping static entry reached from 0xC046B3.
    case 0xC046B5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C043BC.asm:68 TAX
    case 0xC046B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:69 STX @LOCAL00
    case 0xC046B7: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:70 STX GAME_STATE+game_state::leader_direction
    case 0xC046B9: cpu.execute_instruction<0x8E>(0x009B30, 3); return true;
    // src/unknown/C0/C043BC.asm:71 TXA
    case 0xC046BC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:72 JSR UNKNOWN_C042EF
    case 0xC046BD: cpu.execute_instruction<0x20>(0x004576, 3); return true;
    // src/unknown/C0/C043BC.asm:73 CMP #.LOWORD(-1)
    case 0xC046C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C043BC.asm:73 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC046C0.
    case 0xC046C2: cpu.execute_instruction<0xFF>(0xC90AF0, 4); return true;
    // src/unknown/C0/C043BC.asm:74 BEQ @UNKNOWN3
    case 0xC046C3: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C043BC.asm:75 CMP #0
    case 0xC046C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C043BC.asm:75 CMP #0
    // Overlapping static entry reached from 0xC046C2.
    case 0xC046C6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C043BC.asm:75 CMP #0
    // Overlapping static entry reached from 0xC046C5.
    case 0xC046C7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C043BC.asm:76 BEQ @UNKNOWN3
    case 0xC046C8: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C043BC.asm:77 LDX @LOCAL00
    case 0xC046CA: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C043BC.asm:78 TXA
    case 0xC046CC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C043BC.asm:79 BRA @UNKNOWN4
    case 0xC046CD: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C043BC.asm:81 LDY @LOCAL01
    case 0xC046CF: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C043BC.asm:82 STY GAME_STATE+game_state::leader_direction
    case 0xC046D1: cpu.execute_instruction<0x8C>(0x009B30, 3); return true;
    // src/unknown/C0/C043BC.asm:83 LDA #.LOWORD(-1)
    case 0xC046D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C043BC.asm:83 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC046D4.
    case 0xC046D6: cpu.execute_instruction<0xFF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C043BC.asm:85 END_C_FUNCTION
    case 0xC046D7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C043BC.asm:85 END_C_FUNCTION
    case 0xC046D8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0449B.asm (unresolved).
bool execute_unresolved_c0_c0449b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0449B.asm:3 BEGIN_C_FUNCTION
    case 0xC04722: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0449B.asm:13 END_STACK_VARS
    case 0xC04724: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0449B.asm:13 END_STACK_VARS
    case 0xC04725: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0449B.asm:13 END_STACK_VARS
    case 0xC04726: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DA, 2); else cpu.execute_instruction<0x69>(0x00FFDA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0449B.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC04726.
    case 0xC04728: cpu.execute_instruction<0xFF>(0x369C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0449B.asm:13 END_STACK_VARS
    case 0xC04729: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:14 STZ GAME_STATE + game_state::unknown90
    case 0xC0472A: cpu.execute_instruction<0x9C>(0x009B36, 3); return true;
    // src/unknown/C0/C0449B.asm:14 STZ GAME_STATE + game_state::unknown90
    // Overlapping static entry reached from 0xC04728.
    case 0xC0472C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:15 LDA MUSHROOMIZED_WALKING_FLAG
    case 0xC0472D: cpu.execute_instruction<0xAD>(0x006126, 3); return true;
    // src/unknown/C0/C0449B.asm:16 BEQ @NOT_MUSHROOMIZED
    case 0xC04730: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0449B.asm:17 JSR MUSHROOMIZATION_MOVEMENT_SWAP
    case 0xC04732: cpu.execute_instruction<0x20>(0x002E5E, 3); return true;
    // src/unknown/C0/C0449B.asm:19 LDX #.LOWORD(GAME_STATE) + game_state::walking_style
    case 0xC04735: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000034, 2); else cpu.execute_instruction<0xA2>(0x009B34, 3); return true;
    // src/unknown/C0/C0449B.asm:19 LDX #.LOWORD(GAME_STATE) + game_state::walking_style
    // Overlapping static entry reached from 0xC04735.
    case 0xC04737: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:20 STX @LOCAL07
    case 0xC04738: cpu.execute_instruction<0x86>(0x000024, 2); return true;
    // src/unknown/C0/C0449B.asm:21 LDA __BSS_START__,X
    case 0xC0473A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:22 JSL MAP_INPUT_TO_DIRECTION
    case 0xC0473D: cpu.execute_instruction<0x22>(0xC042D6, 4); return true;
    // src/unknown/C0/C0449B.asm:23 STA @VIRTUAL02
    case 0xC04741: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:24 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC04743: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/unknown/C0/C0449B.asm:25 BEQ @UNKNOWN2
    case 0xC04746: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:26 LDX BATTLE_SWIRL_COUNTDOWN
    case 0xC04748: cpu.execute_instruction<0xAE>(0x0060E6, 3); return true;
    // src/unknown/C0/C0449B.asm:27 DEX
    case 0xC0474B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:28 STX BATTLE_SWIRL_COUNTDOWN
    case 0xC0474C: cpu.execute_instruction<0x8E>(0x0060E6, 3); return true;
    // src/unknown/C0/C0449B.asm:29 BEQ @UNKNOWN1
    case 0xC0474F: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:30 LDY GAME_STATE+game_state::current_party_members
    case 0xC04751: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C0449B.asm:31 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC04754: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C0449B.asm:32 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC04757: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0449B.asm:33 JSL NPC_COLLISION_CHECK
    case 0xC0475A: cpu.execute_instruction<0x22>(0xC06224, 4); return true;
    // src/unknown/C0/C0449B.asm:34 JMP @RETURN
    case 0xC0475E: cpu.execute_instruction<0x4C>(0x0049F2, 3); return true;
    // src/unknown/C0/C0449B.asm:36 LDA #.LOWORD(-1)
    case 0xC04761: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0449B.asm:36 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04761.
    case 0xC04763: cpu.execute_instruction<0xFF>(0x51488D, 4); return true;
    // src/unknown/C0/C0449B.asm:37 STA BATTLE_MODE
    case 0xC04764: cpu.execute_instruction<0x8D>(0x005148, 3); return true;
    // src/unknown/C0/C0449B.asm:38 JMP @RETURN
    case 0xC04767: cpu.execute_instruction<0x4C>(0x0049F2, 3); return true;
    // src/unknown/C0/C0449B.asm:40 LDA @VIRTUAL02
    case 0xC0476A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:41 CMP #.LOWORD(-1)
    case 0xC0476C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0449B.asm:41 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0476C.
    case 0xC0476E: cpu.execute_instruction<0xFF>(0xAC10D0, 4); return true;
    // src/unknown/C0/C0449B.asm:42 BNE @UNKNOWN3
    case 0xC0476F: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:43 LDY GAME_STATE+game_state::current_party_members
    case 0xC04771: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C0449B.asm:43 LDY GAME_STATE+game_state::current_party_members
    // Overlapping static entry reached from 0xC0476E.
    case 0xC04772: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:43 LDY GAME_STATE+game_state::current_party_members
    // Overlapping static entry reached from 0xC04772.
    case 0xC04773: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:44 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC04774: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C0449B.asm:45 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC04777: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C0449B.asm:46 JSL NPC_COLLISION_CHECK
    case 0xC0477A: cpu.execute_instruction<0x22>(0xC06224, 4); return true;
    // src/unknown/C0/C0449B.asm:47 JMP @RETURN
    case 0xC0477E: cpu.execute_instruction<0x4C>(0x0049F2, 3); return true;
    // src/unknown/C0/C0449B.asm:49 LDX @LOCAL07
    case 0xC04781: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/unknown/C0/C0449B.asm:50 LDA __BSS_START__,X
    case 0xC04783: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:51 CMP #13
    case 0xC04786: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/unknown/C0/C0449B.asm:51 CMP #13
    // Overlapping static entry reached from 0xC04786.
    case 0xC04788: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:52 BNE @UNKNOWN12
    case 0xC04789: cpu.execute_instruction<0xD0>(0x000057, 2); return true;
    // src/unknown/C0/C0449B.asm:53 LDA STAIRS_DIRECTION
    case 0xC0478B: cpu.execute_instruction<0xAD>(0x00614A, 3); return true;
    // src/unknown/C0/C0449B.asm:54 CMP #$0100
    case 0xC0478E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0449B.asm:54 CMP #$0100
    // Overlapping static entry reached from 0xC0478E.
    case 0xC04790: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C0449B.asm:55 BEQ @UNKNOWN4
    case 0xC04791: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0449B.asm:55 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC04790.
    case 0xC04792: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:56 LDA STAIRS_DIRECTION
    case 0xC04793: cpu.execute_instruction<0xAD>(0x00614A, 3); return true;
    // src/unknown/C0/C0449B.asm:57 CMP #$0200
    case 0xC04796: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000200, 3); return true;
    // src/unknown/C0/C0449B.asm:57 CMP #$0200
    // Overlapping static entry reached from 0xC04796.
    case 0xC04798: cpu.execute_instruction<0x02>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:58 BNE @UNKNOWN7
    case 0xC04799: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C0/C0449B.asm:60 LDA @VIRTUAL02
    case 0xC0479B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:61 CMP #3
    case 0xC0479D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0449B.asm:61 CMP #3
    // Overlapping static entry reached from 0xC0479D.
    case 0xC0479F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C0449B.asm:62 BGT @UNKNOWN6
    case 0xC047A0: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0449B.asm:62 BGT @UNKNOWN6
    case 0xC047A2: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C0/C0449B.asm:63 LDA #1
    case 0xC047A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0449B.asm:63 LDA #1
    // Overlapping static entry reached from 0xC047A4.
    case 0xC047A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:64 STA @VIRTUAL02
    case 0xC047A7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:65 BRA @UNKNOWN10
    case 0xC047A9: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C0/C0449B.asm:67 LDA #5
    case 0xC047AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0449B.asm:67 LDA #5
    // Overlapping static entry reached from 0xC047AB.
    case 0xC047AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:68 STA @VIRTUAL02
    case 0xC047AE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:69 BRA @UNKNOWN10
    case 0xC047B0: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C0/C0449B.asm:71 LDA @VIRTUAL02
    case 0xC047B2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:72 DEC
    case 0xC047B4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:73 AND #$0007
    case 0xC047B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0449B.asm:73 AND #$0007
    // Overlapping static entry reached from 0xC047B5.
    case 0xC047B7: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0449B.asm:74 CMP #3
    case 0xC047B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0449B.asm:74 CMP #3
    // Overlapping static entry reached from 0xC047B8.
    case 0xC047BA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C0449B.asm:75 BGT @UNKNOWN9
    case 0xC047BB: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C0449B.asm:75 BGT @UNKNOWN9
    case 0xC047BD: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C0/C0449B.asm:76 LDA #3
    case 0xC047BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0449B.asm:76 LDA #3
    // Overlapping static entry reached from 0xC047BF.
    case 0xC047C1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:77 STA @VIRTUAL02
    case 0xC047C2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:78 BRA @UNKNOWN10
    case 0xC047C4: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:80 LDA #7
    case 0xC047C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C0449B.asm:80 LDA #7
    // Overlapping static entry reached from 0xC047C6.
    case 0xC047C8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:81 STA @VIRTUAL02
    case 0xC047C9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:83 LDA @VIRTUAL02
    case 0xC047CB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:84 CMP #4
    case 0xC047CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0449B.asm:84 CMP #4
    // Overlapping static entry reached from 0xC047CD.
    case 0xC047CF: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0449B.asm:85 BCS @UNKNOWN11
    case 0xC047D0: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C0/C0449B.asm:86 LDA #2
    case 0xC047D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0449B.asm:86 LDA #2
    // Overlapping static entry reached from 0xC047D2.
    case 0xC047D4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0449B.asm:87 STA GAME_STATE+game_state::leader_direction
    case 0xC047D5: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/unknown/C0/C0449B.asm:88 BRA @UNKNOWN13
    case 0xC047D8: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C0449B.asm:90 LDA #6
    case 0xC047DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C0449B.asm:90 LDA #6
    // Overlapping static entry reached from 0xC047DA.
    case 0xC047DC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0449B.asm:91 STA GAME_STATE+game_state::leader_direction
    case 0xC047DD: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/unknown/C0/C0449B.asm:92 BRA @UNKNOWN13
    case 0xC047E0: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0449B.asm:94 LDA PLAYER_MOVEMENT_FLAGS
    case 0xC047E2: cpu.execute_instruction<0xAD>(0x0060DC, 3); return true;
    // src/unknown/C0/C0449B.asm:95 AND #$0001
    case 0xC047E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0449B.asm:95 AND #$0001
    // Overlapping static entry reached from 0xC047E5.
    case 0xC047E7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:96 BNE @UNKNOWN13
    case 0xC047E8: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:97 LDA @VIRTUAL02
    case 0xC047EA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:98 STA GAME_STATE+game_state::leader_direction
    case 0xC047EC: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/unknown/C0/C0449B.asm:100 INC PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC047EF: cpu.execute_instruction<0xEE>(0x002C8E, 3); return true;
    // src/unknown/C0/C0449B.asm:101 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    case 0xC047F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000036, 2); else cpu.execute_instruction<0xA2>(0x009B36, 3); return true;
    // src/unknown/C0/C0449B.asm:101 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    // Overlapping static entry reached from 0xC047F2.
    case 0xC047F4: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:102 LDA __BSS_START__,X
    case 0xC047F5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:103 INC
    case 0xC047F8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:104 STA __BSS_START__,X
    case 0xC047F9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:105 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC047FC: cpu.execute_instruction<0xAD>(0x009B32, 3); return true;
    // src/unknown/C0/C0449B.asm:106 STA @LOCAL06
    case 0xC047FF: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:107 LDA #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC04801: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x009B26, 3); return true;
    // src/unknown/C0/C0449B.asm:107 LDA #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC04801.
    case 0xC04803: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:108 STA @LOCAL05
    case 0xC04804: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C0449B.asm:109 LDY @LOCAL05
    case 0xC04806: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0449B.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04808: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0480B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0449B.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0480D: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04810: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:111 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC04812: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:111 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC04814: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:111 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC04816: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:111 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC04818: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:112 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0481A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:112 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0481C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:112 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0481E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:112 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04820: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0449B.asm:113 LDA #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC04822: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x009B2A, 3); return true;
    // src/unknown/C0/C0449B.asm:113 LDA #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC04822.
    case 0xC04824: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:114 STA @LOCAL03
    case 0xC04825: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0449B.asm:115 LDY @LOCAL03
    case 0xC04827: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0449B.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04829: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0482C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0449B.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0482E: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04831: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:117 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC04833: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:117 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC04835: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:117 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC04837: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:117 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC04839: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:118 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0483B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:118 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0483D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:118 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0483F: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:118 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC04841: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC04843: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC04845: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC04847: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC04849: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:120 LDX @LOCAL06
    case 0xC0484B: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:121 LDA @VIRTUAL02
    case 0xC0484D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:122 JSR ADJUST_POSITION_HORIZONTAL
    case 0xC0484F: cpu.execute_instruction<0x20>(0x002F6A, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:123 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04852: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:123 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04854: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:123 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04856: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:123 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04858: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:124 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0485A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:124 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0485C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:124 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0485E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:124 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC04860: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:125 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC04862: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:125 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC04864: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:125 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC04866: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:125 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC04868: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:126 LDX @LOCAL06
    case 0xC0486A: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:127 LDA @VIRTUAL02
    case 0xC0486C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:128 JSR ADJUST_POSITION_VERTICAL
    case 0xC0486E: cpu.execute_instruction<0x20>(0x0031F2, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:129 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC04871: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:129 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC04873: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:129 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC04875: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:129 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC04877: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0449B.asm:130 LDA #.LOWORD(-1)
    case 0xC04879: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0449B.asm:130 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04879.
    case 0xC0487B: cpu.execute_instruction<0xFF>(0x612E8D, 4); return true;
    // src/unknown/C0/C0449B.asm:131 STA LADDER_STAIRS_TILE_X
    case 0xC0487C: cpu.execute_instruction<0x8D>(0x00612E, 3); return true;
    // src/unknown/C0/C0449B.asm:132 LDA PLAYER_MOVEMENT_FLAGS
    case 0xC0487F: cpu.execute_instruction<0xAD>(0x0060DC, 3); return true;
    // src/unknown/C0/C0449B.asm:133 AND #$0002
    case 0xC04882: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C0449B.asm:133 AND #$0002
    // Overlapping static entry reached from 0xC04882.
    case 0xC04884: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:134 BNE @UNKNOWN14
    case 0xC04885: cpu.execute_instruction<0xD0>(0x000062, 2); return true;
    // src/unknown/C0/C0449B.asm:135 LDA @VIRTUAL02
    case 0xC04887: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:136 STA @LOCAL00
    case 0xC04889: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0449B.asm:137 LDY GAME_STATE+game_state::current_party_members
    case 0xC0488B: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C0449B.asm:138 LDX @LOCAL02 + fixed_point::integer
    case 0xC0488E: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0449B.asm:139 LDA @LOCAL01 + fixed_point::integer
    case 0xC04890: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0449B.asm:140 JSL UNKNOWN_C05B7B
    case 0xC04892: cpu.execute_instruction<0x22>(0xC05DA9, 4); return true;
    // src/unknown/C0/C0449B.asm:141 STA @VIRTUAL04
    case 0xC04896: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0449B.asm:142 LDA @VIRTUAL02
    case 0xC04898: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:143 CMP FINAL_MOVEMENT_DIRECTION
    case 0xC0489A: cpu.execute_instruction<0xCD>(0x00612C, 3); return true;
    // src/unknown/C0/C0449B.asm:144 BEQ @UNKNOWN16
    case 0xC0489D: cpu.execute_instruction<0xF0>(0x000065, 2); return true;
    // src/unknown/C0/C0449B.asm:145 LDY @LOCAL05
    case 0xC0489F: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0449B.asm:146 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC048A1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:146 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC048A4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0449B.asm:146 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC048A6: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:146 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC048A9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:147 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC048AB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:147 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC048AD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:147 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC048AF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:147 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC048B1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:148 LDX @LOCAL06
    case 0xC048B3: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:149 LDA FINAL_MOVEMENT_DIRECTION
    case 0xC048B5: cpu.execute_instruction<0xAD>(0x00612C, 3); return true;
    // src/unknown/C0/C0449B.asm:150 JSR ADJUST_POSITION_HORIZONTAL
    case 0xC048B8: cpu.execute_instruction<0x20>(0x002F6A, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:151 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC048BB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:151 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC048BD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:151 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC048BF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:151 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC048C1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0449B.asm:152 LDY @LOCAL03
    case 0xC048C3: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0449B.asm:153 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC048C5: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:153 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC048C8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0449B.asm:153 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC048CA: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:153 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC048CD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC048CF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC048D1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC048D3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC048D5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:155 LDX @LOCAL06
    case 0xC048D7: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:156 LDA FINAL_MOVEMENT_DIRECTION
    case 0xC048D9: cpu.execute_instruction<0xAD>(0x00612C, 3); return true;
    // src/unknown/C0/C0449B.asm:157 JSR ADJUST_POSITION_VERTICAL
    case 0xC048DC: cpu.execute_instruction<0x20>(0x0031F2, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:158 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC048DF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:158 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC048E1: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:158 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC048E3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:158 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC048E5: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0449B.asm:159 BRA @UNKNOWN16
    case 0xC048E7: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C0449B.asm:161 LDA DEMO_FRAMES_LEFT
    case 0xC048E9: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // src/unknown/C0/C0449B.asm:162 BNE @UNKNOWN15
    case 0xC048EC: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/unknown/C0/C0449B.asm:163 LDY GAME_STATE+game_state::current_party_members
    case 0xC048EE: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C0449B.asm:164 LDX @LOCAL02 + fixed_point::integer
    case 0xC048F1: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0449B.asm:165 LDA @LOCAL01 + fixed_point::integer
    case 0xC048F3: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0449B.asm:166 JSR UNKNOWN_C05FD1
    case 0xC048F5: cpu.execute_instruction<0x20>(0x0061FF, 3); return true;
    // src/unknown/C0/C0449B.asm:167 AND #$003F
    case 0xC048F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0449B.asm:167 AND #$003F
    // Overlapping static entry reached from 0xC048F8.
    case 0xC048FA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:168 STA @VIRTUAL04
    case 0xC048FB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0449B.asm:169 BRA @UNKNOWN16
    case 0xC048FD: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:171 LDA #0
    case 0xC048FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:171 LDA #0
    // Overlapping static entry reached from 0xC048FF.
    case 0xC04901: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:172 STA @VIRTUAL04
    case 0xC04902: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0449B.asm:174 LDA @VIRTUAL04
    case 0xC04904: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0449B.asm:175 STA GAME_STATE+game_state::trodden_tile_type
    case 0xC04906: cpu.execute_instruction<0x8D>(0x009B32, 3); return true;
    // src/unknown/C0/C0449B.asm:176 LDA #1
    case 0xC04909: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0449B.asm:176 LDA #1
    // Overlapping static entry reached from 0xC04909.
    case 0xC0490B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:177 STA @VIRTUAL02
    case 0xC0490C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:178 LDY GAME_STATE+game_state::current_party_members
    case 0xC0490E: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C0449B.asm:179 LDX @LOCAL02 + fixed_point::integer
    case 0xC04911: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C0449B.asm:180 LDA @LOCAL01 + fixed_point::integer
    case 0xC04913: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C0449B.asm:181 JSL NPC_COLLISION_CHECK
    case 0xC04915: cpu.execute_instruction<0x22>(0xC06224, 4); return true;
    // src/unknown/C0/C0449B.asm:182 LDA ENTITY_COLLIDED_OBJECTS+46
    case 0xC04919: cpu.execute_instruction<0xAD>(0x002CCA, 3); return true;
    // src/unknown/C0/C0449B.asm:183 CMP #ENTITY_COLLISION_NO_OBJECT
    case 0xC0491C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0449B.asm:183 CMP #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC0491C.
    case 0xC0491E: cpu.execute_instruction<0xFF>(0xA905F0, 4); return true;
    // src/unknown/C0/C0449B.asm:184 BEQ @UNKNOWN17
    case 0xC0491F: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:185 LDA #0
    case 0xC04921: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:185 LDA #0
    // Overlapping static entry reached from 0xC0491E.
    case 0xC04922: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0449B.asm:185 LDA #0
    // Overlapping static entry reached from 0xC04921.
    case 0xC04923: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:186 STA @VIRTUAL02
    case 0xC04924: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:188 LDA @VIRTUAL04
    case 0xC04926: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0449B.asm:189 AND #$00C0
    case 0xC04928: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C0449B.asm:189 AND #$00C0
    // Overlapping static entry reached from 0xC04928.
    case 0xC0492A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0449B.asm:190 BEQ @UNKNOWN18
    case 0xC0492B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:191 LDA #0
    case 0xC0492D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:191 LDA #0
    // Overlapping static entry reached from 0xC0492D.
    case 0xC0492F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0449B.asm:192 STA @VIRTUAL02
    case 0xC04930: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:194 LDA LADDER_STAIRS_TILE_X
    case 0xC04932: cpu.execute_instruction<0xAD>(0x00612E, 3); return true;
    // src/unknown/C0/C0449B.asm:195 CMP #.LOWORD(-1)
    case 0xC04935: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0449B.asm:195 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04935.
    case 0xC04937: cpu.execute_instruction<0xFF>(0xAE0EF0, 4); return true;
    // src/unknown/C0/C0449B.asm:196 BEQ @UNKNOWN19
    case 0xC04938: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C0/C0449B.asm:197 LDX LADDER_STAIRS_TILE_Y
    case 0xC0493A: cpu.execute_instruction<0xAE>(0x006130, 3); return true;
    // src/unknown/C0/C0449B.asm:197 LDX LADDER_STAIRS_TILE_Y
    // Overlapping static entry reached from 0xC04937.
    case 0xC0493B: cpu.execute_instruction<0x30>(0x000061, 2); return true;
    // src/unknown/C0/C0449B.asm:198 LDA LADDER_STAIRS_TILE_X
    case 0xC0493D: cpu.execute_instruction<0xAD>(0x00612E, 3); return true;
    // src/unknown/C0/C0449B.asm:199 JSL UNKNOWN_C07526
    case 0xC04940: cpu.execute_instruction<0x22>(0xC07765, 4); return true;
    // src/unknown/C0/C0449B.asm:200 STA @VIRTUAL02
    case 0xC04944: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:201 BRA @UNKNOWN21
    case 0xC04946: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C0449B.asm:203 LDX GAME_STATE+game_state::walking_style
    case 0xC04948: cpu.execute_instruction<0xAE>(0x009B34, 3); return true;
    // src/unknown/C0/C0449B.asm:204 CPX #WALKING_STYLE::LADDER
    case 0xC0494B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/unknown/C0/C0449B.asm:204 CPX #WALKING_STYLE::LADDER
    // Overlapping static entry reached from 0xC0494B.
    case 0xC0494D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0449B.asm:205 BEQ @UNKNOWN20
    case 0xC0494E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:206 CPX #WALKING_STYLE::ROPE
    case 0xC04950: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/C0/C0449B.asm:206 CPX #WALKING_STYLE::ROPE
    // Overlapping static entry reached from 0xC04950.
    case 0xC04952: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:207 BNE @UNKNOWN21
    case 0xC04953: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C0449B.asm:209 STZ GAME_STATE+game_state::walking_style
    case 0xC04955: cpu.execute_instruction<0x9C>(0x009B34, 3); return true;
    // src/unknown/C0/C0449B.asm:211 LDA @VIRTUAL02
    case 0xC04958: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0449B.asm:212 BEQ @UNKNOWN22
    case 0xC0495A: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:213 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0495C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:213 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0495E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:213 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC04960: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:213 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC04962: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0449B.asm:214 LDA @VIRTUAL06
    case 0xC04964: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0449B.asm:215 STA GAME_STATE + game_state::unknown80
    case 0xC04966: cpu.execute_instruction<0x8D>(0x009B26, 3); return true;
    // src/unknown/C0/C0449B.asm:216 LDA @VIRTUAL06 + fixed_point::integer
    case 0xC04969: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0449B.asm:217 STA GAME_STATE+game_state::leader_x_coord
    case 0xC0496B: cpu.execute_instruction<0x8D>(0x009B28, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0449B.asm:218 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0496E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0449B.asm:218 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC04970: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0449B.asm:218 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC04972: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0449B.asm:218 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC04974: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C0449B.asm:219 LDA @VIRTUAL06
    case 0xC04976: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0449B.asm:220 STA GAME_STATE + game_state::unknown84
    case 0xC04978: cpu.execute_instruction<0x8D>(0x009B2A, 3); return true;
    // src/unknown/C0/C0449B.asm:221 LDA @VIRTUAL06 + fixed_point::integer
    case 0xC0497B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C0449B.asm:222 STA GAME_STATE+game_state::leader_y_coord
    case 0xC0497D: cpu.execute_instruction<0x8D>(0x009B2C, 3); return true;
    // src/unknown/C0/C0449B.asm:223 BRA @UNKNOWN23
    case 0xC04980: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0449B.asm:225 STZ GAME_STATE + game_state::unknown90
    case 0xC04982: cpu.execute_instruction<0x9C>(0x009B36, 3); return true;
    // src/unknown/C0/C0449B.asm:227 LDA FRAME_COUNTER
    case 0xC04985: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/unknown/C0/C0449B.asm:228 AND #$00FF
    case 0xC04988: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0449B.asm:228 AND #$00FF
    // Overlapping static entry reached from 0xC04988.
    case 0xC0498A: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0449B.asm:229 AND #$0001
    case 0xC0498B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0449B.asm:229 AND #$0001
    // Overlapping static entry reached from 0xC0498B.
    case 0xC0498D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:230 BNE @UNKNOWN24
    case 0xC0498E: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C0449B.asm:231 LDA ACTIVE_HOTSPOTS
    case 0xC04990: cpu.execute_instruction<0xAD>(0x0061C2, 3); return true;
    // src/unknown/C0/C0449B.asm:232 BEQ @UNKNOWN24
    case 0xC04993: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0449B.asm:233 LDA #0
    case 0xC04995: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:233 LDA #0
    // Overlapping static entry reached from 0xC04995.
    case 0xC04997: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:234 JSL UNKNOWN_C073C0
    case 0xC04998: cpu.execute_instruction<0x22>(0xC075FC, 4); return true;
    // src/unknown/C0/C0449B.asm:236 LDA FRAME_COUNTER
    case 0xC0499C: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/unknown/C0/C0449B.asm:236 LDA FRAME_COUNTER
    // Overlapping static entry reached from 0xC0493B.
    case 0xC0499E: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0449B.asm:237 AND #$00FF
    case 0xC0499F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0449B.asm:237 AND #$00FF
    // Overlapping static entry reached from 0xC0499F.
    case 0xC049A1: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0449B.asm:238 AND #$0001
    case 0xC049A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0449B.asm:238 AND #$0001
    // Overlapping static entry reached from 0xC049A2.
    case 0xC049A4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0449B.asm:239 BEQ @UNKNOWN25
    case 0xC049A5: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0449B.asm:240 LDA ACTIVE_HOTSPOTS + .SIZEOF(active_hotspot)
    case 0xC049A7: cpu.execute_instruction<0xAD>(0x0061D0, 3); return true;
    // src/unknown/C0/C0449B.asm:241 BEQ @UNKNOWN25
    case 0xC049AA: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0449B.asm:242 LDA #1
    case 0xC049AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0449B.asm:242 LDA #1
    // Overlapping static entry reached from 0xC049AC.
    case 0xC049AE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0449B.asm:243 JSL UNKNOWN_C073C0
    case 0xC049AF: cpu.execute_instruction<0x22>(0xC075FC, 4); return true;
    // src/unknown/C0/C0449B.asm:245 LDX GAME_STATE+game_state::walking_style
    case 0xC049B3: cpu.execute_instruction<0xAE>(0x009B34, 3); return true;
    // src/unknown/C0/C0449B.asm:246 CPX #WALKING_STYLE::LADDER
    case 0xC049B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/unknown/C0/C0449B.asm:246 CPX #WALKING_STYLE::LADDER
    // Overlapping static entry reached from 0xC049B6.
    case 0xC049B8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0449B.asm:247 BEQ @UNKNOWN26
    case 0xC049B9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0449B.asm:248 CPX #WALKING_STYLE::ROPE
    case 0xC049BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/C0/C0449B.asm:248 CPX #WALKING_STYLE::ROPE
    // Overlapping static entry reached from 0xC049BB.
    case 0xC049BD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0449B.asm:249 BNE @UNKNOWN27
    case 0xC049BE: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C0449B.asm:251 LDA LADDER_STAIRS_TILE_X
    case 0xC049C0: cpu.execute_instruction<0xAD>(0x00612E, 3); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unknown/C0/C0449B.asm:252 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC049C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unknown/C0/C0449B.asm:252 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC049C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unknown/C0/C0449B.asm:252 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC049C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:253 CLC
    case 0xC049C6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:254 ADC #8
    case 0xC049C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C0/C0449B.asm:254 ADC #8
    // Overlapping static entry reached from 0xC049C7.
    case 0xC049C9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0449B.asm:255 STA GAME_STATE+game_state::leader_x_coord
    case 0xC049CA: cpu.execute_instruction<0x8D>(0x009B28, 3); return true;
    // src/unknown/C0/C0449B.asm:257 LDA DEBUG
    case 0xC049CD: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/unknown/C0/C0449B.asm:258 BEQ @RETURN
    case 0xC049D0: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C0/C0449B.asm:259 LDA PAD_STATE
    case 0xC049D2: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C0/C0449B.asm:260 AND #PAD::X_BUTTON
    case 0xC049D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/C0/C0449B.asm:260 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC049D5.
    case 0xC049D7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0449B.asm:261 BEQ @RETURN
    case 0xC049D8: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C0/C0449B.asm:262 LDX #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    case 0xC049DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000028, 2); else cpu.execute_instruction<0xA2>(0x009B28, 3); return true;
    // src/unknown/C0/C0449B.asm:262 LDX #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    // Overlapping static entry reached from 0xC049DA.
    case 0xC049DC: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:263 LDA __BSS_START__,X
    case 0xC049DD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:264 AND #$FFF8
    case 0xC049E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/C0/C0449B.asm:264 AND #$FFF8
    // Overlapping static entry reached from 0xC049E0.
    case 0xC049E2: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C0449B.asm:265 STA __BSS_START__,X
    case 0xC049E3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:266 LDX #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    case 0xC049E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00002C, 2); else cpu.execute_instruction<0xA2>(0x009B2C, 3); return true;
    // src/unknown/C0/C0449B.asm:266 LDX #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    // Overlapping static entry reached from 0xC049E6.
    case 0xC049E8: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0449B.asm:267 LDA __BSS_START__,X
    case 0xC049E9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0449B.asm:268 AND #$FFF8
    case 0xC049EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/C0/C0449B.asm:268 AND #$FFF8
    // Overlapping static entry reached from 0xC049EC.
    case 0xC049EE: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C0449B.asm:269 STA __BSS_START__,X
    case 0xC049EF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0449B.asm:271 END_C_FUNCTION
    case 0xC049F2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0449B.asm:271 END_C_FUNCTION
    case 0xC049F3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0476D.asm (unresolved).
bool execute_unresolved_c0_c0476d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0476D.asm:3 BEGIN_C_FUNCTION
    case 0xC049F4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0476D.asm:6 END_STACK_VARS
    case 0xC049F6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0476D.asm:6 END_STACK_VARS
    case 0xC049F7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0476D.asm:6 END_STACK_VARS
    case 0xC049F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0476D.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC049F8.
    case 0xC049FA: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0476D.asm:6 END_STACK_VARS
    case 0xC049FB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0476D.asm:7 LDA #0
    case 0xC049FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0476D.asm:7 LDA #0
    // Overlapping static entry reached from 0xC049FC.
    case 0xC049FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0476D.asm:8 STA @VIRTUAL04
    case 0xC049FF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0476D.asm:9 LDA CAMERA_FOCUS_ENTITY
    case 0xC04A01: cpu.execute_instruction<0xAD>(0x00A039, 3); return true;
    // src/unknown/C0/C0476D.asm:10 ASL
    case 0xC04A04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0476D.asm:11 TAX
    case 0xC04A05: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0476D.asm:12 LDY ENTITY_ABS_X_TABLE,X
    case 0xC04A06: cpu.execute_instruction<0xBC>(0x000B84, 3); return true;
    // src/unknown/C0/C0476D.asm:13 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC04A09: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0476D.asm:14 STA @LOCAL00
    case 0xC04A0C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0476D.asm:15 LDA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC04A0E: cpu.execute_instruction<0xBD>(0x000C38, 3); return true;
    // src/unknown/C0/C0476D.asm:16 STA @VIRTUAL02
    case 0xC04A11: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0476D.asm:17 LDA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC04A13: cpu.execute_instruction<0xBD>(0x000C74, 3); return true;
    // src/unknown/C0/C0476D.asm:18 TAX
    case 0xC04A16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0476D.asm:19 CPY GAME_STATE+game_state::leader_x_coord
    case 0xC04A17: cpu.execute_instruction<0xCC>(0x009B28, 3); return true;
    // src/unknown/C0/C0476D.asm:20 BNE @UNKNOWN0
    case 0xC04A1A: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/C0/C0476D.asm:21 LDA @LOCAL00
    case 0xC04A1C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0476D.asm:22 CMP GAME_STATE+game_state::leader_y_coord
    case 0xC04A1E: cpu.execute_instruction<0xCD>(0x009B2C, 3); return true;
    // src/unknown/C0/C0476D.asm:23 BNE @UNKNOWN0
    case 0xC04A21: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C0476D.asm:24 LDA @VIRTUAL02
    case 0xC04A23: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0476D.asm:25 CMP GAME_STATE + game_state::unknown80
    case 0xC04A25: cpu.execute_instruction<0xCD>(0x009B26, 3); return true;
    // src/unknown/C0/C0476D.asm:26 BNE @UNKNOWN0
    case 0xC04A28: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0476D.asm:27 CPX GAME_STATE + game_state::unknown84
    case 0xC04A2A: cpu.execute_instruction<0xEC>(0x009B2A, 3); return true;
    // src/unknown/C0/C0476D.asm:28 BEQ @UNKNOWN1
    case 0xC04A2D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0476D.asm:30 LDA #1
    case 0xC04A2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0476D.asm:30 LDA #1
    // Overlapping static entry reached from 0xC04A2F.
    case 0xC04A31: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0476D.asm:31 STA @VIRTUAL04
    case 0xC04A32: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0476D.asm:33 STY GAME_STATE+game_state::leader_x_coord
    case 0xC04A34: cpu.execute_instruction<0x8C>(0x009B28, 3); return true;
    // src/unknown/C0/C0476D.asm:34 LDA @LOCAL00
    case 0xC04A37: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0476D.asm:35 STA GAME_STATE+game_state::leader_y_coord
    case 0xC04A39: cpu.execute_instruction<0x8D>(0x009B2C, 3); return true;
    // src/unknown/C0/C0476D.asm:36 LDA @VIRTUAL02
    case 0xC04A3C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0476D.asm:37 STA GAME_STATE + game_state::unknown80
    case 0xC04A3E: cpu.execute_instruction<0x8D>(0x009B26, 3); return true;
    // src/unknown/C0/C0476D.asm:38 STX GAME_STATE + game_state::unknown84
    case 0xC04A41: cpu.execute_instruction<0x8E>(0x009B2A, 3); return true;
    // src/unknown/C0/C0476D.asm:39 LDA CAMERA_FOCUS_ENTITY
    case 0xC04A44: cpu.execute_instruction<0xAD>(0x00A039, 3); return true;
    // src/unknown/C0/C0476D.asm:40 ASL
    case 0xC04A47: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0476D.asm:41 TAX
    case 0xC04A48: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0476D.asm:42 LDA ENTITY_DIRECTIONS,X
    case 0xC04A49: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/unknown/C0/C0476D.asm:43 STA GAME_STATE+game_state::leader_direction
    case 0xC04A4C: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/unknown/C0/C0476D.asm:44 LDA @VIRTUAL04
    case 0xC04A4F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C0476D.asm:45 STA GAME_STATE + game_state::unknown90
    case 0xC04A51: cpu.execute_instruction<0x8D>(0x009B36, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0476D.asm:46 END_C_FUNCTION
    case 0xC04A54: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0476D.asm:46 END_C_FUNCTION
    case 0xC04A55: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C047CF.asm (unresolved).
bool execute_unresolved_c0_c047cf_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C047CF.asm:3 BEGIN_C_FUNCTION
    case 0xC04A56: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C047CF.asm:9 END_STACK_VARS
    case 0xC04A58: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C047CF.asm:9 END_STACK_VARS
    case 0xC04A59: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C047CF.asm:9 END_STACK_VARS
    case 0xC04A5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C047CF.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC04A5A.
    case 0xC04A5C: cpu.execute_instruction<0xFF>(0x40AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C047CF.asm:9 END_STACK_VARS
    case 0xC04A5D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC04A5E: cpu.execute_instruction<0xAD>(0x005140, 3); return true;
    // src/unknown/C0/C047CF.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    // Overlapping static entry reached from 0xC04A5C.
    case 0xC04A60: cpu.execute_instruction<0x51>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C047CF.asm:11 BNEL @UNKNOWN9
    case 0xC04A61: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C047CF.asm:11 BNEL @UNKNOWN9
    // Overlapping static entry reached from 0xC04A60.
    case 0xC04A62: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C047CF.asm:11 BNEL @UNKNOWN9
    case 0xC04A63: cpu.execute_instruction<0x4C>(0x004B63, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C047CF.asm:11 BNEL @UNKNOWN9
    // Overlapping static entry reached from 0xC04A62.
    case 0xC04A64: cpu.execute_instruction<0x63>(0x00004B, 2); return true;
    // src/unknown/C0/C047CF.asm:12 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC04A66: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/unknown/C0/C047CF.asm:13 BEQ @UNKNOWN1
    case 0xC04A69: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C047CF.asm:14 DEC BATTLE_SWIRL_COUNTDOWN
    case 0xC04A6B: cpu.execute_instruction<0xCE>(0x0060E6, 3); return true;
    // src/unknown/C0/C047CF.asm:15 JMP @UNKNOWN9
    case 0xC04A6E: cpu.execute_instruction<0x4C>(0x004B63, 3); return true;
    // src/unknown/C0/C047CF.asm:17 LDA ESCALATOR_ENTRANCE_DIRECTION
    case 0xC04A71: cpu.execute_instruction<0xAD>(0x00614C, 3); return true;
    // src/unknown/C0/C047CF.asm:18 AND #$0300
    case 0xC04A74: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000300, 3); return true;
    // src/unknown/C0/C047CF.asm:18 AND #$0300
    // Overlapping static entry reached from 0xC04A74.
    case 0xC04A76: cpu.execute_instruction<0x03>(0x0000F0, 2); return true;
    // src/unknown/C0/C047CF.asm:19 BEQ @UNKNOWN2
    case 0xC04A77: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C047CF.asm:19 BEQ @UNKNOWN2
    // Overlapping static entry reached from 0xC04A76.
    case 0xC04A78: cpu.execute_instruction<0x11>(0x0000C9, 2); return true;
    // src/unknown/C0/C047CF.asm:20 CMP #2 << 8
    case 0xC04A79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000200, 3); return true;
    // src/unknown/C0/C047CF.asm:20 CMP #2 << 8
    // Overlapping static entry reached from 0xC04A78.
    case 0xC04A7A: cpu.execute_instruction<0x00>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:20 CMP #2 << 8
    // Overlapping static entry reached from 0xC04A79.
    case 0xC04A7B: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C0/C047CF.asm:21 BEQ @UNKNOWN3
    case 0xC04A7C: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C047CF.asm:22 CMP #1 << 8
    case 0xC04A7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C047CF.asm:22 CMP #1 << 8
    // Overlapping static entry reached from 0xC04A7E.
    case 0xC04A80: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C047CF.asm:23 BEQ @UNKNOWN4
    case 0xC04A81: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C0/C047CF.asm:23 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC04A80.
    case 0xC04A82: cpu.execute_instruction<0x19>(0x0000C9, 3); return true;
    // src/unknown/C0/C047CF.asm:24 CMP #3 << 8
    case 0xC04A83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000300, 3); return true;
    // src/unknown/C0/C047CF.asm:24 CMP #3 << 8
    // Overlapping static entry reached from 0xC04A83.
    case 0xC04A85: cpu.execute_instruction<0x03>(0x0000F0, 2); return true;
    // src/unknown/C0/C047CF.asm:25 BEQ @UNKNOWN5
    case 0xC04A86: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C0/C047CF.asm:25 BEQ @UNKNOWN5
    // Overlapping static entry reached from 0xC04A85.
    case 0xC04A87: cpu.execute_instruction<0x1D>(0x002280, 3); return true;
    // src/unknown/C0/C047CF.asm:26 BRA @UNKNOWN6
    case 0xC04A88: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C0/C047CF.asm:28 LDA #7
    case 0xC04A8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C047CF.asm:28 LDA #7
    // Overlapping static entry reached from 0xC04A8A.
    case 0xC04A8C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C047CF.asm:29 STA @VIRTUAL02
    case 0xC04A8D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:30 STA @LOCAL03
    case 0xC04A8F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C047CF.asm:31 BRA @UNKNOWN6
    case 0xC04A91: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C0/C047CF.asm:33 LDA #5
    case 0xC04A93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C047CF.asm:33 LDA #5
    // Overlapping static entry reached from 0xC04A93.
    case 0xC04A95: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C047CF.asm:34 STA @VIRTUAL02
    case 0xC04A96: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:35 STA @LOCAL03
    case 0xC04A98: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C047CF.asm:36 BRA @UNKNOWN6
    case 0xC04A9A: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C047CF.asm:38 LDA #1
    case 0xC04A9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C047CF.asm:38 LDA #1
    // Overlapping static entry reached from 0xC04A9C.
    case 0xC04A9E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C047CF.asm:39 STA @VIRTUAL02
    case 0xC04A9F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:40 STA @LOCAL03
    case 0xC04AA1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C047CF.asm:41 BRA @UNKNOWN6
    case 0xC04AA3: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C0/C047CF.asm:43 LDA #3
    case 0xC04AA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C047CF.asm:43 LDA #3
    // Overlapping static entry reached from 0xC04AA5.
    case 0xC04AA7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C047CF.asm:44 STA @VIRTUAL02
    case 0xC04AA8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:45 STA @LOCAL03
    case 0xC04AAA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C047CF.asm:47 LDA #.LOWORD(-1)
    case 0xC04AAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C047CF.asm:47 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04AAC.
    case 0xC04AAE: cpu.execute_instruction<0xFF>(0x612E8D, 4); return true;
    // src/unknown/C0/C047CF.asm:48 STA LADDER_STAIRS_TILE_X
    case 0xC04AAF: cpu.execute_instruction<0x8D>(0x00612E, 3); return true;
    // src/unknown/C0/C047CF.asm:49 LDA @LOCAL03
    case 0xC04AB2: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C047CF.asm:50 STA @VIRTUAL02
    case 0xC04AB4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:51 STA @LOCAL00
    case 0xC04AB6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C047CF.asm:52 LDY GAME_STATE+game_state::current_party_members
    case 0xC04AB8: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C047CF.asm:53 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC04ABB: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C047CF.asm:54 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC04ABE: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C047CF.asm:55 JSL UNKNOWN_C05B7B
    case 0xC04AC1: cpu.execute_instruction<0x22>(0xC05DA9, 4); return true;
    // src/unknown/C0/C047CF.asm:56 LDA LADDER_STAIRS_TILE_X
    case 0xC04AC5: cpu.execute_instruction<0xAD>(0x00612E, 3); return true;
    // src/unknown/C0/C047CF.asm:57 CMP #.LOWORD(-1)
    case 0xC04AC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C047CF.asm:57 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04AC8.
    case 0xC04ACA: cpu.execute_instruction<0xFF>(0xAE0AF0, 4); return true;
    // src/unknown/C0/C047CF.asm:58 BEQ @UNKNOWN7
    case 0xC04ACB: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C047CF.asm:59 LDX LADDER_STAIRS_TILE_Y
    case 0xC04ACD: cpu.execute_instruction<0xAE>(0x006130, 3); return true;
    // src/unknown/C0/C047CF.asm:59 LDX LADDER_STAIRS_TILE_Y
    // Overlapping static entry reached from 0xC04ACA.
    case 0xC04ACE: cpu.execute_instruction<0x30>(0x000061, 2); return true;
    // src/unknown/C0/C047CF.asm:60 LDA LADDER_STAIRS_TILE_X
    case 0xC04AD0: cpu.execute_instruction<0xAD>(0x00612E, 3); return true;
    // src/unknown/C0/C047CF.asm:61 JSL UNKNOWN_C07526
    case 0xC04AD3: cpu.execute_instruction<0x22>(0xC07765, 4); return true;
    // src/unknown/C0/C047CF.asm:63 LDX #1
    case 0xC04AD7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C047CF.asm:63 LDX #1
    // Overlapping static entry reached from 0xC04AD7.
    case 0xC04AD9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C047CF.asm:65 BEQL @UNKNOWN8
    case 0xC04ADA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C047CF.asm:65 BEQL @UNKNOWN8
    case 0xC04ADC: cpu.execute_instruction<0x4C>(0x004B5D, 3); return true;
    // src/unknown/C0/C047CF.asm:69 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC04ADF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000026, 2); else cpu.execute_instruction<0xA0>(0x009B26, 3); return true;
    // src/unknown/C0/C047CF.asm:69 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC04ADF.
    case 0xC04AE1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:70 STY @LOCAL02
    case 0xC04AE2: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C047CF.asm:71 LDA @VIRTUAL02
    case 0xC04AE4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C047CF.asm:72 ASL
    case 0xC04AE6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:73 ASL
    case 0xC04AE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:74 STA @LOCAL01
    case 0xC04AE8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C047CF.asm:75 CLC
    case 0xC04AEA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:77 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC04AEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00515C, 3); return true;
    // src/unknown/C0/C047CF.asm:77 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC04AEB.
    case 0xC04AED: cpu.execute_instruction<0x51>(0x000018, 2); return true;
    // src/unknown/C0/C047CF.asm:78 CLC
    case 0xC04AEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:79 ADC #.SIZEOF(movement_speeds) * 12
    case 0xC04AEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000180, 3); return true;
    // src/unknown/C0/C047CF.asm:79 ADC #.SIZEOF(movement_speeds) * 12
    // Overlapping static entry reached from 0xC04AEF.
    case 0xC04AF1: cpu.execute_instruction<0x01>(0x0000A8, 2); return true;
    // src/unknown/C0/C047CF.asm:83 TAY
    case 0xC04AF2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C047CF.asm:84 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04AF3: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C047CF.asm:84 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04AF6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C047CF.asm:84 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04AF8: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C047CF.asm:84 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04AFB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C047CF.asm:85 LDY @LOCAL02
    case 0xC04AFD: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C047CF.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04AFF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C047CF.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04B02: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C047CF.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04B04: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C047CF.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04B07: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C047CF.asm:87 CLC
    case 0xC04B09: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C047CF.asm:88 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04B0A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C047CF.asm:88 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04B0C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C047CF.asm:88 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04B0E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C047CF.asm:88 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04B10: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C047CF.asm:88 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04B12: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C047CF.asm:88 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04B14: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C047CF.asm:89 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04B16: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C047CF.asm:89 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04B18: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C047CF.asm:89 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04B1B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C047CF.asm:89 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04B1D: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C047CF.asm:90 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC04B20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002A, 2); else cpu.execute_instruction<0xA0>(0x009B2A, 3); return true;
    // src/unknown/C0/C047CF.asm:90 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC04B20.
    case 0xC04B22: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:91 STY @LOCAL03
    case 0xC04B23: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C047CF.asm:92 LDA @LOCAL01
    case 0xC04B25: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C047CF.asm:93 CLC
    case 0xC04B27: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:95 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC04B28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00531C, 3); return true;
    // src/unknown/C0/C047CF.asm:95 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC04B28.
    case 0xC04B2A: cpu.execute_instruction<0x53>(0x000018, 2); return true;
    // src/unknown/C0/C047CF.asm:96 CLC
    case 0xC04B2B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C047CF.asm:97 ADC #.SIZEOF(movement_speeds) * 12
    case 0xC04B2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000180, 3); return true;
    // src/unknown/C0/C047CF.asm:97 ADC #.SIZEOF(movement_speeds) * 12
    // Overlapping static entry reached from 0xC04B2C.
    case 0xC04B2E: cpu.execute_instruction<0x01>(0x0000A8, 2); return true;
    // src/unknown/C0/C047CF.asm:101 TAY
    case 0xC04B2F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C047CF.asm:102 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04B30: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C047CF.asm:102 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC04ACE.
    case 0xC04B31: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C047CF.asm:102 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04B33: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C047CF.asm:102 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04B35: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C047CF.asm:102 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04B38: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C047CF.asm:103 LDY @LOCAL03
    case 0xC04B3A: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C047CF.asm:104 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04B3C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C047CF.asm:104 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04B3F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C047CF.asm:104 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04B41: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C047CF.asm:104 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04B44: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C047CF.asm:105 CLC
    case 0xC04B46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C047CF.asm:106 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04B47: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C047CF.asm:106 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04B49: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C047CF.asm:106 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04B4B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C047CF.asm:106 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04B4D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C047CF.asm:106 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04B4F: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C047CF.asm:106 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04B51: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C047CF.asm:107 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04B53: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C047CF.asm:107 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04B55: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C047CF.asm:107 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04B58: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C047CF.asm:107 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04B5A: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C047CF.asm:109 LDA #1
    case 0xC04B5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C047CF.asm:109 LDA #1
    // Overlapping static entry reached from 0xC04B5D.
    case 0xC04B5F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C047CF.asm:110 STA GAME_STATE + game_state::unknown90
    case 0xC04B60: cpu.execute_instruction<0x8D>(0x009B36, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C047CF.asm:112 END_C_FUNCTION
    case 0xC04B63: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C047CF.asm:112 END_C_FUNCTION
    case 0xC04B64: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C048D3-jp.asm (unresolved).
bool execute_unresolved_c0_c048d3_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C048D3-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC04B65: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C048D3-jp.asm:13 END_STACK_VARS
    case 0xC04B67: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C048D3-jp.asm:13 END_STACK_VARS
    case 0xC04B68: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C048D3-jp.asm:13 END_STACK_VARS
    case 0xC04B69: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C048D3-jp.asm:13 END_STACK_VARS
    case 0xC04B6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C048D3-jp.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC04B6A.
    case 0xC04B6C: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C048D3-jp.asm:13 END_STACK_VARS
    case 0xC04B6D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C048D3-jp.asm:13 END_STACK_VARS
    case 0xC04B6E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:14 TAX
    case 0xC04B6F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:15 STX @LOCAL06
    case 0xC04B70: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:16 LDA GAME_STATE+game_state::walking_style
    case 0xC04B72: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:17 JSL MAP_INPUT_TO_DIRECTION
    case 0xC04B75: cpu.execute_instruction<0x22>(0xC042D6, 4); return true;
    // src/unknown/C0/C048D3-jp.asm:18 TAY
    case 0xC04B79: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:19 STY @LOCAL05
    case 0xC04B7A: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:20 STY @VIRTUAL02
    case 0xC04B7C: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:21 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC04B7E: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:22 BEQ @UNKNOWN1
    case 0xC04B81: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:23 LDX BATTLE_SWIRL_COUNTDOWN
    case 0xC04B83: cpu.execute_instruction<0xAE>(0x0060E6, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:24 DEX
    case 0xC04B86: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:25 STX BATTLE_SWIRL_COUNTDOWN
    case 0xC04B87: cpu.execute_instruction<0x8E>(0x0060E6, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:26 BEQ @UNKNOWN0
    case 0xC04B8A: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:27 LDY GAME_STATE+game_state::current_party_members
    case 0xC04B8C: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:28 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC04B8F: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:29 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC04B92: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:30 JSL NPC_COLLISION_CHECK
    case 0xC04B95: cpu.execute_instruction<0x22>(0xC06224, 4); return true;
    // src/unknown/C0/C048D3-jp.asm:31 JMP @UNKNOWN9
    case 0xC04B99: cpu.execute_instruction<0x4C>(0x004CEF, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:33 LDA #.LOWORD(-1)
    case 0xC04B9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:33 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04B9C.
    case 0xC04B9E: cpu.execute_instruction<0xFF>(0x51488D, 4); return true;
    // src/unknown/C0/C048D3-jp.asm:34 STA BATTLE_MODE
    case 0xC04B9F: cpu.execute_instruction<0x8D>(0x005148, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:35 JMP @UNKNOWN9
    case 0xC04BA2: cpu.execute_instruction<0x4C>(0x004CEF, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:37 LDA PAD_PRESS
    case 0xC04BA5: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:38 AND #PAD::R_BUTTON
    case 0xC04BA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:38 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC04BA8.
    case 0xC04BAA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:39 BEQ @UNKNOWN2
    case 0xC04BAB: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:40 LDA #SFX::BICYCLE_BELL
    case 0xC04BAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:40 LDA #SFX::BICYCLE_BELL
    // Overlapping static entry reached from 0xC04BAD.
    case 0xC04BAF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:41 JSL PLAY_SOUND
    case 0xC04BB0: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C0/C048D3-jp.asm:43 LDY @LOCAL05
    case 0xC04BB4: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:44 CPY #.LOWORD(-1)
    case 0xC04BB6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:44 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04BB6.
    case 0xC04BB8: cpu.execute_instruction<0xFF>(0xA61BD0, 4); return true;
    // src/unknown/C0/C048D3-jp.asm:45 BNE @UNKNOWN4
    case 0xC04BB9: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:46 LDX @LOCAL06
    case 0xC04BBB: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:46 LDX @LOCAL06
    // Overlapping static entry reached from 0xC04BB8.
    case 0xC04BBC: cpu.execute_instruction<0x1E>(0x0007F0, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:47 BEQ @UNKNOWN3
    case 0xC04BBD: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:48 LDY GAME_STATE+game_state::leader_direction
    case 0xC04BBF: cpu.execute_instruction<0xAC>(0x009B30, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:49 STY @LOCAL05
    case 0xC04BC2: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:50 BRA @UNKNOWN4
    case 0xC04BC4: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:52 LDY GAME_STATE+game_state::current_party_members
    case 0xC04BC6: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:53 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC04BC9: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:54 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC04BCC: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:55 JSL NPC_COLLISION_CHECK
    case 0xC04BCF: cpu.execute_instruction<0x22>(0xC06224, 4); return true;
    // src/unknown/C0/C048D3-jp.asm:56 JMP @UNKNOWN9
    case 0xC04BD3: cpu.execute_instruction<0x4C>(0x004CEF, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:58 TYA
    case 0xC04BD6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:59 AND #$0001
    case 0xC04BD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:59 AND #$0001
    // Overlapping static entry reached from 0xC04BD7.
    case 0xC04BD9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:60 BEQ @UNKNOWN5
    case 0xC04BDA: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:61 LDA #4
    case 0xC04BDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:61 LDA #4
    // Overlapping static entry reached from 0xC04BDC.
    case 0xC04BDE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:62 STA BICYCLE_DIAGONAL_TURN_COUNTER
    case 0xC04BDF: cpu.execute_instruction<0x8D>(0x0060E0, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:63 BRA @UNKNOWN7
    case 0xC04BE2: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:65 LDA BICYCLE_DIAGONAL_TURN_COUNTER
    case 0xC04BE4: cpu.execute_instruction<0xAD>(0x0060E0, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:66 BEQ @UNKNOWN7
    case 0xC04BE7: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:67 LDX BICYCLE_DIAGONAL_TURN_COUNTER
    case 0xC04BE9: cpu.execute_instruction<0xAE>(0x0060E0, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:68 DEX
    case 0xC04BEC: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:69 STX BICYCLE_DIAGONAL_TURN_COUNTER
    case 0xC04BED: cpu.execute_instruction<0x8E>(0x0060E0, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:70 BEQ @UNKNOWN6
    case 0xC04BF0: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:71 LDY GAME_STATE+game_state::leader_direction
    case 0xC04BF2: cpu.execute_instruction<0xAC>(0x009B30, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:72 STY @LOCAL05
    case 0xC04BF5: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:73 BRA @UNKNOWN7
    case 0xC04BF7: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:75 LDA @VIRTUAL02
    case 0xC04BF9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:76 CMP #.LOWORD(-1)
    case 0xC04BFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:76 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04BFB.
    case 0xC04BFD: cpu.execute_instruction<0xFF>(0xAC05D0, 4); return true;
    // src/unknown/C0/C048D3-jp.asm:77 BNE @UNKNOWN7
    case 0xC04BFE: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:78 LDY GAME_STATE+game_state::leader_direction
    case 0xC04C00: cpu.execute_instruction<0xAC>(0x009B30, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:78 LDY GAME_STATE+game_state::leader_direction
    // Overlapping static entry reached from 0xC04BFD.
    case 0xC04C01: cpu.execute_instruction<0x30>(0x00009B, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:79 STY @LOCAL05
    case 0xC04C03: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:81 STY GAME_STATE+game_state::leader_direction
    case 0xC04C05: cpu.execute_instruction<0x8C>(0x009B30, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:82 LDA #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC04C08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x009B26, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:82 LDA #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC04C08.
    case 0xC04C0A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:83 STA @LOCAL04
    case 0xC04C0B: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:84 TYA
    case 0xC04C0D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:85 ASL
    case 0xC04C0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:86 ASL
    case 0xC04C0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:87 STA @LOCAL03
    case 0xC04C10: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:88 CLC
    case 0xC04C12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:89 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC04C13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00515C, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:89 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC04C13.
    case 0xC04C15: cpu.execute_instruction<0x51>(0x000018, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:90 CLC
    case 0xC04C16: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:91 ADC #96
    case 0xC04C17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x000060, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:91 ADC #96
    // Overlapping static entry reached from 0xC04C17.
    case 0xC04C19: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:92 TAY
    case 0xC04C1A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C048D3-jp.asm:93 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04C1B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C048D3-jp.asm:93 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04C1E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C048D3-jp.asm:93 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04C20: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:93 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04C23: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:94 LDY @LOCAL04
    case 0xC04C25: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C048D3-jp.asm:95 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04C27: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C048D3-jp.asm:95 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04C2A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C048D3-jp.asm:95 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04C2C: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:95 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04C2F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:96 CLC
    case 0xC04C31: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C048D3-jp.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C32: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C34: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C048D3-jp.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C36: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C38: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C3A: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C3C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C048D3-jp.asm:98 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04C3E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C048D3-jp.asm:98 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04C40: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:98 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04C42: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:98 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC04C44: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:99 LDA #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC04C46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x009B2A, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:99 LDA #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC04C46.
    case 0xC04C48: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:100 STA @VIRTUAL04
    case 0xC04C49: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:101 LDA @LOCAL03
    case 0xC04C4B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:102 CLC
    case 0xC04C4D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:103 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC04C4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00531C, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:103 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC04C4E.
    case 0xC04C50: cpu.execute_instruction<0x53>(0x000018, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:104 CLC
    case 0xC04C51: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:105 ADC #96
    case 0xC04C52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x000060, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:105 ADC #96
    // Overlapping static entry reached from 0xC04C52.
    case 0xC04C54: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:106 TAY
    case 0xC04C55: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C048D3-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04C56: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C048D3-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04C59: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C048D3-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04C5B: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04C5E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:108 LDY @VIRTUAL04
    case 0xC04C60: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C048D3-jp.asm:109 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04C62: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C048D3-jp.asm:109 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04C65: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C048D3-jp.asm:109 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04C67: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:109 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04C6A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:110 CLC
    case 0xC04C6C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C048D3-jp.asm:111 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C6D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:111 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C6F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C048D3-jp.asm:111 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C71: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:111 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C73: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:111 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C75: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:111 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04C77: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C048D3-jp.asm:112 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC04C79: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C048D3-jp.asm:112 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC04C7B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:112 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC04C7D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:112 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC04C7F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:113 LDA #.LOWORD(-1)
    case 0xC04C81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:113 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04C81.
    case 0xC04C83: cpu.execute_instruction<0xFF>(0x612E8D, 4); return true;
    // src/unknown/C0/C048D3-jp.asm:114 STA LADDER_STAIRS_TILE_X
    case 0xC04C84: cpu.execute_instruction<0x8D>(0x00612E, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:115 LDY @LOCAL05
    case 0xC04C87: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:116 STY @LOCAL00
    case 0xC04C89: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:117 LDY #24
    case 0xC04C8B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x000018, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:117 LDY #24
    // Overlapping static entry reached from 0xC04C8B.
    case 0xC04C8D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:118 LDX @LOCAL02 + fixed_point::integer
    case 0xC04C8E: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:119 LDA @LOCAL01 + fixed_point::integer
    case 0xC04C90: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:120 JSL UNKNOWN_C05CD7
    case 0xC04C92: cpu.execute_instruction<0x22>(0xC05F05, 4); return true;
    // src/unknown/C0/C048D3-jp.asm:121 STA @VIRTUAL02
    case 0xC04C96: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:122 LDY GAME_STATE + game_state::current_party_members
    case 0xC04C98: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:123 LDX @LOCAL02 + fixed_point::integer
    case 0xC04C9B: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:124 LDA @LOCAL01 + fixed_point::integer
    case 0xC04C9D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:125 JSL NPC_COLLISION_CHECK
    case 0xC04C9F: cpu.execute_instruction<0x22>(0xC06224, 4); return true;
    // src/unknown/C0/C048D3-jp.asm:126 LDA ENTITY_COLLIDED_OBJECTS + 23 * 2
    case 0xC04CA3: cpu.execute_instruction<0xAD>(0x002CCA, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:127 CMP #ENTITY_COLLISION_NO_OBJECT
    case 0xC04CA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:127 CMP #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC04CA6.
    case 0xC04CA8: cpu.execute_instruction<0xFF>(0xA244D0, 4); return true;
    // src/unknown/C0/C048D3-jp.asm:128 BNE @UNKNOWN9
    case 0xC04CA9: cpu.execute_instruction<0xD0>(0x000044, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:129 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    case 0xC04CAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000036, 2); else cpu.execute_instruction<0xA2>(0x009B36, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:129 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    // Overlapping static entry reached from 0xC04CA8.
    case 0xC04CAC: cpu.execute_instruction<0x36>(0x00009B, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:129 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    // Overlapping static entry reached from 0xC04CAB.
    case 0xC04CAD: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:130 LDA __BSS_START__,X
    case 0xC04CAE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:131 INC
    case 0xC04CB1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C048D3-jp.asm:132 STA __BSS_START__,X
    case 0xC04CB2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:133 INC PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC04CB5: cpu.execute_instruction<0xEE>(0x002C8E, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:134 LDA @VIRTUAL02
    case 0xC04CB8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:135 AND #$00C0
    case 0xC04CBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:135 AND #$00C0
    // Overlapping static entry reached from 0xC04CBA.
    case 0xC04CBC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:136 BEQ @UNKNOWN8
    case 0xC04CBD: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:137 LDA #0
    case 0xC04CBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:137 LDA #0
    // Overlapping static entry reached from 0xC04CBF.
    case 0xC04CC1: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:138 STA __BSS_START__,X
    case 0xC04CC2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C048D3-jp.asm:139 BRA @UNKNOWN9
    case 0xC04CC5: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C048D3-jp.asm:141 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC04CC7: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C048D3-jp.asm:141 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC04CC9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:141 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC04CCB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:141 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC04CCD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:142 LDY @LOCAL04
    case 0xC04CCF: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C048D3-jp.asm:143 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04CD1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C048D3-jp.asm:143 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04CD3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:143 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04CD6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C048D3-jp.asm:143 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04CD8: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C048D3-jp.asm:144 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC04CDB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C048D3-jp.asm:144 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC04CDD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:144 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC04CDF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:144 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC04CE1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C048D3-jp.asm:145 LDY @VIRTUAL04
    case 0xC04CE3: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C048D3-jp.asm:146 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04CE5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C048D3-jp.asm:146 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04CE7: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C048D3-jp.asm:146 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04CEA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C048D3-jp.asm:146 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04CEC: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C048D3-jp.asm:148 END_C_FUNCTION
    case 0xC04CEF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C048D3-jp.asm:148 END_C_FUNCTION
    case 0xC04CF0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04A7B.asm (unresolved).
bool execute_unresolved_c0_c04a7b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C04A7B.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC04CF1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C04A7B.asm:4 LDA CAMERA_MODE_BACKUP
    case 0xC04CF3: cpu.execute_instruction<0xAD>(0x006100, 3); return true;
    // src/unknown/C0/C04A7B.asm:5 STA GAME_STATE + game_state::unknownB0
    case 0xC04CF6: cpu.execute_instruction<0x8D>(0x009B56, 3); return true;
    // src/unknown/C0/C04A7B.asm:6 JSL UNKNOWN_C0D19B
    case 0xC04CF9: cpu.execute_instruction<0x22>(0xC0D165, 4); return true;
    // src/unknown/C0/C04A7B.asm:7 RTL
    case 0xC04CFD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04A88.asm (unresolved).
bool execute_unresolved_c0_c04a88_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C04A88.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC04CFE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C04A88.asm:4 LDA #$000C
    case 0xC04D00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C0/C04A88.asm:4 LDA #$000C
    // Overlapping static entry reached from 0xC04D00.
    case 0xC04D02: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C04A88.asm:5 STA CAMERA_MODE_3_FRAMES_LEFT
    case 0xC04D03: cpu.execute_instruction<0x8D>(0x006102, 3); return true;
    // src/unknown/C0/C04A88.asm:6 LDX #.LOWORD(GAME_STATE) + game_state::unknownB0
    case 0xC04D06: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000056, 2); else cpu.execute_instruction<0xA2>(0x009B56, 3); return true;
    // src/unknown/C0/C04A88.asm:6 LDX #.LOWORD(GAME_STATE) + game_state::unknownB0
    // Overlapping static entry reached from 0xC04D06.
    case 0xC04D08: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04A88.asm:7 LDA __BSS_START__,X
    case 0xC04D09: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04A88.asm:8 STA CAMERA_MODE_BACKUP
    case 0xC04D0C: cpu.execute_instruction<0x8D>(0x006100, 3); return true;
    // src/unknown/C0/C04A88.asm:9 LDA #$0003
    case 0xC04D0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C04A88.asm:9 LDA #$0003
    // Overlapping static entry reached from 0xC04D0F.
    case 0xC04D11: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04A88.asm:10 STA __BSS_START__,X
    case 0xC04D12: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04A88.asm:11 LDA #$0002
    case 0xC04D15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C04A88.asm:11 LDA #$0002
    // Overlapping static entry reached from 0xC04D15.
    case 0xC04D17: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C04A88.asm:12 JSL UNKNOWN_C0AC0C
    case 0xC04D18: cpu.execute_instruction<0x22>(0xC0ABEB, 4); return true;
    // src/unknown/C0/C04A88.asm:13 LDA #$0001
    case 0xC04D1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04A88.asm:13 LDA #$0001
    // Overlapping static entry reached from 0xC04D1C.
    case 0xC04D1E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C04A88.asm:14 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xC04D1F: cpu.execute_instruction<0x8D>(0x00611E, 3); return true;
    // src/unknown/C0/C04A88.asm:15 RTL
    case 0xC04D22: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04AAD.asm (unresolved).
bool execute_unresolved_c0_c04aad_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04AAD.asm:3 BEGIN_C_FUNCTION
    case 0xC04D23: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04AAD.asm:7 END_STACK_VARS
    case 0xC04D25: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04AAD.asm:7 END_STACK_VARS
    case 0xC04D26: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04AAD.asm:7 END_STACK_VARS
    case 0xC04D27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04AAD.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC04D27.
    case 0xC04D29: cpu.execute_instruction<0xFF>(0x02AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04AAD.asm:7 END_STACK_VARS
    case 0xC04D2A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:8 LDX CAMERA_MODE_3_FRAMES_LEFT
    case 0xC04D2B: cpu.execute_instruction<0xAE>(0x006102, 3); return true;
    // src/unknown/C0/C04AAD.asm:8 LDX CAMERA_MODE_3_FRAMES_LEFT
    // Overlapping static entry reached from 0xC04D29.
    case 0xC04D2D: cpu.execute_instruction<0x61>(0x0000CA, 2); return true;
    // src/unknown/C0/C04AAD.asm:9 DEX
    case 0xC04D2E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:10 STX CAMERA_MODE_3_FRAMES_LEFT
    case 0xC04D2F: cpu.execute_instruction<0x8E>(0x006102, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04AAD.asm:11 BEQL @UNKNOWN5
    case 0xC04D32: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04AAD.asm:11 BEQL @UNKNOWN5
    case 0xC04D34: cpu.execute_instruction<0x4C>(0x004DC3, 3); return true;
    // src/unknown/C0/C04AAD.asm:12 LDA GAME_STATE+game_state::walking_style
    case 0xC04D37: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/unknown/C0/C04AAD.asm:13 JSL MAP_INPUT_TO_DIRECTION
    case 0xC04D3A: cpu.execute_instruction<0x22>(0xC042D6, 4); return true;
    // src/unknown/C0/C04AAD.asm:14 STA @VIRTUAL04
    case 0xC04D3E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:15 STA @LOCAL01
    case 0xC04D40: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04AAD.asm:16 LDA @VIRTUAL04
    case 0xC04D42: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:17 CMP #.LOWORD(-1)
    case 0xC04D44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C04AAD.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04D44.
    case 0xC04D46: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04AAD.asm:18 BEQL @UNKNOWN6
    case 0xC04D47: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04AAD.asm:18 BEQL @UNKNOWN6
    case 0xC04D49: cpu.execute_instruction<0x4C>(0x004DC7, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04AAD.asm:18 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC04D46.
    case 0xC04D4A: cpu.execute_instruction<0xC7>(0x00004D, 2); return true;
    // src/unknown/C0/C04AAD.asm:19 LDA #24
    case 0xC04D4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C04AAD.asm:19 LDA #24
    // Overlapping static entry reached from 0xC04D4C.
    case 0xC04D4E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04AAD.asm:20 STA @VIRTUAL02
    case 0xC04D4F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04AAD.asm:21 BRA @UNKNOWN4
    case 0xC04D51: cpu.execute_instruction<0x80>(0x00005E, 2); return true;
    // src/unknown/C0/C04AAD.asm:23 LDA @VIRTUAL02
    case 0xC04D53: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04AAD.asm:24 ASL
    case 0xC04D55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:25 TAX
    case 0xC04D56: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:26 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC04D57: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/C0/C04AAD.asm:27 CMP #.LOWORD(-1)
    case 0xC04D5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C04AAD.asm:27 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04D5A.
    case 0xC04D5C: cpu.execute_instruction<0xFF>(0x8A50F0, 4); return true;
    // src/unknown/C0/C04AAD.asm:28 BEQ @UNKNOWN3
    case 0xC04D5D: cpu.execute_instruction<0xF0>(0x000050, 2); return true;
    // src/unknown/C0/C04AAD.asm:29 TXA
    case 0xC04D5F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:30 CLC
    case 0xC04D60: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:31 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC04D61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x002EF4, 3); return true;
    // src/unknown/C0/C04AAD.asm:31 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC04D61.
    case 0xC04D63: cpu.execute_instruction<0x2E>(0x0084A8, 3); return true;
    // src/unknown/C0/C04AAD.asm:32 TAY
    case 0xC04D64: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:33 STY @LOCAL00
    case 0xC04D65: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C04AAD.asm:33 STY @LOCAL00
    // Overlapping static entry reached from 0xC04D63.
    case 0xC04D66: cpu.execute_instruction<0x0E>(0x0010A5, 3); return true;
    // src/unknown/C0/C04AAD.asm:34 LDA @LOCAL01
    case 0xC04D67: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C04AAD.asm:35 STA @VIRTUAL04
    case 0xC04D69: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:36 LDA __BSS_START__,Y
    case 0xC04D6B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C04AAD.asm:37 CMP @VIRTUAL04
    case 0xC04D6E: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:38 BEQ @UNKNOWN3
    case 0xC04D70: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/unknown/C0/C04AAD.asm:39 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC04D72: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/C0/C04AAD.asm:40 LDY #.SIZEOF(char_struct)
    case 0xC04D75: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C04AAD.asm:40 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC04D75.
    case 0xC04D77: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C04AAD.asm:41 JSL MULT168
    case 0xC04D78: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C04AAD.asm:42 CLC
    case 0xC04D7C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:43 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC04D7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C0/C04AAD.asm:43 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC04D7D.
    case 0xC04D7F: cpu.execute_instruction<0x9C>(0x008EAA, 3); return true;
    // src/unknown/C0/C04AAD.asm:44 TAX
    case 0xC04D80: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:45 STX CURRENT_PARTY_MEMBER_TICK
    case 0xC04D81: cpu.execute_instruction<0x8E>(0x00514C, 3); return true;
    // src/unknown/C0/C04AAD.asm:45 STX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC04D7F.
    case 0xC04D82: cpu.execute_instruction<0x4C>(0x00BD51, 3); return true;
    // src/unknown/C0/C04AAD.asm:46 LDA a:char_struct::position_index,X
    case 0xC04D84: cpu.execute_instruction<0xBD>(0x00003C, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C04AAD.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04D87: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C04AAD.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04D89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C04AAD.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04D8A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C04AAD.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04D8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C04AAD.asm:47 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04D8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:48 CLC
    case 0xC04D8E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:49 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC04D8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0054DC, 3); return true;
    // src/unknown/C0/C04AAD.asm:49 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC04D8F.
    case 0xC04D91: cpu.execute_instruction<0x54>(0x00BDAA, 3); return true;
    // src/unknown/C0/C04AAD.asm:50 TAX
    case 0xC04D92: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04AAD.asm:51 LDA a:player_position_buffer_entry::walking_style,X
    case 0xC04D93: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C0/C04AAD.asm:51 LDA a:player_position_buffer_entry::walking_style,X
    // Overlapping static entry reached from 0xC04D91.
    case 0xC04D94: cpu.execute_instruction<0x06>(0x000000, 2); return true;
    // src/unknown/C0/C04AAD.asm:52 CMP #WALKING_STYLE::ROPE
    case 0xC04D96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C04AAD.asm:52 CMP #WALKING_STYLE::ROPE
    // Overlapping static entry reached from 0xC04D96.
    case 0xC04D98: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04AAD.asm:53 BEQ @UNKNOWN3
    case 0xC04D99: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C0/C04AAD.asm:54 CMP #WALKING_STYLE::LADDER
    case 0xC04D9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C04AAD.asm:54 CMP #WALKING_STYLE::LADDER
    // Overlapping static entry reached from 0xC04D9B.
    case 0xC04D9D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04AAD.asm:55 BEQ @UNKNOWN3
    case 0xC04D9E: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C04AAD.asm:56 LDA @LOCAL01
    case 0xC04DA0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C04AAD.asm:57 STA @VIRTUAL04
    case 0xC04DA2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:58 LDY @LOCAL00
    case 0xC04DA4: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C04AAD.asm:59 STA __BSS_START__,Y
    case 0xC04DA6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C04AAD.asm:60 LDA @VIRTUAL02
    case 0xC04DA9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04AAD.asm:61 JSL UNKNOWN_C0A780
    case 0xC04DAB: cpu.execute_instruction<0x22>(0xC0A75F, 4); return true;
    // src/unknown/C0/C04AAD.asm:63 INC @VIRTUAL02
    case 0xC04DAF: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C04AAD.asm:65 LDA @VIRTUAL02
    case 0xC04DB1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04AAD.asm:66 CMP #29
    case 0xC04DB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/unknown/C0/C04AAD.asm:66 CMP #29
    // Overlapping static entry reached from 0xC04DB3.
    case 0xC04DB5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C04AAD.asm:67 BLTEQ @UNKNOWN2
    case 0xC04DB6: cpu.execute_instruction<0x90>(0x00009B, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C04AAD.asm:67 BLTEQ @UNKNOWN2
    case 0xC04DB8: cpu.execute_instruction<0xF0>(0x000099, 2); return true;
    // src/unknown/C0/C04AAD.asm:68 LDA @LOCAL01
    case 0xC04DBA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C04AAD.asm:69 STA @VIRTUAL04
    case 0xC04DBC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:70 STA GAME_STATE+game_state::leader_direction
    case 0xC04DBE: cpu.execute_instruction<0x8D>(0x009B30, 3); return true;
    // src/unknown/C0/C04AAD.asm:71 BRA @UNKNOWN6
    case 0xC04DC1: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C04AAD.asm:73 JSL UNKNOWN_C04A7B
    case 0xC04DC3: cpu.execute_instruction<0x22>(0xC04CF1, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04AAD.asm:75 END_C_FUNCTION
    case 0xC04DC7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C04AAD.asm:75 END_C_FUNCTION
    case 0xC04DC8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04B53.asm (unresolved).
bool execute_unresolved_c0_c04b53_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04B53.asm:3 BEGIN_C_FUNCTION
    case 0xC04DC9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04B53.asm:8 END_STACK_VARS
    case 0xC04DCB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04B53.asm:8 END_STACK_VARS
    case 0xC04DCC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04B53.asm:8 END_STACK_VARS
    case 0xC04DCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04B53.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC04DCD.
    case 0xC04DCF: cpu.execute_instruction<0xFF>(0x34AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04B53.asm:8 END_STACK_VARS
    case 0xC04DD0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:9 LDX GAME_STATE+game_state::walking_style
    case 0xC04DD1: cpu.execute_instruction<0xAE>(0x009B34, 3); return true;
    // src/unknown/C0/C04B53.asm:9 LDX GAME_STATE+game_state::walking_style
    // Overlapping static entry reached from 0xC04DCF.
    case 0xC04DD3: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:10 STX @LOCAL02
    case 0xC04DD4: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C04B53.asm:11 CPX #WALKING_STYLE::STAIRS
    case 0xC04DD6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000D, 2); else cpu.execute_instruction<0xE0>(0x00000D, 3); return true;
    // src/unknown/C0/C04B53.asm:11 CPX #WALKING_STYLE::STAIRS
    // Overlapping static entry reached from 0xC04DD6.
    case 0xC04DD8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04B53.asm:12 BEQ @UNKNOWN0
    case 0xC04DD9: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C04B53.asm:13 LDA GAME_STATE+game_state::leader_direction
    case 0xC04DDB: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C04B53.asm:14 STA @LOCAL01
    case 0xC04DDE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04B53.asm:15 BRA @UNKNOWN1
    case 0xC04DE0: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C04B53.asm:17 LDA AUTO_MOVEMENT_DIRECTION
    case 0xC04DE2: cpu.execute_instruction<0xAD>(0x006150, 3); return true;
    // src/unknown/C0/C04B53.asm:18 STA @LOCAL01
    case 0xC04DE5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04B53.asm:20 LDA #.LOWORD(GAME_STATE) + game_state::unknownB0
    case 0xC04DE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000056, 2); else cpu.execute_instruction<0xA9>(0x009B56, 3); return true;
    // src/unknown/C0/C04B53.asm:20 LDA #.LOWORD(GAME_STATE) + game_state::unknownB0
    // Overlapping static entry reached from 0xC04DE7.
    case 0xC04DE9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:21 STA @VIRTUAL02
    case 0xC04DEA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04B53.asm:22 LDX @VIRTUAL02
    case 0xC04DEC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04B53.asm:23 LDA __BSS_START__,X
    case 0xC04DEE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04B53.asm:24 AND #$00FF
    case 0xC04DF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04B53.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC04DF1.
    case 0xC04DF3: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C04B53.asm:25 CMP #1
    case 0xC04DF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C04B53.asm:25 CMP #1
    // Overlapping static entry reached from 0xC04DF4.
    case 0xC04DF6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04B53.asm:26 BEQ @UNKNOWN4
    case 0xC04DF7: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C04B53.asm:27 CMP #2
    case 0xC04DF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C04B53.asm:27 CMP #2
    // Overlapping static entry reached from 0xC04DF9.
    case 0xC04DFB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04B53.asm:28 BEQL @UNKNOWN6
    case 0xC04DFC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04B53.asm:28 BEQL @UNKNOWN6
    case 0xC04DFE: cpu.execute_instruction<0x4C>(0x004EB1, 3); return true;
    // src/unknown/C0/C04B53.asm:29 CMP #3
    case 0xC04E01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C04B53.asm:29 CMP #3
    // Overlapping static entry reached from 0xC04E01.
    case 0xC04E03: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04B53.asm:30 BEQL @UNKNOWN7
    case 0xC04E04: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04B53.asm:30 BEQL @UNKNOWN7
    case 0xC04E06: cpu.execute_instruction<0x4C>(0x004EB6, 3); return true;
    // src/unknown/C0/C04B53.asm:31 JMP @UNKNOWN8
    case 0xC04E09: cpu.execute_instruction<0x4C>(0x004EB9, 3); return true;
    // src/unknown/C0/C04B53.asm:33 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC04E0C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000026, 2); else cpu.execute_instruction<0xA0>(0x009B26, 3); return true;
    // src/unknown/C0/C04B53.asm:33 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC04E0C.
    case 0xC04E0E: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:34 STY @LOCAL00
    case 0xC04E0F: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C04B53.asm:35 LDA @LOCAL01
    case 0xC04E11: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:36 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC04E13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:36 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC04E14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:37 STA @VIRTUAL04
    case 0xC04E15: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04B53.asm:38 LDX @LOCAL02
    case 0xC04E17: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C04B53.asm:39 TXA
    case 0xC04E19: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC04E1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC04E1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC04E1C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC04E1D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C0/C04B53.asm:40 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC04E1E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:41 CLC
    case 0xC04E1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:42 ADC @VIRTUAL04
    case 0xC04E20: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C04B53.asm:43 STA @LOCAL01
    case 0xC04E22: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04B53.asm:44 CLC
    case 0xC04E24: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:45 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC04E25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00515C, 3); return true;
    // src/unknown/C0/C04B53.asm:45 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC04E25.
    case 0xC04E27: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/unknown/C0/C04B53.asm:46 TAY
    case 0xC04E28: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C04B53.asm:47 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04E29: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C04B53.asm:47 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04E2C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C04B53.asm:47 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04E2E: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C04B53.asm:47 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04E31: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C04B53.asm:48 LDY @LOCAL00
    case 0xC04E33: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C04B53.asm:49 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04E35: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C04B53.asm:49 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04E38: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C04B53.asm:49 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04E3A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C04B53.asm:49 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04E3D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C04B53.asm:50 CLC
    case 0xC04E3F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C04B53.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04E40: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C04B53.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04E42: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C04B53.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04E44: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C04B53.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04E46: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C04B53.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04E48: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C04B53.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04E4A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C04B53.asm:52 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04E4C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C04B53.asm:52 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04E4E: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C04B53.asm:52 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04E51: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C04B53.asm:52 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04E53: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C04B53.asm:53 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC04E56: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002A, 2); else cpu.execute_instruction<0xA0>(0x009B2A, 3); return true;
    // src/unknown/C0/C04B53.asm:53 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC04E56.
    case 0xC04E58: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:54 STY @LOCAL02
    case 0xC04E59: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C04B53.asm:55 LDA @LOCAL01
    case 0xC04E5B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C04B53.asm:56 CLC
    case 0xC04E5D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:57 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC04E5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00531C, 3); return true;
    // src/unknown/C0/C04B53.asm:57 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC04E5E.
    case 0xC04E60: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/unknown/C0/C04B53.asm:58 TAY
    case 0xC04E61: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C04B53.asm:59 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04E62: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C04B53.asm:59 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04E65: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C04B53.asm:59 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04E67: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C04B53.asm:59 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC04E6A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C04B53.asm:60 LDY @LOCAL02
    case 0xC04E6C: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C04B53.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04E6E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C04B53.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04E71: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C04B53.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04E73: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C04B53.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC04E76: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C04B53.asm:62 CLC
    case 0xC04E78: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C0/C04B53.asm:63 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04E79: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C0/C04B53.asm:63 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04E7B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C0/C04B53.asm:63 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04E7D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C0/C04B53.asm:63 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04E7F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C0/C04B53.asm:63 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04E81: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C0/C04B53.asm:63 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC04E83: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C04B53.asm:64 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04E85: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C04B53.asm:64 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04E87: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C04B53.asm:64 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04E8A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C04B53.asm:64 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC04E8C: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C04B53.asm:65 LDX #.LOWORD(GAME_STATE) + game_state::unknownB2
    case 0xC04E8F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000058, 2); else cpu.execute_instruction<0xA2>(0x009B58, 3); return true;
    // src/unknown/C0/C04B53.asm:65 LDX #.LOWORD(GAME_STATE) + game_state::unknownB2
    // Overlapping static entry reached from 0xC04E8F.
    case 0xC04E91: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:66 LDA __BSS_START__,X
    case 0xC04E92: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04B53.asm:67 DEC
    case 0xC04E95: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04B53.asm:68 STA __BSS_START__,X
    case 0xC04E96: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04B53.asm:69 BNE @UNKNOWN5
    case 0xC04E99: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C0/C04B53.asm:70 LDA #0
    case 0xC04E9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C04B53.asm:70 LDA #0
    // Overlapping static entry reached from 0xC04E9B.
    case 0xC04E9D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C04B53.asm:71 LDX @VIRTUAL02
    case 0xC04E9E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04B53.asm:72 STA __BSS_START__,X
    case 0xC04EA0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04B53.asm:73 LDA GAME_STATE + game_state::unknownB4
    case 0xC04EA3: cpu.execute_instruction<0xAD>(0x009B5A, 3); return true;
    // src/unknown/C0/C04B53.asm:74 STA GAME_STATE+game_state::walking_style
    case 0xC04EA6: cpu.execute_instruction<0x8D>(0x009B34, 3); return true;
    // src/unknown/C0/C04B53.asm:76 LDA #1
    case 0xC04EA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04B53.asm:76 LDA #1
    // Overlapping static entry reached from 0xC04EA9.
    case 0xC04EAB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C04B53.asm:77 STA GAME_STATE + game_state::unknown90
    case 0xC04EAC: cpu.execute_instruction<0x8D>(0x009B36, 3); return true;
    // src/unknown/C0/C04B53.asm:78 BRA @UNKNOWN8
    case 0xC04EAF: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C04B53.asm:80 JSR UNKNOWN_C0476D
    case 0xC04EB1: cpu.execute_instruction<0x20>(0x0049F4, 3); return true;
    // src/unknown/C0/C04B53.asm:81 BRA @UNKNOWN8
    case 0xC04EB4: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C04B53.asm:83 JSR UNKNOWN_C04AAD
    case 0xC04EB6: cpu.execute_instruction<0x20>(0x004D23, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04B53.asm:85 END_C_FUNCTION
    case 0xC04EB9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C04B53.asm:85 END_C_FUNCTION
    case 0xC04EBA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04C45.asm (unresolved).
bool execute_unresolved_c0_c04c45_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04C45.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04EBB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04C45.asm:9 END_STACK_VARS
    case 0xC04EBD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04C45.asm:9 END_STACK_VARS
    case 0xC04EBE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04C45.asm:9 END_STACK_VARS
    case 0xC04EBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04C45.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC04EBF.
    case 0xC04EC1: cpu.execute_instruction<0xFF>(0x36A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04C45.asm:9 END_STACK_VARS
    case 0xC04EC2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:10 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    case 0xC04EC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000036, 2); else cpu.execute_instruction<0xA2>(0x009B36, 3); return true;
    // src/unknown/C0/C04C45.asm:10 LDX #.LOWORD(GAME_STATE) + game_state::unknown90
    // Overlapping static entry reached from 0xC04EC3.
    case 0xC04EC5: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:11 LDA __BSS_START__,X
    case 0xC04EC6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:12 STA @LOCAL03
    case 0xC04EC9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:13 LDA #0
    case 0xC04ECB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:13 LDA #0
    // Overlapping static entry reached from 0xC04ECB.
    case 0xC04ECD: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04C45.asm:14 STA __BSS_START__,X
    case 0xC04ECE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:15 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC04ED1: cpu.execute_instruction<0xAD>(0x0060DE, 3); return true;
    // src/unknown/C0/C04C45.asm:16 BEQ @UNKNOWN0
    case 0xC04ED4: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C04C45.asm:17 JSL UNKNOWN_C07C5B
    case 0xC04ED6: cpu.execute_instruction<0x22>(0xC07EAB, 4); return true;
    // src/unknown/C0/C04C45.asm:18 DEC PLAYER_INTANGIBILITY_FRAMES
    case 0xC04EDA: cpu.execute_instruction<0xCE>(0x0060DE, 3); return true;
    // src/unknown/C0/C04C45.asm:20 LDA DEBUG
    case 0xC04EDD: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/unknown/C0/C04C45.asm:21 BEQ @UNKNOWN1
    case 0xC04EE0: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C0/C04C45.asm:22 LDA PAD_STATE
    case 0xC04EE2: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C0/C04C45.asm:23 AND #PAD::X_BUTTON
    case 0xC04EE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/C0/C04C45.asm:23 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC04EE5.
    case 0xC04EE7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04C45.asm:24 BEQ @UNKNOWN1
    case 0xC04EE8: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C0/C04C45.asm:25 LDA FRAME_COUNTER
    case 0xC04EEA: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/unknown/C0/C04C45.asm:26 AND #$00FF
    case 0xC04EED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04C45.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC04EED.
    case 0xC04EEF: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C04C45.asm:27 AND #$000F
    case 0xC04EF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C04C45.asm:27 AND #$000F
    // Overlapping static entry reached from 0xC04EF0.
    case 0xC04EF2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04C45.asm:28 BNEL @UNKNOWN10
    case 0xC04EF3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04C45.asm:28 BNEL @UNKNOWN10
    case 0xC04EF5: cpu.execute_instruction<0x4C>(0x004FEC, 3); return true;
    // src/unknown/C0/C04C45.asm:30 LDA GAME_STATE+game_state::current_party_members
    case 0xC04EF8: cpu.execute_instruction<0xAD>(0x009B3A, 3); return true;
    // src/unknown/C0/C04C45.asm:31 ASL
    case 0xC04EFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:32 TAX
    case 0xC04EFC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:33 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC04EFD: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/C0/C04C45.asm:34 ASL
    case 0xC04F00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:35 TAX
    case 0xC04F01: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:36 LDA CHOSEN_FOUR_PTRS,X
    case 0xC04F02: cpu.execute_instruction<0xBD>(0x00514E, 3); return true;
    // src/unknown/C0/C04C45.asm:37 TAX
    case 0xC04F05: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:38 LDA GAME_STATE + game_state::unknown88
    case 0xC04F06: cpu.execute_instruction<0xAD>(0x009B2E, 3); return true;
    // src/unknown/C0/C04C45.asm:39 STA a:char_struct::position_index,X
    case 0xC04F09: cpu.execute_instruction<0x9D>(0x00003C, 3); return true;
    // src/unknown/C0/C04C45.asm:40 LDA GAME_STATE + game_state::unknownB0
    case 0xC04F0C: cpu.execute_instruction<0xAD>(0x009B56, 3); return true;
    // src/unknown/C0/C04C45.asm:41 BEQ @UNKNOWN2
    case 0xC04F0F: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C04C45.asm:42 JSR UNKNOWN_C04B53
    case 0xC04F11: cpu.execute_instruction<0x20>(0x004DC9, 3); return true;
    // src/unknown/C0/C04C45.asm:43 BRA @UNKNOWN6
    case 0xC04F14: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C0/C04C45.asm:45 LDA GAME_STATE+game_state::walking_style
    case 0xC04F16: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/unknown/C0/C04C45.asm:46 CMP #WALKING_STYLE::ESCALATOR
    case 0xC04F19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C04C45.asm:46 CMP #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC04F19.
    case 0xC04F1B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04C45.asm:47 BEQ @UNKNOWN3
    case 0xC04F1C: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C04C45.asm:48 CMP #WALKING_STYLE::BICYCLE
    case 0xC04F1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C04C45.asm:48 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC04F1E.
    case 0xC04F20: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04C45.asm:49 BEQ @UNKNOWN4
    case 0xC04F21: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C04C45.asm:50 BRA @UNKNOWN5
    case 0xC04F23: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C0/C04C45.asm:52 JSR UNKNOWN_C047CF
    case 0xC04F25: cpu.execute_instruction<0x20>(0x004A56, 3); return true;
    // src/unknown/C0/C04C45.asm:53 BRA @UNKNOWN6
    case 0xC04F28: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C04C45.asm:55 LDA @LOCAL03
    case 0xC04F2A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:56 JSR UNKNOWN_C048D3
    case 0xC04F2C: cpu.execute_instruction<0x20>(0x004B65, 3); return true;
    // src/unknown/C0/C04C45.asm:57 BRA @UNKNOWN6
    case 0xC04F2F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C04C45.asm:59 JSR UNKNOWN_C0449B
    case 0xC04F31: cpu.execute_instruction<0x20>(0x004722, 3); return true;
    // src/unknown/C0/C04C45.asm:61 LDA #.LOWORD(GAME_STATE) + game_state::unknown88
    case 0xC04F34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x009B2E, 3); return true;
    // src/unknown/C0/C04C45.asm:61 LDA #.LOWORD(GAME_STATE) + game_state::unknown88
    // Overlapping static entry reached from 0xC04F34.
    case 0xC04F36: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:62 STA @LOCAL03
    case 0xC04F37: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:63 LDA (@LOCAL03)
    case 0xC04F39: cpu.execute_instruction<0xB2>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:64 STA @LOCAL02
    case 0xC04F3B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C04C45.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04F3D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C04C45.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04F3F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C04C45.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04F40: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C04C45.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04F42: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C04C45.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC04F43: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:66 CLC
    case 0xC04F44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:67 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC04F45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0054DC, 3); return true;
    // src/unknown/C0/C04C45.asm:67 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC04F45.
    case 0xC04F47: cpu.execute_instruction<0x54>(0x001085, 3); return true;
    // src/unknown/C0/C04C45.asm:68 STA @LOCAL01
    case 0xC04F48: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04C45.asm:69 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    case 0xC04F4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x009B28, 3); return true;
    // src/unknown/C0/C04C45.asm:69 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    // Overlapping static entry reached from 0xC04F4A.
    case 0xC04F4C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:70 STA @VIRTUAL04
    case 0xC04F4D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04C45.asm:71 LDA #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    case 0xC04F4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x009B2C, 3); return true;
    // src/unknown/C0/C04C45.asm:71 LDA #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    // Overlapping static entry reached from 0xC04F4F.
    case 0xC04F51: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:72 STA @VIRTUAL02
    case 0xC04F52: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04C45.asm:73 LDY GAME_STATE+game_state::current_party_members
    case 0xC04F54: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C0/C04C45.asm:74 LDX @VIRTUAL02
    case 0xC04F57: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04C45.asm:75 LDA __BSS_START__,X
    case 0xC04F59: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:76 TAX
    case 0xC04F5C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:77 STX @LOCAL00
    case 0xC04F5D: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C04C45.asm:78 LDX @VIRTUAL04
    case 0xC04F5F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C04C45.asm:79 LDA __BSS_START__,X
    case 0xC04F61: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:80 LDX @LOCAL00
    case 0xC04F64: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C04C45.asm:81 JSL UNKNOWN_C05F82
    case 0xC04F66: cpu.execute_instruction<0x22>(0xC061B0, 4); return true;
    // src/unknown/C0/C04C45.asm:82 STA GAME_STATE+game_state::trodden_tile_type
    case 0xC04F6A: cpu.execute_instruction<0x8D>(0x009B32, 3); return true;
    // src/unknown/C0/C04C45.asm:83 LDA GAME_STATE + game_state::unknown90
    case 0xC04F6D: cpu.execute_instruction<0xAD>(0x009B36, 3); return true;
    // src/unknown/C0/C04C45.asm:84 BEQ @UNKNOWN7
    case 0xC04F70: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/C0/C04C45.asm:85 LDX @VIRTUAL04
    case 0xC04F72: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C04C45.asm:86 LDA __BSS_START__,X
    case 0xC04F74: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:87 STA (@LOCAL01) ;player_position_buffer_entry::x_coord
    case 0xC04F77: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/unknown/C0/C04C45.asm:88 LDX @VIRTUAL02
    case 0xC04F79: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04C45.asm:89 LDA __BSS_START__,X
    case 0xC04F7B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:90 LDY #player_position_buffer_entry::y_coord
    case 0xC04F7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C04C45.asm:90 LDY #player_position_buffer_entry::y_coord
    // Overlapping static entry reached from 0xC04F7E.
    case 0xC04F80: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C04C45.asm:91 STA (@LOCAL01),Y
    case 0xC04F81: cpu.execute_instruction<0x91>(0x000010, 2); return true;
    // src/unknown/C0/C04C45.asm:92 LDA @LOCAL02
    case 0xC04F83: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C04C45.asm:93 INC
    case 0xC04F85: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:94 AND #$00FF
    case 0xC04F86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04C45.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC04F86.
    case 0xC04F88: cpu.execute_instruction<0x00>(0x000092, 2); return true;
    // src/unknown/C0/C04C45.asm:95 STA (@LOCAL03)
    case 0xC04F89: cpu.execute_instruction<0x92>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:96 LDX @VIRTUAL02
    case 0xC04F8B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04C45.asm:97 LDA __BSS_START__,X
    case 0xC04F8D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:98 TAX
    case 0xC04F90: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:99 STX @LOCAL00
    case 0xC04F91: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C04C45.asm:100 LDX @VIRTUAL04
    case 0xC04F93: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C04C45.asm:101 LDA __BSS_START__,X
    case 0xC04F95: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:102 LDX @LOCAL00
    case 0xC04F98: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C04C45.asm:103 JSL CENTER_SCREEN
    case 0xC04F9A: cpu.execute_instruction<0x22>(0xC04295, 4); return true;
    // src/unknown/C0/C04C45.asm:104 LDA #1
    case 0xC04F9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04C45.asm:104 LDA #1
    // Overlapping static entry reached from 0xC04F9E.
    case 0xC04FA0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C04C45.asm:105 STA UNREAD_7E4DD4
    case 0xC04FA1: cpu.execute_instruction<0x8D>(0x00515A, 3); return true;
    // src/unknown/C0/C04C45.asm:106 BRA @UNKNOWN8
    case 0xC04FA4: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C04C45.asm:108 STZ UNREAD_7E4DD4
    case 0xC04FA6: cpu.execute_instruction<0x9C>(0x00515A, 3); return true;
    // src/unknown/C0/C04C45.asm:110 LDX #.LOWORD(GAME_STATE)+game_state::trodden_tile_type
    case 0xC04FA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000032, 2); else cpu.execute_instruction<0xA2>(0x009B32, 3); return true;
    // src/unknown/C0/C04C45.asm:110 LDX #.LOWORD(GAME_STATE)+game_state::trodden_tile_type
    // Overlapping static entry reached from 0xC04FA9.
    case 0xC04FAB: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04C45.asm:111 LDA __BSS_START__,X
    case 0xC04FAC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:112 LDY #player_position_buffer_entry::tile_flags
    case 0xC04FAF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C0/C04C45.asm:112 LDY #player_position_buffer_entry::tile_flags
    // Overlapping static entry reached from 0xC04FAF.
    case 0xC04FB1: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C04C45.asm:113 STA (@LOCAL01),Y
    case 0xC04FB2: cpu.execute_instruction<0x91>(0x000010, 2); return true;
    // src/unknown/C0/C04C45.asm:114 LDA GAME_STATE+game_state::walking_style
    case 0xC04FB4: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/unknown/C0/C04C45.asm:115 LDY #player_position_buffer_entry::walking_style
    case 0xC04FB7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C0/C04C45.asm:115 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC04FB7.
    case 0xC04FB9: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C04C45.asm:116 STA (@LOCAL01),Y
    case 0xC04FBA: cpu.execute_instruction<0x91>(0x000010, 2); return true;
    // src/unknown/C0/C04C45.asm:117 LDA GAME_STATE+game_state::leader_direction
    case 0xC04FBC: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C04C45.asm:118 LDY #player_position_buffer_entry::direction
    case 0xC04FBF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C0/C04C45.asm:118 LDY #player_position_buffer_entry::direction
    // Overlapping static entry reached from 0xC04FBF.
    case 0xC04FC1: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C04C45.asm:119 STA (@LOCAL01),Y
    case 0xC04FC2: cpu.execute_instruction<0x91>(0x000010, 2); return true;
    // src/unknown/C0/C04C45.asm:120 LDY #.LOWORD(FOOTSTEP_SOUND_ID_OVERRIDE)
    case 0xC04FC4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009A, 2); else cpu.execute_instruction<0xA0>(0x002C9A, 3); return true;
    // src/unknown/C0/C04C45.asm:120 LDY #.LOWORD(FOOTSTEP_SOUND_ID_OVERRIDE)
    // Overlapping static entry reached from 0xC04FC4.
    case 0xC04FC6: cpu.execute_instruction<0x2C>(0x0000A9, 3); return true;
    // src/unknown/C0/C04C45.asm:121 LDA #0
    case 0xC04FC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:121 LDA #0
    // Overlapping static entry reached from 0xC04FC7.
    case 0xC04FC9: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C04C45.asm:122 STA __BSS_START__,Y
    case 0xC04FCA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:123 LDA __BSS_START__,X
    case 0xC04FCD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:124 STA @LOCAL03
    case 0xC04FD0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:125 AND #$0008
    case 0xC04FD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/unknown/C0/C04C45.asm:125 AND #$0008
    // Overlapping static entry reached from 0xC04FD2.
    case 0xC04FD4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04C45.asm:126 BEQ @UNKNOWN10
    case 0xC04FD5: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C04C45.asm:127 LDA @LOCAL03
    case 0xC04FD7: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C04C45.asm:128 AND #$0004
    case 0xC04FD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/unknown/C0/C04C45.asm:128 AND #$0004
    // Overlapping static entry reached from 0xC04FD9.
    case 0xC04FDB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04C45.asm:129 BEQ @UNKNOWN9
    case 0xC04FDC: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C04C45.asm:130 LDA #16
    case 0xC04FDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C0/C04C45.asm:130 LDA #16
    // Overlapping static entry reached from 0xC04FDE.
    case 0xC04FE0: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C04C45.asm:131 STA __BSS_START__,Y
    case 0xC04FE1: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C04C45.asm:132 BRA @UNKNOWN10
    case 0xC04FE4: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C04C45.asm:134 LDA #18
    case 0xC04FE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/C0/C04C45.asm:134 LDA #18
    // Overlapping static entry reached from 0xC04FE6.
    case 0xC04FE8: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C04C45.asm:135 STA __BSS_START__,Y
    case 0xC04FE9: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04C45.asm:137 END_C_FUNCTION
    case 0xC04FEC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C04C45.asm:137 END_C_FUNCTION
    case 0xC04FED: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04D78.asm (unresolved).
bool execute_unresolved_c0_c04d78_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04D78.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04FEE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04D78.asm:13 END_STACK_VARS
    case 0xC04FF0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04D78.asm:13 END_STACK_VARS
    case 0xC04FF1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04D78.asm:13 END_STACK_VARS
    case 0xC04FF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04D78.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC04FF2.
    case 0xC04FF4: cpu.execute_instruction<0xFF>(0x56AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04D78.asm:13 END_STACK_VARS
    case 0xC04FF5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:14 LDA GAME_STATE + game_state::unknownB0
    case 0xC04FF6: cpu.execute_instruction<0xAD>(0x009B56, 3); return true;
    // src/unknown/C0/C04D78.asm:14 LDA GAME_STATE + game_state::unknownB0
    // Overlapping static entry reached from 0xC04FF4.
    case 0xC04FF8: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:15 CMP #3
    case 0xC04FF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C04D78.asm:15 CMP #3
    // Overlapping static entry reached from 0xC04FF9.
    case 0xC04FFB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04D78.asm:16 BEQL @UNKNOWN14
    case 0xC04FFC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04D78.asm:16 BEQL @UNKNOWN14
    case 0xC04FFE: cpu.execute_instruction<0x4C>(0x005164, 3); return true;
    // src/unknown/C0/C04D78.asm:17 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC05001: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04D78.asm:18 BNEL @UNKNOWN14
    case 0xC05004: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04D78.asm:18 BNEL @UNKNOWN14
    case 0xC05006: cpu.execute_instruction<0x4C>(0x005164, 3); return true;
    // src/unknown/C0/C04D78.asm:19 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC05009: cpu.execute_instruction<0xAD>(0x005140, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04D78.asm:20 BNEL @UNKNOWN14
    case 0xC0500C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04D78.asm:20 BNEL @UNKNOWN14
    case 0xC0500E: cpu.execute_instruction<0x4C>(0x005164, 3); return true;
    // src/unknown/C0/C04D78.asm:21 LDA BATTLE_MODE
    case 0xC05011: cpu.execute_instruction<0xAD>(0x005148, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04D78.asm:22 BNEL @UNKNOWN14
    case 0xC05014: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04D78.asm:22 BNEL @UNKNOWN14
    case 0xC05016: cpu.execute_instruction<0x4C>(0x005164, 3); return true;
    // src/unknown/C0/C04D78.asm:23 LDA CURRENT_ENTITY_SLOT
    case 0xC05019: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C04D78.asm:24 STA @VIRTUAL04
    case 0xC0501C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04D78.asm:25 STA @LOCAL07
    case 0xC0501E: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C04D78.asm:26 LDA @VIRTUAL04
    case 0xC05020: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C04D78.asm:27 ASL
    case 0xC05022: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:28 TAX
    case 0xC05023: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:29 STX @LOCAL06
    case 0xC05024: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C04D78.asm:30 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC05026: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C0/C04D78.asm:31 STA @LOCAL05
    case 0xC05029: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C04D78.asm:32 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC0502B: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/C0/C04D78.asm:33 ASL
    case 0xC0502E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:34 TAX
    case 0xC0502F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:35 LDY CHOSEN_FOUR_PTRS,X
    case 0xC05030: cpu.execute_instruction<0xBC>(0x00514E, 3); return true;
    // src/unknown/C0/C04D78.asm:36 STY CURRENT_PARTY_MEMBER_TICK
    case 0xC05033: cpu.execute_instruction<0x8C>(0x00514C, 3); return true;
    // src/unknown/C0/C04D78.asm:37 LDA a:char_struct::position_index,Y
    case 0xC05036: cpu.execute_instruction<0xB9>(0x00003C, 3); return true;
    // src/unknown/C0/C04D78.asm:38 STA @LOCAL04
    case 0xC05039: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C04D78.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0503B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C04D78.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0503D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C04D78.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC0503E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C04D78.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC05040: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C04D78.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC05041: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:40 CLC
    case 0xC05042: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:41 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC05043: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0054DC, 3); return true;
    // src/unknown/C0/C04D78.asm:41 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC05043.
    case 0xC05045: cpu.execute_instruction<0x54>(0x001485, 3); return true;
    // src/unknown/C0/C04D78.asm:42 STA @LOCAL03
    case 0xC05046: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:43 LDY #player_position_buffer_entry::direction
    case 0xC05048: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C0/C04D78.asm:43 LDY #player_position_buffer_entry::direction
    // Overlapping static entry reached from 0xC05048.
    case 0xC0504A: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C0/C04D78.asm:44 LDA (@LOCAL03),Y
    case 0xC0504B: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:45 LDX @LOCAL06
    case 0xC0504D: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C0/C04D78.asm:46 STA ENTITY_DIRECTIONS,X
    case 0xC0504F: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C04D78.asm:47 LDY #player_position_buffer_entry::tile_flags
    case 0xC05052: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C0/C04D78.asm:47 LDY #player_position_buffer_entry::tile_flags
    // Overlapping static entry reached from 0xC05052.
    case 0xC05054: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C0/C04D78.asm:48 LDA (@LOCAL03),Y
    case 0xC05055: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:49 STA ENTITY_SURFACE_FLAGS,X
    case 0xC05057: cpu.execute_instruction<0x9D>(0x002FA8, 3); return true;
    // src/unknown/C0/C04D78.asm:50 LDA @LOCAL03
    case 0xC0505A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:51 CLC
    case 0xC0505C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:52 ADC #player_position_buffer_entry::walking_style
    case 0xC0505D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C0/C04D78.asm:52 ADC #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC0505D.
    case 0xC0505F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:53 STA @VIRTUAL02
    case 0xC05060: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:54 LDY CURRENT_ENTITY_SLOT
    case 0xC05062: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C0/C04D78.asm:55 LDX @VIRTUAL02
    case 0xC05065: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:56 LDA __BSS_START__,X
    case 0xC05067: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04D78.asm:57 TAX
    case 0xC0506A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:58 LDA @LOCAL05
    case 0xC0506B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C04D78.asm:59 JSL UNKNOWN_C07A56
    case 0xC0506D: cpu.execute_instruction<0x22>(0xC07CA6, 4); return true;
    // src/unknown/C0/C04D78.asm:60 LDA GAME_STATE + game_state::unknown90
    case 0xC05071: cpu.execute_instruction<0xAD>(0x009B36, 3); return true;
    // src/unknown/C0/C04D78.asm:61 BNE @UNKNOWN4
    case 0xC05074: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C04D78.asm:62 LDX @VIRTUAL02
    case 0xC05076: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:63 LDA __BSS_START__,X
    case 0xC05078: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04D78.asm:64 CMP #12
    case 0xC0507B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C04D78.asm:64 CMP #12
    // Overlapping static entry reached from 0xC0507B.
    case 0xC0507D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04D78.asm:65 BNEL @UNKNOWN14
    case 0xC0507E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04D78.asm:65 BNEL @UNKNOWN14
    case 0xC05080: cpu.execute_instruction<0x4C>(0x005164, 3); return true;
    // src/unknown/C0/C04D78.asm:67 LDA @LOCAL07
    case 0xC05083: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C04D78.asm:68 STA @VIRTUAL04
    case 0xC05085: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04D78.asm:69 ASL
    case 0xC05087: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:70 TAX
    case 0xC05088: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:71 LDA (@LOCAL03) ;player_position_buffer_entry::x_coord
    case 0xC05089: cpu.execute_instruction<0xB2>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:72 STA ENTITY_ABS_X_TABLE,X
    case 0xC0508B: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C04D78.asm:73 LDY #player_position_buffer_entry::y_coord
    case 0xC0508E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C04D78.asm:73 LDY #player_position_buffer_entry::y_coord
    // Overlapping static entry reached from 0xC0508E.
    case 0xC05090: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C0/C04D78.asm:74 LDA (@LOCAL03),Y
    case 0xC05091: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:75 STA ENTITY_ABS_Y_TABLE,X
    case 0xC05093: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C04D78.asm:76 LDX #0
    case 0xC05096: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C04D78.asm:76 LDX #0
    // Overlapping static entry reached from 0xC05096.
    case 0xC05098: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C04D78.asm:77 STX @LOCAL07
    case 0xC05099: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C04D78.asm:78 LDA GAME_STATE + game_state::unknown96
    case 0xC0509B: cpu.execute_instruction<0xAD>(0x009B3C, 3); return true;
    // src/unknown/C0/C04D78.asm:79 AND #$00FF
    case 0xC0509E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04D78.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC0509E.
    case 0xC050A0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:80 STA @VIRTUAL02
    case 0xC050A1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:81 LDA @LOCAL05
    case 0xC050A3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C04D78.asm:82 INC
    case 0xC050A5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:83 CMP @VIRTUAL02
    case 0xC050A6: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:84 BEQ @UNKNOWN11
    case 0xC050A8: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/unknown/C0/C04D78.asm:85 LDY #player_position_buffer_entry::walking_style
    case 0xC050AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C0/C04D78.asm:85 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC050AA.
    case 0xC050AC: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C0/C04D78.asm:86 LDA (@LOCAL03),Y
    case 0xC050AD: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:87 AND #$00FF
    case 0xC050AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04D78.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC050AF.
    case 0xC050B1: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C04D78.asm:88 CMP #WALKING_STYLE::LADDER
    case 0xC050B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C04D78.asm:88 CMP #WALKING_STYLE::LADDER
    // Overlapping static entry reached from 0xC050B2.
    case 0xC050B4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04D78.asm:89 BEQ @UNKNOWN5
    case 0xC050B5: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C04D78.asm:90 CMP #WALKING_STYLE::ROPE
    case 0xC050B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C04D78.asm:90 CMP #WALKING_STYLE::ROPE
    // Overlapping static entry reached from 0xC050B7.
    case 0xC050B9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04D78.asm:91 BEQ @UNKNOWN5
    case 0xC050BA: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C04D78.asm:92 CMP #WALKING_STYLE::ESCALATOR
    case 0xC050BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C04D78.asm:92 CMP #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC050BC.
    case 0xC050BE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04D78.asm:93 BEQ @UNKNOWN6
    case 0xC050BF: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C0/C04D78.asm:94 CMP #WALKING_STYLE::STAIRS
    case 0xC050C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/unknown/C0/C04D78.asm:94 CMP #WALKING_STYLE::STAIRS
    // Overlapping static entry reached from 0xC050C1.
    case 0xC050C3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04D78.asm:95 BEQ @UNKNOWN8
    case 0xC050C4: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C0/C04D78.asm:96 BRA @UNKNOWN9
    case 0xC050C6: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C0/C04D78.asm:98 LDA #30
    case 0xC050C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/unknown/C0/C04D78.asm:98 LDA #30
    // Overlapping static entry reached from 0xC050C8.
    case 0xC050CA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:99 STA @LOCAL02
    case 0xC050CB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04D78.asm:100 BRA @UNKNOWN11
    case 0xC050CD: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C0/C04D78.asm:102 LDA GAME_STATE+game_state::walking_style
    case 0xC050CF: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/unknown/C0/C04D78.asm:103 BNE @UNKNOWN7
    case 0xC050D2: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C04D78.asm:104 LDX #1
    case 0xC050D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C04D78.asm:104 LDX #1
    // Overlapping static entry reached from 0xC050D4.
    case 0xC050D6: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C04D78.asm:105 STX @LOCAL07
    case 0xC050D7: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C04D78.asm:106 BRA @UNKNOWN11
    case 0xC050D9: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C0/C04D78.asm:108 LDA #30
    case 0xC050DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/unknown/C0/C04D78.asm:108 LDA #30
    // Overlapping static entry reached from 0xC050DB.
    case 0xC050DD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:109 STA @LOCAL02
    case 0xC050DE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04D78.asm:110 BRA @UNKNOWN11
    case 0xC050E0: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C04D78.asm:112 LDA #24
    case 0xC050E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C04D78.asm:112 LDA #24
    // Overlapping static entry reached from 0xC050E2.
    case 0xC050E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:113 STA @LOCAL02
    case 0xC050E5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04D78.asm:114 BRA @UNKNOWN11
    case 0xC050E7: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:116 LDA GAME_STATE + game_state::unknown92
    case 0xC050E9: cpu.execute_instruction<0xAD>(0x009B38, 3); return true;
    // src/unknown/C0/C04D78.asm:117 CMP #3
    case 0xC050EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C04D78.asm:117 CMP #3
    // Overlapping static entry reached from 0xC050EC.
    case 0xC050EE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04D78.asm:118 BNE @UNKNOWN10
    case 0xC050EF: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C04D78.asm:119 LDA #8
    case 0xC050F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C04D78.asm:119 LDA #8
    // Overlapping static entry reached from 0xC050F1.
    case 0xC050F3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:120 STA @LOCAL02
    case 0xC050F4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04D78.asm:121 BRA @UNKNOWN11
    case 0xC050F6: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C04D78.asm:123 LDA #12
    case 0xC050F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C0/C04D78.asm:123 LDA #12
    // Overlapping static entry reached from 0xC050F8.
    case 0xC050FA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:124 STA @LOCAL02
    case 0xC050FB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04D78.asm:126 LDA CURRENT_ENTITY_SLOT
    case 0xC050FD: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C04D78.asm:127 ASL
    case 0xC05100: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:128 TAX
    case 0xC05101: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:129 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC05102: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/C0/C04D78.asm:130 ASL
    case 0xC05105: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:131 TAX
    case 0xC05106: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:132 LDA f:CHARACTER_SIZES,X
    case 0xC05107: cpu.execute_instruction<0xBF>(0xC3E084, 4); return true;
    // src/unknown/C0/C04D78.asm:133 CLC
    case 0xC0510B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:134 ADC @LOCAL02
    case 0xC0510C: cpu.execute_instruction<0x65>(0x000012, 2); return true;
    // src/unknown/C0/C04D78.asm:135 STA @LOCAL01
    case 0xC0510E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04D78.asm:136 LDY #player_position_buffer_entry::walking_style
    case 0xC05110: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C0/C04D78.asm:136 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC05110.
    case 0xC05112: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C0/C04D78.asm:137 LDA (@LOCAL03),Y
    case 0xC05113: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:138 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC05115: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/C0/C04D78.asm:139 STA a:char_struct::unknown65,X
    case 0xC05118: cpu.execute_instruction<0x9D>(0x000040, 3); return true;
    // src/unknown/C0/C04D78.asm:140 LDA GAME_STATE + game_state::unknown96
    case 0xC0511B: cpu.execute_instruction<0xAD>(0x009B3C, 3); return true;
    // src/unknown/C0/C04D78.asm:141 AND #$00FF
    case 0xC0511E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04D78.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC0511E.
    case 0xC05120: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:142 STA @VIRTUAL02
    case 0xC05121: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:143 LDA @LOCAL05
    case 0xC05123: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C04D78.asm:144 INC
    case 0xC05125: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:145 CMP @VIRTUAL02
    case 0xC05126: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C04D78.asm:146 BEQ @UNKNOWN12
    case 0xC05128: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C0/C04D78.asm:147 LDX @LOCAL07
    case 0xC0512A: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C04D78.asm:148 BNE @UNKNOWN12
    case 0xC0512C: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/unknown/C0/C04D78.asm:149 LDA #2
    case 0xC0512E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C04D78.asm:149 LDA #2
    // Overlapping static entry reached from 0xC0512E.
    case 0xC05130: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04D78.asm:150 STA @LOCAL00
    case 0xC05131: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C04D78.asm:151 LDY @LOCAL04
    case 0xC05133: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C04D78.asm:152 LDA @LOCAL01
    case 0xC05135: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C04D78.asm:153 TAX
    case 0xC05137: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:154 LDA @LOCAL05
    case 0xC05138: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C04D78.asm:155 JSL UNKNOWN_C03EC3
    case 0xC0513A: cpu.execute_instruction<0x22>(0xC04140, 4); return true;
    // src/unknown/C0/C04D78.asm:157 STA @LOCAL01
    case 0xC0513E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04D78.asm:161 BRA @UNKNOWN13
    case 0xC05140: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C0/C04D78.asm:163 LDA @LOCAL04
    case 0xC05142: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C04D78.asm:164 INC
    case 0xC05144: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:166 STA @LOCAL01
    case 0xC05145: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04D78.asm:170 LDA CURRENT_ENTITY_SLOT
    case 0xC05147: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C04D78.asm:171 ASL
    case 0xC0514A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:172 CLC
    case 0xC0514B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:173 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC0514C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/unknown/C0/C04D78.asm:173 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC0514C.
    case 0xC0514E: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/C0/C04D78.asm:174 TAX
    case 0xC0514F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04D78.asm:175 LDA __BSS_START__,X
    case 0xC05150: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04D78.asm:175 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0514E.
    case 0xC05152: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C04D78.asm:176 AND #$FFFF ^ (SPRITE_TABLE_10_FLAGS::UNKNOWN12)
    case 0xC05153: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00EFFF, 3); return true;
    // src/unknown/C0/C04D78.asm:176 AND #$FFFF ^ (SPRITE_TABLE_10_FLAGS::UNKNOWN12)
    // Overlapping static entry reached from 0xC05153.
    case 0xC05155: cpu.execute_instruction<0xEF>(0x00009D, 4); return true;
    // src/unknown/C0/C04D78.asm:177 STA __BSS_START__,X
    case 0xC05156: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04D78.asm:180 LDA @LOCAL01
    case 0xC05159: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C04D78.asm:184 AND #$00FF
    case 0xC0515B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04D78.asm:184 AND #$00FF
    // Overlapping static entry reached from 0xC0515B.
    case 0xC0515D: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/C0/C04D78.asm:185 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC0515E: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/C0/C04D78.asm:186 STA a:char_struct::position_index,X
    case 0xC05161: cpu.execute_instruction<0x9D>(0x00003C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04D78.asm:188 END_C_FUNCTION
    case 0xC05164: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C04D78.asm:188 END_C_FUNCTION
    case 0xC05165: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04F47.asm (unresolved).
bool execute_unresolved_c0_c04f47_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C04F47.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC05166: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C04F47.asm:4 LDA BACKGROUND_COLOUR_BACKUP
    case 0xC05168: cpu.execute_instruction<0xAD>(0x0060F8, 3); return true;
    // src/unknown/C0/C04F47.asm:5 STA PALETTES
    case 0xC0516B: cpu.execute_instruction<0x8D>(0x000200, 3); return true;
    // src/unknown/C0/C04F47.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC0516E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C04F47.asm:7 LDA #$0017
    case 0xC05170: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/unknown/C0/C04F47.asm:8 STA TM_MIRROR
    case 0xC05172: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C0/C04F47.asm:8 STA TM_MIRROR
    // Overlapping static entry reached from 0xC05170.
    case 0xC05173: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04F47.asm:8 STA TM_MIRROR
    // Overlapping static entry reached from 0xC05173.
    case 0xC05174: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C0/C04F47.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xC05175: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C04F47.asm:10 LDA #$0008
    case 0xC05177: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C04F47.asm:10 LDA #$0008
    // Overlapping static entry reached from 0xC05177.
    case 0xC05179: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C04F47.asm:11 JSL UNKNOWN_C0856B
    case 0xC0517A: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C0/C04F47.asm:12 RTL
    case 0xC0517E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04F60.asm (unresolved).
bool execute_unresolved_c0_c04f60_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04F60.asm:3 BEGIN_C_FUNCTION
    case 0xC0517F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04F60.asm:7 END_STACK_VARS
    case 0xC05181: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04F60.asm:7 END_STACK_VARS
    case 0xC05182: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04F60.asm:7 END_STACK_VARS
    case 0xC05183: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04F60.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC05183.
    case 0xC05185: cpu.execute_instruction<0xFF>(0xE6AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04F60.asm:7 END_STACK_VARS
    case 0xC05186: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C04F60.asm:8 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC05187: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/unknown/C0/C04F60.asm:8 LDA BATTLE_SWIRL_COUNTDOWN
    // Overlapping static entry reached from 0xC05185.
    case 0xC05189: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C04F60.asm:9 BNE @UNKNOWN0
    case 0xC0518A: cpu.execute_instruction<0xD0>(0x000030, 2); return true;
    // src/unknown/C0/C04F60.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0518C: cpu.execute_instruction<0xAD>(0x005140, 3); return true;
    // src/unknown/C0/C04F60.asm:11 BNE @UNKNOWN0
    case 0xC0518F: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/unknown/C0/C04F60.asm:12 LDA PALETTES
    case 0xC05191: cpu.execute_instruction<0xAD>(0x000200, 3); return true;
    // src/unknown/C0/C04F60.asm:13 STA BACKGROUND_COLOUR_BACKUP
    case 0xC05194: cpu.execute_instruction<0x8D>(0x0060F8, 3); return true;
    // src/unknown/C0/C04F60.asm:14 LDA #RGBVAL 31, 0, 0
    case 0xC05197: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/unknown/C0/C04F60.asm:14 LDA #RGBVAL 31, 0, 0
    // Overlapping static entry reached from 0xC05197.
    case 0xC05199: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C04F60.asm:15 STA PALETTES
    case 0xC0519A: cpu.execute_instruction<0x8D>(0x000200, 3); return true;
    // src/unknown/C0/C04F60.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC0519D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C04F60.asm:17 STZ TM_MIRROR
    case 0xC0519F: cpu.execute_instruction<0x9C>(0x00001A, 3); return true;
    // src/unknown/C0/C04F60.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC051A2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C04F60.asm:19 LDA #8
    case 0xC051A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C04F60.asm:19 LDA #8
    // Overlapping static entry reached from 0xC051A4.
    case 0xC051A6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C04F60.asm:20 JSL UNKNOWN_C0856B
    case 0xC051A7: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    case 0xC051AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000066, 2); else cpu.execute_instruction<0xA9>(0x005166, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    // Overlapping static entry reached from 0xC051AB.
    case 0xC051AD: cpu.execute_instruction<0x51>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    case 0xC051AE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    // Overlapping static entry reached from 0xC051AD.
    case 0xC051AF: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    case 0xC051B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    // Overlapping static entry reached from 0xC051B0.
    case 0xC051B2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C04F60.asm:21 LOADPTR UNKNOWN_C04F47, $0E
    case 0xC051B3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C04F60.asm:22 LDA #1
    case 0xC051B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04F60.asm:22 LDA #1
    // Overlapping static entry reached from 0xC051B5.
    case 0xC051B7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C04F60.asm:23 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC051B8: cpu.execute_instruction<0x22>(0xC0DBAE, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04F60.asm:25 END_C_FUNCTION
    case 0xC051BC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C04F60.asm:25 END_C_FUNCTION
    case 0xC051BD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04F9F.asm (unresolved).
bool execute_unresolved_c0_c04f9f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04F9F.asm:3 BEGIN_C_FUNCTION
    case 0xC051BE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    case 0xC051C0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    case 0xC051C1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    case 0xC051C2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    case 0xC051C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC051C3.
    case 0xC051C5: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    case 0xC051C6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C04F9F.asm:8 END_STACK_VARS
    case 0xC051C7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:9 TAY
    case 0xC051C8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:10 STY @LOCAL01
    case 0xC051C9: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C04F9F.asm:12 TYA
    case 0xC051CB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:13 CLC
    case 0xC051CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:14 ADC #.LOWORD(GAME_STATE)
    case 0xC051CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C04F9F.asm:14 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC051CD.
    case 0xC051CF: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:15 TAX
    case 0xC051D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:16 LDA a:game_state::player_controlled_party_members,X
    case 0xC051D1: cpu.execute_instruction<0xBD>(0x000099, 3); return true;
    // src/unknown/C0/C04F9F.asm:20 AND #$00FF
    case 0xC051D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04F9F.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC051D4.
    case 0xC051D6: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C04F9F.asm:21 ASL
    case 0xC051D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:22 TAX
    case 0xC051D8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:23 LDA CHOSEN_FOUR_PTRS,X
    case 0xC051D9: cpu.execute_instruction<0xBD>(0x00514E, 3); return true;
    // src/unknown/C0/C04F9F.asm:24 TAX
    case 0xC051DC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:25 STX @LOCAL00
    case 0xC051DD: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C04F9F.asm:26 LDY #100
    case 0xC051DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000064, 2); else cpu.execute_instruction<0xA0>(0x000064, 3); return true;
    // src/unknown/C0/C04F9F.asm:26 LDY #100
    // Overlapping static entry reached from 0xC051DF.
    case 0xC051E1: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/unknown/C0/C04F9F.asm:27 LDA a:char_struct::max_hp,X
    case 0xC051E2: cpu.execute_instruction<0xBD>(0x000009, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/C0/C04F9F.asm:28 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC051E5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/C0/C04F9F.asm:28 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC051E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/C0/C04F9F.asm:28 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC051E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/C0/C04F9F.asm:28 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC051E9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/C0/C04F9F.asm:28 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC051EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/C0/C04F9F.asm:28 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC051EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:29 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC051ED: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C0/C04F9F.asm:30 CMP a:char_struct::current_hp,X
    case 0xC051F1: cpu.execute_instruction<0xDD>(0x000044, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C04F9F.asm:31 BLTEQ @UNKNOWN1
    case 0xC051F4: cpu.execute_instruction<0x90>(0x000023, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C04F9F.asm:31 BLTEQ @UNKNOWN1
    case 0xC051F6: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/unknown/C0/C04F9F.asm:32 LDY @LOCAL01
    case 0xC051F8: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C04F9F.asm:33 TYA
    case 0xC051FA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:34 ASL
    case 0xC051FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:35 TAX
    case 0xC051FC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:36 LDA HP_ALERT_SHOWN,X
    case 0xC051FD: cpu.execute_instruction<0xBD>(0x006112, 3); return true;
    // src/unknown/C0/C04F9F.asm:37 BNE @UNKNOWN0
    case 0xC05200: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C0/C04F9F.asm:38 LDX @LOCAL00
    case 0xC05202: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C04F9F.asm:39 LDA a:char_struct::unknown53,X
    case 0xC05204: cpu.execute_instruction<0xBD>(0x000034, 3); return true;
    // src/unknown/C0/C04F9F.asm:40 INC
    case 0xC05207: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:41 JSL SHOW_HP_ALERT
    case 0xC05208: cpu.execute_instruction<0x22>(0xC1D9B8, 4); return true;
    // src/unknown/C0/C04F9F.asm:43 LDY @LOCAL01
    case 0xC0520C: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C04F9F.asm:44 TYA
    case 0xC0520E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:45 ASL
    case 0xC0520F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:46 TAX
    case 0xC05210: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:47 LDA #1
    case 0xC05211: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04F9F.asm:47 LDA #1
    // Overlapping static entry reached from 0xC05211.
    case 0xC05213: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04F9F.asm:48 STA HP_ALERT_SHOWN,X
    case 0xC05214: cpu.execute_instruction<0x9D>(0x006112, 3); return true;
    // src/unknown/C0/C04F9F.asm:49 BRA @UNKNOWN2
    case 0xC05217: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C04F9F.asm:51 LDY @LOCAL01
    case 0xC05219: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C04F9F.asm:52 TYA
    case 0xC0521B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:53 ASL
    case 0xC0521C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:54 TAX
    case 0xC0521D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04F9F.asm:55 STZ HP_ALERT_SHOWN,X
    case 0xC0521E: cpu.execute_instruction<0x9E>(0x006112, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04F9F.asm:57 END_C_FUNCTION
    case 0xC05221: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C04F9F.asm:57 END_C_FUNCTION
    case 0xC05222: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C04FFE.asm (unresolved).
bool execute_unresolved_c0_c04ffe_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C04FFE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05223: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C04FFE.asm:11 END_STACK_VARS
    case 0xC05225: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C04FFE.asm:11 END_STACK_VARS
    case 0xC05226: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04FFE.asm:11 END_STACK_VARS
    case 0xC05227: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C04FFE.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC05227.
    case 0xC05229: cpu.execute_instruction<0xFF>(0x56AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C04FFE.asm:11 END_STACK_VARS
    case 0xC0522A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:12 LDA GAME_STATE + game_state::unknownB0
    case 0xC0522B: cpu.execute_instruction<0xAD>(0x009B56, 3); return true;
    // src/unknown/C0/C04FFE.asm:12 LDA GAME_STATE + game_state::unknownB0
    // Overlapping static entry reached from 0xC05229.
    case 0xC0522D: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:13 CMP #2
    case 0xC0522E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C04FFE.asm:13 CMP #2
    // Overlapping static entry reached from 0xC0522E.
    case 0xC05230: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04FFE.asm:14 BNE @UNKNOWN0
    case 0xC05231: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C04FFE.asm:15 LDA #1
    case 0xC05233: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04FFE.asm:15 LDA #1
    // Overlapping static entry reached from 0xC05233.
    case 0xC05235: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C04FFE.asm:16 JMP @UNKNOWN28
    case 0xC05236: cpu.execute_instruction<0x4C>(0x005423, 3); return true;
    // src/unknown/C0/C04FFE.asm:18 LDA OVERWORLD_STATUS_SUPPRESSION
    case 0xC05239: cpu.execute_instruction<0xAD>(0x00611E, 3); return true;
    // src/unknown/C0/C04FFE.asm:19 BEQ @UNKNOWN1
    case 0xC0523C: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C04FFE.asm:20 LDA #1
    case 0xC0523E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C04FFE.asm:20 LDA #1
    // Overlapping static entry reached from 0xC0523E.
    case 0xC05240: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C04FFE.asm:21 JMP @UNKNOWN28
    case 0xC05241: cpu.execute_instruction<0x4C>(0x005423, 3); return true;
    // src/unknown/C0/C04FFE.asm:23 STZ @LOCAL04
    case 0xC05244: cpu.execute_instruction<0x64>(0x000016, 2); return true;
    // src/unknown/C0/C04FFE.asm:24 STZ @LOCAL03
    case 0xC05246: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/unknown/C0/C04FFE.asm:25 LDA #0
    case 0xC05248: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:25 LDA #0
    // Overlapping static entry reached from 0xC05248.
    case 0xC0524A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04FFE.asm:26 STA @VIRTUAL04
    case 0xC0524B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C04FFE.asm:27 STA @VIRTUAL02
    case 0xC0524D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:28 STA @LOCAL02
    case 0xC0524F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04FFE.asm:29 JMP @UNKNOWN23
    case 0xC05251: cpu.execute_instruction<0x4C>(0x0053E5, 3); return true;
    // src/unknown/C0/C04FFE.asm:31 LDA __BSS_START__+game_state::player_controlled_party_members,X
    case 0xC05254: cpu.execute_instruction<0xBD>(0x000099, 3); return true;
    // src/unknown/C0/C04FFE.asm:32 AND #$00FF
    case 0xC05257: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04FFE.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC05257.
    case 0xC05259: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C04FFE.asm:33 ASL
    case 0xC0525A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:34 TAX
    case 0xC0525B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:35 LDA CHOSEN_FOUR_PTRS,X
    case 0xC0525C: cpu.execute_instruction<0xBD>(0x00514E, 3); return true;
    // src/unknown/C0/C04FFE.asm:36 STA CURRENT_PARTY_MEMBER_TICK
    case 0xC0525F: cpu.execute_instruction<0x8D>(0x00514C, 3); return true;
    // src/unknown/C0/C04FFE.asm:37 TAX
    case 0xC05262: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:38 LDA __BSS_START__+char_struct::afflictions,X
    case 0xC05263: cpu.execute_instruction<0xBD>(0x00000D, 3); return true;
    // src/unknown/C0/C04FFE.asm:39 AND #$00FF
    case 0xC05266: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04FFE.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC05266.
    case 0xC05268: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C04FFE.asm:40 TAY
    case 0xC05269: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:41 STY @LOCAL01
    case 0xC0526A: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C04FFE.asm:42 CPY #1
    case 0xC0526C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/unknown/C0/C04FFE.asm:42 CPY #1
    // Overlapping static entry reached from 0xC0526C.
    case 0xC0526E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04FFE.asm:43 BEQL @UNKNOWN22
    case 0xC0526F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04FFE.asm:43 BEQL @UNKNOWN22
    case 0xC05271: cpu.execute_instruction<0x4C>(0x0053DB, 3); return true;
    // src/unknown/C0/C04FFE.asm:44 CPY #2
    case 0xC05274: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x000002, 3); return true;
    // src/unknown/C0/C04FFE.asm:44 CPY #2
    // Overlapping static entry reached from 0xC05274.
    case 0xC05276: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C04FFE.asm:45 BEQL @UNKNOWN22
    case 0xC05277: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C04FFE.asm:45 BEQL @UNKNOWN22
    case 0xC05279: cpu.execute_instruction<0x4C>(0x0053DB, 3); return true;
    // src/unknown/C0/C04FFE.asm:46 CPY #5
    case 0xC0527C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000005, 2); else cpu.execute_instruction<0xC0>(0x000005, 3); return true;
    // src/unknown/C0/C04FFE.asm:46 CPY #5
    // Overlapping static entry reached from 0xC0527C.
    case 0xC0527E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04FFE.asm:47 BNE @UNKNOWN7
    case 0xC0527F: cpu.execute_instruction<0xD0>(0x00004D, 2); return true;
    // src/unknown/C0/C04FFE.asm:48 LDA @VIRTUAL02
    case 0xC05281: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:49 ASL
    case 0xC05283: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:50 CLC
    case 0xC05284: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:51 ADC #.LOWORD(OVERWORLD_DAMAGE_COUNTDOWN_FRAMES)
    case 0xC05285: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x0060EC, 3); return true;
    // src/unknown/C0/C04FFE.asm:51 ADC #.LOWORD(OVERWORLD_DAMAGE_COUNTDOWN_FRAMES)
    // Overlapping static entry reached from 0xC05285.
    case 0xC05287: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:52 TAX
    case 0xC05288: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:53 LDA __BSS_START__,X
    case 0xC05289: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:54 BEQ @UNKNOWN6
    case 0xC0528C: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/unknown/C0/C04FFE.asm:55 DEC
    case 0xC0528E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:56 STA __BSS_START__,X
    case 0xC0528F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04FFE.asm:57 BNEL @UNKNOWN14
    case 0xC05292: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04FFE.asm:57 BNEL @UNKNOWN14
    case 0xC05294: cpu.execute_instruction<0x4C>(0x005362, 3); return true;
    // src/unknown/C0/C04FFE.asm:58 INC @VIRTUAL04
    case 0xC05297: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C0/C04FFE.asm:59 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC05299: cpu.execute_instruction<0xAD>(0x00514C, 3); return true;
    // src/unknown/C0/C04FFE.asm:60 CLC
    case 0xC0529C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:61 ADC #char_struct::current_hp
    case 0xC0529D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000044, 2); else cpu.execute_instruction<0x69>(0x000044, 3); return true;
    // src/unknown/C0/C04FFE.asm:61 ADC #char_struct::current_hp
    // Overlapping static entry reached from 0xC0529D.
    case 0xC0529F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C04FFE.asm:62 TAX
    case 0xC052A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:63 LDA __BSS_START__,X
    case 0xC052A1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:64 SEC
    case 0xC052A4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:65 SBC #10
    case 0xC052A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/unknown/C0/C04FFE.asm:65 SBC #10
    // Overlapping static entry reached from 0xC052A5.
    case 0xC052A7: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:66 STA __BSS_START__,X
    case 0xC052A8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:67 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC052AB: cpu.execute_instruction<0xAD>(0x00514C, 3); return true;
    // src/unknown/C0/C04FFE.asm:68 CLC
    case 0xC052AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:69 ADC #char_struct::current_hp_target
    case 0xC052AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000046, 2); else cpu.execute_instruction<0x69>(0x000046, 3); return true;
    // src/unknown/C0/C04FFE.asm:69 ADC #char_struct::current_hp_target
    // Overlapping static entry reached from 0xC052AF.
    case 0xC052B1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C04FFE.asm:70 TAX
    case 0xC052B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:71 LDA __BSS_START__,X
    case 0xC052B3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:72 SEC
    case 0xC052B6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:73 SBC #10
    case 0xC052B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/unknown/C0/C04FFE.asm:73 SBC #10
    // Overlapping static entry reached from 0xC052B7.
    case 0xC052B9: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:74 STA __BSS_START__,X
    case 0xC052BA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:75 LDA @VIRTUAL02
    case 0xC052BD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:76 JSR UNKNOWN_C04F9F
    case 0xC052BF: cpu.execute_instruction<0x20>(0x0051BE, 3); return true;
    // src/unknown/C0/C04FFE.asm:77 JMP @UNKNOWN14
    case 0xC052C2: cpu.execute_instruction<0x4C>(0x005362, 3); return true;
    // src/unknown/C0/C04FFE.asm:79 LDA #120
    case 0xC052C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/unknown/C0/C04FFE.asm:79 LDA #120
    // Overlapping static entry reached from 0xC052C5.
    case 0xC052C7: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:80 STA __BSS_START__,X
    case 0xC052C8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:81 JMP @UNKNOWN14
    case 0xC052CB: cpu.execute_instruction<0x4C>(0x005362, 3); return true;
    // src/unknown/C0/C04FFE.asm:83 CPY #4
    case 0xC052CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/unknown/C0/C04FFE.asm:83 CPY #4
    // Overlapping static entry reached from 0xC052CE.
    case 0xC052D0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C04FFE.asm:84 BCC @UNKNOWN8
    case 0xC052D1: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/unknown/C0/C04FFE.asm:85 CPY #7
    case 0xC052D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000007, 2); else cpu.execute_instruction<0xC0>(0x000007, 3); return true;
    // src/unknown/C0/C04FFE.asm:85 CPY #7
    // Overlapping static entry reached from 0xC052D3.
    case 0xC052D5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C04FFE.asm:86 BLTEQ @UNKNOWN9
    case 0xC052D6: cpu.execute_instruction<0x90>(0x000010, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C04FFE.asm:86 BLTEQ @UNKNOWN9
    case 0xC052D8: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C0/C04FFE.asm:88 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC052DA: cpu.execute_instruction<0xAD>(0x009B32, 3); return true;
    // src/unknown/C0/C04FFE.asm:89 AND #$000C
    case 0xC052DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/unknown/C0/C04FFE.asm:89 AND #$000C
    // Overlapping static entry reached from 0xC052DD.
    case 0xC052DF: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C04FFE.asm:90 CMP #12
    case 0xC052E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C04FFE.asm:90 CMP #12
    // Overlapping static entry reached from 0xC052E0.
    case 0xC052E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C04FFE.asm:91 BNEL @UNKNOWN14
    case 0xC052E3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C04FFE.asm:91 BNEL @UNKNOWN14
    case 0xC052E5: cpu.execute_instruction<0x4C>(0x005362, 3); return true;
    // src/unknown/C0/C04FFE.asm:93 LDA @VIRTUAL02
    case 0xC052E8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:94 ASL
    case 0xC052EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:95 CLC
    case 0xC052EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:96 ADC #.LOWORD(OVERWORLD_DAMAGE_COUNTDOWN_FRAMES)
    case 0xC052EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x0060EC, 3); return true;
    // src/unknown/C0/C04FFE.asm:96 ADC #.LOWORD(OVERWORLD_DAMAGE_COUNTDOWN_FRAMES)
    // Overlapping static entry reached from 0xC052EC.
    case 0xC052EE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:97 TAX
    case 0xC052EF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:98 LDA __BSS_START__,X
    case 0xC052F0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:99 BEQ @UNKNOWN12
    case 0xC052F3: cpu.execute_instruction<0xF0>(0x00005A, 2); return true;
    // src/unknown/C0/C04FFE.asm:100 DEC
    case 0xC052F5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:101 STA __BSS_START__,X
    case 0xC052F6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:102 BNE @UNKNOWN14
    case 0xC052F9: cpu.execute_instruction<0xD0>(0x000067, 2); return true;
    // src/unknown/C0/C04FFE.asm:103 INC @VIRTUAL04
    case 0xC052FB: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C0/C04FFE.asm:104 CPY #4
    case 0xC052FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/unknown/C0/C04FFE.asm:104 CPY #4
    // Overlapping static entry reached from 0xC052FD.
    case 0xC052FF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04FFE.asm:105 BNE @UNKNOWN10
    case 0xC05300: cpu.execute_instruction<0xD0>(0x000026, 2); return true;
    // src/unknown/C0/C04FFE.asm:106 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC05302: cpu.execute_instruction<0xAD>(0x00514C, 3); return true;
    // src/unknown/C0/C04FFE.asm:107 CLC
    case 0xC05305: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:108 ADC #char_struct::current_hp
    case 0xC05306: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000044, 2); else cpu.execute_instruction<0x69>(0x000044, 3); return true;
    // src/unknown/C0/C04FFE.asm:108 ADC #char_struct::current_hp
    // Overlapping static entry reached from 0xC05306.
    case 0xC05308: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C04FFE.asm:109 TAX
    case 0xC05309: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:110 LDA __BSS_START__,X
    case 0xC0530A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:111 SEC
    case 0xC0530D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:112 SBC #10
    case 0xC0530E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/unknown/C0/C04FFE.asm:112 SBC #10
    // Overlapping static entry reached from 0xC0530E.
    case 0xC05310: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:113 STA __BSS_START__,X
    case 0xC05311: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:114 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC05314: cpu.execute_instruction<0xAD>(0x00514C, 3); return true;
    // src/unknown/C0/C04FFE.asm:115 CLC
    case 0xC05317: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:116 ADC #char_struct::current_hp_target
    case 0xC05318: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000046, 2); else cpu.execute_instruction<0x69>(0x000046, 3); return true;
    // src/unknown/C0/C04FFE.asm:116 ADC #char_struct::current_hp_target
    // Overlapping static entry reached from 0xC05318.
    case 0xC0531A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C04FFE.asm:117 TAX
    case 0xC0531B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:118 LDA __BSS_START__,X
    case 0xC0531C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:119 SEC
    case 0xC0531F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:120 SBC #10
    case 0xC05320: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/unknown/C0/C04FFE.asm:120 SBC #10
    // Overlapping static entry reached from 0xC05320.
    case 0xC05322: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:121 STA __BSS_START__,X
    case 0xC05323: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:122 BRA @UNKNOWN11
    case 0xC05326: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C0/C04FFE.asm:124 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC05328: cpu.execute_instruction<0xAD>(0x00514C, 3); return true;
    // src/unknown/C0/C04FFE.asm:125 CLC
    case 0xC0532B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:126 ADC #char_struct::current_hp
    case 0xC0532C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000044, 2); else cpu.execute_instruction<0x69>(0x000044, 3); return true;
    // src/unknown/C0/C04FFE.asm:126 ADC #char_struct::current_hp
    // Overlapping static entry reached from 0xC0532C.
    case 0xC0532E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C04FFE.asm:127 TAX
    case 0xC0532F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:128 LDA __BSS_START__,X
    case 0xC05330: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:129 DEC
    case 0xC05333: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:130 DEC
    case 0xC05334: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:131 STA __BSS_START__,X
    case 0xC05335: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:132 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC05338: cpu.execute_instruction<0xAD>(0x00514C, 3); return true;
    // src/unknown/C0/C04FFE.asm:133 CLC
    case 0xC0533B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:134 ADC #char_struct::current_hp_target
    case 0xC0533C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000046, 2); else cpu.execute_instruction<0x69>(0x000046, 3); return true;
    // src/unknown/C0/C04FFE.asm:134 ADC #char_struct::current_hp_target
    // Overlapping static entry reached from 0xC0533C.
    case 0xC0533E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C04FFE.asm:135 TAX
    case 0xC0533F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:136 LDA __BSS_START__,X
    case 0xC05340: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:137 DEC
    case 0xC05343: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:138 DEC
    case 0xC05344: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:139 STA __BSS_START__,X
    case 0xC05345: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:141 LDA @VIRTUAL02
    case 0xC05348: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:142 JSR UNKNOWN_C04F9F
    case 0xC0534A: cpu.execute_instruction<0x20>(0x0051BE, 3); return true;
    // src/unknown/C0/C04FFE.asm:143 BRA @UNKNOWN14
    case 0xC0534D: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C0/C04FFE.asm:145 CPY #4
    case 0xC0534F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/unknown/C0/C04FFE.asm:145 CPY #4
    // Overlapping static entry reached from 0xC0534F.
    case 0xC05351: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04FFE.asm:146 BNE @UNKNOWN13
    case 0xC05352: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C04FFE.asm:147 LDA #120
    case 0xC05354: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/unknown/C0/C04FFE.asm:147 LDA #120
    // Overlapping static entry reached from 0xC05354.
    case 0xC05356: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:148 STA __BSS_START__,X
    case 0xC05357: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:149 BRA @UNKNOWN14
    case 0xC0535A: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C04FFE.asm:151 LDA #240
    case 0xC0535C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0000F0, 3); return true;
    // src/unknown/C0/C04FFE.asm:151 LDA #240
    // Overlapping static entry reached from 0xC0535C.
    case 0xC0535E: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:152 STA __BSS_START__,X
    case 0xC0535F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:154 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC05362: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/C0/C04FFE.asm:155 LDA __BSS_START__+char_struct::current_hp,X
    case 0xC05365: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/unknown/C0/C04FFE.asm:156 CMP #$8000
    case 0xC05368: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C04FFE.asm:156 CMP #$8000
    // Overlapping static entry reached from 0xC05368.
    case 0xC0536A: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C04FFE.asm:157 BGT @UNKNOWN16
    case 0xC0536B: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C04FFE.asm:157 BGT @UNKNOWN16
    case 0xC0536D: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C04FFE.asm:158 CMP #0
    case 0xC0536F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:158 CMP #0
    // Overlapping static entry reached from 0xC0536F.
    case 0xC05371: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C04FFE.asm:159 BNE @UNKNOWN21
    case 0xC05372: cpu.execute_instruction<0xD0>(0x00005B, 2); return true;
    // src/unknown/C0/C04FFE.asm:161 LDY @LOCAL01
    case 0xC05374: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C04FFE.asm:162 CPY #1
    case 0xC05376: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/unknown/C0/C04FFE.asm:162 CPY #1
    // Overlapping static entry reached from 0xC05376.
    case 0xC05378: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04FFE.asm:163 BEQ @UNKNOWN22
    case 0xC05379: cpu.execute_instruction<0xF0>(0x000060, 2); return true;
    // src/unknown/C0/C04FFE.asm:164 LDA #0
    case 0xC0537B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C04FFE.asm:164 LDA #0
    // Overlapping static entry reached from 0xC0537B.
    case 0xC0537D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C04FFE.asm:165 STA @LOCAL00
    case 0xC0537E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C04FFE.asm:166 BRA @UNKNOWN18
    case 0xC05380: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C0/C04FFE.asm:168 LDA @LOCAL00
    case 0xC05382: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C04FFE.asm:169 CLC
    case 0xC05384: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:170 ADC CURRENT_PARTY_MEMBER_TICK
    case 0xC05385: cpu.execute_instruction<0x6D>(0x00514C, 3); return true;
    // src/unknown/C0/C04FFE.asm:171 TAX
    case 0xC05388: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:172 SEP #PROC_FLAGS::ACCUM8
    case 0xC05389: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C04FFE.asm:173 STZ __BSS_START__+char_struct::afflictions,X
    case 0xC0538B: cpu.execute_instruction<0x9E>(0x00000D, 3); return true;
    // src/unknown/C0/C04FFE.asm:174 REP #PROC_FLAGS::ACCUM8
    case 0xC0538E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C04FFE.asm:175 LDA @LOCAL00
    case 0xC05390: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C04FFE.asm:176 INC
    case 0xC05392: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:177 STA @LOCAL00
    case 0xC05393: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C04FFE.asm:179 STA @VIRTUAL02
    case 0xC05395: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:180 LDA #6
    case 0xC05397: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C04FFE.asm:180 LDA #6
    // Overlapping static entry reached from 0xC05397.
    case 0xC05399: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C04FFE.asm:181 CLC
    case 0xC0539A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:182 SBC @VIRTUAL02
    case 0xC0539B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C0/C04FFE.asm:183 BRANCHGTS @UNKNOWN17
    case 0xC0539D: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C0/C04FFE.asm:183 BRANCHGTS @UNKNOWN17
    case 0xC0539F: cpu.execute_instruction<0x10>(0x0000E1, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C0/C04FFE.asm:183 BRANCHGTS @UNKNOWN17
    case 0xC053A1: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C0/C04FFE.asm:183 BRANCHGTS @UNKNOWN17
    case 0xC053A3: cpu.execute_instruction<0x30>(0x0000DD, 2); return true;
    // src/unknown/C0/C04FFE.asm:184 SEP #PROC_FLAGS::ACCUM8
    case 0xC053A5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C04FFE.asm:185 LDA #1
    case 0xC053A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AE01, 3); return true;
    // src/unknown/C0/C04FFE.asm:186 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC053A9: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/C0/C04FFE.asm:186 LDX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC053A7.
    case 0xC053AA: cpu.execute_instruction<0x4C>(0x009D51, 3); return true;
    // src/unknown/C0/C04FFE.asm:187 STA a:char_struct::afflictions,X
    case 0xC053AC: cpu.execute_instruction<0x9D>(0x00000D, 3); return true;
    // src/unknown/C0/C04FFE.asm:188 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC053AF: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/C0/C04FFE.asm:189 REP #PROC_FLAGS::ACCUM8
    case 0xC053B2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C04FFE.asm:190 STZ a:char_struct::current_hp_target,X
    case 0xC053B4: cpu.execute_instruction<0x9E>(0x000046, 3); return true;
    // src/unknown/C0/C04FFE.asm:191 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC053B7: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/C0/C04FFE.asm:192 STZ a:char_struct::current_hp,X
    case 0xC053BA: cpu.execute_instruction<0x9E>(0x000044, 3); return true;
    // src/unknown/C0/C04FFE.asm:193 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC053BD: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/C0/C04FFE.asm:194 LDA a:char_struct::unknown59,X
    case 0xC053C0: cpu.execute_instruction<0xBD>(0x00003A, 3); return true;
    // src/unknown/C0/C04FFE.asm:195 ASL
    case 0xC053C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:196 TAX
    case 0xC053C4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:197 LDA #16
    case 0xC053C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C0/C04FFE.asm:197 LDA #16
    // Overlapping static entry reached from 0xC053C5.
    case 0xC053C7: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C04FFE.asm:198 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC053C8: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/C0/C04FFE.asm:199 INC @LOCAL04
    case 0xC053CB: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/unknown/C0/C04FFE.asm:200 BRA @UNKNOWN22
    case 0xC053CD: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C0/C04FFE.asm:202 LDY @LOCAL01
    case 0xC053CF: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C04FFE.asm:203 CPY #2
    case 0xC053D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x000002, 3); return true;
    // src/unknown/C0/C04FFE.asm:203 CPY #2
    // Overlapping static entry reached from 0xC053D1.
    case 0xC053D3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04FFE.asm:204 BEQ @UNKNOWN22
    case 0xC053D4: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C04FFE.asm:205 CLC
    case 0xC053D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:206 ADC @LOCAL03
    case 0xC053D7: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C0/C04FFE.asm:207 STA @LOCAL03
    case 0xC053D9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C04FFE.asm:209 LDA @LOCAL02
    case 0xC053DB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C04FFE.asm:210 STA @VIRTUAL02
    case 0xC053DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:211 INC @VIRTUAL02
    case 0xC053DF: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:212 LDA @VIRTUAL02
    case 0xC053E1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:213 STA @LOCAL02
    case 0xC053E3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C04FFE.asm:215 LDA @VIRTUAL02
    case 0xC053E5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C04FFE.asm:216 CLC
    case 0xC053E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:217 ADC #.LOWORD(GAME_STATE)
    case 0xC053E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C04FFE.asm:217 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC053E8.
    case 0xC053EA: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:218 TAX
    case 0xC053EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:219 LDA __BSS_START__+game_state::unknown96,X
    case 0xC053EC: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C0/C04FFE.asm:220 AND #$00FF
    case 0xC053EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04FFE.asm:220 AND #$00FF
    // Overlapping static entry reached from 0xC053EF.
    case 0xC053F1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C04FFE.asm:221 BEQ @UNKNOWN25
    case 0xC053F2: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C04FFE.asm:222 AND #$00FF
    case 0xC053F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C04FFE.asm:222 AND #$00FF
    // Overlapping static entry reached from 0xC053F4.
    case 0xC053F6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C04FFE.asm:223 CLC
    case 0xC053F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C04FFE.asm:224 SBC #4
    case 0xC053F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C04FFE.asm:224 SBC #4
    // Overlapping static entry reached from 0xC053F8.
    case 0xC053FA: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C0/C04FFE.asm:225 JUMPLTEQS @UNKNOWN2
    case 0xC053FB: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C0/C04FFE.asm:225 JUMPLTEQS @UNKNOWN2
    case 0xC053FD: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C0/C04FFE.asm:225 JUMPLTEQS @UNKNOWN2
    case 0xC053FF: cpu.execute_instruction<0x4C>(0x005254, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C0/C04FFE.asm:225 JUMPLTEQS @UNKNOWN2
    case 0xC05402: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C0/C04FFE.asm:225 JUMPLTEQS @UNKNOWN2
    case 0xC05404: cpu.execute_instruction<0x4C>(0x005254, 3); return true;
    // src/unknown/C0/C04FFE.asm:227 LDA @VIRTUAL04
    case 0xC05407: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C04FFE.asm:228 BEQ @UNKNOWN26
    case 0xC05409: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C04FFE.asm:228 BEQ @UNKNOWN26
    // Overlapping static entry reached from 0xC05467.
    case 0xC0540A: cpu.execute_instruction<0x03>(0x000020, 2); return true;
    // src/unknown/C0/C04FFE.asm:229 JSR UNKNOWN_C04F60
    case 0xC0540B: cpu.execute_instruction<0x20>(0x00517F, 3); return true;
    // src/unknown/C0/C04FFE.asm:229 JSR UNKNOWN_C04F60
    // Overlapping static entry reached from 0xC0540A.
    case 0xC0540C: cpu.execute_instruction<0x7F>(0x16A551, 4); return true;
    // src/unknown/C0/C04FFE.asm:231 LDA @LOCAL04
    case 0xC0540E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C04FFE.asm:232 BEQ @UNKNOWN27
    case 0xC05410: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C0/C04FFE.asm:233 STZ PARTY_MEMBERS_ALIVE_OVERWORLD
    case 0xC05412: cpu.execute_instruction<0x9C>(0x00514A, 3); return true;
    // src/unknown/C0/C04FFE.asm:234 JSL UPDATE_PARTY
    case 0xC05415: cpu.execute_instruction<0x22>(0xC036C7, 4); return true;
    // src/unknown/C0/C04FFE.asm:235 JSL UNKNOWN_C07B52
    case 0xC05419: cpu.execute_instruction<0x22>(0xC07DA2, 4); return true;
    // src/unknown/C0/C04FFE.asm:236 JSL UNKNOWN_C09451
    case 0xC0541D: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/unknown/C0/C04FFE.asm:238 LDA @LOCAL03
    case 0xC05421: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C04FFE.asm:240 END_C_FUNCTION
    case 0xC05423: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C04FFE.asm:240 END_C_FUNCTION
    case 0xC05424: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05200.asm (unresolved).
bool execute_unresolved_c0_c05200_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05200.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05425: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05200.asm:6 END_STACK_VARS
    case 0xC05427: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05200.asm:6 END_STACK_VARS
    case 0xC05428: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05200.asm:6 END_STACK_VARS
    case 0xC05429: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05200.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC05429.
    case 0xC0542B: cpu.execute_instruction<0xFF>(0x48AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05200.asm:6 END_STACK_VARS
    case 0xC0542C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:7 LDA BATTLE_MODE
    case 0xC0542D: cpu.execute_instruction<0xAD>(0x005148, 3); return true;
    // src/unknown/C0/C05200.asm:7 LDA BATTLE_MODE
    // Overlapping static entry reached from 0xC0542B.
    case 0xC0542F: cpu.execute_instruction<0x51>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C05200.asm:8 BNEL @UNKNOWN9
    case 0xC05430: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C05200.asm:8 BNEL @UNKNOWN9
    // Overlapping static entry reached from 0xC0542F.
    case 0xC05431: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C05200.asm:8 BNEL @UNKNOWN9
    case 0xC05432: cpu.execute_instruction<0x4C>(0x0054CD, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C05200.asm:8 BNEL @UNKNOWN9
    // Overlapping static entry reached from 0xC05431.
    case 0xC05433: cpu.execute_instruction<0xCD>(0x00AD54, 3); return true;
    // src/unknown/C0/C05200.asm:9 LDA POSSESSED_PLAYER_COUNT
    case 0xC05435: cpu.execute_instruction<0xAD>(0x00A171, 3); return true;
    // src/unknown/C0/C05200.asm:9 LDA POSSESSED_PLAYER_COUNT
    // Overlapping static entry reached from 0xC05433.
    case 0xC05436: cpu.execute_instruction<0x71>(0x0000A1, 2); return true;
    // src/unknown/C0/C05200.asm:10 BEQ @UNKNOWN1
    case 0xC05438: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C0/C05200.asm:11 LDA MINI_GHOST_ENTITY_ID
    case 0xC0543A: cpu.execute_instruction<0xAD>(0x00A16D, 3); return true;
    // src/unknown/C0/C05200.asm:12 CMP #.LOWORD(-1)
    case 0xC0543D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05200.asm:12 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0543D.
    case 0xC0543F: cpu.execute_instruction<0xFF>(0x2212D0, 4); return true;
    // src/unknown/C0/C05200.asm:13 BNE @UNKNOWN2
    case 0xC05440: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C0/C05200.asm:14 JSL UNKNOWN_C07716
    case 0xC05442: cpu.execute_instruction<0x22>(0xC07963, 4); return true;
    // src/unknown/C0/C05200.asm:14 JSL UNKNOWN_C07716
    // Overlapping static entry reached from 0xC0543F.
    case 0xC05443: cpu.execute_instruction<0x63>(0x000079, 2); return true;
    // src/unknown/C0/C05200.asm:14 JSL UNKNOWN_C07716
    // Overlapping static entry reached from 0xC05443.
    case 0xC05445: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000080, 2); else cpu.execute_instruction<0xC0>(0x000C80, 3); return true;
    // src/unknown/C0/C05200.asm:15 BRA @UNKNOWN2
    case 0xC05446: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C0/C05200.asm:15 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC05445.
    case 0xC05447: cpu.execute_instruction<0x0C>(0x006DAD, 3); return true;
    // src/unknown/C0/C05200.asm:17 LDA MINI_GHOST_ENTITY_ID
    case 0xC05448: cpu.execute_instruction<0xAD>(0x00A16D, 3); return true;
    // src/unknown/C0/C05200.asm:17 LDA MINI_GHOST_ENTITY_ID
    // Overlapping static entry reached from 0xC05447.
    case 0xC0544A: cpu.execute_instruction<0xA1>(0x0000C9, 2); return true;
    // src/unknown/C0/C05200.asm:18 CMP #.LOWORD(-1)
    case 0xC0544B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05200.asm:18 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0544A.
    case 0xC0544C: cpu.execute_instruction<0xFF>(0x04F0FF, 4); return true;
    // src/unknown/C0/C05200.asm:18 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0544B.
    case 0xC0544D: cpu.execute_instruction<0xFF>(0x2204F0, 4); return true;
    // src/unknown/C0/C05200.asm:19 BEQ @UNKNOWN2
    case 0xC0544E: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C05200.asm:20 JSL UNKNOWN_C0777A
    case 0xC05450: cpu.execute_instruction<0x22>(0xC079CA, 4); return true;
    // src/unknown/C0/C05200.asm:20 JSL UNKNOWN_C0777A
    // Overlapping static entry reached from 0xC0544D.
    case 0xC05451: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:20 JSL UNKNOWN_C0777A
    // Overlapping static entry reached from 0xC05451.
    case 0xC05452: cpu.execute_instruction<0x79>(0x00ADC0, 3); return true;
    // src/unknown/C0/C05200.asm:22 LDA LOADED_ANIMATED_TILE_COUNT
    case 0xC05454: cpu.execute_instruction<0xAD>(0x0047F8, 3); return true;
    // src/unknown/C0/C05200.asm:22 LDA LOADED_ANIMATED_TILE_COUNT
    // Overlapping static entry reached from 0xC05452.
    case 0xC05455: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:22 LDA LOADED_ANIMATED_TILE_COUNT
    // Overlapping static entry reached from 0xC05455.
    case 0xC05456: cpu.execute_instruction<0x47>(0x0000F0, 2); return true;
    // src/unknown/C0/C05200.asm:23 BEQ @UNKNOWN3
    case 0xC05457: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C05200.asm:23 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC05456.
    case 0xC05458: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/unknown/C0/C05200.asm:24 JSL ANIMATE_TILESET
    case 0xC05459: cpu.execute_instruction<0x22>(0xC00172, 4); return true;
    // src/unknown/C0/C05200.asm:24 JSL ANIMATE_TILESET
    // Overlapping static entry reached from 0xC05458.
    case 0xC0545A: cpu.execute_instruction<0x72>(0x000001, 2); return true;
    // src/unknown/C0/C05200.asm:24 JSL ANIMATE_TILESET
    // Overlapping static entry reached from 0xC0545A.
    case 0xC0545C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x00FAAD, 3); return true;
    // src/unknown/C0/C05200.asm:26 LDA MAP_PALETTE_ANIMATION_LOADED
    case 0xC0545D: cpu.execute_instruction<0xAD>(0x0047FA, 3); return true;
    // src/unknown/C0/C05200.asm:26 LDA MAP_PALETTE_ANIMATION_LOADED
    // Overlapping static entry reached from 0xC0545C.
    case 0xC0545E: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:26 LDA MAP_PALETTE_ANIMATION_LOADED
    // Overlapping static entry reached from 0xC0545C.
    case 0xC0545F: cpu.execute_instruction<0x47>(0x0000F0, 2); return true;
    // src/unknown/C0/C05200.asm:27 BEQ @UNKNOWN4
    case 0xC05460: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C05200.asm:27 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC0545F.
    case 0xC05461: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/unknown/C0/C05200.asm:28 JSL ANIMATE_PALETTE
    case 0xC05462: cpu.execute_instruction<0x22>(0xC00317, 4); return true;
    // src/unknown/C0/C05200.asm:28 JSL ANIMATE_PALETTE
    // Overlapping static entry reached from 0xC05461.
    case 0xC05463: cpu.execute_instruction<0x17>(0x000003, 2); return true;
    // src/unknown/C0/C05200.asm:28 JSL ANIMATE_PALETTE
    // Overlapping static entry reached from 0xC05463.
    case 0xC05465: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x0030AD, 3); return true;
    // src/unknown/C0/C05200.asm:30 LDA ITEM_TRANSFORMATIONS_LOADED
    case 0xC05466: cpu.execute_instruction<0xAD>(0x00A130, 3); return true;
    // src/unknown/C0/C05200.asm:30 LDA ITEM_TRANSFORMATIONS_LOADED
    // Overlapping static entry reached from 0xC05465.
    case 0xC05467: cpu.execute_instruction<0x30>(0x0000A1, 2); return true;
    // src/unknown/C0/C05200.asm:30 LDA ITEM_TRANSFORMATIONS_LOADED
    // Overlapping static entry reached from 0xC05465.
    case 0xC05468: cpu.execute_instruction<0xA1>(0x0000F0, 2); return true;
    // src/unknown/C0/C05200.asm:31 BEQ @UNKNOWN5
    case 0xC05469: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C05200.asm:31 BEQ @UNKNOWN5
    // Overlapping static entry reached from 0xC05468.
    case 0xC0546A: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/unknown/C0/C05200.asm:32 JSL PROCESS_ITEM_TRANSFORMATIONS
    case 0xC0546B: cpu.execute_instruction<0x22>(0xC4660E, 4); return true;
    // src/unknown/C0/C05200.asm:32 JSL PROCESS_ITEM_TRANSFORMATIONS
    // Overlapping static entry reached from 0xC0546A.
    case 0xC0546C: cpu.execute_instruction<0x0E>(0x00C466, 3); return true;
    // src/unknown/C0/C05200.asm:34 JSL UNKNOWN_C04C45
    case 0xC0546F: cpu.execute_instruction<0x22>(0xC04EBB, 4); return true;
    // src/unknown/C0/C05200.asm:35 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC05473: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C05200.asm:36 XBA
    case 0xC05476: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:37 AND #$00FF
    case 0xC05477: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05200.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC05477.
    case 0xC05479: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05200.asm:38 STA @LOCAL00
    case 0xC0547A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05200.asm:39 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0547C: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C05200.asm:40 XBA
    case 0xC0547F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:41 AND #$00FF
    case 0xC05480: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05200.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC05480.
    case 0xC05482: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C05200.asm:42 TAX
    case 0xC05483: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:43 LDA @LOCAL00
    case 0xC05484: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05200.asm:44 EOR LAST_SECTOR_X
    case 0xC05486: cpu.execute_instruction<0x4D>(0x0060E2, 3); return true;
    // src/unknown/C0/C05200.asm:45 BNE @UNKNOWN6
    case 0xC05489: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C05200.asm:46 TXA
    case 0xC0548B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:47 EOR LAST_SECTOR_Y
    case 0xC0548C: cpu.execute_instruction<0x4D>(0x0060E4, 3); return true;
    // src/unknown/C0/C05200.asm:48 BEQ @UNKNOWN7
    case 0xC0548F: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C05200.asm:50 LDA @LOCAL00
    case 0xC05491: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05200.asm:51 STA LAST_SECTOR_X
    case 0xC05493: cpu.execute_instruction<0x8D>(0x0060E2, 3); return true;
    // src/unknown/C0/C05200.asm:52 STX LAST_SECTOR_Y
    case 0xC05496: cpu.execute_instruction<0x8E>(0x0060E4, 3); return true;
    // src/unknown/C0/C05200.asm:53 LDA ENABLE_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC05499: cpu.execute_instruction<0xAD>(0x00B6FA, 3); return true;
    // src/unknown/C0/C05200.asm:54 BEQ @UNKNOWN7
    case 0xC0549C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C05200.asm:55 JSR UNKNOWN_C03C25
    case 0xC0549E: cpu.execute_instruction<0x20>(0x003E8C, 3); return true;
    // src/unknown/C0/C05200.asm:57 LDA DAD_PHONE_TIMER
    case 0xC054A1: cpu.execute_instruction<0xAD>(0x00A05A, 3); return true;
    // src/unknown/C0/C05200.asm:58 BNE @UNKNOWN8
    case 0xC054A4: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C05200.asm:59 LDA GAME_STATE + game_state::unknownB0
    case 0xC054A6: cpu.execute_instruction<0xAD>(0x009B56, 3); return true;
    // src/unknown/C0/C05200.asm:60 CMP #2
    case 0xC054A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C05200.asm:60 CMP #2
    // Overlapping static entry reached from 0xC054A9.
    case 0xC054AB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05200.asm:61 BEQ @UNKNOWN8
    case 0xC054AC: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C05200.asm:62 JSL LOAD_DAD_PHONE
    case 0xC054AE: cpu.execute_instruction<0x22>(0xC0DC8E, 4); return true;
    // src/unknown/C0/C05200.asm:64 STZ POSSESSED_PLAYER_COUNT
    case 0xC054B2: cpu.execute_instruction<0x9C>(0x00A171, 3); return true;
    // src/unknown/C0/C05200.asm:65 LDA GAME_STATE+game_state::leader_direction
    case 0xC054B5: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C0/C05200.asm:66 STA CURRENT_LEADER_DIRECTION
    case 0xC054B8: cpu.execute_instruction<0x8D>(0x0060FC, 3); return true;
    // src/unknown/C0/C05200.asm:67 LDA GAME_STATE+game_state::current_party_members
    case 0xC054BB: cpu.execute_instruction<0xAD>(0x009B3A, 3); return true;
    // src/unknown/C0/C05200.asm:68 ASL
    case 0xC054BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05200.asm:69 STA CURRENT_LEADING_PARTY_MEMBER_ENTITY
    case 0xC054BF: cpu.execute_instruction<0x8D>(0x0060FE, 3); return true;
    // src/unknown/C0/C05200.asm:70 LDA GAME_STATE + game_state::unknown90
    case 0xC054C2: cpu.execute_instruction<0xAD>(0x009B36, 3); return true;
    // src/unknown/C0/C05200.asm:71 BEQ @UNKNOWN9
    case 0xC054C5: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C05200.asm:72 LDA #1
    case 0xC054C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C05200.asm:72 LDA #1
    // Overlapping static entry reached from 0xC054C7.
    case 0xC054C9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C05200.asm:73 STA PLAYER_HAS_DONE_SOMETHING_THIS_FRAME
    case 0xC054CA: cpu.execute_instruction<0x8D>(0x000A2A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05200.asm:75 END_C_FUNCTION
    case 0xC054CD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05200.asm:75 END_C_FUNCTION
    case 0xC054CE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C052D4.asm (unresolved).
bool execute_unresolved_c0_c052d4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C052D4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC054F9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    case 0xC054FB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    case 0xC054FC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    case 0xC054FD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    case 0xC054FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC054FE.
    case 0xC05500: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    case 0xC05501: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C052D4.asm:17 END_STACK_VARS
    case 0xC05502: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:18 STA @LOCAL0A
    case 0xC05503: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C0/C052D4.asm:18 STA @LOCAL0A
    // Overlapping static entry reached from 0xC05500.
    case 0xC05504: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:19 LDA #$00FF
    case 0xC05505: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C052D4.asm:19 LDA #$00FF
    // Overlapping static entry reached from 0xC05505.
    case 0xC05507: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C052D4.asm:20 STA @LOCAL09
    case 0xC05508: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C052D4.asm:21 STA GAME_STATE + game_state::unknown88
    case 0xC0550A: cpu.execute_instruction<0x8D>(0x009B2E, 3); return true;
    // src/unknown/C0/C052D4.asm:22 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0550D: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C052D4.asm:23 STA @LOCAL08
    case 0xC05510: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C052D4.asm:24 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC05512: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C052D4.asm:25 STA @LOCAL07
    case 0xC05515: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C052D4.asm:26 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xC05517: cpu.execute_instruction<0xAD>(0x009B32, 3); return true;
    // src/unknown/C0/C052D4.asm:27 STA @VIRTUAL04
    case 0xC0551A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C052D4.asm:28 STA @LOCAL06
    case 0xC0551C: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C0/C052D4.asm:29 LDA GAME_STATE+game_state::walking_style
    case 0xC0551E: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/unknown/C0/C052D4.asm:30 STA @LOCAL05
    case 0xC05521: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C0/C052D4.asm:31 LDA @LOCAL0A
    case 0xC05523: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C052D4.asm:32 INC
    case 0xC05525: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:33 INC
    case 0xC05526: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:34 INC
    case 0xC05527: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:35 INC
    case 0xC05528: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:36 AND #$0007
    case 0xC05529: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C052D4.asm:36 AND #$0007
    // Overlapping static entry reached from 0xC05529.
    case 0xC0552B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C052D4.asm:37 STA @VIRTUAL02
    case 0xC0552C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:38 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    case 0xC0552E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000026, 2); else cpu.execute_instruction<0xA0>(0x009B26, 3); return true;
    // src/unknown/C0/C052D4.asm:38 LDY #.LOWORD(GAME_STATE) + game_state::unknown80
    // Overlapping static entry reached from 0xC0552E.
    case 0xC05530: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:39 STY @LOCAL04
    case 0xC05531: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C052D4.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC05533: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC05536: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C052D4.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC05538: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0553B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C052D4.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0553D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0553F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C052D4.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC05541: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC05543: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C052D4.asm:42 LDX @VIRTUAL04
    case 0xC05545: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C052D4.asm:43 LDA @VIRTUAL02
    case 0xC05547: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:44 JSR ADJUST_POSITION_HORIZONTAL
    case 0xC05549: cpu.execute_instruction<0x20>(0x002F6A, 3); return true;
    // src/unknown/C0/C052D4.asm:45 LDY @LOCAL04
    case 0xC0554C: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C052D4.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0554E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC05551: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C052D4.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC05553: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:46 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC05556: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C052D4.asm:47 SEC
    case 0xC05558: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/unknown/C0/C052D4.asm:48 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC05559: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/unknown/C0/C052D4.asm:48 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0555B: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:48 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0555D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/unknown/C0/C052D4.asm:48 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0555F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/unknown/C0/C052D4.asm:48 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC05561: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:48 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC05563: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C052D4.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC05565: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC05567: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C052D4.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC05569: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0556B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C052D4.asm:50 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    case 0xC0556D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002A, 2); else cpu.execute_instruction<0xA0>(0x009B2A, 3); return true;
    // src/unknown/C0/C052D4.asm:50 LDY #.LOWORD(GAME_STATE) + game_state::unknown84
    // Overlapping static entry reached from 0xC0556D.
    case 0xC0556F: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:51 STY @LOCAL04
    case 0xC05570: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C052D4.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC05572: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC05575: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C052D4.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC05577: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:52 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0557A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C052D4.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0557C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0557E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C052D4.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC05580: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC05582: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C052D4.asm:54 LDX @VIRTUAL04
    case 0xC05584: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C052D4.asm:55 LDA @VIRTUAL02
    case 0xC05586: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:56 JSR ADJUST_POSITION_VERTICAL
    case 0xC05588: cpu.execute_instruction<0x20>(0x0031F2, 3); return true;
    // src/unknown/C0/C052D4.asm:57 LDY @LOCAL04
    case 0xC0558B: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C052D4.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC0558D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC05590: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C052D4.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC05592: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC05595: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C052D4.asm:59 SEC
    case 0xC05597: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/unknown/C0/C052D4.asm:60 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC05598: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/unknown/C0/C052D4.asm:60 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0559A: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:60 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0559C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/unknown/C0/C052D4.asm:60 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC0559E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/unknown/C0/C052D4.asm:60 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC055A0: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:60 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC055A2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C052D4.asm:61 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC055A4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C052D4.asm:61 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC055A6: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C052D4.asm:61 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC055A8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C052D4.asm:61 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC055AA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C052D4.asm:62 LDX #256
    case 0xC055AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/unknown/C0/C052D4.asm:62 LDX #256
    // Overlapping static entry reached from 0xC055AC.
    case 0xC055AE: cpu.execute_instruction<0x01>(0x000080, 2); return true;
    // src/unknown/C0/C052D4.asm:63 BRA @UNKNOWN1
    case 0xC055AF: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/unknown/C0/C052D4.asm:63 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC055AE.
    case 0xC055B0: cpu.execute_instruction<0x3F>(0x853A8A, 4); return true;
    // src/unknown/C0/C052D4.asm:65 TXA
    case 0xC055B1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:66 DEC
    case 0xC055B2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:67 STA @LOCAL04
    case 0xC055B3: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:67 STA @LOCAL04
    // Overlapping static entry reached from 0xC055B0.
    case 0xC055B4: cpu.execute_instruction<0x1C>(0x000485, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C052D4.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC055B5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C052D4.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC055B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C052D4.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC055B8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C052D4.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC055BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C052D4.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC055BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:69 CLC
    case 0xC055BC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:70 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC055BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0054DC, 3); return true;
    // src/unknown/C0/C052D4.asm:70 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC055BD.
    case 0xC055BF: cpu.execute_instruction<0x54>(0x00A5AA, 3); return true;
    // src/unknown/C0/C052D4.asm:71 TAX
    case 0xC055C0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:72 LDA @LOCAL08
    case 0xC055C1: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C0/C052D4.asm:72 LDA @LOCAL08
    // Overlapping static entry reached from 0xC055BF.
    case 0xC055C2: cpu.execute_instruction<0x24>(0x00009D, 2); return true;
    // src/unknown/C0/C052D4.asm:73 STA a:player_position_buffer_entry::x_coord,X
    case 0xC055C3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C052D4.asm:73 STA a:player_position_buffer_entry::x_coord,X
    // Overlapping static entry reached from 0xC055C2.
    case 0xC055C4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C052D4.asm:74 LDA @LOCAL07
    case 0xC055C6: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C052D4.asm:75 STA a:player_position_buffer_entry::y_coord,X
    case 0xC055C8: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C0/C052D4.asm:76 LDA @LOCAL06
    case 0xC055CB: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C0/C052D4.asm:77 STA @VIRTUAL04
    case 0xC055CD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C052D4.asm:78 STA a:player_position_buffer_entry::tile_flags,X
    case 0xC055CF: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/unknown/C0/C052D4.asm:79 LDA @LOCAL05
    case 0xC055D2: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C052D4.asm:80 STA a:player_position_buffer_entry::walking_style,X
    case 0xC055D4: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/unknown/C0/C052D4.asm:81 LDA @LOCAL0A
    case 0xC055D7: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C0/C052D4.asm:82 STA a:player_position_buffer_entry::direction,X
    case 0xC055D9: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/unknown/C0/C052D4.asm:83 STZ a:player_position_buffer_entry::unknown10,X
    case 0xC055DC: cpu.execute_instruction<0x9E>(0x00000A, 3); return true;
    // src/unknown/C0/C052D4.asm:84 LDA @LOCAL08
    case 0xC055DF: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C0/C052D4.asm:85 CLC
    case 0xC055E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:86 ADC @LOCAL01 + fixed_point::integer
    case 0xC055E2: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C0/C052D4.asm:87 STA @LOCAL08
    case 0xC055E4: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C0/C052D4.asm:88 LDA @LOCAL07
    case 0xC055E6: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C0/C052D4.asm:89 CLC
    case 0xC055E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:90 ADC @LOCAL02 + fixed_point::integer
    case 0xC055E9: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C0/C052D4.asm:91 STA @LOCAL07
    case 0xC055EB: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C0/C052D4.asm:92 LDA @LOCAL04
    case 0xC055ED: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:93 TAX
    case 0xC055EF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:95 BNE @UNKNOWN0
    case 0xC055F0: cpu.execute_instruction<0xD0>(0x0000BF, 2); return true;
    // src/unknown/C0/C052D4.asm:96 LDA @LOCAL09
    case 0xC055F2: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C052D4.asm:97 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC055F4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C052D4.asm:97 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC055F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C052D4.asm:97 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC055F7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C052D4.asm:97 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC055F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C052D4.asm:97 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC055FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:98 CLC
    case 0xC055FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:99 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC055FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0054DC, 3); return true;
    // src/unknown/C0/C052D4.asm:99 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC055FC.
    case 0xC055FE: cpu.execute_instruction<0x54>(0x0086AA, 3); return true;
    // src/unknown/C0/C052D4.asm:100 TAX
    case 0xC055FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:101 STX @LOCAL04
    case 0xC05600: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:101 STX @LOCAL04
    // Overlapping static entry reached from 0xC055FE.
    case 0xC05601: cpu.execute_instruction<0x1C>(0x0000A9, 3); return true;
    // src/unknown/C0/C052D4.asm:102 LDA #0
    case 0xC05602: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C052D4.asm:102 LDA #0
    // Overlapping static entry reached from 0xC05602.
    case 0xC05604: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C052D4.asm:103 STA @LOCAL03
    case 0xC05605: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C052D4.asm:105 JMP @UNKNOWN3
    case 0xC05607: cpu.execute_instruction<0x4C>(0x005684, 3); return true;
    // src/unknown/C0/C052D4.asm:111 CLC
    case 0xC0560A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:112 ADC #.LOWORD(GAME_STATE)
    case 0xC0560B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C052D4.asm:112 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0560B.
    case 0xC0560D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:113 TAX
    case 0xC0560E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:114 LDA a:game_state::player_controlled_party_members,X
    case 0xC0560F: cpu.execute_instruction<0xBD>(0x000099, 3); return true;
    // src/unknown/C0/C052D4.asm:119 AND #$00FF
    case 0xC05612: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C052D4.asm:119 AND #$00FF
    // Overlapping static entry reached from 0xC05612.
    case 0xC05614: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C052D4.asm:120 LDY #.SIZEOF(char_struct)
    case 0xC05615: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C052D4.asm:120 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC05615.
    case 0xC05617: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C052D4.asm:121 JSL MULT168
    case 0xC05618: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C052D4.asm:122 CLC
    case 0xC0561C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:123 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC0561D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C0/C052D4.asm:123 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC0561D.
    case 0xC0561F: cpu.execute_instruction<0x9C>(0x00A5A8, 3); return true;
    // src/unknown/C0/C052D4.asm:124 TAY
    case 0xC05620: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:125 LDA @LOCAL09
    case 0xC05621: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C052D4.asm:125 LDA @LOCAL09
    // Overlapping static entry reached from 0xC0561F.
    case 0xC05622: cpu.execute_instruction<0x26>(0x000099, 2); return true;
    // src/unknown/C0/C052D4.asm:126 STA __BSS_START__+char_struct::position_index,Y
    case 0xC05623: cpu.execute_instruction<0x99>(0x00003C, 3); return true;
    // src/unknown/C0/C052D4.asm:126 STA __BSS_START__+char_struct::position_index,Y
    // Overlapping static entry reached from 0xC05622.
    case 0xC05624: cpu.execute_instruction<0x3C>(0x00A900, 3); return true;
    // src/unknown/C0/C052D4.asm:127 LDA #.LOWORD(-1)
    case 0xC05626: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C052D4.asm:127 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05624.
    case 0xC05627: cpu.execute_instruction<0xFF>(0x4099FF, 4); return true;
    // src/unknown/C0/C052D4.asm:127 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05626.
    case 0xC05628: cpu.execute_instruction<0xFF>(0x004099, 4); return true;
    // src/unknown/C0/C052D4.asm:128 STA __BSS_START__+char_struct::unknown63 + 2,Y
    case 0xC05629: cpu.execute_instruction<0x99>(0x000040, 3); return true;
    // src/unknown/C0/C052D4.asm:128 STA __BSS_START__+char_struct::unknown63 + 2,Y
    // Overlapping static entry reached from 0xC05627.
    case 0xC0562B: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C052D4.asm:129 STA __BSS_START__+char_struct::unknown53 + 2,Y
    case 0xC0562C: cpu.execute_instruction<0x99>(0x000036, 3); return true;
    // src/unknown/C0/C052D4.asm:130 LDA @LOCAL03
    case 0xC0562F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C052D4.asm:131 ASL
    case 0xC05631: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:132 STA @VIRTUAL02
    case 0xC05632: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:133 CLC
    case 0xC05634: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:135 ADC #.LOWORD(GAME_STATE)
    case 0xC05635: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C052D4.asm:135 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC05635.
    case 0xC05637: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:136 CLC
    case 0xC05638: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:137 ADC #game_state::unknownA2
    case 0xC05639: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009F, 2); else cpu.execute_instruction<0x69>(0x00009F, 3); return true;
    // src/unknown/C0/C052D4.asm:137 ADC #game_state::unknownA2
    // Overlapping static entry reached from 0xC05639.
    case 0xC0563B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C052D4.asm:141 TAY
    case 0xC0563C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:142 LDA __BSS_START__,Y
    case 0xC0563D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C052D4.asm:143 ASL
    case 0xC05640: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:144 PHA
    case 0xC05641: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:145 LDX @LOCAL04
    case 0xC05642: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:146 LDA a:player_position_buffer_entry::x_coord,X
    case 0xC05644: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C052D4.asm:147 PLX
    case 0xC05647: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:148 STA ENTITY_ABS_X_TABLE,X
    case 0xC05648: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C0/C052D4.asm:149 LDA __BSS_START__,Y
    case 0xC0564B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C052D4.asm:150 ASL
    case 0xC0564E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:151 PHA
    case 0xC0564F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:152 LDX @LOCAL04
    case 0xC05650: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:153 LDA a:player_position_buffer_entry::y_coord,X
    case 0xC05652: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C052D4.asm:154 PLX
    case 0xC05655: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:155 STA ENTITY_ABS_Y_TABLE,X
    case 0xC05656: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C0/C052D4.asm:156 LDX @LOCAL04
    case 0xC05659: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:157 LDA a:player_position_buffer_entry::direction,X
    case 0xC0565B: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/unknown/C0/C052D4.asm:158 LDX @VIRTUAL02
    case 0xC0565E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:159 STA ENTITY_DIRECTIONS,X
    case 0xC05660: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/C0/C052D4.asm:160 LDX @LOCAL04
    case 0xC05663: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:161 LDA a:player_position_buffer_entry::tile_flags,X
    case 0xC05665: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C0/C052D4.asm:162 LDX @VIRTUAL02
    case 0xC05668: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:163 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0566A: cpu.execute_instruction<0x9D>(0x002FA8, 3); return true;
    // src/unknown/C0/C052D4.asm:164 LDA @LOCAL09
    case 0xC0566D: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C0/C052D4.asm:165 SEC
    case 0xC0566F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:166 SBC #16
    case 0xC05670: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/C0/C052D4.asm:166 SBC #16
    // Overlapping static entry reached from 0xC05670.
    case 0xC05672: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C052D4.asm:167 STA @LOCAL09
    case 0xC05673: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C0/C052D4.asm:168 LDX @LOCAL04
    case 0xC05675: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:169 TXA
    case 0xC05677: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:170 SEC
    case 0xC05678: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:171 SBC #192
    case 0xC05679: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000C0, 2); else cpu.execute_instruction<0xE9>(0x0000C0, 3); return true;
    // src/unknown/C0/C052D4.asm:171 SBC #192
    // Overlapping static entry reached from 0xC05679.
    case 0xC0567B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C052D4.asm:172 TAX
    case 0xC0567C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:173 STX @LOCAL04
    case 0xC0567D: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C052D4.asm:174 LDA @LOCAL03
    case 0xC0567F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C052D4.asm:175 INC
    case 0xC05681: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C052D4.asm:176 STA @LOCAL03
    case 0xC05682: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C052D4.asm:178 LDA GAME_STATE+game_state::party_count
    case 0xC05684: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C0/C052D4.asm:179 AND #$00FF
    case 0xC05687: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C052D4.asm:179 AND #$00FF
    // Overlapping static entry reached from 0xC05687.
    case 0xC05689: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C052D4.asm:180 STA @VIRTUAL02
    case 0xC0568A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C052D4.asm:181 LDA @LOCAL03
    case 0xC0568C: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C052D4.asm:182 CMP @VIRTUAL02
    case 0xC0568E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C052D4.asm:183 BCCL @UNKNOWN2
    case 0xC05690: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C052D4.asm:183 BCCL @UNKNOWN2
    case 0xC05692: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C052D4.asm:183 BCCL @UNKNOWN2
    case 0xC05694: cpu.execute_instruction<0x4C>(0x00560A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C052D4.asm:184 END_C_FUNCTION
    case 0xC05697: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C052D4.asm:184 END_C_FUNCTION
    case 0xC05698: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0546B.asm (unresolved).
bool execute_unresolved_c0_c0546b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0546B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05699: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0546B.asm:8 END_STACK_VARS
    case 0xC0569B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0546B.asm:8 END_STACK_VARS
    case 0xC0569C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0546B.asm:8 END_STACK_VARS
    case 0xC0569D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0546B.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0569D.
    case 0xC0569F: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0546B.asm:8 END_STACK_VARS
    case 0xC056A0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:9 LDY #0
    case 0xC056A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0546B.asm:9 LDY #0
    // Overlapping static entry reached from 0xC056A1.
    case 0xC056A3: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C0546B.asm:10 STY @LOCAL01
    case 0xC056A4: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0546B.asm:11 TYA
    case 0xC056A6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:12 STA @LOCAL00
    case 0xC056A7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0546B.asm:13 BRA @UNKNOWN4
    case 0xC056A9: cpu.execute_instruction<0x80>(0x00003B, 2); return true;
    // src/unknown/C0/C0546B.asm:15 CLC
    case 0xC056AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:16 ADC #.LOWORD(GAME_STATE)
    case 0xC056AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C0/C0546B.asm:16 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC056AC.
    case 0xC056AE: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:17 TAX
    case 0xC056AF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:18 LDA __BSS_START__ + game_state::unknown96,X
    case 0xC056B0: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C0/C0546B.asm:19 AND #$00FF
    case 0xC056B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0546B.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC056B3.
    case 0xC056B5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0546B.asm:20 CLC
    case 0xC056B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:21 SBC #4
    case 0xC056B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C0546B.asm:21 SBC #4
    // Overlapping static entry reached from 0xC056B7.
    case 0xC056B9: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C0/C0546B.asm:22 BRANCHGTS @UNKNOWN3
    case 0xC056BA: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C0/C0546B.asm:22 BRANCHGTS @UNKNOWN3
    case 0xC056BC: cpu.execute_instruction<0x10>(0x000023, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C0/C0546B.asm:22 BRANCHGTS @UNKNOWN3
    case 0xC056BE: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C0/C0546B.asm:22 BRANCHGTS @UNKNOWN3
    case 0xC056C0: cpu.execute_instruction<0x30>(0x00001F, 2); return true;
    // src/unknown/C0/C0546B.asm:23 LDA __BSS_START__ + game_state::player_controlled_party_members,X
    case 0xC056C2: cpu.execute_instruction<0xBD>(0x000099, 3); return true;
    // src/unknown/C0/C0546B.asm:24 AND #$00FF
    case 0xC056C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0546B.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC056C5.
    case 0xC056C7: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C0546B.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC056C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C0/C0546B.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC056C8.
    case 0xC056CA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0546B.asm:26 JSL MULT168
    case 0xC056CB: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C0546B.asm:27 TAX
    case 0xC056CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:28 LDA PARTY_CHARACTERS+char_struct::level,X
    case 0xC056D0: cpu.execute_instruction<0xBD>(0x009C83, 3); return true;
    // src/unknown/C0/C0546B.asm:29 AND #$00FF
    case 0xC056D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0546B.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC056D3.
    case 0xC056D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0546B.asm:30 STA @VIRTUAL02
    case 0xC056D6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0546B.asm:31 LDY @LOCAL01
    case 0xC056D8: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C0546B.asm:32 TYA
    case 0xC056DA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:33 CLC
    case 0xC056DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:34 ADC @VIRTUAL02
    case 0xC056DC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0546B.asm:35 TAY
    case 0xC056DE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:36 STY @LOCAL01
    case 0xC056DF: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C0546B.asm:38 LDA @LOCAL00
    case 0xC056E1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0546B.asm:39 INC
    case 0xC056E3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0546B.asm:40 STA @LOCAL00
    case 0xC056E4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0546B.asm:42 LDA GAME_STATE+game_state::party_count
    case 0xC056E6: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C0/C0546B.asm:43 AND #$00FF
    case 0xC056E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0546B.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC056E9.
    case 0xC056EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0546B.asm:44 STA @VIRTUAL02
    case 0xC056EC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0546B.asm:45 LDA @LOCAL00
    case 0xC056EE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0546B.asm:46 CMP @VIRTUAL02
    case 0xC056F0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C0546B.asm:47 BNE @UNKNOWN0
    case 0xC056F2: cpu.execute_instruction<0xD0>(0x0000B7, 2); return true;
    // src/unknown/C0/C0546B.asm:48 TYA
    case 0xC056F4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0546B.asm:49 END_C_FUNCTION
    case 0xC056F5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0546B.asm:49 END_C_FUNCTION
    case 0xC056F6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C054C9.asm (unresolved).
bool execute_unresolved_c0_c054c9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C054C9.asm:3 BEGIN_C_FUNCTION
    case 0xC056F7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    case 0xC056F9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    case 0xC056FA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    case 0xC056FB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    case 0xC056FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC056FC.
    case 0xC056FE: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    case 0xC056FF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C054C9.asm:10 END_STACK_VARS
    case 0xC05700: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C054C9.asm:11 STX @LOCAL01
    case 0xC05701: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C054C9.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC056FE.
    case 0xC05702: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/unknown/C0/C054C9.asm:12 STA @LOCAL00
    case 0xC05703: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C054C9.asm:12 STA @LOCAL00
    // Overlapping static entry reached from 0xC05702.
    case 0xC05704: cpu.execute_instruction<0x0E>(0x003F29, 3); return true;
    // src/unknown/C0/C054C9.asm:13 AND #$003F
    case 0xC05705: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C054C9.asm:13 AND #$003F
    // Overlapping static entry reached from 0xC05705.
    case 0xC05707: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C054C9.asm:14 STA @VIRTUAL02
    case 0xC05708: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C054C9.asm:15 TXA
    case 0xC0570A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C054C9.asm:16 AND #$003F
    case 0xC0570B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C054C9.asm:16 AND #$003F
    // Overlapping static entry reached from 0xC0570B.
    case 0xC0570D: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C0/C054C9.asm:17 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0570E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C0/C054C9.asm:17 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC0570F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C0/C054C9.asm:17 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC05710: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C0/C054C9.asm:17 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC05711: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C0/C054C9.asm:17 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC05712: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C0/C054C9.asm:17 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC05713: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C054C9.asm:18 CLC
    case 0xC05714: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C054C9.asm:19 ADC @VIRTUAL02
    case 0xC05715: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C054C9.asm:20 TAX
    case 0xC05717: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C054C9.asm:21 LDA LOADED_COLLISION_TILES,X
    case 0xC05718: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C054C9.asm:22 AND #$00FF
    case 0xC0571B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C054C9.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC0571B.
    case 0xC0571D: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C054C9.asm:23 TAY
    case 0xC0571E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C054C9.asm:24 AND #$0010
    case 0xC0571F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/unknown/C0/C054C9.asm:24 AND #$0010
    // Overlapping static entry reached from 0xC0571F.
    case 0xC05721: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C054C9.asm:25 BEQ @UNKNOWN0
    case 0xC05722: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C054C9.asm:26 LDA @LOCAL00
    case 0xC05724: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C054C9.asm:27 STA LADDER_STAIRS_TILE_X
    case 0xC05726: cpu.execute_instruction<0x8D>(0x00612E, 3); return true;
    // src/unknown/C0/C054C9.asm:28 LDX @LOCAL01
    case 0xC05729: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C054C9.asm:29 STX LADDER_STAIRS_TILE_Y
    case 0xC0572B: cpu.execute_instruction<0x8E>(0x006130, 3); return true;
    // src/unknown/C0/C054C9.asm:31 TYA
    case 0xC0572E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C054C9.asm:32 END_C_FUNCTION
    case 0xC0572F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C054C9.asm:32 END_C_FUNCTION
    case 0xC05730: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05503.asm (unresolved).
bool execute_unresolved_c0_c05503_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05503.asm:3 BEGIN_C_FUNCTION
    case 0xC05731: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    case 0xC05733: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    case 0xC05734: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    case 0xC05735: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    case 0xC05736: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC05736.
    case 0xC05738: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    case 0xC05739: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05503.asm:10 END_STACK_VARS
    case 0xC0573A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:11 TAY
    case 0xC0573B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:12 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC0573C: cpu.execute_instruction<0xAD>(0x00612A, 3); return true;
    // src/unknown/C0/C05503.asm:13 STA @LOCAL03
    case 0xC0573F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C05503.asm:14 TXA
    case 0xC05741: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:15 ASL
    case 0xC05742: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:16 TAX
    case 0xC05743: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:17 LDA f:UNKNOWN_C42AA7,X
    case 0xC05744: cpu.execute_instruction<0xBF>(0xC429E5, 4); return true;
    // src/unknown/C0/C05503.asm:18 STA @LOCAL02
    case 0xC05748: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05503.asm:19 LDA CHECKED_COLLISION_TOP_Y
    case 0xC0574A: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C05503.asm:20 LSR
    case 0xC0574D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:21 LSR
    case 0xC0574E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:22 LSR
    case 0xC0574F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:23 STA @VIRTUAL04
    case 0xC05750: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05503.asm:24 TYA
    case 0xC05752: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:25 LSR
    case 0xC05753: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:26 LSR
    case 0xC05754: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:27 LSR
    case 0xC05755: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:28 AND #$003F
    case 0xC05756: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05503.asm:28 AND #$003F
    // Overlapping static entry reached from 0xC05756.
    case 0xC05758: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05503.asm:29 STA @VIRTUAL02
    case 0xC05759: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:30 LDA @VIRTUAL04
    case 0xC0575B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05503.asm:31 AND #$003F
    case 0xC0575D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05503.asm:31 AND #$003F
    // Overlapping static entry reached from 0xC0575D.
    case 0xC0575F: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C05503.asm:32 ASL
    case 0xC05760: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:33 ASL
    case 0xC05761: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:34 ASL
    case 0xC05762: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:35 ASL
    case 0xC05763: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:36 ASL
    case 0xC05764: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:37 ASL
    case 0xC05765: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:38 CLC
    case 0xC05766: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:39 ADC @VIRTUAL02
    case 0xC05767: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:40 TAX
    case 0xC05769: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:41 LDA LOADED_COLLISION_TILES,X
    case 0xC0576A: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C05503.asm:42 AND #$00FF
    case 0xC0576D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05503.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC0576D.
    case 0xC0576F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05503.asm:43 STA @VIRTUAL02
    case 0xC05770: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:44 LDA @LOCAL03
    case 0xC05772: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C05503.asm:45 ORA @VIRTUAL02
    case 0xC05774: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:46 STA @VIRTUAL02
    case 0xC05776: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:47 STA @LOCAL01
    case 0xC05778: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05503.asm:48 TYA
    case 0xC0577A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:49 CLC
    case 0xC0577B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:50 ADC #7
    case 0xC0577C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C0/C05503.asm:50 ADC #7
    // Overlapping static entry reached from 0xC0577C.
    case 0xC0577E: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C05503.asm:51 LSR
    case 0xC0577F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:52 LSR
    case 0xC05780: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:53 LSR
    case 0xC05781: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:54 TAX
    case 0xC05782: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:55 STX @LOCAL03
    case 0xC05783: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C05503.asm:56 LDA #0
    case 0xC05785: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05503.asm:56 LDA #0
    // Overlapping static entry reached from 0xC05785.
    case 0xC05787: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05503.asm:57 STA @LOCAL00
    case 0xC05788: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05503.asm:58 BRA @UNKNOWN1
    case 0xC0578A: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C0/C05503.asm:60 TXA
    case 0xC0578C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:61 AND #$003F
    case 0xC0578D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05503.asm:61 AND #$003F
    // Overlapping static entry reached from 0xC0578D.
    case 0xC0578F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05503.asm:62 STA @VIRTUAL02
    case 0xC05790: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:63 LDA @VIRTUAL04
    case 0xC05792: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05503.asm:64 AND #$003F
    case 0xC05794: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05503.asm:64 AND #$003F
    // Overlapping static entry reached from 0xC05794.
    case 0xC05796: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C05503.asm:65 ASL
    case 0xC05797: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:66 ASL
    case 0xC05798: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:67 ASL
    case 0xC05799: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:68 ASL
    case 0xC0579A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:69 ASL
    case 0xC0579B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:70 ASL
    case 0xC0579C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:71 CLC
    case 0xC0579D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:72 ADC @VIRTUAL02
    case 0xC0579E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:73 TAX
    case 0xC057A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:74 LDA LOADED_COLLISION_TILES,X
    case 0xC057A1: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C05503.asm:75 AND #$00FF
    case 0xC057A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05503.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC057A4.
    case 0xC057A6: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C05503.asm:76 PHA
    case 0xC057A7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:77 LDA @LOCAL01
    case 0xC057A8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05503.asm:78 STA @VIRTUAL02
    case 0xC057AA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:79 PLY
    case 0xC057AC: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:80 STY @VIRTUAL02
    case 0xC057AD: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:81 ORA @VIRTUAL02
    case 0xC057AF: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:82 STA @VIRTUAL02
    case 0xC057B1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:83 STA @LOCAL01
    case 0xC057B3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05503.asm:84 LDX @LOCAL03
    case 0xC057B5: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C05503.asm:85 INX
    case 0xC057B7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:86 STX @LOCAL03
    case 0xC057B8: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C05503.asm:87 LDA @LOCAL00
    case 0xC057BA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05503.asm:88 INC
    case 0xC057BC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05503.asm:89 STA @LOCAL00
    case 0xC057BD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05503.asm:91 CMP @LOCAL02
    case 0xC057BF: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // src/unknown/C0/C05503.asm:92 BCC @UNKNOWN0
    case 0xC057C1: cpu.execute_instruction<0x90>(0x0000C9, 2); return true;
    // src/unknown/C0/C05503.asm:93 LDA @VIRTUAL02
    case 0xC057C3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05503.asm:94 STA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC057C5: cpu.execute_instruction<0x8D>(0x00612A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05503.asm:95 END_C_FUNCTION
    case 0xC057C8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05503.asm:95 END_C_FUNCTION
    case 0xC057C9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0559C.asm (unresolved).
bool execute_unresolved_c0_c0559c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0559C.asm:3 BEGIN_C_FUNCTION
    case 0xC057CA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    case 0xC057CC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    case 0xC057CD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    case 0xC057CE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    case 0xC057CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC057CF.
    case 0xC057D1: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    case 0xC057D2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0559C.asm:9 END_STACK_VARS
    case 0xC057D3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:10 STA @LOCAL02
    case 0xC057D4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0559C.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC057D1.
    case 0xC057D5: cpu.execute_instruction<0x12>(0x0000AC, 2); return true;
    // src/unknown/C0/C0559C.asm:11 LDY TEMP_ENTITY_SURFACE_FLAGS
    case 0xC057D6: cpu.execute_instruction<0xAC>(0x00612A, 3); return true;
    // src/unknown/C0/C0559C.asm:11 LDY TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC057D5.
    case 0xC057D7: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:11 LDY TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC057D7.
    case 0xC057D8: cpu.execute_instruction<0x61>(0x00008A, 2); return true;
    // src/unknown/C0/C0559C.asm:12 TXA
    case 0xC057D9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:13 ASL
    case 0xC057DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:14 TAX
    case 0xC057DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:15 LDA f:UNKNOWN_C42AA7,X
    case 0xC057DC: cpu.execute_instruction<0xBF>(0xC429E5, 4); return true;
    // src/unknown/C0/C0559C.asm:16 STA @VIRTUAL04
    case 0xC057E0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0559C.asm:17 LDA f:UNKNOWN_C42AC9,X
    case 0xC057E2: cpu.execute_instruction<0xBF>(0xC42A07, 4); return true;
    // src/unknown/C0/C0559C.asm:18 ASL
    case 0xC057E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:19 ASL
    case 0xC057E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:20 ASL
    case 0xC057E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:21 CLC
    case 0xC057E9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:22 ADC CHECKED_COLLISION_TOP_Y
    case 0xC057EA: cpu.execute_instruction<0x6D>(0x006134, 3); return true;
    // src/unknown/C0/C0559C.asm:23 DEC
    case 0xC057ED: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:24 LSR
    case 0xC057EE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:25 LSR
    case 0xC057EF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:26 LSR
    case 0xC057F0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:27 STA @VIRTUAL02
    case 0xC057F1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:28 STA @LOCAL01
    case 0xC057F3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0559C.asm:29 LDA @LOCAL02
    case 0xC057F5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0559C.asm:30 LSR
    case 0xC057F7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:31 LSR
    case 0xC057F8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:32 LSR
    case 0xC057F9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:33 AND #$003F
    case 0xC057FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0559C.asm:33 AND #$003F
    // Overlapping static entry reached from 0xC057FA.
    case 0xC057FC: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C0559C.asm:34 PHA
    case 0xC057FD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:35 LDA @VIRTUAL02
    case 0xC057FE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:36 AND #$003F
    case 0xC05800: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0559C.asm:36 AND #$003F
    // Overlapping static entry reached from 0xC05800.
    case 0xC05802: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C0559C.asm:37 ASL
    case 0xC05803: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:38 ASL
    case 0xC05804: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:39 ASL
    case 0xC05805: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:40 ASL
    case 0xC05806: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:41 ASL
    case 0xC05807: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:42 ASL
    case 0xC05808: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:43 PLX
    case 0xC05809: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:44 STX @VIRTUAL02
    case 0xC0580A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:45 CLC
    case 0xC0580C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:46 ADC @VIRTUAL02
    case 0xC0580D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:47 TAX
    case 0xC0580F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:48 LDA LOADED_COLLISION_TILES,X
    case 0xC05810: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C0559C.asm:49 AND #$00FF
    case 0xC05813: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0559C.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC05813.
    case 0xC05815: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0559C.asm:50 STA @VIRTUAL02
    case 0xC05816: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:51 TYA
    case 0xC05818: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:52 ORA @VIRTUAL02
    case 0xC05819: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:53 TAY
    case 0xC0581B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:54 LDA @LOCAL02
    case 0xC0581C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0559C.asm:55 CLC
    case 0xC0581E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:56 ADC #7
    case 0xC0581F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C0/C0559C.asm:56 ADC #7
    // Overlapping static entry reached from 0xC0581F.
    case 0xC05821: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C0559C.asm:57 LSR
    case 0xC05822: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:58 LSR
    case 0xC05823: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:59 LSR
    case 0xC05824: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:60 TAX
    case 0xC05825: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:61 STX @LOCAL02
    case 0xC05826: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0559C.asm:62 LDA #0
    case 0xC05828: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0559C.asm:62 LDA #0
    // Overlapping static entry reached from 0xC05828.
    case 0xC0582A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0559C.asm:63 STA @LOCAL00
    case 0xC0582B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0559C.asm:64 BRA @UNKNOWN1
    case 0xC0582D: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C0/C0559C.asm:66 TXA
    case 0xC0582F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:67 AND #$003F
    case 0xC05830: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0559C.asm:67 AND #$003F
    // Overlapping static entry reached from 0xC05830.
    case 0xC05832: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C0559C.asm:68 PHA
    case 0xC05833: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:69 LDA @LOCAL01
    case 0xC05834: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0559C.asm:70 STA @VIRTUAL02
    case 0xC05836: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:71 AND #$003F
    case 0xC05838: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0559C.asm:71 AND #$003F
    // Overlapping static entry reached from 0xC05838.
    case 0xC0583A: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C0559C.asm:72 ASL
    case 0xC0583B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:73 ASL
    case 0xC0583C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:74 ASL
    case 0xC0583D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:75 ASL
    case 0xC0583E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:76 ASL
    case 0xC0583F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:77 ASL
    case 0xC05840: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:78 PLX
    case 0xC05841: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:79 STX @VIRTUAL02
    case 0xC05842: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:80 CLC
    case 0xC05844: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:81 ADC @VIRTUAL02
    case 0xC05845: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:82 TAX
    case 0xC05847: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:83 LDA LOADED_COLLISION_TILES,X
    case 0xC05848: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C0559C.asm:84 AND #$00FF
    case 0xC0584B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0559C.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC0584B.
    case 0xC0584D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0559C.asm:85 STA @VIRTUAL02
    case 0xC0584E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:86 TYA
    case 0xC05850: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:87 ORA @VIRTUAL02
    case 0xC05851: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0559C.asm:88 TAY
    case 0xC05853: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:89 LDX @LOCAL02
    case 0xC05854: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C0559C.asm:90 INX
    case 0xC05856: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:91 STX @LOCAL02
    case 0xC05857: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0559C.asm:92 LDA @LOCAL00
    case 0xC05859: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0559C.asm:93 INC
    case 0xC0585B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0559C.asm:94 STA @LOCAL00
    case 0xC0585C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0559C.asm:96 CMP @VIRTUAL04
    case 0xC0585E: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C0/C0559C.asm:97 BCC @UNKNOWN0
    case 0xC05860: cpu.execute_instruction<0x90>(0x0000CD, 2); return true;
    // src/unknown/C0/C0559C.asm:98 STY TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05862: cpu.execute_instruction<0x8C>(0x00612A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0559C.asm:99 END_C_FUNCTION
    case 0xC05865: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C0559C.asm:99 END_C_FUNCTION
    case 0xC05866: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05639.asm (unresolved).
bool execute_unresolved_c0_c05639_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05639.asm:3 BEGIN_C_FUNCTION
    case 0xC05867: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    case 0xC05869: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    case 0xC0586A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    case 0xC0586B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    case 0xC0586C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0586C.
    case 0xC0586E: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    case 0xC0586F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05639.asm:11 END_STACK_VARS
    case 0xC05870: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:12 TAY
    case 0xC05871: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:13 TXA
    case 0xC05872: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:14 ASL
    case 0xC05873: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:15 TAX
    case 0xC05874: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:16 LDA f:UNKNOWN_C42AC9,X
    case 0xC05875: cpu.execute_instruction<0xBF>(0xC42A07, 4); return true;
    // src/unknown/C0/C05639.asm:17 STA @LOCAL03
    case 0xC05879: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C05639.asm:18 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC0587B: cpu.execute_instruction<0xAD>(0x00612A, 3); return true;
    // src/unknown/C0/C05639.asm:19 STA @LOCAL02
    case 0xC0587E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05639.asm:20 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05880: cpu.execute_instruction<0xAD>(0x006132, 3); return true;
    // src/unknown/C0/C05639.asm:21 LSR
    case 0xC05883: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:22 LSR
    case 0xC05884: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:23 LSR
    case 0xC05885: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:24 STA @VIRTUAL04
    case 0xC05886: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05639.asm:25 AND #$003F
    case 0xC05888: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05639.asm:25 AND #$003F
    // Overlapping static entry reached from 0xC05888.
    case 0xC0588A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05639.asm:26 STA @VIRTUAL02
    case 0xC0588B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:27 TYA
    case 0xC0588D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:28 LSR
    case 0xC0588E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:29 LSR
    case 0xC0588F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:30 LSR
    case 0xC05890: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:31 AND #$003F
    case 0xC05891: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05639.asm:31 AND #$003F
    // Overlapping static entry reached from 0xC05891.
    case 0xC05893: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C05639.asm:32 ASL
    case 0xC05894: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:33 ASL
    case 0xC05895: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:34 ASL
    case 0xC05896: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:35 ASL
    case 0xC05897: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:36 ASL
    case 0xC05898: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:37 ASL
    case 0xC05899: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:38 CLC
    case 0xC0589A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:39 ADC @VIRTUAL02
    case 0xC0589B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:40 TAX
    case 0xC0589D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:41 LDA LOADED_COLLISION_TILES,X
    case 0xC0589E: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C05639.asm:42 AND #$00FF
    case 0xC058A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05639.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC058A1.
    case 0xC058A3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05639.asm:43 STA @VIRTUAL02
    case 0xC058A4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:44 LDA @LOCAL02
    case 0xC058A6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C05639.asm:45 ORA @VIRTUAL02
    case 0xC058A8: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:46 STA @VIRTUAL02
    case 0xC058AA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:47 STA @LOCAL01
    case 0xC058AC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05639.asm:48 TYA
    case 0xC058AE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:49 CLC
    case 0xC058AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:50 ADC #7
    case 0xC058B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C0/C05639.asm:50 ADC #7
    // Overlapping static entry reached from 0xC058B0.
    case 0xC058B2: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C05639.asm:51 LSR
    case 0xC058B3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:52 LSR
    case 0xC058B4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:53 LSR
    case 0xC058B5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:54 TAX
    case 0xC058B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:55 STX @LOCAL02
    case 0xC058B7: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C05639.asm:56 LDA #0
    case 0xC058B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05639.asm:56 LDA #0
    // Overlapping static entry reached from 0xC058B9.
    case 0xC058BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05639.asm:57 STA @LOCAL00
    case 0xC058BC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05639.asm:58 BRA @UNKNOWN1
    case 0xC058BE: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C0/C05639.asm:60 LDA @VIRTUAL04
    case 0xC058C0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05639.asm:61 AND #$003F
    case 0xC058C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05639.asm:61 AND #$003F
    // Overlapping static entry reached from 0xC058C2.
    case 0xC058C4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05639.asm:62 STA @VIRTUAL02
    case 0xC058C5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:63 TXA
    case 0xC058C7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:64 AND #$003F
    case 0xC058C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05639.asm:64 AND #$003F
    // Overlapping static entry reached from 0xC058C8.
    case 0xC058CA: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C05639.asm:65 ASL
    case 0xC058CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:66 ASL
    case 0xC058CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:67 ASL
    case 0xC058CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:68 ASL
    case 0xC058CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:69 ASL
    case 0xC058CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:70 ASL
    case 0xC058D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:71 CLC
    case 0xC058D1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:72 ADC @VIRTUAL02
    case 0xC058D2: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:73 TAX
    case 0xC058D4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:74 LDA LOADED_COLLISION_TILES,X
    case 0xC058D5: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C05639.asm:75 AND #$00FF
    case 0xC058D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05639.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC058D8.
    case 0xC058DA: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C0/C05639.asm:76 PHA
    case 0xC058DB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:77 LDA @LOCAL01
    case 0xC058DC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05639.asm:78 STA @VIRTUAL02
    case 0xC058DE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:79 PLY
    case 0xC058E0: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:80 STY @VIRTUAL02
    case 0xC058E1: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:81 ORA @VIRTUAL02
    case 0xC058E3: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:82 STA @VIRTUAL02
    case 0xC058E5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:83 STA @LOCAL01
    case 0xC058E7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05639.asm:84 LDX @LOCAL02
    case 0xC058E9: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C05639.asm:85 INX
    case 0xC058EB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:86 STX @LOCAL02
    case 0xC058EC: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C05639.asm:87 LDA @LOCAL00
    case 0xC058EE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05639.asm:88 INC
    case 0xC058F0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05639.asm:89 STA @LOCAL00
    case 0xC058F1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05639.asm:91 CMP @LOCAL03
    case 0xC058F3: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C0/C05639.asm:92 BCC @UNKNOWN0
    case 0xC058F5: cpu.execute_instruction<0x90>(0x0000C9, 2); return true;
    // src/unknown/C0/C05639.asm:93 LDA @VIRTUAL02
    case 0xC058F7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05639.asm:94 STA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC058F9: cpu.execute_instruction<0x8D>(0x00612A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05639.asm:95 END_C_FUNCTION
    case 0xC058FC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05639.asm:95 END_C_FUNCTION
    case 0xC058FD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C056D0.asm (unresolved).
bool execute_unresolved_c0_c056d0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C056D0.asm:3 BEGIN_C_FUNCTION
    case 0xC058FE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    case 0xC05900: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    case 0xC05901: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    case 0xC05902: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    case 0xC05903: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC05903.
    case 0xC05905: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    case 0xC05906: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C056D0.asm:9 END_STACK_VARS
    case 0xC05907: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:10 STA @LOCAL02
    case 0xC05908: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C056D0.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC05905.
    case 0xC05909: cpu.execute_instruction<0x12>(0x0000AC, 2); return true;
    // src/unknown/C0/C056D0.asm:11 LDY TEMP_ENTITY_SURFACE_FLAGS
    case 0xC0590A: cpu.execute_instruction<0xAC>(0x00612A, 3); return true;
    // src/unknown/C0/C056D0.asm:11 LDY TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC05909.
    case 0xC0590B: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:11 LDY TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC0590B.
    case 0xC0590C: cpu.execute_instruction<0x61>(0x00008A, 2); return true;
    // src/unknown/C0/C056D0.asm:12 TXA
    case 0xC0590D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:13 ASL
    case 0xC0590E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:14 TAX
    case 0xC0590F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:15 LDA f:UNKNOWN_C42AC9,X
    case 0xC05910: cpu.execute_instruction<0xBF>(0xC42A07, 4); return true;
    // src/unknown/C0/C056D0.asm:16 STA @VIRTUAL04
    case 0xC05914: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C056D0.asm:17 LDA f:UNKNOWN_C42AA7,X
    case 0xC05916: cpu.execute_instruction<0xBF>(0xC429E5, 4); return true;
    // src/unknown/C0/C056D0.asm:18 ASL
    case 0xC0591A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:19 ASL
    case 0xC0591B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:20 ASL
    case 0xC0591C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:21 CLC
    case 0xC0591D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:22 ADC CHECKED_COLLISION_LEFT_X
    case 0xC0591E: cpu.execute_instruction<0x6D>(0x006132, 3); return true;
    // src/unknown/C0/C056D0.asm:23 DEC
    case 0xC05921: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:24 LSR
    case 0xC05922: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:25 LSR
    case 0xC05923: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:26 LSR
    case 0xC05924: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:27 STA @VIRTUAL02
    case 0xC05925: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:28 STA @LOCAL01
    case 0xC05927: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C056D0.asm:29 LDA @VIRTUAL02
    case 0xC05929: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:30 AND #$003F
    case 0xC0592B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C056D0.asm:30 AND #$003F
    // Overlapping static entry reached from 0xC0592B.
    case 0xC0592D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C056D0.asm:31 STA @VIRTUAL02
    case 0xC0592E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:32 LDA @LOCAL02
    case 0xC05930: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C056D0.asm:33 LSR
    case 0xC05932: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:34 LSR
    case 0xC05933: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:35 LSR
    case 0xC05934: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:36 AND #$003F
    case 0xC05935: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C056D0.asm:36 AND #$003F
    // Overlapping static entry reached from 0xC05935.
    case 0xC05937: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C056D0.asm:37 ASL
    case 0xC05938: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:38 ASL
    case 0xC05939: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:39 ASL
    case 0xC0593A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:40 ASL
    case 0xC0593B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:41 ASL
    case 0xC0593C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:42 ASL
    case 0xC0593D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:43 CLC
    case 0xC0593E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:44 ADC @VIRTUAL02
    case 0xC0593F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:45 TAX
    case 0xC05941: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:46 LDA LOADED_COLLISION_TILES,X
    case 0xC05942: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C056D0.asm:47 AND #$00FF
    case 0xC05945: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C056D0.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC05945.
    case 0xC05947: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C056D0.asm:48 STA @VIRTUAL02
    case 0xC05948: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:49 TYA
    case 0xC0594A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:50 ORA @VIRTUAL02
    case 0xC0594B: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:51 TAY
    case 0xC0594D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:52 LDA @LOCAL02
    case 0xC0594E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C056D0.asm:53 CLC
    case 0xC05950: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:54 ADC #7
    case 0xC05951: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C0/C056D0.asm:54 ADC #7
    // Overlapping static entry reached from 0xC05951.
    case 0xC05953: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C056D0.asm:55 LSR
    case 0xC05954: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:56 LSR
    case 0xC05955: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:57 LSR
    case 0xC05956: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:58 TAX
    case 0xC05957: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:59 STX @LOCAL02
    case 0xC05958: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C056D0.asm:60 LDA #0
    case 0xC0595A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C056D0.asm:60 LDA #0
    // Overlapping static entry reached from 0xC0595A.
    case 0xC0595C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C056D0.asm:61 STA @LOCAL00
    case 0xC0595D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C056D0.asm:62 BRA @UNKNOWN1
    case 0xC0595F: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C0/C056D0.asm:64 LDA @LOCAL01
    case 0xC05961: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C056D0.asm:65 STA @VIRTUAL02
    case 0xC05963: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:66 AND #$003F
    case 0xC05965: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C056D0.asm:66 AND #$003F
    // Overlapping static entry reached from 0xC05965.
    case 0xC05967: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C056D0.asm:67 STA @VIRTUAL02
    case 0xC05968: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:68 TXA
    case 0xC0596A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:69 AND #$003F
    case 0xC0596B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C056D0.asm:69 AND #$003F
    // Overlapping static entry reached from 0xC0596B.
    case 0xC0596D: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C056D0.asm:70 ASL
    case 0xC0596E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:71 ASL
    case 0xC0596F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:72 ASL
    case 0xC05970: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:73 ASL
    case 0xC05971: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:74 ASL
    case 0xC05972: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:75 ASL
    case 0xC05973: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:76 CLC
    case 0xC05974: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:77 ADC @VIRTUAL02
    case 0xC05975: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:78 TAX
    case 0xC05977: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:79 LDA LOADED_COLLISION_TILES,X
    case 0xC05978: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C056D0.asm:80 AND #$00FF
    case 0xC0597B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C056D0.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC0597B.
    case 0xC0597D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C056D0.asm:81 STA @VIRTUAL02
    case 0xC0597E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:82 TYA
    case 0xC05980: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:83 ORA @VIRTUAL02
    case 0xC05981: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C056D0.asm:84 TAY
    case 0xC05983: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:85 LDX @LOCAL02
    case 0xC05984: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C056D0.asm:86 INX
    case 0xC05986: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:87 STX @LOCAL02
    case 0xC05987: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C056D0.asm:88 LDA @LOCAL00
    case 0xC05989: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C056D0.asm:89 INC
    case 0xC0598B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C056D0.asm:90 STA @LOCAL00
    case 0xC0598C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C056D0.asm:92 CMP @VIRTUAL04
    case 0xC0598E: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C0/C056D0.asm:93 BCC @UNKNOWN0
    case 0xC05990: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/unknown/C0/C056D0.asm:94 STY TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05992: cpu.execute_instruction<0x8C>(0x00612A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C056D0.asm:95 END_C_FUNCTION
    case 0xC05995: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C056D0.asm:95 END_C_FUNCTION
    case 0xC05996: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05769.asm (unresolved).
bool execute_unresolved_c0_c05769_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05769.asm:3 BEGIN_C_FUNCTION
    case 0xC05997: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    case 0xC05999: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    case 0xC0599A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    case 0xC0599B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    case 0xC0599C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0599C.
    case 0xC0599E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    case 0xC0599F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05769.asm:11 END_STACK_VARS
    case 0xC059A0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:12 STA @VIRTUAL04
    case 0xC059A1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05769.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC0599E.
    case 0xC059A2: cpu.execute_instruction<0x04>(0x0000A0, 2); return true;
    // src/unknown/C0/C05769.asm:13 LDY #0
    case 0xC059A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C05769.asm:13 LDY #0
    // Overlapping static entry reached from 0xC059A2.
    case 0xC059A4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C05769.asm:13 LDY #0
    // Overlapping static entry reached from 0xC059A3.
    case 0xC059A5: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05769.asm:14 STY @LOCAL03
    case 0xC059A6: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C05769.asm:15 STY @VIRTUAL02
    case 0xC059A8: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C05769.asm:16 LDA @VIRTUAL02
    case 0xC059AA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05769.asm:17 STA @LOCAL02
    case 0xC059AC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05769.asm:18 BRA @UNKNOWN2
    case 0xC059AE: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/unknown/C0/C05769.asm:20 LDA @VIRTUAL04
    case 0xC059B0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05769.asm:21 AND #$0001
    case 0xC059B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C05769.asm:21 AND #$0001
    // Overlapping static entry reached from 0xC059B2.
    case 0xC059B4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05769.asm:22 BEQ @UNKNOWN1
    case 0xC059B5: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C0/C05769.asm:23 TYA
    case 0xC059B7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:24 ASL
    case 0xC059B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:25 STA @LOCAL01
    case 0xC059B9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05769.asm:26 TAX
    case 0xC059BB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:27 LDA f:UNKNOWN_C200C5,X
    case 0xC059BC: cpu.execute_instruction<0xBF>(0xC200C5, 4); return true;
    // src/unknown/C0/C05769.asm:28 CLC
    case 0xC059C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:29 ADC CHECKED_COLLISION_TOP_Y
    case 0xC059C1: cpu.execute_instruction<0x6D>(0x006134, 3); return true;
    // src/unknown/C0/C05769.asm:30 LSR
    case 0xC059C4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:31 LSR
    case 0xC059C5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:32 LSR
    case 0xC059C6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:33 TAX
    case 0xC059C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:34 STX @LOCAL00
    case 0xC059C8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C05769.asm:35 LDA @LOCAL01
    case 0xC059CA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05769.asm:36 TAX
    case 0xC059CC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:37 LDA f:UNKNOWN_C200B9,X
    case 0xC059CD: cpu.execute_instruction<0xBF>(0xC200B9, 4); return true;
    // src/unknown/C0/C05769.asm:38 CLC
    case 0xC059D1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:39 ADC CHECKED_COLLISION_LEFT_X
    case 0xC059D2: cpu.execute_instruction<0x6D>(0x006132, 3); return true;
    // src/unknown/C0/C05769.asm:40 LSR
    case 0xC059D5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:41 LSR
    case 0xC059D6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:42 LSR
    case 0xC059D7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:43 LDX @LOCAL00
    case 0xC059D8: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C05769.asm:44 JSR UNKNOWN_C054C9
    case 0xC059DA: cpu.execute_instruction<0x20>(0x0056F7, 3); return true;
    // src/unknown/C0/C05769.asm:45 STA @LOCAL00
    case 0xC059DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05769.asm:46 ORA @LOCAL02
    case 0xC059DF: cpu.execute_instruction<0x05>(0x000012, 2); return true;
    // src/unknown/C0/C05769.asm:47 STA @LOCAL02
    case 0xC059E1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05769.asm:48 LDA @LOCAL00
    case 0xC059E3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05769.asm:49 AND #$00C0
    case 0xC059E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C05769.asm:49 AND #$00C0
    // Overlapping static entry reached from 0xC059E5.
    case 0xC059E7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05769.asm:50 BEQ @UNKNOWN1
    case 0xC059E8: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C05769.asm:51 LDA @VIRTUAL02
    case 0xC059EA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05769.asm:52 ORA #$0040
    case 0xC059EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000040, 2); else cpu.execute_instruction<0x09>(0x000040, 3); return true;
    // src/unknown/C0/C05769.asm:52 ORA #$0040
    // Overlapping static entry reached from 0xC059EC.
    case 0xC059EE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05769.asm:53 STA @VIRTUAL02
    case 0xC059EF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05769.asm:55 LDA @VIRTUAL02
    case 0xC059F1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05769.asm:56 LSR
    case 0xC059F3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:57 STA @VIRTUAL02
    case 0xC059F4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05769.asm:58 LDA @VIRTUAL04
    case 0xC059F6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05769.asm:59 LSR
    case 0xC059F8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:60 STA @VIRTUAL04
    case 0xC059F9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05769.asm:61 LDY @LOCAL03
    case 0xC059FB: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C05769.asm:62 INY
    case 0xC059FD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C05769.asm:63 STY @LOCAL03
    case 0xC059FE: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C05769.asm:65 CPY #6
    case 0xC05A00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C0/C05769.asm:65 CPY #6
    // Overlapping static entry reached from 0xC05A00.
    case 0xC05A02: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C05769.asm:66 BCC @UNKNOWN0
    case 0xC05A03: cpu.execute_instruction<0x90>(0x0000AB, 2); return true;
    // src/unknown/C0/C05769.asm:67 LDA SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05A05: cpu.execute_instruction<0xAD>(0x00613A, 3); return true;
    // src/unknown/C0/C05769.asm:68 CMP #1
    case 0xC05A08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C05769.asm:68 CMP #1
    // Overlapping static entry reached from 0xC05A08.
    case 0xC05A0A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05769.asm:69 BNE @UNKNOWN3
    case 0xC05A0B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05769.asm:70 LDA @LOCAL02
    case 0xC05A0D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C05769.asm:71 STA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05A0F: cpu.execute_instruction<0x8D>(0x00612A, 3); return true;
    // src/unknown/C0/C05769.asm:73 LDA @VIRTUAL02
    case 0xC05A12: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05769.asm:74 END_C_FUNCTION
    case 0xC05A14: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05769.asm:74 END_C_FUNCTION
    case 0xC05A15: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C057E8.asm (unresolved).
bool execute_unresolved_c0_c057e8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C057E8.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC05A16: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C057E8.asm:4 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05A18: cpu.execute_instruction<0x9C>(0x00612A, 3); return true;
    // src/unknown/C0/C057E8.asm:5 INC SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05A1B: cpu.execute_instruction<0xEE>(0x00613A, 3); return true;
    // src/unknown/C0/C057E8.asm:6 LDA #$0007
    case 0xC05A1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C057E8.asm:6 LDA #$0007
    // Overlapping static entry reached from 0xC05A1E.
    case 0xC05A20: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C057E8.asm:7 JSR UNKNOWN_C05769
    case 0xC05A21: cpu.execute_instruction<0x20>(0x005997, 3); return true;
    // src/unknown/C0/C057E8.asm:8 STA NORTH_SOUTH_COLLISION_TEST_RESULT
    case 0xC05A24: cpu.execute_instruction<0x8D>(0x00613C, 3); return true;
    // src/unknown/C0/C057E8.asm:9 CMP #$0007
    case 0xC05A27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C057E8.asm:9 CMP #$0007
    // Overlapping static entry reached from 0xC05A27.
    case 0xC05A29: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C057E8.asm:10 BEQ @UNKNOWN0
    case 0xC05A2A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C057E8.asm:11 CMP #$0002
    case 0xC05A2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C057E8.asm:11 CMP #$0002
    // Overlapping static entry reached from 0xC05A2C.
    case 0xC05A2E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C057E8.asm:12 BNE @UNKNOWN1
    case 0xC05A2F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C057E8.asm:14 LDA #$FF00
    case 0xC05A31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C057E8.asm:14 LDA #$FF00
    // Overlapping static entry reached from 0xC05A31.
    case 0xC05A33: cpu.execute_instruction<0xFF>(0xC93380, 4); return true;
    // src/unknown/C0/C057E8.asm:15 BRA @UNKNOWN6
    case 0xC05A34: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C0/C057E8.asm:17 CMP #$0000
    case 0xC05A36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C057E8.asm:17 CMP #$0000
    // Overlapping static entry reached from 0xC05A33.
    case 0xC05A37: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C057E8.asm:17 CMP #$0000
    // Overlapping static entry reached from 0xC05A36.
    case 0xC05A38: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C057E8.asm:18 BNE @UNKNOWN2
    case 0xC05A39: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C057E8.asm:19 LDA #$FFFF
    case 0xC05A3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C057E8.asm:19 LDA #$FFFF
    // Overlapping static entry reached from 0xC05A3B.
    case 0xC05A3D: cpu.execute_instruction<0xFF>(0xC92980, 4); return true;
    // src/unknown/C0/C057E8.asm:20 BRA @UNKNOWN6
    case 0xC05A3E: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C057E8.asm:22 CMP #$0001
    case 0xC05A40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C057E8.asm:22 CMP #$0001
    // Overlapping static entry reached from 0xC05A3D.
    case 0xC05A41: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C057E8.asm:22 CMP #$0001
    // Overlapping static entry reached from 0xC05A40.
    case 0xC05A42: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C057E8.asm:23 BNE @UNKNOWN3
    case 0xC05A43: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C057E8.asm:24 LDA #$0001
    case 0xC05A45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C057E8.asm:24 LDA #$0001
    // Overlapping static entry reached from 0xC05A45.
    case 0xC05A47: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C057E8.asm:25 BRA @UNKNOWN6
    case 0xC05A48: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C057E8.asm:27 CMP #$0004
    case 0xC05A4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C057E8.asm:27 CMP #$0004
    // Overlapping static entry reached from 0xC05A4A.
    case 0xC05A4C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C057E8.asm:28 BNE @UNKNOWN4
    case 0xC05A4D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C057E8.asm:29 LDA #$0007
    case 0xC05A4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C057E8.asm:29 LDA #$0007
    // Overlapping static entry reached from 0xC05A4F.
    case 0xC05A51: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C057E8.asm:30 BRA @UNKNOWN6
    case 0xC05A52: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C057E8.asm:32 CMP #$0006
    case 0xC05A54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C057E8.asm:32 CMP #$0006
    // Overlapping static entry reached from 0xC05A54.
    case 0xC05A56: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C057E8.asm:33 BNE @UNKNOWN5
    case 0xC05A57: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C057E8.asm:34 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05A59: cpu.execute_instruction<0xAD>(0x006132, 3); return true;
    // src/unknown/C0/C057E8.asm:35 AND #$0007
    case 0xC05A5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C057E8.asm:35 AND #$0007
    // Overlapping static entry reached from 0xC05A5C.
    case 0xC05A5E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C057E8.asm:36 BNE @UNKNOWN5
    case 0xC05A5F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C057E8.asm:37 LDA #$0007
    case 0xC05A61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C057E8.asm:37 LDA #$0007
    // Overlapping static entry reached from 0xC05A61.
    case 0xC05A63: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C057E8.asm:38 BRA @UNKNOWN6
    case 0xC05A64: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C057E8.asm:40 LDA #$FFFF
    case 0xC05A66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C057E8.asm:40 LDA #$FFFF
    // Overlapping static entry reached from 0xC05A66.
    case 0xC05A68: cpu.execute_instruction<0xFF>(0x31C260, 4); return true;
    // src/unknown/C0/C057E8.asm:42 RTS
    case 0xC05A69: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0583C.asm (unresolved).
bool execute_unresolved_c0_c0583c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0583C.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC05A6A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0583C.asm:4 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05A6C: cpu.execute_instruction<0x9C>(0x00612A, 3); return true;
    // src/unknown/C0/C0583C.asm:5 INC SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05A6F: cpu.execute_instruction<0xEE>(0x00613A, 3); return true;
    // src/unknown/C0/C0583C.asm:6 LDA #$0038
    case 0xC05A72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000038, 2); else cpu.execute_instruction<0xA9>(0x000038, 3); return true;
    // src/unknown/C0/C0583C.asm:6 LDA #$0038
    // Overlapping static entry reached from 0xC05A72.
    case 0xC05A74: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C0583C.asm:7 JSR UNKNOWN_C05769
    case 0xC05A75: cpu.execute_instruction<0x20>(0x005997, 3); return true;
    // src/unknown/C0/C0583C.asm:8 STA NORTH_SOUTH_COLLISION_TEST_RESULT
    case 0xC05A78: cpu.execute_instruction<0x8D>(0x00613C, 3); return true;
    // src/unknown/C0/C0583C.asm:9 CMP #$0007
    case 0xC05A7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0583C.asm:9 CMP #$0007
    // Overlapping static entry reached from 0xC05A7B.
    case 0xC05A7D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0583C.asm:10 BEQ @UNKNOWN0
    case 0xC05A7E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0583C.asm:11 CMP #$0010
    case 0xC05A80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C0/C0583C.asm:11 CMP #$0010
    // Overlapping static entry reached from 0xC05A80.
    case 0xC05A82: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0583C.asm:12 BNE @UNKNOWN1
    case 0xC05A83: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0583C.asm:14 LDA #$FF00
    case 0xC05A85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C0583C.asm:14 LDA #$FF00
    // Overlapping static entry reached from 0xC05A85.
    case 0xC05A87: cpu.execute_instruction<0xFF>(0xC93380, 4); return true;
    // src/unknown/C0/C0583C.asm:15 BRA @UNKNOWN6
    case 0xC05A88: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C0/C0583C.asm:17 CMP #$0000
    case 0xC05A8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0583C.asm:17 CMP #$0000
    // Overlapping static entry reached from 0xC05A87.
    case 0xC05A8B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0583C.asm:17 CMP #$0000
    // Overlapping static entry reached from 0xC05A8A.
    case 0xC05A8C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0583C.asm:18 BNE @UNKNOWN2
    case 0xC05A8D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0583C.asm:19 LDA #$FFFF
    case 0xC05A8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0583C.asm:19 LDA #$FFFF
    // Overlapping static entry reached from 0xC05A8F.
    case 0xC05A91: cpu.execute_instruction<0xFF>(0xC92980, 4); return true;
    // src/unknown/C0/C0583C.asm:20 BRA @UNKNOWN6
    case 0xC05A92: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C0/C0583C.asm:22 CMP #$0008
    case 0xC05A94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C0583C.asm:22 CMP #$0008
    // Overlapping static entry reached from 0xC05A91.
    case 0xC05A95: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C0583C.asm:22 CMP #$0008
    // Overlapping static entry reached from 0xC05A94.
    case 0xC05A96: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0583C.asm:23 BNE @UNKNOWN3
    case 0xC05A97: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0583C.asm:24 LDA #$0003
    case 0xC05A99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C0583C.asm:24 LDA #$0003
    // Overlapping static entry reached from 0xC05A99.
    case 0xC05A9B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0583C.asm:25 BRA @UNKNOWN6
    case 0xC05A9C: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C0583C.asm:27 CMP #$0020
    case 0xC05A9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C0/C0583C.asm:27 CMP #$0020
    // Overlapping static entry reached from 0xC05A9E.
    case 0xC05AA0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0583C.asm:28 BNE @UNKNOWN4
    case 0xC05AA1: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0583C.asm:29 LDA #$0005
    case 0xC05AA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0583C.asm:29 LDA #$0005
    // Overlapping static entry reached from 0xC05AA3.
    case 0xC05AA5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0583C.asm:30 BRA @UNKNOWN6
    case 0xC05AA6: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C0583C.asm:32 CMP #$0030
    case 0xC05AA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/unknown/C0/C0583C.asm:32 CMP #$0030
    // Overlapping static entry reached from 0xC05AA8.
    case 0xC05AAA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0583C.asm:33 BNE @UNKNOWN5
    case 0xC05AAB: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C0583C.asm:34 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05AAD: cpu.execute_instruction<0xAD>(0x006132, 3); return true;
    // src/unknown/C0/C0583C.asm:35 AND #$0007
    case 0xC05AB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0583C.asm:35 AND #$0007
    // Overlapping static entry reached from 0xC05AB0.
    case 0xC05AB2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0583C.asm:36 BNE @UNKNOWN5
    case 0xC05AB3: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0583C.asm:37 LDA #$0005
    case 0xC05AB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0583C.asm:37 LDA #$0005
    // Overlapping static entry reached from 0xC05AB5.
    case 0xC05AB7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0583C.asm:38 BRA @UNKNOWN6
    case 0xC05AB8: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0583C.asm:40 LDA #$FFFF
    case 0xC05ABA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0583C.asm:40 LDA #$FFFF
    // Overlapping static entry reached from 0xC05ABA.
    case 0xC05ABC: cpu.execute_instruction<0xFF>(0x31C260, 4); return true;
    // src/unknown/C0/C0583C.asm:42 RTS
    case 0xC05ABD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05890.asm (unresolved).
bool execute_unresolved_c0_c05890_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05890.asm:3 BEGIN_C_FUNCTION
    case 0xC05ABE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05890.asm:9 END_STACK_VARS
    case 0xC05AC0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05890.asm:9 END_STACK_VARS
    case 0xC05AC1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05890.asm:9 END_STACK_VARS
    case 0xC05AC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05890.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC05AC2.
    case 0xC05AC4: cpu.execute_instruction<0xFF>(0xFFA05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05890.asm:9 END_STACK_VARS
    case 0xC05AC5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:10 LDY #.LOWORD(-1)
    case 0xC05AC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05890.asm:10 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05AC6.
    case 0xC05AC8: cpu.execute_instruction<0xFF>(0xA91284, 4); return true;
    // src/unknown/C0/C05890.asm:11 STY @LOCAL02
    case 0xC05AC9: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:12 LDA #0
    case 0xC05ACB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05890.asm:12 LDA #0
    // Overlapping static entry reached from 0xC05AC8.
    case 0xC05ACC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C05890.asm:12 LDA #0
    // Overlapping static entry reached from 0xC05ACB.
    case 0xC05ACD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05890.asm:13 STA @VIRTUAL02
    case 0xC05ACE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05890.asm:14 TAX
    case 0xC05AD0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:15 STX @LOCAL01
    case 0xC05AD1: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:16 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05AD3: cpu.execute_instruction<0x9C>(0x00612A, 3); return true;
    // src/unknown/C0/C05890.asm:17 LDA #1
    case 0xC05AD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C05890.asm:17 LDA #1
    // Overlapping static entry reached from 0xC05AD6.
    case 0xC05AD8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C05890.asm:18 STA SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05AD9: cpu.execute_instruction<0x8D>(0x00613A, 3); return true;
    // src/unknown/C0/C05890.asm:19 LDA #9
    case 0xC05ADC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C0/C05890.asm:19 LDA #9
    // Overlapping static entry reached from 0xC05ADC.
    case 0xC05ADE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C05890.asm:20 JSR UNKNOWN_C05769
    case 0xC05ADF: cpu.execute_instruction<0x20>(0x005997, 3); return true;
    // src/unknown/C0/C05890.asm:21 STA @LOCAL00
    case 0xC05AE2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05890.asm:22 CMP #0
    case 0xC05AE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C05890.asm:22 CMP #0
    // Overlapping static entry reached from 0xC05AE4.
    case 0xC05AE6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:23 BNE @UNKNOWN1
    case 0xC05AE7: cpu.execute_instruction<0xD0>(0x000024, 2); return true;
    // src/unknown/C0/C05890.asm:24 DEC CHECKED_COLLISION_LEFT_X
    case 0xC05AE9: cpu.execute_instruction<0xCE>(0x006132, 3); return true;
    // src/unknown/C0/C05890.asm:25 DEC CHECKED_COLLISION_LEFT_X
    case 0xC05AEC: cpu.execute_instruction<0xCE>(0x006132, 3); return true;
    // src/unknown/C0/C05890.asm:26 DEC CHECKED_COLLISION_LEFT_X
    case 0xC05AEF: cpu.execute_instruction<0xCE>(0x006132, 3); return true;
    // src/unknown/C0/C05890.asm:27 DEC CHECKED_COLLISION_LEFT_X
    case 0xC05AF2: cpu.execute_instruction<0xCE>(0x006132, 3); return true;
    // src/unknown/C0/C05890.asm:28 LDA #9
    case 0xC05AF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C0/C05890.asm:28 LDA #9
    // Overlapping static entry reached from 0xC05AF5.
    case 0xC05AF7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C05890.asm:29 JSR UNKNOWN_C05769
    case 0xC05AF8: cpu.execute_instruction<0x20>(0x005997, 3); return true;
    // src/unknown/C0/C05890.asm:30 STA @LOCAL00
    case 0xC05AFB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05890.asm:31 CMP #0
    case 0xC05AFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C05890.asm:31 CMP #0
    // Overlapping static entry reached from 0xC05AFD.
    case 0xC05AFF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:32 BNE @UNKNOWN0
    case 0xC05B00: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C05890.asm:33 LDA #6
    case 0xC05B02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C05890.asm:33 LDA #6
    // Overlapping static entry reached from 0xC05B02.
    case 0xC05B04: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C05890.asm:34 JMP @UNKNOWN14
    case 0xC05B05: cpu.execute_instruction<0x4C>(0x005C1B, 3); return true;
    // src/unknown/C0/C05890.asm:36 LDA #1
    case 0xC05B08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C05890.asm:36 LDA #1
    // Overlapping static entry reached from 0xC05B08.
    case 0xC05B0A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05890.asm:37 STA @VIRTUAL02
    case 0xC05B0B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05890.asm:39 LDA @LOCAL00
    case 0xC05B0D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05890.asm:40 AND #$0009
    case 0xC05B0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000009, 2); else cpu.execute_instruction<0x29>(0x000009, 3); return true;
    // src/unknown/C0/C05890.asm:40 AND #$0009
    // Overlapping static entry reached from 0xC05B0F.
    case 0xC05B11: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C05890.asm:41 CMP #9
    case 0xC05B12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C0/C05890.asm:41 CMP #9
    // Overlapping static entry reached from 0xC05B12.
    case 0xC05B14: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:42 BNE @UNKNOWN3
    case 0xC05B15: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/unknown/C0/C05890.asm:43 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05B17: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C05890.asm:44 AND #$0007
    case 0xC05B1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C05890.asm:44 AND #$0007
    // Overlapping static entry reached from 0xC05B1A.
    case 0xC05B1C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05890.asm:45 BEQ @UNKNOWN3
    case 0xC05B1D: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:46 LDA @VIRTUAL02
    case 0xC05B1F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05890.asm:47 BEQ @UNKNOWN2
    case 0xC05B21: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C05890.asm:48 LDA #6
    case 0xC05B23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C05890.asm:48 LDA #6
    // Overlapping static entry reached from 0xC05B23.
    case 0xC05B25: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C05890.asm:49 JMP @UNKNOWN14
    case 0xC05B26: cpu.execute_instruction<0x4C>(0x005C1B, 3); return true;
    // src/unknown/C0/C05890.asm:51 LDA #.LOWORD(-1)
    case 0xC05B29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05890.asm:51 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05B29.
    case 0xC05B2B: cpu.execute_instruction<0xFF>(0x5C1B4C, 4); return true;
    // src/unknown/C0/C05890.asm:52 JMP @UNKNOWN14
    case 0xC05B2C: cpu.execute_instruction<0x4C>(0x005C1B, 3); return true;
    // src/unknown/C0/C05890.asm:54 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05B2F: cpu.execute_instruction<0xAD>(0x006132, 3); return true;
    // src/unknown/C0/C05890.asm:55 SEC
    case 0xC05B32: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:56 SBC #4
    case 0xC05B33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C05890.asm:56 SBC #4
    // Overlapping static entry reached from 0xC05B33.
    case 0xC05B35: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C05890.asm:57 LSR
    case 0xC05B36: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:58 LSR
    case 0xC05B37: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:59 LSR
    case 0xC05B38: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:60 AND #$003F
    case 0xC05B39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05890.asm:60 AND #$003F
    // Overlapping static entry reached from 0xC05B39.
    case 0xC05B3B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05890.asm:61 STA @VIRTUAL04
    case 0xC05B3C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05890.asm:62 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05B3E: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C05890.asm:63 DEC
    case 0xC05B41: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:64 DEC
    case 0xC05B42: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:65 LSR
    case 0xC05B43: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:66 LSR
    case 0xC05B44: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:67 LSR
    case 0xC05B45: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:68 AND #$003F
    case 0xC05B46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05890.asm:68 AND #$003F
    // Overlapping static entry reached from 0xC05B46.
    case 0xC05B48: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C05890.asm:69 ASL
    case 0xC05B49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:70 ASL
    case 0xC05B4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:71 ASL
    case 0xC05B4B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:72 ASL
    case 0xC05B4C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:73 ASL
    case 0xC05B4D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:74 ASL
    case 0xC05B4E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:75 CLC
    case 0xC05B4F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:76 ADC @VIRTUAL04
    case 0xC05B50: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C05890.asm:77 TAX
    case 0xC05B52: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:78 LDA LOADED_COLLISION_TILES,X
    case 0xC05B53: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C05890.asm:79 AND #$00FF
    case 0xC05B56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05890.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC05B56.
    case 0xC05B58: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C05890.asm:80 AND #$00C0
    case 0xC05B59: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C05890.asm:80 AND #$00C0
    // Overlapping static entry reached from 0xC05B59.
    case 0xC05B5B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05890.asm:81 BEQ @UNKNOWN4
    case 0xC05B5C: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C05890.asm:82 LDX @LOCAL01
    case 0xC05B5E: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:83 TXA
    case 0xC05B60: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:84 ORA #$0001
    case 0xC05B61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000001, 2); else cpu.execute_instruction<0x09>(0x000001, 3); return true;
    // src/unknown/C0/C05890.asm:84 ORA #$0001
    // Overlapping static entry reached from 0xC05B61.
    case 0xC05B63: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C05890.asm:85 TAX
    case 0xC05B64: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:86 STX @LOCAL01
    case 0xC05B65: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:88 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05B67: cpu.execute_instruction<0xAD>(0x006132, 3); return true;
    // src/unknown/C0/C05890.asm:89 SEC
    case 0xC05B6A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:90 SBC #4
    case 0xC05B6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C05890.asm:90 SBC #4
    // Overlapping static entry reached from 0xC05B6B.
    case 0xC05B6D: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C05890.asm:91 LSR
    case 0xC05B6E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:92 LSR
    case 0xC05B6F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:93 LSR
    case 0xC05B70: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:94 AND #$003F
    case 0xC05B71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05890.asm:94 AND #$003F
    // Overlapping static entry reached from 0xC05B71.
    case 0xC05B73: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05890.asm:95 STA @VIRTUAL04
    case 0xC05B74: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05890.asm:96 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05B76: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C05890.asm:97 CLC
    case 0xC05B79: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:98 ADC #9
    case 0xC05B7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/unknown/C0/C05890.asm:98 ADC #9
    // Overlapping static entry reached from 0xC05B7A.
    case 0xC05B7C: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C05890.asm:99 LSR
    case 0xC05B7D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:100 LSR
    case 0xC05B7E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:101 LSR
    case 0xC05B7F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:102 AND #$003F
    case 0xC05B80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05890.asm:102 AND #$003F
    // Overlapping static entry reached from 0xC05B80.
    case 0xC05B82: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C05890.asm:103 ASL
    case 0xC05B83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:104 ASL
    case 0xC05B84: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:105 ASL
    case 0xC05B85: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:106 ASL
    case 0xC05B86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:107 ASL
    case 0xC05B87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:108 ASL
    case 0xC05B88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:109 CLC
    case 0xC05B89: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:110 ADC @VIRTUAL04
    case 0xC05B8A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C05890.asm:111 TAX
    case 0xC05B8C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:112 LDA LOADED_COLLISION_TILES,X
    case 0xC05B8D: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C05890.asm:113 AND #$00FF
    case 0xC05B90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05890.asm:113 AND #$00FF
    // Overlapping static entry reached from 0xC05B90.
    case 0xC05B92: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C05890.asm:114 AND #$00C0
    case 0xC05B93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C05890.asm:114 AND #$00C0
    // Overlapping static entry reached from 0xC05B93.
    case 0xC05B95: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05890.asm:115 BEQ @UNKNOWN5
    case 0xC05B96: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C05890.asm:116 LDX @LOCAL01
    case 0xC05B98: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:117 TXA
    case 0xC05B9A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:118 ORA #$0002
    case 0xC05B9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000002, 2); else cpu.execute_instruction<0x09>(0x000002, 3); return true;
    // src/unknown/C0/C05890.asm:118 ORA #$0002
    // Overlapping static entry reached from 0xC05B9B.
    case 0xC05B9D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C05890.asm:119 TAX
    case 0xC05B9E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:120 STX @LOCAL01
    case 0xC05B9F: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:122 LDA @LOCAL00
    case 0xC05BA1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05890.asm:123 CMP #9
    case 0xC05BA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C0/C05890.asm:123 CMP #9
    // Overlapping static entry reached from 0xC05BA3.
    case 0xC05BA5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05890.asm:124 BEQ @UNKNOWN6
    case 0xC05BA6: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C05890.asm:125 CMP #1
    case 0xC05BA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C05890.asm:125 CMP #1
    // Overlapping static entry reached from 0xC05BA8.
    case 0xC05BAA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05890.asm:126 BEQ @UNKNOWN10
    case 0xC05BAB: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/unknown/C0/C05890.asm:127 CMP #8
    case 0xC05BAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C05890.asm:127 CMP #8
    // Overlapping static entry reached from 0xC05BAD.
    case 0xC05BAF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05890.asm:128 BEQ @UNKNOWN11
    case 0xC05BB0: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/unknown/C0/C05890.asm:129 BRA @UNKNOWN12
    case 0xC05BB2: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/unknown/C0/C05890.asm:131 LDX @LOCAL01
    case 0xC05BB4: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:132 CPX #1
    case 0xC05BB6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C0/C05890.asm:132 CPX #1
    // Overlapping static entry reached from 0xC05BB6.
    case 0xC05BB8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:133 BNE @UNKNOWN7
    case 0xC05BB9: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C05890.asm:134 LDY #5
    case 0xC05BBB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C0/C05890.asm:134 LDY #5
    // Overlapping static entry reached from 0xC05BBB.
    case 0xC05BBD: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05890.asm:135 STY @LOCAL02
    case 0xC05BBE: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:136 BRA @UNKNOWN12
    case 0xC05BC0: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C0/C05890.asm:138 CPX #2
    case 0xC05BC2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/unknown/C0/C05890.asm:138 CPX #2
    // Overlapping static entry reached from 0xC05BC2.
    case 0xC05BC4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:139 BNE @UNKNOWN8
    case 0xC05BC5: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C05890.asm:140 LDY #7
    case 0xC05BC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/unknown/C0/C05890.asm:140 LDY #7
    // Overlapping static entry reached from 0xC05BC7.
    case 0xC05BC9: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05890.asm:141 STY @LOCAL02
    case 0xC05BCA: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:142 BRA @UNKNOWN12
    case 0xC05BCC: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C0/C05890.asm:144 CPX #0
    case 0xC05BCE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C05890.asm:144 CPX #0
    // Overlapping static entry reached from 0xC05BCE.
    case 0xC05BD0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:145 BNE @UNKNOWN12
    case 0xC05BD1: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/unknown/C0/C05890.asm:146 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05BD3: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C05890.asm:147 AND #$0007
    case 0xC05BD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C05890.asm:147 AND #$0007
    // Overlapping static entry reached from 0xC05BD6.
    case 0xC05BD8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C05890.asm:148 CMP #4
    case 0xC05BD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C05890.asm:148 CMP #4
    // Overlapping static entry reached from 0xC05BD9.
    case 0xC05BDB: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C05890.asm:149 BCS @UNKNOWN9
    case 0xC05BDC: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C0/C05890.asm:150 LDY #7
    case 0xC05BDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/unknown/C0/C05890.asm:150 LDY #7
    // Overlapping static entry reached from 0xC05BDE.
    case 0xC05BE0: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05890.asm:151 STY @LOCAL02
    case 0xC05BE1: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:152 BRA @UNKNOWN12
    case 0xC05BE3: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/unknown/C0/C05890.asm:154 LDY #5
    case 0xC05BE5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C0/C05890.asm:154 LDY #5
    // Overlapping static entry reached from 0xC05BE5.
    case 0xC05BE7: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05890.asm:155 STY @LOCAL02
    case 0xC05BE8: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:156 BRA @UNKNOWN12
    case 0xC05BEA: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C0/C05890.asm:158 LDX @LOCAL01
    case 0xC05BEC: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:159 TXA
    case 0xC05BEE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:160 AND #$0002
    case 0xC05BEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C05890.asm:160 AND #$0002
    // Overlapping static entry reached from 0xC05BEF.
    case 0xC05BF1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:161 BNE @UNKNOWN12
    case 0xC05BF2: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/unknown/C0/C05890.asm:162 LDY #5
    case 0xC05BF4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C0/C05890.asm:162 LDY #5
    // Overlapping static entry reached from 0xC05BF4.
    case 0xC05BF6: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05890.asm:163 STY @LOCAL02
    case 0xC05BF7: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:164 BRA @UNKNOWN12
    case 0xC05BF9: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C05890.asm:166 LDX @LOCAL01
    case 0xC05BFB: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05890.asm:167 TXA
    case 0xC05BFD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05890.asm:168 AND #$0001
    case 0xC05BFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C05890.asm:168 AND #$0001
    // Overlapping static entry reached from 0xC05BFE.
    case 0xC05C00: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05890.asm:169 BNE @UNKNOWN12
    case 0xC05C01: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05890.asm:170 LDY #7
    case 0xC05C03: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000007, 2); else cpu.execute_instruction<0xA0>(0x000007, 3); return true;
    // src/unknown/C0/C05890.asm:170 LDY #7
    // Overlapping static entry reached from 0xC05C03.
    case 0xC05C05: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C05890.asm:171 STY @LOCAL02
    case 0xC05C06: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:173 LDA @VIRTUAL02
    case 0xC05C08: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05890.asm:174 BEQ @UNKNOWN13
    case 0xC05C0A: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C05890.asm:175 LDY @LOCAL02
    case 0xC05C0C: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:176 CPY #.LOWORD(-1)
    case 0xC05C0E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05890.asm:176 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05C0E.
    case 0xC05C10: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/unknown/C0/C05890.asm:177 BNE @UNKNOWN13
    case 0xC05C11: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05890.asm:178 LDA #6
    case 0xC05C13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C05890.asm:178 LDA #6
    // Overlapping static entry reached from 0xC05C10.
    case 0xC05C14: cpu.execute_instruction<0x06>(0x000000, 2); return true;
    // src/unknown/C0/C05890.asm:178 LDA #6
    // Overlapping static entry reached from 0xC05C13.
    case 0xC05C15: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05890.asm:179 BRA @UNKNOWN14
    case 0xC05C16: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C05890.asm:181 LDY @LOCAL02
    case 0xC05C18: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C05890.asm:182 TYA
    case 0xC05C1A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05890.asm:184 END_C_FUNCTION
    case 0xC05C1B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05890.asm:184 END_C_FUNCTION
    case 0xC05C1C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C059EF.asm (unresolved).
bool execute_unresolved_c0_c059ef_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C059EF.asm:3 BEGIN_C_FUNCTION
    case 0xC05C1D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C059EF.asm:9 END_STACK_VARS
    case 0xC05C1F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C059EF.asm:9 END_STACK_VARS
    case 0xC05C20: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C059EF.asm:9 END_STACK_VARS
    case 0xC05C21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C059EF.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC05C21.
    case 0xC05C23: cpu.execute_instruction<0xFF>(0xFFA05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C059EF.asm:9 END_STACK_VARS
    case 0xC05C24: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:10 LDY #.LOWORD(-1)
    case 0xC05C25: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C059EF.asm:10 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05C25.
    case 0xC05C27: cpu.execute_instruction<0xFF>(0xA91284, 4); return true;
    // src/unknown/C0/C059EF.asm:11 STY @LOCAL02
    case 0xC05C28: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:12 LDA #0
    case 0xC05C2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C059EF.asm:12 LDA #0
    // Overlapping static entry reached from 0xC05C27.
    case 0xC05C2B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C059EF.asm:12 LDA #0
    // Overlapping static entry reached from 0xC05C2A.
    case 0xC05C2C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C059EF.asm:13 STA @VIRTUAL02
    case 0xC05C2D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C059EF.asm:14 TAX
    case 0xC05C2F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:15 STX @LOCAL01
    case 0xC05C30: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:16 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05C32: cpu.execute_instruction<0x9C>(0x00612A, 3); return true;
    // src/unknown/C0/C059EF.asm:17 LDA #1
    case 0xC05C35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:17 LDA #1
    // Overlapping static entry reached from 0xC05C35.
    case 0xC05C37: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C059EF.asm:18 STA SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05C38: cpu.execute_instruction<0x8D>(0x00613A, 3); return true;
    // src/unknown/C0/C059EF.asm:19 LDA #36
    case 0xC05C3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/unknown/C0/C059EF.asm:19 LDA #36
    // Overlapping static entry reached from 0xC05C3B.
    case 0xC05C3D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C059EF.asm:20 JSR UNKNOWN_C05769
    case 0xC05C3E: cpu.execute_instruction<0x20>(0x005997, 3); return true;
    // src/unknown/C0/C059EF.asm:21 STA @LOCAL00
    case 0xC05C41: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C059EF.asm:22 CMP #0
    case 0xC05C43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C059EF.asm:22 CMP #0
    // Overlapping static entry reached from 0xC05C43.
    case 0xC05C45: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:23 BNE @UNKNOWN1
    case 0xC05C46: cpu.execute_instruction<0xD0>(0x000024, 2); return true;
    // src/unknown/C0/C059EF.asm:24 INC CHECKED_COLLISION_LEFT_X
    case 0xC05C48: cpu.execute_instruction<0xEE>(0x006132, 3); return true;
    // src/unknown/C0/C059EF.asm:25 INC CHECKED_COLLISION_LEFT_X
    case 0xC05C4B: cpu.execute_instruction<0xEE>(0x006132, 3); return true;
    // src/unknown/C0/C059EF.asm:26 INC CHECKED_COLLISION_LEFT_X
    case 0xC05C4E: cpu.execute_instruction<0xEE>(0x006132, 3); return true;
    // src/unknown/C0/C059EF.asm:27 INC CHECKED_COLLISION_LEFT_X
    case 0xC05C51: cpu.execute_instruction<0xEE>(0x006132, 3); return true;
    // src/unknown/C0/C059EF.asm:28 LDA #36
    case 0xC05C54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/unknown/C0/C059EF.asm:28 LDA #36
    // Overlapping static entry reached from 0xC05C54.
    case 0xC05C56: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C0/C059EF.asm:29 JSR UNKNOWN_C05769
    case 0xC05C57: cpu.execute_instruction<0x20>(0x005997, 3); return true;
    // src/unknown/C0/C059EF.asm:30 STA @LOCAL00
    case 0xC05C5A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C059EF.asm:31 CMP #0
    case 0xC05C5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C059EF.asm:31 CMP #0
    // Overlapping static entry reached from 0xC05C5C.
    case 0xC05C5E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:32 BNE @UNKNOWN0
    case 0xC05C5F: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C059EF.asm:33 LDA #2
    case 0xC05C61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C059EF.asm:33 LDA #2
    // Overlapping static entry reached from 0xC05C61.
    case 0xC05C63: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C059EF.asm:34 JMP @UNKNOWN14
    case 0xC05C64: cpu.execute_instruction<0x4C>(0x005D7A, 3); return true;
    // src/unknown/C0/C059EF.asm:36 LDA #1
    case 0xC05C67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:36 LDA #1
    // Overlapping static entry reached from 0xC05C67.
    case 0xC05C69: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C059EF.asm:37 STA @VIRTUAL02
    case 0xC05C6A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C059EF.asm:39 LDA @LOCAL00
    case 0xC05C6C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C059EF.asm:40 AND #$0024
    case 0xC05C6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000024, 2); else cpu.execute_instruction<0x29>(0x000024, 3); return true;
    // src/unknown/C0/C059EF.asm:40 AND #$0024
    // Overlapping static entry reached from 0xC05C6E.
    case 0xC05C70: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C059EF.asm:41 CMP #36
    case 0xC05C71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000024, 3); return true;
    // src/unknown/C0/C059EF.asm:41 CMP #36
    // Overlapping static entry reached from 0xC05C71.
    case 0xC05C73: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:42 BNE @UNKNOWN3
    case 0xC05C74: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/unknown/C0/C059EF.asm:43 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05C76: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C059EF.asm:44 AND #$0007
    case 0xC05C79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C059EF.asm:44 AND #$0007
    // Overlapping static entry reached from 0xC05C79.
    case 0xC05C7B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C059EF.asm:45 BEQ @UNKNOWN3
    case 0xC05C7C: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:46 LDA @VIRTUAL02
    case 0xC05C7E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C059EF.asm:47 BEQ @UNKNOWN2
    case 0xC05C80: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C059EF.asm:48 LDA #2
    case 0xC05C82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C059EF.asm:48 LDA #2
    // Overlapping static entry reached from 0xC05C82.
    case 0xC05C84: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C059EF.asm:49 JMP @UNKNOWN14
    case 0xC05C85: cpu.execute_instruction<0x4C>(0x005D7A, 3); return true;
    // src/unknown/C0/C059EF.asm:51 LDA #.LOWORD(-1)
    case 0xC05C88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C059EF.asm:51 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05C88.
    case 0xC05C8A: cpu.execute_instruction<0xFF>(0x5D7A4C, 4); return true;
    // src/unknown/C0/C059EF.asm:52 JMP @UNKNOWN14
    case 0xC05C8B: cpu.execute_instruction<0x4C>(0x005D7A, 3); return true;
    // src/unknown/C0/C059EF.asm:54 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05C8E: cpu.execute_instruction<0xAD>(0x006132, 3); return true;
    // src/unknown/C0/C059EF.asm:55 INC
    case 0xC05C91: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:56 INC
    case 0xC05C92: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:57 INC
    case 0xC05C93: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:58 INC
    case 0xC05C94: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:59 LSR
    case 0xC05C95: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:60 LSR
    case 0xC05C96: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:61 LSR
    case 0xC05C97: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:62 AND #$003F
    case 0xC05C98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C059EF.asm:62 AND #$003F
    // Overlapping static entry reached from 0xC05C98.
    case 0xC05C9A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C059EF.asm:63 STA @VIRTUAL04
    case 0xC05C9B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C059EF.asm:64 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05C9D: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C059EF.asm:65 DEC
    case 0xC05CA0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:66 DEC
    case 0xC05CA1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:67 LSR
    case 0xC05CA2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:68 LSR
    case 0xC05CA3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:69 LSR
    case 0xC05CA4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:70 AND #$003F
    case 0xC05CA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C059EF.asm:70 AND #$003F
    // Overlapping static entry reached from 0xC05CA5.
    case 0xC05CA7: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C059EF.asm:71 ASL
    case 0xC05CA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:72 ASL
    case 0xC05CA9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:73 ASL
    case 0xC05CAA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:74 ASL
    case 0xC05CAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:75 ASL
    case 0xC05CAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:76 ASL
    case 0xC05CAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:77 CLC
    case 0xC05CAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:78 ADC @VIRTUAL04
    case 0xC05CAF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C059EF.asm:79 TAX
    case 0xC05CB1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:80 LDA LOADED_COLLISION_TILES,X
    case 0xC05CB2: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C059EF.asm:81 AND #$00FF
    case 0xC05CB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C059EF.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC05CB5.
    case 0xC05CB7: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C059EF.asm:82 AND #$00C0
    case 0xC05CB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C059EF.asm:82 AND #$00C0
    // Overlapping static entry reached from 0xC05CB8.
    case 0xC05CBA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C059EF.asm:83 BEQ @UNKNOWN4
    case 0xC05CBB: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C059EF.asm:84 LDX @LOCAL01
    case 0xC05CBD: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:85 TXA
    case 0xC05CBF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:86 ORA #$0001
    case 0xC05CC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000001, 2); else cpu.execute_instruction<0x09>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:86 ORA #$0001
    // Overlapping static entry reached from 0xC05CC0.
    case 0xC05CC2: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C059EF.asm:87 TAX
    case 0xC05CC3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:88 STX @LOCAL01
    case 0xC05CC4: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:90 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05CC6: cpu.execute_instruction<0xAD>(0x006132, 3); return true;
    // src/unknown/C0/C059EF.asm:91 INC
    case 0xC05CC9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:92 INC
    case 0xC05CCA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:93 INC
    case 0xC05CCB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:94 INC
    case 0xC05CCC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:95 LSR
    case 0xC05CCD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:96 LSR
    case 0xC05CCE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:97 LSR
    case 0xC05CCF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:98 AND #$003F
    case 0xC05CD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C059EF.asm:98 AND #$003F
    // Overlapping static entry reached from 0xC05CD0.
    case 0xC05CD2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C059EF.asm:99 STA @VIRTUAL04
    case 0xC05CD3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C059EF.asm:100 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05CD5: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C059EF.asm:101 CLC
    case 0xC05CD8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:102 ADC #9
    case 0xC05CD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/unknown/C0/C059EF.asm:102 ADC #9
    // Overlapping static entry reached from 0xC05CD9.
    case 0xC05CDB: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C059EF.asm:103 LSR
    case 0xC05CDC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:104 LSR
    case 0xC05CDD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:105 LSR
    case 0xC05CDE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:106 AND #$003F
    case 0xC05CDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C059EF.asm:106 AND #$003F
    // Overlapping static entry reached from 0xC05CDF.
    case 0xC05CE1: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C059EF.asm:107 ASL
    case 0xC05CE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:108 ASL
    case 0xC05CE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:109 ASL
    case 0xC05CE4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:110 ASL
    case 0xC05CE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:111 ASL
    case 0xC05CE6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:112 ASL
    case 0xC05CE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:113 CLC
    case 0xC05CE8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:114 ADC @VIRTUAL04
    case 0xC05CE9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C0/C059EF.asm:115 TAX
    case 0xC05CEB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:116 LDA LOADED_COLLISION_TILES,X
    case 0xC05CEC: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/C0/C059EF.asm:117 AND #$00FF
    case 0xC05CEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C059EF.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC05CEF.
    case 0xC05CF1: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C059EF.asm:118 AND #$00C0
    case 0xC05CF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0000C0, 3); return true;
    // src/unknown/C0/C059EF.asm:118 AND #$00C0
    // Overlapping static entry reached from 0xC05CF2.
    case 0xC05CF4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C059EF.asm:119 BEQ @UNKNOWN5
    case 0xC05CF5: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C059EF.asm:120 LDX @LOCAL01
    case 0xC05CF7: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:121 TXA
    case 0xC05CF9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:122 ORA #$0002
    case 0xC05CFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000002, 2); else cpu.execute_instruction<0x09>(0x000002, 3); return true;
    // src/unknown/C0/C059EF.asm:122 ORA #$0002
    // Overlapping static entry reached from 0xC05CFA.
    case 0xC05CFC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C059EF.asm:123 TAX
    case 0xC05CFD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:124 STX @LOCAL01
    case 0xC05CFE: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:126 LDA @LOCAL00
    case 0xC05D00: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C059EF.asm:127 CMP #36
    case 0xC05D02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000024, 3); return true;
    // src/unknown/C0/C059EF.asm:127 CMP #36
    // Overlapping static entry reached from 0xC05D02.
    case 0xC05D04: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C059EF.asm:128 BEQ @UNKNOWN6
    case 0xC05D05: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C059EF.asm:129 CMP #4
    case 0xC05D07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C059EF.asm:129 CMP #4
    // Overlapping static entry reached from 0xC05D07.
    case 0xC05D09: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C059EF.asm:130 BEQ @UNKNOWN10
    case 0xC05D0A: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/unknown/C0/C059EF.asm:131 CMP #32
    case 0xC05D0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C0/C059EF.asm:131 CMP #32
    // Overlapping static entry reached from 0xC05D0C.
    case 0xC05D0E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C059EF.asm:132 BEQ @UNKNOWN11
    case 0xC05D0F: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/unknown/C0/C059EF.asm:133 BRA @UNKNOWN12
    case 0xC05D11: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/unknown/C0/C059EF.asm:135 LDX @LOCAL01
    case 0xC05D13: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:136 CPX #1
    case 0xC05D15: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:136 CPX #1
    // Overlapping static entry reached from 0xC05D15.
    case 0xC05D17: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:137 BNE @UNKNOWN7
    case 0xC05D18: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C059EF.asm:138 LDY #3
    case 0xC05D1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C059EF.asm:138 LDY #3
    // Overlapping static entry reached from 0xC05D1A.
    case 0xC05D1C: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C059EF.asm:139 STY @LOCAL02
    case 0xC05D1D: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:140 BRA @UNKNOWN12
    case 0xC05D1F: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C0/C059EF.asm:142 CPX #2
    case 0xC05D21: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/unknown/C0/C059EF.asm:142 CPX #2
    // Overlapping static entry reached from 0xC05D21.
    case 0xC05D23: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:143 BNE @UNKNOWN8
    case 0xC05D24: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C0/C059EF.asm:144 LDY #1
    case 0xC05D26: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:144 LDY #1
    // Overlapping static entry reached from 0xC05D26.
    case 0xC05D28: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C059EF.asm:145 STY @LOCAL02
    case 0xC05D29: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:146 BRA @UNKNOWN12
    case 0xC05D2B: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C0/C059EF.asm:148 CPX #0
    case 0xC05D2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C059EF.asm:148 CPX #0
    // Overlapping static entry reached from 0xC05D2D.
    case 0xC05D2F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:149 BNE @UNKNOWN12
    case 0xC05D30: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/unknown/C0/C059EF.asm:150 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05D32: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C059EF.asm:151 AND #$0007
    case 0xC05D35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C059EF.asm:151 AND #$0007
    // Overlapping static entry reached from 0xC05D35.
    case 0xC05D37: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C059EF.asm:152 CMP #4
    case 0xC05D38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C059EF.asm:152 CMP #4
    // Overlapping static entry reached from 0xC05D38.
    case 0xC05D3A: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C059EF.asm:153 BCS @UNKNOWN9
    case 0xC05D3B: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C0/C059EF.asm:154 LDY #1
    case 0xC05D3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:154 LDY #1
    // Overlapping static entry reached from 0xC05D3D.
    case 0xC05D3F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C059EF.asm:155 STY @LOCAL02
    case 0xC05D40: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:156 BRA @UNKNOWN12
    case 0xC05D42: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/unknown/C0/C059EF.asm:158 LDY #3
    case 0xC05D44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C059EF.asm:158 LDY #3
    // Overlapping static entry reached from 0xC05D44.
    case 0xC05D46: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C059EF.asm:159 STY @LOCAL02
    case 0xC05D47: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:160 BRA @UNKNOWN12
    case 0xC05D49: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C0/C059EF.asm:162 LDX @LOCAL01
    case 0xC05D4B: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:163 TXA
    case 0xC05D4D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:164 AND #$0002
    case 0xC05D4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C059EF.asm:164 AND #$0002
    // Overlapping static entry reached from 0xC05D4E.
    case 0xC05D50: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:165 BNE @UNKNOWN12
    case 0xC05D51: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/unknown/C0/C059EF.asm:166 LDY #3
    case 0xC05D53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C059EF.asm:166 LDY #3
    // Overlapping static entry reached from 0xC05D53.
    case 0xC05D55: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C059EF.asm:167 STY @LOCAL02
    case 0xC05D56: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:168 BRA @UNKNOWN12
    case 0xC05D58: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C059EF.asm:170 LDX @LOCAL01
    case 0xC05D5A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C059EF.asm:171 TXA
    case 0xC05D5C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C059EF.asm:172 AND #$0001
    case 0xC05D5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:172 AND #$0001
    // Overlapping static entry reached from 0xC05D5D.
    case 0xC05D5F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C059EF.asm:173 BNE @UNKNOWN12
    case 0xC05D60: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C059EF.asm:174 LDY #1
    case 0xC05D62: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C059EF.asm:174 LDY #1
    // Overlapping static entry reached from 0xC05D62.
    case 0xC05D64: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C059EF.asm:175 STY @LOCAL02
    case 0xC05D65: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:177 LDA @VIRTUAL02
    case 0xC05D67: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C059EF.asm:178 BEQ @UNKNOWN13
    case 0xC05D69: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C059EF.asm:179 LDY @LOCAL02
    case 0xC05D6B: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:180 CPY #.LOWORD(-1)
    case 0xC05D6D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C059EF.asm:180 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05D6D.
    case 0xC05D6F: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/unknown/C0/C059EF.asm:181 BNE @UNKNOWN13
    case 0xC05D70: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C059EF.asm:182 LDA #2
    case 0xC05D72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C059EF.asm:182 LDA #2
    // Overlapping static entry reached from 0xC05D6F.
    case 0xC05D73: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/C0/C059EF.asm:182 LDA #2
    // Overlapping static entry reached from 0xC05D72.
    case 0xC05D74: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C059EF.asm:183 BRA @UNKNOWN14
    case 0xC05D75: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C059EF.asm:185 LDY @LOCAL02
    case 0xC05D77: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C059EF.asm:186 TYA
    case 0xC05D79: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C059EF.asm:188 END_C_FUNCTION
    case 0xC05D7A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C059EF.asm:188 END_C_FUNCTION
    case 0xC05D7B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05B4E.asm (unresolved).
bool execute_unresolved_c0_c05b4e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05B4E.asm:3 BEGIN_C_FUNCTION
    case 0xC05D7C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    case 0xC05D7E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    case 0xC05D7F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    case 0xC05D80: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    case 0xC05D81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC05D81.
    case 0xC05D83: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    case 0xC05D84: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05B4E.asm:8 END_STACK_VARS
    case 0xC05D85: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05B4E.asm:9 TAX
    case 0xC05D86: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05B4E.asm:10 STX @LOCAL00
    case 0xC05D87: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C05B4E.asm:11 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05D89: cpu.execute_instruction<0x9C>(0x00612A, 3); return true;
    // src/unknown/C0/C05B4E.asm:12 INC SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05D8C: cpu.execute_instruction<0xEE>(0x00613A, 3); return true;
    // src/unknown/C0/C05B4E.asm:13 TXA
    case 0xC05D8F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05B4E.asm:14 LSR
    case 0xC05D90: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05B4E.asm:15 ASL
    case 0xC05D91: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05B4E.asm:16 TAX
    case 0xC05D92: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05B4E.asm:17 LDA f:UNKNOWN_C200D1,X
    case 0xC05D93: cpu.execute_instruction<0xBF>(0xC200D1, 4); return true;
    // src/unknown/C0/C05B4E.asm:18 JSR UNKNOWN_C05769
    case 0xC05D97: cpu.execute_instruction<0x20>(0x005997, 3); return true;
    // src/unknown/C0/C05B4E.asm:19 CMP #0
    case 0xC05D9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C05B4E.asm:19 CMP #0
    // Overlapping static entry reached from 0xC05D9A.
    case 0xC05D9C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05B4E.asm:20 BEQ @UNKNOWN0
    case 0xC05D9D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C05B4E.asm:21 LDA #$FF00
    case 0xC05D9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B4E.asm:21 LDA #$FF00
    // Overlapping static entry reached from 0xC05D9F.
    case 0xC05DA1: cpu.execute_instruction<0xFF>(0xA60380, 4); return true;
    // src/unknown/C0/C05B4E.asm:22 BRA @UNKNOWN1
    case 0xC05DA2: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C05B4E.asm:24 LDX @LOCAL00
    case 0xC05DA4: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C05B4E.asm:24 LDX @LOCAL00
    // Overlapping static entry reached from 0xC05DA1.
    case 0xC05DA5: cpu.execute_instruction<0x0E>(0x002B8A, 3); return true;
    // src/unknown/C0/C05B4E.asm:25 TXA
    case 0xC05DA6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05B4E.asm:27 END_C_FUNCTION
    case 0xC05DA7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05B4E.asm:27 END_C_FUNCTION
    case 0xC05DA8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05B7B.asm (unresolved).
bool execute_unresolved_c0_c05b7b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05B7B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05DA9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    case 0xC05DAB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    case 0xC05DAC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    case 0xC05DAD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    case 0xC05DAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC05DAE.
    case 0xC05DB0: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    case 0xC05DB1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05B7B.asm:14 END_STACK_VARS
    case 0xC05DB2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05B7B.asm:15 STX @VIRTUAL04
    case 0xC05DB3: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C05B7B.asm:15 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC05DB0.
    case 0xC05DB4: cpu.execute_instruction<0x04>(0x0000A8, 2); return true;
    // src/unknown/C0/C05B7B.asm:16 TAY
    case 0xC05DB5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05B7B.asm:17 LDX @PARAM03
    case 0xC05DB6: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/unknown/C0/C05B7B.asm:18 STX @LOCAL03
    case 0xC05DB8: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:19 STZ NOT_MOVING_IN_SAME_DIRECTION_FACED
    case 0xC05DBA: cpu.execute_instruction<0x9C>(0x00613E, 3); return true;
    // src/unknown/C0/C05B7B.asm:20 STZ SET_TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05DBD: cpu.execute_instruction<0x9C>(0x00613A, 3); return true;
    // src/unknown/C0/C05B7B.asm:21 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05DC0: cpu.execute_instruction<0x9C>(0x00612A, 3); return true;
    // src/unknown/C0/C05B7B.asm:22 LDA @LOCAL03
    case 0xC05DC3: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:23 STA FINAL_MOVEMENT_DIRECTION
    case 0xC05DC5: cpu.execute_instruction<0x8D>(0x00612C, 3); return true;
    // src/unknown/C0/C05B7B.asm:24 LDA @LOCAL03
    case 0xC05DC8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:25 STA UNREAD_7E5DA2
    case 0xC05DCA: cpu.execute_instruction<0x8D>(0x006128, 3); return true;
    // src/unknown/C0/C05B7B.asm:26 STY CHECKED_COLLISION_LEFT_X
    case 0xC05DCD: cpu.execute_instruction<0x8C>(0x006132, 3); return true;
    // src/unknown/C0/C05B7B.asm:27 LDA @VIRTUAL04
    case 0xC05DD0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05B7B.asm:28 STA CHECKED_COLLISION_TOP_Y
    case 0xC05DD2: cpu.execute_instruction<0x8D>(0x006134, 3); return true;
    // src/unknown/C0/C05B7B.asm:29 LDA @LOCAL03
    case 0xC05DD5: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:30 BEQ @UNKNOWN7
    case 0xC05DD7: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/unknown/C0/C05B7B.asm:30 BEQ @UNKNOWN7
    // Overlapping static entry reached from 0xC05E29.
    case 0xC05DD8: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/unknown/C0/C05B7B.asm:31 CMP #4
    case 0xC05DD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C05B7B.asm:31 CMP #4
    // Overlapping static entry reached from 0xC05DD9.
    case 0xC05DDB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:32 BEQL @UNKNOWN10
    case 0xC05DDC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:32 BEQL @UNKNOWN10
    case 0xC05DDE: cpu.execute_instruction<0x4C>(0x005E5B, 3); return true;
    // src/unknown/C0/C05B7B.asm:33 CMP #6
    case 0xC05DE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C05B7B.asm:33 CMP #6
    // Overlapping static entry reached from 0xC05DE1.
    case 0xC05DE3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:34 BEQL @UNKNOWN12
    case 0xC05DE4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:34 BEQL @UNKNOWN12
    case 0xC05DE6: cpu.execute_instruction<0x4C>(0x005EA1, 3); return true;
    // src/unknown/C0/C05B7B.asm:35 CMP #2
    case 0xC05DE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C05B7B.asm:35 CMP #2
    // Overlapping static entry reached from 0xC05DE9.
    case 0xC05DEB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:36 BEQL @UNKNOWN13
    case 0xC05DEC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:36 BEQL @UNKNOWN13
    case 0xC05DEE: cpu.execute_instruction<0x4C>(0x005EAA, 3); return true;
    // src/unknown/C0/C05B7B.asm:37 CMP #7
    case 0xC05DF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C05B7B.asm:37 CMP #7
    // Overlapping static entry reached from 0xC05DF1.
    case 0xC05DF3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:38 BEQL @UNKNOWN14
    case 0xC05DF4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:38 BEQL @UNKNOWN14
    case 0xC05DF6: cpu.execute_instruction<0x4C>(0x005EB3, 3); return true;
    // src/unknown/C0/C05B7B.asm:39 CMP #1
    case 0xC05DF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C05B7B.asm:39 CMP #1
    // Overlapping static entry reached from 0xC05DF9.
    case 0xC05DFB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:40 BEQL @UNKNOWN14
    case 0xC05DFC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:40 BEQL @UNKNOWN14
    case 0xC05DFE: cpu.execute_instruction<0x4C>(0x005EB3, 3); return true;
    // src/unknown/C0/C05B7B.asm:41 CMP #5
    case 0xC05E01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C05B7B.asm:41 CMP #5
    // Overlapping static entry reached from 0xC05E01.
    case 0xC05E03: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:42 BEQL @UNKNOWN14
    case 0xC05E04: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:42 BEQL @UNKNOWN14
    case 0xC05E06: cpu.execute_instruction<0x4C>(0x005EB3, 3); return true;
    // src/unknown/C0/C05B7B.asm:43 CMP #3
    case 0xC05E09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C05B7B.asm:43 CMP #3
    // Overlapping static entry reached from 0xC05E09.
    case 0xC05E0B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C05B7B.asm:44 BEQL @UNKNOWN14
    case 0xC05E0C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:44 BEQL @UNKNOWN14
    case 0xC05E0E: cpu.execute_instruction<0x4C>(0x005EB3, 3); return true;
    // src/unknown/C0/C05B7B.asm:45 JMP @UNKNOWN15
    case 0xC05E11: cpu.execute_instruction<0x4C>(0x005EC9, 3); return true;
    // src/unknown/C0/C05B7B.asm:47 JSR UNKNOWN_C057E8
    case 0xC05E14: cpu.execute_instruction<0x20>(0x005A16, 3); return true;
    // src/unknown/C0/C05B7B.asm:48 STA @VIRTUAL02
    case 0xC05E17: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:49 STA @LOCAL02
    case 0xC05E19: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:50 LDA @VIRTUAL02
    case 0xC05E1B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:50 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC05E6D.
    case 0xC05E1C: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C0/C05B7B.asm:51 CMP #.LOWORD(-1)
    case 0xC05E1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05B7B.asm:51 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05E1D.
    case 0xC05E1F: cpu.execute_instruction<0xFF>(0x4C03F0, 4); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C05B7B.asm:52 BNEL @UNKNOWN15
    case 0xC05E20: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:52 BNEL @UNKNOWN15
    case 0xC05E22: cpu.execute_instruction<0x4C>(0x005EC9, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C05B7B.asm:52 BNEL @UNKNOWN15
    // Overlapping static entry reached from 0xC05E1F.
    case 0xC05E23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00005E, 2); else cpu.execute_instruction<0xC9>(0x00AE5E, 3); return true;
    // src/unknown/C0/C05B7B.asm:53 LDX LADDER_STAIRS_TILE_X
    case 0xC05E25: cpu.execute_instruction<0xAE>(0x00612E, 3); return true;
    // src/unknown/C0/C05B7B.asm:53 LDX LADDER_STAIRS_TILE_X
    // Overlapping static entry reached from 0xC05E23.
    case 0xC05E26: cpu.execute_instruction<0x2E>(0x008661, 3); return true;
    // src/unknown/C0/C05B7B.asm:54 STX @LOCAL01
    case 0xC05E28: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05B7B.asm:54 STX @LOCAL01
    // Overlapping static entry reached from 0xC05E26.
    case 0xC05E29: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C0/C05B7B.asm:55 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05E2A: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C05B7B.asm:55 LDA CHECKED_COLLISION_TOP_Y
    // Overlapping static entry reached from 0xC05E29.
    case 0xC05E2B: cpu.execute_instruction<0x34>(0x000061, 2); return true;
    // src/unknown/C0/C05B7B.asm:56 AND #$0007
    case 0xC05E2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C05B7B.asm:56 AND #$0007
    // Overlapping static entry reached from 0xC05E2D.
    case 0xC05E2F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C05B7B.asm:57 CMP #5
    case 0xC05E30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C05B7B.asm:57 CMP #5
    // Overlapping static entry reached from 0xC05E30.
    case 0xC05E32: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C05B7B.asm:58 BCS @UNKNOWN9
    case 0xC05E33: cpu.execute_instruction<0xB0>(0x00001F, 2); return true;
    // src/unknown/C0/C05B7B.asm:59 DEC CHECKED_COLLISION_TOP_Y
    case 0xC05E35: cpu.execute_instruction<0xCE>(0x006134, 3); return true;
    // src/unknown/C0/C05B7B.asm:60 DEC CHECKED_COLLISION_TOP_Y
    case 0xC05E38: cpu.execute_instruction<0xCE>(0x006134, 3); return true;
    // src/unknown/C0/C05B7B.asm:61 DEC CHECKED_COLLISION_TOP_Y
    case 0xC05E3B: cpu.execute_instruction<0xCE>(0x006134, 3); return true;
    // src/unknown/C0/C05B7B.asm:62 DEC CHECKED_COLLISION_TOP_Y
    case 0xC05E3E: cpu.execute_instruction<0xCE>(0x006134, 3); return true;
    // src/unknown/C0/C05B7B.asm:63 JSR UNKNOWN_C057E8
    case 0xC05E41: cpu.execute_instruction<0x20>(0x005A16, 3); return true;
    // src/unknown/C0/C05B7B.asm:64 STA @LOCAL00
    case 0xC05E44: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05B7B.asm:65 AND #$FF00
    case 0xC05E46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B7B.asm:65 AND #$FF00
    // Overlapping static entry reached from 0xC05E46.
    case 0xC05E48: cpu.execute_instruction<0xFF>(0xFF00C9, 4); return true;
    // src/unknown/C0/C05B7B.asm:66 CMP #$FF00
    case 0xC05E49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B7B.asm:66 CMP #$FF00
    // Overlapping static entry reached from 0xC05E49.
    case 0xC05E4B: cpu.execute_instruction<0xFF>(0xA506F0, 4); return true;
    // src/unknown/C0/C05B7B.asm:67 BEQ @UNKNOWN9
    case 0xC05E4C: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C05B7B.asm:68 LDA @LOCAL00
    case 0xC05E4E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05B7B.asm:68 LDA @LOCAL00
    // Overlapping static entry reached from 0xC05E4B.
    case 0xC05E4F: cpu.execute_instruction<0x0E>(0x000285, 3); return true;
    // src/unknown/C0/C05B7B.asm:69 STA @VIRTUAL02
    case 0xC05E50: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:70 STA @LOCAL02
    case 0xC05E52: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:72 LDX @LOCAL01
    case 0xC05E54: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05B7B.asm:73 STX LADDER_STAIRS_TILE_X
    case 0xC05E56: cpu.execute_instruction<0x8E>(0x00612E, 3); return true;
    // src/unknown/C0/C05B7B.asm:74 BRA @UNKNOWN15
    case 0xC05E59: cpu.execute_instruction<0x80>(0x00006E, 2); return true;
    // src/unknown/C0/C05B7B.asm:76 JSR UNKNOWN_C0583C
    case 0xC05E5B: cpu.execute_instruction<0x20>(0x005A6A, 3); return true;
    // src/unknown/C0/C05B7B.asm:77 STA @VIRTUAL02
    case 0xC05E5E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:78 STA @LOCAL02
    case 0xC05E60: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:79 LDA @VIRTUAL02
    case 0xC05E62: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:80 CMP #.LOWORD(-1)
    case 0xC05E64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05B7B.asm:80 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05E64.
    case 0xC05E66: cpu.execute_instruction<0xFF>(0xAE60D0, 4); return true;
    // src/unknown/C0/C05B7B.asm:81 BNE @UNKNOWN15
    case 0xC05E67: cpu.execute_instruction<0xD0>(0x000060, 2); return true;
    // src/unknown/C0/C05B7B.asm:82 LDX LADDER_STAIRS_TILE_X
    case 0xC05E69: cpu.execute_instruction<0xAE>(0x00612E, 3); return true;
    // src/unknown/C0/C05B7B.asm:82 LDX LADDER_STAIRS_TILE_X
    // Overlapping static entry reached from 0xC05E66.
    case 0xC05E6A: cpu.execute_instruction<0x2E>(0x008661, 3); return true;
    // src/unknown/C0/C05B7B.asm:83 STX @LOCAL01
    case 0xC05E6C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05B7B.asm:83 STX @LOCAL01
    // Overlapping static entry reached from 0xC05E6A.
    case 0xC05E6D: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C0/C05B7B.asm:84 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05E6E: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C05B7B.asm:84 LDA CHECKED_COLLISION_TOP_Y
    // Overlapping static entry reached from 0xC05E6D.
    case 0xC05E6F: cpu.execute_instruction<0x34>(0x000061, 2); return true;
    // src/unknown/C0/C05B7B.asm:85 AND #$0007
    case 0xC05E71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C05B7B.asm:85 AND #$0007
    // Overlapping static entry reached from 0xC05E71.
    case 0xC05E73: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C05B7B.asm:86 CMP #3
    case 0xC05E74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C05B7B.asm:86 CMP #3
    // Overlapping static entry reached from 0xC05E74.
    case 0xC05E76: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C05B7B.asm:87 BLTEQ @UNKNOWN11
    case 0xC05E77: cpu.execute_instruction<0x90>(0x000021, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C05B7B.asm:87 BLTEQ @UNKNOWN11
    case 0xC05E79: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C0/C05B7B.asm:88 INC CHECKED_COLLISION_TOP_Y
    case 0xC05E7B: cpu.execute_instruction<0xEE>(0x006134, 3); return true;
    // src/unknown/C0/C05B7B.asm:89 INC CHECKED_COLLISION_TOP_Y
    case 0xC05E7E: cpu.execute_instruction<0xEE>(0x006134, 3); return true;
    // src/unknown/C0/C05B7B.asm:90 INC CHECKED_COLLISION_TOP_Y
    case 0xC05E81: cpu.execute_instruction<0xEE>(0x006134, 3); return true;
    // src/unknown/C0/C05B7B.asm:91 INC CHECKED_COLLISION_TOP_Y
    case 0xC05E84: cpu.execute_instruction<0xEE>(0x006134, 3); return true;
    // src/unknown/C0/C05B7B.asm:92 JSR UNKNOWN_C0583C
    case 0xC05E87: cpu.execute_instruction<0x20>(0x005A6A, 3); return true;
    // src/unknown/C0/C05B7B.asm:93 STA @LOCAL00
    case 0xC05E8A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05B7B.asm:94 AND #$FF00
    case 0xC05E8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B7B.asm:94 AND #$FF00
    // Overlapping static entry reached from 0xC05E8C.
    case 0xC05E8E: cpu.execute_instruction<0xFF>(0xFF00C9, 4); return true;
    // src/unknown/C0/C05B7B.asm:95 CMP #$FF00
    case 0xC05E8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B7B.asm:95 CMP #$FF00
    // Overlapping static entry reached from 0xC05E8F.
    case 0xC05E91: cpu.execute_instruction<0xFF>(0xA506F0, 4); return true;
    // src/unknown/C0/C05B7B.asm:96 BEQ @UNKNOWN11
    case 0xC05E92: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C05B7B.asm:97 LDA @LOCAL00
    case 0xC05E94: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05B7B.asm:97 LDA @LOCAL00
    // Overlapping static entry reached from 0xC05E91.
    case 0xC05E95: cpu.execute_instruction<0x0E>(0x000285, 3); return true;
    // src/unknown/C0/C05B7B.asm:98 STA @VIRTUAL02
    case 0xC05E96: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:99 STA @LOCAL02
    case 0xC05E98: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:101 LDX @LOCAL01
    case 0xC05E9A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05B7B.asm:102 STX LADDER_STAIRS_TILE_X
    case 0xC05E9C: cpu.execute_instruction<0x8E>(0x00612E, 3); return true;
    // src/unknown/C0/C05B7B.asm:103 BRA @UNKNOWN15
    case 0xC05E9F: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C0/C05B7B.asm:105 JSR UNKNOWN_C05890
    case 0xC05EA1: cpu.execute_instruction<0x20>(0x005ABE, 3); return true;
    // src/unknown/C0/C05B7B.asm:106 STA @VIRTUAL02
    case 0xC05EA4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:107 STA @LOCAL02
    case 0xC05EA6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:108 BRA @UNKNOWN15
    case 0xC05EA8: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C05B7B.asm:110 JSR UNKNOWN_C059EF
    case 0xC05EAA: cpu.execute_instruction<0x20>(0x005C1D, 3); return true;
    // src/unknown/C0/C05B7B.asm:110 JSR UNKNOWN_C059EF
    // Overlapping static entry reached from 0xC004AD.
    case 0xC05EAC: cpu.execute_instruction<0x5C>(0x850285, 4); return true;
    // src/unknown/C0/C05B7B.asm:111 STA @VIRTUAL02
    case 0xC05EAD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:112 STA @LOCAL02
    case 0xC05EAF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:113 BRA @UNKNOWN15
    case 0xC05EB1: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C0/C05B7B.asm:115 LDA @LOCAL03
    case 0xC05EB3: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:116 JSR UNKNOWN_C05B4E
    case 0xC05EB5: cpu.execute_instruction<0x20>(0x005D7C, 3); return true;
    // src/unknown/C0/C05B7B.asm:117 STA @VIRTUAL02
    case 0xC05EB8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:118 STA @LOCAL02
    case 0xC05EBA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:119 LDA @VIRTUAL02
    case 0xC05EBC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:120 CMP #$FF00
    case 0xC05EBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B7B.asm:120 CMP #$FF00
    // Overlapping static entry reached from 0xC05EBE.
    case 0xC05EC0: cpu.execute_instruction<0xFF>(0xA506F0, 4); return true;
    // src/unknown/C0/C05B7B.asm:121 BEQ @UNKNOWN15
    case 0xC05EC1: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C05B7B.asm:122 LDA @LOCAL03
    case 0xC05EC3: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:122 LDA @LOCAL03
    // Overlapping static entry reached from 0xC05EC0.
    case 0xC05EC4: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C0/C05B7B.asm:123 STA @VIRTUAL02
    case 0xC05EC5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:123 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC05EC4.
    case 0xC05EC6: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C0/C05B7B.asm:124 STA @LOCAL02
    case 0xC05EC7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:126 LDA PENDING_INTERACTIONS
    case 0xC05EC9: cpu.execute_instruction<0xAD>(0x006120, 3); return true;
    // src/unknown/C0/C05B7B.asm:127 BEQ @UNKNOWN16
    case 0xC05ECC: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C05B7B.asm:128 LDA #.LOWORD(-1)
    case 0xC05ECE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05B7B.asm:128 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05ECE.
    case 0xC05ED0: cpu.execute_instruction<0xFF>(0x612E8D, 4); return true;
    // src/unknown/C0/C05B7B.asm:129 STA LADDER_STAIRS_TILE_X
    case 0xC05ED1: cpu.execute_instruction<0x8D>(0x00612E, 3); return true;
    // src/unknown/C0/C05B7B.asm:131 LDA @LOCAL02
    case 0xC05ED4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C05B7B.asm:132 STA @VIRTUAL02
    case 0xC05ED6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:133 CMP #.LOWORD(-1)
    case 0xC05ED8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C05B7B.asm:133 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC05ED8.
    case 0xC05EDA: cpu.execute_instruction<0xFF>(0xA507F0, 4); return true;
    // src/unknown/C0/C05B7B.asm:134 BEQ @UNKNOWN17
    case 0xC05EDB: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C05B7B.asm:135 LDA @VIRTUAL02
    case 0xC05EDD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:135 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC05EDA.
    case 0xC05EDE: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C0/C05B7B.asm:136 CMP #$FF00
    case 0xC05EDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05B7B.asm:136 CMP #$FF00
    // Overlapping static entry reached from 0xC05EDF.
    case 0xC05EE1: cpu.execute_instruction<0xFF>(0xAD05D0, 4); return true;
    // src/unknown/C0/C05B7B.asm:137 BNE @UNKNOWN18
    case 0xC05EE2: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05B7B.asm:139 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05EE4: cpu.execute_instruction<0xAD>(0x00612A, 3); return true;
    // src/unknown/C0/C05B7B.asm:139 LDA TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC05EE1.
    case 0xC05EE5: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C05B7B.asm:139 LDA TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC05EE5.
    case 0xC05EE6: cpu.execute_instruction<0x61>(0x000080, 2); return true;
    // src/unknown/C0/C05B7B.asm:140 BRA @UNKNOWN20
    case 0xC05EE7: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C0/C05B7B.asm:140 BRA @UNKNOWN20
    // Overlapping static entry reached from 0xC05EE6.
    case 0xC05EE8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05B7B.asm:142 LDX #0
    case 0xC05EE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C05B7B.asm:142 LDX #0
    // Overlapping static entry reached from 0xC05EE9.
    case 0xC05EEB: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C0/C05B7B.asm:143 LDA @VIRTUAL02
    case 0xC05EEC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:144 CMP @LOCAL03
    case 0xC05EEE: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C0/C05B7B.asm:145 BEQ @UNKNOWN19
    case 0xC05EF0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C05B7B.asm:146 LDX #1
    case 0xC05EF2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C05B7B.asm:146 LDX #1
    // Overlapping static entry reached from 0xC05EF2.
    case 0xC05EF4: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/unknown/C0/C05B7B.asm:148 STX NOT_MOVING_IN_SAME_DIRECTION_FACED
    case 0xC05EF5: cpu.execute_instruction<0x8E>(0x00613E, 3); return true;
    // src/unknown/C0/C05B7B.asm:149 LDA @VIRTUAL02
    case 0xC05EF8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05B7B.asm:150 STA FINAL_MOVEMENT_DIRECTION
    case 0xC05EFA: cpu.execute_instruction<0x8D>(0x00612C, 3); return true;
    // src/unknown/C0/C05B7B.asm:151 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05EFD: cpu.execute_instruction<0xAD>(0x00612A, 3); return true;
    // src/unknown/C0/C05B7B.asm:152 AND #$003F
    case 0xC05F00: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C05B7B.asm:152 AND #$003F
    // Overlapping static entry reached from 0xC05F00.
    case 0xC05F02: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05B7B.asm:154 END_C_FUNCTION
    case 0xC05F03: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05B7B.asm:154 END_C_FUNCTION
    case 0xC05F04: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05CD7.asm (unresolved).
bool execute_unresolved_c0_c05cd7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05CD7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05F05: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    case 0xC05F07: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    case 0xC05F08: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    case 0xC05F09: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    case 0xC05F0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC05F0A.
    case 0xC05F0C: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    case 0xC05F0D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05CD7.asm:13 END_STACK_VARS
    case 0xC05F0E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:14 STX @VIRTUAL04
    case 0xC05F0F: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C05CD7.asm:14 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC05F0C.
    case 0xC05F10: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C0/C05CD7.asm:15 STA @LOCAL02
    case 0xC05F11: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C05CD7.asm:15 STA @LOCAL02
    // Overlapping static entry reached from 0xC05F10.
    case 0xC05F12: cpu.execute_instruction<0x12>(0x0000A6, 2); return true;
    // src/unknown/C0/C05CD7.asm:16 LDX @PARAM03
    case 0xC05F13: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C0/C05CD7.asm:16 LDX @PARAM03
    // Overlapping static entry reached from 0xC05F12.
    case 0xC05F14: cpu.execute_instruction<0x22>(0x9C1086, 4); return true;
    // src/unknown/C0/C05CD7.asm:17 STX @LOCAL01
    case 0xC05F15: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05CD7.asm:18 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05F17: cpu.execute_instruction<0x9C>(0x00612A, 3); return true;
    // src/unknown/C0/C05CD7.asm:18 STZ TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC05F14.
    case 0xC05F18: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:18 STZ TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC05F18.
    case 0xC05F19: cpu.execute_instruction<0x61>(0x000098, 2); return true;
    // src/unknown/C0/C05CD7.asm:19 TYA
    case 0xC05F1A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:20 ASL
    case 0xC05F1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:21 TAX
    case 0xC05F1C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:22 LDA ENTITY_SIZES,X
    case 0xC05F1D: cpu.execute_instruction<0xBD>(0x002F6C, 3); return true;
    // src/unknown/C0/C05CD7.asm:23 STA @VIRTUAL02
    case 0xC05F20: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:24 ASL
    case 0xC05F22: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:25 STA @LOCAL00
    case 0xC05F23: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:26 LDX @LOCAL00
    case 0xC05F25: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:27 LDA @LOCAL02
    case 0xC05F27: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C05CD7.asm:28 SEC
    case 0xC05F29: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:29 SBC f:UNKNOWN_C42A1F,X
    case 0xC05F2A: cpu.execute_instruction<0xFF>(0xC4295D, 4); return true;
    // src/unknown/C0/C05CD7.asm:30 TAY
    case 0xC05F2E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:31 STY CHECKED_COLLISION_LEFT_X
    case 0xC05F2F: cpu.execute_instruction<0x8C>(0x006132, 3); return true;
    // src/unknown/C0/C05CD7.asm:32 LDX @LOCAL00
    case 0xC05F32: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:33 LDA @VIRTUAL04
    case 0xC05F34: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C05CD7.asm:34 SEC
    case 0xC05F36: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:35 SBC f:UNKNOWN_C42A41,X
    case 0xC05F37: cpu.execute_instruction<0xFF>(0xC4297F, 4); return true;
    // src/unknown/C0/C05CD7.asm:36 LDX @LOCAL00
    case 0xC05F3B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:37 CLC
    case 0xC05F3D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:38 ADC f:UNKNOWN_C42AEB,X
    case 0xC05F3E: cpu.execute_instruction<0x7F>(0xC42A29, 4); return true;
    // src/unknown/C0/C05CD7.asm:39 STA @LOCAL00
    case 0xC05F42: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:40 STA CHECKED_COLLISION_TOP_Y
    case 0xC05F44: cpu.execute_instruction<0x8D>(0x006134, 3); return true;
    // src/unknown/C0/C05CD7.asm:41 LDX @LOCAL01
    case 0xC05F47: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05CD7.asm:42 TXA
    case 0xC05F49: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:43 CMP #1
    case 0xC05F4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C05CD7.asm:43 CMP #1
    // Overlapping static entry reached from 0xC05F4A.
    case 0xC05F4C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:44 BEQ @UNKNOWN0
    case 0xC05F4D: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C0/C05CD7.asm:45 CMP #0
    case 0xC05F4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C05CD7.asm:45 CMP #0
    // Overlapping static entry reached from 0xC05F4F.
    case 0xC05F51: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:46 BEQ @UNKNOWN1
    case 0xC05F52: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C0/C05CD7.asm:47 CMP #3
    case 0xC05F54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C05CD7.asm:47 CMP #3
    // Overlapping static entry reached from 0xC05F54.
    case 0xC05F56: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:48 BEQ @UNKNOWN2
    case 0xC05F57: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/unknown/C0/C05CD7.asm:49 CMP #2
    case 0xC05F59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C05CD7.asm:49 CMP #2
    // Overlapping static entry reached from 0xC05F59.
    case 0xC05F5B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:50 BEQ @UNKNOWN3
    case 0xC05F5C: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/unknown/C0/C05CD7.asm:51 CMP #5
    case 0xC05F5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C05CD7.asm:51 CMP #5
    // Overlapping static entry reached from 0xC05F5E.
    case 0xC05F60: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:52 BEQ @UNKNOWN4
    case 0xC05F61: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/unknown/C0/C05CD7.asm:53 CMP #4
    case 0xC05F63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C05CD7.asm:53 CMP #4
    // Overlapping static entry reached from 0xC05F63.
    case 0xC05F65: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:54 BEQ @UNKNOWN5
    case 0xC05F66: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/C0/C05CD7.asm:55 CMP #7
    case 0xC05F68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C05CD7.asm:55 CMP #7
    // Overlapping static entry reached from 0xC05F68.
    case 0xC05F6A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:56 BEQ @UNKNOWN6
    case 0xC05F6B: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/unknown/C0/C05CD7.asm:57 CMP #6
    case 0xC05F6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C05CD7.asm:57 CMP #6
    // Overlapping static entry reached from 0xC05F6D.
    case 0xC05F6F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05CD7.asm:58 BEQ @UNKNOWN7
    case 0xC05F70: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C0/C05CD7.asm:59 BRA @UNKNOWN8
    case 0xC05F72: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // src/unknown/C0/C05CD7.asm:61 LDX @VIRTUAL02
    case 0xC05F74: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:62 LDA @LOCAL00
    case 0xC05F76: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:63 JSR UNKNOWN_C056D0
    case 0xC05F78: cpu.execute_instruction<0x20>(0x0058FE, 3); return true;
    // src/unknown/C0/C05CD7.asm:65 LDX @VIRTUAL02
    case 0xC05F7B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:66 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05F7D: cpu.execute_instruction<0xAD>(0x006132, 3); return true;
    // src/unknown/C0/C05CD7.asm:67 JSR UNKNOWN_C05503
    case 0xC05F80: cpu.execute_instruction<0x20>(0x005731, 3); return true;
    // src/unknown/C0/C05CD7.asm:68 BRA @UNKNOWN8
    case 0xC05F83: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C0/C05CD7.asm:70 LDX @VIRTUAL02
    case 0xC05F85: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:71 TYA
    case 0xC05F87: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:72 JSR UNKNOWN_C0559C
    case 0xC05F88: cpu.execute_instruction<0x20>(0x0057CA, 3); return true;
    // src/unknown/C0/C05CD7.asm:74 LDX @VIRTUAL02
    case 0xC05F8B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:75 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05F8D: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C05CD7.asm:76 JSR UNKNOWN_C056D0
    case 0xC05F90: cpu.execute_instruction<0x20>(0x0058FE, 3); return true;
    // src/unknown/C0/C05CD7.asm:77 BRA @UNKNOWN8
    case 0xC05F93: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C0/C05CD7.asm:79 LDX @VIRTUAL02
    case 0xC05F95: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:80 LDA @LOCAL00
    case 0xC05F97: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:81 JSR UNKNOWN_C05639
    case 0xC05F99: cpu.execute_instruction<0x20>(0x005867, 3); return true;
    // src/unknown/C0/C05CD7.asm:83 LDX @VIRTUAL02
    case 0xC05F9C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:84 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05F9E: cpu.execute_instruction<0xAD>(0x006132, 3); return true;
    // src/unknown/C0/C05CD7.asm:85 JSR UNKNOWN_C0559C
    case 0xC05FA1: cpu.execute_instruction<0x20>(0x0057CA, 3); return true;
    // src/unknown/C0/C05CD7.asm:86 BRA @UNKNOWN8
    case 0xC05FA4: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C05CD7.asm:88 LDX @VIRTUAL02
    case 0xC05FA6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:89 TYA
    case 0xC05FA8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05CD7.asm:90 JSR UNKNOWN_C05503
    case 0xC05FA9: cpu.execute_instruction<0x20>(0x005731, 3); return true;
    // src/unknown/C0/C05CD7.asm:92 LDX @VIRTUAL02
    case 0xC05FAC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05CD7.asm:93 LDA CHECKED_COLLISION_TOP_Y
    case 0xC05FAE: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C05CD7.asm:94 JSR UNKNOWN_C05639
    case 0xC05FB1: cpu.execute_instruction<0x20>(0x005867, 3); return true;
    // src/unknown/C0/C05CD7.asm:96 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC05FB4: cpu.execute_instruction<0xAD>(0x00612A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05CD7.asm:97 END_C_FUNCTION
    case 0xC05FB7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05CD7.asm:97 END_C_FUNCTION
    case 0xC05FB8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05D8B.asm (unresolved).
bool execute_unresolved_c0_c05d8b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05D8B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05FB9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    case 0xC05FBB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    case 0xC05FBC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    case 0xC05FBD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    case 0xC05FBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC05FBE.
    case 0xC05FC0: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    case 0xC05FC1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05D8B.asm:12 END_STACK_VARS
    case 0xC05FC2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:13 STY @LOCAL02
    case 0xC05FC3: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C05D8B.asm:13 STY @LOCAL02
    // Overlapping static entry reached from 0xC05FC0.
    case 0xC05FC4: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/unknown/C0/C05D8B.asm:14 STX @LOCAL01
    case 0xC05FC5: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05D8B.asm:14 STX @LOCAL01
    // Overlapping static entry reached from 0xC05FC4.
    case 0xC05FC6: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/unknown/C0/C05D8B.asm:15 STA @LOCAL00
    case 0xC05FC7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05D8B.asm:15 STA @LOCAL00
    // Overlapping static entry reached from 0xC05FC6.
    case 0xC05FC8: cpu.execute_instruction<0x0E>(0x000A98, 3); return true;
    // src/unknown/C0/C05D8B.asm:16 TYA
    case 0xC05FC9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:17 ASL
    case 0xC05FCA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:18 STA @VIRTUAL02
    case 0xC05FCB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05D8B.asm:19 LDX @VIRTUAL02
    case 0xC05FCD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05D8B.asm:20 LDA @LOCAL00
    case 0xC05FCF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05D8B.asm:21 SEC
    case 0xC05FD1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:22 SBC f:UNKNOWN_C42A1F,X
    case 0xC05FD2: cpu.execute_instruction<0xFF>(0xC4295D, 4); return true;
    // src/unknown/C0/C05D8B.asm:23 STA @LOCAL00
    case 0xC05FD6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05D8B.asm:24 STA CHECKED_COLLISION_LEFT_X
    case 0xC05FD8: cpu.execute_instruction<0x8D>(0x006132, 3); return true;
    // src/unknown/C0/C05D8B.asm:25 LDX @LOCAL01
    case 0xC05FDB: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05D8B.asm:26 TXA
    case 0xC05FDD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:27 LDX @VIRTUAL02
    case 0xC05FDE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05D8B.asm:28 SEC
    case 0xC05FE0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:29 SBC f:UNKNOWN_C42A41,X
    case 0xC05FE1: cpu.execute_instruction<0xFF>(0xC4297F, 4); return true;
    // src/unknown/C0/C05D8B.asm:30 LDX @VIRTUAL02
    case 0xC05FE5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05D8B.asm:31 CLC
    case 0xC05FE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:32 ADC f:UNKNOWN_C42AEB,X
    case 0xC05FE8: cpu.execute_instruction<0x7F>(0xC42A29, 4); return true;
    // src/unknown/C0/C05D8B.asm:33 STA CHECKED_COLLISION_TOP_Y
    case 0xC05FEC: cpu.execute_instruction<0x8D>(0x006134, 3); return true;
    // src/unknown/C0/C05D8B.asm:34 TYX
    case 0xC05FEF: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:35 LDA @LOCAL00
    case 0xC05FF0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05D8B.asm:36 JSR UNKNOWN_C05503
    case 0xC05FF2: cpu.execute_instruction<0x20>(0x005731, 3); return true;
    // src/unknown/C0/C05D8B.asm:37 LDY @LOCAL02
    case 0xC05FF5: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C05D8B.asm:38 TYX
    case 0xC05FF7: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:39 LDA CHECKED_COLLISION_LEFT_X
    case 0xC05FF8: cpu.execute_instruction<0xAD>(0x006132, 3); return true;
    // src/unknown/C0/C05D8B.asm:40 JSR UNKNOWN_C0559C
    case 0xC05FFB: cpu.execute_instruction<0x20>(0x0057CA, 3); return true;
    // src/unknown/C0/C05D8B.asm:41 LDY @LOCAL02
    case 0xC05FFE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C05D8B.asm:42 TYX
    case 0xC06000: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:43 LDA CHECKED_COLLISION_TOP_Y
    case 0xC06001: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C05D8B.asm:44 JSR UNKNOWN_C05639
    case 0xC06004: cpu.execute_instruction<0x20>(0x005867, 3); return true;
    // src/unknown/C0/C05D8B.asm:45 LDY @LOCAL02
    case 0xC06007: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C05D8B.asm:46 TYX
    case 0xC06009: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05D8B.asm:47 LDA CHECKED_COLLISION_TOP_Y
    case 0xC0600A: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C05D8B.asm:48 JSR UNKNOWN_C056D0
    case 0xC0600D: cpu.execute_instruction<0x20>(0x0058FE, 3); return true;
    // src/unknown/C0/C05D8B.asm:49 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC06010: cpu.execute_instruction<0xAD>(0x00612A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05D8B.asm:50 END_C_FUNCTION
    case 0xC06013: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05D8B.asm:50 END_C_FUNCTION
    case 0xC06014: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05DE7.asm (unresolved).
bool execute_unresolved_c0_c05de7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C05DE7.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06015: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    case 0xC06017: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    case 0xC06018: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    case 0xC06019: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    case 0xC0601A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0601A.
    case 0xC0601C: cpu.execute_instruction<0xFF>(0xA2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    case 0xC0601D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05DE7.asm:7 END_STACK_VARS
    case 0xC0601E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05DE7.asm:8 LDX #$0000
    case 0xC0601F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C05DE7.asm:8 LDX #$0000
    // Overlapping static entry reached from 0xC0601C.
    case 0xC06020: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C05DE7.asm:8 LDX #$0000
    // Overlapping static entry reached from 0xC0601F.
    case 0xC06021: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C05DE7.asm:9 AND #$000C
    case 0xC06022: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/unknown/C0/C05DE7.asm:9 AND #$000C
    // Overlapping static entry reached from 0xC06022.
    case 0xC06024: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05DE7.asm:10 BEQ @UNKNOWN0
    case 0xC06025: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C05DE7.asm:11 CMP #$0004
    case 0xC06027: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C05DE7.asm:11 CMP #$0004
    // Overlapping static entry reached from 0xC06027.
    case 0xC06029: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05DE7.asm:12 BEQ @UNKNOWN1
    case 0xC0602A: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C05DE7.asm:13 CMP #$0008
    case 0xC0602C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C05DE7.asm:13 CMP #$0008
    // Overlapping static entry reached from 0xC0602C.
    case 0xC0602E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05DE7.asm:14 BEQ @UNKNOWN2
    case 0xC0602F: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C05DE7.asm:15 CMP #$000C
    case 0xC06031: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C05DE7.asm:15 CMP #$000C
    // Overlapping static entry reached from 0xC06031.
    case 0xC06033: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05DE7.asm:16 BEQ @UNKNOWN2
    case 0xC06034: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C05DE7.asm:17 BRA @UNKNOWN3
    case 0xC06036: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C05DE7.asm:19 LDX #$0004
    case 0xC06038: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C0/C05DE7.asm:19 LDX #$0004
    // Overlapping static entry reached from 0xC06038.
    case 0xC0603A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05DE7.asm:20 BRA @UNKNOWN3
    case 0xC0603B: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C05DE7.asm:22 LDX #$0002
    case 0xC0603D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C0/C05DE7.asm:22 LDX #$0002
    // Overlapping static entry reached from 0xC0603D.
    case 0xC0603F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05DE7.asm:23 BRA @UNKNOWN3
    case 0xC06040: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C05DE7.asm:25 LDX #$0001
    case 0xC06042: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C05DE7.asm:25 LDX #$0001
    // Overlapping static entry reached from 0xC06042.
    case 0xC06044: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C05DE7.asm:27 STX @VIRTUAL02
    case 0xC06045: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C05DE7.asm:28 TYA
    case 0xC06047: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05DE7.asm:29 LDY #.SIZEOF(enemy_data)
    case 0xC06048: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/unknown/C0/C05DE7.asm:29 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC06048.
    case 0xC0604A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C05DE7.asm:30 JSL MULT168
    case 0xC0604B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C0/C05DE7.asm:31 CLC
    case 0xC0604F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05DE7.asm:32 ADC #enemy_data::run_flag
    case 0xC06050: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000F, 2); else cpu.execute_instruction<0x69>(0x00000F, 3); return true;
    // src/unknown/C0/C05DE7.asm:32 ADC #enemy_data::run_flag
    // Overlapping static entry reached from 0xC06050.
    case 0xC06052: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C05DE7.asm:33 TAX
    case 0xC06053: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05DE7.asm:34 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC06054: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/unknown/C0/C05DE7.asm:35 AND #$00FF
    case 0xC06058: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05DE7.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC06058.
    case 0xC0605A: cpu.execute_instruction<0x00>(0x000025, 2); return true;
    // src/unknown/C0/C05DE7.asm:36 AND @VIRTUAL02
    case 0xC0605B: cpu.execute_instruction<0x25>(0x000002, 2); return true;
    // src/unknown/C0/C05DE7.asm:37 BEQ @UNKNOWN4
    case 0xC0605D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C05DE7.asm:38 LDA #$0000
    case 0xC0605F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05DE7.asm:38 LDA #$0000
    // Overlapping static entry reached from 0xC0605F.
    case 0xC06061: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05DE7.asm:39 BRA @UNKNOWN5
    case 0xC06062: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C05DE7.asm:41 LDA #$0080
    case 0xC06064: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/C0/C05DE7.asm:41 LDA #$0080
    // Overlapping static entry reached from 0xC06064.
    case 0xC06066: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/unknown/C0/C05DE7.asm:43 PLD
    case 0xC06067: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C05DE7.asm:44 RTL
    case 0xC06068: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05E3B.asm (unresolved).
bool execute_unresolved_c0_c05e3b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05E3B.asm:3 BEGIN_C_FUNCTION
    case 0xC06069: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    case 0xC0606B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    case 0xC0606C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    case 0xC0606D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    case 0xC0606E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0606E.
    case 0xC06070: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    case 0xC06071: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05E3B.asm:8 END_STACK_VARS
    case 0xC06072: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05E3B.asm:9 STA @LOCAL01
    case 0xC06073: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05E3B.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC06070.
    case 0xC06074: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C0/C05E3B.asm:10 JSL UNKNOWN_C09EFF
    case 0xC06075: cpu.execute_instruction<0x22>(0xC09EDE, 4); return true;
    // src/unknown/C0/C05E3B.asm:10 JSL UNKNOWN_C09EFF
    // Overlapping static entry reached from 0xC06074.
    case 0xC06076: cpu.execute_instruction<0xDE>(0x00C09E, 3); return true;
    // src/unknown/C0/C05E3B.asm:11 TAX
    case 0xC06079: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05E3B.asm:12 BNE @UNKNOWN0
    case 0xC0607A: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05E3B.asm:13 LDA #$FF00
    case 0xC0607C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05E3B.asm:13 LDA #$FF00
    // Overlapping static entry reached from 0xC0607C.
    case 0xC0607E: cpu.execute_instruction<0xFF>(0xA52180, 4); return true;
    // src/unknown/C0/C05E3B.asm:14 BRA @UNKNOWN1
    case 0xC0607F: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C0/C05E3B.asm:16 LDA @LOCAL01
    case 0xC06081: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05E3B.asm:16 LDA @LOCAL01
    // Overlapping static entry reached from 0xC0607E.
    case 0xC06082: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // src/unknown/C0/C05E3B.asm:17 ASL
    case 0xC06083: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05E3B.asm:18 STA @VIRTUAL02
    case 0xC06084: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05E3B.asm:19 LDX @VIRTUAL02
    case 0xC06086: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05E3B.asm:20 LDA ENTITY_DIRECTIONS,X
    case 0xC06088: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/unknown/C0/C05E3B.asm:21 STA @LOCAL00
    case 0xC0608B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05E3B.asm:22 LDA @LOCAL01
    case 0xC0608D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05E3B.asm:22 LDA @LOCAL01
    // Overlapping static entry reached from 0xC06082.
    case 0xC0608E: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C0/C05E3B.asm:23 TAY
    case 0xC0608F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05E3B.asm:24 LDX ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC06090: cpu.execute_instruction<0xAE>(0x002C4A, 3); return true;
    // src/unknown/C0/C05E3B.asm:25 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC06093: cpu.execute_instruction<0xAD>(0x002C48, 3); return true;
    // src/unknown/C0/C05E3B.asm:26 JSL UNKNOWN_C05CD7
    case 0xC06096: cpu.execute_instruction<0x22>(0xC05F05, 4); return true;
    // src/unknown/C0/C05E3B.asm:26 JSL UNKNOWN_C05CD7
    // Overlapping static entry reached from 0xC06074.
    case 0xC06098: cpu.execute_instruction<0x5F>(0xD029C0, 4); return true;
    // src/unknown/C0/C05E3B.asm:27 AND #$00D0
    case 0xC0609A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000D0, 2); else cpu.execute_instruction<0x29>(0x0000D0, 3); return true;
    // src/unknown/C0/C05E3B.asm:27 AND #$00D0
    // Overlapping static entry reached from 0xC0609A.
    case 0xC0609C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C05E3B.asm:28 LDX @VIRTUAL02
    case 0xC0609D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05E3B.asm:29 STA ENTITY_OBSTACLE_FLAGS,X
    case 0xC0609F: cpu.execute_instruction<0x9D>(0x002CD8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05E3B.asm:31 END_C_FUNCTION
    case 0xC060A2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05E3B.asm:31 END_C_FUNCTION
    case 0xC060A3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05E76.asm (unresolved).
bool execute_unresolved_c0_c05e76_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C05E76.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC060A4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C05E76.asm:4 LDA CURRENT_ENTITY_SLOT
    case 0xC060A6: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C05E76.asm:5 JSR UNKNOWN_C05E3B
    case 0xC060A9: cpu.execute_instruction<0x20>(0x006069, 3); return true;
    // src/unknown/C0/C05E76.asm:6 AND #$00FF
    case 0xC060AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C05E76.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC060AC.
    case 0xC060AE: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C05E76.asm:7 RTL
    case 0xC060AF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05E82.asm (unresolved).
bool execute_unresolved_c0_c05e82_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05E82.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC060B0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05E82.asm:7 END_STACK_VARS
    case 0xC060B2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05E82.asm:7 END_STACK_VARS
    case 0xC060B3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05E82.asm:7 END_STACK_VARS
    case 0xC060B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05E82.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC060B4.
    case 0xC060B6: cpu.execute_instruction<0xFF>(0x38AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05E82.asm:7 END_STACK_VARS
    case 0xC060B7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:8 LDX CURRENT_ENTITY_SLOT
    case 0xC060B8: cpu.execute_instruction<0xAE>(0x001A38, 3); return true;
    // src/unknown/C0/C05E82.asm:8 LDX CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC060B6.
    case 0xC060BA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:9 STX @LOCAL01
    case 0xC060BB: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C05E82.asm:10 TXA
    case 0xC060BD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:11 JSR UNKNOWN_C05E3B
    case 0xC060BE: cpu.execute_instruction<0x20>(0x006069, 3); return true;
    // src/unknown/C0/C05E82.asm:12 STA @LOCAL00
    case 0xC060C1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05E82.asm:13 CMP #$FF00
    case 0xC060C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x00FF00, 3); return true;
    // src/unknown/C0/C05E82.asm:13 CMP #$FF00
    // Overlapping static entry reached from 0xC060C3.
    case 0xC060C5: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/unknown/C0/C05E82.asm:14 BNE @UNKNOWN0
    case 0xC060C6: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05E82.asm:15 LDA #0
    case 0xC060C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05E82.asm:15 LDA #0
    // Overlapping static entry reached from 0xC060C5.
    case 0xC060C9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C05E82.asm:15 LDA #0
    // Overlapping static entry reached from 0xC060C8.
    case 0xC060CA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05E82.asm:16 BRA @UNKNOWN2
    case 0xC060CB: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C0/C05E82.asm:18 CMP #0
    case 0xC060CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C05E82.asm:18 CMP #0
    // Overlapping static entry reached from 0xC060CD.
    case 0xC060CF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C05E82.asm:19 BEQ @UNKNOWN1
    case 0xC060D0: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C05E82.asm:20 LDA #0
    case 0xC060D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05E82.asm:20 LDA #0
    // Overlapping static entry reached from 0xC060D2.
    case 0xC060D4: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05E82.asm:21 BRA @UNKNOWN2
    case 0xC060D5: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/unknown/C0/C05E82.asm:23 LDX @LOCAL01
    case 0xC060D7: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05E82.asm:24 TXA
    case 0xC060D9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:25 ASL
    case 0xC060DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:26 TAY
    case 0xC060DB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:27 CLC
    case 0xC060DC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:28 ADC #.LOWORD(ENTITY_OBSTACLE_FLAGS)
    case 0xC060DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x002CD8, 3); return true;
    // src/unknown/C0/C05E82.asm:28 ADC #.LOWORD(ENTITY_OBSTACLE_FLAGS)
    // Overlapping static entry reached from 0xC060DD.
    case 0xC060DF: cpu.execute_instruction<0x2C>(0x000285, 3); return true;
    // src/unknown/C0/C05E82.asm:29 STA @VIRTUAL02
    case 0xC060E0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05E82.asm:30 LDA ENTITY_ENEMY_IDS,Y
    case 0xC060E2: cpu.execute_instruction<0xB9>(0x003110, 3); return true;
    // src/unknown/C0/C05E82.asm:31 TAY
    case 0xC060E5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C05E82.asm:32 LDA @LOCAL00
    case 0xC060E6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05E82.asm:33 JSL UNKNOWN_C05DE7
    case 0xC060E8: cpu.execute_instruction<0x22>(0xC06015, 4); return true;
    // src/unknown/C0/C05E82.asm:34 STA @VIRTUAL04
    case 0xC060EC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05E82.asm:35 LDX @VIRTUAL02
    case 0xC060EE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05E82.asm:36 LDA __BSS_START__,X
    case 0xC060F0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C05E82.asm:37 ORA @VIRTUAL04
    case 0xC060F3: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/unknown/C0/C05E82.asm:38 LDX @VIRTUAL02
    case 0xC060F5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05E82.asm:39 STA __BSS_START__,X
    case 0xC060F7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05E82.asm:41 END_C_FUNCTION
    case 0xC060FA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05E82.asm:41 END_C_FUNCTION
    case 0xC060FB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05ECE.asm (unresolved).
bool execute_unresolved_c0_c05ece_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05ECE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC060FC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05ECE.asm:7 END_STACK_VARS
    case 0xC060FE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05ECE.asm:7 END_STACK_VARS
    case 0xC060FF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05ECE.asm:7 END_STACK_VARS
    case 0xC06100: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05ECE.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC06100.
    case 0xC06102: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05ECE.asm:7 END_STACK_VARS
    case 0xC06103: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC06104: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C0/C05ECE.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC06102.
    case 0xC06106: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:9 STA @LOCAL01
    case 0xC06107: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05ECE.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC0616E.
    case 0xC06108: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C0/C05ECE.asm:10 JSL UNKNOWN_C09EFF
    case 0xC06109: cpu.execute_instruction<0x22>(0xC09EDE, 4); return true;
    // src/unknown/C0/C05ECE.asm:10 JSL UNKNOWN_C09EFF
    // Overlapping static entry reached from 0xC06108.
    case 0xC0610A: cpu.execute_instruction<0xDE>(0x00C09E, 3); return true;
    // src/unknown/C0/C05ECE.asm:11 CMP #0
    case 0xC0610D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C05ECE.asm:11 CMP #0
    // Overlapping static entry reached from 0xC0610D.
    case 0xC0610F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C05ECE.asm:12 BNE @UNKNOWN0
    case 0xC06110: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C05ECE.asm:13 LDA #0
    case 0xC06112: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05ECE.asm:13 LDA #0
    // Overlapping static entry reached from 0xC06112.
    case 0xC06114: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05ECE.asm:14 BRA @UNKNOWN2
    case 0xC06115: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C0/C05ECE.asm:16 LDY @LOCAL01
    case 0xC06117: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C05ECE.asm:17 LDX ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC06119: cpu.execute_instruction<0xAE>(0x002C4A, 3); return true;
    // src/unknown/C0/C05ECE.asm:18 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC0611C: cpu.execute_instruction<0xAD>(0x002C48, 3); return true;
    // src/unknown/C0/C05ECE.asm:19 JSL UNKNOWN_C05F82
    case 0xC0611F: cpu.execute_instruction<0x22>(0xC061B0, 4); return true;
    // src/unknown/C0/C05ECE.asm:20 AND #$00D0
    case 0xC06123: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000D0, 2); else cpu.execute_instruction<0x29>(0x0000D0, 3); return true;
    // src/unknown/C0/C05ECE.asm:20 AND #$00D0
    // Overlapping static entry reached from 0xC06123.
    case 0xC06125: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C05ECE.asm:21 STA @VIRTUAL02
    case 0xC06126: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:22 LDA @LOCAL01
    case 0xC06128: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05ECE.asm:23 ASL
    case 0xC0612A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:24 TAX
    case 0xC0612B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:25 STX @LOCAL00
    case 0xC0612C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C05ECE.asm:26 TXA
    case 0xC0612E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:27 CLC
    case 0xC0612F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:28 ADC #.LOWORD(ENTITY_OBSTACLE_FLAGS)
    case 0xC06130: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x002CD8, 3); return true;
    // src/unknown/C0/C05ECE.asm:28 ADC #.LOWORD(ENTITY_OBSTACLE_FLAGS)
    // Overlapping static entry reached from 0xC06130.
    case 0xC06132: cpu.execute_instruction<0x2C>(0x000485, 3); return true;
    // src/unknown/C0/C05ECE.asm:29 STA @VIRTUAL04
    case 0xC06133: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C05ECE.asm:30 LDA @VIRTUAL02
    case 0xC06135: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:31 LDX @VIRTUAL04
    case 0xC06137: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C05ECE.asm:32 STA __BSS_START__,X
    case 0xC06139: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C05ECE.asm:33 LDA @VIRTUAL02
    case 0xC0613C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:34 BEQ @UNKNOWN1
    case 0xC0613E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C05ECE.asm:35 LDA #0
    case 0xC06140: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C05ECE.asm:35 LDA #0
    // Overlapping static entry reached from 0xC06140.
    case 0xC06142: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C05ECE.asm:36 BRA @UNKNOWN2
    case 0xC06143: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C0/C05ECE.asm:38 LDX @LOCAL00
    case 0xC06145: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C05ECE.asm:39 LDY ENTITY_ENEMY_IDS,X
    case 0xC06147: cpu.execute_instruction<0xBC>(0x003110, 3); return true;
    // src/unknown/C0/C05ECE.asm:40 LDX @LOCAL01
    case 0xC0614A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C05ECE.asm:41 LDA @VIRTUAL02
    case 0xC0614C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:42 JSL UNKNOWN_C05DE7
    case 0xC0614E: cpu.execute_instruction<0x22>(0xC06015, 4); return true;
    // src/unknown/C0/C05ECE.asm:43 PHA
    case 0xC06152: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:44 LDA @VIRTUAL02
    case 0xC06153: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:45 PLY
    case 0xC06155: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C05ECE.asm:46 STY @VIRTUAL02
    case 0xC06156: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:47 ORA @VIRTUAL02
    case 0xC06158: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C05ECE.asm:48 LDX @VIRTUAL04
    case 0xC0615A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C05ECE.asm:48 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC061BD.
    case 0xC0615B: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/unknown/C0/C05ECE.asm:49 STA __BSS_START__,X
    case 0xC0615C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C05ECE.asm:49 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0615B.
    case 0xC0615D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05ECE.asm:51 END_C_FUNCTION
    case 0xC0615F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05ECE.asm:51 END_C_FUNCTION
    case 0xC06160: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05F33.asm (unresolved).
bool execute_unresolved_c0_c05f33_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05F33.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06161: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    case 0xC06163: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    case 0xC06164: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    case 0xC06165: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    case 0xC06166: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC06166.
    case 0xC06168: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    case 0xC06169: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05F33.asm:12 END_STACK_VARS
    case 0xC0616A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:13 STX @LOCAL02
    case 0xC0616B: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C05F33.asm:13 STX @LOCAL02
    // Overlapping static entry reached from 0xC06168.
    case 0xC0616C: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C0/C05F33.asm:14 STA @LOCAL01
    case 0xC0616D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05F33.asm:14 STA @LOCAL01
    // Overlapping static entry reached from 0xC0616C.
    case 0xC0616E: cpu.execute_instruction<0x10>(0x000098, 2); return true;
    // src/unknown/C0/C05F33.asm:15 TYA
    case 0xC0616F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:16 ASL
    case 0xC06170: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:17 TAX
    case 0xC06171: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:18 LDY ENTITY_SIZES,X
    case 0xC06172: cpu.execute_instruction<0xBC>(0x002F6C, 3); return true;
    // src/unknown/C0/C05F33.asm:19 STY @LOCAL00
    case 0xC06175: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C05F33.asm:20 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC06177: cpu.execute_instruction<0x9C>(0x00612A, 3); return true;
    // src/unknown/C0/C05F33.asm:21 TYA
    case 0xC0617A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:22 ASL
    case 0xC0617B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:23 STA @VIRTUAL02
    case 0xC0617C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05F33.asm:24 LDX @VIRTUAL02
    case 0xC0617E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05F33.asm:25 LDA @LOCAL01
    case 0xC06180: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05F33.asm:26 SEC
    case 0xC06182: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:27 SBC f:UNKNOWN_C42A1F,X
    case 0xC06183: cpu.execute_instruction<0xFF>(0xC4295D, 4); return true;
    // src/unknown/C0/C05F33.asm:28 STA CHECKED_COLLISION_LEFT_X
    case 0xC06187: cpu.execute_instruction<0x8D>(0x006132, 3); return true;
    // src/unknown/C0/C05F33.asm:29 LDX @LOCAL02
    case 0xC0618A: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C05F33.asm:30 TXA
    case 0xC0618C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:31 LDX @VIRTUAL02
    case 0xC0618D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05F33.asm:32 SEC
    case 0xC0618F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:33 SBC f:UNKNOWN_C42A41,X
    case 0xC06190: cpu.execute_instruction<0xFF>(0xC4297F, 4); return true;
    // src/unknown/C0/C05F33.asm:34 LDX @VIRTUAL02
    case 0xC06194: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05F33.asm:35 CLC
    case 0xC06196: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:36 ADC f:UNKNOWN_C42AEB,X
    case 0xC06197: cpu.execute_instruction<0x7F>(0xC42A29, 4); return true;
    // src/unknown/C0/C05F33.asm:37 STA CHECKED_COLLISION_TOP_Y
    case 0xC0619B: cpu.execute_instruction<0x8D>(0x006134, 3); return true;
    // src/unknown/C0/C05F33.asm:38 TYX
    case 0xC0619E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:39 JSR UNKNOWN_C05639
    case 0xC0619F: cpu.execute_instruction<0x20>(0x005867, 3); return true;
    // src/unknown/C0/C05F33.asm:40 LDY @LOCAL00
    case 0xC061A2: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C05F33.asm:41 TYX
    case 0xC061A4: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05F33.asm:42 LDA CHECKED_COLLISION_TOP_Y
    case 0xC061A5: cpu.execute_instruction<0xAD>(0x006134, 3); return true;
    // src/unknown/C0/C05F33.asm:43 JSR UNKNOWN_C056D0
    case 0xC061A8: cpu.execute_instruction<0x20>(0x0058FE, 3); return true;
    // src/unknown/C0/C05F33.asm:44 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC061AB: cpu.execute_instruction<0xAD>(0x00612A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05F33.asm:45 END_C_FUNCTION
    case 0xC061AE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05F33.asm:45 END_C_FUNCTION
    case 0xC061AF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05F82.asm (unresolved).
bool execute_unresolved_c0_c05f82_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05F82.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC061B0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    case 0xC061B2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    case 0xC061B3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    case 0xC061B4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    case 0xC061B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC061B5.
    case 0xC061B7: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    case 0xC061B8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05F82.asm:11 END_STACK_VARS
    case 0xC061B9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:12 STX @LOCAL02
    case 0xC061BA: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C05F82.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC061B7.
    case 0xC061BB: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C0/C05F82.asm:13 STA @LOCAL01
    case 0xC061BC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C05F82.asm:13 STA @LOCAL01
    // Overlapping static entry reached from 0xC061BB.
    case 0xC061BD: cpu.execute_instruction<0x10>(0x00009C, 2); return true;
    // src/unknown/C0/C05F82.asm:14 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC061BE: cpu.execute_instruction<0x9C>(0x00612A, 3); return true;
    // src/unknown/C0/C05F82.asm:14 STZ TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC061BD.
    case 0xC061BF: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:14 STZ TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC061BF.
    case 0xC061C0: cpu.execute_instruction<0x61>(0x000098, 2); return true;
    // src/unknown/C0/C05F82.asm:15 TYA
    case 0xC061C1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:16 ASL
    case 0xC061C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:17 TAX
    case 0xC061C3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:18 LDY ENTITY_SIZES,X
    case 0xC061C4: cpu.execute_instruction<0xBC>(0x002F6C, 3); return true;
    // src/unknown/C0/C05F82.asm:19 STY @LOCAL00
    case 0xC061C7: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C05F82.asm:20 TYA
    case 0xC061C9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:21 ASL
    case 0xC061CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:22 STA @VIRTUAL02
    case 0xC061CB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C05F82.asm:23 LDX @LOCAL02
    case 0xC061CD: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C05F82.asm:24 TXA
    case 0xC061CF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:25 LDX @VIRTUAL02
    case 0xC061D0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05F82.asm:26 SEC
    case 0xC061D2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:27 SBC f:UNKNOWN_C42A41,X
    case 0xC061D3: cpu.execute_instruction<0xFF>(0xC4297F, 4); return true;
    // src/unknown/C0/C05F82.asm:28 LDX @VIRTUAL02
    case 0xC061D7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05F82.asm:29 CLC
    case 0xC061D9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:30 ADC f:UNKNOWN_C42AEB,X
    case 0xC061DA: cpu.execute_instruction<0x7F>(0xC42A29, 4); return true;
    // src/unknown/C0/C05F82.asm:31 STA CHECKED_COLLISION_TOP_Y
    case 0xC061DE: cpu.execute_instruction<0x8D>(0x006134, 3); return true;
    // src/unknown/C0/C05F82.asm:32 LDX @VIRTUAL02
    case 0xC061E1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C05F82.asm:33 LDA @LOCAL01
    case 0xC061E3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C05F82.asm:34 SEC
    case 0xC061E5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:35 SBC f:UNKNOWN_C42A1F,X
    case 0xC061E6: cpu.execute_instruction<0xFF>(0xC4295D, 4); return true;
    // src/unknown/C0/C05F82.asm:36 STA CHECKED_COLLISION_LEFT_X
    case 0xC061EA: cpu.execute_instruction<0x8D>(0x006132, 3); return true;
    // src/unknown/C0/C05F82.asm:37 TYX
    case 0xC061ED: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:38 JSR UNKNOWN_C05503
    case 0xC061EE: cpu.execute_instruction<0x20>(0x005731, 3); return true;
    // src/unknown/C0/C05F82.asm:39 LDY @LOCAL00
    case 0xC061F1: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C05F82.asm:40 TYX
    case 0xC061F3: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C05F82.asm:41 LDA CHECKED_COLLISION_LEFT_X
    case 0xC061F4: cpu.execute_instruction<0xAD>(0x006132, 3); return true;
    // src/unknown/C0/C05F82.asm:42 JSR UNKNOWN_C0559C
    case 0xC061F7: cpu.execute_instruction<0x20>(0x0057CA, 3); return true;
    // src/unknown/C0/C05F82.asm:43 LDA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC061FA: cpu.execute_instruction<0xAD>(0x00612A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05F82.asm:44 END_C_FUNCTION
    case 0xC061FD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C05F82.asm:44 END_C_FUNCTION
    case 0xC061FE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C05FD1.asm (unresolved).
bool execute_unresolved_c0_c05fd1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C05FD1.asm:3 BEGIN_C_FUNCTION
    case 0xC061FF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    case 0xC06201: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    case 0xC06202: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    case 0xC06203: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    case 0xC06204: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC06204.
    case 0xC06206: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    case 0xC06207: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C05FD1.asm:7 END_STACK_VARS
    case 0xC06208: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:8 STA @LOCAL00
    case 0xC06209: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C05FD1.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC06206.
    case 0xC0620A: cpu.execute_instruction<0x0E>(0x002A9C, 3); return true;
    // src/unknown/C0/C05FD1.asm:9 STZ TEMP_ENTITY_SURFACE_FLAGS
    case 0xC0620B: cpu.execute_instruction<0x9C>(0x00612A, 3); return true;
    // src/unknown/C0/C05FD1.asm:9 STZ TEMP_ENTITY_SURFACE_FLAGS
    // Overlapping static entry reached from 0xC0620A.
    case 0xC0620D: cpu.execute_instruction<0x61>(0x00008A, 2); return true;
    // src/unknown/C0/C05FD1.asm:10 TXA
    case 0xC0620E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:11 INC
    case 0xC0620F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:12 INC
    case 0xC06210: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:13 INC
    case 0xC06211: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:14 INC
    case 0xC06212: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:15 LSR
    case 0xC06213: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:16 LSR
    case 0xC06214: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:17 LSR
    case 0xC06215: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:18 TAX
    case 0xC06216: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:19 LDA @LOCAL00
    case 0xC06217: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C05FD1.asm:20 LSR
    case 0xC06219: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:21 LSR
    case 0xC0621A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:22 LSR
    case 0xC0621B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C05FD1.asm:23 JSR UNKNOWN_C054C9
    case 0xC0621C: cpu.execute_instruction<0x20>(0x0056F7, 3); return true;
    // src/unknown/C0/C05FD1.asm:24 STA TEMP_ENTITY_SURFACE_FLAGS
    case 0xC0621F: cpu.execute_instruction<0x8D>(0x00612A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C05FD1.asm:25 END_C_FUNCTION
    case 0xC06222: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C05FD1.asm:25 END_C_FUNCTION
    case 0xC06223: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0613C.asm (unresolved).
bool execute_unresolved_c0_c0613c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0613C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0636A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    case 0xC0636C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    case 0xC0636D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    case 0xC0636E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    case 0xC0636F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC0636F.
    case 0xC06371: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    case 0xC06372: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0613C.asm:18 END_STACK_VARS
    case 0xC06373: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:19 STY @LOCAL08
    case 0xC06374: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/unknown/C0/C0613C.asm:19 STY @LOCAL08
    // Overlapping static entry reached from 0xC06371.
    case 0xC06375: cpu.execute_instruction<0x1E>(0x000286, 3); return true;
    // src/unknown/C0/C0613C.asm:20 STX @VIRTUAL02
    case 0xC06376: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:21 STX @LOCAL07
    case 0xC06378: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C0613C.asm:22 TAY
    case 0xC0637A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:23 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC0637B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0613C.asm:23 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC0637B.
    case 0xC0637D: cpu.execute_instruction<0xFF>(0xA51A85, 4); return true;
    // src/unknown/C0/C0613C.asm:24 STA @LOCAL06
    case 0xC0637E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0613C.asm:25 LDA @LOCAL08
    case 0xC06380: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0613C.asm:25 LDA @LOCAL08
    // Overlapping static entry reached from 0xC0637D.
    case 0xC06381: cpu.execute_instruction<0x1E>(0x00AA0A, 3); return true;
    // src/unknown/C0/C0613C.asm:26 ASL
    case 0xC06382: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:27 TAX
    case 0xC06383: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:28 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC06384: cpu.execute_instruction<0xBD>(0x003728, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0613C.asm:29 BEQL @UNKNOWN13
    case 0xC06387: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0613C.asm:29 BEQL @UNKNOWN13
    case 0xC06389: cpu.execute_instruction<0x4C>(0x006488, 3); return true;
    // src/unknown/C0/C0613C.asm:30 LDA ENTITY_DIRECTIONS,X
    case 0xC0638C: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/unknown/C0/C0613C.asm:31 CMP #DIRECTION::RIGHT
    case 0xC0638F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0613C.asm:31 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC0638F.
    case 0xC06391: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0613C.asm:32 BEQ @UNKNOWN1
    case 0xC06392: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0613C.asm:33 CMP #DIRECTION::LEFT
    case 0xC06394: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0613C.asm:33 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC06394.
    case 0xC06396: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0613C.asm:34 BNE @UNKNOWN2
    case 0xC06397: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C0/C0613C.asm:36 LDA @LOCAL08
    case 0xC06399: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0613C.asm:37 ASL
    case 0xC0639B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:38 TAX
    case 0xC0639C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:39 LDA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC0639D: cpu.execute_instruction<0xBD>(0x0037DC, 3); return true;
    // src/unknown/C0/C0613C.asm:40 STA @LOCAL05
    case 0xC063A0: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0613C.asm:41 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC063A2: cpu.execute_instruction<0xBD>(0x001A40, 3); return true;
    // src/unknown/C0/C0613C.asm:42 STA @VIRTUAL04
    case 0xC063A5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0613C.asm:43 BRA @UNKNOWN3
    case 0xC063A7: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C0613C.asm:45 LDA ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC063A9: cpu.execute_instruction<0xBD>(0x003764, 3); return true;
    // src/unknown/C0/C0613C.asm:46 STA @LOCAL05
    case 0xC063AC: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C0613C.asm:47 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC063AE: cpu.execute_instruction<0xBD>(0x0037A0, 3); return true;
    // src/unknown/C0/C0613C.asm:48 STA @VIRTUAL04
    case 0xC063B1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0613C.asm:50 LDA @LOCAL05
    case 0xC063B3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0613C.asm:51 STA @VIRTUAL02
    case 0xC063B5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:52 TYA
    case 0xC063B7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:53 SEC
    case 0xC063B8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:54 SBC @VIRTUAL02
    case 0xC063B9: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:55 STA @LOCAL04
    case 0xC063BB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0613C.asm:56 LDA @LOCAL05
    case 0xC063BD: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C0613C.asm:57 ASL
    case 0xC063BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:58 STA @LOCAL03
    case 0xC063C0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C0613C.asm:59 LDA @LOCAL07
    case 0xC063C2: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C0/C0613C.asm:60 STA @VIRTUAL02
    case 0xC063C4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:61 SEC
    case 0xC063C6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:62 SBC @VIRTUAL04
    case 0xC063C7: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0613C.asm:63 STA @LOCAL07
    case 0xC063C9: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C0/C0613C.asm:64 LDA #0
    case 0xC063CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0613C.asm:64 LDA #0
    // Overlapping static entry reached from 0xC063CB.
    case 0xC063CD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0613C.asm:65 STA @VIRTUAL02
    case 0xC063CE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:66 STA @LOCAL02
    case 0xC063D0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0613C.asm:67 JMP @UNKNOWN12
    case 0xC063D2: cpu.execute_instruction<0x4C>(0x00647E, 3); return true;
    // src/unknown/C0/C0613C.asm:69 LDA @VIRTUAL02
    case 0xC063D5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:70 CMP @LOCAL08
    case 0xC063D7: cpu.execute_instruction<0xC5>(0x00001E, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0613C.asm:71 BEQL @UNKNOWN11
    case 0xC063D9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0613C.asm:71 BEQL @UNKNOWN11
    case 0xC063DB: cpu.execute_instruction<0x4C>(0x006474, 3); return true;
    // src/unknown/C0/C0613C.asm:72 LDA @VIRTUAL02
    case 0xC063DE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:73 CMP #23
    case 0xC063E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/unknown/C0/C0613C.asm:73 CMP #23
    // Overlapping static entry reached from 0xC063E0.
    case 0xC063E2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0613C.asm:74 BEQL @UNKNOWN11
    case 0xC063E3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0613C.asm:74 BEQL @UNKNOWN11
    case 0xC063E5: cpu.execute_instruction<0x4C>(0x006474, 3); return true;
    // src/unknown/C0/C0613C.asm:75 LDA @VIRTUAL02
    case 0xC063E8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:76 ASL
    case 0xC063EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:77 TAX
    case 0xC063EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:78 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC063EC: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/C0/C0613C.asm:78 LDA ENTITY_SCRIPT_TABLE,X
    // Overlapping static entry reached from 0xC063FC.
    case 0xC063EE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:79 CMP #.LOWORD(-1)
    case 0xC063EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0613C.asm:79 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC063EF.
    case 0xC063F1: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C0613C.asm:80 BEQL @UNKNOWN11
    case 0xC063F2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0613C.asm:80 BEQL @UNKNOWN11
    case 0xC063F4: cpu.execute_instruction<0x4C>(0x006474, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C0613C.asm:80 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC063F1.
    case 0xC063F5: cpu.execute_instruction<0x74>(0x000064, 2); return true;
    // src/unknown/C0/C0613C.asm:81 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC063F7: cpu.execute_instruction<0xBD>(0x002C9C, 3); return true;
    // src/unknown/C0/C0613C.asm:82 CMP #ENTITY_COLLISION_DISABLED
    case 0xC063FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C0613C.asm:82 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC063FA.
    case 0xC063FC: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C0613C.asm:83 BEQ @UNKNOWN11
    case 0xC063FD: cpu.execute_instruction<0xF0>(0x000075, 2); return true;
    // src/unknown/C0/C0613C.asm:84 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC063FF: cpu.execute_instruction<0xBD>(0x003728, 3); return true;
    // src/unknown/C0/C0613C.asm:85 BEQ @UNKNOWN11
    case 0xC06402: cpu.execute_instruction<0xF0>(0x000070, 2); return true;
    // src/unknown/C0/C0613C.asm:86 LDA ENTITY_DIRECTIONS,X
    case 0xC06404: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/unknown/C0/C0613C.asm:87 CMP #DIRECTION::RIGHT
    case 0xC06407: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0613C.asm:87 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC06407.
    case 0xC06409: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0613C.asm:88 BEQ @UNKNOWN8
    case 0xC0640A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0613C.asm:89 CMP #DIRECTION::LEFT
    case 0xC0640C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0613C.asm:89 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC0640C.
    case 0xC0640E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0613C.asm:90 BNE @UNKNOWN9
    case 0xC0640F: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C0/C0613C.asm:92 LDA @VIRTUAL02
    case 0xC06411: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:93 ASL
    case 0xC06413: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:94 TAX
    case 0xC06414: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:95 LDY ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC06415: cpu.execute_instruction<0xBC>(0x0037DC, 3); return true;
    // src/unknown/C0/C0613C.asm:96 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC06418: cpu.execute_instruction<0xBD>(0x001A40, 3); return true;
    // src/unknown/C0/C0613C.asm:97 STA @LOCAL01
    case 0xC0641B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0613C.asm:98 BRA @UNKNOWN10
    case 0xC0641D: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C0613C.asm:100 LDY ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC0641F: cpu.execute_instruction<0xBC>(0x003764, 3); return true;
    // src/unknown/C0/C0613C.asm:101 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC06422: cpu.execute_instruction<0xBD>(0x0037A0, 3); return true;
    // src/unknown/C0/C0613C.asm:102 STA @LOCAL01
    case 0xC06425: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0613C.asm:104 LDA @VIRTUAL02
    case 0xC06427: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:105 ASL
    case 0xC06429: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:106 TAX
    case 0xC0642A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:107 LDA @LOCAL01
    case 0xC0642B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0613C.asm:108 STA @VIRTUAL02
    case 0xC0642D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:109 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0642F: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C0/C0613C.asm:110 SEC
    case 0xC06432: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:111 SBC @VIRTUAL02
    case 0xC06433: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:112 STA @LOCAL00
    case 0xC06435: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0613C.asm:113 SEC
    case 0xC06437: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:114 SBC @VIRTUAL04
    case 0xC06438: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C0/C0613C.asm:115 CMP @LOCAL07
    case 0xC0643A: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // src/unknown/C0/C0613C.asm:116 BCS @UNKNOWN11
    case 0xC0643C: cpu.execute_instruction<0xB0>(0x000036, 2); return true;
    // src/unknown/C0/C0613C.asm:117 LDA @LOCAL01
    case 0xC0643E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0613C.asm:118 CLC
    case 0xC06440: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:119 ADC @LOCAL00
    case 0xC06441: cpu.execute_instruction<0x65>(0x00000E, 2); return true;
    // src/unknown/C0/C0613C.asm:120 CMP @LOCAL07
    case 0xC06443: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0613C.asm:121 BLTEQ @UNKNOWN11
    case 0xC06445: cpu.execute_instruction<0x90>(0x00002D, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0613C.asm:121 BLTEQ @UNKNOWN11
    case 0xC06447: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C0/C0613C.asm:122 STY @VIRTUAL02
    case 0xC06449: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:123 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0644B: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C0/C0613C.asm:124 SEC
    case 0xC0644E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:125 SBC @VIRTUAL02
    case 0xC0644F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:126 STA @LOCAL00
    case 0xC06451: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0613C.asm:127 TYA
    case 0xC06453: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:128 ASL
    case 0xC06454: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:129 TAX
    case 0xC06455: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:130 LDA @LOCAL00
    case 0xC06456: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0613C.asm:131 SEC
    case 0xC06458: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:132 SBC @LOCAL03
    case 0xC06459: cpu.execute_instruction<0xE5>(0x000014, 2); return true;
    // src/unknown/C0/C0613C.asm:133 CMP @LOCAL04
    case 0xC0645B: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/unknown/C0/C0613C.asm:134 BCS @UNKNOWN11
    case 0xC0645D: cpu.execute_instruction<0xB0>(0x000015, 2); return true;
    // src/unknown/C0/C0613C.asm:135 STX @VIRTUAL02
    case 0xC0645F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:136 LDA @LOCAL00
    case 0xC06461: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0613C.asm:137 CLC
    case 0xC06463: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:138 ADC @VIRTUAL02
    case 0xC06464: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:139 CMP @LOCAL04
    case 0xC06466: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0613C.asm:140 BLTEQ @UNKNOWN11
    case 0xC06468: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0613C.asm:140 BLTEQ @UNKNOWN11
    case 0xC0646A: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0613C.asm:141 LDA @LOCAL02
    case 0xC0646C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0613C.asm:142 STA @VIRTUAL02
    case 0xC0646E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:143 STA @LOCAL06
    case 0xC06470: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C0613C.asm:144 BRA @UNKNOWN13
    case 0xC06472: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C0613C.asm:146 LDA @LOCAL02
    case 0xC06474: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0613C.asm:147 STA @VIRTUAL02
    case 0xC06476: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:148 INC @VIRTUAL02
    case 0xC06478: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:149 LDA @VIRTUAL02
    case 0xC0647A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:150 STA @LOCAL02
    case 0xC0647C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C0613C.asm:152 LDA @VIRTUAL02
    case 0xC0647E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0613C.asm:153 CMP #30
    case 0xC06480: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C0613C.asm:153 CMP #30
    // Overlapping static entry reached from 0xC06480.
    case 0xC06482: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C0613C.asm:154 BNEL @UNKNOWN4
    case 0xC06483: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C0613C.asm:154 BNEL @UNKNOWN4
    case 0xC06485: cpu.execute_instruction<0x4C>(0x0063D5, 3); return true;
    // src/unknown/C0/C0613C.asm:156 LDA @LOCAL08
    case 0xC06488: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C0613C.asm:157 ASL
    case 0xC0648A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:158 TAX
    case 0xC0648B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0613C.asm:159 LDA @LOCAL06
    case 0xC0648C: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C0613C.asm:160 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0648E: cpu.execute_instruction<0x9D>(0x002C9C, 3); return true;
    // src/unknown/C0/C0613C.asm:161 LDA @LOCAL06
    case 0xC06491: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0613C.asm:162 END_C_FUNCTION
    case 0xC06493: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0613C.asm:162 END_C_FUNCTION
    case 0xC06494: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06267.asm (unresolved).
bool execute_unresolved_c0_c06267_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06267.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06495: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    case 0xC06497: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    case 0xC06498: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    case 0xC06499: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    case 0xC0649A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC0649A.
    case 0xC0649C: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    case 0xC0649D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C06267.asm:18 END_STACK_VARS
    case 0xC0649E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:19 STY @LOCAL08
    case 0xC0649F: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/unknown/C0/C06267.asm:19 STY @LOCAL08
    // Overlapping static entry reached from 0xC0649C.
    case 0xC064A0: cpu.execute_instruction<0x1E>(0x00AA9B, 3); return true;
    // src/unknown/C0/C06267.asm:20 TXY
    case 0xC064A1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:21 TAX
    case 0xC064A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:22 STX @LOCAL07
    case 0xC064A3: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C0/C06267.asm:23 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC064A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06267.asm:23 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC064A5.
    case 0xC064A7: cpu.execute_instruction<0xFF>(0xA51A85, 4); return true;
    // src/unknown/C0/C06267.asm:24 STA @LOCAL06
    case 0xC064A8: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C0/C06267.asm:25 LDA @LOCAL08
    case 0xC064AA: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C06267.asm:25 LDA @LOCAL08
    // Overlapping static entry reached from 0xC064A7.
    case 0xC064AB: cpu.execute_instruction<0x1E>(0x00850A, 3); return true;
    // src/unknown/C0/C06267.asm:26 ASL
    case 0xC064AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:27 STA @VIRTUAL04
    case 0xC064AD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:27 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC064AB.
    case 0xC064AE: cpu.execute_instruction<0x04>(0x0000A6, 2); return true;
    // src/unknown/C0/C06267.asm:28 LDX @VIRTUAL04
    case 0xC064AF: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:28 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC064AE.
    case 0xC064B0: cpu.execute_instruction<0x04>(0x0000BD, 2); return true;
    // src/unknown/C0/C06267.asm:29 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC064B1: cpu.execute_instruction<0xBD>(0x003728, 3); return true;
    // src/unknown/C0/C06267.asm:29 LDA ENTITY_HITBOX_ENABLED,X
    // Overlapping static entry reached from 0xC064B0.
    case 0xC064B2: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:29 LDA ENTITY_HITBOX_ENABLED,X
    // Overlapping static entry reached from 0xC064B2.
    case 0xC064B3: cpu.execute_instruction<0x37>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:30 BEQL @UNKNOWN26
    case 0xC064B4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:30 BEQL @UNKNOWN26
    // Overlapping static entry reached from 0xC064B3.
    case 0xC064B5: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:30 BEQL @UNKNOWN26
    case 0xC064B6: cpu.execute_instruction<0x4C>(0x006699, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:30 BEQL @UNKNOWN26
    // Overlapping static entry reached from 0xC064B5.
    case 0xC064B7: cpu.execute_instruction<0x99>(0x00A666, 3); return true;
    // src/unknown/C0/C06267.asm:31 LDX @VIRTUAL04
    case 0xC064B9: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:31 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC064B7.
    case 0xC064BA: cpu.execute_instruction<0x04>(0x0000BD, 2); return true;
    // src/unknown/C0/C06267.asm:32 LDA ENTITY_DIRECTIONS,X
    case 0xC064BB: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/unknown/C0/C06267.asm:32 LDA ENTITY_DIRECTIONS,X
    // Overlapping static entry reached from 0xC064BA.
    case 0xC064BC: cpu.execute_instruction<0xF4>(0x00C92E, 3); return true;
    // src/unknown/C0/C06267.asm:33 CMP #DIRECTION::RIGHT
    case 0xC064BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C06267.asm:33 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC064BC.
    case 0xC064BF: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/C0/C06267.asm:33 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC064BE.
    case 0xC064C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06267.asm:34 BEQ @UNKNOWN1
    case 0xC064C1: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C06267.asm:35 CMP #DIRECTION::LEFT
    case 0xC064C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C06267.asm:35 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC064C3.
    case 0xC064C5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C06267.asm:36 BNE @UNKNOWN2
    case 0xC064C6: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/unknown/C0/C06267.asm:38 LDA @LOCAL08
    case 0xC064C8: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C06267.asm:39 ASL
    case 0xC064CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:40 STA @LOCAL05
    case 0xC064CB: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C06267.asm:41 TAX
    case 0xC064CD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:42 LDA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC064CE: cpu.execute_instruction<0xBD>(0x0037DC, 3); return true;
    // src/unknown/C0/C06267.asm:43 STA @VIRTUAL02
    case 0xC064D1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:44 LDA @LOCAL05
    case 0xC064D3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C0/C06267.asm:45 TAX
    case 0xC064D5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:46 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC064D6: cpu.execute_instruction<0xBD>(0x001A40, 3); return true;
    // src/unknown/C0/C06267.asm:47 STA @LOCAL04
    case 0xC064D9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C06267.asm:48 BRA @UNKNOWN3
    case 0xC064DB: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:50 LDX @VIRTUAL04
    case 0xC064DD: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:51 LDA ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC064DF: cpu.execute_instruction<0xBD>(0x003764, 3); return true;
    // src/unknown/C0/C06267.asm:52 STA @VIRTUAL02
    case 0xC064E2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:53 LDX @VIRTUAL04
    case 0xC064E4: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:54 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC064E6: cpu.execute_instruction<0xBD>(0x0037A0, 3); return true;
    // src/unknown/C0/C06267.asm:55 STA @LOCAL04
    case 0xC064E9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C06267.asm:57 LDX @LOCAL07
    case 0xC064EB: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C0/C06267.asm:58 TXA
    case 0xC064ED: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:59 SEC
    case 0xC064EE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:60 SBC @VIRTUAL02
    case 0xC064EF: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:61 STA @VIRTUAL04
    case 0xC064F1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:62 LDA @VIRTUAL02
    case 0xC064F3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:63 ASL
    case 0xC064F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:64 STA @LOCAL05
    case 0xC064F6: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C0/C06267.asm:65 TYA
    case 0xC064F8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:66 SEC
    case 0xC064F9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:67 SBC @LOCAL04
    case 0xC064FA: cpu.execute_instruction<0xE5>(0x000016, 2); return true;
    // src/unknown/C0/C06267.asm:68 STA @VIRTUAL02
    case 0xC064FC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:69 STA @LOCAL03
    case 0xC064FE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C06267.asm:70 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC06500: cpu.execute_instruction<0xAD>(0x0060DE, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C06267.asm:71 BNEL @UNKNOWN14
    case 0xC06503: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:71 BNEL @UNKNOWN14
    case 0xC06505: cpu.execute_instruction<0x4C>(0x0065C7, 3); return true;
    // src/unknown/C0/C06267.asm:72 LDX #24
    case 0xC06508: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000018, 2); else cpu.execute_instruction<0xA2>(0x000018, 3); return true;
    // src/unknown/C0/C06267.asm:72 LDX #24
    // Overlapping static entry reached from 0xC06508.
    case 0xC0650A: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C06267.asm:73 JMP @UNKNOWN13
    case 0xC0650B: cpu.execute_instruction<0x4C>(0x0065BF, 3); return true;
    // src/unknown/C0/C06267.asm:75 TXA
    case 0xC0650E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:76 ASL
    case 0xC0650F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:77 TAY
    case 0xC06510: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:78 LDA ENTITY_SCRIPT_TABLE,Y
    case 0xC06511: cpu.execute_instruction<0xB9>(0x000A58, 3); return true;
    // src/unknown/C0/C06267.asm:79 CMP #.LOWORD(-1)
    case 0xC06514: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06267.asm:79 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC06514.
    case 0xC06516: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:80 BEQL @UNKNOWN12
    case 0xC06517: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:80 BEQL @UNKNOWN12
    case 0xC06519: cpu.execute_instruction<0x4C>(0x0065BE, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:80 BEQL @UNKNOWN12
    // Overlapping static entry reached from 0xC06516.
    case 0xC0651A: cpu.execute_instruction<0xBE>(0x00B965, 3); return true;
    // src/unknown/C0/C06267.asm:81 LDA ENTITY_COLLIDED_OBJECTS,Y
    case 0xC0651C: cpu.execute_instruction<0xB9>(0x002C9C, 3); return true;
    // src/unknown/C0/C06267.asm:81 LDA ENTITY_COLLIDED_OBJECTS,Y
    // Overlapping static entry reached from 0xC0651A.
    case 0xC0651D: cpu.execute_instruction<0x9C>(0x00C92C, 3); return true;
    // src/unknown/C0/C06267.asm:82 CMP #ENTITY_COLLISION_DISABLED
    case 0xC0651F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C06267.asm:82 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0651D.
    case 0xC06520: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C06267.asm:82 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0651F.
    case 0xC06521: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:83 BEQL @UNKNOWN12
    case 0xC06522: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:83 BEQL @UNKNOWN12
    case 0xC06524: cpu.execute_instruction<0x4C>(0x0065BE, 3); return true;
    // src/unknown/C0/C06267.asm:84 LDA ENTITY_HITBOX_ENABLED,Y
    case 0xC06527: cpu.execute_instruction<0xB9>(0x003728, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:85 BEQL @UNKNOWN12
    case 0xC0652A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:85 BEQL @UNKNOWN12
    case 0xC0652C: cpu.execute_instruction<0x4C>(0x0065BE, 3); return true;
    // src/unknown/C0/C06267.asm:86 LDA ENTITY_DIRECTIONS,Y
    case 0xC0652F: cpu.execute_instruction<0xB9>(0x002EF4, 3); return true;
    // src/unknown/C0/C06267.asm:87 CMP #DIRECTION::RIGHT
    case 0xC06532: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C06267.asm:87 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC06532.
    case 0xC06534: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06267.asm:88 BEQ @UNKNOWN9
    case 0xC06535: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C06267.asm:89 CMP #DIRECTION::LEFT
    case 0xC06537: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C06267.asm:89 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC06537.
    case 0xC06539: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C06267.asm:90 BNE @UNKNOWN10
    case 0xC0653A: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C06267.asm:92 TXA
    case 0xC0653C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:93 ASL
    case 0xC0653D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:94 TAY
    case 0xC0653E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:95 LDA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,Y
    case 0xC0653F: cpu.execute_instruction<0xB9>(0x0037DC, 3); return true;
    // src/unknown/C0/C06267.asm:96 STA @LOCAL02
    case 0xC06542: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:97 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,Y
    case 0xC06544: cpu.execute_instruction<0xB9>(0x001A40, 3); return true;
    // src/unknown/C0/C06267.asm:98 STA @LOCAL01
    case 0xC06547: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:99 BRA @UNKNOWN11
    case 0xC06549: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C06267.asm:101 LDA ENTITY_HITBOX_UP_DOWN_WIDTHS,Y
    case 0xC0654B: cpu.execute_instruction<0xB9>(0x003764, 3); return true;
    // src/unknown/C0/C06267.asm:102 STA @LOCAL02
    case 0xC0654E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:103 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,Y
    case 0xC06550: cpu.execute_instruction<0xB9>(0x0037A0, 3); return true;
    // src/unknown/C0/C06267.asm:104 STA @LOCAL01
    case 0xC06553: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:106 TXA
    case 0xC06555: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:107 ASL
    case 0xC06556: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:108 STA @LOCAL00
    case 0xC06557: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:109 LDY #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC06559: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000C0, 2); else cpu.execute_instruction<0xA0>(0x000BC0, 3); return true;
    // src/unknown/C0/C06267.asm:109 LDY #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC06559.
    case 0xC0655B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:110 LDA (@LOCAL00),Y
    case 0xC0655C: cpu.execute_instruction<0xB1>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:111 SEC
    case 0xC0655E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:112 SBC @LOCAL01
    case 0xC0655F: cpu.execute_instruction<0xE5>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:113 TAY
    case 0xC06561: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:114 SEC
    case 0xC06562: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:115 SBC @LOCAL04
    case 0xC06563: cpu.execute_instruction<0xE5>(0x000016, 2); return true;
    // src/unknown/C0/C06267.asm:116 PHA
    case 0xC06565: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:117 LDA @LOCAL03
    case 0xC06566: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C06267.asm:118 STA @VIRTUAL02
    case 0xC06568: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:119 STA TEMP_REGISTER
    case 0xC0656A: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/unknown/C0/C06267.asm:120 PLA
    case 0xC0656D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:121 STA @VIRTUAL02
    case 0xC0656E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:122 LDA TEMP_REGISTER
    case 0xC06570: cpu.execute_instruction<0xAD>(0x0000BE, 3); return true;
    // src/unknown/C0/C06267.asm:123 CMP @VIRTUAL02
    case 0xC06573: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06267.asm:124 BLTEQ @UNKNOWN12
    case 0xC06575: cpu.execute_instruction<0x90>(0x000047, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06267.asm:124 BLTEQ @UNKNOWN12
    case 0xC06577: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/unknown/C0/C06267.asm:125 TYA
    case 0xC06579: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:126 CLC
    case 0xC0657A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:127 ADC @LOCAL01
    case 0xC0657B: cpu.execute_instruction<0x65>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:128 PHA
    case 0xC0657D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:129 LDA @LOCAL03
    case 0xC0657E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C06267.asm:130 STA @VIRTUAL02
    case 0xC06580: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:131 PLY
    case 0xC06582: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:132 STY @VIRTUAL02
    case 0xC06583: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:133 CMP @VIRTUAL02
    case 0xC06585: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:134 BCS @UNKNOWN12
    case 0xC06587: cpu.execute_instruction<0xB0>(0x000035, 2); return true;
    // src/unknown/C0/C06267.asm:135 LDA @LOCAL02
    case 0xC06589: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:136 STA @VIRTUAL02
    case 0xC0658B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:137 LDY #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC0658D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000084, 2); else cpu.execute_instruction<0xA0>(0x000B84, 3); return true;
    // src/unknown/C0/C06267.asm:137 LDY #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC0658D.
    case 0xC0658F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:138 LDA (@LOCAL00),Y
    case 0xC06590: cpu.execute_instruction<0xB1>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:139 SEC
    case 0xC06592: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:140 SBC @VIRTUAL02
    case 0xC06593: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:141 TAY
    case 0xC06595: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:142 LDA @LOCAL02
    case 0xC06596: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:143 ASL
    case 0xC06598: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:144 STA @LOCAL02
    case 0xC06599: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:145 TYA
    case 0xC0659B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:146 SEC
    case 0xC0659C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:147 SBC @LOCAL05
    case 0xC0659D: cpu.execute_instruction<0xE5>(0x000018, 2); return true;
    // src/unknown/C0/C06267.asm:148 STA @VIRTUAL02
    case 0xC0659F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:149 LDA @VIRTUAL04
    case 0xC065A1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:150 CMP @VIRTUAL02
    case 0xC065A3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06267.asm:151 BLTEQ @UNKNOWN12
    case 0xC065A5: cpu.execute_instruction<0x90>(0x000017, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06267.asm:151 BLTEQ @UNKNOWN12
    case 0xC065A7: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C06267.asm:152 LDA @LOCAL02
    case 0xC065A9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:153 STA @VIRTUAL02
    case 0xC065AB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:154 TYA
    case 0xC065AD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:155 CLC
    case 0xC065AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:156 ADC @VIRTUAL02
    case 0xC065AF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:157 STA @VIRTUAL02
    case 0xC065B1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:158 LDA @VIRTUAL04
    case 0xC065B3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:159 CMP @VIRTUAL02
    case 0xC065B5: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:160 BCS @UNKNOWN12
    case 0xC065B7: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C06267.asm:161 STX @LOCAL06
    case 0xC065B9: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C06267.asm:162 JMP @UNKNOWN26
    case 0xC065BB: cpu.execute_instruction<0x4C>(0x006699, 3); return true;
    // src/unknown/C0/C06267.asm:164 INX
    case 0xC065BE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:166 CPX #MAX_ENTITIES
    case 0xC065BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/unknown/C0/C06267.asm:166 CPX #MAX_ENTITIES
    // Overlapping static entry reached from 0xC065BF.
    case 0xC065C1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C06267.asm:167 BNEL @UNKNOWN5
    case 0xC065C2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:167 BNEL @UNKNOWN5
    case 0xC065C4: cpu.execute_instruction<0x4C>(0x00650E, 3); return true;
    // src/unknown/C0/C06267.asm:169 LDX #0
    case 0xC065C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C06267.asm:169 LDX #0
    // Overlapping static entry reached from 0xC065C7.
    case 0xC065C9: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C06267.asm:170 JMP @UNKNOWN25
    case 0xC065CA: cpu.execute_instruction<0x4C>(0x006691, 3); return true;
    // src/unknown/C0/C06267.asm:172 CPX @LOCAL08
    case 0xC065CD: cpu.execute_instruction<0xE4>(0x00001E, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:173 BEQL @UNKNOWN24
    case 0xC065CF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:173 BEQL @UNKNOWN24
    case 0xC065D1: cpu.execute_instruction<0x4C>(0x006690, 3); return true;
    // src/unknown/C0/C06267.asm:174 TXA
    case 0xC065D4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:175 ASL
    case 0xC065D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:176 TAY
    case 0xC065D6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:177 LDA ENTITY_SCRIPT_TABLE,Y
    case 0xC065D7: cpu.execute_instruction<0xB9>(0x000A58, 3); return true;
    // src/unknown/C0/C06267.asm:178 CMP #.LOWORD(-1)
    case 0xC065DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06267.asm:178 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC065DA.
    case 0xC065DC: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:179 BEQL @UNKNOWN24
    case 0xC065DD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:179 BEQL @UNKNOWN24
    case 0xC065DF: cpu.execute_instruction<0x4C>(0x006690, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:179 BEQL @UNKNOWN24
    // Overlapping static entry reached from 0xC065DC.
    case 0xC065E0: cpu.execute_instruction<0x90>(0x000066, 2); return true;
    // src/unknown/C0/C06267.asm:180 LDA ENTITY_NPC_IDS,Y
    case 0xC065E2: cpu.execute_instruction<0xB9>(0x003098, 3); return true;
    // src/unknown/C0/C06267.asm:181 CMP #$1000
    case 0xC065E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001000, 3); return true;
    // src/unknown/C0/C06267.asm:181 CMP #$1000
    // Overlapping static entry reached from 0xC065E5.
    case 0xC065E7: cpu.execute_instruction<0x10>(0x000090, 2); return true;
    // src/unknown/C0/C06267.asm:182 BCC @UNKNOWN18
    case 0xC065E8: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C06267.asm:182 BCC @UNKNOWN18
    // Overlapping static entry reached from 0xC065E7.
    case 0xC065E9: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/unknown/C0/C06267.asm:183 JMP @UNKNOWN24
    case 0xC065EA: cpu.execute_instruction<0x4C>(0x006690, 3); return true;
    // src/unknown/C0/C06267.asm:183 JMP @UNKNOWN24
    // Overlapping static entry reached from 0xC065E9.
    case 0xC065EB: cpu.execute_instruction<0x90>(0x000066, 2); return true;
    // src/unknown/C0/C06267.asm:185 LDA ENTITY_COLLIDED_OBJECTS,Y
    case 0xC065ED: cpu.execute_instruction<0xB9>(0x002C9C, 3); return true;
    // src/unknown/C0/C06267.asm:186 CMP #ENTITY_COLLISION_DISABLED
    case 0xC065F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C06267.asm:186 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC065F0.
    case 0xC065F2: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:187 BEQL @UNKNOWN24
    case 0xC065F3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:187 BEQL @UNKNOWN24
    case 0xC065F5: cpu.execute_instruction<0x4C>(0x006690, 3); return true;
    // src/unknown/C0/C06267.asm:188 LDA ENTITY_HITBOX_ENABLED,Y
    case 0xC065F8: cpu.execute_instruction<0xB9>(0x003728, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C06267.asm:189 BEQL @UNKNOWN24
    case 0xC065FB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:189 BEQL @UNKNOWN24
    case 0xC065FD: cpu.execute_instruction<0x4C>(0x006690, 3); return true;
    // src/unknown/C0/C06267.asm:190 LDA ENTITY_DIRECTIONS,Y
    case 0xC06600: cpu.execute_instruction<0xB9>(0x002EF4, 3); return true;
    // src/unknown/C0/C06267.asm:191 CMP #DIRECTION::RIGHT
    case 0xC06603: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C06267.asm:191 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC06603.
    case 0xC06605: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06267.asm:192 BEQ @UNKNOWN21
    case 0xC06606: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C06267.asm:193 CMP #DIRECTION::LEFT
    case 0xC06608: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C06267.asm:193 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC06608.
    case 0xC0660A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C06267.asm:194 BNE @UNKNOWN22
    case 0xC0660B: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C06267.asm:196 TXA
    case 0xC0660D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:197 ASL
    case 0xC0660E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:198 TAY
    case 0xC0660F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:199 LDA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,Y
    case 0xC06610: cpu.execute_instruction<0xB9>(0x0037DC, 3); return true;
    // src/unknown/C0/C06267.asm:200 STA @LOCAL02
    case 0xC06613: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:201 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,Y
    case 0xC06615: cpu.execute_instruction<0xB9>(0x001A40, 3); return true;
    // src/unknown/C0/C06267.asm:202 STA @LOCAL01
    case 0xC06618: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:203 BRA @UNKNOWN23
    case 0xC0661A: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C0/C06267.asm:205 LDA ENTITY_HITBOX_UP_DOWN_WIDTHS,Y
    case 0xC0661C: cpu.execute_instruction<0xB9>(0x003764, 3); return true;
    // src/unknown/C0/C06267.asm:206 STA @LOCAL02
    case 0xC0661F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:207 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,Y
    case 0xC06621: cpu.execute_instruction<0xB9>(0x0037A0, 3); return true;
    // src/unknown/C0/C06267.asm:208 STA @LOCAL01
    case 0xC06624: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:210 TXA
    case 0xC06626: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:211 ASL
    case 0xC06627: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:212 STA @LOCAL00
    case 0xC06628: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:213 LDY #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC0662A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000C0, 2); else cpu.execute_instruction<0xA0>(0x000BC0, 3); return true;
    // src/unknown/C0/C06267.asm:213 LDY #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC0662A.
    case 0xC0662C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:214 LDA (@LOCAL00),Y
    case 0xC0662D: cpu.execute_instruction<0xB1>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:215 SEC
    case 0xC0662F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:216 SBC @LOCAL01
    case 0xC06630: cpu.execute_instruction<0xE5>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:217 TAY
    case 0xC06632: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:218 SEC
    case 0xC06633: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:219 SBC @LOCAL04
    case 0xC06634: cpu.execute_instruction<0xE5>(0x000016, 2); return true;
    // src/unknown/C0/C06267.asm:220 PHA
    case 0xC06636: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:221 LDA @LOCAL03
    case 0xC06637: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C06267.asm:222 STA @VIRTUAL02
    case 0xC06639: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:223 STA TEMP_REGISTER
    case 0xC0663B: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/unknown/C0/C06267.asm:224 PLA
    case 0xC0663E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:225 STA @VIRTUAL02
    case 0xC0663F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:226 LDA TEMP_REGISTER
    case 0xC06641: cpu.execute_instruction<0xAD>(0x0000BE, 3); return true;
    // src/unknown/C0/C06267.asm:227 CMP @VIRTUAL02
    case 0xC06644: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06267.asm:228 BLTEQ @UNKNOWN24
    case 0xC06646: cpu.execute_instruction<0x90>(0x000048, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06267.asm:228 BLTEQ @UNKNOWN24
    case 0xC06648: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/unknown/C0/C06267.asm:229 TYA
    case 0xC0664A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:230 CLC
    case 0xC0664B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:231 ADC @LOCAL01
    case 0xC0664C: cpu.execute_instruction<0x65>(0x000010, 2); return true;
    // src/unknown/C0/C06267.asm:232 DEC
    case 0xC0664E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:233 PHA
    case 0xC0664F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:234 LDA @LOCAL03
    case 0xC06650: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C06267.asm:235 STA @VIRTUAL02
    case 0xC06652: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:235 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC065EB.
    case 0xC06653: cpu.execute_instruction<0x02>(0x00007A, 2); return true;
    // src/unknown/C0/C06267.asm:236 PLY
    case 0xC06654: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:237 STY @VIRTUAL02
    case 0xC06655: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:238 CMP @VIRTUAL02
    case 0xC06657: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:239 BCS @UNKNOWN24
    case 0xC06659: cpu.execute_instruction<0xB0>(0x000035, 2); return true;
    // src/unknown/C0/C06267.asm:240 LDA @LOCAL02
    case 0xC0665B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:241 STA @VIRTUAL02
    case 0xC0665D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:242 LDY #.LOWORD(ENTITY_ABS_X_TABLE)
    case 0xC0665F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000084, 2); else cpu.execute_instruction<0xA0>(0x000B84, 3); return true;
    // src/unknown/C0/C06267.asm:242 LDY #.LOWORD(ENTITY_ABS_X_TABLE)
    // Overlapping static entry reached from 0xC0665F.
    case 0xC06661: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:243 LDA (@LOCAL00),Y
    case 0xC06662: cpu.execute_instruction<0xB1>(0x00000E, 2); return true;
    // src/unknown/C0/C06267.asm:244 SEC
    case 0xC06664: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:245 SBC @VIRTUAL02
    case 0xC06665: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:246 TAY
    case 0xC06667: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:247 LDA @LOCAL02
    case 0xC06668: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:248 ASL
    case 0xC0666A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:249 STA @LOCAL02
    case 0xC0666B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:250 TYA
    case 0xC0666D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:251 SEC
    case 0xC0666E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:252 SBC @LOCAL05
    case 0xC0666F: cpu.execute_instruction<0xE5>(0x000018, 2); return true;
    // src/unknown/C0/C06267.asm:253 STA @VIRTUAL02
    case 0xC06671: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:254 LDA @VIRTUAL04
    case 0xC06673: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:255 CMP @VIRTUAL02
    case 0xC06675: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06267.asm:256 BLTEQ @UNKNOWN24
    case 0xC06677: cpu.execute_instruction<0x90>(0x000017, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06267.asm:256 BLTEQ @UNKNOWN24
    case 0xC06679: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C06267.asm:257 LDA @LOCAL02
    case 0xC0667B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06267.asm:258 STA @VIRTUAL02
    case 0xC0667D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:259 TYA
    case 0xC0667F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:260 CLC
    case 0xC06680: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:261 ADC @VIRTUAL02
    case 0xC06681: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:262 DEC
    case 0xC06683: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:263 STA @VIRTUAL02
    case 0xC06684: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:264 LDA @VIRTUAL04
    case 0xC06686: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:265 CMP @VIRTUAL02
    case 0xC06688: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C06267.asm:266 BCS @UNKNOWN24
    case 0xC0668A: cpu.execute_instruction<0xB0>(0x000004, 2); return true;
    // src/unknown/C0/C06267.asm:267 STX @LOCAL06
    case 0xC0668C: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C0/C06267.asm:268 BRA @UNKNOWN26
    case 0xC0668E: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C06267.asm:270 INX
    case 0xC06690: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:272 CPX #23
    case 0xC06691: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000017, 2); else cpu.execute_instruction<0xE0>(0x000017, 3); return true;
    // src/unknown/C0/C06267.asm:272 CPX #23
    // Overlapping static entry reached from 0xC06691.
    case 0xC06693: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C06267.asm:273 BNEL @UNKNOWN15
    case 0xC06694: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C06267.asm:273 BNEL @UNKNOWN15
    case 0xC06696: cpu.execute_instruction<0x4C>(0x0065CD, 3); return true;
    // src/unknown/C0/C06267.asm:275 LDA @LOCAL08
    case 0xC06699: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C0/C06267.asm:276 ASL
    case 0xC0669B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:277 TAX
    case 0xC0669C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06267.asm:278 LDA @LOCAL06
    case 0xC0669D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C0/C06267.asm:279 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0669F: cpu.execute_instruction<0x9D>(0x002C9C, 3); return true;
    // src/unknown/C0/C06267.asm:280 LDA @LOCAL06
    case 0xC066A2: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06267.asm:281 END_C_FUNCTION
    case 0xC066A4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C06267.asm:281 END_C_FUNCTION
    case 0xC066A5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06478.asm (unresolved).
bool execute_unresolved_c0_c06478_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06478.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC066A6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06478.asm:6 END_STACK_VARS
    case 0xC066A8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06478.asm:6 END_STACK_VARS
    case 0xC066A9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06478.asm:6 END_STACK_VARS
    case 0xC066AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06478.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC066AA.
    case 0xC066AC: cpu.execute_instruction<0xFF>(0x38AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06478.asm:6 END_STACK_VARS
    case 0xC066AD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:7 LDX CURRENT_ENTITY_SLOT
    case 0xC066AE: cpu.execute_instruction<0xAE>(0x001A38, 3); return true;
    // src/unknown/C0/C06478.asm:7 LDX CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC066AC.
    case 0xC066B0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:8 STX @LOCAL00
    case 0xC066B1: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C06478.asm:9 TXA
    case 0xC066B3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:10 ASL
    case 0xC066B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:11 TAX
    case 0xC066B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:12 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC066B6: cpu.execute_instruction<0xBD>(0x002C9C, 3); return true;
    // src/unknown/C0/C06478.asm:13 CMP #ENTITY_COLLISION_DISABLED
    case 0xC066B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C06478.asm:13 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC066B9.
    case 0xC066BB: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C06478.asm:14 BEQ @UNKNOWN0
    case 0xC066BC: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C0/C06478.asm:15 LDX @LOCAL00
    case 0xC066BE: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C06478.asm:16 TXA
    case 0xC066C0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:17 JSL UNKNOWN_C09EFF_ENTRY2
    case 0xC066C1: cpu.execute_instruction<0x22>(0xC09EE7, 4); return true;
    // src/unknown/C0/C06478.asm:18 LDX @LOCAL00
    case 0xC066C5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C06478.asm:19 TXY
    case 0xC066C7: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C06478.asm:20 LDX ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC066C8: cpu.execute_instruction<0xAE>(0x002C4A, 3); return true;
    // src/unknown/C0/C06478.asm:21 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC066CB: cpu.execute_instruction<0xAD>(0x002C48, 3); return true;
    // src/unknown/C0/C06478.asm:22 JSL UNKNOWN_C06267
    case 0xC066CE: cpu.execute_instruction<0x22>(0xC06495, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06478.asm:24 END_C_FUNCTION
    case 0xC066D2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C06478.asm:24 END_C_FUNCTION
    case 0xC066D3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C064A6.asm (unresolved).
bool execute_unresolved_c0_c064a6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C064A6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC066D4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C064A6.asm:6 END_STACK_VARS
    case 0xC066D6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C064A6.asm:6 END_STACK_VARS
    case 0xC066D7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C064A6.asm:6 END_STACK_VARS
    case 0xC066D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C064A6.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC066D8.
    case 0xC066DA: cpu.execute_instruction<0xFF>(0x38AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C064A6.asm:6 END_STACK_VARS
    case 0xC066DB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:7 LDX CURRENT_ENTITY_SLOT
    case 0xC066DC: cpu.execute_instruction<0xAE>(0x001A38, 3); return true;
    // src/unknown/C0/C064A6.asm:7 LDX CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC066DA.
    case 0xC066DE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:8 STX @LOCAL00
    case 0xC066DF: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C064A6.asm:9 TXA
    case 0xC066E1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:10 ASL
    case 0xC066E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:11 TAX
    case 0xC066E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:12 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC066E4: cpu.execute_instruction<0xBD>(0x002C9C, 3); return true;
    // src/unknown/C0/C064A6.asm:13 CMP #ENTITY_COLLISION_DISABLED
    case 0xC066E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C064A6.asm:13 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC066E7.
    case 0xC066E9: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C064A6.asm:14 BEQ @UNKNOWN0
    case 0xC066EA: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C0/C064A6.asm:15 LDX @LOCAL00
    case 0xC066EC: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C064A6.asm:16 TXA
    case 0xC066EE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:17 JSL UNKNOWN_C09EFF_ENTRY2
    case 0xC066EF: cpu.execute_instruction<0x22>(0xC09EE7, 4); return true;
    // src/unknown/C0/C064A6.asm:18 LDX @LOCAL00
    case 0xC066F3: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C064A6.asm:19 TXY
    case 0xC066F5: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C064A6.asm:20 LDX ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC066F6: cpu.execute_instruction<0xAE>(0x002C4A, 3); return true;
    // src/unknown/C0/C064A6.asm:21 LDA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC066F9: cpu.execute_instruction<0xAD>(0x002C48, 3); return true;
    // src/unknown/C0/C064A6.asm:22 JSL UNKNOWN_C0613C
    case 0xC066FC: cpu.execute_instruction<0x22>(0xC0636A, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C064A6.asm:24 END_C_FUNCTION
    case 0xC06700: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C064A6.asm:24 END_C_FUNCTION
    case 0xC06701: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C064D4.asm (unresolved).
bool execute_unresolved_c0_c064d4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C064D4.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06702: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C064D4.asm:4 STZ NEXT_QUEUED_INTERACTION
    case 0xC06704: cpu.execute_instruction<0x9C>(0x00618A, 3); return true;
    // src/unknown/C0/C064D4.asm:5 STZ CURRENT_QUEUED_INTERACTION
    case 0xC06707: cpu.execute_instruction<0x9C>(0x006188, 3); return true;
    // src/unknown/C0/C064D4.asm:6 LDA #$FFFF
    case 0xC0670A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C064D4.asm:6 LDA #$FFFF
    // Overlapping static entry reached from 0xC0670A.
    case 0xC0670C: cpu.execute_instruction<0xFF>(0x61468D, 4); return true;
    // src/unknown/C0/C064D4.asm:7 STA CURRENT_QUEUED_INTERACTION_TYPE
    case 0xC0670D: cpu.execute_instruction<0x8D>(0x006146, 3); return true;
    // src/unknown/C0/C064D4.asm:8 RTL
    case 0xC06710: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C064E3.asm (unresolved).
bool execute_unresolved_c0_c064e3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C064E3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06711: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    case 0xC06713: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    case 0xC06714: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    case 0xC06715: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    case 0xC06716: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC06716.
    case 0xC06718: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    case 0xC06719: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C064E3.asm:8 END_STACK_VARS
    case 0xC0671A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C064E3.asm:9 STA @LOCAL00
    case 0xC0671B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C064E3.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC06718.
    case 0xC0671C: cpu.execute_instruction<0x0E>(0x001EA5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C064E3.asm:10 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0671D: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C064E3.asm:10 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0671F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C064E3.asm:10 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC06721: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C064E3.asm:10 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC06723: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C064E3.asm:11 LDA @LOCAL00
    case 0xC06725: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C064E3.asm:12 CMP CURRENT_QUEUED_INTERACTION_TYPE
    case 0xC06727: cpu.execute_instruction<0xCD>(0x006146, 3); return true;
    // src/unknown/C0/C064E3.asm:13 BEQ @UNKNOWN0
    case 0xC0672A: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/unknown/C0/C064E3.asm:14 LDA NEXT_QUEUED_INTERACTION
    case 0xC0672C: cpu.execute_instruction<0xAD>(0x00618A, 3); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C064E3.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC0672F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C0/C064E3.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06731: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C0/C064E3.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06732: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C0/C064E3.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06734: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C064E3.asm:16 TAX
    case 0xC06735: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C064E3.asm:17 LDA @LOCAL00
    case 0xC06736: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C064E3.asm:18 STA QUEUED_INTERACTIONS + queued_interaction::type,X
    case 0xC06738: cpu.execute_instruction<0x9D>(0x006170, 3); return true;
    // src/unknown/C0/C064E3.asm:19 LDA NEXT_QUEUED_INTERACTION
    case 0xC0673B: cpu.execute_instruction<0xAD>(0x00618A, 3); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C064E3.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC0673E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C0/C064E3.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06740: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C0/C064E3.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06741: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C0/C064E3.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06743: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C064E3.asm:21 CLC
    case 0xC06744: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C064E3.asm:22 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    case 0xC06745: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000072, 2); else cpu.execute_instruction<0x69>(0x006172, 3); return true;
    // src/unknown/C0/C064E3.asm:22 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    // Overlapping static entry reached from 0xC06745.
    case 0xC06747: cpu.execute_instruction<0x61>(0x0000A8, 2); return true;
    // src/unknown/C0/C064E3.asm:23 TAY
    case 0xC06748: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C064E3.asm:24 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06749: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C064E3.asm:24 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0674B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C064E3.asm:24 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0674E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C064E3.asm:24 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06750: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C064E3.asm:25 LDA NEXT_QUEUED_INTERACTION
    case 0xC06753: cpu.execute_instruction<0xAD>(0x00618A, 3); return true;
    // src/unknown/C0/C064E3.asm:26 INC
    case 0xC06756: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C064E3.asm:27 AND #$0003
    case 0xC06757: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C064E3.asm:27 AND #$0003
    // Overlapping static entry reached from 0xC06757.
    case 0xC06759: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C064E3.asm:28 STA NEXT_QUEUED_INTERACTION
    case 0xC0675A: cpu.execute_instruction<0x8D>(0x00618A, 3); return true;
    // src/unknown/C0/C064E3.asm:29 LDA #1
    case 0xC0675D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C064E3.asm:29 LDA #1
    // Overlapping static entry reached from 0xC0675D.
    case 0xC0675F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C064E3.asm:30 STA PENDING_INTERACTIONS
    case 0xC06760: cpu.execute_instruction<0x8D>(0x006120, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C064E3.asm:32 END_C_FUNCTION
    case 0xC06763: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C064E3.asm:32 END_C_FUNCTION
    case 0xC06764: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06537.asm (unresolved).
bool execute_unresolved_c0_c06537_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06537.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06765: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06537.asm:5 END_STACK_VARS
    case 0xC06767: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06537.asm:5 END_STACK_VARS
    case 0xC06768: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06537.asm:5 END_STACK_VARS
    case 0xC06769: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06537.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC06769.
    case 0xC0676B: cpu.execute_instruction<0xFF>(0x88AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06537.asm:5 END_STACK_VARS
    case 0xC0676C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C06537.asm:6 LDA CURRENT_QUEUED_INTERACTION
    case 0xC0676D: cpu.execute_instruction<0xAD>(0x006188, 3); return true;
    // src/unknown/C0/C06537.asm:6 LDA CURRENT_QUEUED_INTERACTION
    // Overlapping static entry reached from 0xC0676B.
    case 0xC0676F: cpu.execute_instruction<0x61>(0x000085, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C06537.asm:7 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06770: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C06537.asm:7 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    // Overlapping static entry reached from 0xC0676F.
    case 0xC06771: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C0/C06537.asm:7 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06772: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C0/C06537.asm:7 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06773: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C0/C06537.asm:7 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06775: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06537.asm:8 TAX
    case 0xC06776: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06537.asm:9 LDA QUEUED_INTERACTIONS + queued_interaction::type,X
    case 0xC06777: cpu.execute_instruction<0xBD>(0x006170, 3); return true;
    // src/unknown/C0/C06537.asm:10 PLD
    case 0xC0677A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C06537.asm:11 RTL
    case 0xC0677B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0654E.asm (unresolved).
bool execute_unresolved_c0_c0654e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0654E.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0677C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0654E.asm:6 END_STACK_VARS
    case 0xC0677E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0654E.asm:6 END_STACK_VARS
    case 0xC0677F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0654E.asm:6 END_STACK_VARS
    case 0xC06780: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0654E.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC06780.
    case 0xC06782: cpu.execute_instruction<0xFF>(0x88AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0654E.asm:6 END_STACK_VARS
    case 0xC06783: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0654E.asm:7 LDA CURRENT_QUEUED_INTERACTION
    case 0xC06784: cpu.execute_instruction<0xAD>(0x006188, 3); return true;
    // src/unknown/C0/C0654E.asm:7 LDA CURRENT_QUEUED_INTERACTION
    // Overlapping static entry reached from 0xC06782.
    case 0xC06786: cpu.execute_instruction<0x61>(0x000085, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C0654E.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06787: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/unknown/C0/C0654E.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    // Overlapping static entry reached from 0xC06786.
    case 0xC06788: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/unknown/C0/C0654E.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC06789: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/unknown/C0/C0654E.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC0678A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/unknown/C0/C0654E.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(queued_interaction)
    case 0xC0678C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0654E.asm:9 CLC
    case 0xC0678D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0654E.asm:10 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    case 0xC0678E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000072, 2); else cpu.execute_instruction<0x69>(0x006172, 3); return true;
    // src/unknown/C0/C0654E.asm:10 ADC #.LOWORD(QUEUED_INTERACTIONS) + queued_interaction::text_ptr
    // Overlapping static entry reached from 0xC0678E.
    case 0xC06790: cpu.execute_instruction<0x61>(0x0000A8, 2); return true;
    // src/unknown/C0/C0654E.asm:11 TAY
    case 0xC06791: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C0654E.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06792: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C0654E.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06795: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C0654E.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06797: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C0654E.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0679A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0654E.asm:13 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0679C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0654E.asm:13 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC0679E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0654E.asm:13 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC067A0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0654E.asm:13 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC067A2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C0654E.asm:14 PLD
    case 0xC067A4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0654E.asm:15 RTL
    case 0xC067A5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06578.asm (unresolved).
bool execute_unresolved_c0_c06578_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06578.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC067A6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    case 0xC067A8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    case 0xC067A9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    case 0xC067AA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    case 0xC067AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC067AB.
    case 0xC067AD: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    case 0xC067AE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C06578.asm:9 END_STACK_VARS
    case 0xC067AF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:10 STX @LOCAL01
    case 0xC067B0: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C0/C06578.asm:10 STX @LOCAL01
    // Overlapping static entry reached from 0xC067AD.
    case 0xC067B1: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/unknown/C0/C06578.asm:11 STA @LOCAL00
    case 0xC067B2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06578.asm:11 STA @LOCAL00
    // Overlapping static entry reached from 0xC067B1.
    case 0xC067B3: cpu.execute_instruction<0x0E>(0x00BCAD, 3); return true;
    // src/unknown/C0/C06578.asm:12 LDA ENTITY_CREATION_QUEUE_LENGTH
    case 0xC067B4: cpu.execute_instruction<0xAD>(0x0061BC, 3); return true;
    // src/unknown/C0/C06578.asm:12 LDA ENTITY_CREATION_QUEUE_LENGTH
    // Overlapping static entry reached from 0xC067B3.
    case 0xC067B6: cpu.execute_instruction<0x61>(0x00000A, 2); return true;
    // src/unknown/C0/C06578.asm:13 ASL
    case 0xC067B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:14 ASL
    case 0xC067B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:15 TAX
    case 0xC067B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:16 LDA @LOCAL00
    case 0xC067BA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C06578.asm:17 STA ENTITY_CREATION_QUEUE + queued_entity_creation::sprite,X
    case 0xC067BC: cpu.execute_instruction<0x9D>(0x00618C, 3); return true;
    // src/unknown/C0/C06578.asm:18 LDX @LOCAL01
    case 0xC067BF: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C06578.asm:19 PHX
    case 0xC067C1: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:20 LDA ENTITY_CREATION_QUEUE_LENGTH
    case 0xC067C2: cpu.execute_instruction<0xAD>(0x0061BC, 3); return true;
    // src/unknown/C0/C06578.asm:21 ASL
    case 0xC067C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:22 ASL
    case 0xC067C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:23 TAX
    case 0xC067C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:24 PLA
    case 0xC067C8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06578.asm:25 STA ENTITY_CREATION_QUEUE + queued_entity_creation::script,X
    case 0xC067C9: cpu.execute_instruction<0x9D>(0x00618E, 3); return true;
    // src/unknown/C0/C06578.asm:26 INC ENTITY_CREATION_QUEUE_LENGTH
    case 0xC067CC: cpu.execute_instruction<0xEE>(0x0061BC, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06578.asm:27 END_C_FUNCTION
    case 0xC067CF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C06578.asm:27 END_C_FUNCTION
    case 0xC067D0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C065A3.asm (unresolved).
bool execute_unresolved_c0_c065a3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C065A3.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC067D1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C065A3.asm:4 BRA @UNKNOWN1
    case 0xC067D3: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C0/C065A3.asm:6 LDA ENTITY_CREATION_QUEUE_LENGTH
    case 0xC067D5: cpu.execute_instruction<0xAD>(0x0061BC, 3); return true;
    // src/unknown/C0/C065A3.asm:7 DEC
    case 0xC067D8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C065A3.asm:8 STA ENTITY_CREATION_QUEUE_LENGTH
    case 0xC067D9: cpu.execute_instruction<0x8D>(0x0061BC, 3); return true;
    // src/unknown/C0/C065A3.asm:9 ASL
    case 0xC067DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C065A3.asm:10 ASL
    case 0xC067DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C065A3.asm:11 TAY
    case 0xC067DE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C065A3.asm:12 LDA ENTITY_CREATION_QUEUE + queued_entity_creation::script,Y
    case 0xC067DF: cpu.execute_instruction<0xB9>(0x00618E, 3); return true;
    // src/unknown/C0/C065A3.asm:13 TAX
    case 0xC067E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C065A3.asm:14 LDA ENTITY_CREATION_QUEUE + queued_entity_creation::sprite,Y
    case 0xC067E3: cpu.execute_instruction<0xB9>(0x00618C, 3); return true;
    // src/unknown/C0/C065A3.asm:15 JSL CREATE_PREPARED_ENTITY_SPRITE
    case 0xC067E6: cpu.execute_instruction<0x22>(0xC44275, 4); return true;
    // src/unknown/C0/C065A3.asm:17 LDA ENTITY_CREATION_QUEUE_LENGTH
    case 0xC067EA: cpu.execute_instruction<0xAD>(0x0061BC, 3); return true;
    // src/unknown/C0/C065A3.asm:18 BNE @UNKNOWN0
    case 0xC067ED: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C0/C065A3.asm:19 RTL
    case 0xC067EF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C065C2.asm (unresolved).
bool execute_unresolved_c0_c065c2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C065C2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC067F0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    case 0xC067F2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    case 0xC067F3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    case 0xC067F4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    case 0xC067F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC067F5.
    case 0xC067F7: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    case 0xC067F8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C065C2.asm:8 END_STACK_VARS
    case 0xC067F9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:9 STA @LOCAL01
    case 0xC067FA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C065C2.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC067F7.
    case 0xC067FB: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // src/unknown/C0/C065C2.asm:10 ASL
    case 0xC067FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:11 TAX
    case 0xC067FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:12 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC067FE: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C0/C065C2.asm:13 LSR
    case 0xC06801: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:14 LSR
    case 0xC06802: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:15 LSR
    case 0xC06803: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:16 CLC
    case 0xC06804: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:17 ADC f:UNKNOWN_C3E230,X
    case 0xC06805: cpu.execute_instruction<0x7F>(0xC3E21A, 4); return true;
    // src/unknown/C0/C065C2.asm:17 ADC f:UNKNOWN_C3E230,X
    // Overlapping static entry reached from 0xC067FB.
    case 0xC06807: cpu.execute_instruction<0xE2>(0x0000C3, 2); return true;
    // src/unknown/C0/C065C2.asm:18 TAY
    case 0xC06809: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:19 STY @LOCAL00
    case 0xC0680A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C065C2.asm:20 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0680C: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C0/C065C2.asm:21 LSR
    case 0xC0680F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:22 LSR
    case 0xC06810: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:23 LSR
    case 0xC06811: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:24 CLC
    case 0xC06812: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:25 ADC f:UNKNOWN_C3E240,X
    case 0xC06813: cpu.execute_instruction<0x7F>(0xC3E22A, 4); return true;
    // src/unknown/C0/C065C2.asm:26 STA @VIRTUAL02
    case 0xC06817: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C065C2.asm:27 LDA @LOCAL01
    case 0xC06819: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C065C2.asm:28 CMP #6
    case 0xC0681B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C065C2.asm:28 CMP #6
    // Overlapping static entry reached from 0xC0681B.
    case 0xC0681D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C065C2.asm:29 BNE @UNKNOWN0
    case 0xC0681E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C065C2.asm:30 DEY
    case 0xC06820: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:31 STY @LOCAL00
    case 0xC06821: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C0/C065C2.asm:33 LDX @VIRTUAL02
    case 0xC06823: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C065C2.asm:34 TYA
    case 0xC06825: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:35 JSL UNKNOWN_C07477
    case 0xC06826: cpu.execute_instruction<0x22>(0xC076B6, 4); return true;
    // src/unknown/C0/C065C2.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC0682A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C065C2.asm:37 AND #$00FF
    case 0xC0682C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C065C2.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC0682C.
    case 0xC0682E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C065C2.asm:38 TAX
    case 0xC0682F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:39 CPX #$00FF
    case 0xC06830: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C0/C065C2.asm:39 CPX #$00FF
    // Overlapping static entry reached from 0xC06830.
    case 0xC06832: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C065C2.asm:40 BNE @UNKNOWN1
    case 0xC06833: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C0/C065C2.asm:41 LDX @VIRTUAL02
    case 0xC06835: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C065C2.asm:42 LDY @LOCAL00
    case 0xC06837: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C0/C065C2.asm:43 TYA
    case 0xC06839: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:44 INC
    case 0xC0683A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:45 JSL UNKNOWN_C07477
    case 0xC0683B: cpu.execute_instruction<0x22>(0xC076B6, 4); return true;
    // src/unknown/C0/C065C2.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC0683F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C065C2.asm:47 AND #$00FF
    case 0xC06841: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C065C2.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC06841.
    case 0xC06843: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C0/C065C2.asm:48 TAX
    case 0xC06844: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:50 CPX #$00FF
    case 0xC06845: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C0/C065C2.asm:50 CPX #$00FF
    // Overlapping static entry reached from 0xC06845.
    case 0xC06847: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C065C2.asm:51 BEQ @UNKNOWN2
    case 0xC06848: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/unknown/C0/C065C2.asm:52 CPX #6
    case 0xC0684A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/unknown/C0/C065C2.asm:52 CPX #6
    // Overlapping static entry reached from 0xC0684A.
    case 0xC0684C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C065C2.asm:53 BNE @UNKNOWN2
    case 0xC0684D: cpu.execute_instruction<0xD0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C065C2.asm:54 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC0684F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C065C2.asm:54 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0684F.
    case 0xC06851: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C065C2.asm:54 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06852: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C065C2.asm:54 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06854: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C065C2.asm:54 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC06854.
    case 0xC06856: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C065C2.asm:54 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06857: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C065C2.asm:55 LDA DOOR_FOUND
    case 0xC06859: cpu.execute_instruction<0xAD>(0x006142, 3); return true;
    // src/unknown/C0/C065C2.asm:56 AND #$7FFF
    case 0xC0685C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C065C2.asm:56 AND #$7FFF
    // Overlapping static entry reached from 0xC0685C.
    case 0xC0685E: cpu.execute_instruction<0x7F>(0x066518, 4); return true;
    // src/unknown/C0/C065C2.asm:57 CLC
    case 0xC0685F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C065C2.asm:58 ADC @VIRTUAL06
    case 0xC06860: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C065C2.asm:59 STA @VIRTUAL06
    case 0xC06862: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C065C2.asm:60 LDA DOOR_FOUND_TYPE
    case 0xC06864: cpu.execute_instruction<0xAD>(0x006144, 3); return true;
    // src/unknown/C0/C065C2.asm:61 STA UNREAD_7E5DDC
    case 0xC06867: cpu.execute_instruction<0x8D>(0x006162, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C065C2.asm:62 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0686A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C065C2.asm:62 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0686C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C065C2.asm:62 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0686E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C065C2.asm:62 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC06870: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC06872: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC06872.
    case 0xC06874: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC06875: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC06877: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC06878: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0687A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C065C2.asm:63 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC0687C: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C065C2.asm:64 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC0687E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C065C2.asm:64 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC06880: cpu.execute_instruction<0x8D>(0x006164, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C065C2.asm:64 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC06883: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C065C2.asm:64 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC06885: cpu.execute_instruction<0x8D>(0x006166, 3); return true;
    // src/unknown/C0/C065C2.asm:65 LDA #.LOWORD(-2)
    case 0xC06888: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x00FFFE, 3); return true;
    // src/unknown/C0/C065C2.asm:65 LDA #.LOWORD(-2)
    // Overlapping static entry reached from 0xC06888.
    case 0xC0688A: cpu.execute_instruction<0xFF>(0x60E88D, 4); return true;
    // src/unknown/C0/C065C2.asm:66 STA INTERACTING_NPC_ID
    case 0xC0688B: cpu.execute_instruction<0x8D>(0x0060E8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C065C2.asm:68 END_C_FUNCTION
    case 0xC0688E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C065C2.asm:68 END_C_FUNCTION
    case 0xC0688F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
