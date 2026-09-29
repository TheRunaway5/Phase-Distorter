// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C1/C10004.asm (unresolved).
bool execute_unresolved_c1_c10004_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10004.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10000: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10004.asm:7 END_STACK_VARS
    case 0xC10002: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10004.asm:7 END_STACK_VARS
    case 0xC10003: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10004.asm:7 END_STACK_VARS
    case 0xC10004: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10004.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10004.
    case 0xC10006: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10004.asm:7 END_STACK_VARS
    case 0xC10007: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10004.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10008: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10004.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1000A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10004.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1000C: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10004.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1000E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C10004.asm:9 JSL UNKNOWN_C0943C
    case 0xC10010: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10004.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10014: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10004.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10016: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10004.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10018: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10004.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1001A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C10004.asm:11 JSL DISPLAY_TEXT
    case 0xC1001C: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/unknown/C1/C10004.asm:13 JSL WINDOW_TICK
    case 0xC10020: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C1/C10004.asm:14 LDA ENTITY_FADE_ENTITY
    case 0xC10024: cpu.execute_instruction<0xAD>(0x00B67C, 3); return true;
    // src/unknown/C1/C10004.asm:15 CMP #.LOWORD(-1)
    case 0xC10027: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C10004.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10027.
    case 0xC10029: cpu.execute_instruction<0xFF>(0x22F4D0, 4); return true;
    // src/unknown/C1/C10004.asm:16 BNE @UNKNOWN0
    case 0xC1002A: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/unknown/C1/C10004.asm:17 JSL UNKNOWN_C09451
    case 0xC1002C: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/unknown/C1/C10004.asm:17 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC10029.
    case 0xC1002D: cpu.execute_instruction<0x30>(0x000094, 2); return true;
    // src/unknown/C1/C10004.asm:17 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC1002D.
    case 0xC1002F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10004.asm:18 END_C_FUNCTION
    case 0xC10030: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C10004.asm:18 END_C_FUNCTION
    case 0xC10031: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1004E.asm (unresolved).
bool execute_unresolved_c1_c1004e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1004E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC100C4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1004E.asm:5 LDA RENDER_HPPP_WINDOWS
    case 0xC100C6: cpu.execute_instruction<0xAD>(0x008D07, 3); return true;
    // src/unknown/C1/C1004E.asm:6 AND #$00FF
    case 0xC100C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1004E.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC100C9.
    case 0xC100CB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1004E.asm:7 BEQ @UNKNOWN0
    case 0xC100CC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C1/C1004E.asm:8 JSR UNKNOWN_C3E450
    case 0xC100CE: cpu.execute_instruction<0x20>(0x00004A, 3); return true;
    // src/unknown/C1/C1004E.asm:10 LDA BATTLE_MODE_FLAG
    case 0xC100D1: cpu.execute_instruction<0xAD>(0x00993B, 3); return true;
    // src/unknown/C1/C1004E.asm:11 BEQ @UNKNOWN1
    case 0xC100D4: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C1004E.asm:12 JSL UNKNOWN_C43568
    case 0xC100D6: cpu.execute_instruction<0x22>(0xC432EA, 4); return true;
    // src/unknown/C1/C1004E.asm:13 BRA @UNKNOWN2
    case 0xC100DA: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C1/C1004E.asm:15 JSL OAM_CLEAR
    case 0xC100DC: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/C1/C1004E.asm:16 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC100E0: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/unknown/C1/C1004E.asm:17 JSL UPDATE_SCREEN
    case 0xC100E4: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/unknown/C1/C1004E.asm:18 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC100E8: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1004E.asm:20 END_C_FUNCTION
    case 0xC100EC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1008E.asm (unresolved).
bool execute_unresolved_c1_c1008e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1008E.asm:3 BEGIN_C_FUNCTION
    case 0xC102AF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1008E.asm:10 BRA @UNKNOWN1
    case 0xC102B1: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C1/C1008E.asm:12 LDA WINDOW_TAIL
    case 0xC102B3: cpu.execute_instruction<0xAD>(0x008C24, 3); return true;
    // src/unknown/C1/C1008E.asm:13 LDY #.SIZEOF(window_stats)
    case 0xC102B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C1008E.asm:13 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC102B6.
    case 0xC102B8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1008E.asm:14 JSL MULT168
    case 0xC102B9: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1008E.asm:15 TAX
    case 0xC102BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1008E.asm:16 LDA WINDOW_STATS + window_stats::id,X
    case 0xC102BE: cpu.execute_instruction<0xBD>(0x0089C6, 3); return true;
    // src/unknown/C1/C1008E.asm:17 JSR CLOSE_WINDOW
    case 0xC102C1: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/unknown/C1/C1008E.asm:22 LDA WINDOW_TAIL
    case 0xC102C4: cpu.execute_instruction<0xAD>(0x008C24, 3); return true;
    // src/unknown/C1/C1008E.asm:23 CMP #.LOWORD(-1)
    case 0xC102C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1008E.asm:23 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC102C7.
    case 0xC102C9: cpu.execute_instruction<0xFF>(0x60E7D0, 4); return true;
    // src/unknown/C1/C1008E.asm:24 BNE @UNKNOWN0
    case 0xC102CA: cpu.execute_instruction<0xD0>(0x0000E7, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1008E.asm:32 END_C_FUNCTION
    case 0xC102CC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C100D6.asm (unresolved).
bool execute_unresolved_c1_c100d6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C100D6.asm:3 BEGIN_C_FUNCTION
    case 0xC102DC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    case 0xC102DE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    case 0xC102DF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    case 0xC102E0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    case 0xC102E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC102E1.
    case 0xC102E3: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    case 0xC102E4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    case 0xC102E5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C100D6.asm:8 TAX
    case 0xC102E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C100D6.asm:9 STX @LOCAL00
    case 0xC102E7: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C100D6.asm:10 JSR CLEAR_INSTANT_PRINTING
    case 0xC102E9: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/unknown/C1/C100D6.asm:11 JSL WINDOW_TICK
    case 0xC102EC: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C1/C100D6.asm:12 BRA @UNKNOWN1
    case 0xC102F0: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C100D6.asm:14 JSL UNKNOWN_C12E42
    case 0xC102F2: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/unknown/C1/C100D6.asm:16 LDX @LOCAL00
    case 0xC102F6: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C100D6.asm:17 TXA
    case 0xC102F8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C100D6.asm:18 DEX
    case 0xC102F9: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C100D6.asm:19 STX @LOCAL00
    case 0xC102FA: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C100D6.asm:20 CMP #0
    case 0xC102FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C100D6.asm:20 CMP #0
    // Overlapping static entry reached from 0xC10332.
    case 0xC102FD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C100D6.asm:20 CMP #0
    // Overlapping static entry reached from 0xC102FC.
    case 0xC102FE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C100D6.asm:21 BNE @UNKNOWN0
    case 0xC102FF: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C100D6.asm:22 END_C_FUNCTION
    case 0xC10301: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C100D6.asm:22 END_C_FUNCTION
    case 0xC10302: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C100FE.asm (unresolved).
bool execute_unresolved_c1_c100fe_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C100FE.asm:3 BEGIN_C_FUNCTION
    case 0xC10303: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    case 0xC10305: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    case 0xC10306: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    case 0xC10307: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    case 0xC10308: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10308.
    case 0xC1030A: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    case 0xC1030B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    case 0xC1030C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C100FE.asm:8 TAX
    case 0xC1030D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C100FE.asm:9 LDA DEBUG
    case 0xC1030E: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/unknown/C1/C100FE.asm:10 BEQ @UNKNOWN3
    case 0xC10311: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C1/C100FE.asm:11 LDA BATTLE_MODE
    case 0xC10313: cpu.execute_instruction<0xAD>(0x005148, 3); return true;
    // src/unknown/C1/C100FE.asm:12 BNE @UNKNOWN3
    case 0xC10316: cpu.execute_instruction<0xD0>(0x000025, 2); return true;
    // src/unknown/C1/C100FE.asm:13 BRA @UNKNOWN1
    case 0xC10318: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C100FE.asm:15 JSL UNKNOWN_C12E42
    case 0xC1031A: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/unknown/C1/C100FE.asm:17 LDA PAD_PRESS
    case 0xC1031E: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C100FE.asm:18 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC10321: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x00A0A0, 3); return true;
    // src/unknown/C1/C100FE.asm:18 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC10321.
    case 0xC10323: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x00F4F0, 3); return true;
    // src/unknown/C1/C100FE.asm:19 BEQ @UNKNOWN0
    case 0xC10324: cpu.execute_instruction<0xF0>(0x0000F4, 2); return true;
    // src/unknown/C1/C100FE.asm:19 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC10323.
    case 0xC10325: cpu.execute_instruction<0xF4>(0x004180, 3); return true;
    // src/unknown/C1/C100FE.asm:20 BRA @UNKNOWN9
    case 0xC10326: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/unknown/C1/C100FE.asm:22 LDA DEBUG
    case 0xC10328: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/unknown/C1/C100FE.asm:23 BEQ @UNKNOWN3
    case 0xC1032B: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C1/C100FE.asm:24 LDA PAD_PRESS
    case 0xC1032D: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C100FE.asm:24 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC10380.
    case 0xC1032F: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C1/C100FE.asm:25 AND #PAD::B_BUTTON | PAD::R_BUTTON
    case 0xC10330: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x008010, 3); return true;
    // src/unknown/C1/C100FE.asm:25 AND #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC10330.
    case 0xC10332: cpu.execute_instruction<0x80>(0x0000C9, 2); return true;
    // src/unknown/C1/C100FE.asm:26 CMP #PAD::B_BUTTON | PAD::R_BUTTON
    case 0xC10333: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x008010, 3); return true;
    // src/unknown/C1/C100FE.asm:26 CMP #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC10333.
    case 0xC10335: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/C1/C100FE.asm:27 BNE @UNKNOWN3
    case 0xC10336: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C100FE.asm:28 STZ TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC10338: cpu.execute_instruction<0x9C>(0x00993D, 3); return true;
    // src/unknown/C1/C100FE.asm:29 BRA @UNKNOWN4
    case 0xC1033B: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C1/C100FE.asm:31 LDA TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC1033D: cpu.execute_instruction<0xAD>(0x00993D, 3); return true;
    // src/unknown/C1/C100FE.asm:32 BNE @UNKNOWN2
    case 0xC10340: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C1/C100FE.asm:34 CPX #0
    case 0xC10342: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C1/C100FE.asm:34 CPX #0
    // Overlapping static entry reached from 0xC10342.
    case 0xC10344: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C100FE.asm:35 BEQ @UNKNOWN5
    case 0xC10345: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C1/C100FE.asm:36 TXA
    case 0xC10347: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C100FE.asm:37 BRA @UNKNOWN6
    case 0xC10348: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C100FE.asm:39 LDA TEXT_SPEED_BASED_WAIT
    case 0xC1034A: cpu.execute_instruction<0xAD>(0x009943, 3); return true;
    // src/unknown/C1/C100FE.asm:41 TAX
    case 0xC1034D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C100FE.asm:42 STX @LOCAL00
    case 0xC1034E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C100FE.asm:43 BRA @UNKNOWN8
    case 0xC10350: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C100FE.asm:43 BRA @UNKNOWN8
    // Overlapping static entry reached from 0xC10386.
    case 0xC10351: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/unknown/C1/C100FE.asm:45 JSL UNKNOWN_C12E42
    case 0xC10352: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/unknown/C1/C100FE.asm:45 JSL UNKNOWN_C12E42
    // Overlapping static entry reached from 0xC10351.
    case 0xC10353: cpu.execute_instruction<0x5E>(0x00C135, 3); return true;
    // src/unknown/C1/C100FE.asm:47 LDX @LOCAL00
    case 0xC10356: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C100FE.asm:48 TXA
    case 0xC10358: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C100FE.asm:49 DEX
    case 0xC10359: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C100FE.asm:50 STX @LOCAL00
    case 0xC1035A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C100FE.asm:50 STX @LOCAL00
    // Overlapping static entry reached from 0xC10389.
    case 0xC1035B: cpu.execute_instruction<0x0E>(0x0000C9, 3); return true;
    // src/unknown/C1/C100FE.asm:51 CMP #0
    case 0xC1035C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C100FE.asm:51 CMP #0
    // Overlapping static entry reached from 0xC1035C.
    case 0xC1035E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C100FE.asm:52 BEQ @UNKNOWN9
    case 0xC1035F: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C1/C100FE.asm:53 LDA PAD_PRESS
    case 0xC10361: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C100FE.asm:54 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC10364: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x00A0A0, 3); return true;
    // src/unknown/C1/C100FE.asm:54 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC10364.
    case 0xC10366: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x00E9F0, 3); return true;
    // src/unknown/C1/C100FE.asm:55 BEQ @UNKNOWN7
    case 0xC10367: cpu.execute_instruction<0xF0>(0x0000E9, 2); return true;
    // src/unknown/C1/C100FE.asm:55 BEQ @UNKNOWN7
    // Overlapping static entry reached from 0xC10366.
    case 0xC10368: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00002B, 2); else cpu.execute_instruction<0xE9>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C100FE.asm:57 END_C_FUNCTION
    case 0xC10369: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C100FE.asm:57 END_C_FUNCTION
    case 0xC1036A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C102D0.asm (unresolved).
bool execute_unresolved_c1_c102d0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C102D0.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC104D4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C102D0.asm:4 STZ ACTIONSCRIPT_STATE
    case 0xC104D6: cpu.execute_instruction<0x9C>(0x009939, 3); return true;
    // src/unknown/C1/C102D0.asm:5 JSR CLEAR_INSTANT_PRINTING
    case 0xC104D9: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/unknown/C1/C102D0.asm:6 JSL WINDOW_TICK
    case 0xC104DC: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C1/C102D0.asm:6 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC104EC.
    case 0xC104DE: cpu.execute_instruction<0x35>(0x0000C1, 2); return true;
    // src/unknown/C1/C102D0.asm:7 BRA @UNKNOWN2
    case 0xC104E0: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C1/C102D0.asm:9 LDA DEBUG
    case 0xC104E2: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/unknown/C1/C102D0.asm:10 BEQ @UNKNOWN1
    case 0xC104E5: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C1/C102D0.asm:11 LDA PAD_STATE
    case 0xC104E7: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C1/C102D0.asm:12 AND #PAD::START_BUTTON
    case 0xC104EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/unknown/C1/C102D0.asm:12 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC104EA.
    case 0xC104EC: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/unknown/C1/C102D0.asm:13 BEQ @UNKNOWN1
    case 0xC104ED: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C1/C102D0.asm:13 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC104EC.
    case 0xC104EE: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C1/C102D0.asm:14 LDA PAD_STATE
    case 0xC104EF: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C1/C102D0.asm:15 AND #PAD::SELECT_BUTTON
    case 0xC104F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/unknown/C1/C102D0.asm:15 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC104F2.
    case 0xC104F4: cpu.execute_instruction<0x20>(0x000CD0, 3); return true;
    // src/unknown/C1/C102D0.asm:16 BNE @UNKNOWN3
    case 0xC104F5: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C1/C102D0.asm:18 JSL UNKNOWN_C1004E
    case 0xC104F7: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/unknown/C1/C102D0.asm:20 LDA ACTIONSCRIPT_STATE
    case 0xC104FB: cpu.execute_instruction<0xAD>(0x009939, 3); return true;
    // src/unknown/C1/C102D0.asm:21 BEQ @UNKNOWN0
    case 0xC104FE: cpu.execute_instruction<0xF0>(0x0000E2, 2); return true;
    // src/unknown/C1/C102D0.asm:22 STZ ACTIONSCRIPT_STATE
    case 0xC10500: cpu.execute_instruction<0x9C>(0x009939, 3); return true;
    // src/unknown/C1/C102D0.asm:24 RTS
    case 0xC10503: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1078D.asm (unresolved).
bool execute_unresolved_c1_c1078d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1078D.asm:3 BEGIN_C_FUNCTION
    case 0xC10974: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1078D.asm:6 END_STACK_VARS
    case 0xC10976: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1078D.asm:6 END_STACK_VARS
    case 0xC10977: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1078D.asm:6 END_STACK_VARS
    case 0xC10978: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1078D.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC10978.
    case 0xC1097A: cpu.execute_instruction<0xFF>(0x7EA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1078D.asm:6 END_STACK_VARS
    case 0xC1097B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1183 LDA #.HIWORD(src)
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC1097C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:1183 LDA #.HIWORD(src)
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    // Overlapping static entry reached from 0xC1097C.
    case 0xC1097E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1184 STA $0E
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC1097F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1185 LDA #dest
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC10981: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x007E40, 3); return true;
    // include/macros.asm:1185 LDA #dest
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    // Overlapping static entry reached from 0xC10981.
    case 0xC10983: cpu.execute_instruction<0x7E>(0x001085, 3); return true;
    // include/macros.asm:1186 STA $10
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC10984: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1187 LDY #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC10986: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F6, 2); else cpu.execute_instruction<0xA0>(0x0085F6, 3); return true;
    // include/macros.asm:1187 LDY #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    // Overlapping static entry reached from 0xC10986.
    case 0xC10988: cpu.execute_instruction<0x85>(0x0000A2, 2); return true;
    // include/macros.asm:1188 LDX #size
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC10989: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000240, 3); return true;
    // include/macros.asm:1188 LDX #size
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    // Overlapping static entry reached from 0xC10988.
    case 0xC1098A: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1188 LDX #size
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    // Overlapping static entry reached from 0xC10989.
    case 0xC1098B: cpu.execute_instruction<0x02>(0x0000E2, 2); return true;
    // include/macros.asm:1189 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC1098C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1192 LDA #unk
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC1098E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1194 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC10990: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // include/macros.asm:1194 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    // Overlapping static entry reached from 0xC1098E.
    case 0xC10991: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1078D.asm:8 END_C_FUNCTION
    case 0xC10994: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1078D.asm:8 END_C_FUNCTION
    case 0xC10995: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C107AF-jp.asm (unresolved).
bool execute_unresolved_c1_c107af_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C107AF-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10996: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    case 0xC10998: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    case 0xC10999: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    case 0xC1099A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    case 0xC1099B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E1, 2); else cpu.execute_instruction<0x69>(0x00FFE1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC1099B.
    case 0xC1099D: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    case 0xC1099E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    case 0xC1099F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:16 STA @LOCAL08
    case 0xC109A0: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:16 STA @LOCAL08
    // Overlapping static entry reached from 0xC1099D.
    case 0xC109A1: cpu.execute_instruction<0x1D>(0x004CA0, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC109A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC109A2.
    case 0xC109A4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:18 JSL MULT168
    case 0xC109A5: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C107AF-jp.asm:19 STA @LOCAL07
    case 0xC109A9: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:20 TAX
    case 0xC109AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:21 LDA WINDOW_STATS + window_stats::tilemap_address,X
    case 0xC109AC: cpu.execute_instruction<0xBD>(0x0089F7, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:22 STA @LOCAL06
    case 0xC109AF: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:23 LDA @LOCAL07
    case 0xC109B1: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:24 TAX
    case 0xC109B3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:25 LDA WINDOW_STATS + window_stats::window_x,X
    case 0xC109B4: cpu.execute_instruction<0xBD>(0x0089C8, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:26 ASL
    case 0xC109B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:27 STA @VIRTUAL02
    case 0xC109B8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:28 LDA @LOCAL07
    case 0xC109BA: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:29 TAX
    case 0xC109BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:30 LDA WINDOW_STATS + window_stats::window_y,X
    case 0xC109BD: cpu.execute_instruction<0xBD>(0x0089CA, 3); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC109C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC109C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC109C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC109C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC109C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC109C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:32 CLC
    case 0xC109C6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:33 ADC @VIRTUAL02
    case 0xC109C7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:34 CLC
    case 0xC109C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:35 ADC #.LOWORD(BG2_BUFFER)
    case 0xC109CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:35 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC109CA.
    case 0xC109CC: cpu.execute_instruction<0x81>(0x0000AA, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:36 TAX
    case 0xC109CD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:37 STX @LOCAL05
    case 0xC109CE: cpu.execute_instruction<0x86>(0x000017, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:38 LDA @LOCAL07
    case 0xC109D0: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:39 TAX
    case 0xC109D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:40 LDY WINDOW_STATS + window_stats::width,X
    case 0xC109D3: cpu.execute_instruction<0xBC>(0x0089CC, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:41 STY @LOCAL04
    case 0xC109D6: cpu.execute_instruction<0x84>(0x000015, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:42 STY @LOCAL03
    case 0xC109D8: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:43 TAX
    case 0xC109DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:44 LDA WINDOW_STATS + window_stats::height,X
    case 0xC109DB: cpu.execute_instruction<0xBD>(0x0089CE, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:45 STA @LOCAL02
    case 0xC109DE: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:46 LDX @LOCAL05
    case 0xC109E0: cpu.execute_instruction<0xA6>(0x000017, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:47 LDA __BSS_START__,X
    case 0xC109E2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:48 BEQ @UNKNOWN0
    case 0xC109E5: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:49 CMP #$3C10
    case 0xC109E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x003C10, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:49 CMP #$3C10
    // Overlapping static entry reached from 0xC109E7.
    case 0xC109E9: cpu.execute_instruction<0x3C>(0x000ED0, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:50 BNE @UNKNOWN1
    case 0xC109EA: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:52 LDA #$3C10
    case 0xC109EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x003C10, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:52 LDA #$3C10
    // Overlapping static entry reached from 0xC109EC.
    case 0xC109EE: cpu.execute_instruction<0x3C>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:53 STA __BSS_START__,X
    case 0xC109EF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:53 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC109EE.
    case 0xC109F1: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:54 STX @VIRTUAL02
    case 0xC109F2: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:55 INC @VIRTUAL02
    case 0xC109F4: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:56 INC @VIRTUAL02
    case 0xC109F6: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:57 BRA @UNKNOWN2
    case 0xC109F8: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:59 LDA #$3C13
    case 0xC109FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x003C13, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:59 LDA #$3C13
    // Overlapping static entry reached from 0xC109FA.
    case 0xC109FC: cpu.execute_instruction<0x3C>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:60 STA __BSS_START__,X
    case 0xC109FD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:60 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC109FC.
    case 0xC109FF: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:61 STX @VIRTUAL02
    case 0xC10A00: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:62 INC @VIRTUAL02
    case 0xC10A02: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:63 INC @VIRTUAL02
    case 0xC10A04: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:65 LDA @LOCAL08
    case 0xC10A06: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:66 LDY #.SIZEOF(window_stats)
    case 0xC10A08: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:66 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10A08.
    case 0xC10A0A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:67 JSL MULT168
    case 0xC10A0B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C107AF-jp.asm:68 TAX
    case 0xC10A0F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC10A10: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:70 LDA WINDOW_STATS + window_stats::unknown59,X
    case 0xC10A12: cpu.execute_instruction<0xBD>(0x0089FD, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:71 STA @LOCAL01
    case 0xC10A15: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC10A17: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:73 AND #$00FF
    case 0xC10A19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC10A19.
    case 0xC10A1B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:74 BEQ @UNKNOWN6
    case 0xC10A1C: cpu.execute_instruction<0xF0>(0x00005C, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:75 TXA
    case 0xC10A1E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:76 CLC
    case 0xC10A1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:77 ADC #.LOWORD(WINDOW_STATS) + window_stats::title
    case 0xC10A20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x0089FE, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:77 ADC #.LOWORD(WINDOW_STATS) + window_stats::title
    // Overlapping static entry reached from 0xC10A20.
    case 0xC10A22: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000485, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:78 STA @VIRTUAL04
    case 0xC10A23: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:78 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC10A22.
    case 0xC10A24: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:79 LDA @LOCAL01
    case 0xC10A25: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:79 LDA @LOCAL01
    // Overlapping static entry reached from 0xC10A24.
    case 0xC10A26: cpu.execute_instruction<0x10>(0x000029, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:80 AND #$00FF
    case 0xC10A27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC10A26.
    case 0xC10A28: cpu.execute_instruction<0xFF>(0x0A3A00, 4); return true;
    // src/unknown/C1/C107AF-jp.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC10A27.
    case 0xC10A29: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:81 DEC
    case 0xC10A2A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC10A2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC10A2C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC10A2D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC10A2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:83 CLC
    case 0xC10A2F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:84 ADC #$02E0
    case 0xC10A30: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x0002E0, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:84 ADC #$02E0
    // Overlapping static entry reached from 0xC10A30.
    case 0xC10A32: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:85 STA @LOCAL00
    case 0xC10A33: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:86 LDA #$3C16
    case 0xC10A35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x003C16, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:86 LDA #$3C16
    // Overlapping static entry reached from 0xC10A35.
    case 0xC10A37: cpu.execute_instruction<0x3C>(0x0002A6, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:87 LDX @VIRTUAL02
    case 0xC10A38: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:88 STA __BSS_START__,X
    case 0xC10A3A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:89 LDX @VIRTUAL02
    case 0xC10A3D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:90 INX
    case 0xC10A3F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:91 INX
    case 0xC10A40: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:92 STX @LOCAL05
    case 0xC10A41: cpu.execute_instruction<0x86>(0x000017, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:93 LDY @LOCAL04
    case 0xC10A43: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:94 DEY
    case 0xC10A45: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:95 BRA @UNKNOWN5
    case 0xC10A46: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:97 LDA @LOCAL00
    case 0xC10A48: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:98 CLC
    case 0xC10A4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:99 ADC #$2000
    case 0xC10A4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:99 ADC #$2000
    // Overlapping static entry reached from 0xC10A4B.
    case 0xC10A4D: cpu.execute_instruction<0x20>(0x0017A6, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:100 LDX @LOCAL05
    case 0xC10A4E: cpu.execute_instruction<0xA6>(0x000017, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:101 STA __BSS_START__,X
    case 0xC10A50: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:101 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC10A26.
    case 0xC10A51: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:102 LDA @LOCAL00
    case 0xC10A53: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:103 INC
    case 0xC10A55: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:104 STA @LOCAL00
    case 0xC10A56: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:105 INX
    case 0xC10A58: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:106 INX
    case 0xC10A59: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:107 STX @LOCAL05
    case 0xC10A5A: cpu.execute_instruction<0x86>(0x000017, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:108 DEY
    case 0xC10A5C: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:109 INC @VIRTUAL04
    case 0xC10A5D: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:111 LDX @VIRTUAL04
    case 0xC10A5F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:112 LDA __BSS_START__,X
    case 0xC10A61: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:113 AND #$00FF
    case 0xC10A64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:113 AND #$00FF
    // Overlapping static entry reached from 0xC10A64.
    case 0xC10A66: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:114 BNE @UNKNOWN4
    case 0xC10A67: cpu.execute_instruction<0xD0>(0x0000DF, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:115 LDA #$7C16
    case 0xC10A69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x007C16, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:115 LDA #$7C16
    // Overlapping static entry reached from 0xC10A69.
    case 0xC10A6B: cpu.execute_instruction<0x7C>(0x0017A6, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:116 LDX @LOCAL05
    case 0xC10A6C: cpu.execute_instruction<0xA6>(0x000017, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:117 STA __BSS_START__,X
    case 0xC10A6E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:118 STX @VIRTUAL02
    case 0xC10A71: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:119 INC @VIRTUAL02
    case 0xC10A73: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:120 INC @VIRTUAL02
    case 0xC10A75: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:121 DEY
    case 0xC10A77: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:122 STY @LOCAL04
    case 0xC10A78: cpu.execute_instruction<0x84>(0x000015, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:124 LDA @LOCAL08
    case 0xC10A7A: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:125 LDY #.SIZEOF(window_stats)
    case 0xC10A7C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:125 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10A7C.
    case 0xC10A7E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:126 JSL MULT168
    case 0xC10A7F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C107AF-jp.asm:127 TAX
    case 0xC10A83: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:128 LDA WINDOW_STATS + window_stats::id,X
    case 0xC10A84: cpu.execute_instruction<0xBD>(0x0089C6, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:129 CMP PAGINATION_WINDOW
    case 0xC10A87: cpu.execute_instruction<0xCD>(0x0061F2, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:130 BNE @UNKNOWN7
    case 0xC10A8A: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:131 LDA PAGINATION_ANIMATION_FRAME
    case 0xC10A8C: cpu.execute_instruction<0xAD>(0x0061F4, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:132 CMP #.LOWORD(-1)
    case 0xC10A8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:132 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10A8F.
    case 0xC10A91: cpu.execute_instruction<0xFF>(0xA40AF0, 4); return true;
    // src/unknown/C1/C107AF-jp.asm:133 BEQ @UNKNOWN7
    case 0xC10A92: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:134 LDY @LOCAL04
    case 0xC10A94: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:134 LDY @LOCAL04
    // Overlapping static entry reached from 0xC10A91.
    case 0xC10A95: cpu.execute_instruction<0x15>(0x000098, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:135 TYA
    case 0xC10A96: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:136 SEC
    case 0xC10A97: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:137 SBC #4
    case 0xC10A98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:137 SBC #4
    // Overlapping static entry reached from 0xC10A98.
    case 0xC10A9A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:138 TAY
    case 0xC10A9B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:139 STY @LOCAL04
    case 0xC10A9C: cpu.execute_instruction<0x84>(0x000015, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:141 LDY @LOCAL04
    case 0xC10A9E: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:142 TYX
    case 0xC10AA0: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:143 STX @LOCAL05
    case 0xC10AA1: cpu.execute_instruction<0x86>(0x000017, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:144 BRA @UNKNOWN9
    case 0xC10AA3: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:146 LDA #$3C11
    case 0xC10AA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x003C11, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:146 LDA #$3C11
    // Overlapping static entry reached from 0xC10AA5.
    case 0xC10AA7: cpu.execute_instruction<0x3C>(0x0002A6, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:147 LDX @VIRTUAL02
    case 0xC10AA8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:148 STA __BSS_START__,X
    case 0xC10AAA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:149 INC @VIRTUAL02
    case 0xC10AAD: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:150 INC @VIRTUAL02
    case 0xC10AAF: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:151 LDX @LOCAL05
    case 0xC10AB1: cpu.execute_instruction<0xA6>(0x000017, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:152 DEX
    case 0xC10AB3: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:153 STX @LOCAL05
    case 0xC10AB4: cpu.execute_instruction<0x86>(0x000017, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:155 BNE @UNKNOWN8
    case 0xC10AB6: cpu.execute_instruction<0xD0>(0x0000ED, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:156 LDA @LOCAL08
    case 0xC10AB8: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:157 LDY #.SIZEOF(window_stats)
    case 0xC10ABA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:157 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10ABA.
    case 0xC10ABC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:158 JSL MULT168
    case 0xC10ABD: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C107AF-jp.asm:159 TAX
    case 0xC10AC1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:160 LDA WINDOW_STATS + window_stats::id,X
    case 0xC10AC2: cpu.execute_instruction<0xBD>(0x0089C6, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:161 CMP PAGINATION_WINDOW
    case 0xC10AC5: cpu.execute_instruction<0xCD>(0x0061F2, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:162 BNE @UNKNOWN12
    case 0xC10AC8: cpu.execute_instruction<0xD0>(0x000048, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:163 LDA PAGINATION_ANIMATION_FRAME
    case 0xC10ACA: cpu.execute_instruction<0xAD>(0x0061F4, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:164 CMP #.LOWORD(-1)
    case 0xC10ACD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:164 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10ACD.
    case 0xC10ACF: cpu.execute_instruction<0xFF>(0xA940F0, 4); return true;
    // src/unknown/C1/C107AF-jp.asm:165 BEQ @UNKNOWN12
    case 0xC10AD0: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC10AD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00E41E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10ACF.
    case 0xC10AD3: cpu.execute_instruction<0x1E>(0x0085E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10AD2.
    case 0xC10AD4: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC10AD5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10AD4.
    case 0xC10AD6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC10AD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10AD7.
    case 0xC10AD9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC10ADA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:167 LDA PAGINATION_ANIMATION_FRAME
    case 0xC10ADC: cpu.execute_instruction<0xAD>(0x0061F4, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:168 ASL
    case 0xC10ADF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:169 ASL
    case 0xC10AE0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:170 CLC
    case 0xC10AE1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:171 ADC @VIRTUAL0A
    case 0xC10AE2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:172 STA @VIRTUAL0A
    case 0xC10AE4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10AE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC10AE6.
    case 0xC10AE8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10AE9: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10AEB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10AEC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10AEE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10AF0: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:174 LDX #0
    case 0xC10AF2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:174 LDX #0
    // Overlapping static entry reached from 0xC10AF2.
    case 0xC10AF4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:175 STX @LOCAL00
    case 0xC10AF5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:176 BRA @UNKNOWN11
    case 0xC10AF7: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:178 LDA [@VIRTUAL06]
    case 0xC10AF9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:179 LDX @VIRTUAL02
    case 0xC10AFB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:180 STA __BSS_START__,X
    case 0xC10AFD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:181 INC @VIRTUAL06
    case 0xC10B00: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:182 INC @VIRTUAL06
    case 0xC10B02: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:183 INC @VIRTUAL02
    case 0xC10B04: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:184 INC @VIRTUAL02
    case 0xC10B06: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:185 LDX @LOCAL00
    case 0xC10B08: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:186 INX
    case 0xC10B0A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:187 STX @LOCAL00
    case 0xC10B0B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:189 CPX #4
    case 0xC10B0D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:189 CPX #4
    // Overlapping static entry reached from 0xC10B0D.
    case 0xC10B0F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:190 BCC @UNKNOWN10
    case 0xC10B10: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:192 LDX @VIRTUAL02
    case 0xC10B12: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:193 LDA __BSS_START__,X
    case 0xC10B14: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:194 BEQ @UNKNOWN13
    case 0xC10B17: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:195 CMP #$7C10
    case 0xC10B19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x007C10, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:195 CMP #$7C10
    // Overlapping static entry reached from 0xC10B19.
    case 0xC10B1B: cpu.execute_instruction<0x7C>(0x0010D0, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:196 BNE @UNKNOWN14
    case 0xC10B1C: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:198 LDA #$7C10
    case 0xC10B1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x007C10, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:198 LDA #$7C10
    // Overlapping static entry reached from 0xC10B1E.
    case 0xC10B20: cpu.execute_instruction<0x7C>(0x0002A6, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:199 LDX @VIRTUAL02
    case 0xC10B21: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:200 STA __BSS_START__,X
    case 0xC10B23: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:201 LDA @VIRTUAL02
    case 0xC10B26: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:202 INC
    case 0xC10B28: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:203 INC
    case 0xC10B29: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:204 STA @LOCAL08
    case 0xC10B2A: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:205 BRA @UNKNOWN15
    case 0xC10B2C: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:207 LDA #$7C13
    case 0xC10B2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x007C13, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:207 LDA #$7C13
    // Overlapping static entry reached from 0xC10B2E.
    case 0xC10B30: cpu.execute_instruction<0x7C>(0x0002A6, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:208 LDX @VIRTUAL02
    case 0xC10B31: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:209 STA __BSS_START__,X
    case 0xC10B33: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:210 LDA @VIRTUAL02
    case 0xC10B36: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:211 INC
    case 0xC10B38: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:212 INC
    case 0xC10B39: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:213 STA @LOCAL08
    case 0xC10B3A: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:215 LDA #32
    case 0xC10B3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:215 LDA #32
    // Overlapping static entry reached from 0xC10B3C.
    case 0xC10B3E: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:216 SEC
    case 0xC10B3F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:217 SBC @LOCAL03
    case 0xC10B40: cpu.execute_instruction<0xE5>(0x000013, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:218 DEC
    case 0xC10B42: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:219 DEC
    case 0xC10B43: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:220 ASL
    case 0xC10B44: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:221 STA @VIRTUAL02
    case 0xC10B45: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:222 LDA @LOCAL08
    case 0xC10B47: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:223 CLC
    case 0xC10B49: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:224 ADC @VIRTUAL02
    case 0xC10B4A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:225 TAX
    case 0xC10B4C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:226 LDY @LOCAL02
    case 0xC10B4D: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:227 BRA @UNKNOWN19
    case 0xC10B4F: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:229 LDA #$3C12
    case 0xC10B51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x003C12, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:229 LDA #$3C12
    // Overlapping static entry reached from 0xC10B51.
    case 0xC10B53: cpu.execute_instruction<0x3C>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:230 STA __BSS_START__,X
    case 0xC10B54: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:230 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC10B53.
    case 0xC10B56: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:231 INX
    case 0xC10B57: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:232 INX
    case 0xC10B58: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:233 LDA @LOCAL03
    case 0xC10B59: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:234 STA @LOCAL00
    case 0xC10B5B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:235 BRA @UNKNOWN18
    case 0xC10B5D: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:237 LDA (@LOCAL06)
    case 0xC10B5F: cpu.execute_instruction<0xB2>(0x000019, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:238 CLC
    case 0xC10B61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:239 ADC #$2000
    case 0xC10B62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:239 ADC #$2000
    // Overlapping static entry reached from 0xC10B62.
    case 0xC10B64: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:240 STA __BSS_START__,X
    case 0xC10B65: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:240 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC10B64.
    case 0xC10B67: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:241 INC @LOCAL06
    case 0xC10B68: cpu.execute_instruction<0xE6>(0x000019, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:242 INC @LOCAL06
    case 0xC10B6A: cpu.execute_instruction<0xE6>(0x000019, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:243 INX
    case 0xC10B6C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:244 INX
    case 0xC10B6D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:245 LDA @LOCAL00
    case 0xC10B6E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:246 DEC
    case 0xC10B70: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:247 STA @LOCAL00
    case 0xC10B71: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:249 BNE @UNKNOWN17
    case 0xC10B73: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:250 LDA #$7C12
    case 0xC10B75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x007C12, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:250 LDA #$7C12
    // Overlapping static entry reached from 0xC10B75.
    case 0xC10B77: cpu.execute_instruction<0x7C>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:251 STA __BSS_START__,X
    case 0xC10B78: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:252 TXA
    case 0xC10B7B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:253 INC
    case 0xC10B7C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:254 INC
    case 0xC10B7D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:255 STA @LOCAL02
    case 0xC10B7E: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:256 LDA #32
    case 0xC10B80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:256 LDA #32
    // Overlapping static entry reached from 0xC10B80.
    case 0xC10B82: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:257 SEC
    case 0xC10B83: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:258 SBC @LOCAL03
    case 0xC10B84: cpu.execute_instruction<0xE5>(0x000013, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:259 DEC
    case 0xC10B86: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:260 DEC
    case 0xC10B87: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:261 ASL
    case 0xC10B88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:262 STA @VIRTUAL02
    case 0xC10B89: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:263 LDA @LOCAL02
    case 0xC10B8B: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:264 CLC
    case 0xC10B8D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:265 ADC @VIRTUAL02
    case 0xC10B8E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:266 TAX
    case 0xC10B90: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:267 DEY
    case 0xC10B91: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:269 BNE @UNKNOWN16
    case 0xC10B92: cpu.execute_instruction<0xD0>(0x0000BD, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:270 LDA __BSS_START__,X
    case 0xC10B94: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:271 BEQ @UNKNOWN20
    case 0xC10B97: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:272 CMP #$BC10
    case 0xC10B99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x00BC10, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:272 CMP #$BC10
    // Overlapping static entry reached from 0xC10B99.
    case 0xC10B9B: cpu.execute_instruction<0xBC>(0x000BD0, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:273 BNE @UNKNOWN21
    case 0xC10B9C: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:275 LDA #$BC10
    case 0xC10B9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x00BC10, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:275 LDA #$BC10
    // Overlapping static entry reached from 0xC10B9E.
    case 0xC10BA0: cpu.execute_instruction<0xBC>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:276 STA __BSS_START__,X
    case 0xC10BA1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:276 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC10BA0.
    case 0xC10BA3: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:277 TXY
    case 0xC10BA4: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:278 INY
    case 0xC10BA5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:279 INY
    case 0xC10BA6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:280 BRA @UNKNOWN22
    case 0xC10BA7: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:282 LDA #$BC13
    case 0xC10BA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x00BC13, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:282 LDA #$BC13
    // Overlapping static entry reached from 0xC10BA9.
    case 0xC10BAB: cpu.execute_instruction<0xBC>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:283 STA __BSS_START__,X
    case 0xC10BAC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:283 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC10BAB.
    case 0xC10BAE: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:284 TXY
    case 0xC10BAF: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:285 INY
    case 0xC10BB0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:286 INY
    case 0xC10BB1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:288 LDX @LOCAL03
    case 0xC10BB2: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:289 BRA @UNKNOWN24
    case 0xC10BB4: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:291 LDA #$BC11
    case 0xC10BB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x00BC11, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:291 LDA #$BC11
    // Overlapping static entry reached from 0xC10BB6.
    case 0xC10BB8: cpu.execute_instruction<0xBC>(0x000099, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:292 STA __BSS_START__,Y
    case 0xC10BB9: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:292 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC10BB8.
    case 0xC10BBB: cpu.execute_instruction<0x00>(0x0000C8, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:293 INY
    case 0xC10BBC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:294 INY
    case 0xC10BBD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:295 DEX
    case 0xC10BBE: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF-jp.asm:297 BNE @UNKNOWN23
    case 0xC10BBF: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:298 LDA __BSS_START__,Y
    case 0xC10BC1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:299 BEQ @UNKNOWN25
    case 0xC10BC4: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:300 CMP #$FC10
    case 0xC10BC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x00FC10, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:300 CMP #$FC10
    // Overlapping static entry reached from 0xC10BC6.
    case 0xC10BC8: cpu.execute_instruction<0xFC>(0x0008D0, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:301 BNE @UNKNOWN26
    case 0xC10BC9: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:303 LDA #$FC10
    case 0xC10BCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x00FC10, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:303 LDA #$FC10
    // Overlapping static entry reached from 0xC10BCB.
    case 0xC10BCD: cpu.execute_instruction<0xFC>(0x000099, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:304 STA __BSS_START__,Y
    case 0xC10BCE: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:304 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC10BCD.
    case 0xC10BD0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:305 BRA @UNKNOWN27
    case 0xC10BD1: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C1/C107AF-jp.asm:307 LDA #$FC13
    case 0xC10BD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x00FC13, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:307 LDA #$FC13
    // Overlapping static entry reached from 0xC10BD3.
    case 0xC10BD5: cpu.execute_instruction<0xFC>(0x000099, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:308 STA __BSS_START__,Y
    case 0xC10BD6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C107AF-jp.asm:308 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC10BD5.
    case 0xC10BD8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C107AF-jp.asm:310 END_C_FUNCTION
    case 0xC10BD9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:310 END_C_FUNCTION
    case 0xC10BDA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10A85-jp.asm (unresolved).
bool execute_unresolved_c1_c10a85_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10A85-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC10FF3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10A85-jp.asm:14 END_STACK_VARS
    case 0xC10FF5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C10A85-jp.asm:14 END_STACK_VARS
    case 0xC10FF6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10A85-jp.asm:14 END_STACK_VARS
    case 0xC10FF7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10A85-jp.asm:14 END_STACK_VARS
    case 0xC10FF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10A85-jp.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC10FF8.
    case 0xC10FFA: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10A85-jp.asm:14 END_STACK_VARS
    case 0xC10FFB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C10A85-jp.asm:14 END_STACK_VARS
    case 0xC10FFC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:15 STY @LOCAL05
    case 0xC10FFD: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:15 STY @LOCAL05
    // Overlapping static entry reached from 0xC10FFA.
    case 0xC10FFE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:16 STX @VIRTUAL02
    case 0xC10FFF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:17 STX @LOCAL04
    case 0xC11001: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:18 STA @LOCAL03
    case 0xC11003: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:19 ASL
    case 0xC11005: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:20 TAX
    case 0xC11006: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:21 LDA OPEN_WINDOW_TABLE,X
    case 0xC11007: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:22 STA @LOCAL02
    case 0xC1100A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:23 CMP #.LOWORD(-1)
    case 0xC1100C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:23 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1100C.
    case 0xC1100E: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C10A85-jp.asm:24 BEQL @UNKNOWN10
    case 0xC1100F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C10A85-jp.asm:24 BEQL @UNKNOWN10
    case 0xC11011: cpu.execute_instruction<0x4C>(0x00110C, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C10A85-jp.asm:24 BEQL @UNKNOWN10
    // Overlapping static entry reached from 0xC1100E.
    case 0xC11012: cpu.execute_instruction<0x0C>(0x00A511, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:25 LDA @LOCAL02
    case 0xC11014: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:25 LDA @LOCAL02
    // Overlapping static entry reached from 0xC11012.
    case 0xC11015: cpu.execute_instruction<0x12>(0x0000A0, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:26 LDY #.SIZEOF(window_stats)
    case 0xC11016: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:26 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11015.
    case 0xC11017: cpu.execute_instruction<0x4C>(0x002200, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:26 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11016.
    case 0xC11018: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:27 JSL MULT168
    case 0xC11019: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C10A85-jp.asm:28 TAX
    case 0xC1101D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:29 LDY WINDOW_STATS + window_stats::text_x,X
    case 0xC1101E: cpu.execute_instruction<0xBC>(0x0089D0, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:30 STY @LOCAL01
    case 0xC11021: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:31 LDA WINDOW_STATS + window_stats::text_y,X
    case 0xC11023: cpu.execute_instruction<0xBD>(0x0089D2, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:32 STA @VIRTUAL04
    case 0xC11026: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:33 TYA
    case 0xC11028: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:34 CMP WINDOW_STATS + window_stats::width,X
    case 0xC11029: cpu.execute_instruction<0xDD>(0x0089CC, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:35 BNE @UNKNOWN3
    case 0xC1102C: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:36 LDA WINDOW_STATS + window_stats::height,X
    case 0xC1102E: cpu.execute_instruction<0xBD>(0x0089CE, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:37 LSR
    case 0xC11031: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:38 DEC
    case 0xC11032: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:39 STA @VIRTUAL02
    case 0xC11033: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:40 LDA @VIRTUAL04
    case 0xC11035: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:41 CMP @VIRTUAL02
    case 0xC11037: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:42 BEQ @UNKNOWN1
    case 0xC11039: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:43 INC @VIRTUAL04
    case 0xC1103B: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:44 BRA @UNKNOWN2
    case 0xC1103D: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:46 LDA @LOCAL03
    case 0xC1103F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:47 JSR UNKNOWN_C437B8
    case 0xC11041: cpu.execute_instruction<0x20>(0x000F65, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:49 LDY #0
    case 0xC11044: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:49 LDY #0
    // Overlapping static entry reached from 0xC11044.
    case 0xC11046: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:50 STY @LOCAL01
    case 0xC11047: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:52 LDA BLINKING_TRIANGLE_FLAG
    case 0xC11049: cpu.execute_instruction<0xAD>(0x009945, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:53 BEQ @UNKNOWN6
    case 0xC1104C: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:54 CPY #0
    case 0xC1104E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:54 CPY #0
    // Overlapping static entry reached from 0xC1104E.
    case 0xC11050: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:55 BNE @UNKNOWN6
    case 0xC11051: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:56 LDA @LOCAL04
    case 0xC11053: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:57 STA @VIRTUAL02
    case 0xC11055: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:58 CMP #32
    case 0xC11057: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:58 CMP #32
    // Overlapping static entry reached from 0xC11057.
    case 0xC11059: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:59 BEQ @UNKNOWN4
    case 0xC1105A: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:60 LDA @VIRTUAL02
    case 0xC1105C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:61 CMP #64
    case 0xC1105E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:61 CMP #64
    // Overlapping static entry reached from 0xC1105E.
    case 0xC11060: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:62 BNE @UNKNOWN6
    case 0xC11061: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:64 LDA BLINKING_TRIANGLE_FLAG
    case 0xC11063: cpu.execute_instruction<0xAD>(0x009945, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:65 CMP #1
    case 0xC11066: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:65 CMP #1
    // Overlapping static entry reached from 0xC11066.
    case 0xC11068: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C10A85-jp.asm:66 BEQL @UNKNOWN9
    case 0xC11069: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C10A85-jp.asm:66 BEQL @UNKNOWN9
    case 0xC1106B: cpu.execute_instruction<0x4C>(0x0010F7, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:67 CMP #2
    case 0xC1106E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:67 CMP #2
    // Overlapping static entry reached from 0xC1106E.
    case 0xC11070: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:68 BNE @UNKNOWN6
    case 0xC11071: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:69 LDA #32
    case 0xC11073: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:69 LDA #32
    // Overlapping static entry reached from 0xC11073.
    case 0xC11075: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:70 STA @VIRTUAL02
    case 0xC11076: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:71 STA @LOCAL04
    case 0xC11078: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:73 LDA @LOCAL02
    case 0xC1107A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:74 LDY #.SIZEOF(window_stats)
    case 0xC1107C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:74 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1107C.
    case 0xC1107E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:75 JSL MULT168
    case 0xC1107F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C10A85-jp.asm:76 TAX
    case 0xC11083: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:77 LDY @LOCAL01
    case 0xC11084: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:78 TYA
    case 0xC11086: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:79 ASL
    case 0xC11087: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:80 STA @VIRTUAL02
    case 0xC11088: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:81 LDY WINDOW_STATS + window_stats::width,X
    case 0xC1108A: cpu.execute_instruction<0xBC>(0x0089CC, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:82 LDA @VIRTUAL04
    case 0xC1108D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:83 JSL MULT16
    case 0xC1108F: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C1/C10A85-jp.asm:84 ASL
    case 0xC11093: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:85 ASL
    case 0xC11094: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:86 CLC
    case 0xC11095: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:87 ADC WINDOW_STATS + window_stats::tilemap_address,X
    case 0xC11096: cpu.execute_instruction<0x7D>(0x0089F7, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:88 CLC
    case 0xC11099: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:89 ADC @VIRTUAL02
    case 0xC1109A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:90 STA @LOCAL00
    case 0xC1109C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:91 LDA @LOCAL04
    case 0xC1109E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:92 STA @VIRTUAL02
    case 0xC110A0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:93 CMP #34
    case 0xC110A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000022, 2); else cpu.execute_instruction<0xC9>(0x000022, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:93 CMP #34
    // Overlapping static entry reached from 0xC110A2.
    case 0xC110A4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:94 BNE @UNKNOWN7
    case 0xC110A5: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:95 LDX #$0C00
    case 0xC110A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000C00, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:95 LDX #$0C00
    // Overlapping static entry reached from 0xC110A7.
    case 0xC110A9: cpu.execute_instruction<0x0C>(0x000280, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:96 BRA @UNKNOWN8
    case 0xC110AA: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:98 LDX @LOCAL05
    case 0xC110AC: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:100 LDA @VIRTUAL02
    case 0xC110AE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:101 AND #$000F
    case 0xC110B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:101 AND #$000F
    // Overlapping static entry reached from 0xC110B0.
    case 0xC110B2: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:102 PHA
    case 0xC110B3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:103 LDA @VIRTUAL02
    case 0xC110B4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:104 AND #$FFF0
    case 0xC110B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:104 AND #$FFF0
    // Overlapping static entry reached from 0xC110B6.
    case 0xC110B8: cpu.execute_instruction<0xFF>(0x847A0A, 4); return true;
    // src/unknown/C1/C10A85-jp.asm:105 ASL
    case 0xC110B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:106 PLY
    case 0xC110BA: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:107 STY @VIRTUAL02
    case 0xC110BB: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:107 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC110B8.
    case 0xC110BC: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:108 CLC
    case 0xC110BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:109 ADC @VIRTUAL02
    case 0xC110BE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:110 STX @VIRTUAL02
    case 0xC110C0: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:111 CLC
    case 0xC110C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:112 ADC @VIRTUAL02
    case 0xC110C3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:113 STA @VIRTUAL02
    case 0xC110C5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:114 STA @LOCAL05
    case 0xC110C7: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:115 LDA @LOCAL00
    case 0xC110C9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:116 TAX
    case 0xC110CB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:117 LDA @VIRTUAL02
    case 0xC110CC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:118 STA __BSS_START__,X
    case 0xC110CE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:119 LDA @LOCAL02
    case 0xC110D1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:120 LDY #.SIZEOF(window_stats)
    case 0xC110D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:120 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC110D3.
    case 0xC110D5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:121 JSL MULT168
    case 0xC110D6: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C10A85-jp.asm:122 TAX
    case 0xC110DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:123 LDA WINDOW_STATS+window_stats::width,X
    case 0xC110DB: cpu.execute_instruction<0xBD>(0x0089CC, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:124 ASL
    case 0xC110DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:125 STA @VIRTUAL02
    case 0xC110DF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:126 LDA @LOCAL00
    case 0xC110E1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:126 LDA @LOCAL00
    // Overlapping static entry reached from 0xC146AC.
    case 0xC110E2: cpu.execute_instruction<0x0E>(0x006518, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:127 CLC
    case 0xC110E3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:128 ADC @VIRTUAL02
    case 0xC110E4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:128 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC110E2.
    case 0xC110E5: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:129 TAX
    case 0xC110E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:130 LDA @LOCAL05
    case 0xC110E7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:131 STA @VIRTUAL02
    case 0xC110E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:132 CLC
    case 0xC110EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:133 ADC #16
    case 0xC110EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:133 ADC #16
    // Overlapping static entry reached from 0xC110EC.
    case 0xC110EE: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:134 STA __BSS_START__,X
    case 0xC110EF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:135 LDY @LOCAL01
    case 0xC110F2: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:136 INY
    case 0xC110F4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:137 STY @LOCAL01
    case 0xC110F5: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:139 LDA @LOCAL02
    case 0xC110F7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:140 LDY #.SIZEOF(window_stats)
    case 0xC110F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:140 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC110F9.
    case 0xC110FB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:141 JSL MULT168
    case 0xC110FC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C10A85-jp.asm:142 TAX
    case 0xC11100: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:143 LDY @LOCAL01
    case 0xC11101: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:144 TYA
    case 0xC11103: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C10A85-jp.asm:145 STA WINDOW_STATS+window_stats::text_x,X
    case 0xC11104: cpu.execute_instruction<0x9D>(0x0089D0, 3); return true;
    // src/unknown/C1/C10A85-jp.asm:146 LDA @VIRTUAL04
    case 0xC11107: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C10A85-jp.asm:147 STA WINDOW_STATS+window_stats::text_y,X
    case 0xC11109: cpu.execute_instruction<0x9D>(0x0089D2, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10A85-jp.asm:149 END_C_FUNCTION
    case 0xC1110C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10A85-jp.asm:149 END_C_FUNCTION
    case 0xC1110D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10BA1.asm (unresolved).
bool execute_unresolved_c1_c10ba1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10BA1.asm:3 BEGIN_C_FUNCTION
    case 0xC1110E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    case 0xC11110: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    case 0xC11111: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    case 0xC11112: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    case 0xC11113: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC11113.
    case 0xC11115: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    case 0xC11116: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    case 0xC11117: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C10BA1.asm:8 TAX
    case 0xC11118: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10BA1.asm:9 STX @LOCAL00
    case 0xC11119: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C10BA1.asm:10 LDA CURRENT_FOCUS_WINDOW
    case 0xC1111B: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C10BA1.asm:11 CMP #.LOWORD(-1)
    case 0xC1111E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C10BA1.asm:11 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1111E.
    case 0xC11120: cpu.execute_instruction<0xFF>(0xAD1BF0, 4); return true;
    // src/unknown/C1/C10BA1.asm:12 BEQ @UNKNOWN0
    case 0xC11121: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C1/C10BA1.asm:13 LDA CURRENT_FOCUS_WINDOW
    case 0xC11123: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C10BA1.asm:13 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11120.
    case 0xC11124: cpu.execute_instruction<0x96>(0x00008C, 2); return true;
    // src/unknown/C1/C10BA1.asm:14 ASL
    case 0xC11126: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10BA1.asm:15 TAX
    case 0xC11127: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10BA1.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC11128: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C10BA1.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC1112B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C10BA1.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1112B.
    case 0xC1112D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10BA1.asm:18 JSL MULT168
    case 0xC1112E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C10BA1.asm:19 TAX
    case 0xC11132: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10BA1.asm:20 LDY WINDOW_STATS + window_stats::curr_tile_attributes,X
    case 0xC11133: cpu.execute_instruction<0xBC>(0x0089D5, 3); return true;
    // src/unknown/C1/C10BA1.asm:21 LDX @LOCAL00
    case 0xC11136: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C10BA1.asm:22 LDA CURRENT_FOCUS_WINDOW
    case 0xC11138: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C10BA1.asm:23 JSR UNKNOWN_C10A85
    case 0xC1113B: cpu.execute_instruction<0x20>(0x000FF3, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10BA1.asm:25 END_C_FUNCTION
    case 0xC1113E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10BA1.asm:25 END_C_FUNCTION
    case 0xC1113F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10D60.asm (unresolved).
bool execute_unresolved_c1_c10d60_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10D60.asm:3 BEGIN_C_FUNCTION
    case 0xC112AE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C10D60.asm:5 JSR UNKNOWN_C10BA1
    case 0xC112B0: cpu.execute_instruction<0x20>(0x00110E, 3); return true;
    // src/unknown/C1/C10D60.asm:6 LDA CURRENT_FOCUS_WINDOW
    case 0xC112B3: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C10D60.asm:7 ASL
    case 0xC112B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10D60.asm:8 TAX
    case 0xC112B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10D60.asm:9 LDA OPEN_WINDOW_TABLE,X
    case 0xC112B8: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C10D60.asm:10 CMP WINDOW_TAIL
    case 0xC112BB: cpu.execute_instruction<0xCD>(0x008C24, 3); return true;
    // src/unknown/C1/C10D60.asm:11 BEQ @UNKNOWN0
    case 0xC112BE: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C1/C10D60.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xC112C0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C10D60.asm:13 LDA #1
    case 0xC112C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C1/C10D60.asm:14 STA REDRAW_ALL_WINDOWS
    case 0xC112C4: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // src/unknown/C1/C10D60.asm:14 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC112C2.
    case 0xC112C5: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C1/C10D60.asm:14 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC112C5.
    case 0xC112C6: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/unknown/C1/C10D60.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC112C7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10D60.asm:17 END_C_FUNCTION
    case 0xC112C9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10D7C.asm (unresolved).
bool execute_unresolved_c1_c10d7c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10D7C.asm:3 BEGIN_C_FUNCTION
    case 0xC112CA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10D7C.asm:10 END_STACK_VARS
    case 0xC112CC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10D7C.asm:10 END_STACK_VARS
    case 0xC112CD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10D7C.asm:10 END_STACK_VARS
    case 0xC112CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10D7C.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC112CE.
    case 0xC112D0: cpu.execute_instruction<0xFF>(0x26A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10D7C.asm:10 END_STACK_VARS
    case 0xC112D1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10D7C.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC112D2: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC112D4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10D7C.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC112D6: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC112D8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10D7C.asm:12 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC112DA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:12 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC112DC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10D7C.asm:12 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC112DE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:12 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC112E0: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C10D7C.asm:13 LDX #.LOWORD(NUMBER_TEXT_BUFFER) + 6
    case 0xC112E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00009E, 2); else cpu.execute_instruction<0xA2>(0x008C9E, 3); return true;
    // src/unknown/C1/C10D7C.asm:13 LDX #.LOWORD(NUMBER_TEXT_BUFFER) + 6
    // Overlapping static entry reached from 0xC112E2.
    case 0xC112E4: cpu.execute_instruction<0x8C>(0x0001A9, 3); return true;
    // src/unknown/C1/C10D7C.asm:14 LDA #1
    case 0xC112E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C10D7C.asm:14 LDA #1
    // Overlapping static entry reached from 0xC112E5.
    case 0xC112E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C10D7C.asm:15 STA @LOCAL01
    case 0xC112E8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C10D7C.asm:16 BRA @UNKNOWN1
    case 0xC112EA: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C1/C10D7C.asm:18 JSL MODULUS32
    case 0xC112EC: cpu.execute_instruction<0x22>(0xC09219, 4); return true;
    // src/unknown/C1/C10D7C.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC112F0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C10D7C.asm:20 LDA @VIRTUAL06
    case 0xC112F2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C1/C10D7C.asm:21 STA __BSS_START__,X
    case 0xC112F4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C10D7C.asm:22 DEX
    case 0xC112F7: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C10D7C.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC112F8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10D7C.asm:24 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC112FA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:24 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC112FC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10D7C.asm:24 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC112FE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:24 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC11300: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10D7C.asm:25 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC11302: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:25 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC11304: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10D7C.asm:25 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC11306: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:25 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC11308: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C10D7C.asm:26 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC1130A: cpu.execute_instruction<0x22>(0xC09188, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10D7C.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1130E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC11310: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10D7C.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC11312: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC11314: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C10D7C.asm:28 LDA @LOCAL01
    case 0xC11316: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C10D7C.asm:29 INC
    case 0xC11318: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C10D7C.asm:30 STA @LOCAL01
    case 0xC11319: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C10D7C.asm:32 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1131B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C10D7C.asm:32 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1131B.
    case 0xC1131D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:32 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1131E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C10D7C.asm:32 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11320: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C10D7C.asm:32 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11320.
    case 0xC11322: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:32 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11323: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10D7C.asm:33 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11325: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:33 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11327: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10D7C.asm:33 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11329: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:33 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1132B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C10D7C.asm:34 LDA @VIRTUAL06
    case 0xC1132D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C1/C10D7C.asm:35 CMP @VIRTUAL0A
    case 0xC1132F: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C1/C10D7C.asm:36 LDA @VIRTUAL06+2
    case 0xC11331: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C10D7C.asm:37 SBC @VIRTUAL0A+2
    case 0xC11333: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/unknown/C1/C10D7C.asm:38 BCS @UNKNOWN0
    case 0xC11335: cpu.execute_instruction<0xB0>(0x0000B5, 2); return true;
    // src/unknown/C1/C10D7C.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC11337: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C10D7C.asm:40 LDA @VIRTUAL06
    case 0xC11339: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C1/C10D7C.asm:41 STA __BSS_START__,X
    case 0xC1133B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C10D7C.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC1133E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C10D7C.asm:43 LDA @LOCAL01
    case 0xC11340: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10D7C.asm:44 END_C_FUNCTION
    case 0xC11342: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10D7C.asm:44 END_C_FUNCTION
    case 0xC11343: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10EB4.asm (unresolved).
bool execute_unresolved_c1_c10eb4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10EB4.asm:3 BEGIN_C_FUNCTION
    case 0xC11495: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    case 0xC11497: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    case 0xC11498: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    case 0xC11499: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    case 0xC1149A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1149A.
    case 0xC1149C: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    case 0xC1149D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    case 0xC1149E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C10EB4.asm:8 STA @LOCAL00
    case 0xC1149F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C10EB4.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC1149C.
    case 0xC114A0: cpu.execute_instruction<0x0E>(0x0096AD, 3); return true;
    // src/unknown/C1/C10EB4.asm:9 LDA CURRENT_FOCUS_WINDOW
    case 0xC114A1: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C10EB4.asm:9 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC114A0.
    case 0xC114A3: cpu.execute_instruction<0x8C>(0x00FFC9, 3); return true;
    // src/unknown/C1/C10EB4.asm:10 CMP #.LOWORD(-1)
    case 0xC114A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C10EB4.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC114A4.
    case 0xC114A6: cpu.execute_instruction<0xFF>(0xAD17F0, 4); return true;
    // src/unknown/C1/C10EB4.asm:11 BEQ @UNKNOWN0
    case 0xC114A7: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/unknown/C1/C10EB4.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC114A9: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C10EB4.asm:12 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC114A6.
    case 0xC114AA: cpu.execute_instruction<0x96>(0x00008C, 2); return true;
    // src/unknown/C1/C10EB4.asm:13 ASL
    case 0xC114AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10EB4.asm:14 TAX
    case 0xC114AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10EB4.asm:15 LDA OPEN_WINDOW_TABLE,X
    case 0xC114AE: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C10EB4.asm:16 LDY #.SIZEOF(window_stats)
    case 0xC114B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C10EB4.asm:16 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC114B1.
    case 0xC114B3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10EB4.asm:17 JSL MULT168
    case 0xC114B4: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C10EB4.asm:18 TAX
    case 0xC114B8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10EB4.asm:19 LDA @LOCAL00
    case 0xC114B9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C10EB4.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC114BB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C10EB4.asm:21 STA WINDOW_STATS + window_stats::number_padding,X
    case 0xC114BD: cpu.execute_instruction<0x9D>(0x0089D4, 3); return true;
    // src/unknown/C1/C10EB4.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC114C0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10EB4.asm:24 END_C_FUNCTION
    case 0xC114C2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10EB4.asm:24 END_C_FUNCTION
    case 0xC114C3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10EE3.asm (unresolved).
bool execute_unresolved_c1_c10ee3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10EE3.asm:3 BEGIN_C_FUNCTION
    case 0xC114C4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C10EE3.asm:5 CMP #1
    case 0xC114C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C10EE3.asm:5 CMP #1
    // Overlapping static entry reached from 0xC114C6.
    case 0xC114C8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C10EE3.asm:6 BEQ @UNKNOWN0
    case 0xC114C9: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C1/C10EE3.asm:7 CMP #2
    case 0xC114CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C10EE3.asm:7 CMP #2
    // Overlapping static entry reached from 0xC114CB.
    case 0xC114CD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C10EE3.asm:8 BEQ @UNKNOWN1
    case 0xC114CE: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C1/C10EE3.asm:9 BRA @UNKNOWN2
    case 0xC114D0: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C1/C10EE3.asm:11 JSL UNKNOWN_C12BF3
    case 0xC114D2: cpu.execute_instruction<0x22>(0xC132F9, 4); return true;
    // src/unknown/C1/C10EE3.asm:12 BRA @UNKNOWN2
    case 0xC114D6: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C10EE3.asm:14 JSL UNKNOWN_C12C36
    case 0xC114D8: cpu.execute_instruction<0x22>(0xC1333C, 4); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10EE3.asm:16 END_C_FUNCTION
    case 0xC114DC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10F40.asm (unresolved).
bool execute_unresolved_c1_c10f40_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10F40.asm:3 BEGIN_C_FUNCTION
    case 0xC1150C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    case 0xC1150E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    case 0xC1150F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    case 0xC11510: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    case 0xC11511: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC11511.
    case 0xC11513: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    case 0xC11514: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    case 0xC11515: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:16 CMP #.LOWORD(-1)
    case 0xC11516: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C10F40.asm:16 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11513.
    case 0xC11517: cpu.execute_instruction<0xFF>(0x40F0FF, 4); return true;
    // src/unknown/C1/C10F40.asm:16 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11516.
    case 0xC11518: cpu.execute_instruction<0xFF>(0x0A40F0, 4); return true;
    // src/unknown/C1/C10F40.asm:17 BEQ @UNKNOWN3
    case 0xC11519: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/unknown/C1/C10F40.asm:18 ASL
    case 0xC1151B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:19 TAX
    case 0xC1151C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:20 LDA OPEN_WINDOW_TABLE,X
    case 0xC1151D: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C10F40.asm:21 LDY #.SIZEOF(window_stats)
    case 0xC11520: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C10F40.asm:21 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11520.
    case 0xC11522: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10F40.asm:22 JSL MULT168
    case 0xC11523: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C10F40.asm:23 CLC
    case 0xC11527: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:24 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11528: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/unknown/C1/C10F40.asm:24 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11528.
    case 0xC1152A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x00BCAA, 3); return true;
    // src/unknown/C1/C10F40.asm:25 TAX
    case 0xC1152B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:29 LDY a:window_stats::tilemap_address,X
    case 0xC1152C: cpu.execute_instruction<0xBC>(0x000035, 3); return true;
    // src/unknown/C1/C10F40.asm:29 LDY a:window_stats::tilemap_address,X
    // Overlapping static entry reached from 0xC1152A.
    case 0xC1152D: cpu.execute_instruction<0x35>(0x000000, 2); return true;
    // src/unknown/C1/C10F40.asm:30 STY @TMP01
    case 0xC1152F: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C10F40.asm:31 LDY a:window_stats::height,X
    case 0xC11531: cpu.execute_instruction<0xBC>(0x00000C, 3); return true;
    // src/unknown/C1/C10F40.asm:32 LDA a:window_stats::width,X
    case 0xC11534: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C1/C10F40.asm:33 JSL MULT16
    case 0xC11537: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C1/C10F40.asm:34 STA @TMP00
    case 0xC1153B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C10F40.asm:35 BRA @UNKNOWN2
    case 0xC1153D: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C1/C10F40.asm:44 LDA #64
    case 0xC1153F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C1/C10F40.asm:44 LDA #64
    // Overlapping static entry reached from 0xC1153F.
    case 0xC11541: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C1/C10F40.asm:45 LDY @TMP01
    case 0xC11542: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C10F40.asm:46 STA __BSS_START__,Y
    case 0xC11544: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C10F40.asm:47 INY
    case 0xC11547: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:48 INY
    case 0xC11548: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:49 STY @TMP01
    case 0xC11549: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C10F40.asm:50 LDA @TMP00
    case 0xC1154B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C10F40.asm:51 DEC
    case 0xC1154D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:52 STA @TMP00
    case 0xC1154E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C10F40.asm:55 CMP #0
    case 0xC11550: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C10F40.asm:55 CMP #0
    // Overlapping static entry reached from 0xC11550.
    case 0xC11552: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C10F40.asm:56 BNE @UNKNOWN0
    case 0xC11553: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // src/unknown/C1/C10F40.asm:63 STZ a:window_stats::text_y,X
    case 0xC11555: cpu.execute_instruction<0x9E>(0x000010, 3); return true;
    // src/unknown/C1/C10F40.asm:64 STZ a:window_stats::text_x,X
    case 0xC11558: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10F40.asm:66 END_C_FUNCTION
    case 0xC1155B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10F40.asm:66 END_C_FUNCTION
    case 0xC1155C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10FA3.asm (unresolved).
bool execute_unresolved_c1_c10fa3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10FA3.asm:3 BEGIN_C_FUNCTION
    case 0xC1155D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C10FA3.asm:5 LDA CURRENT_FOCUS_WINDOW
    case 0xC1155F: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C10FA3.asm:6 JSR UNKNOWN_C10F40
    case 0xC11562: cpu.execute_instruction<0x20>(0x00150C, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10FA3.asm:7 END_C_FUNCTION
    case 0xC11565: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10FA3_redirect.asm (unresolved).
bool execute_unresolved_c1_c10fa3_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10FA3_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DB30: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C10FA3_redirect.asm:5 JSR UNKNOWN_C10FA3
    case 0xC1DB32: cpu.execute_instruction<0x20>(0x00155D, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C10FA3_redirect.asm:6 END_C_FUNCTION
    case 0xC1DB35: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10FEA.asm (unresolved).
bool execute_unresolved_c1_c10fea_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10FEA.asm:3 BEGIN_C_FUNCTION
    case 0xC115A4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    case 0xC115A6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    case 0xC115A7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    case 0xC115A8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    case 0xC115A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC115A9.
    case 0xC115AB: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    case 0xC115AC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    case 0xC115AD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C10FEA.asm:8 STA @LOCAL00
    case 0xC115AE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C10FEA.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC115AB.
    case 0xC115AF: cpu.execute_instruction<0x0E>(0x0096AD, 3); return true;
    // src/unknown/C1/C10FEA.asm:9 LDA CURRENT_FOCUS_WINDOW
    case 0xC115B0: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C10FEA.asm:9 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC115AF.
    case 0xC115B2: cpu.execute_instruction<0x8C>(0x00FFC9, 3); return true;
    // src/unknown/C1/C10FEA.asm:10 CMP #.LOWORD(-1)
    case 0xC115B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C10FEA.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC115B3.
    case 0xC115B5: cpu.execute_instruction<0xFF>(0xAD1CF0, 4); return true;
    // src/unknown/C1/C10FEA.asm:11 BEQ @UNKNOWN0
    case 0xC115B6: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C1/C10FEA.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC115B8: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C10FEA.asm:12 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC115B5.
    case 0xC115B9: cpu.execute_instruction<0x96>(0x00008C, 2); return true;
    // src/unknown/C1/C10FEA.asm:13 ASL
    case 0xC115BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10FEA.asm:14 TAX
    case 0xC115BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10FEA.asm:15 LDA OPEN_WINDOW_TABLE,X
    case 0xC115BD: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C10FEA.asm:16 LDY #.SIZEOF(window_stats)
    case 0xC115C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C10FEA.asm:16 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC115C0.
    case 0xC115C2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10FEA.asm:17 JSL MULT168
    case 0xC115C3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C10FEA.asm:18 TAX
    case 0xC115C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10FEA.asm:19 LDY #1024
    case 0xC115C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/unknown/C1/C10FEA.asm:19 LDY #1024
    // Overlapping static entry reached from 0xC115C8.
    case 0xC115CA: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/unknown/C1/C10FEA.asm:20 LDA @LOCAL00
    case 0xC115CB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C10FEA.asm:20 LDA @LOCAL00
    // Overlapping static entry reached from 0xC115CA.
    case 0xC115CC: cpu.execute_instruction<0x0E>(0x001422, 3); return true;
    // src/unknown/C1/C10FEA.asm:21 JSL MULT16
    case 0xC115CD: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C1/C10FEA.asm:21 JSL MULT16
    // Overlapping static entry reached from 0xC115CC.
    case 0xC115CF: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // src/unknown/C1/C10FEA.asm:22 STA WINDOW_STATS + window_stats::curr_tile_attributes,X
    case 0xC115D1: cpu.execute_instruction<0x9D>(0x0089D5, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10FEA.asm:24 END_C_FUNCTION
    case 0xC115D4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10FEA.asm:24 END_C_FUNCTION
    case 0xC115D5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1134B.asm (unresolved).
bool execute_unresolved_c1_c1134b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1134B.asm:3 BEGIN_C_FUNCTION
    case 0xC11900: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1134B.asm:5 JSR SHOW_HPPP_WINDOWS
    case 0xC11902: cpu.execute_instruction<0x20>(0x000E5A, 3); return true;
    // src/unknown/C1/C1134B.asm:6 JSR UNKNOWN_C1AA18
    case 0xC11905: cpu.execute_instruction<0x20>(0x00A8FF, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1134B.asm:7 END_C_FUNCTION
    case 0xC11908: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11354.asm (unresolved).
bool execute_unresolved_c1_c11354_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11354.asm:3 BEGIN_C_FUNCTION
    case 0xC11909: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C11354.asm:7 END_STACK_VARS
    case 0xC1190B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C11354.asm:7 END_STACK_VARS
    case 0xC1190C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11354.asm:7 END_STACK_VARS
    case 0xC1190D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11354.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1190D.
    case 0xC1190F: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C11354.asm:7 END_STACK_VARS
    case 0xC11910: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C11354.asm:8 LDA #0
    case 0xC11911: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C11354.asm:8 LDA #0
    // Overlapping static entry reached from 0xC11911.
    case 0xC11913: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C11354.asm:9 STA @LOCAL00
    case 0xC11914: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C11354.asm:10 BRA @UNKNOWN2
    case 0xC11916: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C1/C11354.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11918: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C1/C11354.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1191A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C1/C11354.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1191B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C1/C11354.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1191C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C1/C11354.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1191E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C1/C11354.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1191F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C1/C11354.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11921: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C1/C11354.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11922: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C11354.asm:13 TAX
    case 0xC11923: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11354.asm:14 LDA MENU_OPTIONS,X
    case 0xC11924: cpu.execute_instruction<0xBD>(0x008D12, 3); return true;
    // src/unknown/C1/C11354.asm:15 BNE @UNKNOWN1
    case 0xC11927: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C1/C11354.asm:16 LDA @LOCAL00
    case 0xC11929: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C11354.asm:17 BRA @UNKNOWN3
    case 0xC1192B: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C1/C11354.asm:19 LDA @LOCAL00
    case 0xC1192D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C11354.asm:20 INC
    case 0xC1192F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C11354.asm:21 STA @LOCAL00
    case 0xC11930: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C11354.asm:23 CMP #NUM_MENU_OPTIONS
    case 0xC11932: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000046, 2); else cpu.execute_instruction<0xC9>(0x000046, 3); return true;
    // src/unknown/C1/C11354.asm:23 CMP #NUM_MENU_OPTIONS
    // Overlapping static entry reached from 0xC11932.
    case 0xC11934: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C11354.asm:24 BNE @UNKNOWN0
    case 0xC11935: cpu.execute_instruction<0xD0>(0x0000E1, 2); return true;
    // src/unknown/C1/C11354.asm:25 LDA #.LOWORD(-1)
    case 0xC11937: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C11354.asm:25 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11937.
    case 0xC11939: cpu.execute_instruction<0xFF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C11354.asm:27 END_C_FUNCTION
    case 0xC1193A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11354.asm:27 END_C_FUNCTION
    case 0xC1193B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11383.asm (unresolved).
bool execute_unresolved_c1_c11383_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11383.asm:3 BEGIN_C_FUNCTION
    case 0xC119AB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C11383.asm:5 LDA CURRENT_FOCUS_WINDOW
    case 0xC119AD: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C11383.asm:6 JSR UNKNOWN_C3E7E3
    case 0xC119B0: cpu.execute_instruction<0x20>(0x00193C, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11383.asm:7 END_C_FUNCTION
    case 0xC119B3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1138D.asm (unresolved).
bool execute_unresolved_c1_c1138d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1138D.asm:3 BEGIN_C_FUNCTION
    case 0xC119B4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    case 0xC119B6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    case 0xC119B7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    case 0xC119B8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    case 0xC119B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC119B9.
    case 0xC119BB: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    case 0xC119BC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    case 0xC119BD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1138D.asm:9 CMP #.LOWORD(-1)
    case 0xC119BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1138D.asm:9 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC119BB.
    case 0xC119BF: cpu.execute_instruction<0xFF>(0x05D0FF, 4); return true;
    // src/unknown/C1/C1138D.asm:9 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC119BE.
    case 0xC119C0: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/unknown/C1/C1138D.asm:10 BNE @UNKNOWN0
    case 0xC119C1: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1138D.asm:11 LDA #0
    case 0xC119C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1138D.asm:11 LDA #0
    // Overlapping static entry reached from 0xC119C0.
    case 0xC119C4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1138D.asm:11 LDA #0
    // Overlapping static entry reached from 0xC119C3.
    case 0xC119C5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1138D.asm:12 BRA @UNKNOWN3
    case 0xC119C6: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unknown/C1/C1138D.asm:14 LDX #1
    case 0xC119C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1138D.asm:14 LDX #1
    // Overlapping static entry reached from 0xC119C8.
    case 0xC119CA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1138D.asm:15 STX @LOCAL00
    case 0xC119CB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C1/C1138D.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119CD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C1/C1138D.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C1/C1138D.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C1/C1138D.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119D1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C1/C1138D.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C1/C1138D.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119D4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C1/C1138D.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C1/C1138D.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1138D.asm:17 CLC
    case 0xC119D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1138D.asm:18 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC119D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/unknown/C1/C1138D.asm:18 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC119D9.
    case 0xC119DB: cpu.execute_instruction<0x8D>(0x001480, 3); return true;
    // src/unknown/C1/C1138D.asm:19 BRA @UNKNOWN2
    case 0xC119DC: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119DE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119E2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119E5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1138D.asm:22 CLC
    case 0xC119E9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1138D.asm:23 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC119EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/unknown/C1/C1138D.asm:23 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC119EA.
    case 0xC119EC: cpu.execute_instruction<0x8D>(0x000EA6, 3); return true;
    // src/unknown/C1/C1138D.asm:24 LDX @LOCAL00
    case 0xC119ED: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1138D.asm:25 INX
    case 0xC119EF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1138D.asm:26 STX @LOCAL00
    case 0xC119F0: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1138D.asm:28 TAX
    case 0xC119F2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1138D.asm:29 LDA a:menu_option::next,X
    case 0xC119F3: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C1/C1138D.asm:30 CMP #.LOWORD(-1)
    case 0xC119F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1138D.asm:30 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC119F6.
    case 0xC119F8: cpu.execute_instruction<0xFF>(0xA6E3D0, 4); return true;
    // src/unknown/C1/C1138D.asm:31 BNE @UNKNOWN1
    case 0xC119F9: cpu.execute_instruction<0xD0>(0x0000E3, 2); return true;
    // src/unknown/C1/C1138D.asm:32 LDX @LOCAL00
    case 0xC119FB: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1138D.asm:32 LDX @LOCAL00
    // Overlapping static entry reached from 0xC119F8.
    case 0xC119FC: cpu.execute_instruction<0x0E>(0x002B8A, 3); return true;
    // src/unknown/C1/C1138D.asm:33 TXA
    case 0xC119FD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1138D.asm:35 END_C_FUNCTION
    case 0xC119FE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1138D.asm:35 END_C_FUNCTION
    case 0xC119FF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C113D1.asm (unresolved).
bool execute_unresolved_c1_c113d1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C113D1.asm:3 BEGIN_C_FUNCTION
    case 0xC11A00: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C113D1.asm:10 END_STACK_VARS
    case 0xC11A02: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C113D1.asm:10 END_STACK_VARS
    case 0xC11A03: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C113D1.asm:10 END_STACK_VARS
    case 0xC11A04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C113D1.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC11A04.
    case 0xC11A06: cpu.execute_instruction<0xFF>(0x24A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C113D1.asm:10 END_STACK_VARS
    case 0xC11A07: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C113D1.asm:11 MOVE_INT @SELECTED_TEXT, @VIRTUAL0A
    case 0xC11A08: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C113D1.asm:11 MOVE_INT @SELECTED_TEXT, @VIRTUAL0A
    case 0xC11A0A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C113D1.asm:11 MOVE_INT @SELECTED_TEXT, @VIRTUAL0A
    case 0xC11A0C: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C113D1.asm:11 MOVE_INT @SELECTED_TEXT, @VIRTUAL0A
    case 0xC11A0E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C113D1.asm:12 MOVE_INT @LABEL, @VIRTUAL06
    case 0xC11A10: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C113D1.asm:12 MOVE_INT @LABEL, @VIRTUAL06
    case 0xC11A12: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C113D1.asm:12 MOVE_INT @LABEL, @VIRTUAL06
    case 0xC11A14: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C113D1.asm:12 MOVE_INT @LABEL, @VIRTUAL06
    case 0xC11A16: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C113D1.asm:13 LDA CURRENT_FOCUS_WINDOW
    case 0xC11A18: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C113D1.asm:14 CMP #.LOWORD(-1)
    case 0xC11A1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C113D1.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11A1B.
    case 0xC11A1D: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/unknown/C1/C113D1.asm:15 BNE @UNKNOWN0
    case 0xC11A1E: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C1/C113D1.asm:16 LDA #.LOWORD(MENU_OPTIONS) + (.SIZEOF(menu_option) * (NUM_MENU_OPTIONS - 1))
    case 0xC11A20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EE, 2); else cpu.execute_instruction<0xA9>(0x0098EE, 3); return true;
    // src/unknown/C1/C113D1.asm:16 LDA #.LOWORD(MENU_OPTIONS) + (.SIZEOF(menu_option) * (NUM_MENU_OPTIONS - 1))
    // Overlapping static entry reached from 0xC11A1D.
    case 0xC11A21: cpu.execute_instruction<0xEE>(0x004C98, 3); return true;
    // src/unknown/C1/C113D1.asm:16 LDA #.LOWORD(MENU_OPTIONS) + (.SIZEOF(menu_option) * (NUM_MENU_OPTIONS - 1))
    // Overlapping static entry reached from 0xC11A20.
    case 0xC11A22: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:17 JMP @UNKNOWN5
    case 0xC11A23: cpu.execute_instruction<0x4C>(0x001AE4, 3); return true;
    // src/unknown/C1/C113D1.asm:17 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC11A21.
    case 0xC11A24: cpu.execute_instruction<0xE4>(0x00001A, 2); return true;
    // src/unknown/C1/C113D1.asm:19 LDA CURRENT_FOCUS_WINDOW
    case 0xC11A26: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C113D1.asm:20 ASL
    case 0xC11A29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:21 TAX
    case 0xC11A2A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:22 LDA OPEN_WINDOW_TABLE,X
    case 0xC11A2B: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C113D1.asm:23 LDY #.SIZEOF(window_stats)
    case 0xC11A2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C113D1.asm:23 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11A2E.
    case 0xC11A30: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C113D1.asm:24 JSL MULT168
    case 0xC11A31: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C113D1.asm:25 CLC
    case 0xC11A35: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:26 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11A36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/unknown/C1/C113D1.asm:26 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11A36.
    case 0xC11A38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000285, 3); return true;
    // src/unknown/C1/C113D1.asm:27 STA @VIRTUAL02
    case 0xC11A39: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C113D1.asm:27 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC11A38.
    case 0xC11A3A: cpu.execute_instruction<0x02>(0x000020, 2); return true;
    // src/unknown/C1/C113D1.asm:28 JSR UNKNOWN_C11354
    case 0xC11A3B: cpu.execute_instruction<0x20>(0x001909, 3); return true;
    // src/unknown/C1/C113D1.asm:29 STA @LOCAL01
    case 0xC11A3E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C113D1.asm:30 CMP #.LOWORD(-1)
    case 0xC11A40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C113D1.asm:30 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11A40.
    case 0xC11A42: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/unknown/C1/C113D1.asm:31 BNE @UNKNOWN1
    case 0xC11A43: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C1/C113D1.asm:32 LDA #.LOWORD(MENU_OPTIONS) + (.SIZEOF(menu_option) * (NUM_MENU_OPTIONS - 1))
    case 0xC11A45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EE, 2); else cpu.execute_instruction<0xA9>(0x0098EE, 3); return true;
    // src/unknown/C1/C113D1.asm:32 LDA #.LOWORD(MENU_OPTIONS) + (.SIZEOF(menu_option) * (NUM_MENU_OPTIONS - 1))
    // Overlapping static entry reached from 0xC11A42.
    case 0xC11A46: cpu.execute_instruction<0xEE>(0x004C98, 3); return true;
    // src/unknown/C1/C113D1.asm:32 LDA #.LOWORD(MENU_OPTIONS) + (.SIZEOF(menu_option) * (NUM_MENU_OPTIONS - 1))
    // Overlapping static entry reached from 0xC11A45.
    case 0xC11A47: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:33 JMP @UNKNOWN5
    case 0xC11A48: cpu.execute_instruction<0x4C>(0x001AE4, 3); return true;
    // src/unknown/C1/C113D1.asm:33 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC11A46.
    case 0xC11A49: cpu.execute_instruction<0xE4>(0x00001A, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C1/C113D1.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A4B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C1/C113D1.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A4D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C1/C113D1.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A4E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C1/C113D1.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A4F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C1/C113D1.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A51: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C1/C113D1.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A52: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C1/C113D1.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A54: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C1/C113D1.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:36 CLC
    case 0xC11A56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:37 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11A57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/unknown/C1/C113D1.asm:37 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11A57.
    case 0xC11A59: cpu.execute_instruction<0x8D>(0x0084A8, 3); return true;
    // src/unknown/C1/C113D1.asm:38 TAY
    case 0xC11A5A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:39 STY @LOCAL00
    case 0xC11A5B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C113D1.asm:39 STY @LOCAL00
    // Overlapping static entry reached from 0xC11A59.
    case 0xC11A5C: cpu.execute_instruction<0x0E>(0x0002A5, 3); return true;
    // src/unknown/C1/C113D1.asm:40 LDA @VIRTUAL02
    case 0xC11A5D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C113D1.asm:41 CLC
    case 0xC11A5F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:42 ADC #window_stats::current_option
    case 0xC11A60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002B, 2); else cpu.execute_instruction<0x69>(0x00002B, 3); return true;
    // src/unknown/C1/C113D1.asm:42 ADC #window_stats::current_option
    // Overlapping static entry reached from 0xC11A60.
    case 0xC11A62: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C113D1.asm:43 TAX
    case 0xC11A63: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:44 LDA __BSS_START__,X
    case 0xC11A64: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C113D1.asm:45 CMP #.LOWORD(-1)
    case 0xC11A67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C113D1.asm:45 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11A67.
    case 0xC11A69: cpu.execute_instruction<0xFF>(0xA90DD0, 4); return true;
    // src/unknown/C1/C113D1.asm:46 BNE @UNKNOWN2
    case 0xC11A6A: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C1/C113D1.asm:47 LDA #.LOWORD(-1)
    case 0xC11A6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C113D1.asm:47 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11A69.
    case 0xC11A6D: cpu.execute_instruction<0xFF>(0x0499FF, 4); return true;
    // src/unknown/C1/C113D1.asm:47 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11A6C.
    case 0xC11A6E: cpu.execute_instruction<0xFF>(0x000499, 4); return true;
    // src/unknown/C1/C113D1.asm:48 STA a:menu_option::previous,Y
    case 0xC11A6F: cpu.execute_instruction<0x99>(0x000004, 3); return true;
    // src/unknown/C1/C113D1.asm:48 STA a:menu_option::previous,Y
    // Overlapping static entry reached from 0xC11A6D.
    case 0xC11A71: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C113D1.asm:49 LDA @LOCAL01
    case 0xC11A72: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C113D1.asm:50 STA __BSS_START__,X
    case 0xC11A74: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C113D1.asm:51 BRA @UNKNOWN3
    case 0xC11A77: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/unknown/C1/C113D1.asm:53 LDA @VIRTUAL02
    case 0xC11A79: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C113D1.asm:54 CLC
    case 0xC11A7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:55 ADC #window_stats::option_count
    case 0xC11A7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002D, 2); else cpu.execute_instruction<0x69>(0x00002D, 3); return true;
    // src/unknown/C1/C113D1.asm:55 ADC #window_stats::option_count
    // Overlapping static entry reached from 0xC11A7C.
    case 0xC11A7E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C113D1.asm:56 TAX
    case 0xC11A7F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:57 LDA __BSS_START__,X
    case 0xC11A80: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C113D1.asm:58 STA a:menu_option::previous,Y
    case 0xC11A83: cpu.execute_instruction<0x99>(0x000004, 3); return true;
    // src/unknown/C1/C113D1.asm:59 LDA __BSS_START__,X
    case 0xC11A86: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C1/C113D1.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A89: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C1/C113D1.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A8B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C1/C113D1.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C1/C113D1.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A8D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C1/C113D1.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C1/C113D1.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A90: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C1/C113D1.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A92: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C1/C113D1.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A93: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:61 TAX
    case 0xC11A94: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:62 LDA @LOCAL01
    case 0xC11A95: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C113D1.asm:63 STA MENU_OPTIONS + menu_option::next,X
    case 0xC11A97: cpu.execute_instruction<0x9D>(0x008D14, 3); return true;
    // src/unknown/C1/C113D1.asm:65 LDX @VIRTUAL02
    case 0xC11A9A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C113D1.asm:66 STA a:window_stats::option_count,X
    case 0xC11A9C: cpu.execute_instruction<0x9D>(0x00002D, 3); return true;
    // src/unknown/C1/C113D1.asm:67 LDA #.LOWORD(-1)
    case 0xC11A9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C113D1.asm:67 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11A9F.
    case 0xC11AA1: cpu.execute_instruction<0xFF>(0x000299, 4); return true;
    // src/unknown/C1/C113D1.asm:71 STA a:menu_option::next,Y
    case 0xC11AA2: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C1/C113D1.asm:72 LDA #1
    case 0xC11AA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C113D1.asm:72 LDA #1
    // Overlapping static entry reached from 0xC11AA5.
    case 0xC11AA7: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C1/C113D1.asm:73 STA a:menu_option::unknown0,Y
    case 0xC11AA8: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C113D1.asm:74 TYA
    case 0xC11AAB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:75 CLC
    case 0xC11AAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:76 ADC #menu_option::script
    case 0xC11AAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000F, 2); else cpu.execute_instruction<0x69>(0x00000F, 3); return true;
    // src/unknown/C1/C113D1.asm:76 ADC #menu_option::script
    // Overlapping static entry reached from 0xC11AAD.
    case 0xC11AAF: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C113D1.asm:77 TAY
    case 0xC11AB0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C113D1.asm:78 MOVE_INT_YPTRDEST @VIRTUAL0A, a:0
    case 0xC11AB1: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C113D1.asm:78 MOVE_INT_YPTRDEST @VIRTUAL0A, a:0
    case 0xC11AB3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C1/C113D1.asm:78 MOVE_INT_YPTRDEST @VIRTUAL0A, a:0
    case 0xC11AB6: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C1/C113D1.asm:78 MOVE_INT_YPTRDEST @VIRTUAL0A, a:0
    case 0xC11AB8: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C1/C113D1.asm:79 LDA #1
    case 0xC11ABB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C113D1.asm:79 LDA #1
    // Overlapping static entry reached from 0xC11ABB.
    case 0xC11ABD: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C1/C113D1.asm:80 LDY @LOCAL00
    case 0xC11ABE: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C113D1.asm:81 STA a:menu_option::page,Y
    case 0xC11AC0: cpu.execute_instruction<0x99>(0x000006, 3); return true;
    // src/unknown/C1/C113D1.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xC11AC3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C113D1.asm:83 STA a:menu_option::sound_effect,Y
    case 0xC11AC5: cpu.execute_instruction<0x99>(0x00000E, 3); return true;
    // src/unknown/C1/C113D1.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC11AC8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C113D1.asm:85 TYA
    case 0xC11ACA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:86 CLC
    case 0xC11ACB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:87 ADC #menu_option::label
    case 0xC11ACC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/unknown/C1/C113D1.asm:87 ADC #menu_option::label
    // Overlapping static entry reached from 0xC11ACC.
    case 0xC11ACE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C113D1.asm:88 TAX
    case 0xC11ACF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC11AD0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C113D1.asm:91 LDA [@VIRTUAL06]
    case 0xC11AD2: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C113D1.asm:92 STA __BSS_START__,X
    case 0xC11AD4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C113D1.asm:93 INX
    case 0xC11AD7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:94 LDA [@VIRTUAL06]
    case 0xC11AD8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C113D1.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC11ADA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C113D1.asm:96 INC @VIRTUAL06
    case 0xC11ADC: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C113D1.asm:97 AND #$00FF
    case 0xC11ADE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C113D1.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC11ADE.
    case 0xC11AE0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C113D1.asm:98 BNE @UNKNOWN4
    case 0xC11AE1: cpu.execute_instruction<0xD0>(0x0000ED, 2); return true;
    // src/unknown/C1/C113D1.asm:99 TYA
    case 0xC11AE3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C113D1.asm:101 END_C_FUNCTION
    case 0xC11AE4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C113D1.asm:101 END_C_FUNCTION
    case 0xC11AE5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11404.asm (unresolved).
bool execute_unresolved_c1_c11404_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11404.asm:3 BEGIN_C_FUNCTION
    case 0xC11404: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C11404.asm:10 END_STACK_VARS
    case 0xC11406: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C11404.asm:10 END_STACK_VARS
    case 0xC11407: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11404.asm:10 END_STACK_VARS
    case 0xC11408: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11404.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC11408.
    case 0xC1140A: cpu.execute_instruction<0xFF>(0x26A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C11404.asm:10 END_STACK_VARS
    case 0xC1140B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11404.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1140C: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11404.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1140E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11404.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC11410: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11404.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC11412: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C11404.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC11414: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C11404.asm:13 CMP #.LOWORD(-1)
    case 0xC11417: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C11404.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11417.
    case 0xC11419: cpu.execute_instruction<0xFF>(0xAD77F0, 4); return true;
    // src/unknown/C1/C11404.asm:14 BEQ @UNKNOWN6
    case 0xC1141A: cpu.execute_instruction<0xF0>(0x000077, 2); return true;
    // src/unknown/C1/C11404.asm:15 LDA CURRENT_FOCUS_WINDOW
    case 0xC1141C: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C11404.asm:15 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11419.
    case 0xC1141D: cpu.execute_instruction<0x96>(0x00008C, 2); return true;
    // src/unknown/C1/C11404.asm:16 ASL
    case 0xC1141F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C11404.asm:17 TAX
    case 0xC11420: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11404.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC11421: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C11404.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC11424: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C11404.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11424.
    case 0xC11426: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C11404.asm:20 JSL MULT168
    case 0xC11427: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C11404.asm:21 CLC
    case 0xC1142B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C11404.asm:22 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1142C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/unknown/C1/C11404.asm:22 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1142C.
    case 0xC1142E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/unknown/C1/C11404.asm:23 TAY
    case 0xC1142F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C11404.asm:24 STY @LOCAL03
    case 0xC11430: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C1/C11404.asm:24 STY @LOCAL03
    // Overlapping static entry reached from 0xC1142E.
    case 0xC11431: cpu.execute_instruction<0x16>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11404.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11432: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11404.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC11431.
    case 0xC11433: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11404.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11434: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11404.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC11433.
    case 0xC11435: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11404.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11436: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11404.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11438: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C11404.asm:26 JSR UNKNOWN_C10D7C
    case 0xC1143A: cpu.execute_instruction<0x20>(0x0012CA, 3); return true;
    // src/unknown/C1/C11404.asm:27 STA @VIRTUAL02
    case 0xC1143D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C11404.asm:28 LDA #7
    case 0xC1143F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C1/C11404.asm:28 LDA #7
    // Overlapping static entry reached from 0xC1143F.
    case 0xC11441: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C1/C11404.asm:29 SEC
    case 0xC11442: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C11404.asm:30 SBC @VIRTUAL02
    case 0xC11443: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C1/C11404.asm:31 CLC
    case 0xC11445: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C11404.asm:32 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC11446: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000098, 2); else cpu.execute_instruction<0x69>(0x008C98, 3); return true;
    // src/unknown/C1/C11404.asm:32 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC11446.
    case 0xC11448: cpu.execute_instruction<0x8C>(0x000485, 3); return true;
    // src/unknown/C1/C11404.asm:33 STA @VIRTUAL04
    case 0xC11449: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C11404.asm:34 LDY @LOCAL03
    case 0xC1144B: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C11404.asm:35 LDA a:window_stats::text_x,Y
    case 0xC1144D: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/unknown/C1/C11404.asm:36 STA @LOCAL02
    case 0xC11450: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C11404.asm:37 LDA a:window_stats::text_y,Y
    case 0xC11452: cpu.execute_instruction<0xB9>(0x000010, 3); return true;
    // src/unknown/C1/C11404.asm:38 STA @LOCAL01
    case 0xC11455: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C11404.asm:39 LDX @LOCAL01
    case 0xC11457: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C11404.asm:40 LDA a:window_stats::width,Y
    case 0xC11459: cpu.execute_instruction<0xB9>(0x00000A, 3); return true;
    // src/unknown/C1/C11404.asm:41 DEC
    case 0xC1145C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C11404.asm:42 DEC
    case 0xC1145D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C11404.asm:43 SEC
    case 0xC1145E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C11404.asm:44 SBC @VIRTUAL02
    case 0xC1145F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C1/C11404.asm:45 JSR UNKNOWN_C438A5
    case 0xC11461: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C11404.asm:46 LDA #$23
    case 0xC11464: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x000023, 3); return true;
    // src/unknown/C1/C11404.asm:46 LDA #$23
    // Overlapping static entry reached from 0xC11464.
    case 0xC11466: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C11404.asm:47 JSR PRINT_LETTER
    case 0xC11467: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C11404.asm:48 BRA @UNKNOWN5
    case 0xC1146A: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C1/C11404.asm:50 LDX @VIRTUAL04
    case 0xC1146C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C11404.asm:51 LDA __BSS_START__,X
    case 0xC1146E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C11404.asm:52 AND #$00FF
    case 0xC11471: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C11404.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC11471.
    case 0xC11473: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C11404.asm:53 CLC
    case 0xC11474: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C11404.asm:54 ADC #CHAR::ZERO
    case 0xC11475: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // src/unknown/C1/C11404.asm:54 ADC #CHAR::ZERO
    // Overlapping static entry reached from 0xC11475.
    case 0xC11477: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C1/C11404.asm:55 INC @VIRTUAL04
    case 0xC11478: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C11404.asm:56 JSR PRINT_LETTER
    case 0xC1147A: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C11404.asm:57 LDA @VIRTUAL02
    case 0xC1147D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C11404.asm:58 DEC
    case 0xC1147F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C11404.asm:59 STA @VIRTUAL02
    case 0xC11480: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C11404.asm:61 LDA @VIRTUAL02
    case 0xC11482: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C11404.asm:62 BNE @UNKNOWN4
    case 0xC11484: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C1/C11404.asm:63 LDA #$24
    case 0xC11486: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/unknown/C1/C11404.asm:63 LDA #$24
    // Overlapping static entry reached from 0xC11486.
    case 0xC11488: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C11404.asm:64 JSR PRINT_LETTER
    case 0xC11489: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C11404.asm:65 LDX @LOCAL01
    case 0xC1148C: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C11404.asm:66 LDA @LOCAL02
    case 0xC1148E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C11404.asm:67 JSR UNKNOWN_C438A5
    case 0xC11490: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C11404.asm:69 END_C_FUNCTION
    case 0xC11493: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11404.asm:69 END_C_FUNCTION
    case 0xC11494: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C114B1-jp.asm (unresolved).
bool execute_unresolved_c1_c114b1_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C114B1-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC11AE6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C114B1-jp.asm:13 END_STACK_VARS
    case 0xC11AE8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C114B1-jp.asm:13 END_STACK_VARS
    case 0xC11AE9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C114B1-jp.asm:13 END_STACK_VARS
    case 0xC11AEA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C114B1-jp.asm:13 END_STACK_VARS
    case 0xC11AEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C114B1-jp.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC11AEB.
    case 0xC11AED: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C114B1-jp.asm:13 END_STACK_VARS
    case 0xC11AEE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C114B1-jp.asm:13 END_STACK_VARS
    case 0xC11AEF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C114B1-jp.asm:14 STX @VIRTUAL02
    case 0xC11AF0: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C114B1-jp.asm:14 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC11AED.
    case 0xC11AF1: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C1/C114B1-jp.asm:15 TAY
    case 0xC11AF2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C114B1-jp.asm:16 STY @LOCAL02
    case 0xC11AF3: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C114B1-jp.asm:17 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC11AF5: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C114B1-jp.asm:17 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC11AF7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C114B1-jp.asm:17 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC11AF9: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C114B1-jp.asm:17 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC11AFB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C114B1-jp.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11AFD: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C114B1-jp.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11AFF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C114B1-jp.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11B01: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C114B1-jp.asm:18 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11B03: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C114B1-jp.asm:19 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11B05: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C114B1-jp.asm:19 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11B07: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C114B1-jp.asm:19 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11B09: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C114B1-jp.asm:19 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11B0B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C114B1-jp.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11B0D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C114B1-jp.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11B0F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C114B1-jp.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11B11: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C114B1-jp.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11B13: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C114B1-jp.asm:21 JSR UNKNOWN_C113D1
    case 0xC11B15: cpu.execute_instruction<0x20>(0x001A00, 3); return true;
    // src/unknown/C1/C114B1-jp.asm:22 TAX
    case 0xC11B18: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C114B1-jp.asm:23 LDY @LOCAL02
    case 0xC11B19: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C114B1-jp.asm:24 TYA
    case 0xC11B1B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C114B1-jp.asm:25 STA a:menu_option::text_x,X
    case 0xC11B1C: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/unknown/C1/C114B1-jp.asm:26 LDA @VIRTUAL02
    case 0xC11B1F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C114B1-jp.asm:27 STA a:menu_option::text_y,X
    case 0xC11B21: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/unknown/C1/C114B1-jp.asm:28 TXA
    case 0xC11B24: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C114B1-jp.asm:29 END_C_FUNCTION
    case 0xC11B25: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C114B1-jp.asm:29 END_C_FUNCTION
    case 0xC11B26: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1153B.asm (unresolved).
bool execute_unresolved_c1_c1153b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1153B.asm:3 BEGIN_C_FUNCTION
    case 0xC11B27: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    case 0xC11B29: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    case 0xC11B2A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    case 0xC11B2B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    case 0xC11B2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC11B2C.
    case 0xC11B2E: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    case 0xC11B2F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    case 0xC11B30: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1153B.asm:16 STX @VIRTUAL02
    case 0xC11B31: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1153B.asm:16 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC11B2E.
    case 0xC11B32: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C1/C1153B.asm:17 STA @VIRTUAL04
    case 0xC11B33: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1153B.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC11B35: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1153B.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC11B37: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1153B.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC11B39: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1153B.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC11B3B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1153B.asm:20 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11B3D: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1153B.asm:20 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11B3F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1153B.asm:20 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11B41: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1153B.asm:20 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11B43: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1153B.asm:21 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11B45: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1153B.asm:21 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11B47: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1153B.asm:21 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11B49: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1153B.asm:21 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11B4B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1153B.asm:22 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11B4D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1153B.asm:22 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11B4F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1153B.asm:22 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11B51: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1153B.asm:22 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11B53: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1153B.asm:32 TYX
    case 0xC11B55: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C1153B.asm:33 LDA @VIRTUAL02
    case 0xC11B56: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1153B.asm:34 JSR UNKNOWN_C114B1
    case 0xC11B58: cpu.execute_instruction<0x20>(0x001AE6, 3); return true;
    // src/unknown/C1/C1153B.asm:35 TAX
    case 0xC11B5B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1153B.asm:36 LDA @VIRTUAL04
    case 0xC11B5C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1153B.asm:37 STA a:menu_option::userdata,X
    case 0xC11B5E: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/unknown/C1/C1153B.asm:38 LDA #2
    case 0xC11B61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1153B.asm:38 LDA #2
    // Overlapping static entry reached from 0xC11B61.
    case 0xC11B63: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C1/C1153B.asm:39 STA a:menu_option::unknown0,X
    case 0xC11B64: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1153B.asm:40 TXA
    case 0xC11B67: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1153B.asm:41 END_C_FUNCTION
    case 0xC11B68: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1153B.asm:41 END_C_FUNCTION
    case 0xC11B69: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11596.asm (unresolved).
bool execute_unresolved_c1_c11596_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11596.asm:3 BEGIN_C_FUNCTION
    case 0xC11B6A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    case 0xC11B6C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    case 0xC11B6D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    case 0xC11B6E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    case 0xC11B6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC11B6F.
    case 0xC11B71: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    case 0xC11B72: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    case 0xC11B73: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C11596.asm:17 STA @LOCAL03
    case 0xC11B74: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C11596.asm:17 STA @LOCAL03
    // Overlapping static entry reached from 0xC11B71.
    case 0xC11B75: cpu.execute_instruction<0x16>(0x0000E2, 2); return true;
    // src/unknown/C1/C11596.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC11B76: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C11596.asm:18 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC11B75.
    case 0xC11B77: cpu.execute_instruction<0x20>(0x002EA5, 3); return true;
    // src/unknown/C1/C11596.asm:19 LDA @PARAM03
    case 0xC11B78: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/unknown/C1/C11596.asm:20 STA @VIRTUAL00
    case 0xC11B7A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C11596.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC11B7C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11596.asm:23 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC11B7E: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11596.asm:23 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC11B80: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11596.asm:23 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC11B82: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11596.asm:23 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC11B84: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11596.asm:24 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC11B86: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11596.asm:24 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC11B88: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11596.asm:24 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC11B8A: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11596.asm:24 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC11B8C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11596.asm:25 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11B8E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11596.asm:25 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11B90: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11596.asm:25 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11B92: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11596.asm:25 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11B94: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11596.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11B96: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11596.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11B98: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11596.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11B9A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11596.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11B9C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C11596.asm:36 LDA @LOCAL03
    case 0xC11B9E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C11596.asm:37 JSR UNKNOWN_C1153B
    case 0xC11BA0: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/unknown/C1/C11596.asm:38 TAX
    case 0xC11BA3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11596.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC11BA4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C11596.asm:40 LDA @VIRTUAL00
    case 0xC11BA6: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C11596.asm:41 STA a:menu_option::sound_effect,X
    case 0xC11BA8: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
    // src/unknown/C1/C11596.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC11BAB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C11596.asm:43 TXA
    case 0xC11BAD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C11596.asm:44 END_C_FUNCTION
    case 0xC11BAE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11596.asm:44 END_C_FUNCTION
    case 0xC11BAF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C115F4.asm (unresolved).
bool execute_unresolved_c1_c115f4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C115F4.asm:3 BEGIN_C_FUNCTION
    case 0xC11BB0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    case 0xC11BB2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    case 0xC11BB3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    case 0xC11BB4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    case 0xC11BB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC11BB5.
    case 0xC11BB7: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    case 0xC11BB8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    case 0xC11BB9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C115F4.asm:13 TAY
    case 0xC11BBA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C115F4.asm:14 STY @LOCAL02
    case 0xC11BBB: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C115F4.asm:15 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11BBD: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C115F4.asm:15 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11BBF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C115F4.asm:15 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11BC1: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C115F4.asm:15 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11BC3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C115F4.asm:16 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC11BC5: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C115F4.asm:16 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC11BC7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C115F4.asm:16 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC11BC9: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C115F4.asm:16 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC11BCB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C115F4.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11BCD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C115F4.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11BCF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C115F4.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11BD1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C115F4.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11BD3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C115F4.asm:19 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC11BD5: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C115F4.asm:19 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC11BD7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C115F4.asm:19 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC11BD9: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C115F4.asm:19 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC11BDB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C115F4.asm:24 JSR UNKNOWN_C113D1
    case 0xC11BDD: cpu.execute_instruction<0x20>(0x001A00, 3); return true;
    // src/unknown/C1/C115F4.asm:25 TAX
    case 0xC11BE0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C115F4.asm:26 LDY @LOCAL02
    case 0xC11BE1: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C115F4.asm:27 TYA
    case 0xC11BE3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C115F4.asm:28 STA a:menu_option::userdata,X
    case 0xC11BE4: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/unknown/C1/C115F4.asm:29 LDA #2
    case 0xC11BE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C115F4.asm:29 LDA #2
    // Overlapping static entry reached from 0xC11BE7.
    case 0xC11BE9: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C1/C115F4.asm:30 STA a:menu_option::unknown0,X
    case 0xC11BEA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C115F4.asm:31 TXA
    case 0xC11BED: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C115F4.asm:32 END_C_FUNCTION
    case 0xC11BEE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C115F4.asm:32 END_C_FUNCTION
    case 0xC11BEF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C117E2.asm (unresolved).
bool execute_unresolved_c1_c117e2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C117E2.asm:3 BEGIN_C_FUNCTION
    case 0xC11DBF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    case 0xC11DC1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    case 0xC11DC2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    case 0xC11DC3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    case 0xC11DC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC11DC4.
    case 0xC11DC6: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    case 0xC11DC7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    case 0xC11DC8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C117E2.asm:10 TXY
    case 0xC11DC9: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C117E2.asm:11 TAX
    case 0xC11DCA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C117E2.asm:12 LDA #0
    case 0xC11DCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C117E2.asm:12 LDA #0
    // Overlapping static entry reached from 0xC11DCB.
    case 0xC11DCD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C117E2.asm:13 STA @LOCAL00
    case 0xC11DCE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C117E2.asm:14 BRA @UNKNOWN1
    case 0xC11DD0: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C1/C117E2.asm:16 LDA @LOCAL00
    case 0xC11DD2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C117E2.asm:17 INC
    case 0xC11DD4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C117E2.asm:18 STA @LOCAL00
    case 0xC11DD5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C117E2.asm:19 DEY
    case 0xC11DD7: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C1/C117E2.asm:20 INX
    case 0xC11DD8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C117E2.asm:22 LDA __BSS_START__,X
    case 0xC11DD9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C117E2.asm:23 AND #$00FF
    case 0xC11DDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C117E2.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC11DDC.
    case 0xC11DDE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C117E2.asm:24 BEQ @UNKNOWN2
    case 0xC11DDF: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C117E2.asm:25 CPY #0
    case 0xC11DE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C1/C117E2.asm:25 CPY #0
    // Overlapping static entry reached from 0xC11DE1.
    case 0xC11DE3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C117E2.asm:26 BNE @UNKNOWN0
    case 0xC11DE4: cpu.execute_instruction<0xD0>(0x0000EC, 2); return true;
    // src/unknown/C1/C117E2.asm:28 LDA @LOCAL00
    case 0xC11DE6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C117E2.asm:29 END_C_FUNCTION
    case 0xC11DE8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C117E2.asm:29 END_C_FUNCTION
    case 0xC11DE9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1180D.asm (unresolved).
bool execute_unresolved_c1_c1180d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1180D.asm:3 BEGIN_C_FUNCTION
    case 0xC11FA6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1180D.asm:7 TXY
    case 0xC11FA8: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1180D.asm:8 LDX #0
    case 0xC11FA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1180D.asm:8 LDX #0
    // Overlapping static entry reached from 0xC11FA9.
    case 0xC11FAB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1180D.asm:9 JSR UNKNOWN_C451FA
    case 0xC11FAC: cpu.execute_instruction<0x20>(0x001DEA, 3); return true;
    // src/unknown/C1/C1180D.asm:10 JSR PRINT_MENU_ITEMS
    case 0xC11FAF: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1180D.asm:11 END_C_FUNCTION
    case 0xC11FB2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1181B.asm (unresolved).
bool execute_unresolved_c1_c1181b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1181B.asm:3 BEGIN_C_FUNCTION
    case 0xC11FB3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    case 0xC11FB5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    case 0xC11FB6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    case 0xC11FB7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    case 0xC11FB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC11FB8.
    case 0xC11FBA: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    case 0xC11FBB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    case 0xC11FBC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:12 STY @VIRTUAL02
    case 0xC11FBD: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1181B.asm:12 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC11FBA.
    case 0xC11FBE: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C1/C1181B.asm:13 TXY
    case 0xC11FBF: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:14 LDX #0
    case 0xC11FC0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1181B.asm:14 LDX #0
    // Overlapping static entry reached from 0xC11FC0.
    case 0xC11FC2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1181B.asm:15 JSR UNKNOWN_C451FA
    case 0xC11FC3: cpu.execute_instruction<0x20>(0x001DEA, 3); return true;
    // src/unknown/C1/C1181B.asm:16 LDA @VIRTUAL02
    case 0xC11FC6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1181B.asm:17 CMP #.LOWORD(-1)
    case 0xC11FC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1181B.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11FC8.
    case 0xC11FCA: cpu.execute_instruction<0xFF>(0xAD50F0, 4); return true;
    // src/unknown/C1/C1181B.asm:18 BEQ @UNKNOWN2
    case 0xC11FCB: cpu.execute_instruction<0xF0>(0x000050, 2); return true;
    // src/unknown/C1/C1181B.asm:19 LDA CURRENT_FOCUS_WINDOW
    case 0xC11FCD: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C1181B.asm:19 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11FCA.
    case 0xC11FCE: cpu.execute_instruction<0x96>(0x00008C, 2); return true;
    // src/unknown/C1/C1181B.asm:20 ASL
    case 0xC11FD0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:21 TAX
    case 0xC11FD1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:22 LDA OPEN_WINDOW_TABLE,X
    case 0xC11FD2: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C1181B.asm:23 LDY #.SIZEOF(window_stats)
    case 0xC11FD5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C1181B.asm:23 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11FD5.
    case 0xC11FD7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1181B.asm:24 JSL MULT168
    case 0xC11FD8: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1181B.asm:25 CLC
    case 0xC11FDC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:26 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11FDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/unknown/C1/C1181B.asm:26 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11FDD.
    case 0xC11FDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x00A5A8, 3); return true;
    // src/unknown/C1/C1181B.asm:27 TAY
    case 0xC11FE0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:31 LDA @VIRTUAL02
    case 0xC11FE1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1181B.asm:31 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC11FDF.
    case 0xC11FE2: cpu.execute_instruction<0x02>(0x000099, 2); return true;
    // src/unknown/C1/C1181B.asm:32 STA a:window_stats::selected_option,Y
    case 0xC11FE3: cpu.execute_instruction<0x99>(0x00002F, 3); return true;
    // src/unknown/C1/C1181B.asm:33 LDA a:window_stats::current_option,Y
    case 0xC11FE6: cpu.execute_instruction<0xB9>(0x00002B, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C1/C1181B.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11FE9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C1/C1181B.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11FEB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C1/C1181B.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11FEC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C1/C1181B.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11FED: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C1/C1181B.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11FEF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C1/C1181B.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11FF0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C1/C1181B.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11FF2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C1/C1181B.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11FF3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:35 CLC
    case 0xC11FF4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:36 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11FF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/unknown/C1/C1181B.asm:36 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11FF5.
    case 0xC11FF7: cpu.execute_instruction<0x8D>(0x0080AA, 3); return true;
    // src/unknown/C1/C1181B.asm:37 TAX
    case 0xC11FF8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:38 BRA @UNKNOWN1
    case 0xC11FF9: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C1/C1181B.asm:38 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC11FF7.
    case 0xC11FFA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:40 LDA @VIRTUAL02
    case 0xC11FFB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1181B.asm:41 DEC
    case 0xC11FFD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:42 STA @VIRTUAL02
    case 0xC11FFE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1181B.asm:43 LDA a:menu_option::next,X
    case 0xC12000: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C1/C1181B.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12003: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C1/C1181B.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12005: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C1/C1181B.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12006: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C1/C1181B.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12007: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C1/C1181B.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12009: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C1/C1181B.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1200A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C1/C1181B.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1200C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C1/C1181B.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1200D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:45 CLC
    case 0xC1200E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:46 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1200F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/unknown/C1/C1181B.asm:46 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1200F.
    case 0xC12011: cpu.execute_instruction<0x8D>(0x00A5AA, 3); return true;
    // src/unknown/C1/C1181B.asm:47 TAX
    case 0xC12012: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:49 LDA @VIRTUAL02
    case 0xC12013: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1181B.asm:49 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC12011.
    case 0xC12014: cpu.execute_instruction<0x02>(0x0000D0, 2); return true;
    // src/unknown/C1/C1181B.asm:50 BNE @UNKNOWN0
    case 0xC12015: cpu.execute_instruction<0xD0>(0x0000E4, 2); return true;
    // src/unknown/C1/C1181B.asm:51 LDA a:menu_option::page,X
    case 0xC12017: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C1/C1181B.asm:55 STA a:window_stats::menu_page_number,Y
    case 0xC1201A: cpu.execute_instruction<0x99>(0x000033, 3); return true;
    // src/unknown/C1/C1181B.asm:57 JSR PRINT_MENU_ITEMS
    case 0xC1201D: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1181B.asm:58 END_C_FUNCTION
    case 0xC12020: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1181B.asm:58 END_C_FUNCTION
    case 0xC12021: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11887.asm (unresolved).
bool execute_unresolved_c1_c11887_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11887.asm:3 BEGIN_C_FUNCTION
    case 0xC12022: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    case 0xC12024: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    case 0xC12025: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    case 0xC12026: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    case 0xC12027: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC12027.
    case 0xC12029: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    case 0xC1202A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    case 0xC1202B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:11 STA @LOCAL01
    case 0xC1202C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C11887.asm:11 STA @LOCAL01
    // Overlapping static entry reached from 0xC12029.
    case 0xC1202D: cpu.execute_instruction<0x0E>(0x00FFC9, 3); return true;
    // src/unknown/C1/C11887.asm:12 CMP #.LOWORD(-1)
    case 0xC1202E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C11887.asm:12 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1202E.
    case 0xC12030: cpu.execute_instruction<0xFF>(0xAD4EF0, 4); return true;
    // src/unknown/C1/C11887.asm:13 BEQ @UNKNOWN2
    case 0xC12031: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/unknown/C1/C11887.asm:14 LDA CURRENT_FOCUS_WINDOW
    case 0xC12033: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C11887.asm:14 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC12030.
    case 0xC12034: cpu.execute_instruction<0x96>(0x00008C, 2); return true;
    // src/unknown/C1/C11887.asm:15 ASL
    case 0xC12036: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:16 TAX
    case 0xC12037: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:17 LDA OPEN_WINDOW_TABLE,X
    case 0xC12038: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C11887.asm:18 LDY #.SIZEOF(window_stats)
    case 0xC1203B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C11887.asm:18 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1203B.
    case 0xC1203D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C11887.asm:19 JSL MULT168
    case 0xC1203E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C11887.asm:20 CLC
    case 0xC12042: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:21 ADC #.LOWORD(WINDOW_STATS)
    case 0xC12043: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/unknown/C1/C11887.asm:21 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC12043.
    case 0xC12045: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x00A5A8, 3); return true;
    // src/unknown/C1/C11887.asm:22 TAY
    case 0xC12046: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:26 LDA @LOCAL01
    case 0xC12047: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C11887.asm:26 LDA @LOCAL01
    // Overlapping static entry reached from 0xC12045.
    case 0xC12048: cpu.execute_instruction<0x0E>(0x002F99, 3); return true;
    // src/unknown/C1/C11887.asm:27 STA a:window_stats::selected_option,Y
    case 0xC12049: cpu.execute_instruction<0x99>(0x00002F, 3); return true;
    // src/unknown/C1/C11887.asm:27 STA a:window_stats::selected_option,Y
    // Overlapping static entry reached from 0xC12048.
    case 0xC1204B: cpu.execute_instruction<0x00>(0x0000B9, 2); return true;
    // src/unknown/C1/C11887.asm:28 LDA a:window_stats::current_option,Y
    case 0xC1204C: cpu.execute_instruction<0xB9>(0x00002B, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C1/C11887.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1204F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C1/C11887.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12051: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C1/C11887.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12052: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C1/C11887.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12053: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C1/C11887.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12055: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C1/C11887.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12056: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C1/C11887.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12058: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C1/C11887.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12059: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:30 CLC
    case 0xC1205A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:31 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1205B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/unknown/C1/C11887.asm:31 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1205B.
    case 0xC1205D: cpu.execute_instruction<0x8D>(0x0080AA, 3); return true;
    // src/unknown/C1/C11887.asm:32 TAX
    case 0xC1205E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:33 BRA @UNKNOWN1
    case 0xC1205F: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C1/C11887.asm:33 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC1205D.
    case 0xC12060: cpu.execute_instruction<0x16>(0x00003A, 2); return true;
    // src/unknown/C1/C11887.asm:35 DEC
    case 0xC12061: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:36 STA @LOCAL01
    case 0xC12062: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C11887.asm:37 LDA a:menu_option::next,X
    case 0xC12064: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C1/C11887.asm:38 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12067: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C1/C11887.asm:38 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12069: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C1/C11887.asm:38 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1206A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C1/C11887.asm:38 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1206B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C1/C11887.asm:38 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1206D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C1/C11887.asm:38 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1206E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C1/C11887.asm:38 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12070: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C1/C11887.asm:38 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12071: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:39 CLC
    case 0xC12072: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:40 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC12073: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/unknown/C1/C11887.asm:40 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC12073.
    case 0xC12075: cpu.execute_instruction<0x8D>(0x00A5AA, 3); return true;
    // src/unknown/C1/C11887.asm:41 TAX
    case 0xC12076: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:43 LDA @LOCAL01
    case 0xC12077: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C11887.asm:43 LDA @LOCAL01
    // Overlapping static entry reached from 0xC12075.
    case 0xC12078: cpu.execute_instruction<0x0E>(0x00E6D0, 3); return true;
    // src/unknown/C1/C11887.asm:44 BNE @UNKNOWN0
    case 0xC12079: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C1/C11887.asm:45 LDA a:menu_option::page,X
    case 0xC1207B: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C1/C11887.asm:49 STA a:window_stats::menu_page_number,Y
    case 0xC1207E: cpu.execute_instruction<0x99>(0x000033, 3); return true;
    // src/unknown/C1/C11887.asm:51 JSR PRINT_MENU_ITEMS
    case 0xC12081: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C11887.asm:52 END_C_FUNCTION
    case 0xC12084: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11887.asm:52 END_C_FUNCTION
    case 0xC12085: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11F5A.asm (unresolved).
bool execute_unresolved_c1_c11f5a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11F5A.asm:3 BEGIN_C_FUNCTION
    case 0xC1267B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C11F5A.asm:6 END_STACK_VARS
    case 0xC1267D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C11F5A.asm:6 END_STACK_VARS
    case 0xC1267E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11F5A.asm:6 END_STACK_VARS
    case 0xC1267F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11F5A.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC1267F.
    case 0xC12681: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C11F5A.asm:6 END_STACK_VARS
    case 0xC12682: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11F5A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC12683: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11F5A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC12685: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11F5A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC12687: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11F5A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC12689: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C11F5A.asm:8 LDA CURRENT_FOCUS_WINDOW
    case 0xC1268B: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C11F5A.asm:9 ASL
    case 0xC1268E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C11F5A.asm:10 TAX
    case 0xC1268F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11F5A.asm:11 LDA OPEN_WINDOW_TABLE,X
    case 0xC12690: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C11F5A.asm:12 LDY #.SIZEOF(window_stats)
    case 0xC12693: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C11F5A.asm:12 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC12693.
    case 0xC12695: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C11F5A.asm:13 JSL MULT168
    case 0xC12696: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C11F5A.asm:14 CLC
    case 0xC1269A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C11F5A.asm:15 ADC #.LOWORD(WINDOW_STATS) + window_stats::cursor_move_callback
    case 0xC1269B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F9, 2); else cpu.execute_instruction<0x69>(0x0089F9, 3); return true;
    // src/unknown/C1/C11F5A.asm:15 ADC #.LOWORD(WINDOW_STATS) + window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC1269B.
    case 0xC1269D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x00A5A8, 3); return true;
    // src/unknown/C1/C11F5A.asm:16 TAY
    case 0xC1269E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C11F5A.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1269F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C11F5A.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC1269D.
    case 0xC126A0: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C11F5A.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC126A1: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C11F5A.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC126A0.
    case 0xC126A2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C1/C11F5A.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC126A4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C1/C11F5A.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC126A6: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C11F5A.asm:18 END_C_FUNCTION
    case 0xC126A9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11F5A.asm:18 END_C_FUNCTION
    case 0xC126AA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11F8A.asm (unresolved).
bool execute_unresolved_c1_c11f8a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11F8A.asm:3 BEGIN_C_FUNCTION
    case 0xC126AB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C11F8A.asm:5 END_STACK_VARS
    case 0xC126AD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C11F8A.asm:5 END_STACK_VARS
    case 0xC126AE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11F8A.asm:5 END_STACK_VARS
    case 0xC126AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11F8A.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC126AF.
    case 0xC126B1: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C11F8A.asm:5 END_STACK_VARS
    case 0xC126B2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C11F8A.asm:6 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC126B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C11F8A.asm:6 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC126B3.
    case 0xC126B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C11F8A.asm:6 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC126B6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C11F8A.asm:6 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC126B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C11F8A.asm:6 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC126B8.
    case 0xC126BA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C11F8A.asm:6 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC126BB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C11F8A.asm:7 LDA CURRENT_FOCUS_WINDOW
    case 0xC126BD: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C11F8A.asm:8 ASL
    case 0xC126C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C11F8A.asm:9 TAX
    case 0xC126C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11F8A.asm:10 LDA OPEN_WINDOW_TABLE,X
    case 0xC126C2: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C11F8A.asm:11 LDY #.SIZEOF(window_stats)
    case 0xC126C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C11F8A.asm:11 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC126C5.
    case 0xC126C7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C11F8A.asm:12 JSL MULT168
    case 0xC126C8: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C11F8A.asm:13 CLC
    case 0xC126CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C11F8A.asm:14 ADC #.LOWORD(WINDOW_STATS) + window_stats::cursor_move_callback
    case 0xC126CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F9, 2); else cpu.execute_instruction<0x69>(0x0089F9, 3); return true;
    // src/unknown/C1/C11F8A.asm:14 ADC #.LOWORD(WINDOW_STATS) + window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC126CD.
    case 0xC126CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x00A5A8, 3); return true;
    // src/unknown/C1/C11F8A.asm:15 TAY
    case 0xC126D0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C11F8A.asm:16 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC126D1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C11F8A.asm:16 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC126CF.
    case 0xC126D2: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C11F8A.asm:16 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC126D3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C11F8A.asm:16 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC126D2.
    case 0xC126D4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C1/C11F8A.asm:16 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC126D6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C1/C11F8A.asm:16 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC126D8: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C11F8A.asm:17 END_C_FUNCTION
    case 0xC126DB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11F8A.asm:17 END_C_FUNCTION
    case 0xC126DC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11FBC.asm (unresolved).
bool execute_unresolved_c1_c11fbc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11FBC.asm:3 BEGIN_C_FUNCTION
    case 0xC126DD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C11FBC.asm:8 TXY
    case 0xC126DF: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C11FBC.asm:9 TAX
    case 0xC126E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11FBC.asm:10 BNE @UNKNOWN0
    case 0xC126E1: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C1/C11FBC.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC126E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C11FBC.asm:12 LDA BATTLER_FRONT_ROW_X_POSITIONS,Y
    case 0xC126E5: cpu.execute_instruction<0xB9>(0x00AF2F, 3); return true;
    // src/unknown/C1/C11FBC.asm:13 BRA @UNKNOWN1
    case 0xC126E8: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C1/C11FBC.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC126EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C11FBC.asm:16 LDA BATTLER_BACK_ROW_X_POSITIONS,Y
    case 0xC126EC: cpu.execute_instruction<0xB9>(0x00AF3F, 3); return true;
    // src/unknown/C1/C11FBC.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC126EF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C11FBC.asm:19 AND #$00FF
    case 0xC126F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C11FBC.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC126F1.
    case 0xC126F3: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11FBC.asm:20 END_C_FUNCTION
    case 0xC126F4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11FD4.asm (unresolved).
bool execute_unresolved_c1_c11fd4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11FD4.asm:3 BEGIN_C_FUNCTION
    case 0xC126F5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    case 0xC126F7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    case 0xC126F8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    case 0xC126F9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    case 0xC126FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC126FA.
    case 0xC126FC: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    case 0xC126FD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    case 0xC126FE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:10 STX @VIRTUAL02
    case 0xC126FF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C11FD4.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC126FC.
    case 0xC12700: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C1/C11FD4.asm:11 TAX
    case 0xC12701: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:12 CPX #1
    case 0xC12702: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C1/C11FD4.asm:12 CPX #1
    // Overlapping static entry reached from 0xC12702.
    case 0xC12704: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C11FD4.asm:13 BNE @UNKNOWN0
    case 0xC12705: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/unknown/C1/C11FD4.asm:14 TYA
    case 0xC12707: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C1/C11FD4.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC12708: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C1/C11FD4.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1270A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C1/C11FD4.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1270B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C1/C11FD4.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1270D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C1/C11FD4.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1270E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:16 TAX
    case 0xC1270F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:17 INX
    case 0xC12710: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:18 INX
    case 0xC12711: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:19 LDA f:BATTLE_ACTION_TABLE + battle_action::direction,X
    case 0xC12712: cpu.execute_instruction<0xBF>(0xD58B1E, 4); return true;
    // src/unknown/C1/C11FD4.asm:19 LDA f:BATTLE_ACTION_TABLE + battle_action::direction,X
    // Overlapping static entry reached from 0xC12742.
    case 0xC12714: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:19 LDA f:BATTLE_ACTION_TABLE + battle_action::direction,X
    // Overlapping static entry reached from 0xC12714.
    case 0xC12715: cpu.execute_instruction<0xD5>(0x000029, 2); return true;
    // src/unknown/C1/C11FD4.asm:20 AND #$00FF
    case 0xC12716: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C11FD4.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC12715.
    case 0xC12717: cpu.execute_instruction<0xFF>(0x01C900, 4); return true;
    // src/unknown/C1/C11FD4.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC12716.
    case 0xC12718: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C11FD4.asm:21 CMP #1
    case 0xC12719: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C11FD4.asm:21 CMP #1
    // Overlapping static entry reached from 0xC12719.
    case 0xC1271B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C11FD4.asm:22 BNE @UNKNOWN0
    case 0xC1271C: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C1/C11FD4.asm:23 LDA @VIRTUAL02
    case 0xC1271E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C11FD4.asm:24 JSL UNKNOWN_C2FAD2
    case 0xC12720: cpu.execute_instruction<0x22>(0xC2F9EB, 4); return true;
    // src/unknown/C1/C11FD4.asm:25 CMP #0
    case 0xC12724: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C11FD4.asm:25 CMP #0
    // Overlapping static entry reached from 0xC12724.
    case 0xC12726: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C11FD4.asm:26 BNE @UNKNOWN0
    case 0xC12727: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C11FD4.asm:27 LDA #0
    case 0xC12729: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C11FD4.asm:27 LDA #0
    // Overlapping static entry reached from 0xC12729.
    case 0xC1272B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C11FD4.asm:28 BRA @UNKNOWN1
    case 0xC1272C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C11FD4.asm:30 LDA #1
    case 0xC1272E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C11FD4.asm:30 LDA #1
    // Overlapping static entry reached from 0xC1272E.
    case 0xC12730: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C11FD4.asm:32 END_C_FUNCTION
    case 0xC12731: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11FD4.asm:32 END_C_FUNCTION
    case 0xC12732: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12012.asm (unresolved).
bool execute_unresolved_c1_c12012_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12012.asm:3 BEGIN_C_FUNCTION
    case 0xC12733: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    case 0xC12735: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    case 0xC12736: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    case 0xC12737: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    case 0xC12738: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC12738.
    case 0xC1273A: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    case 0xC1273B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    case 0xC1273C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C12012.asm:14 STY @LOCAL03
    case 0xC1273D: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C12012.asm:14 STY @LOCAL03
    // Overlapping static entry reached from 0xC1273A.
    case 0xC1273E: cpu.execute_instruction<0x14>(0x000086, 2); return true;
    // src/unknown/C1/C12012.asm:15 STX @LOCAL02
    case 0xC1273F: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C12012.asm:15 STX @LOCAL02
    // Overlapping static entry reached from 0xC1273E.
    case 0xC12740: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C1/C12012.asm:16 STA @LOCAL01
    case 0xC12741: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C12012.asm:16 STA @LOCAL01
    // Overlapping static entry reached from 0xC12740.
    case 0xC12742: cpu.execute_instruction<0x10>(0x0000D0, 2); return true;
    // src/unknown/C1/C12012.asm:17 BNE @UNKNOWN0
    case 0xC12743: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C1/C12012.asm:17 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC12742.
    case 0xC12744: cpu.execute_instruction<0x0C>(0x002BAD, 3); return true;
    // src/unknown/C1/C12012.asm:18 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC12745: cpu.execute_instruction<0xAD>(0x00AF2B, 3); return true;
    // src/unknown/C1/C12012.asm:18 LDA NUM_BATTLERS_IN_FRONT_ROW
    // Overlapping static entry reached from 0xC12744.
    case 0xC12747: cpu.execute_instruction<0xAF>(0xA90E85, 4); return true;
    // src/unknown/C1/C12012.asm:19 STA @LOCAL00
    case 0xC12748: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12012.asm:20 LDA #.LOWORD(BATTLER_FRONT_ROW_X_POSITIONS)
    case 0xC1274A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00AF2F, 3); return true;
    // src/unknown/C1/C12012.asm:20 LDA #.LOWORD(BATTLER_FRONT_ROW_X_POSITIONS)
    // Overlapping static entry reached from 0xC12747.
    case 0xC1274B: cpu.execute_instruction<0x2F>(0x0485AF, 4); return true;
    // src/unknown/C1/C12012.asm:20 LDA #.LOWORD(BATTLER_FRONT_ROW_X_POSITIONS)
    // Overlapping static entry reached from 0xC1274A.
    case 0xC1274C: cpu.execute_instruction<0xAF>(0x800485, 4); return true;
    // src/unknown/C1/C12012.asm:21 STA @VIRTUAL04
    case 0xC1274D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C12012.asm:22 BRA @UNKNOWN1
    case 0xC1274F: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C1/C12012.asm:22 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC1274C.
    case 0xC12750: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C12012.asm:24 LDA NUM_BATTLERS_IN_BACK_ROW
    case 0xC12751: cpu.execute_instruction<0xAD>(0x00AF2D, 3); return true;
    // src/unknown/C1/C12012.asm:25 STA @LOCAL00
    case 0xC12754: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12012.asm:26 LDA #.LOWORD(BATTLER_BACK_ROW_X_POSITIONS)
    case 0xC12756: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003F, 2); else cpu.execute_instruction<0xA9>(0x00AF3F, 3); return true;
    // src/unknown/C1/C12012.asm:26 LDA #.LOWORD(BATTLER_BACK_ROW_X_POSITIONS)
    // Overlapping static entry reached from 0xC12756.
    case 0xC12758: cpu.execute_instruction<0xAF>(0xA90485, 4); return true;
    // src/unknown/C1/C12012.asm:27 STA @VIRTUAL04
    case 0xC12759: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C12012.asm:29 LDA #0
    case 0xC1275B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C12012.asm:29 LDA #0
    // Overlapping static entry reached from 0xC12758.
    case 0xC1275C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C12012.asm:29 LDA #0
    // Overlapping static entry reached from 0xC1275B.
    case 0xC1275D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C12012.asm:30 STA @VIRTUAL02
    case 0xC1275E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C12012.asm:31 BRA @UNKNOWN4
    case 0xC12760: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C1/C12012.asm:33 LDX @VIRTUAL04
    case 0xC12762: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C12012.asm:34 LDA __BSS_START__,X
    case 0xC12764: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C12012.asm:35 AND #$00FF
    case 0xC12767: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C12012.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC12767.
    case 0xC12769: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C1/C12012.asm:36 INC @VIRTUAL04
    case 0xC1276A: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C12012.asm:37 CMP @LOCAL02
    case 0xC1276C: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C1/C12012.asm:38 BLTEQ @UNKNOWN3
    case 0xC1276E: cpu.execute_instruction<0x90>(0x000014, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C1/C12012.asm:38 BLTEQ @UNKNOWN3
    case 0xC12770: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C1/C12012.asm:39 LDY @LOCAL03
    case 0xC12772: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C12012.asm:40 LDX @VIRTUAL02
    case 0xC12774: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C12012.asm:41 LDA @LOCAL01
    case 0xC12776: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C12012.asm:42 JSR UNKNOWN_C11FD4
    case 0xC12778: cpu.execute_instruction<0x20>(0x0026F5, 3); return true;
    // src/unknown/C1/C12012.asm:43 CMP #0
    case 0xC1277B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12012.asm:43 CMP #0
    // Overlapping static entry reached from 0xC1277B.
    case 0xC1277D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C12012.asm:44 BEQ @UNKNOWN3
    case 0xC1277E: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C1/C12012.asm:45 LDA @VIRTUAL02
    case 0xC12780: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12012.asm:46 BRA @UNKNOWN5
    case 0xC12782: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C1/C12012.asm:48 INC @VIRTUAL02
    case 0xC12784: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C12012.asm:50 LDA @VIRTUAL02
    case 0xC12786: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12012.asm:51 CMP @LOCAL00
    case 0xC12788: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // src/unknown/C1/C12012.asm:52 BCC @UNKNOWN2
    case 0xC1278A: cpu.execute_instruction<0x90>(0x0000D6, 2); return true;
    // src/unknown/C1/C12012.asm:53 LDA #.LOWORD(-1)
    case 0xC1278C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C12012.asm:53 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1278C.
    case 0xC1278E: cpu.execute_instruction<0xFF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12012.asm:55 END_C_FUNCTION
    case 0xC1278F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C12012.asm:55 END_C_FUNCTION
    case 0xC12790: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12070.asm (unresolved).
bool execute_unresolved_c1_c12070_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12070.asm:3 BEGIN_C_FUNCTION
    case 0xC12791: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12070.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC1278E.
    case 0xC12792: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    case 0xC12793: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    case 0xC12794: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    case 0xC12795: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    case 0xC12796: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC12796.
    case 0xC12798: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    case 0xC12799: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    case 0xC1279A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:14 STY @LOCAL03
    case 0xC1279B: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C12070.asm:14 STY @LOCAL03
    // Overlapping static entry reached from 0xC12798.
    case 0xC1279C: cpu.execute_instruction<0x14>(0x000086, 2); return true;
    // src/unknown/C1/C12070.asm:15 STX @LOCAL02
    case 0xC1279D: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C12070.asm:15 STX @LOCAL02
    // Overlapping static entry reached from 0xC1279C.
    case 0xC1279E: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C1/C12070.asm:16 STA @LOCAL01
    case 0xC1279F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C12070.asm:16 STA @LOCAL01
    // Overlapping static entry reached from 0xC1279E.
    case 0xC127A0: cpu.execute_instruction<0x10>(0x0000D0, 2); return true;
    // src/unknown/C1/C12070.asm:17 BNE @UNKNOWN0
    case 0xC127A1: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C1/C12070.asm:17 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC127A0.
    case 0xC127A2: cpu.execute_instruction<0x0D>(0x002BAE, 3); return true;
    // src/unknown/C1/C12070.asm:18 LDX NUM_BATTLERS_IN_FRONT_ROW
    case 0xC127A3: cpu.execute_instruction<0xAE>(0x00AF2B, 3); return true;
    // src/unknown/C1/C12070.asm:18 LDX NUM_BATTLERS_IN_FRONT_ROW
    // Overlapping static entry reached from 0xC127A2.
    case 0xC127A5: cpu.execute_instruction<0xAF>(0x183A8A, 4); return true;
    // src/unknown/C1/C12070.asm:19 TXA
    case 0xC127A6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:20 DEC
    case 0xC127A7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:21 CLC
    case 0xC127A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:22 ADC #.LOWORD(BATTLER_FRONT_ROW_X_POSITIONS)
    case 0xC127A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002F, 2); else cpu.execute_instruction<0x69>(0x00AF2F, 3); return true;
    // src/unknown/C1/C12070.asm:22 ADC #.LOWORD(BATTLER_FRONT_ROW_X_POSITIONS)
    // Overlapping static entry reached from 0xC127A9.
    case 0xC127AB: cpu.execute_instruction<0xAF>(0x800485, 4); return true;
    // src/unknown/C1/C12070.asm:23 STA @VIRTUAL04
    case 0xC127AC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C12070.asm:24 BRA @UNKNOWN1
    case 0xC127AE: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C1/C12070.asm:24 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC127AB.
    case 0xC127AF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:26 LDX NUM_BATTLERS_IN_BACK_ROW
    case 0xC127B0: cpu.execute_instruction<0xAE>(0x00AF2D, 3); return true;
    // src/unknown/C1/C12070.asm:27 TXA
    case 0xC127B3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:28 DEC
    case 0xC127B4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:29 CLC
    case 0xC127B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:30 ADC #.LOWORD(BATTLER_BACK_ROW_X_POSITIONS)
    case 0xC127B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003F, 2); else cpu.execute_instruction<0x69>(0x00AF3F, 3); return true;
    // src/unknown/C1/C12070.asm:30 ADC #.LOWORD(BATTLER_BACK_ROW_X_POSITIONS)
    // Overlapping static entry reached from 0xC127B6.
    case 0xC127B8: cpu.execute_instruction<0xAF>(0x8A0485, 4); return true;
    // src/unknown/C1/C12070.asm:31 STA @VIRTUAL04
    case 0xC127B9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C12070.asm:33 TXA
    case 0xC127BB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:34 DEC
    case 0xC127BC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:35 STA @VIRTUAL02
    case 0xC127BD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C12070.asm:36 BRA @UNKNOWN4
    case 0xC127BF: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C1/C12070.asm:38 LDX @VIRTUAL04
    case 0xC127C1: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C12070.asm:39 LDA __BSS_START__,X
    case 0xC127C3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C12070.asm:40 AND #$00FF
    case 0xC127C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C12070.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC127C6.
    case 0xC127C8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C12070.asm:41 STA @LOCAL00
    case 0xC127C9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12070.asm:42 LDA @VIRTUAL04
    case 0xC127CB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C12070.asm:43 DEC
    case 0xC127CD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:44 STA @VIRTUAL04
    case 0xC127CE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C12070.asm:45 LDA @LOCAL00
    case 0xC127D0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12070.asm:46 CMP @LOCAL02
    case 0xC127D2: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // src/unknown/C1/C12070.asm:47 BCS @UNKNOWN3
    case 0xC127D4: cpu.execute_instruction<0xB0>(0x000012, 2); return true;
    // src/unknown/C1/C12070.asm:48 LDY @LOCAL03
    case 0xC127D6: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C12070.asm:49 LDX @VIRTUAL02
    case 0xC127D8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C12070.asm:50 LDA @LOCAL01
    case 0xC127DA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C12070.asm:51 JSR UNKNOWN_C11FD4
    case 0xC127DC: cpu.execute_instruction<0x20>(0x0026F5, 3); return true;
    // src/unknown/C1/C12070.asm:52 CMP #0
    case 0xC127DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12070.asm:52 CMP #0
    // Overlapping static entry reached from 0xC127DF.
    case 0xC127E1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C12070.asm:53 BEQ @UNKNOWN3
    case 0xC127E2: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C1/C12070.asm:54 LDA @VIRTUAL02
    case 0xC127E4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12070.asm:55 BRA @UNKNOWN5
    case 0xC127E6: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C1/C12070.asm:57 LDA @VIRTUAL02
    case 0xC127E8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12070.asm:58 DEC
    case 0xC127EA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:59 STA @VIRTUAL02
    case 0xC127EB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C12070.asm:61 LDA @VIRTUAL02
    case 0xC127ED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12070.asm:62 INC
    case 0xC127EF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:63 BNE @UNKNOWN2
    case 0xC127F0: cpu.execute_instruction<0xD0>(0x0000CF, 2); return true;
    // src/unknown/C1/C12070.asm:64 LDA #.LOWORD(-1)
    case 0xC127F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C12070.asm:64 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC127F2.
    case 0xC127F4: cpu.execute_instruction<0xFF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12070.asm:66 END_C_FUNCTION
    case 0xC127F5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C12070.asm:66 END_C_FUNCTION
    case 0xC127F6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C120D6.asm (unresolved).
bool execute_unresolved_c1_c120d6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C120D6.asm:3 BEGIN_C_FUNCTION
    case 0xC127F7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C120D6.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC127F4.
    case 0xC127F8: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    case 0xC127F9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    case 0xC127FA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    case 0xC127FB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    case 0xC127FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC127FC.
    case 0xC127FE: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    case 0xC127FF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    case 0xC12800: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:27 STX @LOCAL03
    case 0xC12801: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C120D6.asm:27 STX @LOCAL03
    // Overlapping static entry reached from 0xC127FE.
    case 0xC12802: cpu.execute_instruction<0x16>(0x0000A8, 2); return true;
    // src/unknown/C1/C120D6.asm:28 TAY
    case 0xC12803: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:29 STY @LOCAL02
    case 0xC12804: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C120D6.asm:30 JSR SET_INSTANT_PRINTING
    case 0xC12806: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C120D6.asm:31 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN31
    case 0xC12809: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C120D6.asm:31 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN31
    // Overlapping static entry reached from 0xC12809.
    case 0xC1280B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C120D6.asm:31 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN31
    case 0xC1280C: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:32 LOADPTR BATTLE_TO_TEXT, @LOCAL00
    case 0xC1280F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x0032F5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:32 LOADPTR BATTLE_TO_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC1280F.
    case 0xC12811: cpu.execute_instruction<0x32>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C120D6.asm:32 LOADPTR BATTLE_TO_TEXT, @LOCAL00
    case 0xC12812: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C120D6.asm:32 LOADPTR BATTLE_TO_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC12811.
    case 0xC12813: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:32 LOADPTR BATTLE_TO_TEXT, @LOCAL00
    case 0xC12814: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:32 LOADPTR BATTLE_TO_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC12814.
    case 0xC12816: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C120D6.asm:32 LOADPTR BATTLE_TO_TEXT, @LOCAL00
    case 0xC12817: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C120D6.asm:33 LDA #@TO_TEXT_LENGTH
    case 0xC12819: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C120D6.asm:33 LDA #@TO_TEXT_LENGTH
    // Overlapping static entry reached from 0xC12819.
    case 0xC1281B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C120D6.asm:34 JSR PRINT_STRING
    case 0xC1281C: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C120D6.asm:35 LDX @LOCAL03
    case 0xC1281F: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C120D6.asm:36 CPX #.LOWORD(-1)
    case 0xC12821: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C120D6.asm:36 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12821.
    case 0xC12823: cpu.execute_instruction<0xFF>(0x8678F0, 4); return true;
    // src/unknown/C1/C120D6.asm:40 BEQ @UNKNOWN3
    case 0xC12824: cpu.execute_instruction<0xF0>(0x000078, 2); return true;
    // src/unknown/C1/C120D6.asm:42 STX @VIRTUAL02
    case 0xC12826: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C120D6.asm:42 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC12823.
    case 0xC12827: cpu.execute_instruction<0x02>(0x0000A4, 2); return true;
    // src/unknown/C1/C120D6.asm:43 LDY @LOCAL02
    case 0xC12828: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C120D6.asm:44 TYA
    case 0xC1282A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:45 LDY NUM_BATTLERS_IN_FRONT_ROW
    case 0xC1282B: cpu.execute_instruction<0xAC>(0x00AF2B, 3); return true;
    // src/unknown/C1/C120D6.asm:46 JSL MULT16
    case 0xC1282E: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C1/C120D6.asm:47 CLC
    case 0xC12832: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:48 ADC @VIRTUAL02
    case 0xC12833: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C120D6.asm:49 INC
    case 0xC12835: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:50 JSL UNKNOWN_C23E8A
    case 0xC12836: cpu.execute_instruction<0x22>(0xC23D5F, 4); return true;
    // src/unknown/C1/C120D6.asm:55 JSR RETURN_BATTLE_ATTACKER_ADDRESS
    case 0xC1283A: cpu.execute_instruction<0x20>(0x00AB5D, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C120D6.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1283D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C120D6.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1283F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C120D6.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC12840: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C120D6.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC12842: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C120D6.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC12843: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C120D6.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC12845: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C120D6.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC12847: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C120D6.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12849: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C120D6.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1284B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C120D6.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1284D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C120D6.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1284F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C120D6.asm:59 LDA #$00FF
    case 0xC12851: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C1/C120D6.asm:59 LDA #$00FF
    // Overlapping static entry reached from 0xC12851.
    case 0xC12853: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C120D6.asm:60 JSR PRINT_STRING
    case 0xC12854: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C120D6.asm:66 LDY @LOCAL02
    case 0xC12857: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C120D6.asm:67 BEQ @UNKNOWN1
    case 0xC12859: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C1/C120D6.asm:68 LDX @LOCAL03
    case 0xC1285B: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C120D6.asm:69 LDA BACK_ROW_BATTLERS,X
    case 0xC1285D: cpu.execute_instruction<0xBD>(0x00AF57, 3); return true;
    // src/unknown/C1/C120D6.asm:70 AND #$00FF
    case 0xC12860: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C120D6.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC12860.
    case 0xC12862: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C120D6.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    case 0xC12863: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C120D6.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    // Overlapping static entry reached from 0xC12863.
    case 0xC12865: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C120D6.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    case 0xC12866: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C120D6.asm:72 CLC
    case 0xC1286A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:73 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC1286B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CB, 2); else cpu.execute_instruction<0x69>(0x00A1CB, 3); return true;
    // src/unknown/C1/C120D6.asm:73 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC1286B.
    case 0xC1286D: cpu.execute_instruction<0xA1>(0x000080, 2); return true;
    // src/unknown/C1/C120D6.asm:74 BRA @UNKNOWN2
    case 0xC1286E: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C1/C120D6.asm:74 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC1286D.
    case 0xC1286F: cpu.execute_instruction<0x13>(0x0000A6, 2); return true;
    // src/unknown/C1/C120D6.asm:76 LDX @LOCAL03
    case 0xC12870: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C120D6.asm:76 LDX @LOCAL03
    // Overlapping static entry reached from 0xC1286F.
    case 0xC12871: cpu.execute_instruction<0x16>(0x0000BD, 2); return true;
    // src/unknown/C1/C120D6.asm:77 LDA FRONT_ROW_BATTLERS,X
    case 0xC12872: cpu.execute_instruction<0xBD>(0x00AF4F, 3); return true;
    // src/unknown/C1/C120D6.asm:77 LDA FRONT_ROW_BATTLERS,X
    // Overlapping static entry reached from 0xC12871.
    case 0xC12873: cpu.execute_instruction<0x4F>(0xFF29AF, 4); return true;
    // src/unknown/C1/C120D6.asm:78 AND #$00FF
    case 0xC12875: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C120D6.asm:78 AND #$00FF
    // Overlapping static entry reached from 0xC12875.
    case 0xC12877: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C120D6.asm:79 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    case 0xC12878: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C120D6.asm:79 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    // Overlapping static entry reached from 0xC12878.
    case 0xC1287A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C120D6.asm:79 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    case 0xC1287B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C120D6.asm:80 CLC
    case 0xC1287F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:81 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC12880: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CB, 2); else cpu.execute_instruction<0x69>(0x00A1CB, 3); return true;
    // src/unknown/C1/C120D6.asm:81 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC12880.
    case 0xC12882: cpu.execute_instruction<0xA1>(0x0000A8, 2); return true;
    // src/unknown/C1/C120D6.asm:83 TAY
    case 0xC12883: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:84 STY @LOCAL01
    case 0xC12884: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C1/C120D6.asm:85 LDX #0
    case 0xC12886: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C120D6.asm:85 LDX #0
    // Overlapping static entry reached from 0xC12886.
    case 0xC12888: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C120D6.asm:86 LDA #@CURSOR_POS_Y
    case 0xC12889: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/unknown/C1/C120D6.asm:86 LDA #@CURSOR_POS_Y
    // Overlapping static entry reached from 0xC12889.
    case 0xC1288B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C120D6.asm:87 JSR UNKNOWN_C438A5
    case 0xC1288C: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C120D6.asm:88 LDX #0
    case 0xC1288F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C120D6.asm:88 LDX #0
    // Overlapping static entry reached from 0xC1288F.
    case 0xC12891: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C1/C120D6.asm:89 LDY @LOCAL01
    case 0xC12892: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C120D6.asm:90 TYA
    case 0xC12894: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:91 JSL UNKNOWN_C223D9
    case 0xC12895: cpu.execute_instruction<0x22>(0xC22280, 4); return true;
    // src/unknown/C1/C120D6.asm:93 JSR PRINT_LETTER
    case 0xC12899: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C120D6.asm:98 BRA @UNKNOWN6
    case 0xC1289C: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C1/C120D6.asm:100 LDY @LOCAL02
    case 0xC1289E: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C120D6.asm:101 BEQ @UNKNOWN4
    case 0xC128A0: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    case 0xC128A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x003301, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC128A2.
    case 0xC128A4: cpu.execute_instruction<0x33>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    case 0xC128A5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC128A4.
    case 0xC128A6: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    case 0xC128A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC128A6.
    case 0xC128A8: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC128A7.
    case 0xC128A9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    case 0xC128AA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C120D6.asm:103 BRA @UNKNOWN5
    case 0xC128AC: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C1/C120D6.asm:103 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC1FC06.
    case 0xC128AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    case 0xC128AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0032FD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC128AE.
    case 0xC128B0: cpu.execute_instruction<0x32>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    case 0xC128B1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC128B0.
    case 0xC128B2: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    case 0xC128B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC128B2.
    case 0xC128B4: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC128B3.
    case 0xC128B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    case 0xC128B6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C120D6.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128B8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C120D6.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128BA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C120D6.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128BC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C120D6.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128BE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C120D6.asm:108 LDA #@ROW_TEXT_LENGTH
    case 0xC128C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C120D6.asm:108 LDA #@ROW_TEXT_LENGTH
    // Overlapping static entry reached from 0xC128C0.
    case 0xC128C2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C120D6.asm:109 JSR PRINT_STRING
    case 0xC128C3: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C120D6.asm:111 JSR CLEAR_INSTANT_PRINTING
    case 0xC128C6: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C120D6.asm:112 END_C_FUNCTION
    case 0xC128C9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C120D6.asm:112 END_C_FUNCTION
    case 0xC128CA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C121B8-jp.asm (unresolved).
bool execute_unresolved_c1_c121b8_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C121B8-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC128CB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C121B8-jp.asm:18 END_STACK_VARS
    case 0xC128CD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C121B8-jp.asm:18 END_STACK_VARS
    case 0xC128CE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C121B8-jp.asm:18 END_STACK_VARS
    case 0xC128CF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C121B8-jp.asm:18 END_STACK_VARS
    case 0xC128D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C121B8-jp.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC128D0.
    case 0xC128D2: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C121B8-jp.asm:18 END_STACK_VARS
    case 0xC128D3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C121B8-jp.asm:18 END_STACK_VARS
    case 0xC128D4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:19 STX @LOCAL07
    case 0xC128D5: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:19 STX @LOCAL07
    // Overlapping static entry reached from 0xC128D2.
    case 0xC128D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:20 STA @LOCAL06
    case 0xC128D7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:21 STZ @LOCAL05
    case 0xC128D9: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:25 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC128DB: cpu.execute_instruction<0xAD>(0x00AF2B, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:26 BEQ @UNKNOWN0
    case 0xC128DE: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:27 LDX #0
    case 0xC128E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:27 LDX #0
    // Overlapping static entry reached from 0xC128E0.
    case 0xC128E2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:28 BRA @UNKNOWN1
    case 0xC128E3: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:30 LDX #1
    case 0xC128E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:30 LDX #1
    // Overlapping static entry reached from 0xC128E5.
    case 0xC128E7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:32 STX @VIRTUAL04
    case 0xC128E8: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:33 LDA GIYGAS_PHASE
    case 0xC128EA: cpu.execute_instruction<0xAD>(0x00AB7C, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:34 BEQ @UNKNOWN2
    case 0xC128ED: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:35 LDA #1
    case 0xC128EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:35 LDA #1
    // Overlapping static entry reached from 0xC128EF.
    case 0xC128F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:36 STA @VIRTUAL04
    case 0xC128F2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:38 LDX @LOCAL05
    case 0xC128F4: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:39 LDA @VIRTUAL04
    case 0xC128F6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:40 JSR UNKNOWN_C11FBC
    case 0xC128F8: cpu.execute_instruction<0x20>(0x0026DD, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:41 STA @LOCAL02
    case 0xC128FB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:42 LDX @LOCAL05
    case 0xC128FD: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:43 LDA @VIRTUAL04
    case 0xC128FF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:44 JSR ENEMY_FLASHING_ON
    case 0xC12901: cpu.execute_instruction<0x20>(0x000DF2, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:45 LDX @LOCAL05
    case 0xC12904: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:46 LDA @VIRTUAL04
    case 0xC12906: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:47 JSR UNKNOWN_C120D6
    case 0xC12908: cpu.execute_instruction<0x20>(0x0027F7, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:48 JSL WINDOW_TICK
    case 0xC1290B: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C1/C121B8-jp.asm:50 JSL UNKNOWN_C12E42
    case 0xC1290F: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/unknown/C1/C121B8-jp.asm:51 LDA PAD_PRESS
    case 0xC12913: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:52 AND #PAD::UP
    case 0xC12916: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:52 AND #PAD::UP
    // Overlapping static entry reached from 0xC12916.
    case 0xC12918: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:53 BEQ @UNKNOWN5
    case 0xC12919: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:54 LDA @VIRTUAL04
    case 0xC1291B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:55 BNE @UNKNOWN5
    case 0xC1291D: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:56 LDA NUM_BATTLERS_IN_BACK_ROW
    case 0xC1291F: cpu.execute_instruction<0xAD>(0x00AF2D, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C121B8-jp.asm:57 BNEL @UNKNOWN16
    case 0xC12922: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:57 BNEL @UNKNOWN16
    case 0xC12924: cpu.execute_instruction<0x4C>(0x002A01, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:59 LDA PAD_PRESS
    case 0xC12927: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:60 AND #PAD::DOWN
    case 0xC1292A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:60 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1292A.
    case 0xC1292C: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:61 BEQ @UNKNOWN6
    case 0xC1292D: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:61 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xC1292C.
    case 0xC1292E: cpu.execute_instruction<0x0F>(0xC904A5, 4); return true;
    // src/unknown/C1/C121B8-jp.asm:62 LDA @VIRTUAL04
    case 0xC1292F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:63 CMP #1
    case 0xC12931: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:63 CMP #1
    // Overlapping static entry reached from 0xC1292E.
    case 0xC12932: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:63 CMP #1
    // Overlapping static entry reached from 0xC12931.
    case 0xC12933: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:64 BNE @UNKNOWN6
    case 0xC12934: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:65 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC12936: cpu.execute_instruction<0xAD>(0x00AF2B, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C121B8-jp.asm:66 BNEL @UNKNOWN16
    case 0xC12939: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:66 BNEL @UNKNOWN16
    case 0xC1293B: cpu.execute_instruction<0x4C>(0x002A01, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:68 LDA #SFX::CURSOR2
    case 0xC1293E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:68 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1293E.
    case 0xC12940: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:69 STA @LOCAL01
    case 0xC12941: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:70 LDA PAD_PRESS
    case 0xC12943: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:71 AND #PAD::LEFT
    case 0xC12946: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:71 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC12946.
    case 0xC12948: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:72 BEQ @UNKNOWN9
    case 0xC12949: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:73 LDA @VIRTUAL04
    case 0xC1294B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:74 STA @VIRTUAL02
    case 0xC1294D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:75 LDY @LOCAL07
    case 0xC1294F: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:76 LDX @LOCAL02
    case 0xC12951: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:77 LDA @VIRTUAL02
    case 0xC12953: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:78 JSR UNKNOWN_C12070
    case 0xC12955: cpu.execute_instruction<0x20>(0x002791, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:79 TAX
    case 0xC12958: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:80 CPX #.LOWORD(-1)
    case 0xC12959: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:80 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12959.
    case 0xC1295B: cpu.execute_instruction<0xFF>(0x4C03F0, 4); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C121B8-jp.asm:81 BNEL @UNKNOWN17
    case 0xC1295C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:81 BNEL @UNKNOWN17
    case 0xC1295E: cpu.execute_instruction<0x4C>(0x002A30, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:81 BNEL @UNKNOWN17
    // Overlapping static entry reached from 0xC1295B.
    case 0xC1295F: cpu.execute_instruction<0x30>(0x00002A, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:82 LDA @VIRTUAL04
    case 0xC12961: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:83 EOR #$0001
    case 0xC12963: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000001, 2); else cpu.execute_instruction<0x49>(0x000001, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:83 EOR #$0001
    // Overlapping static entry reached from 0xC12963.
    case 0xC12965: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:84 STA @VIRTUAL02
    case 0xC12966: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:85 LDY @LOCAL07
    case 0xC12968: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:86 LDX @LOCAL02
    case 0xC1296A: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:87 LDA @VIRTUAL02
    case 0xC1296C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:88 JSR UNKNOWN_C12070
    case 0xC1296E: cpu.execute_instruction<0x20>(0x002791, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:89 TAX
    case 0xC12971: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:90 CPX #.LOWORD(-1)
    case 0xC12972: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:90 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12972.
    case 0xC12974: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C121B8-jp.asm:91 BEQL @UNKNOWN2
    case 0xC12975: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:91 BEQL @UNKNOWN2
    case 0xC12977: cpu.execute_instruction<0x4C>(0x0028F4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:91 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC12974.
    case 0xC12978: cpu.execute_instruction<0xF4>(0x004C28, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:92 JMP @UNKNOWN17
    case 0xC1297A: cpu.execute_instruction<0x4C>(0x002A30, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:92 JMP @UNKNOWN17
    // Overlapping static entry reached from 0xC12978.
    case 0xC1297B: cpu.execute_instruction<0x30>(0x00002A, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:94 LDA PAD_PRESS
    case 0xC1297D: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:95 AND #PAD::RIGHT
    case 0xC12980: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:95 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC12980.
    case 0xC12982: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:96 BEQ @UNKNOWN12
    case 0xC12983: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:96 BEQ @UNKNOWN12
    // Overlapping static entry reached from 0xC12982.
    case 0xC12984: cpu.execute_instruction<0x32>(0x0000A5, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:97 LDA @VIRTUAL04
    case 0xC12985: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:97 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC12984.
    case 0xC12986: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:98 STA @VIRTUAL02
    case 0xC12987: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:98 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC12986.
    case 0xC12988: cpu.execute_instruction<0x02>(0x0000A4, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:99 LDY @LOCAL07
    case 0xC12989: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:100 LDX @LOCAL02
    case 0xC1298B: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:101 LDA @VIRTUAL02
    case 0xC1298D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:102 JSR UNKNOWN_C12012
    case 0xC1298F: cpu.execute_instruction<0x20>(0x002733, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:103 TAX
    case 0xC12992: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:104 CPX #.LOWORD(-1)
    case 0xC12993: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:104 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12993.
    case 0xC12995: cpu.execute_instruction<0xFF>(0x4C03F0, 4); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C121B8-jp.asm:105 BNEL @UNKNOWN17
    case 0xC12996: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:105 BNEL @UNKNOWN17
    case 0xC12998: cpu.execute_instruction<0x4C>(0x002A30, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:105 BNEL @UNKNOWN17
    // Overlapping static entry reached from 0xC12995.
    case 0xC12999: cpu.execute_instruction<0x30>(0x00002A, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:106 LDA @VIRTUAL04
    case 0xC1299B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:107 EOR #$0001
    case 0xC1299D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000001, 2); else cpu.execute_instruction<0x49>(0x000001, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:107 EOR #$0001
    // Overlapping static entry reached from 0xC1299D.
    case 0xC1299F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:108 STA @VIRTUAL02
    case 0xC129A0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:109 LDY @LOCAL07
    case 0xC129A2: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:110 LDX @LOCAL02
    case 0xC129A4: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:111 LDA @VIRTUAL02
    case 0xC129A6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:111 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1297B.
    case 0xC129A7: cpu.execute_instruction<0x02>(0x000020, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:112 JSR UNKNOWN_C12012
    case 0xC129A8: cpu.execute_instruction<0x20>(0x002733, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:113 TAX
    case 0xC129AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:114 CPX #.LOWORD(-1)
    case 0xC129AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:114 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC129AC.
    case 0xC129AE: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C121B8-jp.asm:115 BEQL @UNKNOWN2
    case 0xC129AF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:115 BEQL @UNKNOWN2
    case 0xC129B1: cpu.execute_instruction<0x4C>(0x0028F4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:115 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC129AE.
    case 0xC129B2: cpu.execute_instruction<0xF4>(0x004C28, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:116 JMP @UNKNOWN17
    case 0xC129B4: cpu.execute_instruction<0x4C>(0x002A30, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:116 JMP @UNKNOWN17
    // Overlapping static entry reached from 0xC129B2.
    case 0xC129B5: cpu.execute_instruction<0x30>(0x00002A, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:118 LDA PAD_PRESS
    case 0xC129B7: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:119 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC129BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:119 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC129BA.
    case 0xC129BC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:120 BEQ @UNKNOWN13
    case 0xC129BD: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:121 JSR ENEMY_FLASHING_OFF
    case 0xC129BF: cpu.execute_instruction<0x20>(0x000DA0, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:122 LDY NUM_BATTLERS_IN_FRONT_ROW
    case 0xC129C2: cpu.execute_instruction<0xAC>(0x00AF2B, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:123 LDA @VIRTUAL04
    case 0xC129C5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:124 JSL MULT16
    case 0xC129C7: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C1/C121B8-jp.asm:125 CLC
    case 0xC129CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:126 ADC @LOCAL05
    case 0xC129CC: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:127 TAX
    case 0xC129CE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:128 INX
    case 0xC129CF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:129 STX @LOCAL00
    case 0xC129D0: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:130 LDA #SFX::CURSOR1
    case 0xC129D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:130 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC129D2.
    case 0xC129D4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:131 JSL PLAY_SOUND
    case 0xC129D5: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C1/C121B8-jp.asm:132 BRA @UNKNOWN18
    case 0xC129D9: cpu.execute_instruction<0x80>(0x000064, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:134 LDA PAD_PRESS
    case 0xC129DB: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:135 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC129DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:135 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC129DE.
    case 0xC129E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0003D0, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C121B8-jp.asm:136 BEQL @UNKNOWN4
    case 0xC129E1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C121B8-jp.asm:136 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC129E0.
    case 0xC129E2: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:136 BEQL @UNKNOWN4
    case 0xC129E3: cpu.execute_instruction<0x4C>(0x00290F, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:136 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC129E2.
    case 0xC129E4: cpu.execute_instruction<0x0F>(0x16A529, 4); return true;
    // src/unknown/C1/C121B8-jp.asm:137 LDA @LOCAL06
    case 0xC129E6: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:138 CMP #1
    case 0xC129E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:138 CMP #1
    // Overlapping static entry reached from 0xC129E8.
    case 0xC129EA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C121B8-jp.asm:139 BNEL @UNKNOWN4
    case 0xC129EB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:139 BNEL @UNKNOWN4
    case 0xC129ED: cpu.execute_instruction<0x4C>(0x00290F, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:140 JSR ENEMY_FLASHING_OFF
    case 0xC129F0: cpu.execute_instruction<0x20>(0x000DA0, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:141 LDX #0
    case 0xC129F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:141 LDX #0
    // Overlapping static entry reached from 0xC129F3.
    case 0xC129F5: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:142 STX @LOCAL00
    case 0xC129F6: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:143 LDA #SFX::CURSOR2
    case 0xC129F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:143 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC129F8.
    case 0xC129FA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:144 JSL PLAY_SOUND
    case 0xC129FB: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C1/C121B8-jp.asm:145 BRA @UNKNOWN18
    case 0xC129FF: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:147 LDA #SFX::CURSOR3
    case 0xC12A01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:147 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC12A01.
    case 0xC12A03: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:148 STA @LOCAL01
    case 0xC12A04: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:149 LDA @VIRTUAL04
    case 0xC12A06: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:150 EOR #$0001
    case 0xC12A08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000001, 2); else cpu.execute_instruction<0x49>(0x000001, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:150 EOR #$0001
    // Overlapping static entry reached from 0xC12A08.
    case 0xC12A0A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:151 STA @VIRTUAL02
    case 0xC12A0B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:152 LDY @LOCAL07
    case 0xC12A0D: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:153 LDX @LOCAL02
    case 0xC12A0F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:154 DEX
    case 0xC12A11: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:155 LDA @VIRTUAL02
    case 0xC12A12: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:156 JSR UNKNOWN_C12012
    case 0xC12A14: cpu.execute_instruction<0x20>(0x002733, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:157 TAX
    case 0xC12A17: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:158 CPX #.LOWORD(-1)
    case 0xC12A18: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:158 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12A18.
    case 0xC12A1A: cpu.execute_instruction<0xFF>(0xA413D0, 4); return true;
    // src/unknown/C1/C121B8-jp.asm:159 BNE @UNKNOWN17
    case 0xC12A1B: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:160 LDY @LOCAL07
    case 0xC12A1D: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:160 LDY @LOCAL07
    // Overlapping static entry reached from 0xC12A1A.
    case 0xC12A1E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:161 LDX @LOCAL02
    case 0xC12A1F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:162 INX
    case 0xC12A21: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:163 LDA @VIRTUAL02
    case 0xC12A22: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:164 JSR UNKNOWN_C12070
    case 0xC12A24: cpu.execute_instruction<0x20>(0x002791, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:165 TAX
    case 0xC12A27: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8-jp.asm:166 CPX #.LOWORD(-1)
    case 0xC12A28: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:166 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12A28.
    case 0xC12A2A: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C121B8-jp.asm:167 BEQL @UNKNOWN2
    case 0xC12A2B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:167 BEQL @UNKNOWN2
    case 0xC12A2D: cpu.execute_instruction<0x4C>(0x0028F4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8-jp.asm:167 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC12A2A.
    case 0xC12A2E: cpu.execute_instruction<0xF4>(0x008628, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:177 STX @LOCAL05
    case 0xC12A30: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:177 STX @LOCAL05
    // Overlapping static entry reached from 0xC12A2E.
    case 0xC12A31: cpu.execute_instruction<0x14>(0x0000A5, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:178 LDA @VIRTUAL02
    case 0xC12A32: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:178 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC12A31.
    case 0xC12A33: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:179 STA @VIRTUAL04
    case 0xC12A34: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:180 LDA @LOCAL01
    case 0xC12A36: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:181 JSL PLAY_SOUND
    case 0xC12A38: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C1/C121B8-jp.asm:182 JMP @UNKNOWN2
    case 0xC12A3C: cpu.execute_instruction<0x4C>(0x0028F4, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:184 JSR CLOSE_FOCUS_WINDOW
    case 0xC12A3F: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/unknown/C1/C121B8-jp.asm:185 LDX @LOCAL00
    case 0xC12A42: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C121B8-jp.asm:186 TXA
    case 0xC12A44: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C121B8-jp.asm:187 END_C_FUNCTION
    case 0xC12A45: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C121B8-jp.asm:187 END_C_FUNCTION
    case 0xC12A46: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12362.asm (unresolved).
bool execute_unresolved_c1_c12362_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12362.asm:3 BEGIN_C_FUNCTION
    case 0xC12A47: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    case 0xC12A49: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    case 0xC12A4A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    case 0xC12A4B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    case 0xC12A4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC12A4C.
    case 0xC12A4E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    case 0xC12A4F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    case 0xC12A50: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:11 STA @VIRTUAL02
    case 0xC12A51: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C12362.asm:11 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC12A4E.
    case 0xC12A52: cpu.execute_instruction<0x02>(0x0000AD, 2); return true;
    // src/unknown/C1/C12362.asm:12 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC12A53: cpu.execute_instruction<0xAD>(0x00AF2B, 3); return true;
    // src/unknown/C1/C12362.asm:13 BEQ @UNKNOWN0
    case 0xC12A56: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C12362.asm:14 LDX #0
    case 0xC12A58: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C12362.asm:14 LDX #0
    // Overlapping static entry reached from 0xC12A58.
    case 0xC12A5A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C12362.asm:15 BRA @UNKNOWN1
    case 0xC12A5B: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C12362.asm:17 LDX #1
    case 0xC12A5D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C12362.asm:17 LDX #1
    // Overlapping static entry reached from 0xC12A5D.
    case 0xC12A5F: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/unknown/C1/C12362.asm:19 TXY
    case 0xC12A60: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:20 STY @LOCAL02
    case 0xC12A61: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C1/C12362.asm:22 LDY @LOCAL02
    case 0xC12A63: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C12362.asm:23 TYA
    case 0xC12A65: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:24 JSR UNKNOWN_C43657
    case 0xC12A66: cpu.execute_instruction<0x20>(0x000D21, 3); return true;
    // src/unknown/C1/C12362.asm:25 JSR CLEAR_INSTANT_PRINTING
    case 0xC12A69: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/unknown/C1/C12362.asm:26 LDX #.LOWORD(-1)
    case 0xC12A6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C1/C12362.asm:26 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12A6C.
    case 0xC12A6E: cpu.execute_instruction<0xFF>(0x9812A4, 4); return true;
    // src/unknown/C1/C12362.asm:27 LDY @LOCAL02
    case 0xC12A6F: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C12362.asm:28 TYA
    case 0xC12A71: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:29 JSR UNKNOWN_C120D6
    case 0xC12A72: cpu.execute_instruction<0x20>(0x0027F7, 3); return true;
    // src/unknown/C1/C12362.asm:30 JSL WINDOW_TICK
    case 0xC12A75: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C1/C12362.asm:32 JSL UNKNOWN_C12E42
    case 0xC12A79: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/unknown/C1/C12362.asm:33 LDA PAD_PRESS
    case 0xC12A7D: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C12362.asm:34 AND #PAD::UP
    case 0xC12A80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/C1/C12362.asm:34 AND #PAD::UP
    // Overlapping static entry reached from 0xC12A80.
    case 0xC12A82: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:35 BEQ @UNKNOWN4
    case 0xC12A83: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C1/C12362.asm:36 LDX #1
    case 0xC12A85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C12362.asm:36 LDX #1
    // Overlapping static entry reached from 0xC12A85.
    case 0xC12A87: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12362.asm:37 STX @LOCAL01
    case 0xC12A88: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:38 LDA #SFX::CURSOR3
    case 0xC12A8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C12362.asm:38 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC12A8A.
    case 0xC12A8C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C12362.asm:39 STA @LOCAL00
    case 0xC12A8D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12362.asm:40 BRA @UNKNOWN7
    case 0xC12A8F: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // src/unknown/C1/C12362.asm:42 LDA PAD_PRESS
    case 0xC12A91: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C12362.asm:43 AND #PAD::DOWN
    case 0xC12A94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/C1/C12362.asm:43 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC12A94.
    case 0xC12A96: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/C1/C12362.asm:44 BEQ @UNKNOWN5
    case 0xC12A97: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C1/C12362.asm:44 BEQ @UNKNOWN5
    // Overlapping static entry reached from 0xC12A96.
    case 0xC12A98: cpu.execute_instruction<0x0C>(0x0000A2, 3); return true;
    // src/unknown/C1/C12362.asm:45 LDX #0
    case 0xC12A99: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C12362.asm:45 LDX #0
    // Overlapping static entry reached from 0xC12A99.
    case 0xC12A9B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12362.asm:46 STX @LOCAL01
    case 0xC12A9C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:47 LDA #SFX::CURSOR3
    case 0xC12A9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C12362.asm:47 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC12A9E.
    case 0xC12AA0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C12362.asm:48 STA @LOCAL00
    case 0xC12AA1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12362.asm:49 BRA @UNKNOWN7
    case 0xC12AA3: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C1/C12362.asm:51 LDA PAD_PRESS
    case 0xC12AA5: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C12362.asm:52 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC12AA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/unknown/C1/C12362.asm:52 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC12AA8.
    case 0xC12AAA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C12362.asm:53 BEQ @UNKNOWN6
    case 0xC12AAB: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C1/C12362.asm:54 JSR UNKNOWN_C435E4
    case 0xC12AAD: cpu.execute_instruction<0x20>(0x000CAE, 3); return true;
    // src/unknown/C1/C12362.asm:55 LDY @LOCAL02
    case 0xC12AB0: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C12362.asm:56 TYX
    case 0xC12AB2: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:57 INX
    case 0xC12AB3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:58 STX @LOCAL01
    case 0xC12AB4: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:59 LDA #SFX::CURSOR1
    case 0xC12AB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C12362.asm:59 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC12AB6.
    case 0xC12AB8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C12362.asm:60 JSL PLAY_SOUND
    case 0xC12AB9: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C1/C12362.asm:61 BRA @UNKNOWN11
    case 0xC12ABD: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C1/C12362.asm:63 LDA PAD_PRESS
    case 0xC12ABF: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C12362.asm:64 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC12AC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/unknown/C1/C12362.asm:64 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC12AC2.
    case 0xC12AC4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x00B2F0, 3); return true;
    // src/unknown/C1/C12362.asm:65 BEQ @UNKNOWN3
    case 0xC12AC5: cpu.execute_instruction<0xF0>(0x0000B2, 2); return true;
    // src/unknown/C1/C12362.asm:65 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC12AC4.
    case 0xC12AC6: cpu.execute_instruction<0xB2>(0x0000A5, 2); return true;
    // src/unknown/C1/C12362.asm:66 LDA @VIRTUAL02
    case 0xC12AC7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12362.asm:66 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC12AC6.
    case 0xC12AC8: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C1/C12362.asm:67 CMP #1
    case 0xC12AC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C12362.asm:67 CMP #1
    // Overlapping static entry reached from 0xC12AC9.
    case 0xC12ACB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12362.asm:68 BNE @UNKNOWN3
    case 0xC12ACC: cpu.execute_instruction<0xD0>(0x0000AB, 2); return true;
    // src/unknown/C1/C12362.asm:69 JSR UNKNOWN_C435E4
    case 0xC12ACE: cpu.execute_instruction<0x20>(0x000CAE, 3); return true;
    // src/unknown/C1/C12362.asm:70 LDX #0
    case 0xC12AD1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C12362.asm:70 LDX #0
    // Overlapping static entry reached from 0xC12AD1.
    case 0xC12AD3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12362.asm:71 STX @LOCAL01
    case 0xC12AD4: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:72 LDA #SFX::CURSOR2
    case 0xC12AD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C12362.asm:72 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC12AD6.
    case 0xC12AD8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C12362.asm:73 JSL PLAY_SOUND
    case 0xC12AD9: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C1/C12362.asm:74 BRA @UNKNOWN11
    case 0xC12ADD: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C1/C12362.asm:76 CPX #0
    case 0xC12ADF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C1/C12362.asm:76 CPX #0
    // Overlapping static entry reached from 0xC12ADF.
    case 0xC12AE1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12362.asm:77 BNE @UNKNOWN8
    case 0xC12AE2: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C12362.asm:78 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC12AE4: cpu.execute_instruction<0xAD>(0x00AF2B, 3); return true;
    // src/unknown/C1/C12362.asm:79 BNE @UNKNOWN10
    case 0xC12AE7: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:81 CPX #0
    case 0xC12AE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C1/C12362.asm:81 CPX #0
    // Overlapping static entry reached from 0xC12AE9.
    case 0xC12AEB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C12362.asm:82 BEQL @UNKNOWN2
    case 0xC12AEC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C12362.asm:82 BEQL @UNKNOWN2
    case 0xC12AEE: cpu.execute_instruction<0x4C>(0x002A63, 3); return true;
    // src/unknown/C1/C12362.asm:83 LDA NUM_BATTLERS_IN_BACK_ROW
    case 0xC12AF1: cpu.execute_instruction<0xAD>(0x00AF2D, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C12362.asm:84 BEQL @UNKNOWN2
    case 0xC12AF4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C12362.asm:84 BEQL @UNKNOWN2
    case 0xC12AF6: cpu.execute_instruction<0x4C>(0x002A63, 3); return true;
    // src/unknown/C1/C12362.asm:86 LDA @LOCAL00
    case 0xC12AF9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12362.asm:87 JSL PLAY_SOUND
    case 0xC12AFB: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C1/C12362.asm:88 LDX @LOCAL01
    case 0xC12AFF: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:89 TXY
    case 0xC12B01: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:90 STY @LOCAL02
    case 0xC12B02: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C1/C12362.asm:91 JMP @UNKNOWN2
    case 0xC12B04: cpu.execute_instruction<0x4C>(0x002A63, 3); return true;
    // src/unknown/C1/C12362.asm:93 JSR CLOSE_FOCUS_WINDOW
    case 0xC12B07: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/unknown/C1/C12362.asm:94 LDX @LOCAL01
    case 0xC12B0A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:95 TXA
    case 0xC12B0C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12362.asm:96 END_C_FUNCTION
    case 0xC12B0D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C12362.asm:96 END_C_FUNCTION
    case 0xC12B0E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1242E.asm (unresolved).
bool execute_unresolved_c1_c1242e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1242E.asm:3 BEGIN_C_FUNCTION
    case 0xC12B0F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    case 0xC12B11: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    case 0xC12B12: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    case 0xC12B13: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    case 0xC12B14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC12B14.
    case 0xC12B16: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    case 0xC12B17: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    case 0xC12B18: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1242E.asm:10 STY @VIRTUAL02
    case 0xC12B19: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1242E.asm:10 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC12B16.
    case 0xC12B1A: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C1/C1242E.asm:11 TXY
    case 0xC12B1B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1242E.asm:12 TAX
    case 0xC12B1C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1242E.asm:13 BEQ @UNKNOWN0
    case 0xC12B1D: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C1242E.asm:14 TYA
    case 0xC12B1F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1242E.asm:15 JSR UNKNOWN_C12362
    case 0xC12B20: cpu.execute_instruction<0x20>(0x002A47, 3); return true;
    // src/unknown/C1/C1242E.asm:16 BRA @UNKNOWN1
    case 0xC12B23: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C1/C1242E.asm:18 LDX @VIRTUAL02
    case 0xC12B25: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1242E.asm:19 TYA
    case 0xC12B27: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1242E.asm:20 JSR UNKNOWN_C121B8
    case 0xC12B28: cpu.execute_instruction<0x20>(0x0028CB, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1242E.asm:22 END_C_FUNCTION
    case 0xC12B2B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1242E.asm:22 END_C_FUNCTION
    case 0xC12B2C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1242E_redirect.asm (unresolved).
bool execute_unresolved_c1_c1242e_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1242E_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DBFA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1242E_redirect.asm:5 JSR UNKNOWN_C1242E
    case 0xC1DBFC: cpu.execute_instruction<0x20>(0x002B0F, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1242E_redirect.asm:6 END_C_FUNCTION
    case 0xC1DBFF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1244C-jp.asm (unresolved).
bool execute_unresolved_c1_c1244c_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1244C-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC12B2D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1244C-jp.asm:20 END_STACK_VARS
    case 0xC12B2F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1244C-jp.asm:20 END_STACK_VARS
    case 0xC12B30: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1244C-jp.asm:20 END_STACK_VARS
    case 0xC12B31: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1244C-jp.asm:20 END_STACK_VARS
    case 0xC12B32: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1244C-jp.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC12B32.
    case 0xC12B34: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1244C-jp.asm:20 END_STACK_VARS
    case 0xC12B35: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1244C-jp.asm:20 END_STACK_VARS
    case 0xC12B36: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:21 STY @LOCAL0A
    case 0xC12B37: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:21 STY @LOCAL0A
    // Overlapping static entry reached from 0xC12B34.
    case 0xC12B38: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:22 STX @LOCAL09
    case 0xC12B39: cpu.execute_instruction<0x86>(0x000026, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:23 STA @LOCAL08
    case 0xC12B3B: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:24 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC12B3D: cpu.execute_instruction<0x20>(0x000504, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:25 STA @LOCAL07
    case 0xC12B40: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:26 CLC
    case 0xC12B42: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:27 ADC #window_stats::argument_memory
    case 0xC12B43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:27 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC12B43.
    case 0xC12B45: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:28 TAY
    case 0xC12B46: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC12B47: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC12B4A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC12B4C: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC12B4F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C-jp.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL06
    case 0xC12B51: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL06
    case 0xC12B53: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL06
    case 0xC12B55: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL06
    case 0xC12B57: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:31 LDA @LOCAL09
    case 0xC12B59: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:32 CMP #1
    case 0xC12B5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:32 CMP #1
    // Overlapping static entry reached from 0xC12B5B.
    case 0xC12B5D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1244C-jp.asm:33 BNEL @UNKNOWN7
    case 0xC12B5E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:33 BNEL @UNKNOWN7
    case 0xC12B60: cpu.execute_instruction<0x4C>(0x002C43, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:34 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC12B63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:34 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC12B63.
    case 0xC12B65: cpu.execute_instruction<0x9F>(0x08B122, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:35 JSL UNKNOWN_C20A20
    case 0xC12B66: cpu.execute_instruction<0x22>(0xC208B1, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:35 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC12B65.
    case 0xC12B69: cpu.execute_instruction<0xC2>(0x0000AD, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:36 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC12B6A: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:36 LDA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC12B69.
    case 0xC12B6B: cpu.execute_instruction<0x55>(0x00009B, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:37 AND #$00FF
    case 0xC12B6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC12B6D.
    case 0xC12B6F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:38 CMP #1
    case 0xC12B70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:38 CMP #1
    // Overlapping static entry reached from 0xC12B70.
    case 0xC12B72: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:39 BNE @UNKNOWN1
    case 0xC12B73: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:40 LDX #WINDOW::UNKNOWN33
    case 0xC12B75: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000033, 2); else cpu.execute_instruction<0xA2>(0x000033, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:40 LDX #WINDOW::UNKNOWN33
    // Overlapping static entry reached from 0xC12B75.
    case 0xC12B77: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:41 BRA @UNKNOWN2
    case 0xC12B78: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:43 CLC
    case 0xC12B7A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:44 ADC #WINDOW::UNKNOWN28
    case 0xC12B7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:44 ADC #WINDOW::UNKNOWN28
    // Overlapping static entry reached from 0xC12B7B.
    case 0xC12B7D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:45 TAX
    case 0xC12B7E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:46 DEX
    case 0xC12B7F: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:48 STX @LOCAL05
    case 0xC12B80: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1244C-jp.asm:49 CREATE_WINDOW_NEAR @LOCAL05
    case 0xC12B82: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1244C-jp.asm:49 CREATE_WINDOW_NEAR @LOCAL05
    case 0xC12B84: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:50 LDA #0
    case 0xC12B87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:50 LDA #0
    // Overlapping static entry reached from 0xC12B87.
    case 0xC12B89: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:51 STA @VIRTUAL02
    case 0xC12B8A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:52 JMP @UNKNOWN4
    case 0xC12B8C: cpu.execute_instruction<0x4C>(0x002C14, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:54 LDA @VIRTUAL02
    case 0xC12B8F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:55 CLC
    case 0xC12B91: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:56 ADC #.LOWORD(GAME_STATE)
    case 0xC12B92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:56 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC12B92.
    case 0xC12B94: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:57 CLC
    case 0xC12B95: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:58 ADC #game_state::party_members
    case 0xC12B96: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000077, 2); else cpu.execute_instruction<0x69>(0x000077, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:58 ADC #game_state::party_members
    // Overlapping static entry reached from 0xC12B96.
    case 0xC12B98: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:59 STA @VIRTUAL04
    case 0xC12B99: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:60 STA @LOCAL04
    case 0xC12B9B: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:61 LDX @VIRTUAL04
    case 0xC12B9D: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:62 LDA __BSS_START__,X
    case 0xC12B9F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:63 AND #$00FF
    case 0xC12BA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC12BA2.
    case 0xC12BA4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:64 JSL GET_PARTY_CHARACTER_NAME
    case 0xC12BA5: cpu.execute_instruction<0x22>(0xC22172, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C-jp.asm:65 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12BA9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:65 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12BAB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:65 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12BAD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:65 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12BAF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:66 LDX #4
    case 0xC12BB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:66 LDX #4
    // Overlapping static entry reached from 0xC12BB1.
    case 0xC12BB3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:67 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC12BB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:67 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC12BB4.
    case 0xC12BB6: cpu.execute_instruction<0x9F>(0x8EC322, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:68 JSL MEMCPY16
    case 0xC12BB7: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:68 JSL MEMCPY16
    // Overlapping static entry reached from 0xC12BB6.
    case 0xC12BBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC12BBB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:69 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC12BBA.
    case 0xC12BBC: cpu.execute_instruction<0x20>(0x004E9C, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:70 STZ TEMPORARY_TEXT_BUFFER+4
    case 0xC12BBD: cpu.execute_instruction<0x9C>(0x009F4E, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:70 STZ TEMPORARY_TEXT_BUFFER+4
    // Overlapping static entry reached from 0xC12BBC.
    case 0xC12BBF: cpu.execute_instruction<0x9F>(0xA920C2, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC12BC0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:72 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12BC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:72 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC12BBF.
    case 0xC12BC3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:72 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC12BC2.
    case 0xC12BC4: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:72 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12BC5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1244C-jp.asm:72 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12BC7: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1244C-jp.asm:72 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12BC8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1244C-jp.asm:72 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12BCA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:72 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12BCB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1244C-jp.asm:72 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12BCD: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC12BCF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C-jp.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12BD1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12BD3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12BD5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12BD7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:75 LDA @VIRTUAL02
    case 0xC12BD9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:76 ASL
    case 0xC12BDB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:77 ASL
    case 0xC12BDC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:78 CLC
    case 0xC12BDD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:79 ADC @LOCAL08
    case 0xC12BDE: cpu.execute_instruction<0x65>(0x000024, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:80 TAY
    case 0xC12BE0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:81 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12BE1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:81 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12BE4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:81 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12BE6: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:81 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12BE9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C-jp.asm:82 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC12BEB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:82 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC12BED: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:82 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC12BEF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:82 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC12BF1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:83 LDY #0
    case 0xC12BF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:83 LDY #0
    // Overlapping static entry reached from 0xC12BF3.
    case 0xC12BF5: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:84 LDA @VIRTUAL02
    case 0xC12BF6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:85 STA @VIRTUAL04
    case 0xC12BF8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:86 ASL
    case 0xC12BFA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:87 ADC @VIRTUAL04
    case 0xC12BFB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:88 ASL
    case 0xC12BFD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:89 TAX
    case 0xC12BFE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:90 STX @LOCAL03
    case 0xC12BFF: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:91 LDA @LOCAL04
    case 0xC12C01: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:92 STA @VIRTUAL04
    case 0xC12C03: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:93 LDX @VIRTUAL04
    case 0xC12C05: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:94 LDA __BSS_START__,X
    case 0xC12C07: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:95 AND #$00FF
    case 0xC12C0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:95 AND #$00FF
    // Overlapping static entry reached from 0xC12C0A.
    case 0xC12C0C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:96 LDX @LOCAL03
    case 0xC12C0D: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:97 JSR UNKNOWN_C1153B
    case 0xC12C0F: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:98 INC @VIRTUAL02
    case 0xC12C12: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:100 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC12C14: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:101 AND #$00FF
    case 0xC12C17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC12C17.
    case 0xC12C19: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:102 CLC
    case 0xC12C1A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:103 SBC @VIRTUAL02
    case 0xC12C1B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C1/C1244C-jp.asm:104 JUMPGTS @UNKNOWN3
    case 0xC12C1D: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C1/C1244C-jp.asm:104 JUMPGTS @UNKNOWN3
    case 0xC12C1F: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:104 JUMPGTS @UNKNOWN3
    case 0xC12C21: cpu.execute_instruction<0x4C>(0x002B8F, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C1/C1244C-jp.asm:104 JUMPGTS @UNKNOWN3
    case 0xC12C24: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:104 JUMPGTS @UNKNOWN3
    case 0xC12C26: cpu.execute_instruction<0x4C>(0x002B8F, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:105 JSR PRINT_MENU_ITEMS
    case 0xC12C29: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:106 LDA @LOCAL0A
    case 0xC12C2C: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:107 JSR SELECTION_MENU
    case 0xC12C2E: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:108 TAX
    case 0xC12C31: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:109 STX @LOCAL04
    case 0xC12C32: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:110 LDA @LOCAL05
    case 0xC12C34: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:111 JSR CLOSE_WINDOW
    case 0xC12C36: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:112 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC12C39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:112 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC12C39.
    case 0xC12C3B: cpu.execute_instruction<0x9F>(0x094D22, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:113 JSL UNKNOWN_C20ABC
    case 0xC12C3C: cpu.execute_instruction<0x22>(0xC2094D, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:113 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC12C3B.
    case 0xC12C3F: cpu.execute_instruction<0xC2>(0x00004C, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:114 JMP @UNKNOWN42
    case 0xC12C40: cpu.execute_instruction<0x4C>(0x002EC3, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:114 JMP @UNKNOWN42
    // Overlapping static entry reached from 0xC12C3F.
    case 0xC12C41: cpu.execute_instruction<0xC3>(0x00002E, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:116 LDX #0
    case 0xC12C43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:116 LDX #0
    // Overlapping static entry reached from 0xC12C43.
    case 0xC12C45: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:117 BRA @UNKNOWN9
    case 0xC12C46: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:119 TXA
    case 0xC12C48: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:120 ASL
    case 0xC12C49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:121 ASL
    case 0xC12C4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:122 STA @LOCAL05
    case 0xC12C4B: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:123 CLC
    case 0xC12C4D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:124 ADC @LOCAL08
    case 0xC12C4E: cpu.execute_instruction<0x65>(0x000024, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:125 TAY
    case 0xC12C50: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:126 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12C51: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:126 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12C54: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:126 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12C56: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:126 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12C59: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:127 LDA @LOCAL05
    case 0xC12C5B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:128 CLC
    case 0xC12C5D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:129 ADC #.LOWORD(PARTY_MEMBER_SELECTION_SCRIPTS)
    case 0xC12C5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x009929, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:129 ADC #.LOWORD(PARTY_MEMBER_SELECTION_SCRIPTS)
    // Overlapping static entry reached from 0xC12C5E.
    case 0xC12C60: cpu.execute_instruction<0x99>(0x00A5A8, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:130 TAY
    case 0xC12C61: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C1244C-jp.asm:131 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12C62: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C1244C-jp.asm:131 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC12C60.
    case 0xC12C63: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:131 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12C64: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:131 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC12C63.
    case 0xC12C65: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:131 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12C67: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:131 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12C69: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:132 INX
    case 0xC12C6C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:134 CPX #4
    case 0xC12C6D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:134 CPX #4
    // Overlapping static entry reached from 0xC12C6D.
    case 0xC12C6F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:135 BNE @UNKNOWN8
    case 0xC12C70: cpu.execute_instruction<0xD0>(0x0000D6, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:136 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC12C72: cpu.execute_instruction<0xAD>(0x008D08, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:137 CMP #.LOWORD(-1)
    case 0xC12C75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:137 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12C75.
    case 0xC12C77: cpu.execute_instruction<0xFF>(0xA205D0, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:138 BNE @UNKNOWN10
    case 0xC12C78: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:139 LDX #0
    case 0xC12C7A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:139 LDX #0
    // Overlapping static entry reached from 0xC12C77.
    case 0xC12C7B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:139 LDX #0
    // Overlapping static entry reached from 0xC12C7A.
    case 0xC12C7C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:140 BRA @UNKNOWN11
    case 0xC12C7D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:142 LDX BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC12C7F: cpu.execute_instruction<0xAE>(0x008D08, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:144 STX @VIRTUAL04
    case 0xC12C82: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:145 LDA @VIRTUAL04
    case 0xC12C84: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:146 CLC
    case 0xC12C86: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:147 ADC #.LOWORD(GAME_STATE)
    case 0xC12C87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:147 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC12C87.
    case 0xC12C89: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:148 TAX
    case 0xC12C8A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:149 LDA a:game_state::party_members,X
    case 0xC12C8B: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:150 AND #$00FF
    case 0xC12C8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:150 AND #$00FF
    // Overlapping static entry reached from 0xC12C8E.
    case 0xC12C90: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:151 DEC
    case 0xC12C91: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:152 ASL
    case 0xC12C92: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:153 ASL
    case 0xC12C93: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:154 CLC
    case 0xC12C94: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:155 ADC #.LOWORD(PARTY_MEMBER_SELECTION_SCRIPTS)
    case 0xC12C95: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x009929, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:155 ADC #.LOWORD(PARTY_MEMBER_SELECTION_SCRIPTS)
    // Overlapping static entry reached from 0xC12C95.
    case 0xC12C97: cpu.execute_instruction<0x99>(0x00B9A8, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:156 TAY
    case 0xC12C98: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:157 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12C99: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:157 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC12C97.
    case 0xC12C9A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:157 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12C9C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:157 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12C9E: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:157 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12CA1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12CA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12CA3.
    case 0xC12CA5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12CA6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12CA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12CA8.
    case 0xC12CAA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:158 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12CAB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:159 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC12CAD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:159 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC12CAF: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C1/C1244C-jp.asm:159 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC12CB1: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C1/C1244C-jp.asm:159 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC12CB3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:159 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC12CB5: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:160 BEQ @UNKNOWN13
    case 0xC12CB7: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C-jp.asm:161 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12CB9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:161 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12CBB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:161 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12CBD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:161 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12CBF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:162 JSL DISPLAY_TEXT
    case 0xC12CC1: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:164 STZ PAGINATION_ANIMATION_FRAME
    case 0xC12CC5: cpu.execute_instruction<0x9C>(0x0061F4, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:165 LDA #10
    case 0xC12CC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:165 LDA #10
    // Overlapping static entry reached from 0xC12CC8.
    case 0xC12CCA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:166 STA @VIRTUAL02
    case 0xC12CCB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:167 STA @LOCAL05
    case 0xC12CCD: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:169 LDA @LOCAL09
    case 0xC12CCF: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:170 BNE @UNKNOWN15
    case 0xC12CD1: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:171 LDA @VIRTUAL04
    case 0xC12CD3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:172 JSR UNKNOWN_C43573
    case 0xC12CD5: cpu.execute_instruction<0x20>(0x000C40, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:174 JSR CLEAR_INSTANT_PRINTING
    case 0xC12CD8: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:175 JSL WINDOW_TICK
    case 0xC12CDB: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:176 LDA @VIRTUAL04
    case 0xC12CDF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:177 STA @LOCAL08
    case 0xC12CE1: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:178 LDA PAGINATION_WINDOW
    case 0xC12CE3: cpu.execute_instruction<0xAD>(0x0061F2, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:179 CMP #.LOWORD(-1)
    case 0xC12CE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:179 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12CE6.
    case 0xC12CE8: cpu.execute_instruction<0xFF>(0xAD1AF0, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:180 BEQ @UNKNOWN16
    case 0xC12CE9: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:181 LDA PAGINATION_WINDOW
    case 0xC12CEB: cpu.execute_instruction<0xAD>(0x0061F2, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:181 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC12CE8.
    case 0xC12CEC: cpu.execute_instruction<0xF2>(0x000061, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:182 ASL
    case 0xC12CEE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:183 TAX
    case 0xC12CEF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:184 LDA OPEN_WINDOW_TABLE,X
    case 0xC12CF0: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:185 CMP #.LOWORD(-1)
    case 0xC12CF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:185 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12CF3.
    case 0xC12CF5: cpu.execute_instruction<0xFF>(0xA00DF0, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:186 BEQ @UNKNOWN16
    case 0xC12CF6: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:187 LDY #.SIZEOF(window_stats)
    case 0xC12CF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:187 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC12CF5.
    case 0xC12CF9: cpu.execute_instruction<0x4C>(0x002200, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:187 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC12CF8.
    case 0xC12CFA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:188 JSL MULT168
    case 0xC12CFB: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:189 CLC
    case 0xC12CFF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:190 ADC #.LOWORD(WINDOW_STATS)
    case 0xC12D00: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:190 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC12D00.
    case 0xC12D02: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x001685, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:191 STA @LOCAL02
    case 0xC12D03: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:191 STA @LOCAL02
    // Overlapping static entry reached from 0xC12D02.
    case 0xC12D04: cpu.execute_instruction<0x16>(0x0000AD, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:193 LDA PAGINATION_WINDOW
    case 0xC12D05: cpu.execute_instruction<0xAD>(0x0061F2, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:193 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC12D04.
    case 0xC12D06: cpu.execute_instruction<0xF2>(0x000061, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:194 CMP #.LOWORD(-1)
    case 0xC12D08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:194 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12D08.
    case 0xC12D0A: cpu.execute_instruction<0xFF>(0xAD62F0, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:195 BEQ @UNKNOWN17
    case 0xC12D0B: cpu.execute_instruction<0xF0>(0x000062, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:196 LDA PAGINATION_WINDOW
    case 0xC12D0D: cpu.execute_instruction<0xAD>(0x0061F2, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:196 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC12D0A.
    case 0xC12D0E: cpu.execute_instruction<0xF2>(0x000061, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:197 ASL
    case 0xC12D10: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:198 TAX
    case 0xC12D11: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:199 LDA OPEN_WINDOW_TABLE,X
    case 0xC12D12: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:200 CMP #.LOWORD(-1)
    case 0xC12D15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:200 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12D15.
    case 0xC12D17: cpu.execute_instruction<0xFF>(0xA955F0, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:201 BEQ @UNKNOWN17
    case 0xC12D18: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:202 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC12D1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00E41E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:202 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC12D17.
    case 0xC12D1B: cpu.execute_instruction<0x1E>(0x0085E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:202 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC12D1A.
    case 0xC12D1C: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1244C-jp.asm:202 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC12D1D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1244C-jp.asm:202 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC12D1C.
    case 0xC12D1E: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:202 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC12D1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:202 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC12D1E.
    case 0xC12D20: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:202 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC12D1F.
    case 0xC12D21: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:202 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC12D22: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:203 LDA PAGINATION_ANIMATION_FRAME
    case 0xC12D24: cpu.execute_instruction<0xAD>(0x0061F4, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:204 ASL
    case 0xC12D27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:205 ASL
    case 0xC12D28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:206 CLC
    case 0xC12D29: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:207 ADC @VIRTUAL06
    case 0xC12D2A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:208 STA @VIRTUAL06
    case 0xC12D2C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1244C-jp.asm:209 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC12D2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1244C-jp.asm:209 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC12D2E.
    case 0xC12D30: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:209 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC12D31: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1244C-jp.asm:209 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC12D33: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1244C-jp.asm:209 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC12D34: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:209 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC12D36: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:209 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC12D38: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C-jp.asm:210 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12D3A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:210 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12D3C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:210 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12D3E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:210 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12D40: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:211 LDY #8
    case 0xC12D42: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:211 LDY #8
    // Overlapping static entry reached from 0xC12D42.
    case 0xC12D44: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:212 LDA (@LOCAL02),Y
    case 0xC12D45: cpu.execute_instruction<0xB1>(0x000016, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:213 ASL
    case 0xC12D47: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:214 ASL
    case 0xC12D48: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:215 ASL
    case 0xC12D49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:216 ASL
    case 0xC12D4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:217 ASL
    case 0xC12D4B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:218 STA @VIRTUAL02
    case 0xC12D4C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:219 LDY #6
    case 0xC12D4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:219 LDY #6
    // Overlapping static entry reached from 0xC12D4E.
    case 0xC12D50: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:220 LDA (@LOCAL02),Y
    case 0xC12D51: cpu.execute_instruction<0xB1>(0x000016, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:221 LDY #10
    case 0xC12D53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:221 LDY #10
    // Overlapping static entry reached from 0xC12D53.
    case 0xC12D55: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:222 CLC
    case 0xC12D56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:223 ADC (@LOCAL02),Y
    case 0xC12D57: cpu.execute_instruction<0x71>(0x000016, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:224 DEC
    case 0xC12D59: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:225 DEC
    case 0xC12D5A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:226 DEC
    case 0xC12D5B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:227 CLC
    case 0xC12D5C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:228 ADC @VIRTUAL02
    case 0xC12D5D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:229 CLC
    case 0xC12D5F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:230 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xC12D60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:230 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xC12D60.
    case 0xC12D62: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:231 TAY
    case 0xC12D63: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:232 LDX #8
    case 0xC12D64: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:232 LDX #8
    // Overlapping static entry reached from 0xC12D64.
    case 0xC12D66: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:233 SEP #PROC_FLAGS::ACCUM8
    case 0xC12D67: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:234 LDA #0
    case 0xC12D69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:235 JSL PREPARE_VRAM_COPY
    case 0xC12D6B: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:235 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC12D69.
    case 0xC12D6C: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:235 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC12D6C.
    case 0xC12D6E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:238 LDA #0
    case 0xC12D6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:238 LDA #0
    // Overlapping static entry reached from 0xC12D6E.
    case 0xC12D70: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:238 LDA #0
    // Overlapping static entry reached from 0xC12D6F.
    case 0xC12D71: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:239 STA @LOCAL04
    case 0xC12D72: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:240 JMP @UNKNOWN29
    case 0xC12D74: cpu.execute_instruction<0x4C>(0x002E11, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:242 JSL UNKNOWN_C12E42
    case 0xC12D77: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:243 LDA PAD_PRESS
    case 0xC12D7B: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:244 AND #PAD::LEFT
    case 0xC12D7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:244 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC12D7E.
    case 0xC12D80: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:245 BEQ @UNKNOWN21
    case 0xC12D81: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:246 LDX @LOCAL08
    case 0xC12D83: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:247 DEX
    case 0xC12D85: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:248 STX @LOCAL04
    case 0xC12D86: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:249 LDA @LOCAL09
    case 0xC12D88: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:250 BEQ @UNKNOWN19
    case 0xC12D8A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:251 LDY #2
    case 0xC12D8C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:251 LDY #2
    // Overlapping static entry reached from 0xC12D8C.
    case 0xC12D8E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:252 BRA @UNKNOWN20
    case 0xC12D8F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:254 LDY #27
    case 0xC12D91: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x00001B, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:254 LDY #27
    // Overlapping static entry reached from 0xC12D91.
    case 0xC12D93: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:256 LDA #2
    case 0xC12D94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:256 LDA #2
    // Overlapping static entry reached from 0xC12D94.
    case 0xC12D96: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:257 STA PAGINATION_ANIMATION_FRAME
    case 0xC12D97: cpu.execute_instruction<0x8D>(0x0061F4, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:258 JMP @UNKNOWN33
    case 0xC12D9A: cpu.execute_instruction<0x4C>(0x002E38, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:260 LDA PAD_PRESS
    case 0xC12D9D: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:261 AND #PAD::RIGHT
    case 0xC12DA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:261 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC12DA0.
    case 0xC12DA2: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:262 BEQ @UNKNOWN24
    case 0xC12DA3: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:262 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xC12DA2.
    case 0xC12DA4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:263 LDX @LOCAL08
    case 0xC12DA5: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:264 INX
    case 0xC12DA7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:265 STX @LOCAL04
    case 0xC12DA8: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:266 LDA @LOCAL09
    case 0xC12DAA: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:267 BEQ @UNKNOWN22
    case 0xC12DAC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:268 LDY #SFX::CURSOR2
    case 0xC12DAE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:268 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC12DAE.
    case 0xC12DB0: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:269 BRA @UNKNOWN23
    case 0xC12DB1: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:271 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC12DB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x00001B, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:271 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC12DB3.
    case 0xC12DB5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:273 LDA #3
    case 0xC12DB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:273 LDA #3
    // Overlapping static entry reached from 0xC12DB6.
    case 0xC12DB8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:274 STA PAGINATION_ANIMATION_FRAME
    case 0xC12DB9: cpu.execute_instruction<0x8D>(0x0061F4, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:275 JMP @UNKNOWN33
    case 0xC12DBC: cpu.execute_instruction<0x4C>(0x002E38, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:277 LDA PAD_PRESS
    case 0xC12DBF: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:278 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC12DC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:278 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC12DC2.
    case 0xC12DC4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:279 BEQ @UNKNOWN25
    case 0xC12DC5: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:280 LDA @VIRTUAL04
    case 0xC12DC7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:281 CLC
    case 0xC12DC9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:282 ADC #.LOWORD(GAME_STATE)
    case 0xC12DCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:282 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC12DCA.
    case 0xC12DCC: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:283 TAX
    case 0xC12DCD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:284 LDA a:game_state::party_members,X
    case 0xC12DCE: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:285 AND #$00FF
    case 0xC12DD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:285 AND #$00FF
    // Overlapping static entry reached from 0xC12DD1.
    case 0xC12DD3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:286 TAX
    case 0xC12DD4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:287 STX @LOCAL04
    case 0xC12DD5: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:288 LDA #SFX::CURSOR1
    case 0xC12DD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:288 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC12DD7.
    case 0xC12DD9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:289 JSL PLAY_SOUND
    case 0xC12DDA: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:290 JMP @UNKNOWN42
    case 0xC12DDE: cpu.execute_instruction<0x4C>(0x002EC3, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:292 LDA PAD_PRESS
    case 0xC12DE1: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:293 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC12DE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:293 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC12DE4.
    case 0xC12DE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x0023F0, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:294 BEQ @UNKNOWN28
    case 0xC12DE7: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:294 BEQ @UNKNOWN28
    // Overlapping static entry reached from 0xC12DE6.
    case 0xC12DE8: cpu.execute_instruction<0x23>(0x0000A5, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:295 LDA @LOCAL0A
    case 0xC12DE9: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:295 LDA @LOCAL0A
    // Overlapping static entry reached from 0xC12DE8.
    case 0xC12DEA: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:296 CMP #1
    case 0xC12DEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:296 CMP #1
    // Overlapping static entry reached from 0xC12DEB.
    case 0xC12DED: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:297 BNE @UNKNOWN28
    case 0xC12DEE: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:298 LDX #0
    case 0xC12DF0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:298 LDX #0
    // Overlapping static entry reached from 0xC12DF0.
    case 0xC12DF2: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:299 STX @LOCAL04
    case 0xC12DF3: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:300 LDA @LOCAL09
    case 0xC12DF5: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:301 BEQ @UNKNOWN26
    case 0xC12DF7: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:302 LDY #SFX::CURSOR2
    case 0xC12DF9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:302 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC12DF9.
    case 0xC12DFB: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:303 BRA @UNKNOWN27
    case 0xC12DFC: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:305 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC12DFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x00001B, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:305 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC12DFE.
    case 0xC12E00: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:307 TYA
    case 0xC12E01: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:308 JSL PLAY_SOUND
    case 0xC12E02: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:309 JSR UNKNOWN_C3E6F8
    case 0xC12E06: cpu.execute_instruction<0x20>(0x000BDB, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:310 JMP @UNKNOWN42
    case 0xC12E09: cpu.execute_instruction<0x4C>(0x002EC3, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:312 LDA @LOCAL04
    case 0xC12E0C: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:313 INC
    case 0xC12E0E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:314 STA @LOCAL04
    case 0xC12E0F: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:316 LDX @LOCAL05
    case 0xC12E11: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:317 STX @VIRTUAL02
    case 0xC12E13: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:318 CMP @VIRTUAL02
    case 0xC12E15: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C1/C1244C-jp.asm:319 BCCL @UNKNOWN18
    case 0xC12E17: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C1/C1244C-jp.asm:319 BCCL @UNKNOWN18
    case 0xC12E19: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:319 BCCL @UNKNOWN18
    case 0xC12E1B: cpu.execute_instruction<0x4C>(0x002D77, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:320 LDA PAGINATION_ANIMATION_FRAME
    case 0xC12E1E: cpu.execute_instruction<0xAD>(0x0061F4, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:321 BNE @UNKNOWN31
    case 0xC12E21: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:322 LDX #1
    case 0xC12E23: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:322 LDX #1
    // Overlapping static entry reached from 0xC12E23.
    case 0xC12E25: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:323 BRA @UNKNOWN32
    case 0xC12E26: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:325 LDX #0
    case 0xC12E28: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:325 LDX #0
    // Overlapping static entry reached from 0xC12E28.
    case 0xC12E2A: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:327 STX PAGINATION_ANIMATION_FRAME
    case 0xC12E2B: cpu.execute_instruction<0x8E>(0x0061F4, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:328 LDA #10
    case 0xC12E2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:328 LDA #10
    // Overlapping static entry reached from 0xC12E2E.
    case 0xC12E30: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:329 STA @VIRTUAL02
    case 0xC12E31: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:330 STA @LOCAL05
    case 0xC12E33: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:331 JMP @UNKNOWN16
    case 0xC12E35: cpu.execute_instruction<0x4C>(0x002D05, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:333 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC12E38: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:334 AND #$00FF
    case 0xC12E3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:334 AND #$00FF
    // Overlapping static entry reached from 0xC12E3B.
    case 0xC12E3D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:335 STA @LOCAL08
    case 0xC12E3E: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:336 STX @VIRTUAL02
    case 0xC12E40: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:337 CLC
    case 0xC12E42: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:338 SBC @VIRTUAL02
    case 0xC12E43: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1244C-jp.asm:339 BRANCHGTS @UNKNOWN36
    case 0xC12E45: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:339 BRANCHGTS @UNKNOWN36
    case 0xC12E47: cpu.execute_instruction<0x10>(0x00000B, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1244C-jp.asm:339 BRANCHGTS @UNKNOWN36
    case 0xC12E49: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:339 BRANCHGTS @UNKNOWN36
    case 0xC12E4B: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:340 LDX #0
    case 0xC12E4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:340 LDX #0
    // Overlapping static entry reached from 0xC12E4D.
    case 0xC12E4F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:341 STX @LOCAL04
    case 0xC12E50: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:342 BRA @UNKNOWN39
    case 0xC12E52: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:344 STX @VIRTUAL02
    case 0xC12E54: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:345 LDA #0
    case 0xC12E56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:345 LDA #0
    // Overlapping static entry reached from 0xC12E56.
    case 0xC12E58: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:346 CLC
    case 0xC12E59: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:347 SBC @VIRTUAL02
    case 0xC12E5A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1244C-jp.asm:348 BRANCHLTEQS @UNKNOWN39
    case 0xC12E5C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:348 BRANCHLTEQS @UNKNOWN39
    case 0xC12E5E: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1244C-jp.asm:348 BRANCHLTEQS @UNKNOWN39
    case 0xC12E60: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:348 BRANCHLTEQS @UNKNOWN39
    case 0xC12E62: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:349 LDA @LOCAL08
    case 0xC12E64: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:350 TAX
    case 0xC12E66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:351 DEX
    case 0xC12E67: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:352 STX @LOCAL04
    case 0xC12E68: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:354 TXA
    case 0xC12E6A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:355 CMP @VIRTUAL04
    case 0xC12E6B: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:356 BEQ @UNKNOWN41
    case 0xC12E6D: cpu.execute_instruction<0xF0>(0x00004A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:357 TYA
    case 0xC12E6F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:358 JSL PLAY_SOUND
    case 0xC12E70: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:359 LDX @LOCAL04
    case 0xC12E74: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:360 STX @VIRTUAL04
    case 0xC12E76: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:361 LDA @VIRTUAL04
    case 0xC12E78: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:362 CLC
    case 0xC12E7A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:363 ADC #.LOWORD(GAME_STATE)
    case 0xC12E7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:363 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC12E7B.
    case 0xC12E7D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:364 TAX
    case 0xC12E7E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:365 LDA a:game_state::party_members,X
    case 0xC12E7F: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:366 AND #$00FF
    case 0xC12E82: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:366 AND #$00FF
    // Overlapping static entry reached from 0xC12E82.
    case 0xC12E84: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:367 DEC
    case 0xC12E85: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:368 ASL
    case 0xC12E86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:369 ASL
    case 0xC12E87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:370 CLC
    case 0xC12E88: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:371 ADC #.LOWORD(PARTY_MEMBER_SELECTION_SCRIPTS)
    case 0xC12E89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x009929, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:371 ADC #.LOWORD(PARTY_MEMBER_SELECTION_SCRIPTS)
    // Overlapping static entry reached from 0xC12E89.
    case 0xC12E8B: cpu.execute_instruction<0x99>(0x00B9A8, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:372 TAY
    case 0xC12E8C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:373 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12E8D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:373 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC12E8B.
    case 0xC12E8E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:373 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12E90: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:373 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12E92: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:373 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12E95: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:374 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12E97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:374 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12E97.
    case 0xC12E99: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:374 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12E9A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:374 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12EF4.
    case 0xC12E9B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:374 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12E9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1244C-jp.asm:374 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12E9C.
    case 0xC12E9E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:374 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12E9F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:375 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC12EA1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:375 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC12EA3: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C1/C1244C-jp.asm:375 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC12EA5: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C1/C1244C-jp.asm:375 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC12EA7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:375 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC12EA9: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:376 BEQ @UNKNOWN41
    case 0xC12EAB: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C-jp.asm:377 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12EAD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:377 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12EAF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:377 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12EB1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:377 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12EB3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:378 JSL DISPLAY_TEXT
    case 0xC12EB5: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:380 LDA #4
    case 0xC12EB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:380 LDA #4
    // Overlapping static entry reached from 0xC12EB9.
    case 0xC12EBB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:381 STA @VIRTUAL02
    case 0xC12EBC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:382 STA @LOCAL05
    case 0xC12EBE: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:383 JMP @UNKNOWN14
    case 0xC12EC0: cpu.execute_instruction<0x4C>(0x002CCF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:385 LDA #.LOWORD(-1)
    case 0xC12EC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:385 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12EC3.
    case 0xC12EC5: cpu.execute_instruction<0xFF>(0x61F48D, 4); return true;
    // src/unknown/C1/C1244C-jp.asm:386 STA PAGINATION_ANIMATION_FRAME
    case 0xC12EC6: cpu.execute_instruction<0x8D>(0x0061F4, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C-jp.asm:387 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC12EC9: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C-jp.asm:387 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC12ECB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:387 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC12ECD: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:387 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC12ECF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:388 LDA @LOCAL07
    case 0xC12ED1: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:389 CLC
    case 0xC12ED3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C-jp.asm:390 ADC #window_stats::argument_memory
    case 0xC12ED4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:390 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC12ED4.
    case 0xC12ED6: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:391 TAY
    case 0xC12ED7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C1244C-jp.asm:392 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC12ED8: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:392 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC12EDA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C1/C1244C-jp.asm:392 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC12EDD: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C1/C1244C-jp.asm:392 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC12EDF: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C1/C1244C-jp.asm:393 LDX @LOCAL04
    case 0xC12EE2: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C-jp.asm:394 TXA
    case 0xC12EE4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1244C-jp.asm:395 END_C_FUNCTION
    case 0xC12EE5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1244C-jp.asm:395 END_C_FUNCTION
    case 0xC12EE6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12BD5.asm (unresolved).
bool execute_unresolved_c1_c12bd5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C12BD5.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC132DB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C12BD5.asm:4 CMP #$0000
    case 0xC132DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12BD5.asm:4 CMP #$0000
    // Overlapping static entry reached from 0xC132DD.
    case 0xC132DF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12BD5.asm:5 BNE @UNKNOWN0
    case 0xC132E0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C1/C12BD5.asm:6 LDA CURRENT_FOCUS_WINDOW
    case 0xC132E2: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C1/C12BD5.asm:8 ASL
    case 0xC132E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C12BD5.asm:9 TAX
    case 0xC132E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12BD5.asm:10 LDA OPEN_WINDOW_TABLE,X
    case 0xC132E7: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C1/C12BD5.asm:11 LDY #.SIZEOF(window_stats)
    case 0xC132EA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C1/C12BD5.asm:11 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC132EA.
    case 0xC132EC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C12BD5.asm:12 JSL MULT168
    case 0xC132ED: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C12BD5.asm:13 TAX
    case 0xC132F1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12BD5.asm:14 LDA WINDOW_STATS+window_stats::current_option,X
    case 0xC132F2: cpu.execute_instruction<0xBD>(0x0089ED, 3); return true;
    // src/unknown/C1/C12BD5.asm:15 JSR UNKNOWN_C1138D
    case 0xC132F5: cpu.execute_instruction<0x20>(0x0019B4, 3); return true;
    // src/unknown/C1/C12BD5.asm:16 RTS
    case 0xC132F8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12BF3.asm (unresolved).
bool execute_unresolved_c1_c12bf3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12BF3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC132F9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12BF3.asm:6 END_STACK_VARS
    case 0xC132FB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12BF3.asm:6 END_STACK_VARS
    case 0xC132FC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12BF3.asm:6 END_STACK_VARS
    case 0xC132FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12BF3.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC132FD.
    case 0xC132FF: cpu.execute_instruction<0xFF>(0x03A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12BF3.asm:6 END_STACK_VARS
    case 0xC13300: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C12BF3.asm:7 LDA #3
    case 0xC13301: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C12BF3.asm:7 LDA #3
    // Overlapping static entry reached from 0xC13301.
    case 0xC13303: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C12BF3.asm:8 JSR UNKNOWN_C10FEA
    case 0xC13304: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    case 0xC13307: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x00E432, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    // Overlapping static entry reached from 0xC13307.
    case 0xC13309: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    case 0xC1330A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    // Overlapping static entry reached from 0xC13309.
    case 0xC1330B: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    case 0xC1330C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    // Overlapping static entry reached from 0xC1330B.
    case 0xC1330D: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    // Overlapping static entry reached from 0xC1330C.
    case 0xC1330E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    case 0xC1330F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C12BF3.asm:10 BRA @UNKNOWN3
    case 0xC13311: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C1/C12BF3.asm:12 INC @VIRTUAL06
    case 0xC13313: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C12BF3.asm:13 INC @VIRTUAL06
    case 0xC13315: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C12BF3.asm:14 JSR UNKNOWN_C10D60
    case 0xC13317: cpu.execute_instruction<0x20>(0x0012AE, 3); return true;
    // src/unknown/C1/C12BF3.asm:15 LDX #1
    case 0xC1331A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C12BF3.asm:15 LDX #1
    // Overlapping static entry reached from 0xC1331A.
    case 0xC1331C: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12BF3.asm:16 STX @LOCAL00
    case 0xC1331D: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12BF3.asm:17 BRA @UNKNOWN2
    case 0xC1331F: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C12BF3.asm:19 JSL WINDOW_TICK
    case 0xC13321: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C1/C12BF3.asm:21 LDX @LOCAL00
    case 0xC13325: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C12BF3.asm:22 TXA
    case 0xC13327: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12BF3.asm:23 DEX
    case 0xC13328: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C12BF3.asm:24 STX @LOCAL00
    case 0xC13329: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12BF3.asm:25 CMP #0
    case 0xC1332B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12BF3.asm:25 CMP #0
    // Overlapping static entry reached from 0xC1332B.
    case 0xC1332D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12BF3.asm:26 BNE @UNKNOWN1
    case 0xC1332E: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/unknown/C1/C12BF3.asm:28 LDA [@VIRTUAL06]
    case 0xC13330: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C12BF3.asm:29 BNE @UNKNOWN0
    case 0xC13332: cpu.execute_instruction<0xD0>(0x0000DF, 2); return true;
    // src/unknown/C1/C12BF3.asm:30 LDA #0
    case 0xC13334: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C12BF3.asm:30 LDA #0
    // Overlapping static entry reached from 0xC13334.
    case 0xC13336: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C12BF3.asm:31 JSR UNKNOWN_C10FEA
    case 0xC13337: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12BF3.asm:32 END_C_FUNCTION
    case 0xC1333A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C12BF3.asm:32 END_C_FUNCTION
    case 0xC1333B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12C36.asm (unresolved).
bool execute_unresolved_c1_c12c36_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12C36.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1333C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12C36.asm:7 END_STACK_VARS
    case 0xC1333E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12C36.asm:7 END_STACK_VARS
    case 0xC1333F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12C36.asm:7 END_STACK_VARS
    case 0xC13340: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12C36.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC13340.
    case 0xC13342: cpu.execute_instruction<0xFF>(0x03A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12C36.asm:7 END_STACK_VARS
    case 0xC13343: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:8 LDA #3
    case 0xC13344: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C12C36.asm:8 LDA #3
    // Overlapping static entry reached from 0xC13344.
    case 0xC13346: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C12C36.asm:9 JSR UNKNOWN_C10FEA
    case 0xC13347: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    case 0xC1334A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000046, 2); else cpu.execute_instruction<0xA9>(0x00E446, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    // Overlapping static entry reached from 0xC1334A.
    case 0xC1334C: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    case 0xC1334D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    // Overlapping static entry reached from 0xC1334C.
    case 0xC1334E: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    case 0xC1334F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    // Overlapping static entry reached from 0xC1334E.
    case 0xC13350: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    // Overlapping static entry reached from 0xC1334F.
    case 0xC13351: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    case 0xC13352: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C12C36.asm:11 LDY #0
    case 0xC13354: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C12C36.asm:11 LDY #0
    // Overlapping static entry reached from 0xC13354.
    case 0xC13356: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C12C36.asm:12 STY @LOCAL01
    case 0xC13357: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12C36.asm:13 BRA @UNKNOWN3
    case 0xC13359: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C1/C12C36.asm:15 LDA [@VIRTUAL06]
    case 0xC1335B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C12C36.asm:16 INC @VIRTUAL06
    case 0xC1335D: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C12C36.asm:17 INC @VIRTUAL06
    case 0xC1335F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C12C36.asm:18 JSR UNKNOWN_C10D60
    case 0xC13361: cpu.execute_instruction<0x20>(0x0012AE, 3); return true;
    // src/unknown/C1/C12C36.asm:19 LDX #1
    case 0xC13364: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C12C36.asm:19 LDX #1
    // Overlapping static entry reached from 0xC13364.
    case 0xC13366: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12C36.asm:20 STX @LOCAL00
    case 0xC13367: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:21 BRA @UNKNOWN2
    case 0xC13369: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C12C36.asm:23 JSL WINDOW_TICK
    case 0xC1336B: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C1/C12C36.asm:25 LDX @LOCAL00
    case 0xC1336F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:26 TXA
    case 0xC13371: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:27 DEX
    case 0xC13372: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:28 STX @LOCAL00
    case 0xC13373: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:29 CMP #0
    case 0xC13375: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12C36.asm:29 CMP #0
    // Overlapping static entry reached from 0xC13375.
    case 0xC13377: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12C36.asm:30 BNE @UNKNOWN1
    case 0xC13378: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/unknown/C1/C12C36.asm:31 LDY @LOCAL01
    case 0xC1337A: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C12C36.asm:32 INY
    case 0xC1337C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:33 STY @LOCAL01
    case 0xC1337D: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12C36.asm:35 CPY #4
    case 0xC1337F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/unknown/C1/C12C36.asm:35 CPY #4
    // Overlapping static entry reached from 0xC1337F.
    case 0xC13381: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C12C36.asm:36 BCC @UNKNOWN0
    case 0xC13382: cpu.execute_instruction<0x90>(0x0000D7, 2); return true;
    // src/unknown/C1/C12C36.asm:37 LDX #8
    case 0xC13384: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C1/C12C36.asm:37 LDX #8
    // Overlapping static entry reached from 0xC13384.
    case 0xC13386: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12C36.asm:38 STX @LOCAL00
    case 0xC13387: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:39 BRA @UNKNOWN5
    case 0xC13389: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C12C36.asm:41 JSL UNKNOWN_C12E42
    case 0xC1338B: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/unknown/C1/C12C36.asm:43 LDX @LOCAL00
    case 0xC1338F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:44 TXA
    case 0xC13391: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:45 DEX
    case 0xC13392: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:46 STX @LOCAL00
    case 0xC13393: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:47 CMP #0
    case 0xC13395: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12C36.asm:47 CMP #0
    // Overlapping static entry reached from 0xC13395.
    case 0xC13397: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12C36.asm:48 BNE @UNKNOWN4
    case 0xC13398: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/unknown/C1/C12C36.asm:49 LDY #0
    case 0xC1339A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C12C36.asm:49 LDY #0
    // Overlapping static entry reached from 0xC1339A.
    case 0xC1339C: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C12C36.asm:50 STY @LOCAL01
    case 0xC1339D: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12C36.asm:51 BRA @UNKNOWN9
    case 0xC1339F: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C1/C12C36.asm:53 LDA [@VIRTUAL06]
    case 0xC133A1: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C12C36.asm:54 INC @VIRTUAL06
    case 0xC133A3: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C12C36.asm:55 INC @VIRTUAL06
    case 0xC133A5: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C12C36.asm:56 JSR UNKNOWN_C10D60
    case 0xC133A7: cpu.execute_instruction<0x20>(0x0012AE, 3); return true;
    // src/unknown/C1/C12C36.asm:57 LDX #1
    case 0xC133AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C12C36.asm:57 LDX #1
    // Overlapping static entry reached from 0xC133AA.
    case 0xC133AC: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12C36.asm:58 STX @LOCAL00
    case 0xC133AD: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:59 BRA @UNKNOWN8
    case 0xC133AF: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C12C36.asm:61 JSL WINDOW_TICK
    case 0xC133B1: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/unknown/C1/C12C36.asm:63 LDX @LOCAL00
    case 0xC133B5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:64 TXA
    case 0xC133B7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:65 DEX
    case 0xC133B8: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:66 STX @LOCAL00
    case 0xC133B9: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:67 CMP #0
    case 0xC133BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12C36.asm:67 CMP #0
    // Overlapping static entry reached from 0xC133BB.
    case 0xC133BD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12C36.asm:68 BNE @UNKNOWN7
    case 0xC133BE: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/unknown/C1/C12C36.asm:69 LDY @LOCAL01
    case 0xC133C0: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C12C36.asm:70 INY
    case 0xC133C2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:71 STY @LOCAL01
    case 0xC133C3: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12C36.asm:73 CPY #5
    case 0xC133C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000005, 2); else cpu.execute_instruction<0xC0>(0x000005, 3); return true;
    // src/unknown/C1/C12C36.asm:73 CPY #5
    // Overlapping static entry reached from 0xC133C5.
    case 0xC133C7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C12C36.asm:74 BCC @UNKNOWN6
    case 0xC133C8: cpu.execute_instruction<0x90>(0x0000D7, 2); return true;
    // src/unknown/C1/C12C36.asm:75 LDA #0
    case 0xC133CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C12C36.asm:75 LDA #0
    // Overlapping static entry reached from 0xC133CA.
    case 0xC133CC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C12C36.asm:76 JSR UNKNOWN_C10FEA
    case 0xC133CD: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12C36.asm:77 END_C_FUNCTION
    case 0xC133D0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C12C36.asm:77 END_C_FUNCTION
    case 0xC133D1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12CCC.asm (unresolved).
bool execute_unresolved_c1_c12ccc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12CCC.asm:3 BEGIN_C_FUNCTION
    case 0xC133D2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    case 0xC133D4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    case 0xC133D5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    case 0xC133D6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    case 0xC133D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC133D7.
    case 0xC133D9: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    case 0xC133DA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    case 0xC133DB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:9 TAY
    case 0xC133DC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:10 STY @LOCAL01
    case 0xC133DD: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12CCC.asm:11 LDX #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC133DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000098, 2); else cpu.execute_instruction<0xA2>(0x008C98, 3); return true;
    // src/unknown/C1/C12CCC.asm:11 LDX #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC133DF.
    case 0xC133E1: cpu.execute_instruction<0x8C>(0x0010A9, 3); return true;
    // src/unknown/C1/C12CCC.asm:12 LDA #10000
    case 0xC133E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x002710, 3); return true;
    // src/unknown/C1/C12CCC.asm:12 LDA #10000
    // Overlapping static entry reached from 0xC133E2.
    case 0xC133E4: cpu.execute_instruction<0x27>(0x000085, 2); return true;
    // src/unknown/C1/C12CCC.asm:13 STA @LOCAL00
    case 0xC133E5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12CCC.asm:13 STA @LOCAL00
    // Overlapping static entry reached from 0xC133E4.
    case 0xC133E6: cpu.execute_instruction<0x0E>(0x002D80, 3); return true;
    // src/unknown/C1/C12CCC.asm:14 BRA @UNKNOWN1
    case 0xC133E7: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C1/C12CCC.asm:16 PHA
    case 0xC133E9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:17 LDY @LOCAL01
    case 0xC133EA: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C12CCC.asm:18 TYA
    case 0xC133EC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:19 PLY
    case 0xC133ED: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:20 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC133EE: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C1/C12CCC.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC133F2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C12CCC.asm:22 CLC
    case 0xC133F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:23 ADC #48
    case 0xC133F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x009D30, 3); return true;
    // src/unknown/C1/C12CCC.asm:24 STA __BSS_START__,X
    case 0xC133F7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C12CCC.asm:24 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC133F5.
    case 0xC133F8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C12CCC.asm:25 INX
    case 0xC133FA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC133FB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C12CCC.asm:27 LDA @LOCAL00
    case 0xC133FD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12CCC.asm:28 PHA
    case 0xC133FF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:29 LDY @LOCAL01
    case 0xC13400: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C12CCC.asm:30 TYA
    case 0xC13402: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:31 PLY
    case 0xC13403: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:32 JSL MODULUS16
    case 0xC13404: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/unknown/C1/C12CCC.asm:33 TAY
    case 0xC13408: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:34 STY @LOCAL01
    case 0xC13409: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12CCC.asm:35 LDY #10
    case 0xC1340B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C1/C12CCC.asm:35 LDY #10
    // Overlapping static entry reached from 0xC1340B.
    case 0xC1340D: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C12CCC.asm:36 LDA @LOCAL00
    case 0xC1340E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12CCC.asm:37 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC13410: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C1/C12CCC.asm:38 STA @LOCAL00
    case 0xC13414: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12CCC.asm:40 CMP #0
    case 0xC13416: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12CCC.asm:40 CMP #0
    // Overlapping static entry reached from 0xC13416.
    case 0xC13418: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12CCC.asm:41 BNE @UNKNOWN0
    case 0xC13419: cpu.execute_instruction<0xD0>(0x0000CE, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12CCC.asm:42 END_C_FUNCTION
    case 0xC1341B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C12CCC.asm:42 END_C_FUNCTION
    case 0xC1341C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12D17.asm (unresolved).
bool execute_unresolved_c1_c12d17_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12D17.asm:3 BEGIN_C_FUNCTION
    case 0xC13444: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    case 0xC13446: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    case 0xC13447: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    case 0xC13448: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    case 0xC13449: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC13449.
    case 0xC1344B: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    case 0xC1344C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    case 0xC1344D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:9 STA @VIRTUAL04
    case 0xC1344E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C12D17.asm:9 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1344B.
    case 0xC1344F: cpu.execute_instruction<0x04>(0x0000AD, 2); return true;
    // src/unknown/C1/C12D17.asm:10 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC13450: cpu.execute_instruction<0xAD>(0x00994C, 3); return true;
    // src/unknown/C1/C12D17.asm:10 LDA HPPP_METER_FLIPOUT_MODE
    // Overlapping static entry reached from 0xC1344F.
    case 0xC13451: cpu.execute_instruction<0x4C>(0x00D099, 3); return true;
    // src/unknown/C1/C12D17.asm:11 BNE @UNKNOWN4
    case 0xC13453: cpu.execute_instruction<0xD0>(0x000063, 2); return true;
    // src/unknown/C1/C12D17.asm:12 LDA @VIRTUAL04
    case 0xC13455: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C12D17.asm:13 BEQ @UNKNOWN4
    case 0xC13457: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/unknown/C1/C12D17.asm:14 LDA #0
    case 0xC13459: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:14 LDA #0
    // Overlapping static entry reached from 0xC13459.
    case 0xC1345B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C12D17.asm:15 STA @VIRTUAL02
    case 0xC1345C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C12D17.asm:16 BRA @UNKNOWN1
    case 0xC1345E: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C1/C12D17.asm:18 LDA @VIRTUAL02
    case 0xC13460: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12D17.asm:19 ASL
    case 0xC13462: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:20 TAY
    case 0xC13463: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:21 STY @LOCAL01
    case 0xC13464: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:22 LDA @VIRTUAL02
    case 0xC13466: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12D17.asm:23 LDY #.SIZEOF(char_struct)
    case 0xC13468: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C12D17.asm:23 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC13468.
    case 0xC1346A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C12D17.asm:24 JSL MULT168
    case 0xC1346B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C12D17.asm:25 STA @LOCAL00
    case 0xC1346F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12D17.asm:26 CLC
    case 0xC13471: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:27 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_hp_target
    case 0xC13472: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C5, 2); else cpu.execute_instruction<0x69>(0x009CC5, 3); return true;
    // src/unknown/C1/C12D17.asm:27 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_hp_target
    // Overlapping static entry reached from 0xC13472.
    case 0xC13474: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/unknown/C1/C12D17.asm:28 TAX
    case 0xC13475: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:29 LDA __BSS_START__,X
    case 0xC13476: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:29 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC13474.
    case 0xC13477: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C12D17.asm:30 LDY @LOCAL01
    case 0xC13479: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:31 STA HPPP_METER_FLIPOUT_MODE_HP_BACKUPS,Y
    case 0xC1347B: cpu.execute_instruction<0x99>(0x00994E, 3); return true;
    // src/unknown/C1/C12D17.asm:32 LDA #999
    case 0xC1347E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E7, 2); else cpu.execute_instruction<0xA9>(0x0003E7, 3); return true;
    // src/unknown/C1/C12D17.asm:32 LDA #999
    // Overlapping static entry reached from 0xC1347E.
    case 0xC13480: cpu.execute_instruction<0x03>(0x00009D, 2); return true;
    // src/unknown/C1/C12D17.asm:33 STA __BSS_START__,X
    case 0xC13481: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:33 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC13480.
    case 0xC13482: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C12D17.asm:34 LDA @LOCAL00
    case 0xC13484: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12D17.asm:35 TAX
    case 0xC13486: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:36 LDA #999
    case 0xC13487: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E7, 2); else cpu.execute_instruction<0xA9>(0x0003E7, 3); return true;
    // src/unknown/C1/C12D17.asm:36 LDA #999
    // Overlapping static entry reached from 0xC13487.
    case 0xC13489: cpu.execute_instruction<0x03>(0x00009D, 2); return true;
    // src/unknown/C1/C12D17.asm:37 STA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC1348A: cpu.execute_instruction<0x9D>(0x009CC3, 3); return true;
    // src/unknown/C1/C12D17.asm:37 STA PARTY_CHARACTERS+char_struct::current_hp,X
    // Overlapping static entry reached from 0xC13489.
    case 0xC1348B: cpu.execute_instruction<0xC3>(0x00009C, 2); return true;
    // src/unknown/C1/C12D17.asm:38 LDA @LOCAL00
    case 0xC1348D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12D17.asm:39 CLC
    case 0xC1348F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:40 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_pp_target
    case 0xC13490: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CB, 2); else cpu.execute_instruction<0x69>(0x009CCB, 3); return true;
    // src/unknown/C1/C12D17.asm:40 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_pp_target
    // Overlapping static entry reached from 0xC13490.
    case 0xC13492: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/unknown/C1/C12D17.asm:41 TAX
    case 0xC13493: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:42 LDA __BSS_START__,X
    case 0xC13494: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:42 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC13492.
    case 0xC13495: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C12D17.asm:43 STA HPPP_METER_FLIPOUT_MODE_PP_BACKUPS,Y
    case 0xC13497: cpu.execute_instruction<0x99>(0x009956, 3); return true;
    // src/unknown/C1/C12D17.asm:44 LDA #0
    case 0xC1349A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:44 LDA #0
    // Overlapping static entry reached from 0xC1349A.
    case 0xC1349C: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C1/C12D17.asm:45 STA __BSS_START__,X
    case 0xC1349D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:46 LDA @LOCAL00
    case 0xC134A0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12D17.asm:47 TAX
    case 0xC134A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:48 STZ PARTY_CHARACTERS+char_struct::current_pp,X
    case 0xC134A3: cpu.execute_instruction<0x9E>(0x009CC9, 3); return true;
    // src/unknown/C1/C12D17.asm:49 INC @VIRTUAL02
    case 0xC134A6: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C12D17.asm:51 LDA #PLAYER_CHAR_COUNT
    case 0xC134A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C12D17.asm:51 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC134A8.
    case 0xC134AA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C12D17.asm:52 CLC
    case 0xC134AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:53 SBC @VIRTUAL02
    case 0xC134AC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C12D17.asm:54 BRANCHGTS @UNKNOWN0
    case 0xC134AE: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C12D17.asm:54 BRANCHGTS @UNKNOWN0
    case 0xC134B0: cpu.execute_instruction<0x10>(0x0000AE, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C12D17.asm:54 BRANCHGTS @UNKNOWN0
    case 0xC134B2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C12D17.asm:54 BRANCHGTS @UNKNOWN0
    case 0xC134B4: cpu.execute_instruction<0x30>(0x0000AA, 2); return true;
    // src/unknown/C1/C12D17.asm:55 BRA @UNKNOWN8
    case 0xC134B6: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/unknown/C1/C12D17.asm:57 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC134B8: cpu.execute_instruction<0xAD>(0x00994C, 3); return true;
    // src/unknown/C1/C12D17.asm:58 BEQ @UNKNOWN8
    case 0xC134BB: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C1/C12D17.asm:59 LDA @VIRTUAL04
    case 0xC134BD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C12D17.asm:60 BNE @UNKNOWN8
    case 0xC134BF: cpu.execute_instruction<0xD0>(0x000036, 2); return true;
    // src/unknown/C1/C12D17.asm:61 LDA #0
    case 0xC134C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:61 LDA #0
    // Overlapping static entry reached from 0xC134C1.
    case 0xC134C3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C12D17.asm:62 STA @LOCAL01
    case 0xC134C4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:63 BRA @UNKNOWN6
    case 0xC134C6: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C1/C12D17.asm:65 LDA @LOCAL01
    case 0xC134C8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:66 LDY #.SIZEOF(char_struct)
    case 0xC134CA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C12D17.asm:66 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC134CA.
    case 0xC134CC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C12D17.asm:67 JSL MULT168
    case 0xC134CD: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C12D17.asm:68 TAY
    case 0xC134D1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:69 LDA @LOCAL01
    case 0xC134D2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:70 ASL
    case 0xC134D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:71 TAX
    case 0xC134D5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:72 LDA HPPP_METER_FLIPOUT_MODE_HP_BACKUPS,X
    case 0xC134D6: cpu.execute_instruction<0xBD>(0x00994E, 3); return true;
    // src/unknown/C1/C12D17.asm:73 STA PARTY_CHARACTERS+char_struct::current_hp_target,Y
    case 0xC134D9: cpu.execute_instruction<0x99>(0x009CC5, 3); return true;
    // src/unknown/C1/C12D17.asm:74 LDA HPPP_METER_FLIPOUT_MODE_PP_BACKUPS,X
    case 0xC134DC: cpu.execute_instruction<0xBD>(0x009956, 3); return true;
    // src/unknown/C1/C12D17.asm:75 STA PARTY_CHARACTERS+char_struct::current_pp_target,Y
    case 0xC134DF: cpu.execute_instruction<0x99>(0x009CCB, 3); return true;
    // src/unknown/C1/C12D17.asm:76 LDA @LOCAL01
    case 0xC134E2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:77 INC
    case 0xC134E4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:78 STA @LOCAL01
    case 0xC134E5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:80 STA @VIRTUAL02
    case 0xC134E7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C12D17.asm:81 LDA #PLAYER_CHAR_COUNT
    case 0xC134E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C12D17.asm:81 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC134E9.
    case 0xC134EB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C12D17.asm:82 CLC
    case 0xC134EC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:83 SBC @VIRTUAL02
    case 0xC134ED: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C12D17.asm:84 BRANCHGTS @UNKNOWN5
    case 0xC134EF: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C12D17.asm:84 BRANCHGTS @UNKNOWN5
    case 0xC134F1: cpu.execute_instruction<0x10>(0x0000D5, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C12D17.asm:84 BRANCHGTS @UNKNOWN5
    case 0xC134F3: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C12D17.asm:84 BRANCHGTS @UNKNOWN5
    case 0xC134F5: cpu.execute_instruction<0x30>(0x0000D1, 2); return true;
    // src/unknown/C1/C12D17.asm:86 LDA @VIRTUAL04
    case 0xC134F7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C12D17.asm:87 STA HPPP_METER_FLIPOUT_MODE
    case 0xC134F9: cpu.execute_instruction<0x8D>(0x00994C, 3); return true;
    // src/unknown/C1/C12D17.asm:88 JSL RESUME_MUSIC
    case 0xC134FC: cpu.execute_instruction<0x22>(0xC13435, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12D17.asm:89 END_C_FUNCTION
    case 0xC13500: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C12D17.asm:89 END_C_FUNCTION
    case 0xC13501: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12E42.asm (unresolved).
bool execute_unresolved_c1_c12e42_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C12E42.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1355E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C12E42.asm:4 JSL HP_PP_ROLLER
    case 0xC13560: cpu.execute_instruction<0x22>(0xC20F3B, 4); return true;
    // src/unknown/C1/C12E42.asm:5 LDA HPPP_METER_AREA_NEEDS_UPDATE
    case 0xC13564: cpu.execute_instruction<0xAD>(0x009941, 3); return true;
    // src/unknown/C1/C12E42.asm:6 BEQ @UNKNOWN0
    case 0xC13567: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C1/C12E42.asm:7 JSR UNKNOWN_C1078D
    case 0xC13569: cpu.execute_instruction<0x20>(0x000974, 3); return true;
    // src/unknown/C1/C12E42.asm:8 STZ HPPP_METER_AREA_NEEDS_UPDATE
    case 0xC1356C: cpu.execute_instruction<0x9C>(0x009941, 3); return true;
    // src/unknown/C1/C12E42.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC1356F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C12E42.asm:10 LDA #$0001
    case 0xC13571: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C1/C12E42.asm:11 STA UPLOAD_HPPP_METER_TILES
    case 0xC13573: cpu.execute_instruction<0x8D>(0x00991C, 3); return true;
    // src/unknown/C1/C12E42.asm:11 STA UPLOAD_HPPP_METER_TILES
    // Overlapping static entry reached from 0xC13571.
    case 0xC13574: cpu.execute_instruction<0x1C>(0x002299, 3); return true;
    // src/unknown/C1/C12E42.asm:13 JSL UPDATE_HPPP_METER_TILES
    case 0xC13576: cpu.execute_instruction<0x22>(0xC2124C, 4); return true;
    // src/unknown/C1/C12E42.asm:13 JSL UPDATE_HPPP_METER_TILES
    // Overlapping static entry reached from 0xC13574.
    case 0xC13577: cpu.execute_instruction<0x4C>(0x00C212, 3); return true;
    // src/unknown/C1/C12E42.asm:14 JSL UNKNOWN_C1004E
    case 0xC1357A: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/unknown/C1/C12E42.asm:15 RTL
    case 0xC1357E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1339E.asm (unresolved).
bool execute_unresolved_c1_c1339e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C1339E.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC13A73: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1339E.asm:4 LDX #$0002
    case 0xC13A75: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C1/C1339E.asm:4 LDX #$0002
    // Overlapping static entry reached from 0xC13A75.
    case 0xC13A77: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1339E.asm:5 JSR INVENTORY_GET_ITEM_NAME
    case 0xC13A78: cpu.execute_instruction<0x20>(0x009930, 3); return true;
    // src/unknown/C1/C1339E.asm:6 RTL
    case 0xC13A7B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C133A7.asm (unresolved).
bool execute_unresolved_c1_c133a7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C133A7.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC13A7C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C133A7.asm:4 LDX #$002C
    case 0xC13A7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00002C, 2); else cpu.execute_instruction<0xA2>(0x00002C, 3); return true;
    // src/unknown/C1/C133A7.asm:4 LDX #$002C
    // Overlapping static entry reached from 0xC13A7E.
    case 0xC13A80: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C133A7.asm:5 JSR INVENTORY_GET_ITEM_NAME
    case 0xC13A81: cpu.execute_instruction<0x20>(0x009930, 3); return true;
    // src/unknown/C1/C133A7.asm:6 RTL
    case 0xC13A84: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C14012.asm (unresolved).
bool execute_unresolved_c1_c14012_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C14012.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14454: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    case 0xC14456: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    case 0xC14457: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    case 0xC14458: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC14458.
    case 0xC1445A: cpu.execute_instruction<0xFF>(0x6CAE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    case 0xC1445B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C14012.asm:6 LDX NEXT_TEXT_STACK_FRAME
    case 0xC1445C: cpu.execute_instruction<0xAE>(0x009A6C, 3); return true;
    // src/unknown/C1/C14012.asm:6 LDX NEXT_TEXT_STACK_FRAME
    // Overlapping static entry reached from 0xC1445A.
    case 0xC1445E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C14012.asm:7 INX
    case 0xC1445F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C14012.asm:8 STX NEXT_TEXT_STACK_FRAME
    case 0xC14460: cpu.execute_instruction<0x8E>(0x009A6C, 3); return true;
    // src/unknown/C1/C14012.asm:9 STX @VIRTUAL02
    case 0xC14463: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C14012.asm:10 LDA #$000A
    case 0xC14465: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C14012.asm:10 LDA #$000A
    // Overlapping static entry reached from 0xC14465.
    case 0xC14467: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C14012.asm:11 CLC
    case 0xC14468: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C14012.asm:12 SBC @VIRTUAL02
    case 0xC14469: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C14012.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC1446B: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C14012.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC1446D: cpu.execute_instruction<0x10>(0x000007, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C14012.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC1446F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C14012.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC14471: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C1/C14012.asm:14 STZ NEXT_TEXT_STACK_FRAME
    case 0xC14473: cpu.execute_instruction<0x9C>(0x009A6C, 3); return true;
    // src/unknown/C1/C14012.asm:16 LDA NEXT_TEXT_STACK_FRAME
    case 0xC14476: cpu.execute_instruction<0xAD>(0x009A6C, 3); return true;
    // include/macros.asm:638 STA scratch
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC14479: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:639 ASL
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC1447B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:640 ADC scratch
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC1447C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:641 ASL
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC1447E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:642 ASL
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC1447F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:643 ADC scratch
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC14480: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:644 ASL
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC14482: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:645 ADC scratch
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC14483: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C14012.asm:18 CLC
    case 0xC14485: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C14012.asm:19 ADC #.LOWORD(DISPLAY_TEXT_STATES)
    case 0xC14486: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005E, 2); else cpu.execute_instruction<0x69>(0x00995E, 3); return true;
    // src/unknown/C1/C14012.asm:19 ADC #.LOWORD(DISPLAY_TEXT_STATES)
    // Overlapping static entry reached from 0xC14486.
    case 0xC14488: cpu.execute_instruction<0x99>(0x00602B, 3); return true;
    // src/unknown/C1/C14012.asm:20 PLD
    case 0xC14489: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C1/C14012.asm:21 RTS
    case 0xC1448A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C14049.asm (unresolved).
bool execute_unresolved_c1_c14049_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C14049.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1448B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    case 0xC1448D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    case 0xC1448E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    case 0xC1448F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC1448F.
    case 0xC14491: cpu.execute_instruction<0xFF>(0x6CAE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    case 0xC14492: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C14049.asm:6 LDX NEXT_TEXT_STACK_FRAME
    case 0xC14493: cpu.execute_instruction<0xAE>(0x009A6C, 3); return true;
    // src/unknown/C1/C14049.asm:6 LDX NEXT_TEXT_STACK_FRAME
    // Overlapping static entry reached from 0xC14491.
    case 0xC14495: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C14049.asm:7 DEX
    case 0xC14496: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C14049.asm:8 STX NEXT_TEXT_STACK_FRAME
    case 0xC14497: cpu.execute_instruction<0x8E>(0x009A6C, 3); return true;
    // src/unknown/C1/C14049.asm:9 STX @VIRTUAL02
    case 0xC1449A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C14049.asm:10 LDA #$000A
    case 0xC1449C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C14049.asm:10 LDA #$000A
    // Overlapping static entry reached from 0xC1449C.
    case 0xC1449E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C14049.asm:11 CLC
    case 0xC1449F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C14049.asm:12 SBC @VIRTUAL02
    case 0xC144A0: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C14049.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC144A2: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C14049.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC144A4: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C14049.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC144A6: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C14049.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC144A8: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/unknown/C1/C14049.asm:14 LDA #$0009
    case 0xC144AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C1/C14049.asm:14 LDA #$0009
    // Overlapping static entry reached from 0xC144AA.
    case 0xC144AC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C14049.asm:15 STA NEXT_TEXT_STACK_FRAME
    case 0xC144AD: cpu.execute_instruction<0x8D>(0x009A6C, 3); return true;
    // src/unknown/C1/C14049.asm:17 PLD
    case 0xC144B0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C1/C14049.asm:18 RTS
    case 0xC144B1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C14070.asm (unresolved).
bool execute_unresolved_c1_c14070_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C14070.asm:3 BEGIN_C_FUNCTION
    case 0xC144B2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    case 0xC144B4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    case 0xC144B5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    case 0xC144B6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    case 0xC144B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC144B7.
    case 0xC144B9: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    case 0xC144BA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    case 0xC144BB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C14070.asm:10 TXY
    case 0xC144BC: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C14070.asm:11 TAX
    case 0xC144BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C14070.asm:12 BRA @UNKNOWN1
    case 0xC144BE: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C1/C14070.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC144C0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C14070.asm:15 LDA __BSS_START__,Y
    case 0xC144C2: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C14070.asm:16 STA @VIRTUAL00
    case 0xC144C5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C14070.asm:17 LDA @LOCAL00
    case 0xC144C7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C14070.asm:18 CMP @VIRTUAL00
    case 0xC144C9: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C1/C14070.asm:19 BNE @UNKNOWN2
    case 0xC144CB: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C1/C14070.asm:20 INX
    case 0xC144CD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C14070.asm:21 INY
    case 0xC144CE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C14070.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC144CF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C14070.asm:24 LDA __BSS_START__,X
    case 0xC144D1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C14070.asm:25 STA @LOCAL00
    case 0xC144D4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C14070.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC144D6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C14070.asm:27 AND #$00FF
    case 0xC144D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C14070.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC144D8.
    case 0xC144DA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C14070.asm:28 BNE @UNKNOWN0
    case 0xC144DB: cpu.execute_instruction<0xD0>(0x0000E3, 2); return true;
    // src/unknown/C1/C14070.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC144DD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C14070.asm:31 LDA __BSS_START__,X
    case 0xC144DF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C14070.asm:32 AND #$00FF
    case 0xC144E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C14070.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC144E2.
    case 0xC144E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C14070.asm:33 STA @VIRTUAL02
    case 0xC144E5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C14070.asm:34 LDA __BSS_START__,Y
    case 0xC144E7: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C14070.asm:35 AND #$00FF
    case 0xC144EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C14070.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC144EA.
    case 0xC144EC: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C1/C14070.asm:36 SEC
    case 0xC144ED: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C14070.asm:37 SBC @VIRTUAL02
    case 0xC144EE: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C14070.asm:38 END_C_FUNCTION
    case 0xC144F0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C14070.asm:38 END_C_FUNCTION
    case 0xC144F1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C15FB1.asm (unresolved).
bool execute_unresolved_c1_c15fb1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C15FB1.asm:3 BEGIN_C_FUNCTION
    case 0xC16230: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    case 0xC16232: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    case 0xC16233: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    case 0xC16234: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    case 0xC16235: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC16235.
    case 0xC16237: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    case 0xC16238: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    case 0xC16239: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:9 STX @VIRTUAL04
    case 0xC1623A: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C15FB1.asm:9 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC16237.
    case 0xC1623B: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C1/C15FB1.asm:10 STA @VIRTUAL02
    case 0xC1623C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C15FB1.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1623B.
    case 0xC1623D: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/C1/C15FB1.asm:11 LDY #0
    case 0xC1623E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C15FB1.asm:11 LDY #0
    // Overlapping static entry reached from 0xC1623E.
    case 0xC16240: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C15FB1.asm:12 BRA @UNKNOWN2
    case 0xC16241: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/unknown/C1/C15FB1.asm:14 TYA
    case 0xC16243: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:15 CLC
    case 0xC16244: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:16 ADC #.LOWORD(GAME_STATE)
    case 0xC16245: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C15FB1.asm:16 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC16245.
    case 0xC16247: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:17 STA @LOCAL00
    case 0xC16248: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C15FB1.asm:18 CLC
    case 0xC1624A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:19 ADC #game_state::unknownB6
    case 0xC1624B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B3, 2); else cpu.execute_instruction<0x69>(0x0000B3, 3); return true;
    // src/unknown/C1/C15FB1.asm:19 ADC #game_state::unknownB6
    // Overlapping static entry reached from 0xC1624B.
    case 0xC1624D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C15FB1.asm:20 TAX
    case 0xC1624E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:21 LDA __BSS_START__,X
    case 0xC1624F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C15FB1.asm:22 AND #$00FF
    case 0xC16252: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C15FB1.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC16252.
    case 0xC16254: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C15FB1.asm:23 BNE @UNKNOWN1
    case 0xC16255: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/unknown/C1/C15FB1.asm:24 LDA @VIRTUAL04
    case 0xC16257: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C15FB1.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC16259: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C15FB1.asm:26 STA __BSS_START__,X
    case 0xC1625B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C15FB1.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC1625E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C15FB1.asm:28 LDA @LOCAL00
    case 0xC16260: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C15FB1.asm:29 TAX
    case 0xC16262: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:30 LDA @VIRTUAL02
    case 0xC16263: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C15FB1.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC16265: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C15FB1.asm:32 STA a:game_state::unknownB8,X
    case 0xC16267: cpu.execute_instruction<0x9D>(0x0000B6, 3); return true;
    // src/unknown/C1/C15FB1.asm:33 BRA @UNKNOWN3
    case 0xC1626A: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C1/C15FB1.asm:35 INY
    case 0xC1626C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:37 CPY #3
    case 0xC1626D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/unknown/C1/C15FB1.asm:37 CPY #3
    // Overlapping static entry reached from 0xC1626D.
    case 0xC1626F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C15FB1.asm:38 BCC @UNKNOWN0
    case 0xC16270: cpu.execute_instruction<0x90>(0x0000D1, 2); return true;
    // src/unknown/C1/C15FB1.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC16272: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C15FB1.asm:41 END_C_FUNCTION
    case 0xC16274: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C15FB1.asm:41 END_C_FUNCTION
    case 0xC16275: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1621F.asm (unresolved).
bool execute_unresolved_c1_c1621f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1621F.asm:3 BEGIN_C_FUNCTION
    case 0xC1649E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    case 0xC164A0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    case 0xC164A1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    case 0xC164A2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    case 0xC164A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC164A3.
    case 0xC164A5: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    case 0xC164A6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    case 0xC164A7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:10 STA @LOCAL01
    case 0xC164A8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1621F.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC164A5.
    case 0xC164A9: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/unknown/C1/C1621F.asm:11 LDA #3
    case 0xC164AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1621F.asm:11 LDA #3
    // Overlapping static entry reached from 0xC164A9.
    case 0xC164AB: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/unknown/C1/C1621F.asm:11 LDA #3
    // Overlapping static entry reached from 0xC164AA.
    case 0xC164AC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1621F.asm:12 CLC
    case 0xC164AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC164AE: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1621F.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC164B1: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1621F.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC164B3: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1621F.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC164B5: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1621F.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC164B7: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/unknown/C1/C1621F.asm:15 TXA
    case 0xC164B9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC164BA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1621F.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC164BC: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/unknown/C1/C1621F.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC164BF: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/unknown/C1/C1621F.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC164C2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1621F.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC164C4: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/unknown/C1/C1621F.asm:21 LDA #.LOWORD(UNKNOWN_C1621F)
    case 0xC164C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00649E, 3); return true;
    // src/unknown/C1/C1621F.asm:21 LDA #.LOWORD(UNKNOWN_C1621F)
    // Overlapping static entry reached from 0xC164C7.
    case 0xC164C9: cpu.execute_instruction<0x64>(0x00004C, 2); return true;
    // src/unknown/C1/C1621F.asm:22 JMP @UNKNOWN3
    case 0xC164CA: cpu.execute_instruction<0x4C>(0x006585, 3); return true;
    // src/unknown/C1/C1621F.asm:22 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC164C9.
    case 0xC164CB: cpu.execute_instruction<0x85>(0x000065, 2); return true;
    // src/unknown/C1/C1621F.asm:24 TXA
    case 0xC164CD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC164CE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC164D0: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C1/C1621F.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC164D2: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C1/C1621F.asm:27 LDY #24
    case 0xC164D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x002218, 3); return true;
    // src/unknown/C1/C1621F.asm:28 JSL ASL32_ENTRY2
    case 0xC164D6: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // src/unknown/C1/C1621F.asm:28 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC164D4.
    case 0xC164D7: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:28 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC164D7.
    case 0xC164D8: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/unknown/C1/C1621F.asm:29 PUSH32 @VIRTUAL06
    case 0xC164DA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/unknown/C1/C1621F.asm:29 PUSH32 @VIRTUAL06
    case 0xC164DC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/unknown/C1/C1621F.asm:29 PUSH32 @VIRTUAL06
    case 0xC164DD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/unknown/C1/C1621F.asm:29 PUSH32 @VIRTUAL06
    case 0xC164DF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:30 LDY #16
    case 0xC164E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/unknown/C1/C1621F.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC164E2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1621F.asm:31 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC164E0.
    case 0xC164E3: cpu.execute_instruction<0x20>(0x0070AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC164E4: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC164E3.
    case 0xC164E6: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC164E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC164E9: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC164EB: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC164ED: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1621F.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC164EF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1621F.asm:34 JSL ASL32_ENTRY2
    case 0xC164F1: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/unknown/C1/C1621F.asm:35 PUSH32 @VIRTUAL06
    case 0xC164F5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/unknown/C1/C1621F.asm:35 PUSH32 @VIRTUAL06
    case 0xC164F7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/unknown/C1/C1621F.asm:35 PUSH32 @VIRTUAL06
    case 0xC164F8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/unknown/C1/C1621F.asm:35 PUSH32 @VIRTUAL06
    case 0xC164FA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:36 LDY #8
    case 0xC164FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/unknown/C1/C1621F.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC164FD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1621F.asm:37 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC164FB.
    case 0xC164FE: cpu.execute_instruction<0x20>(0x006FAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC164FF: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC164FE.
    case 0xC16501: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16502: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16504: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16506: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16508: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1621F.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC1650A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1621F.asm:40 JSL ASL32_ENTRY2
    case 0xC1650C: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16510: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16512: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1621F.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16514: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16516: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1621F.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC16518: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:43 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1651A: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:43 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1651D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1621F.asm:43 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1651F: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:43 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16521: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1621F.asm:43 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16523: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1621F.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC16525: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/unknown/C1/C1621F.asm:45 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16527: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C1621F.asm:45 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16529: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:45 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1652B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/unknown/C1/C1621F.asm:45 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1652D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/unknown/C1/C1621F.asm:45 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1652F: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/unknown/C1/C1621F.asm:45 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16531: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/unknown/C1/C1621F.asm:46 PULL32 @VIRTUAL0A
    case 0xC16533: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/unknown/C1/C1621F.asm:46 PULL32 @VIRTUAL0A
    case 0xC16534: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/unknown/C1/C1621F.asm:46 PULL32 @VIRTUAL0A
    case 0xC16536: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/unknown/C1/C1621F.asm:46 PULL32 @VIRTUAL0A
    case 0xC16537: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16539: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1653B: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC16592.
    case 0xC1653C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1653D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1653F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16541: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16543: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/unknown/C1/C1621F.asm:48 PULL32 @VIRTUAL0A
    case 0xC16545: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/unknown/C1/C1621F.asm:48 PULL32 @VIRTUAL0A
    case 0xC16546: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/unknown/C1/C1621F.asm:48 PULL32 @VIRTUAL0A
    case 0xC16548: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/unknown/C1/C1621F.asm:48 PULL32 @VIRTUAL0A
    case 0xC16549: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/unknown/C1/C1621F.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1654B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C1621F.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1654D: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1654F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/unknown/C1/C1621F.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16551: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/unknown/C1/C1621F.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16553: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/unknown/C1/C1621F.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16555: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16557: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16559: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1621F.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1655B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1655D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1621F.asm:51 JSL DISPLAY_TEXT
    case 0xC1655F: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/unknown/C1/C1621F.asm:52 LDA @LOCAL01
    case 0xC16563: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1621F.asm:53 TAY
    case 0xC16565: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1621F.asm:54 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16566: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:54 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16569: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1621F.asm:54 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1656B: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:54 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1656E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1621F.asm:55 LDA ONGOSUB_OFFSET
    case 0xC16570: cpu.execute_instruction<0xAD>(0x009A89, 3); return true;
    // src/unknown/C1/C1621F.asm:56 ASL
    case 0xC16573: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:57 ASL
    case 0xC16574: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:58 CLC
    case 0xC16575: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:59 ADC @VIRTUAL06
    case 0xC16576: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1621F.asm:60 STA @VIRTUAL06
    case 0xC16578: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1621F.asm:61 STA __BSS_START__,Y
    case 0xC1657A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C1621F.asm:62 LDA @VIRTUAL06+2
    case 0xC1657D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1621F.asm:63 STA __BSS_START__+2,Y
    case 0xC1657F: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C1/C1621F.asm:64 LDA #NULL
    case 0xC16582: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1621F.asm:64 LDA #NULL
    // Overlapping static entry reached from 0xC16582.
    case 0xC16584: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1621F.asm:66 END_C_FUNCTION
    case 0xC16585: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1621F.asm:66 END_C_FUNCTION
    case 0xC16586: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C17796-jp.asm (unresolved).
bool execute_unresolved_c1_c17796_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C17796-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC17A17: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C17796-jp.asm:11 END_STACK_VARS
    case 0xC17A19: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C17796-jp.asm:11 END_STACK_VARS
    case 0xC17A1A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C17796-jp.asm:11 END_STACK_VARS
    case 0xC17A1B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C17796-jp.asm:11 END_STACK_VARS
    case 0xC17A1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C17796-jp.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC17A1C.
    case 0xC17A1E: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C17796-jp.asm:11 END_STACK_VARS
    case 0xC17A1F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C17796-jp.asm:11 END_STACK_VARS
    case 0xC17A20: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C17796-jp.asm:12 TXA
    case 0xC17A21: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C17796-jp.asm:13 STA @LOCAL02
    case 0xC17A22: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C17796-jp.asm:14 LDA #3
    case 0xC17A24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C17796-jp.asm:14 LDA #3
    // Overlapping static entry reached from 0xC17A24.
    case 0xC17A26: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C17796-jp.asm:15 CLC
    case 0xC17A27: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C17796-jp.asm:16 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17A28: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C17796-jp.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC17A2B: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC17A2D: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C17796-jp.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC17A2F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:17 BRANCHLTEQS @UNKNOWN2
    case 0xC17A31: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/unknown/C1/C17796-jp.asm:18 LDA @LOCAL02
    case 0xC17A33: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C17796-jp.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC17A35: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C17796-jp.asm:20 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17A37: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/unknown/C1/C17796-jp.asm:21 STA CC_ARGUMENT_STORAGE,X
    case 0xC17A3A: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/unknown/C1/C17796-jp.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC17A3D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C17796-jp.asm:23 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17A3F: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/unknown/C1/C17796-jp.asm:24 LDA #.LOWORD(UNKNOWN_C17796)
    case 0xC17A42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x007A17, 3); return true;
    // src/unknown/C1/C17796-jp.asm:24 LDA #.LOWORD(UNKNOWN_C17796)
    // Overlapping static entry reached from 0xC17A42.
    case 0xC17A44: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C17796-jp.asm:25 JMP @UNKNOWN3
    case 0xC17A45: cpu.execute_instruction<0x4C>(0x007AF8, 3); return true;
    // src/unknown/C1/C17796-jp.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC17A48: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C1/C17796-jp.asm:28 LDY #24
    case 0xC17A4A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C1/C17796-jp.asm:29 MOVE_INT1632 @LOCAL02, @VIRTUAL06
    case 0xC17A4C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C1/C17796-jp.asm:29 MOVE_INT1632 @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC17A4A.
    case 0xC17A4D: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:29 MOVE_INT1632 @LOCAL02, @VIRTUAL06
    case 0xC17A4E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:29 MOVE_INT1632 @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC17A4D.
    case 0xC17A4F: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C17796-jp.asm:29 MOVE_INT1632 @LOCAL02, @VIRTUAL06
    case 0xC17A50: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C17796-jp.asm:29 MOVE_INT1632 @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC17A4F.
    case 0xC17A51: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C1/C17796-jp.asm:30 JSL ASL32_ENTRY2
    case 0xC17A52: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/unknown/C1/C17796-jp.asm:31 PUSH32 @VIRTUAL06
    case 0xC17A56: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/unknown/C1/C17796-jp.asm:31 PUSH32 @VIRTUAL06
    case 0xC17A58: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/unknown/C1/C17796-jp.asm:31 PUSH32 @VIRTUAL06
    case 0xC17A59: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/unknown/C1/C17796-jp.asm:31 PUSH32 @VIRTUAL06
    case 0xC17A5B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C17796-jp.asm:32 LDY #16
    case 0xC17A5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/unknown/C1/C17796-jp.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC17A5E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C17796-jp.asm:33 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC17A5C.
    case 0xC17A5F: cpu.execute_instruction<0x20>(0x0070AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C17796-jp.asm:34 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC17A60: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C17796-jp.asm:34 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC17A5F.
    case 0xC17A62: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:34 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC17A63: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C17796-jp.asm:34 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC17A65: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C17796-jp.asm:34 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC17A67: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C17796-jp.asm:34 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC17A69: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C17796-jp.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC17A6B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C17796-jp.asm:36 JSL ASL32_ENTRY2
    case 0xC17A6D: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/unknown/C1/C17796-jp.asm:37 PUSH32 @VIRTUAL06
    case 0xC17A71: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/unknown/C1/C17796-jp.asm:37 PUSH32 @VIRTUAL06
    case 0xC17A73: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/unknown/C1/C17796-jp.asm:37 PUSH32 @VIRTUAL06
    case 0xC17A74: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/unknown/C1/C17796-jp.asm:37 PUSH32 @VIRTUAL06
    case 0xC17A76: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C17796-jp.asm:38 LDY #8
    case 0xC17A77: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/unknown/C1/C17796-jp.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC17A79: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C17796-jp.asm:39 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC17A77.
    case 0xC17A7A: cpu.execute_instruction<0x20>(0x006FAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C17796-jp.asm:40 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC17A7B: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C17796-jp.asm:40 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC17A7A.
    case 0xC17A7D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:40 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC17A7E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C17796-jp.asm:40 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC17A80: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C17796-jp.asm:40 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC17A82: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C17796-jp.asm:40 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC17A84: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C17796-jp.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC17A86: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C17796-jp.asm:42 JSL ASL32_ENTRY2
    case 0xC17A88: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C17796-jp.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17A8C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17A8E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C17796-jp.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17A90: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C17796-jp.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17A92: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C17796-jp.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC17A94: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C17796-jp.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC17A96: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC17A99: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C17796-jp.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC17A9B: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C17796-jp.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC17A9D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C17796-jp.asm:45 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC17A9F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C17796-jp.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC17AA1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/unknown/C1/C17796-jp.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17AA3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C17796-jp.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17AA5: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17AA7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/unknown/C1/C17796-jp.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17AA9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/unknown/C1/C17796-jp.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17AAB: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/unknown/C1/C17796-jp.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17AAD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/unknown/C1/C17796-jp.asm:48 PULL32 @VIRTUAL0A
    case 0xC17AAF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/unknown/C1/C17796-jp.asm:48 PULL32 @VIRTUAL0A
    case 0xC17AB0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/unknown/C1/C17796-jp.asm:48 PULL32 @VIRTUAL0A
    case 0xC17AB2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/unknown/C1/C17796-jp.asm:48 PULL32 @VIRTUAL0A
    case 0xC17AB3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/unknown/C1/C17796-jp.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17AB5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C17796-jp.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17AB7: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17AB9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/unknown/C1/C17796-jp.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17ABB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/unknown/C1/C17796-jp.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17ABD: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/unknown/C1/C17796-jp.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17ABF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/unknown/C1/C17796-jp.asm:50 PULL32 @VIRTUAL0A
    case 0xC17AC1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/unknown/C1/C17796-jp.asm:50 PULL32 @VIRTUAL0A
    case 0xC17AC2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/unknown/C1/C17796-jp.asm:50 PULL32 @VIRTUAL0A
    case 0xC17AC4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/unknown/C1/C17796-jp.asm:50 PULL32 @VIRTUAL0A
    case 0xC17AC5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/unknown/C1/C17796-jp.asm:51 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17AC7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C17796-jp.asm:51 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17AC9: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:51 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17ACB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/unknown/C1/C17796-jp.asm:51 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17ACD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/unknown/C1/C17796-jp.asm:51 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17ACF: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/unknown/C1/C17796-jp.asm:51 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17AD1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C17796-jp.asm:52 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL0A
    case 0xC17AD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008B, 2); else cpu.execute_instruction<0xA9>(0x009A8B, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C17796-jp.asm:52 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC17AD3.
    case 0xC17AD5: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:52 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL0A
    case 0xC17AD6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C17796-jp.asm:52 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL0A
    case 0xC17AD8: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C17796-jp.asm:52 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL0A
    case 0xC17AD9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C17796-jp.asm:52 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL0A
    case 0xC17ADB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:52 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL0A
    case 0xC17ADC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C17796-jp.asm:52 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL0A
    case 0xC17ADE: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/unknown/C1/C17796-jp.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC17AE0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C17796-jp.asm:54 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC17AE2: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:54 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC17AE4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C17796-jp.asm:54 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC17AE6: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C17796-jp.asm:54 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC17AE8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C17796-jp.asm:55 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17AEA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C17796-jp.asm:55 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17AEC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C17796-jp.asm:55 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17AEE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C17796-jp.asm:55 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17AF0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C17796-jp.asm:56 JSR UNKNOWN_C113D1
    case 0xC17AF2: cpu.execute_instruction<0x20>(0x001A00, 3); return true;
    // src/unknown/C1/C17796-jp.asm:57 LDA #NULL
    case 0xC17AF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C17796-jp.asm:57 LDA #NULL
    // Overlapping static entry reached from 0xC17AF5.
    case 0xC17AF7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C17796-jp.asm:59 END_C_FUNCTION
    case 0xC17AF8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C17796-jp.asm:59 END_C_FUNCTION
    case 0xC17AF9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C17889.asm (unresolved).
bool execute_unresolved_c1_c17889_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C17889.asm:3 BEGIN_C_FUNCTION
    case 0xC17AFA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    case 0xC17AFC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    case 0xC17AFD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    case 0xC17AFE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    case 0xC17AFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC17AFF.
    case 0xC17B01: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    case 0xC17B02: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    case 0xC17B03: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C17889.asm:11 TXA
    case 0xC17B04: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C17889.asm:12 CMP #1
    case 0xC17B05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C17889.asm:12 CMP #1
    // Overlapping static entry reached from 0xC17B05.
    case 0xC17B07: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C17889.asm:13 BEQ @UNKNOWN0
    case 0xC17B08: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C1/C17889.asm:14 CMP #2
    case 0xC17B0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C17889.asm:14 CMP #2
    // Overlapping static entry reached from 0xC17B0A.
    case 0xC17B0C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C17889.asm:15 BEQ @UNKNOWN1
    case 0xC17B0D: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C1/C17889.asm:16 BRA @UNKNOWN2
    case 0xC17B0F: cpu.execute_instruction<0x80>(0x000045, 2); return true;
    // src/unknown/C1/C17889.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17B11: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/unknown/C1/C17889.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC17B14: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C17889.asm:20 STZ TEXT_NEW_MENU_OPTION_BUFFER,X
    case 0xC17B16: cpu.execute_instruction<0x9E>(0x009A8B, 3); return true;
    // src/unknown/C1/C17889.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC17B19: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C17889.asm:22 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17B1B: cpu.execute_instruction<0x9C>(0x009A7E, 3); return true;
    // src/unknown/C1/C17889.asm:23 LDA #.LOWORD(UNKNOWN_C17796)
    case 0xC17B1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x007A17, 3); return true;
    // src/unknown/C1/C17889.asm:23 LDA #.LOWORD(UNKNOWN_C17796)
    // Overlapping static entry reached from 0xC17B1E.
    case 0xC17B20: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C17889.asm:24 BRA @UNKNOWN3
    case 0xC17B21: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/unknown/C1/C17889.asm:26 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17B23: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/unknown/C1/C17889.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC17B26: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C17889.asm:28 STZ TEXT_NEW_MENU_OPTION_BUFFER,X
    case 0xC17B28: cpu.execute_instruction<0x9E>(0x009A8B, 3); return true;
    // src/unknown/C1/C17889.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC17B2B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC17B2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008B, 2); else cpu.execute_instruction<0xA9>(0x009A8B, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC17B2D.
    case 0xC17B2F: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC17B30: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC17B32: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC17B33: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC17B35: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC17B36: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC17B38: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C17889.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC17B3A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C17889.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B3C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C17889.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B3E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C17889.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B40: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C17889.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17B42: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C17889.asm:33 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC17B44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C17889.asm:33 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC17B44.
    case 0xC17B46: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C17889.asm:33 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC17B47: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C17889.asm:33 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC17B49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C17889.asm:33 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC17B49.
    case 0xC17B4B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C17889.asm:33 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC17B4C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C17889.asm:34 JSR UNKNOWN_C113D1
    case 0xC17B4E: cpu.execute_instruction<0x20>(0x001A00, 3); return true;
    // src/unknown/C1/C17889.asm:35 LDA #NULL
    case 0xC17B51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C17889.asm:35 LDA #NULL
    // Overlapping static entry reached from 0xC17B51.
    case 0xC17B53: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C17889.asm:36 BRA @UNKNOWN3
    case 0xC17B54: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C1/C17889.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC17B56: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C17889.asm:39 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17B58: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/unknown/C1/C17889.asm:40 STA TEXT_NEW_MENU_OPTION_BUFFER,X
    case 0xC17B5B: cpu.execute_instruction<0x9D>(0x009A8B, 3); return true;
    // src/unknown/C1/C17889.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC17B5E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C17889.asm:42 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17B60: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/unknown/C1/C17889.asm:43 LDA #.LOWORD(UNKNOWN_C17889)
    case 0xC17B63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x007AFA, 3); return true;
    // src/unknown/C1/C17889.asm:43 LDA #.LOWORD(UNKNOWN_C17889)
    // Overlapping static entry reached from 0xC17B63.
    case 0xC17B65: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C17889.asm:45 END_C_FUNCTION
    case 0xC17B66: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C17889.asm:45 END_C_FUNCTION
    case 0xC17B67: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1866D.asm (unresolved).
bool execute_unresolved_c1_c1866d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1866D.asm:3 BEGIN_C_FUNCTION
    case 0xC188CF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC188D1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC188D2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC188D3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC188D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC188D4.
    case 0xC188D6: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC188D7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC188D8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1866D.asm:10 STA @LOCAL00
    case 0xC188D9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1866D.asm:10 STA @LOCAL00
    // Overlapping static entry reached from 0xC188D6.
    case 0xC188DA: cpu.execute_instruction<0x0E>(0x001EA5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1866D.asm:11 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC188DB: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1866D.asm:11 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC188DD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1866D.asm:11 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC188DF: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1866D.asm:11 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC188E1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1866D.asm:12 LDA @LOCAL00
    case 0xC188E3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C1866D.asm:13 BNE @UNKNOWN0
    case 0xC188E5: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1866D.asm:14 LDA #0
    case 0xC188E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1866D.asm:14 LDA #0
    // Overlapping static entry reached from 0xC188E7.
    case 0xC188E9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1866D.asm:15 BRA @UNKNOWN1
    case 0xC188EA: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C1/C1866D.asm:17 TAX
    case 0xC188EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1866D.asm:18 STZ a:display_text_state::unknown4,X
    case 0xC188ED: cpu.execute_instruction<0x9E>(0x000004, 3); return true;
    // src/unknown/C1/C1866D.asm:19 TAY
    case 0xC188F0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C1866D.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC188F1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C1866D.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC188F3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C1/C1866D.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC188F6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C1/C1866D.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC188F8: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C1/C1866D.asm:21 LDA @LOCAL00
    case 0xC188FB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1866D.asm:23 END_C_FUNCTION
    case 0xC188FD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1866D.asm:23 END_C_FUNCTION
    case 0xC188FE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1869D.asm (unresolved).
bool execute_unresolved_c1_c1869d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C1869D.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC188FF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1869D.asm:4 TAX
    case 0xC18901: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1869D.asm:5 BEQ @UNKNOWN0
    case 0xC18902: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C1/C1869D.asm:6 LDA a:display_text_state::unknown4,X
    case 0xC18904: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C1/C1869D.asm:7 BEQ @UNKNOWN0
    case 0xC18907: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C1/C1869D.asm:8 TXA
    case 0xC18909: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1869D.asm:9 CLC
    case 0xC1890A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1869D.asm:10 ADC #display_text_state::saved_text_attributes
    case 0xC1890B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C1/C1869D.asm:10 ADC #display_text_state::saved_text_attributes
    // Overlapping static entry reached from 0xC1890B.
    case 0xC1890D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1869D.asm:11 JSL UNKNOWN_C20ABC
    case 0xC1890E: cpu.execute_instruction<0x22>(0xC2094D, 4); return true;
    // src/unknown/C1/C1869D.asm:13 RTS
    case 0xC18912: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C190E6.asm (unresolved).
bool execute_unresolved_c1_c190e6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C190E6.asm:3 BEGIN_C_FUNCTION
    case 0xC191A0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C190E6.asm:8 DEC
    case 0xC191A2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C190E6.asm:9 CLC
    case 0xC191A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C190E6.asm:10 ADC #.LOWORD(GAME_STATE)
    case 0xC191A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C190E6.asm:10 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC191A4.
    case 0xC191A6: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C190E6.asm:11 TAX
    case 0xC191A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C190E6.asm:12 LDA a:game_state::unknown96,X
    case 0xC191A8: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C1/C190E6.asm:18 AND #$00FF
    case 0xC191AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C190E6.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC191AB.
    case 0xC191AD: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C190E6.asm:19 END_C_FUNCTION
    case 0xC191AE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C190F1-jp.asm (unresolved).
bool execute_unresolved_c1_c190f1_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C190F1-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC191AF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C190F1-jp.asm:8 END_STACK_VARS
    case 0xC191B1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C190F1-jp.asm:8 END_STACK_VARS
    case 0xC191B2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C190F1-jp.asm:8 END_STACK_VARS
    case 0xC191B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C190F1-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC191B3.
    case 0xC191B5: cpu.execute_instruction<0xFF>(0x24A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C190F1-jp.asm:8 END_STACK_VARS
    case 0xC191B6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C190F1-jp.asm:9 LDX #36
    case 0xC191B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000024, 2); else cpu.execute_instruction<0xA2>(0x000024, 3); return true;
    // src/unknown/C1/C190F1-jp.asm:9 LDX #36
    // Overlapping static entry reached from 0xC191B7.
    case 0xC191B9: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:10 STX @LOCAL01
    case 0xC191BA: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:11 LDA #0
    case 0xC191BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C190F1-jp.asm:11 LDA #0
    // Overlapping static entry reached from 0xC191BC.
    case 0xC191BE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:12 STA @LOCAL00
    case 0xC191BF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:13 BRA @UNKNOWN2
    case 0xC191C1: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:15 CLC
    case 0xC191C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C190F1-jp.asm:16 ADC #.LOWORD(GAME_STATE)
    case 0xC191C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C190F1-jp.asm:16 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC191C4.
    case 0xC191C6: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C190F1-jp.asm:17 TAX
    case 0xC191C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C190F1-jp.asm:18 LDA a:game_state::unknownB6,X
    case 0xC191C8: cpu.execute_instruction<0xBD>(0x0000B3, 3); return true;
    // src/unknown/C1/C190F1-jp.asm:19 AND #$00FF
    case 0xC191CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C190F1-jp.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC191CB.
    case 0xC191CD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:20 BEQ @UNKNOWN1
    case 0xC191CE: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:21 LDX @LOCAL01
    case 0xC191D0: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:22 DEX
    case 0xC191D2: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C190F1-jp.asm:23 STX @LOCAL01
    case 0xC191D3: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:25 LDA @LOCAL00
    case 0xC191D5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:26 INC
    case 0xC191D7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C190F1-jp.asm:27 STA @LOCAL00
    case 0xC191D8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:29 CMP #3
    case 0xC191DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C190F1-jp.asm:29 CMP #3
    // Overlapping static entry reached from 0xC191DA.
    case 0xC191DC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:30 BCC @UNKNOWN0
    case 0xC191DD: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:31 LDA #0
    case 0xC191DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C190F1-jp.asm:31 LDA #0
    // Overlapping static entry reached from 0xC191DF.
    case 0xC191E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:32 STA @LOCAL00
    case 0xC191E2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:33 BRA @UNKNOWN5
    case 0xC191E4: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:35 LDA @LOCAL00
    case 0xC191E6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:36 CLC
    case 0xC191E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C190F1-jp.asm:37 ADC #.LOWORD(GAME_STATE)
    case 0xC191E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C190F1-jp.asm:37 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC191E9.
    case 0xC191EB: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C190F1-jp.asm:38 TAX
    case 0xC191EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C190F1-jp.asm:39 LDA a:game_state::escargo_express_items,X
    case 0xC191ED: cpu.execute_instruction<0xBD>(0x000053, 3); return true;
    // src/unknown/C1/C190F1-jp.asm:40 AND #$00FF
    case 0xC191F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C190F1-jp.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC191F0.
    case 0xC191F2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:41 BNE @UNKNOWN4
    case 0xC191F3: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:42 LDA #0
    case 0xC191F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C190F1-jp.asm:42 LDA #0
    // Overlapping static entry reached from 0xC191F5.
    case 0xC191F7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:43 BRA @UNKNOWN8
    case 0xC191F8: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:45 LDA @LOCAL00
    case 0xC191FA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:46 INC
    case 0xC191FC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C190F1-jp.asm:47 STA @LOCAL00
    case 0xC191FD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:49 STA @VIRTUAL02
    case 0xC191FF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:50 LDX @LOCAL01
    case 0xC19201: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:51 TXA
    case 0xC19203: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C190F1-jp.asm:52 CLC
    case 0xC19204: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C190F1-jp.asm:53 SBC @VIRTUAL02
    case 0xC19205: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C190F1-jp.asm:54 BRANCHGTS @UNKNOWN3
    case 0xC19207: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C190F1-jp.asm:54 BRANCHGTS @UNKNOWN3
    case 0xC19209: cpu.execute_instruction<0x10>(0x0000DB, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C190F1-jp.asm:54 BRANCHGTS @UNKNOWN3
    case 0xC1920B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C190F1-jp.asm:54 BRANCHGTS @UNKNOWN3
    case 0xC1920D: cpu.execute_instruction<0x30>(0x0000D7, 2); return true;
    // src/unknown/C1/C190F1-jp.asm:55 LDA #1
    case 0xC1920F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C190F1-jp.asm:55 LDA #1
    // Overlapping static entry reached from 0xC1920F.
    case 0xC19211: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C190F1-jp.asm:57 END_C_FUNCTION
    case 0xC19212: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C190F1-jp.asm:57 END_C_FUNCTION
    case 0xC19213: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C191B0-jp.asm (unresolved).
bool execute_unresolved_c1_c191b0_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C191B0-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1928B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C191B0-jp.asm:9 END_STACK_VARS
    case 0xC1928D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C191B0-jp.asm:9 END_STACK_VARS
    case 0xC1928E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C191B0-jp.asm:9 END_STACK_VARS
    case 0xC1928F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C191B0-jp.asm:9 END_STACK_VARS
    case 0xC19290: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C191B0-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC19290.
    case 0xC19292: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C191B0-jp.asm:9 END_STACK_VARS
    case 0xC19293: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C191B0-jp.asm:9 END_STACK_VARS
    case 0xC19294: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:10 TAX
    case 0xC19295: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:11 DEX
    case 0xC19296: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:12 STX @LOCAL01
    case 0xC19297: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:13 TXA
    case 0xC19299: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:14 CLC
    case 0xC1929A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:15 ADC #.LOWORD(GAME_STATE)
    case 0xC1929B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C191B0-jp.asm:15 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1929B.
    case 0xC1929D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:16 TAX
    case 0xC1929E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1929F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:18 LDA a:game_state::escargo_express_items,X
    case 0xC192A1: cpu.execute_instruction<0xBD>(0x000053, 3); return true;
    // src/unknown/C1/C191B0-jp.asm:19 STA @VIRTUAL01
    case 0xC192A4: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:20 BRA @UNKNOWN1
    case 0xC192A6: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:23 TXA
    case 0xC192A8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:24 CLC
    case 0xC192A9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:25 ADC #.LOWORD(GAME_STATE)
    case 0xC192AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C191B0-jp.asm:25 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC192AA.
    case 0xC192AC: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:26 TAX
    case 0xC192AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC192AE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:28 LDA @VIRTUAL00
    case 0xC192B0: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:29 STA a:game_state::escargo_express_items,X
    case 0xC192B2: cpu.execute_instruction<0x9D>(0x000053, 3); return true;
    // src/unknown/C1/C191B0-jp.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC192B5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:31 LDA @LOCAL00
    case 0xC192B7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:32 TAX
    case 0xC192B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:33 STX @LOCAL01
    case 0xC192BA: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:35 LDX @LOCAL01
    case 0xC192BC: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC192BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:37 LDA GAME_STATE+game_state::escargo_express_items+1,X
    case 0xC192C0: cpu.execute_instruction<0xBD>(0x009AFD, 3); return true;
    // src/unknown/C1/C191B0-jp.asm:38 STA @VIRTUAL00
    case 0xC192C3: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC192C5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:40 LDA @VIRTUAL00
    case 0xC192C7: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:41 AND #$00FF
    case 0xC192C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C191B0-jp.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC192C9.
    case 0xC192CB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:42 BEQ @UNKNOWN2
    case 0xC192CC: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:43 TXA
    case 0xC192CE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:44 INC
    case 0xC192CF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:45 STA @LOCAL00
    case 0xC192D0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:46 CMP #36
    case 0xC192D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000024, 3); return true;
    // src/unknown/C1/C191B0-jp.asm:46 CMP #36
    // Overlapping static entry reached from 0xC192D2.
    case 0xC192D4: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:47 BCC @UNKNOWN0
    case 0xC192D5: cpu.execute_instruction<0x90>(0x0000D1, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:49 TXA
    case 0xC192D7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:50 CLC
    case 0xC192D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:51 ADC #.LOWORD(GAME_STATE)
    case 0xC192D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C191B0-jp.asm:51 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC192D9.
    case 0xC192DB: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:52 TAX
    case 0xC192DC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C191B0-jp.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC192DD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:54 STZ a:game_state::escargo_express_items,X
    case 0xC192DF: cpu.execute_instruction<0x9E>(0x000053, 3); return true;
    // src/unknown/C1/C191B0-jp.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC192E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:56 LDA @VIRTUAL01
    case 0xC192E4: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C191B0-jp.asm:57 AND #$00FF
    case 0xC192E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C191B0-jp.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC192E6.
    case 0xC192E8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C191B0-jp.asm:58 END_C_FUNCTION
    case 0xC192E9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C191B0-jp.asm:58 END_C_FUNCTION
    case 0xC192EA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C191F8.asm (unresolved).
bool execute_unresolved_c1_c191f8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C191F8.asm:3 BEGIN_C_FUNCTION
    case 0xC192EB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    case 0xC192ED: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    case 0xC192EE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    case 0xC192EF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    case 0xC192F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC192F0.
    case 0xC192F2: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    case 0xC192F3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    case 0xC192F4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C191F8.asm:9 TAY
    case 0xC192F5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C191F8.asm:10 STY @LOCAL00
    case 0xC192F6: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C191F8.asm:11 TXA
    case 0xC192F8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C191F8.asm:12 JSR UNKNOWN_C191B0
    case 0xC192F9: cpu.execute_instruction<0x20>(0x00928B, 3); return true;
    // src/unknown/C1/C191F8.asm:13 TAX
    case 0xC192FC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C191F8.asm:14 LDY @LOCAL00
    case 0xC192FD: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C191F8.asm:15 TYA
    case 0xC192FF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C191F8.asm:16 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC19300: cpu.execute_instruction<0x22>(0xC18C69, 4); return true;
    // src/unknown/C1/C191F8.asm:17 LDY @LOCAL00
    case 0xC19304: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C191F8.asm:18 TYA
    case 0xC19306: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C191F8.asm:19 END_C_FUNCTION
    case 0xC19307: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C191F8.asm:19 END_C_FUNCTION
    case 0xC19308: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19216.asm (unresolved).
bool execute_unresolved_c1_c19216_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19216.asm:3 BEGIN_C_FUNCTION
    case 0xC19309: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    case 0xC1930B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    case 0xC1930C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    case 0xC1930D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    case 0xC1930E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1930E.
    case 0xC19310: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    case 0xC19311: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    case 0xC19312: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C19216.asm:9 STA @LOCAL01
    case 0xC19313: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19216.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC19310.
    case 0xC19314: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19315: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19314.
    case 0xC19316: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19315.
    case 0xC19317: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19318: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19317.
    case 0xC19319: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1931A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19319.
    case 0xC1931B: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1931A.
    case 0xC1931C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1931D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19216.asm:11 LDA @LOCAL01
    case 0xC1931F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C19216.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19321: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C19216.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19323: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C19216.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19324: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C19216.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19326: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C19216.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19327: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C19216.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19328: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19216.asm:13 CLC
    case 0xC19329: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19216.asm:14 ADC @VIRTUAL06
    case 0xC1932A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19216.asm:15 STA @VIRTUAL06
    case 0xC1932C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19216.asm:16 STA @LOCAL00
    case 0xC1932E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19216.asm:17 LDA @VIRTUAL06+2
    case 0xC19330: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19216.asm:18 STA @LOCAL00+2
    case 0xC19332: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19216.asm:19 LDA #item::type
    case 0xC19334: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C19216.asm:19 LDA #item::type
    // Overlapping static entry reached from 0xC19334.
    case 0xC19336: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19216.asm:21 JSR PRINT_STRING
    case 0xC19337: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19216.asm:27 END_C_FUNCTION
    case 0xC1933A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19216.asm:27 END_C_FUNCTION
    case 0xC1933B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19249.asm (unresolved).
bool execute_unresolved_c1_c19249_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19249.asm:3 BEGIN_C_FUNCTION
    case 0xC1933C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    case 0xC1933E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    case 0xC1933F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    case 0xC19340: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    case 0xC19341: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC19341.
    case 0xC19343: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    case 0xC19344: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    case 0xC19345: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:9 STA @LOCAL01
    case 0xC19346: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19249.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC19343.
    case 0xC19347: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC19348: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x003305, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19347.
    case 0xC19349: cpu.execute_instruction<0x05>(0x000033, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19348.
    case 0xC1934A: cpu.execute_instruction<0x33>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC1934B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1934A.
    case 0xC1934C: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC1934D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1934C.
    case 0xC1934E: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1934D.
    case 0xC1934F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC19350: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19249.asm:11 LDA @LOCAL01
    case 0xC19352: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C1/C19249.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19354: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C1/C19249.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19356: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C1/C19249.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19357: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19249.asm:13 TAX
    case 0xC19359: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C1/C19249.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1935A: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C1/C19249.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1935C: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C1/C19249.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1935E: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C1/C19249.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC19360: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C1/C19249.asm:15 CLC
    case 0xC19362: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:16 ADC @VIRTUAL0A
    case 0xC19363: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C19249.asm:17 STA @VIRTUAL0A
    case 0xC19365: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C19249.asm:18 LDA [@VIRTUAL0A]
    case 0xC19367: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C19249.asm:19 AND #$00FF
    case 0xC19369: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19249.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC19369.
    case 0xC1936B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19249.asm:20 STA @LOCAL01
    case 0xC1936C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19249.asm:21 AND #$0080
    case 0xC1936E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C1/C19249.asm:21 AND #$0080
    // Overlapping static entry reached from 0xC1936E.
    case 0xC19370: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19249.asm:22 BEQ @UNKNOWN3
    case 0xC19371: cpu.execute_instruction<0xF0>(0x000076, 2); return true;
    // src/unknown/C1/C19249.asm:23 LDA @LOCAL01
    case 0xC19373: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C19249.asm:24 AND #$007F
    case 0xC19375: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/C1/C19249.asm:24 AND #$007F
    // Overlapping static entry reached from 0xC19375.
    case 0xC19377: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C19249.asm:25 CMP #1
    case 0xC19378: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C19249.asm:25 CMP #1
    // Overlapping static entry reached from 0xC19378.
    case 0xC1937A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19249.asm:26 BEQ @UNKNOWN0
    case 0xC1937B: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C1/C19249.asm:27 CMP #2
    case 0xC1937D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C19249.asm:27 CMP #2
    // Overlapping static entry reached from 0xC1937D.
    case 0xC1937F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19249.asm:28 BEQ @UNKNOWN1
    case 0xC19380: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/unknown/C1/C19249.asm:29 BRA @UNKNOWN2
    case 0xC19382: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/unknown/C1/C19249.asm:31 TXA
    case 0xC19384: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:32 INC
    case 0xC19385: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:33 CLC
    case 0xC19386: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:34 ADC @VIRTUAL06
    case 0xC19387: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:35 STA @VIRTUAL06
    case 0xC19389: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:36 LDA [@VIRTUAL06]
    case 0xC1938B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:37 TAX
    case 0xC1938D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC1938E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19249.asm:39 LDA __BSS_START__,X
    case 0xC19390: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC19393: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C19249.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC19395: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C19249.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC19397: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C19249.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC19399: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19249.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC1939B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19249.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1939D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1939F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19249.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193A1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19249.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193A3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19249.asm:43 JSR PRINT_NUMBER
    case 0xC193A5: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C19249.asm:44 BRA @UNKNOWN4
    case 0xC193A8: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/unknown/C1/C19249.asm:46 TXA
    case 0xC193AA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:47 INC
    case 0xC193AB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:48 CLC
    case 0xC193AC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:49 ADC @VIRTUAL06
    case 0xC193AD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:50 STA @VIRTUAL06
    case 0xC193AF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:51 LDA [@VIRTUAL06]
    case 0xC193B1: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:52 TAX
    case 0xC193B3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:53 LDA __BSS_START__,X
    case 0xC193B4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC193B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C19249.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC193B9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19249.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193BB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193BD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19249.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193BF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19249.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193C1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19249.asm:56 JSR PRINT_NUMBER
    case 0xC193C3: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C19249.asm:57 BRA @UNKNOWN4
    case 0xC193C6: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/unknown/C1/C19249.asm:59 TXA
    case 0xC193C8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:60 INC
    case 0xC193C9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:61 CLC
    case 0xC193CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:62 ADC @VIRTUAL06
    case 0xC193CB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:63 STA @VIRTUAL06
    case 0xC193CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:64 LDA [@VIRTUAL06]
    case 0xC193CF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:65 TAY
    case 0xC193D1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C19249.asm:66 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC193D2: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:66 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC193D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C19249.asm:66 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC193D7: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C19249.asm:66 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC193DA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19249.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193DC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193DE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19249.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193E0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19249.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193E2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19249.asm:68 JSR PRINT_NUMBER
    case 0xC193E4: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C19249.asm:69 BRA @UNKNOWN4
    case 0xC193E7: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C1/C19249.asm:71 TXA
    case 0xC193E9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:72 INC
    case 0xC193EA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:73 CLC
    case 0xC193EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:74 ADC @VIRTUAL06
    case 0xC193EC: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:75 STA @VIRTUAL06
    case 0xC193EE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:76 LDA [@VIRTUAL06]
    case 0xC193F0: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xC193F2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19249.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xC193F4: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19249.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xC193F5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19249.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xC193F7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xC193F8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19249.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xC193FA: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19249.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC193FC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19249.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193FE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19400: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19249.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19402: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19249.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19404: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19249.asm:80 LDA @LOCAL01
    case 0xC19406: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C19249.asm:82 JSR PRINT_STRING
    case 0xC19408: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19249.asm:87 END_C_FUNCTION
    case 0xC1940B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19249.asm:87 END_C_FUNCTION
    case 0xC1940C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1931B-jp.asm (unresolved).
bool execute_unresolved_c1_c1931b_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1931B-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1940D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1931B-jp.asm:8 END_STACK_VARS
    case 0xC1940F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1931B-jp.asm:8 END_STACK_VARS
    case 0xC19410: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1931B-jp.asm:8 END_STACK_VARS
    case 0xC19411: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1931B-jp.asm:8 END_STACK_VARS
    case 0xC19412: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1931B-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC19412.
    case 0xC19414: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1931B-jp.asm:8 END_STACK_VARS
    case 0xC19415: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1931B-jp.asm:8 END_STACK_VARS
    case 0xC19416: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1931B-jp.asm:9 STA @LOCAL01
    case 0xC19417: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC19414.
    case 0xC19418: cpu.execute_instruction<0x12>(0x0000C9, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:10 CMP #PLAYER_CHAR_COUNT
    case 0xC19419: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1931B-jp.asm:10 CMP #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC19418.
    case 0xC1941A: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:10 CMP #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC19419.
    case 0xC1941B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C1/C1931B-jp.asm:11 BLTEQ @UNKNOWN2
    case 0xC1941C: cpu.execute_instruction<0x90>(0x000056, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C1/C1931B-jp.asm:11 BLTEQ @UNKNOWN2
    case 0xC1941E: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:12 CMP #PARTY_MEMBER::KING
    case 0xC19420: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C1/C1931B-jp.asm:12 CMP #PARTY_MEMBER::KING
    // Overlapping static entry reached from 0xC19420.
    case 0xC19422: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:13 BNE @UNKNOWN1
    case 0xC19423: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1931B-jp.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC19425: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CD, 2); else cpu.execute_instruction<0xA9>(0x009ACD, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1931B-jp.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC19425.
    case 0xC19427: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1931B-jp.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC19428: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1931B-jp.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC1942A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1931B-jp.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC1942B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1931B-jp.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC1942D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1931B-jp.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC1942E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1931B-jp.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC19430: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC19432: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1931B-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19434: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1931B-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19436: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1931B-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19438: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1931B-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1943A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:17 LDA #.SIZEOF(game_state::pet_name)
    case 0xC1943C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1931B-jp.asm:17 LDA #.SIZEOF(game_state::pet_name)
    // Overlapping static entry reached from 0xC1943C.
    case 0xC1943E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:18 JSR PRINT_STRING
    case 0xC1943F: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C1931B-jp.asm:19 BRA @UNKNOWN4
    case 0xC19442: cpu.execute_instruction<0x80>(0x000056, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1931B-jp.asm:21 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19444: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1931B-jp.asm:21 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19444.
    case 0xC19446: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1931B-jp.asm:21 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19447: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1931B-jp.asm:21 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19446.
    case 0xC19448: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1931B-jp.asm:21 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19449: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1931B-jp.asm:21 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19448.
    case 0xC1944A: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1931B-jp.asm:21 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19449.
    case 0xC1944B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1931B-jp.asm:21 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1944C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:22 LDA @LOCAL01
    case 0xC1944E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:520 ASL
    // Macro caller: src/unknown/C1/C1931B-jp.asm:23 OPTIMIZED_MULT @VIRTUAL04, 2
    case 0xC19450: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1931B-jp.asm:24 TAX
    case 0xC19451: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1931B-jp.asm:25 INX
    case 0xC19452: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1931B-jp.asm:26 LDA f:NPC_AI_TABLE,X
    case 0xC19453: cpu.execute_instruction<0xBF>(0xD59DDA, 4); return true;
    // src/unknown/C1/C1931B-jp.asm:27 AND #$00FF
    case 0xC19457: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1931B-jp.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC19457.
    case 0xC19459: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:28 LDY #.SIZEOF(enemy_data)
    case 0xC1945A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/unknown/C1/C1931B-jp.asm:28 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC1945A.
    case 0xC1945C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:29 JSL MULT168
    case 0xC1945D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1931B-jp.asm:30 CLC
    case 0xC19461: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1931B-jp.asm:31 ADC @VIRTUAL06
    case 0xC19462: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:32 STA @VIRTUAL06
    case 0xC19464: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:33 STA @LOCAL00
    case 0xC19466: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:34 LDA @VIRTUAL06+2
    case 0xC19468: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:35 STA @LOCAL00+2
    case 0xC1946A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:36 LDA #10
    case 0xC1946C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C1931B-jp.asm:36 LDA #10
    // Overlapping static entry reached from 0xC1946C.
    case 0xC1946E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:37 JSR PRINT_STRING
    case 0xC1946F: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C1931B-jp.asm:38 BRA @UNKNOWN4
    case 0xC19472: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:40 DEC
    case 0xC19474: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1931B-jp.asm:41 LDY #.SIZEOF(char_struct)
    case 0xC19475: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1931B-jp.asm:41 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19475.
    case 0xC19477: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:42 JSL MULT168
    case 0xC19478: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1931B-jp.asm:43 CLC
    case 0xC1947C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1931B-jp.asm:44 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    case 0xC1947D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C1/C1931B-jp.asm:44 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    // Overlapping static entry reached from 0xC1947D.
    case 0xC1947F: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1931B-jp.asm:45 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19480: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1931B-jp.asm:45 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19482: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1931B-jp.asm:45 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19483: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1931B-jp.asm:45 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19485: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1931B-jp.asm:45 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19486: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1931B-jp.asm:45 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19488: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC1948A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1931B-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1948C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1931B-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1948E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1931B-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19490: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1931B-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19492: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:48 LDA #4
    case 0xC19494: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C1931B-jp.asm:48 LDA #4
    // Overlapping static entry reached from 0xC19494.
    case 0xC19496: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1931B-jp.asm:49 JSR PRINT_STRING
    case 0xC19497: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1931B-jp.asm:51 END_C_FUNCTION
    case 0xC1949A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1931B-jp.asm:51 END_C_FUNCTION
    case 0xC1949B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C193E7.asm (unresolved).
bool execute_unresolved_c1_c193e7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C193E7.asm:3 BEGIN_C_FUNCTION
    case 0xC1949C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    case 0xC1949E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    case 0xC1949F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    case 0xC194A0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    case 0xC194A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC194A1.
    case 0xC194A3: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    case 0xC194A4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    case 0xC194A5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C193E7.asm:9 TAX
    case 0xC194A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C193E7.asm:10 STX @LOCAL01
    case 0xC194A7: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C193E7.asm:11 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC194A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C193E7.asm:11 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC194A9.
    case 0xC194AB: cpu.execute_instruction<0x9F>(0x08B122, 4); return true;
    // src/unknown/C1/C193E7.asm:12 JSL UNKNOWN_C20A20
    case 0xC194AC: cpu.execute_instruction<0x22>(0xC208B1, 4); return true;
    // src/unknown/C1/C193E7.asm:12 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC194AB.
    case 0xC194AF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C193E7.asm:13 JSR SET_INSTANT_PRINTING
    case 0xC194B0: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/unknown/C1/C193E7.asm:13 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC194AF.
    case 0xC194B1: cpu.execute_instruction<0xF7>(0x000000, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C193E7.asm:14 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN28
    case 0xC194B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C193E7.asm:14 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN28
    // Overlapping static entry reached from 0xC194B3.
    case 0xC194B5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C193E7.asm:14 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN28
    case 0xC194B6: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    case 0xC194B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000061, 2); else cpu.execute_instruction<0xA9>(0x003761, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC194B9.
    case 0xC194BB: cpu.execute_instruction<0x37>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    case 0xC194BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC194BB.
    case 0xC194BD: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    case 0xC194BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC194BD.
    case 0xC194BF: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC194BE.
    case 0xC194C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    case 0xC194C1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C193E7.asm:16 LDX @LOCAL01
    case 0xC194C3: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C193E7.asm:17 TXA
    case 0xC194C5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C1/C193E7.asm:18 OPTIMIZED_MULT @VIRTUAL04, MISC_TARGET_TEXT_LENGTH
    case 0xC194C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C1/C193E7.asm:18 OPTIMIZED_MULT @VIRTUAL04, MISC_TARGET_TEXT_LENGTH
    case 0xC194C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C193E7.asm:19 CLC
    case 0xC194C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C193E7.asm:20 ADC @VIRTUAL06
    case 0xC194C9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C193E7.asm:21 STA @VIRTUAL06
    case 0xC194CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C193E7.asm:22 STA @LOCAL00
    case 0xC194CD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C193E7.asm:23 LDA @VIRTUAL06+2
    case 0xC194CF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C193E7.asm:24 STA @LOCAL00+2
    case 0xC194D1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C193E7.asm:25 LDA #MISC_TARGET_TEXT_LENGTH
    case 0xC194D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C193E7.asm:25 LDA #MISC_TARGET_TEXT_LENGTH
    // Overlapping static entry reached from 0xC194D3.
    case 0xC194D5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C193E7.asm:26 JSR PRINT_STRING
    case 0xC194D6: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C193E7.asm:27 JSR CLEAR_INSTANT_PRINTING
    case 0xC194D9: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/unknown/C1/C193E7.asm:28 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC194DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C193E7.asm:28 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC194DC.
    case 0xC194DE: cpu.execute_instruction<0x9F>(0x094D22, 4); return true;
    // src/unknown/C1/C193E7.asm:29 JSL UNKNOWN_C20ABC
    case 0xC194DF: cpu.execute_instruction<0x22>(0xC2094D, 4); return true;
    // src/unknown/C1/C193E7.asm:29 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC194DE.
    case 0xC194E2: cpu.execute_instruction<0xC2>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C193E7.asm:30 END_C_FUNCTION
    case 0xC194E3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C193E7.asm:30 END_C_FUNCTION
    case 0xC194E4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19437.asm (unresolved).
bool execute_unresolved_c1_c19437_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19437.asm:3 BEGIN_C_FUNCTION
    case 0xC194E5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C19437.asm:5 LDA #WINDOW::UNKNOWN28
    case 0xC194E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // src/unknown/C1/C19437.asm:5 LDA #WINDOW::UNKNOWN28
    // Overlapping static entry reached from 0xC194E7.
    case 0xC194E9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19437.asm:6 JSR CLOSE_WINDOW
    case 0xC194EA: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19437.asm:7 END_C_FUNCTION
    case 0xC194ED: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19441.asm (unresolved).
bool execute_unresolved_c1_c19441_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19441.asm:3 BEGIN_C_FUNCTION
    case 0xC194EE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19441.asm:10 END_STACK_VARS
    case 0xC194F0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19441.asm:10 END_STACK_VARS
    case 0xC194F1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19441.asm:10 END_STACK_VARS
    case 0xC194F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19441.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC194F2.
    case 0xC194F4: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19441.asm:10 END_STACK_VARS
    case 0xC194F5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:11 LDA #0
    case 0xC194F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19441.asm:11 LDA #0
    // Overlapping static entry reached from 0xC194F6.
    case 0xC194F8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19441.asm:12 STA @VIRTUAL02
    case 0xC194F9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19441.asm:13 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC194FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C19441.asm:13 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC194FB.
    case 0xC194FD: cpu.execute_instruction<0x9F>(0x08B122, 4); return true;
    // src/unknown/C1/C19441.asm:14 JSL UNKNOWN_C20A20
    case 0xC194FE: cpu.execute_instruction<0x22>(0xC208B1, 4); return true;
    // src/unknown/C1/C19441.asm:14 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC194FD.
    case 0xC19501: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19441.asm:15 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    case 0xC19502: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19441.asm:15 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    // Overlapping static entry reached from 0xC19501.
    case 0xC19503: cpu.execute_instruction<0x07>(0x000000, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19441.asm:15 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    // Overlapping static entry reached from 0xC19502.
    case 0xC19504: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C19441.asm:15 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    case 0xC19505: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:16 LOADPTR PHONE_CALL_TEXT, @LOCAL00
    case 0xC19508: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000075, 2); else cpu.execute_instruction<0xA9>(0x003775, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:16 LOADPTR PHONE_CALL_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC19508.
    case 0xC1950A: cpu.execute_instruction<0x37>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19441.asm:16 LOADPTR PHONE_CALL_TEXT, @LOCAL00
    case 0xC1950B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19441.asm:16 LOADPTR PHONE_CALL_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC1950A.
    case 0xC1950C: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:16 LOADPTR PHONE_CALL_TEXT, @LOCAL00
    case 0xC1950D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:16 LOADPTR PHONE_CALL_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC1950D.
    case 0xC1950F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19441.asm:16 LOADPTR PHONE_CALL_TEXT, @LOCAL00
    case 0xC19510: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19441.asm:17 LDX #.SIZEOF(char_struct::name)
    case 0xC19512: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C19441.asm:17 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC19512.
    case 0xC19514: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19441.asm:18 LDA #7
    case 0xC19515: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C1/C19441.asm:18 LDA #7
    // Overlapping static entry reached from 0xC19515.
    case 0xC19517: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19441.asm:19 JSL SET_WINDOW_TITLE
    case 0xC19518: cpu.execute_instruction<0x22>(0xC2030C, 4); return true;
    // src/unknown/C1/C19441.asm:20 LDY #1
    case 0xC1951C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C19441.asm:20 LDY #1
    // Overlapping static entry reached from 0xC1951C.
    case 0xC1951E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C19441.asm:21 STY @LOCAL03
    case 0xC1951F: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C1/C19441.asm:22 BRA @UNKNOWN2
    case 0xC19521: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // src/unknown/C1/C19441.asm:24 LDA @LOCAL02
    case 0xC19523: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C19441.asm:25 CLC
    case 0xC19525: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:26 ADC #telephone_contact::event_flag
    case 0xC19526: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/C1/C19441.asm:26 ADC #telephone_contact::event_flag
    // Overlapping static entry reached from 0xC19526.
    case 0xC19528: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C19441.asm:27 CLC
    case 0xC19529: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:28 ADC @VIRTUAL06
    case 0xC1952A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19441.asm:29 STA @VIRTUAL06
    case 0xC1952C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19441.asm:30 LDA [@VIRTUAL06]
    case 0xC1952E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C19441.asm:31 JSL GET_EVENT_FLAG
    case 0xC19530: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/C1/C19441.asm:32 CMP #0
    case 0xC19534: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C19441.asm:32 CMP #0
    // Overlapping static entry reached from 0xC19534.
    case 0xC19536: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19441.asm:33 BEQ @UNKNOWN1
    case 0xC19537: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19441.asm:35 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC19539: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19441.asm:35 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1953B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19441.asm:35 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1953D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19441.asm:35 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1953F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19441.asm:40 LDX #.SIZEOF(telephone_contact::label)
    case 0xC19541: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C1/C19441.asm:40 LDX #.SIZEOF(telephone_contact::label)
    // Overlapping static entry reached from 0xC19541.
    case 0xC19543: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19441.asm:41 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC19544: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // src/unknown/C1/C19441.asm:41 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC19544.
    case 0xC19546: cpu.execute_instruction<0x9F>(0x8EC322, 4); return true;
    // src/unknown/C1/C19441.asm:42 JSL MEMCPY16
    case 0xC19547: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C1/C19441.asm:42 JSL MEMCPY16
    // Overlapping static entry reached from 0xC19546.
    case 0xC1954A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/unknown/C1/C19441.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC1954B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19441.asm:43 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1954A.
    case 0xC1954C: cpu.execute_instruction<0x20>(0x00549C, 3); return true;
    // src/unknown/C1/C19441.asm:44 STZ TEMPORARY_TEXT_BUFFER + .SIZEOF(telephone_contact::label)
    case 0xC1954D: cpu.execute_instruction<0x9C>(0x009F54, 3); return true;
    // src/unknown/C1/C19441.asm:44 STZ TEMPORARY_TEXT_BUFFER + .SIZEOF(telephone_contact::label)
    // Overlapping static entry reached from 0xC1954C.
    case 0xC1954F: cpu.execute_instruction<0x9F>(0xA920C2, 4); return true;
    // src/unknown/C1/C19441.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC19550: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19552: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1954F.
    case 0xC19553: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC19552.
    case 0xC19554: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19555: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19557: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19558: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1955A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1955B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1955D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19441.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC1955F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19441.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19561: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19441.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19563: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19441.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19565: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19441.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19567: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19441.asm:49 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19569: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19441.asm:49 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19569.
    case 0xC1956B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C19441.asm:49 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1956C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19441.asm:49 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1956E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19441.asm:49 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1956E.
    case 0xC19570: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C19441.asm:49 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19571: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C19441.asm:50 LDY @LOCAL03
    case 0xC19573: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C19441.asm:51 TYA
    case 0xC19575: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:52 JSR UNKNOWN_C115F4
    case 0xC19576: cpu.execute_instruction<0x20>(0x001BB0, 3); return true;
    // src/unknown/C1/C19441.asm:54 LDY @LOCAL03
    case 0xC19579: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C19441.asm:55 INY
    case 0xC1957B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:56 STY @LOCAL03
    case 0xC1957C: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:58 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL06
    case 0xC1957E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x008AAE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:58 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1957E.
    case 0xC19580: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19441.asm:58 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL06
    case 0xC19581: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:58 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL06
    case 0xC19583: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:58 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19583.
    case 0xC19585: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19441.asm:58 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL06
    case 0xC19586: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19441.asm:59 TYA
    case 0xC19588: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C1/C19441.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    case 0xC19589: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C1/C19441.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    case 0xC1958A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C1/C19441.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    case 0xC1958B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C1/C19441.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    case 0xC1958C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:61 STA @LOCAL02
    case 0xC1958D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C19441.asm:62 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1958F: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C19441.asm:62 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC19591: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C19441.asm:62 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC19593: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C19441.asm:62 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC19595: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C19441.asm:63 CLC
    case 0xC19597: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:64 ADC @VIRTUAL0A
    case 0xC19598: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C19441.asm:65 STA @VIRTUAL0A
    case 0xC1959A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C19441.asm:66 LDA [@VIRTUAL0A]
    case 0xC1959C: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C19441.asm:67 AND #$00FF
    case 0xC1959E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19441.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC1959E.
    case 0xC195A0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C19441.asm:68 BNEL @UNKNOWN0
    case 0xC195A1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C19441.asm:68 BNEL @UNKNOWN0
    case 0xC195A3: cpu.execute_instruction<0x4C>(0x009523, 3); return true;
    // src/unknown/C1/C19441.asm:69 LDA #0
    case 0xC195A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19441.asm:69 LDA #0
    // Overlapping static entry reached from 0xC195A6.
    case 0xC195A8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19441.asm:70 JSR UNKNOWN_C12BD5
    case 0xC195A9: cpu.execute_instruction<0x20>(0x0032DB, 3); return true;
    // src/unknown/C1/C19441.asm:71 CMP #0
    case 0xC195AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C19441.asm:71 CMP #0
    // Overlapping static entry reached from 0xC195AC.
    case 0xC195AE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19441.asm:72 BEQ @UNKNOWN4
    case 0xC195AF: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C1/C19441.asm:73 LDY #1
    case 0xC195B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C19441.asm:73 LDY #1
    // Overlapping static entry reached from 0xC195B1.
    case 0xC195B3: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C19441.asm:74 LDX #0
    case 0xC195B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C19441.asm:74 LDX #0
    // Overlapping static entry reached from 0xC195B4.
    case 0xC195B6: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C1/C19441.asm:75 TYA
    case 0xC195B7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:76 JSR UNKNOWN_C1180D
    case 0xC195B8: cpu.execute_instruction<0x20>(0x001FA6, 3); return true;
    // src/unknown/C1/C19441.asm:77 LDA #1
    case 0xC195BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C19441.asm:77 LDA #1
    // Overlapping static entry reached from 0xC195BB.
    case 0xC195BD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19441.asm:78 JSR SELECTION_MENU
    case 0xC195BE: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C19441.asm:79 STA @VIRTUAL02
    case 0xC195C1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19441.asm:81 JSR CLOSE_FOCUS_WINDOW
    case 0xC195C3: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/unknown/C1/C19441.asm:82 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC195C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C19441.asm:82 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC195C6.
    case 0xC195C8: cpu.execute_instruction<0x9F>(0x094D22, 4); return true;
    // src/unknown/C1/C19441.asm:83 JSL UNKNOWN_C20ABC
    case 0xC195C9: cpu.execute_instruction<0x22>(0xC2094D, 4); return true;
    // src/unknown/C1/C19441.asm:83 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC195C8.
    case 0xC195CC: cpu.execute_instruction<0xC2>(0x0000A5, 2); return true;
    // src/unknown/C1/C19441.asm:84 LDA @VIRTUAL02
    case 0xC195CD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C19441.asm:84 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC195CC.
    case 0xC195CE: cpu.execute_instruction<0x02>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19441.asm:85 END_C_FUNCTION
    case 0xC195CF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19441.asm:85 END_C_FUNCTION
    case 0xC195D0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1952F-jp.asm (unresolved).
bool execute_unresolved_c1_c1952f_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1952F-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC195D1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1952F-jp.asm:9 END_STACK_VARS
    case 0xC195D3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1952F-jp.asm:9 END_STACK_VARS
    case 0xC195D4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1952F-jp.asm:9 END_STACK_VARS
    case 0xC195D5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1952F-jp.asm:9 END_STACK_VARS
    case 0xC195D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00FFEB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1952F-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC195D6.
    case 0xC195D8: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1952F-jp.asm:9 END_STACK_VARS
    case 0xC195D9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1952F-jp.asm:9 END_STACK_VARS
    case 0xC195DA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:10 TAX
    case 0xC195DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:11 DEC
    case 0xC195DC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:12 STA @VIRTUAL02
    case 0xC195DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:13 JSR SET_INSTANT_PRINTING
    case 0xC195DF: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    case 0xC195E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00DD4E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    // Overlapping static entry reached from 0xC195E2.
    case 0xC195E4: cpu.execute_instruction<0xDD>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1952F-jp.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    case 0xC195E5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    case 0xC195E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    // Overlapping static entry reached from 0xC195E7.
    case 0xC195E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    case 0xC195EA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/unknown/C1/C1952F-jp.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    case 0xC195EC: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/unknown/C1/C1952F-jp.asm:20 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC195F0: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:21 AND #$00FF
    case 0xC195F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC195F3.
    case 0xC195F5: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:22 CMP #1
    case 0xC195F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:22 CMP #1
    // Overlapping static entry reached from 0xC195F6.
    case 0xC195F8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:23 BEQ @UNKNOWN0
    case 0xC195F9: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:24 LDA #8
    case 0xC195FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:24 LDA #8
    // Overlapping static entry reached from 0xC195FB.
    case 0xC195FD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:25 STA PAGINATION_WINDOW
    case 0xC195FE: cpu.execute_instruction<0x8D>(0x0061F2, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:27 LDA @VIRTUAL02
    case 0xC19601: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:28 LDY #.SIZEOF(char_struct)
    case 0xC19603: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:28 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19603.
    case 0xC19605: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:29 JSL MULT168
    case 0xC19606: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1952F-jp.asm:30 TAY
    case 0xC1960A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:31 STY @LOCAL02
    case 0xC1960B: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:32 TYA
    case 0xC1960D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:33 CLC
    case 0xC1960E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1960F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1960F.
    case 0xC19611: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19612: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1952F-jp.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19614: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1952F-jp.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19615: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1952F-jp.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19617: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19618: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F-jp.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1961A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC1961C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1961E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19620: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19622: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19624: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:38 LDX #.SIZEOF(char_struct::name)
    case 0xC19626: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:38 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC19626.
    case 0xC19628: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:39 LDA #8
    case 0xC19629: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:39 LDA #8
    // Overlapping static entry reached from 0xC19629.
    case 0xC1962B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:40 JSL SET_WINDOW_TITLE
    case 0xC1962C: cpu.execute_instruction<0x22>(0xC2030C, 4); return true;
    // src/unknown/C1/C1952F-jp.asm:41 LDA #1
    case 0xC19630: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:41 LDA #1
    // Overlapping static entry reached from 0xC19630.
    case 0xC19632: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:43 JSR UNKNOWN_C10EB4
    case 0xC19633: cpu.execute_instruction<0x20>(0x001495, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:44 LDX #0
    case 0xC19636: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:44 LDX #0
    // Overlapping static entry reached from 0xC19636.
    case 0xC19638: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:45 LDA #5
    case 0xC19639: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:45 LDA #5
    // Overlapping static entry reached from 0xC19639.
    case 0xC1963B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:46 JSR UNKNOWN_C438A5
    case 0xC1963C: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:47 LDY @LOCAL02
    case 0xC1963F: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC19641: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:49 LDA PARTY_CHARACTERS+char_struct::level,Y
    case 0xC19643: cpu.execute_instruction<0xB9>(0x009C83, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:50 STORE_INT832 @VIRTUAL06
    case 0xC19646: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F-jp.asm:50 STORE_INT832 @VIRTUAL06
    case 0xC19648: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:50 STORE_INT832 @VIRTUAL06
    case 0xC1964A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F-jp.asm:50 STORE_INT832 @VIRTUAL06
    case 0xC1964C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC1964E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19650: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19652: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19654: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19656: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:53 JSR PRINT_NUMBER
    case 0xC19658: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:54 LDA #2
    case 0xC1965B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:54 LDA #2
    // Overlapping static entry reached from 0xC1965B.
    case 0xC1965D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:55 JSR UNKNOWN_C10EB4
    case 0xC1965E: cpu.execute_instruction<0x20>(0x001495, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:56 LDX #3
    case 0xC19661: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:56 LDX #3
    // Overlapping static entry reached from 0xC19661.
    case 0xC19663: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:57 LDA #9
    case 0xC19664: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:57 LDA #9
    // Overlapping static entry reached from 0xC19664.
    case 0xC19666: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:58 JSR UNKNOWN_C438A5
    case 0xC19667: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:59 LDY @LOCAL02
    case 0xC1966A: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:60 LDA PARTY_CHARACTERS+char_struct::current_hp,Y
    case 0xC1966C: cpu.execute_instruction<0xB9>(0x009CC3, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:61 STORE_INT1632 @VIRTUAL06
    case 0xC1966F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:61 STORE_INT1632 @VIRTUAL06
    case 0xC19671: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19673: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19675: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19677: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19679: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:63 JSR PRINT_NUMBER
    case 0xC1967B: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:64 LDX #3
    case 0xC1967E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:64 LDX #3
    // Overlapping static entry reached from 0xC1967E.
    case 0xC19680: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:65 LDA #13
    case 0xC19681: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:65 LDA #13
    // Overlapping static entry reached from 0xC19681.
    case 0xC19683: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:66 JSR UNKNOWN_C438A5
    case 0xC19684: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:67 LDY @LOCAL02
    case 0xC19687: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:68 LDA PARTY_CHARACTERS+char_struct::max_hp,Y
    case 0xC19689: cpu.execute_instruction<0xB9>(0x009C88, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:69 STORE_INT1632 @VIRTUAL06
    case 0xC1968C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:69 STORE_INT1632 @VIRTUAL06
    case 0xC1968E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19690: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19692: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19694: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19696: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:71 JSR PRINT_NUMBER
    case 0xC19698: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:72 LDX #4
    case 0xC1969B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:72 LDX #4
    // Overlapping static entry reached from 0xC1969B.
    case 0xC1969D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:73 LDA #9
    case 0xC1969E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:73 LDA #9
    // Overlapping static entry reached from 0xC1969E.
    case 0xC196A0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:74 JSR UNKNOWN_C438A5
    case 0xC196A1: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:75 LDY @LOCAL02
    case 0xC196A4: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:76 LDA PARTY_CHARACTERS+char_struct::current_pp,Y
    case 0xC196A6: cpu.execute_instruction<0xB9>(0x009CC9, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC196A9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC196AB: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196AD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196AF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196B1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196B3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:79 JSR PRINT_NUMBER
    case 0xC196B5: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:80 LDX #4
    case 0xC196B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:80 LDX #4
    // Overlapping static entry reached from 0xC196B8.
    case 0xC196BA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:81 LDA #13
    case 0xC196BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:81 LDA #13
    // Overlapping static entry reached from 0xC196BB.
    case 0xC196BD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:82 JSR UNKNOWN_C438A5
    case 0xC196BE: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:83 LDY @LOCAL02
    case 0xC196C1: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:84 LDA PARTY_CHARACTERS+char_struct::max_pp,Y
    case 0xC196C3: cpu.execute_instruction<0xB9>(0x009C8A, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:85 STORE_INT1632 @VIRTUAL06
    case 0xC196C6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:85 STORE_INT1632 @VIRTUAL06
    case 0xC196C8: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:86 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196CA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:86 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196CC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:86 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196CE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:86 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196D0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:87 JSR PRINT_NUMBER
    case 0xC196D2: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:88 LDX #0
    case 0xC196D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:88 LDX #0
    // Overlapping static entry reached from 0xC196D5.
    case 0xC196D7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:89 LDA #25
    case 0xC196D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:89 LDA #25
    // Overlapping static entry reached from 0xC196D8.
    case 0xC196DA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:90 JSR UNKNOWN_C438A5
    case 0xC196DB: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:91 LDY @LOCAL02
    case 0xC196DE: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:92 SEP #PROC_FLAGS::ACCUM8
    case 0xC196E0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:93 LDA PARTY_CHARACTERS+char_struct::offense,Y
    case 0xC196E2: cpu.execute_instruction<0xB9>(0x009C93, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:94 STORE_INT832 @VIRTUAL06
    case 0xC196E5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F-jp.asm:94 STORE_INT832 @VIRTUAL06
    case 0xC196E7: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:94 STORE_INT832 @VIRTUAL06
    case 0xC196E9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F-jp.asm:94 STORE_INT832 @VIRTUAL06
    case 0xC196EB: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC196ED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196EF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196F1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196F3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196F5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:97 JSR PRINT_NUMBER
    case 0xC196F7: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:98 LDX #1
    case 0xC196FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:98 LDX #1
    // Overlapping static entry reached from 0xC196FA.
    case 0xC196FC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:99 LDA #25
    case 0xC196FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:99 LDA #25
    // Overlapping static entry reached from 0xC196FD.
    case 0xC196FF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:100 JSR UNKNOWN_C438A5
    case 0xC19700: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:101 LDY @LOCAL02
    case 0xC19703: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC19705: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:103 LDA PARTY_CHARACTERS+char_struct::defense,Y
    case 0xC19707: cpu.execute_instruction<0xB9>(0x009C94, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:104 STORE_INT832 @VIRTUAL06
    case 0xC1970A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F-jp.asm:104 STORE_INT832 @VIRTUAL06
    case 0xC1970C: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:104 STORE_INT832 @VIRTUAL06
    case 0xC1970E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F-jp.asm:104 STORE_INT832 @VIRTUAL06
    case 0xC19710: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:105 REP #PROC_FLAGS::ACCUM8
    case 0xC19712: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:106 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19714: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:106 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19716: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:106 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19718: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:106 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1971A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:107 JSR PRINT_NUMBER
    case 0xC1971C: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:108 LDX #2
    case 0xC1971F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:108 LDX #2
    // Overlapping static entry reached from 0xC1971F.
    case 0xC19721: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:109 LDA #25
    case 0xC19722: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:109 LDA #25
    // Overlapping static entry reached from 0xC19722.
    case 0xC19724: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:110 JSR UNKNOWN_C438A5
    case 0xC19725: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:111 LDY @LOCAL02
    case 0xC19728: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:112 SEP #PROC_FLAGS::ACCUM8
    case 0xC1972A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:113 LDA PARTY_CHARACTERS+char_struct::speed,Y
    case 0xC1972C: cpu.execute_instruction<0xB9>(0x009C95, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:114 STORE_INT832 @VIRTUAL06
    case 0xC1972F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F-jp.asm:114 STORE_INT832 @VIRTUAL06
    case 0xC19731: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:114 STORE_INT832 @VIRTUAL06
    case 0xC19733: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F-jp.asm:114 STORE_INT832 @VIRTUAL06
    case 0xC19735: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC19737: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:116 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19739: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:116 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1973B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:116 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1973D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:116 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1973F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:117 JSR PRINT_NUMBER
    case 0xC19741: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:118 LDX #3
    case 0xC19744: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:118 LDX #3
    // Overlapping static entry reached from 0xC19744.
    case 0xC19746: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:119 LDA #25
    case 0xC19747: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:119 LDA #25
    // Overlapping static entry reached from 0xC19747.
    case 0xC19749: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:120 JSR UNKNOWN_C438A5
    case 0xC1974A: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:121 LDY @LOCAL02
    case 0xC1974D: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:122 SEP #PROC_FLAGS::ACCUM8
    case 0xC1974F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:123 LDA PARTY_CHARACTERS+char_struct::guts,Y
    case 0xC19751: cpu.execute_instruction<0xB9>(0x009C96, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC19754: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F-jp.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC19756: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC19758: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F-jp.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC1975A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:125 REP #PROC_FLAGS::ACCUM8
    case 0xC1975C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1975E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19760: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19762: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19764: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:127 JSR PRINT_NUMBER
    case 0xC19766: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:128 LDX #4
    case 0xC19769: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:128 LDX #4
    // Overlapping static entry reached from 0xC19769.
    case 0xC1976B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:129 LDA #25
    case 0xC1976C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:129 LDA #25
    // Overlapping static entry reached from 0xC1976C.
    case 0xC1976E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:130 JSR UNKNOWN_C438A5
    case 0xC1976F: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:131 LDY @LOCAL02
    case 0xC19772: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:132 SEP #PROC_FLAGS::ACCUM8
    case 0xC19774: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:133 LDA PARTY_CHARACTERS+char_struct::vitality,Y
    case 0xC19776: cpu.execute_instruction<0xB9>(0x009C98, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:134 STORE_INT832 @VIRTUAL06
    case 0xC19779: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F-jp.asm:134 STORE_INT832 @VIRTUAL06
    case 0xC1977B: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:134 STORE_INT832 @VIRTUAL06
    case 0xC1977D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F-jp.asm:134 STORE_INT832 @VIRTUAL06
    case 0xC1977F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:135 REP #PROC_FLAGS::ACCUM8
    case 0xC19781: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:136 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19783: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:136 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19785: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:136 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19787: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:136 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19789: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:137 JSR PRINT_NUMBER
    case 0xC1978B: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:138 LDX #5
    case 0xC1978E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:138 LDX #5
    // Overlapping static entry reached from 0xC1978E.
    case 0xC19790: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:139 LDA #25
    case 0xC19791: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:139 LDA #25
    // Overlapping static entry reached from 0xC19791.
    case 0xC19793: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:140 JSR UNKNOWN_C438A5
    case 0xC19794: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:141 LDY @LOCAL02
    case 0xC19797: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:142 SEP #PROC_FLAGS::ACCUM8
    case 0xC19799: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:143 LDA PARTY_CHARACTERS+char_struct::iq,Y
    case 0xC1979B: cpu.execute_instruction<0xB9>(0x009C99, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:144 STORE_INT832 @VIRTUAL06
    case 0xC1979E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F-jp.asm:144 STORE_INT832 @VIRTUAL06
    case 0xC197A0: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:144 STORE_INT832 @VIRTUAL06
    case 0xC197A2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F-jp.asm:144 STORE_INT832 @VIRTUAL06
    case 0xC197A4: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:145 REP #PROC_FLAGS::ACCUM8
    case 0xC197A6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:146 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197A8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:146 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197AA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:146 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197AC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:146 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197AE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:147 JSR PRINT_NUMBER
    case 0xC197B0: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:148 LDX #6
    case 0xC197B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:148 LDX #6
    // Overlapping static entry reached from 0xC197B3.
    case 0xC197B5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:149 LDA #25
    case 0xC197B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:149 LDA #25
    // Overlapping static entry reached from 0xC197B6.
    case 0xC197B8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:150 JSR UNKNOWN_C438A5
    case 0xC197B9: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:151 LDY @LOCAL02
    case 0xC197BC: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:152 SEP #PROC_FLAGS::ACCUM8
    case 0xC197BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:153 LDA PARTY_CHARACTERS+char_struct::luck,Y
    case 0xC197C0: cpu.execute_instruction<0xB9>(0x009C97, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:154 STORE_INT832 @VIRTUAL06
    case 0xC197C3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F-jp.asm:154 STORE_INT832 @VIRTUAL06
    case 0xC197C5: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:154 STORE_INT832 @VIRTUAL06
    case 0xC197C7: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F-jp.asm:154 STORE_INT832 @VIRTUAL06
    case 0xC197C9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:155 REP #PROC_FLAGS::ACCUM8
    case 0xC197CB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197CD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197CF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197D1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197D3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:157 JSR PRINT_NUMBER
    case 0xC197D5: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:158 LDA #6
    case 0xC197D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:158 LDA #6
    // Overlapping static entry reached from 0xC197D8.
    case 0xC197DA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:159 JSR UNKNOWN_C10EB4
    case 0xC197DB: cpu.execute_instruction<0x20>(0x001495, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:160 LDX #5
    case 0xC197DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:160 LDX #5
    // Overlapping static entry reached from 0xC197DE.
    case 0xC197E0: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:161 LDA #9
    case 0xC197E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:161 LDA #9
    // Overlapping static entry reached from 0xC197E1.
    case 0xC197E3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:162 JSR UNKNOWN_C438A5
    case 0xC197E4: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:163 LDY @LOCAL02
    case 0xC197E7: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:164 TYA
    case 0xC197E9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:165 CLC
    case 0xC197EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:166 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    case 0xC197EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000084, 2); else cpu.execute_instruction<0x69>(0x009C84, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:166 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    // Overlapping static entry reached from 0xC197EB.
    case 0xC197ED: cpu.execute_instruction<0x9C>(0x00B9A8, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:167 TAY
    case 0xC197EE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1952F-jp.asm:168 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC197EF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1952F-jp.asm:168 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC197ED.
    case 0xC197F0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:168 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC197F2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1952F-jp.asm:168 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC197F4: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:168 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC197F7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:169 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    case 0xC197F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00967F, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:169 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC197F9.
    case 0xC197FB: cpu.execute_instruction<0x96>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:169 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    case 0xC197FC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:169 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC197FB.
    case 0xC197FD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:169 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    case 0xC197FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000098, 2); else cpu.execute_instruction<0xA9>(0x000098, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:169 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC197FE.
    case 0xC19800: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:169 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    case 0xC19801: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:170 CLC
    case 0xC19803: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:171 LDA @VIRTUAL06
    case 0xC19804: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:172 SBC @VIRTUAL0A
    case 0xC19806: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:173 LDA @VIRTUAL06+2
    case 0xC19808: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:174 SBC @VIRTUAL0A+2
    case 0xC1980A: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1952F-jp.asm:175 BRANCHLTEQS @UNKNOWN3
    case 0xC1980C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:175 BRANCHLTEQS @UNKNOWN3
    case 0xC1980E: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1952F-jp.asm:175 BRANCHLTEQS @UNKNOWN3
    case 0xC19810: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:175 BRANCHLTEQS @UNKNOWN3
    case 0xC19812: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:176 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC19814: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:176 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC19816: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:176 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC19818: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:176 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1981A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:178 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1981C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:178 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1981E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:178 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19820: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:178 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19822: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:179 JSR PRINT_NUMBER
    case 0xC19824: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:180 LDX #6
    case 0xC19827: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:180 LDX #6
    // Overlapping static entry reached from 0xC19827.
    case 0xC19829: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:181 LDA #9
    case 0xC1982A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:181 LDA #9
    // Overlapping static entry reached from 0xC1982A.
    case 0xC1982C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:182 JSR UNKNOWN_C438A5
    case 0xC1982D: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:183 LDA @VIRTUAL02
    case 0xC19830: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:184 INC
    case 0xC19832: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:185 JSL GET_REQUIRED_EXP
    case 0xC19833: cpu.execute_instruction<0x22>(0xC43779, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19837: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19839: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1983B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1983D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:187 JSR PRINT_NUMBER
    case 0xC1983F: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:189 LDX #0
    case 0xC19842: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:189 LDX #0
    // Overlapping static entry reached from 0xC19842.
    case 0xC19844: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:190 STX @LOCAL02
    case 0xC19845: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:191 JMP @UNKNOWN10
    case 0xC19847: cpu.execute_instruction<0x4C>(0x0098E1, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:193 STX @VIRTUAL04
    case 0xC1984A: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:194 LDA @VIRTUAL02
    case 0xC1984C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:195 LDY #.SIZEOF(char_struct)
    case 0xC1984E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:195 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1984E.
    case 0xC19850: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:196 JSL MULT168
    case 0xC19851: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1952F-jp.asm:197 CLC
    case 0xC19855: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:198 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC19856: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:198 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC19856.
    case 0xC19858: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:199 CLC
    case 0xC19859: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:200 ADC @VIRTUAL04
    case 0xC1985A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:200 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC19858.
    case 0xC1985B: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:201 TAX
    case 0xC1985C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:202 SEP #PROC_FLAGS::ACCUM8
    case 0xC1985D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:203 LDA __BSS_START__,X
    case 0xC1985F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:204 STA @LOCAL01
    case 0xC19862: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:205 REP #PROC_FLAGS::ACCUM8
    case 0xC19864: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:206 AND #$00FF
    case 0xC19866: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:206 AND #$00FF
    // Overlapping static entry reached from 0xC19866.
    case 0xC19868: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:207 BEQ @UNKNOWN9
    case 0xC19869: cpu.execute_instruction<0xF0>(0x000071, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:208 LDX @LOCAL02
    case 0xC1986B: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:209 TXA
    case 0xC1986D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:210 BEQ @UNKNOWN5
    case 0xC1986E: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:211 CMP #1
    case 0xC19870: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:211 CMP #1
    // Overlapping static entry reached from 0xC19870.
    case 0xC19872: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:212 BEQ @UNKNOWN6
    case 0xC19873: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:213 CMP #5
    case 0xC19875: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:213 CMP #5
    // Overlapping static entry reached from 0xC19875.
    case 0xC19877: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:214 BEQ @UNKNOWN7
    case 0xC19878: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:215 BRA @UNKNOWN11
    case 0xC1987A: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:217 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC1987C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x003947, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:217 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    // Overlapping static entry reached from 0xC1987C.
    case 0xC1987E: cpu.execute_instruction<0x39>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1952F-jp.asm:217 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC1987F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:217 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC19881: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:217 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    // Overlapping static entry reached from 0xC19881.
    case 0xC19883: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:217 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC19884: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:218 LDA @LOCAL01
    case 0xC19886: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:219 AND #$00FF
    case 0xC19888: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:219 AND #$00FF
    // Overlapping static entry reached from 0xC19888.
    case 0xC1988A: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:220 DEC
    case 0xC1988B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/unknown/C1/C1952F-jp.asm:221 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1988C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/unknown/C1/C1952F-jp.asm:221 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1988E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/unknown/C1/C1952F-jp.asm:221 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1988F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/unknown/C1/C1952F-jp.asm:221 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC19890: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/unknown/C1/C1952F-jp.asm:221 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC19892: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:222 CLC
    case 0xC19893: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:223 ADC @VIRTUAL06
    case 0xC19894: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:224 STA @VIRTUAL06
    case 0xC19896: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:225 BRA @UNKNOWN8
    case 0xC19898: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:227 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC1989A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x003947, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:227 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    // Overlapping static entry reached from 0xC1989A.
    case 0xC1989C: cpu.execute_instruction<0x39>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1952F-jp.asm:227 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC1989D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:227 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC1989F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:227 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    // Overlapping static entry reached from 0xC1989F.
    case 0xC198A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:227 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC198A2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:228 LDA @LOCAL01
    case 0xC198A4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:229 AND #$00FF
    case 0xC198A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:229 AND #$00FF
    // Overlapping static entry reached from 0xC198A6.
    case 0xC198A8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/unknown/C1/C1952F-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC198A9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/unknown/C1/C1952F-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC198AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/unknown/C1/C1952F-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC198AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/unknown/C1/C1952F-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC198AD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/unknown/C1/C1952F-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC198AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:231 CLC
    case 0xC198B0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:232 ADC #60
    case 0xC198B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00003C, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:232 ADC #60
    // Overlapping static entry reached from 0xC198B1.
    case 0xC198B3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:233 CLC
    case 0xC198B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:234 ADC @VIRTUAL06
    case 0xC198B5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:235 STA @VIRTUAL06
    case 0xC198B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:236 BRA @UNKNOWN8
    case 0xC198B9: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:238 LOADPTR STATUS_EQUIP_WINDOW_TEXT_6, @VIRTUAL06
    case 0xC198BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x0039A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:238 LOADPTR STATUS_EQUIP_WINDOW_TEXT_6, @VIRTUAL06
    // Overlapping static entry reached from 0xC198BB.
    case 0xC198BD: cpu.execute_instruction<0x39>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1952F-jp.asm:238 LOADPTR STATUS_EQUIP_WINDOW_TEXT_6, @VIRTUAL06
    case 0xC198BE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:238 LOADPTR STATUS_EQUIP_WINDOW_TEXT_6, @VIRTUAL06
    case 0xC198C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:238 LOADPTR STATUS_EQUIP_WINDOW_TEXT_6, @VIRTUAL06
    // Overlapping static entry reached from 0xC198C0.
    case 0xC198C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:238 LOADPTR STATUS_EQUIP_WINDOW_TEXT_6, @VIRTUAL06
    case 0xC198C3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:240 LDX #1
    case 0xC198C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:240 LDX #1
    // Overlapping static entry reached from 0xC198C5.
    case 0xC198C7: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:241 TXA
    case 0xC198C8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:242 JSR UNKNOWN_C438A5
    case 0xC198C9: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F-jp.asm:243 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC198CC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:243 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC198CE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:243 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC198D0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:243 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC198D2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:244 LDA #256
    case 0xC198D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:244 LDA #256
    // Overlapping static entry reached from 0xC198D4.
    case 0xC198D6: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:245 JSR PRINT_STRING
    case 0xC198D7: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:245 JSR PRINT_STRING
    // Overlapping static entry reached from 0xC198D6.
    case 0xC198D8: cpu.execute_instruction<0xDD>(0x008014, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:246 BRA @UNKNOWN11
    case 0xC198DA: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:246 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xC198D8.
    case 0xC198DB: cpu.execute_instruction<0x0F>(0xE813A6, 4); return true;
    // src/unknown/C1/C1952F-jp.asm:248 LDX @LOCAL02
    case 0xC198DC: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:249 INX
    case 0xC198DE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:250 STX @LOCAL02
    case 0xC198DF: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:252 CPX #7
    case 0xC198E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:252 CPX #7
    // Overlapping static entry reached from 0xC198E1.
    case 0xC198E3: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C1/C1952F-jp.asm:253 BCCL @UNKNOWN4
    case 0xC198E4: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C1/C1952F-jp.asm:253 BCCL @UNKNOWN4
    case 0xC198E6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C1/C1952F-jp.asm:253 BCCL @UNKNOWN4
    case 0xC198E8: cpu.execute_instruction<0x4C>(0x00984A, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:255 LDX #1
    case 0xC198EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:255 LDX #1
    // Overlapping static entry reached from 0xC198EB.
    case 0xC198ED: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:256 LDA #10
    case 0xC198EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:256 LDA #10
    // Overlapping static entry reached from 0xC198EE.
    case 0xC198F0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:257 JSR UNKNOWN_C438A5
    case 0xC198F1: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:258 LDX #0
    case 0xC198F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:258 LDX #0
    // Overlapping static entry reached from 0xC198F4.
    case 0xC198F6: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:259 LDA @VIRTUAL02
    case 0xC198F7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:260 LDY #.SIZEOF(char_struct)
    case 0xC198F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:260 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC198F9.
    case 0xC198FB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:261 JSL MULT168
    case 0xC198FC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C1952F-jp.asm:262 CLC
    case 0xC19900: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F-jp.asm:263 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC19901: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:263 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC19901.
    case 0xC19903: cpu.execute_instruction<0x9C>(0x008022, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:264 JSL UNKNOWN_C223D9
    case 0xC19904: cpu.execute_instruction<0x22>(0xC22280, 4); return true;
    // src/unknown/C1/C1952F-jp.asm:264 JSL UNKNOWN_C223D9
    // Overlapping static entry reached from 0xC19903.
    case 0xC19906: cpu.execute_instruction<0x22>(0xEC20C2, 4); return true;
    // src/unknown/C1/C1952F-jp.asm:265 JSR PRINT_LETTER
    case 0xC19908: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:265 JSR PRINT_LETTER
    // Overlapping static entry reached from 0xC19906.
    case 0xC1990A: cpu.execute_instruction<0x11>(0x0000A5, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:266 LDA @VIRTUAL02
    case 0xC1990B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:266 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1990A.
    case 0xC1990C: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:267 CMP #2
    case 0xC1990D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:267 CMP #2
    // Overlapping static entry reached from 0xC1990D.
    case 0xC1990F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:268 BEQ @UNKNOWN12
    case 0xC19910: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:269 LDX #7
    case 0xC19912: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000007, 2); else cpu.execute_instruction<0xA2>(0x000007, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:269 LDX #7
    // Overlapping static entry reached from 0xC19912.
    case 0xC19914: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:270 LDA #1
    case 0xC19915: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:270 LDA #1
    // Overlapping static entry reached from 0xC19915.
    case 0xC19917: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:271 JSR UNKNOWN_C438A5
    case 0xC19918: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:272 LOADPTR STATUS_EQUIP_WINDOW_TEXT_4, @LOCAL00
    case 0xC1991B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x00392C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:272 LOADPTR STATUS_EQUIP_WINDOW_TEXT_4, @LOCAL00
    // Overlapping static entry reached from 0xC1991B.
    case 0xC1991D: cpu.execute_instruction<0x39>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1952F-jp.asm:272 LOADPTR STATUS_EQUIP_WINDOW_TEXT_4, @LOCAL00
    case 0xC1991E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:272 LOADPTR STATUS_EQUIP_WINDOW_TEXT_4, @LOCAL00
    case 0xC19920: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F-jp.asm:272 LOADPTR STATUS_EQUIP_WINDOW_TEXT_4, @LOCAL00
    // Overlapping static entry reached from 0xC19920.
    case 0xC19922: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1952F-jp.asm:272 LOADPTR STATUS_EQUIP_WINDOW_TEXT_4, @LOCAL00
    case 0xC19923: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:273 LDA #27
    case 0xC19925: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00001B, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:273 LDA #27
    // Overlapping static entry reached from 0xC19925.
    case 0xC19927: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F-jp.asm:274 JSR PRINT_STRING
    case 0xC19928: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:276 JSR CLEAR_INSTANT_PRINTING
    case 0xC1992B: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/unknown/C1/C1952F-jp.asm:276 JSR CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC199A6.
    case 0xC1992D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1952F-jp.asm:277 END_C_FUNCTION
    case 0xC1992E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1952F-jp.asm:277 END_C_FUNCTION
    case 0xC1992F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19A11.asm (unresolved).
bool execute_unresolved_c1_c19a11_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19A11.asm:3 BEGIN_C_FUNCTION
    case 0xC19A56: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    case 0xC19A58: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    case 0xC19A59: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    case 0xC19A5A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    case 0xC19A5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC19A5B.
    case 0xC19A5D: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    case 0xC19A5E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    case 0xC19A5F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:11 TXY
    case 0xC19A60: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:12 STY @LOCAL01
    case 0xC19A61: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C19A11.asm:13 TAX
    case 0xC19A63: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:14 STX @LOCAL00
    case 0xC19A64: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C19A11.asm:15 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC19A66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C19A11.asm:15 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC19A66.
    case 0xC19A68: cpu.execute_instruction<0x9F>(0x08B122, 4); return true;
    // src/unknown/C1/C19A11.asm:16 JSL UNKNOWN_C20A20
    case 0xC19A69: cpu.execute_instruction<0x22>(0xC208B1, 4); return true;
    // src/unknown/C1/C19A11.asm:16 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC19A68.
    case 0xC19A6C: cpu.execute_instruction<0xC2>(0x0000A6, 2); return true;
    // src/unknown/C1/C19A11.asm:17 LDX @LOCAL00
    case 0xC19A6D: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C19A11.asm:17 LDX @LOCAL00
    // Overlapping static entry reached from 0xC19A6C.
    case 0xC19A6E: cpu.execute_instruction<0x0E>(0x00208A, 3); return true;
    // src/unknown/C1/C19A11.asm:18 TXA
    case 0xC19A6F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:19 JSR SET_WINDOW_FOCUS
    case 0xC19A70: cpu.execute_instruction<0x20>(0x00013B, 3); return true;
    // src/unknown/C1/C19A11.asm:19 JSR SET_WINDOW_FOCUS
    // Overlapping static entry reached from 0xC19A6E.
    case 0xC19A71: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:19 JSR SET_WINDOW_FOCUS
    // Overlapping static entry reached from 0xC19A71.
    case 0xC19A72: cpu.execute_instruction<0x01>(0x0000A4, 2); return true;
    // src/unknown/C1/C19A11.asm:20 LDY @LOCAL01
    case 0xC19A73: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C19A11.asm:20 LDY @LOCAL01
    // Overlapping static entry reached from 0xC19A72.
    case 0xC19A74: cpu.execute_instruction<0x10>(0x000098, 2); return true;
    // src/unknown/C1/C19A11.asm:21 TYA
    case 0xC19A75: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:22 JSR SELECTION_MENU
    case 0xC19A76: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C19A11.asm:23 TAX
    case 0xC19A79: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:24 STX @LOCAL00
    case 0xC19A7A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C19A11.asm:25 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC19A7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C19A11.asm:25 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC19A7C.
    case 0xC19A7E: cpu.execute_instruction<0x9F>(0x094D22, 4); return true;
    // src/unknown/C1/C19A11.asm:26 JSL UNKNOWN_C20ABC
    case 0xC19A7F: cpu.execute_instruction<0x22>(0xC2094D, 4); return true;
    // src/unknown/C1/C19A11.asm:26 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC19A7E.
    case 0xC19A82: cpu.execute_instruction<0xC2>(0x0000A6, 2); return true;
    // src/unknown/C1/C19A11.asm:27 LDX @LOCAL00
    case 0xC19A83: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C19A11.asm:27 LDX @LOCAL00
    // Overlapping static entry reached from 0xC19A82.
    case 0xC19A84: cpu.execute_instruction<0x0E>(0x002B8A, 3); return true;
    // src/unknown/C1/C19A11.asm:28 TXA
    case 0xC19A85: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19A11.asm:29 END_C_FUNCTION
    case 0xC19A86: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19A11.asm:29 END_C_FUNCTION
    case 0xC19A87: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19A43-jp.asm (unresolved).
bool execute_unresolved_c1_c19a43_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19A43-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC19A88: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19A43-jp.asm:10 END_STACK_VARS
    case 0xC19A8A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19A43-jp.asm:10 END_STACK_VARS
    case 0xC19A8B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19A43-jp.asm:10 END_STACK_VARS
    case 0xC19A8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19A43-jp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC19A8C.
    case 0xC19A8E: cpu.execute_instruction<0xFF>(0x35A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19A43-jp.asm:10 END_STACK_VARS
    case 0xC19A8F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C19A43-jp.asm:11 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC19A90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:11 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC19A90.
    case 0xC19A92: cpu.execute_instruction<0x9F>(0x08B122, 4); return true;
    // src/unknown/C1/C19A43-jp.asm:12 JSL UNKNOWN_C20A20
    case 0xC19A93: cpu.execute_instruction<0x22>(0xC208B1, 4); return true;
    // src/unknown/C1/C19A43-jp.asm:12 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC19A92.
    case 0xC19A96: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19A43-jp.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0D
    case 0xC19A97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19A43-jp.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0D
    // Overlapping static entry reached from 0xC19A96.
    case 0xC19A98: cpu.execute_instruction<0x0D>(0x002000, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19A43-jp.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0D
    // Overlapping static entry reached from 0xC19A97.
    case 0xC19A99: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C19A43-jp.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0D
    case 0xC19A9A: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C19A43-jp.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN0D
    // Overlapping static entry reached from 0xC19A98.
    case 0xC19A9B: cpu.execute_instruction<0xE4>(0x000006, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:14 LOADPTR STATUS_EQUIP_WINDOW_TEXT_7, @LOCAL00
    case 0xC19A9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AB, 2); else cpu.execute_instruction<0xA9>(0x0039AB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:14 LOADPTR STATUS_EQUIP_WINDOW_TEXT_7, @LOCAL00
    // Overlapping static entry reached from 0xC19A9D.
    case 0xC19A9F: cpu.execute_instruction<0x39>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19A43-jp.asm:14 LOADPTR STATUS_EQUIP_WINDOW_TEXT_7, @LOCAL00
    case 0xC19AA0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:14 LOADPTR STATUS_EQUIP_WINDOW_TEXT_7, @LOCAL00
    case 0xC19AA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:14 LOADPTR STATUS_EQUIP_WINDOW_TEXT_7, @LOCAL00
    // Overlapping static entry reached from 0xC19AA2.
    case 0xC19AA4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19A43-jp.asm:14 LOADPTR STATUS_EQUIP_WINDOW_TEXT_7, @LOCAL00
    case 0xC19AA5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:15 LDX #6
    case 0xC19AA7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:15 LDX #6
    // Overlapping static entry reached from 0xC19AA7.
    case 0xC19AA9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:16 LDA #13
    case 0xC19AAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:16 LDA #13
    // Overlapping static entry reached from 0xC19AAA.
    case 0xC19AAC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:17 JSL SET_WINDOW_TITLE
    case 0xC19AAD: cpu.execute_instruction<0x22>(0xC2030C, 4); return true;
    // src/unknown/C1/C19A43-jp.asm:18 LDA #0
    case 0xC19AB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:18 LDA #0
    // Overlapping static entry reached from 0xC19AB1.
    case 0xC19AB3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:19 STA @VIRTUAL02
    case 0xC19AB4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:20 BRA @UNKNOWN2
    case 0xC19AB6: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:22 LDA @VIRTUAL02
    case 0xC19AB8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:23 CLC
    case 0xC19ABA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19A43-jp.asm:24 ADC #.LOWORD(GAME_STATE)
    case 0xC19ABB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:24 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC19ABB.
    case 0xC19ABD: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C19A43-jp.asm:25 TAX
    case 0xC19ABE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19A43-jp.asm:26 LDA a:game_state::escargo_express_items,X
    case 0xC19ABF: cpu.execute_instruction<0xBD>(0x000053, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:27 AND #$00FF
    case 0xC19AC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC19AC2.
    case 0xC19AC4: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:28 TAY
    case 0xC19AC5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C19A43-jp.asm:29 STY @LOCAL03
    case 0xC19AC6: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:30 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19AC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:30 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19AC8.
    case 0xC19ACA: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19A43-jp.asm:30 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19ACB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19A43-jp.asm:30 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19ACA.
    case 0xC19ACC: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:30 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19ACD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:30 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19ACC.
    case 0xC19ACE: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:30 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19ACD.
    case 0xC19ACF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19A43-jp.asm:30 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19AD0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:31 TYA
    case 0xC19AD2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C1/C19A43-jp.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19AD3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C1/C19A43-jp.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19AD5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C1/C19A43-jp.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19AD6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C1/C19A43-jp.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19AD8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C1/C19A43-jp.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19AD9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C1/C19A43-jp.asm:32 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19ADA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19A43-jp.asm:33 CLC
    case 0xC19ADB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19A43-jp.asm:34 ADC @VIRTUAL06
    case 0xC19ADC: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:35 STA @VIRTUAL06
    case 0xC19ADE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:36 STA @LOCAL00
    case 0xC19AE0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:37 LDA @VIRTUAL06+2
    case 0xC19AE2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:38 STA @LOCAL00+2
    case 0xC19AE4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:39 LDX #.SIZEOF(item::name)
    case 0xC19AE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:39 LDX #.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC19AE6.
    case 0xC19AE8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:40 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC19AE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:40 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC19AE9.
    case 0xC19AEB: cpu.execute_instruction<0x9F>(0x8EC322, 4); return true;
    // src/unknown/C1/C19A43-jp.asm:41 JSL MEMCPY16
    case 0xC19AEC: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C1/C19A43-jp.asm:41 JSL MEMCPY16
    // Overlapping static entry reached from 0xC19AEB.
    case 0xC19AEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC19AF0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:42 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC19AEF.
    case 0xC19AF1: cpu.execute_instruction<0x20>(0x00549C, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:43 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    case 0xC19AF2: cpu.execute_instruction<0x9C>(0x009F54, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:43 STZ TEMPORARY_TEXT_BUFFER+.SIZEOF(item::name)
    // Overlapping static entry reached from 0xC19AF1.
    case 0xC19AF4: cpu.execute_instruction<0x9F>(0xF018A4, 4); return true;
    // src/unknown/C1/C19A43-jp.asm:44 LDY @LOCAL03
    case 0xC19AF5: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:45 BEQ @UNKNOWN1
    case 0xC19AF7: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:45 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC19AF4.
    case 0xC19AF8: cpu.execute_instruction<0x26>(0x0000C2, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC19AF9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:46 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC19AF8.
    case 0xC19AFA: cpu.execute_instruction<0x20>(0x004AA9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:47 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19AFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:47 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC19AFB.
    case 0xC19AFD: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19A43-jp.asm:47 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19AFE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19A43-jp.asm:47 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19B00: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19A43-jp.asm:47 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19B01: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19A43-jp.asm:47 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19B03: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19A43-jp.asm:47 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19B04: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19A43-jp.asm:47 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC19B06: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:48 REP #PROC_FLAGS::ACCUM8
    case 0xC19B08: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19A43-jp.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19B0A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19A43-jp.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19B0C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19A43-jp.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19B0E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19A43-jp.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19B10: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:50 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19B12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:50 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19B12.
    case 0xC19B14: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C19A43-jp.asm:50 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19B15: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:50 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19B17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19A43-jp.asm:50 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC19B17.
    case 0xC19B19: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C19A43-jp.asm:50 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC19B1A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:51 JSR UNKNOWN_C113D1
    case 0xC19B1C: cpu.execute_instruction<0x20>(0x001A00, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC19B1F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:54 INC @VIRTUAL02
    case 0xC19B21: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:56 LDA @VIRTUAL02
    case 0xC19B23: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:57 CMP #36
    case 0xC19B25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000024, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:57 CMP #36
    // Overlapping static entry reached from 0xC19B25.
    case 0xC19B27: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:58 BCC @UNKNOWN0
    case 0xC19B28: cpu.execute_instruction<0x90>(0x00008E, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:59 LDY #1
    case 0xC19B2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:59 LDY #1
    // Overlapping static entry reached from 0xC19B2A.
    case 0xC19B2C: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:60 LDX #0
    case 0xC19B2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:60 LDX #0
    // Overlapping static entry reached from 0xC19B2D.
    case 0xC19B2F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:61 LDA #2
    case 0xC19B30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:61 LDA #2
    // Overlapping static entry reached from 0xC19B30.
    case 0xC19B32: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:62 JSR UNKNOWN_C1180D
    case 0xC19B33: cpu.execute_instruction<0x20>(0x001FA6, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:63 LDA #1
    case 0xC19B36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:63 LDA #1
    // Overlapping static entry reached from 0xC19B36.
    case 0xC19B38: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:64 JSR SELECTION_MENU
    case 0xC19B39: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:65 TAX
    case 0xC19B3C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19A43-jp.asm:66 STX @LOCAL02
    case 0xC19B3D: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:67 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC19B3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/unknown/C1/C19A43-jp.asm:67 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC19B3F.
    case 0xC19B41: cpu.execute_instruction<0x9F>(0x094D22, 4); return true;
    // src/unknown/C1/C19A43-jp.asm:68 JSL UNKNOWN_C20ABC
    case 0xC19B42: cpu.execute_instruction<0x22>(0xC2094D, 4); return true;
    // src/unknown/C1/C19A43-jp.asm:68 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC19B41.
    case 0xC19B45: cpu.execute_instruction<0xC2>(0x0000A6, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:69 LDX @LOCAL02
    case 0xC19B46: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:69 LDX @LOCAL02
    // Overlapping static entry reached from 0xC19B45.
    case 0xC19B47: cpu.execute_instruction<0x16>(0x00008A, 2); return true;
    // src/unknown/C1/C19A43-jp.asm:70 TXA
    case 0xC19B48: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19A43-jp.asm:71 PLD
    case 0xC19B49: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C1/C19A43-jp.asm:72 RTS
    case 0xC19B4A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19CDD.asm (unresolved).
bool execute_unresolved_c1_c19cdd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19CDD.asm:3 BEGIN_C_FUNCTION
    case 0xC19CE5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19CDD.asm:7 END_STACK_VARS
    case 0xC19CE7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19CDD.asm:7 END_STACK_VARS
    case 0xC19CE8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19CDD.asm:7 END_STACK_VARS
    case 0xC19CE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19CDD.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC19CE9.
    case 0xC19CEB: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19CDD.asm:7 END_STACK_VARS
    case 0xC19CEC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:8 LDA #0
    case 0xC19CED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19CDD.asm:8 LDA #0
    // Overlapping static entry reached from 0xC19CED.
    case 0xC19CEF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19CDD.asm:9 STA @LOCAL01
    case 0xC19CF0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19CDD.asm:10 BRA @UNKNOWN1
    case 0xC19CF2: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C1/C19CDD.asm:12 LDY #.SIZEOF(char_struct)
    case 0xC19CF4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C19CDD.asm:12 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19CF4.
    case 0xC19CF6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19CDD.asm:13 JSL MULT168
    case 0xC19CF7: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C19CDD.asm:14 TAX
    case 0xC19CFB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:15 LDA #$0400
    case 0xC19CFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000400, 3); return true;
    // src/unknown/C1/C19CDD.asm:15 LDA #$0400
    // Overlapping static entry reached from 0xC19CFC.
    case 0xC19CFE: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/unknown/C1/C19CDD.asm:16 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    case 0xC19CFF: cpu.execute_instruction<0x9D>(0x009CCD, 3); return true;
    // src/unknown/C1/C19CDD.asm:16 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    // Overlapping static entry reached from 0xC19CFE.
    case 0xC19D00: cpu.execute_instruction<0xCD>(0x00A59C, 3); return true;
    // src/unknown/C1/C19CDD.asm:17 LDA @LOCAL01
    case 0xC19D02: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C19CDD.asm:17 LDA @LOCAL01
    // Overlapping static entry reached from 0xC19D00.
    case 0xC19D03: cpu.execute_instruction<0x12>(0x00001A, 2); return true;
    // src/unknown/C1/C19CDD.asm:18 INC
    case 0xC19D04: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:19 STA @LOCAL01
    case 0xC19D05: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19CDD.asm:21 CMP #PLAYER_CHAR_COUNT
    case 0xC19D07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C19CDD.asm:21 CMP #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC19D07.
    case 0xC19D09: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C19CDD.asm:22 BCC @UNKNOWN0
    case 0xC19D0A: cpu.execute_instruction<0x90>(0x0000E8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x001F1D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D0C.
    case 0xC19D0E: cpu.execute_instruction<0x1F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D0F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D0E.
    case 0xC19D12: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D11.
    case 0xC19D13: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D14: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19CDD.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D12.
    case 0xC19D15: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:24 LDA GAME_STATE+game_state::text_flavour
    case 0xC19D16: cpu.execute_instruction<0xAD>(0x009C7E, 3); return true;
    // src/unknown/C1/C19CDD.asm:25 AND #$00FF
    case 0xC19D19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19CDD.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC19D19.
    case 0xC19D1B: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C19CDD.asm:26 DEC
    case 0xC19D1C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C1/C19CDD.asm:27 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19D1D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C1/C19CDD.asm:27 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19D1F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C1/C19CDD.asm:27 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19D20: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19CDD.asm:28 TAX
    case 0xC19D22: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:29 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC19D23: cpu.execute_instruction<0xBF>(0xE01F0E, 4); return true;
    // src/unknown/C1/C19CDD.asm:30 CLC
    case 0xC19D27: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:31 ADC #40
    case 0xC19D28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/unknown/C1/C19CDD.asm:31 ADC #40
    // Overlapping static entry reached from 0xC19D28.
    case 0xC19D2A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C19CDD.asm:32 CLC
    case 0xC19D2B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19CDD.asm:33 ADC @VIRTUAL06
    case 0xC19D2C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19CDD.asm:34 STA @VIRTUAL06
    case 0xC19D2E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19CDD.asm:35 STA @LOCAL00
    case 0xC19D30: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19CDD.asm:36 LDA @VIRTUAL06+2
    case 0xC19D32: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19CDD.asm:37 STA @LOCAL00+2
    case 0xC19D34: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19CDD.asm:38 LDX #BPP2PALETTE_SIZE
    case 0xC19D36: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C1/C19CDD.asm:38 LDX #BPP2PALETTE_SIZE
    // Overlapping static entry reached from 0xC19D36.
    case 0xC19D38: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19CDD.asm:39 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 3
    case 0xC19D39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000218, 3); return true;
    // src/unknown/C1/C19CDD.asm:39 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC19D39.
    case 0xC19D3B: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C1/C19CDD.asm:40 JSL MEMCPY16
    case 0xC19D3C: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C1/C19CDD.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC19D40: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19CDD.asm:42 LDA #PALETTE_UPLOAD::FULL
    case 0xC19D42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C1/C19CDD.asm:43 STA PALETTE_UPLOAD_MODE
    case 0xC19D44: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C1/C19CDD.asm:43 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC19D42.
    case 0xC19D45: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C1/C19CDD.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC19D47: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C19CDD.asm:45 LDA #1
    case 0xC19D49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C19CDD.asm:45 LDA #1
    // Overlapping static entry reached from 0xC19D49.
    case 0xC19D4B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C19CDD.asm:46 STA REDRAW_ALL_WINDOWS
    case 0xC19D4C: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19CDD.asm:47 END_C_FUNCTION
    case 0xC19D4F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19CDD.asm:47 END_C_FUNCTION
    case 0xC19D50: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19D49.asm (unresolved).
bool execute_unresolved_c1_c19d49_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19D49.asm:3 BEGIN_C_FUNCTION
    case 0xC19D51: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19D49.asm:7 END_STACK_VARS
    case 0xC19D53: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19D49.asm:7 END_STACK_VARS
    case 0xC19D54: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19D49.asm:7 END_STACK_VARS
    case 0xC19D55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19D49.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC19D55.
    case 0xC19D57: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19D49.asm:7 END_STACK_VARS
    case 0xC19D58: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:8 LDA #0
    case 0xC19D59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19D49.asm:8 LDA #0
    // Overlapping static entry reached from 0xC19D59.
    case 0xC19D5B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19D49.asm:9 STA @LOCAL01
    case 0xC19D5C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19D49.asm:10 BRA @UNKNOWN1
    case 0xC19D5E: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C1/C19D49.asm:12 LDY #.SIZEOF(char_struct)
    case 0xC19D60: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C19D49.asm:12 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19D60.
    case 0xC19D62: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19D49.asm:13 JSL MULT168
    case 0xC19D63: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C1/C19D49.asm:14 TAX
    case 0xC19D67: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:15 LDA #$0400
    case 0xC19D68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000400, 3); return true;
    // src/unknown/C1/C19D49.asm:15 LDA #$0400
    // Overlapping static entry reached from 0xC19D68.
    case 0xC19D6A: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/unknown/C1/C19D49.asm:16 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    case 0xC19D6B: cpu.execute_instruction<0x9D>(0x009CCD, 3); return true;
    // src/unknown/C1/C19D49.asm:16 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    // Overlapping static entry reached from 0xC19D6A.
    case 0xC19D6C: cpu.execute_instruction<0xCD>(0x00A59C, 3); return true;
    // src/unknown/C1/C19D49.asm:17 LDA @LOCAL01
    case 0xC19D6E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C19D49.asm:17 LDA @LOCAL01
    // Overlapping static entry reached from 0xC19D6C.
    case 0xC19D6F: cpu.execute_instruction<0x12>(0x00001A, 2); return true;
    // src/unknown/C1/C19D49.asm:18 INC
    case 0xC19D70: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:19 STA @LOCAL01
    case 0xC19D71: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19D49.asm:21 CMP #PLAYER_CHAR_COUNT
    case 0xC19D73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C19D49.asm:21 CMP #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC19D73.
    case 0xC19D75: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C19D49.asm:22 BCC @UNKNOWN0
    case 0xC19D76: cpu.execute_instruction<0x90>(0x0000E8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x001F1D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D78.
    case 0xC19D7A: cpu.execute_instruction<0x1F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D7B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D7A.
    case 0xC19D7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D7D.
    case 0xC19D7F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC19D80: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19D49.asm:23 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC19D7E.
    case 0xC19D81: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:24 LDA GAME_STATE+game_state::text_flavour
    case 0xC19D82: cpu.execute_instruction<0xAD>(0x009C7E, 3); return true;
    // src/unknown/C1/C19D49.asm:25 AND #$00FF
    case 0xC19D85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19D49.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC19D85.
    case 0xC19D87: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C19D49.asm:26 DEC
    case 0xC19D88: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C1/C19D49.asm:27 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19D89: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C1/C19D49.asm:27 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19D8B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C1/C19D49.asm:27 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19D8C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19D49.asm:28 TAX
    case 0xC19D8E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:29 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC19D8F: cpu.execute_instruction<0xBF>(0xE01F0E, 4); return true;
    // src/unknown/C1/C19D49.asm:30 CLC
    case 0xC19D93: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:31 ADC #24
    case 0xC19D94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000018, 2); else cpu.execute_instruction<0x69>(0x000018, 3); return true;
    // src/unknown/C1/C19D49.asm:31 ADC #24
    // Overlapping static entry reached from 0xC19D94.
    case 0xC19D96: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C19D49.asm:32 CLC
    case 0xC19D97: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19D49.asm:33 ADC @VIRTUAL06
    case 0xC19D98: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19D49.asm:34 STA @VIRTUAL06
    case 0xC19D9A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19D49.asm:35 STA @LOCAL00
    case 0xC19D9C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19D49.asm:36 LDA @VIRTUAL06+2
    case 0xC19D9E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19D49.asm:37 STA @LOCAL00+2
    case 0xC19DA0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19D49.asm:38 LDX #BPP2PALETTE_SIZE
    case 0xC19DA2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C1/C19D49.asm:38 LDX #BPP2PALETTE_SIZE
    // Overlapping static entry reached from 0xC19DA2.
    case 0xC19DA4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19D49.asm:39 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 3
    case 0xC19DA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000218, 3); return true;
    // src/unknown/C1/C19D49.asm:39 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC19DA5.
    case 0xC19DA7: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C1/C19D49.asm:40 JSL MEMCPY16
    case 0xC19DA8: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C1/C19D49.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC19DAC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19D49.asm:42 LDA #PALETTE_UPLOAD::FULL
    case 0xC19DAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C1/C19D49.asm:43 STA PALETTE_UPLOAD_MODE
    case 0xC19DB0: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C1/C19D49.asm:43 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC19DAE.
    case 0xC19DB1: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C1/C19D49.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC19DB3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C19D49.asm:45 LDA #1
    case 0xC19DB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C19D49.asm:45 LDA #1
    // Overlapping static entry reached from 0xC19DB5.
    case 0xC19DB7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C19D49.asm:46 STA REDRAW_ALL_WINDOWS
    case 0xC19DB8: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19D49.asm:47 END_C_FUNCTION
    case 0xC19DBB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19D49.asm:47 END_C_FUNCTION
    case 0xC19DBC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
