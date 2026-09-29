// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C1/C10000.asm (unresolved).
bool execute_unresolved_c1_c10000_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C10000.asm:3 JSR HIDE_HPPP_WINDOWS
    case 0xC10000: cpu.execute_instruction<0x20>(0x000A1D, 3); return true;
    // src/unknown/C1/C10000.asm:4 RTL
    case 0xC10003: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10004.asm (unresolved).
bool execute_unresolved_c1_c10004_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10004.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10004: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10004.asm:7 END_STACK_VARS
    case 0xC10006: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10004.asm:7 END_STACK_VARS
    case 0xC10007: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10004.asm:7 END_STACK_VARS
    case 0xC10008: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10004.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10008.
    case 0xC1000A: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10004.asm:7 END_STACK_VARS
    case 0xC1000B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10004.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1000C: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10004.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1000E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10004.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10010: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10004.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10012: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C10004.asm:9 JSL UNKNOWN_C0943C
    case 0xC10014: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10004.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10018: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10004.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1001A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10004.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1001C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10004.asm:10 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1001E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C10004.asm:11 JSL DISPLAY_TEXT
    case 0xC10020: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/unknown/C1/C10004.asm:13 JSL WINDOW_TICK
    case 0xC10024: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C1/C10004.asm:14 LDA ENTITY_FADE_ENTITY
    case 0xC10028: cpu.execute_instruction<0xAD>(0x00B4A8, 3); return true;
    // src/unknown/C1/C10004.asm:15 CMP #.LOWORD(-1)
    case 0xC1002B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C10004.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1002B.
    case 0xC1002D: cpu.execute_instruction<0xFF>(0x22F4D0, 4); return true;
    // src/unknown/C1/C10004.asm:16 BNE @UNKNOWN0
    case 0xC1002E: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/unknown/C1/C10004.asm:17 JSL UNKNOWN_C09451
    case 0xC10030: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/unknown/C1/C10004.asm:17 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC1002D.
    case 0xC10031: cpu.execute_instruction<0x51>(0x000094, 2); return true;
    // src/unknown/C1/C10004.asm:17 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC10031.
    case 0xC10033: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10004.asm:18 END_C_FUNCTION
    case 0xC10034: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C10004.asm:18 END_C_FUNCTION
    case 0xC10035: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1004E.asm (unresolved).
bool execute_unresolved_c1_c1004e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1004E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1004E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1004E.asm:5 LDA RENDER_HPPP_WINDOWS
    case 0xC10050: cpu.execute_instruction<0xAD>(0x0089C9, 3); return true;
    // src/unknown/C1/C1004E.asm:6 AND #$00FF
    case 0xC10053: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1004E.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC10053.
    case 0xC10055: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1004E.asm:7 BEQ @UNKNOWN0
    case 0xC10056: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C1/C1004E.asm:8 JSR UNKNOWN_C3E450
    case 0xC10058: cpu.execute_instruction<0x22>(0xC3E450, 4); return true;
    // src/unknown/C1/C1004E.asm:10 LDA BATTLE_MODE_FLAG
    case 0xC1005C: cpu.execute_instruction<0xAD>(0x009643, 3); return true;
    // src/unknown/C1/C1004E.asm:11 BEQ @UNKNOWN1
    case 0xC1005F: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C1004E.asm:12 JSL UNKNOWN_C43568
    case 0xC10061: cpu.execute_instruction<0x22>(0xC43568, 4); return true;
    // src/unknown/C1/C1004E.asm:13 BRA @UNKNOWN2
    case 0xC10065: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C1/C1004E.asm:15 JSL OAM_CLEAR
    case 0xC10067: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/C1/C1004E.asm:16 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC1006B: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/unknown/C1/C1004E.asm:17 JSL UPDATE_SCREEN
    case 0xC1006F: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/unknown/C1/C1004E.asm:18 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC10073: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1004E.asm:20 END_C_FUNCTION
    case 0xC10077: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1008E.asm (unresolved).
bool execute_unresolved_c1_c1008e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1008E.asm:3 BEGIN_C_FUNCTION
    case 0xC1008E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1008E.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC10090: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1008E.asm:7 LDA #1
    case 0xC10092: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C1/C1008E.asm:8 STA EXTRA_TICK_ON_WINDOW_CLOSE
    case 0xC10094: cpu.execute_instruction<0x8D>(0x005E70, 3); return true;
    // src/unknown/C1/C1008E.asm:8 STA EXTRA_TICK_ON_WINDOW_CLOSE
    // Overlapping static entry reached from 0xC10092.
    case 0xC10095: cpu.execute_instruction<0x70>(0x00005E, 2); return true;
    // src/unknown/C1/C1008E.asm:10 BRA @UNKNOWN1
    case 0xC10097: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C1/C1008E.asm:12 LDA WINDOW_TAIL
    case 0xC10099: cpu.execute_instruction<0xAD>(0x0088E2, 3); return true;
    // src/unknown/C1/C1008E.asm:13 LDY #.SIZEOF(window_stats)
    case 0xC1009C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C1008E.asm:13 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1098D.
    case 0xC1009D: cpu.execute_instruction<0x52>(0x000000, 2); return true;
    // src/unknown/C1/C1008E.asm:13 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1009C.
    case 0xC1009E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1008E.asm:14 JSL MULT168
    case 0xC1009F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1008E.asm:15 TAX
    case 0xC100A3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1008E.asm:16 LDA WINDOW_STATS + window_stats::id,X
    case 0xC100A4: cpu.execute_instruction<0xBD>(0x008654, 3); return true;
    // src/unknown/C1/C1008E.asm:17 JSR CLOSE_WINDOW
    case 0xC100A7: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/unknown/C1/C1008E.asm:17 JSR CLOSE_WINDOW
    // Overlapping static entry reached from 0xC1AD64.
    case 0xC100A9: cpu.execute_instruction<0xE5>(0x0000C3, 2); return true;
    // src/unknown/C1/C1008E.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC100AB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1008E.asm:22 LDA WINDOW_TAIL
    case 0xC100AD: cpu.execute_instruction<0xAD>(0x0088E2, 3); return true;
    // src/unknown/C1/C1008E.asm:23 CMP #.LOWORD(-1)
    case 0xC100B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1008E.asm:23 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC100B0.
    case 0xC100B2: cpu.execute_instruction<0xFF>(0x22E4D0, 4); return true;
    // src/unknown/C1/C1008E.asm:24 BNE @UNKNOWN0
    case 0xC100B3: cpu.execute_instruction<0xD0>(0x0000E4, 2); return true;
    // src/unknown/C1/C1008E.asm:26 JSR CLEAR_INSTANT_PRINTING
    case 0xC100B5: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/unknown/C1/C1008E.asm:26 JSR CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC100B2.
    case 0xC100B6: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1008E.asm:26 JSR CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC100B6.
    case 0xC100B7: cpu.execute_instruction<0xE4>(0x0000C3, 2); return true;
    // src/unknown/C1/C1008E.asm:27 JSL WINDOW_TICK
    case 0xC100B9: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C1/C1008E.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC100BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1008E.asm:29 STZ EXTRA_TICK_ON_WINDOW_CLOSE
    case 0xC100BF: cpu.execute_instruction<0x9C>(0x005E70, 3); return true;
    // src/unknown/C1/C1008E.asm:30 JSL UNKNOWN_C43F53
    case 0xC100C2: cpu.execute_instruction<0x22>(0xC43F53, 4); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1008E.asm:32 END_C_FUNCTION
    case 0xC100C6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1008E_redirect.asm (unresolved).
bool execute_unresolved_c1_c1008e_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1008E_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10BF8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1008E_redirect.asm:5 JSR UNKNOWN_C1008E
    case 0xC10BFA: cpu.execute_instruction<0x20>(0x00008E, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1008E_redirect.asm:6 END_C_FUNCTION
    case 0xC10BFD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C100D6.asm (unresolved).
bool execute_unresolved_c1_c100d6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C100D6.asm:3 BEGIN_C_FUNCTION
    case 0xC100D6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    case 0xC100D8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    case 0xC100D9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    case 0xC100DA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    case 0xC100DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC100DB.
    case 0xC100DD: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    case 0xC100DE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C100D6.asm:7 END_STACK_VARS
    case 0xC100DF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C100D6.asm:8 TAX
    case 0xC100E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C100D6.asm:9 STX @LOCAL00
    case 0xC100E1: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C100D6.asm:10 JSR CLEAR_INSTANT_PRINTING
    case 0xC100E3: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/unknown/C1/C100D6.asm:11 JSL WINDOW_TICK
    case 0xC100E7: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C1/C100D6.asm:12 BRA @UNKNOWN1
    case 0xC100EB: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C100D6.asm:14 JSL UNKNOWN_C12E42
    case 0xC100ED: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/unknown/C1/C100D6.asm:16 LDX @LOCAL00
    case 0xC100F1: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C100D6.asm:17 TXA
    case 0xC100F3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C100D6.asm:18 DEX
    case 0xC100F4: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C100D6.asm:19 STX @LOCAL00
    case 0xC100F5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C100D6.asm:20 CMP #0
    case 0xC100F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C100D6.asm:20 CMP #0
    // Overlapping static entry reached from 0xC1012D.
    case 0xC100F8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C100D6.asm:20 CMP #0
    // Overlapping static entry reached from 0xC100F7.
    case 0xC100F9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C100D6.asm:21 BNE @UNKNOWN0
    case 0xC100FA: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C100D6.asm:22 END_C_FUNCTION
    case 0xC100FC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C100D6.asm:22 END_C_FUNCTION
    case 0xC100FD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C100FE.asm (unresolved).
bool execute_unresolved_c1_c100fe_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C100FE.asm:3 BEGIN_C_FUNCTION
    case 0xC100FE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    case 0xC10100: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    case 0xC10101: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    case 0xC10102: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    case 0xC10103: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10103.
    case 0xC10105: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    case 0xC10106: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C100FE.asm:7 END_STACK_VARS
    case 0xC10107: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C100FE.asm:8 TAX
    case 0xC10108: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C100FE.asm:9 LDA DEBUG
    case 0xC10109: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/unknown/C1/C100FE.asm:10 BEQ @UNKNOWN3
    case 0xC1010C: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C1/C100FE.asm:11 LDA BATTLE_MODE
    case 0xC1010E: cpu.execute_instruction<0xAD>(0x004DC2, 3); return true;
    // src/unknown/C1/C100FE.asm:12 BNE @UNKNOWN3
    case 0xC10111: cpu.execute_instruction<0xD0>(0x000025, 2); return true;
    // src/unknown/C1/C100FE.asm:13 BRA @UNKNOWN1
    case 0xC10113: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C100FE.asm:15 JSL UNKNOWN_C12E42
    case 0xC10115: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/unknown/C1/C100FE.asm:17 LDA PAD_PRESS
    case 0xC10119: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C100FE.asm:18 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1011C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x00A0A0, 3); return true;
    // src/unknown/C1/C100FE.asm:18 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1011C.
    case 0xC1011E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x00F4F0, 3); return true;
    // src/unknown/C1/C100FE.asm:19 BEQ @UNKNOWN0
    case 0xC1011F: cpu.execute_instruction<0xF0>(0x0000F4, 2); return true;
    // src/unknown/C1/C100FE.asm:19 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC1011E.
    case 0xC10120: cpu.execute_instruction<0xF4>(0x004180, 3); return true;
    // src/unknown/C1/C100FE.asm:20 BRA @UNKNOWN9
    case 0xC10121: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/unknown/C1/C100FE.asm:22 LDA DEBUG
    case 0xC10123: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/unknown/C1/C100FE.asm:23 BEQ @UNKNOWN3
    case 0xC10126: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C1/C100FE.asm:24 LDA PAD_PRESS
    case 0xC10128: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C100FE.asm:25 AND #PAD::B_BUTTON | PAD::R_BUTTON
    case 0xC1012B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x008010, 3); return true;
    // src/unknown/C1/C100FE.asm:25 AND #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC1012B.
    case 0xC1012D: cpu.execute_instruction<0x80>(0x0000C9, 2); return true;
    // src/unknown/C1/C100FE.asm:26 CMP #PAD::B_BUTTON | PAD::R_BUTTON
    case 0xC1012E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x008010, 3); return true;
    // src/unknown/C1/C100FE.asm:26 CMP #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC1012E.
    case 0xC10130: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/C1/C100FE.asm:27 BNE @UNKNOWN3
    case 0xC10131: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C100FE.asm:28 STZ TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC10133: cpu.execute_instruction<0x9C>(0x009645, 3); return true;
    // src/unknown/C1/C100FE.asm:29 BRA @UNKNOWN4
    case 0xC10136: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C1/C100FE.asm:31 LDA TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC10138: cpu.execute_instruction<0xAD>(0x009645, 3); return true;
    // src/unknown/C1/C100FE.asm:32 BNE @UNKNOWN2
    case 0xC1013B: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C1/C100FE.asm:34 CPX #0
    case 0xC1013D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C1/C100FE.asm:34 CPX #0
    // Overlapping static entry reached from 0xC1013D.
    case 0xC1013F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C100FE.asm:35 BEQ @UNKNOWN5
    case 0xC10140: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C1/C100FE.asm:36 TXA
    case 0xC10142: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C100FE.asm:37 BRA @UNKNOWN6
    case 0xC10143: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C100FE.asm:39 LDA TEXT_SPEED_BASED_WAIT
    case 0xC10145: cpu.execute_instruction<0xAD>(0x00964B, 3); return true;
    // src/unknown/C1/C100FE.asm:41 TAX
    case 0xC10148: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C100FE.asm:42 STX @LOCAL00
    case 0xC10149: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C100FE.asm:43 BRA @UNKNOWN8
    case 0xC1014B: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C100FE.asm:43 BRA @UNKNOWN8
    // Overlapping static entry reached from 0xC10181.
    case 0xC1014C: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/unknown/C1/C100FE.asm:45 JSL UNKNOWN_C12E42
    case 0xC1014D: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/unknown/C1/C100FE.asm:45 JSL UNKNOWN_C12E42
    // Overlapping static entry reached from 0xC1014C.
    case 0xC1014E: cpu.execute_instruction<0x42>(0x00002E, 2); return true;
    // src/unknown/C1/C100FE.asm:45 JSL UNKNOWN_C12E42
    // Overlapping static entry reached from 0xC1014E.
    case 0xC10150: cpu.execute_instruction<0xC1>(0x0000A6, 2); return true;
    // src/unknown/C1/C100FE.asm:47 LDX @LOCAL00
    case 0xC10151: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C100FE.asm:47 LDX @LOCAL00
    // Overlapping static entry reached from 0xC10150.
    case 0xC10152: cpu.execute_instruction<0x0E>(0x00CA8A, 3); return true;
    // src/unknown/C1/C100FE.asm:48 TXA
    case 0xC10153: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C100FE.asm:49 DEX
    case 0xC10154: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C100FE.asm:50 STX @LOCAL00
    case 0xC10155: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C100FE.asm:50 STX @LOCAL00
    // Overlapping static entry reached from 0xC10184.
    case 0xC10156: cpu.execute_instruction<0x0E>(0x0000C9, 3); return true;
    // src/unknown/C1/C100FE.asm:51 CMP #0
    case 0xC10157: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C100FE.asm:51 CMP #0
    // Overlapping static entry reached from 0xC10157.
    case 0xC10159: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C100FE.asm:52 BEQ @UNKNOWN9
    case 0xC1015A: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C1/C100FE.asm:53 LDA PAD_PRESS
    case 0xC1015C: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C100FE.asm:54 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1015F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x00A0A0, 3); return true;
    // src/unknown/C1/C100FE.asm:54 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1015F.
    case 0xC10161: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x00E9F0, 3); return true;
    // src/unknown/C1/C100FE.asm:55 BEQ @UNKNOWN7
    case 0xC10162: cpu.execute_instruction<0xF0>(0x0000E9, 2); return true;
    // src/unknown/C1/C100FE.asm:55 BEQ @UNKNOWN7
    // Overlapping static entry reached from 0xC10161.
    case 0xC10163: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00002B, 2); else cpu.execute_instruction<0xE9>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C100FE.asm:57 END_C_FUNCTION
    case 0xC10164: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C100FE.asm:57 END_C_FUNCTION
    case 0xC10165: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C102D0.asm (unresolved).
bool execute_unresolved_c1_c102d0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C102D0.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC102D0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C102D0.asm:4 STZ ACTIONSCRIPT_STATE
    case 0xC102D2: cpu.execute_instruction<0x9C>(0x009641, 3); return true;
    // src/unknown/C1/C102D0.asm:5 JSR CLEAR_INSTANT_PRINTING
    case 0xC102D5: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/unknown/C1/C102D0.asm:6 JSL WINDOW_TICK
    case 0xC102D9: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C1/C102D0.asm:6 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC102E9.
    case 0xC102DB: cpu.execute_instruction<0x2D>(0x0080C1, 3); return true;
    // src/unknown/C1/C102D0.asm:7 BRA @UNKNOWN2
    case 0xC102DD: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C1/C102D0.asm:7 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC102DB.
    case 0xC102DE: cpu.execute_instruction<0x19>(0x006CAD, 3); return true;
    // src/unknown/C1/C102D0.asm:9 LDA DEBUG
    case 0xC102DF: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/unknown/C1/C102D0.asm:9 LDA DEBUG
    // Overlapping static entry reached from 0xC102DE.
    case 0xC102E1: cpu.execute_instruction<0x43>(0x0000F0, 2); return true;
    // src/unknown/C1/C102D0.asm:10 BEQ @UNKNOWN1
    case 0xC102E2: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C1/C102D0.asm:10 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC102E1.
    case 0xC102E3: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C1/C102D0.asm:11 LDA PAD_STATE
    case 0xC102E4: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C1/C102D0.asm:11 LDA PAD_STATE
    // Overlapping static entry reached from 0xC102E3.
    case 0xC102E5: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C1/C102D0.asm:12 AND #PAD::START_BUTTON
    case 0xC102E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/unknown/C1/C102D0.asm:12 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC102E7.
    case 0xC102E9: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/unknown/C1/C102D0.asm:13 BEQ @UNKNOWN1
    case 0xC102EA: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C1/C102D0.asm:13 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC102E9.
    case 0xC102EB: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C1/C102D0.asm:14 LDA PAD_STATE
    case 0xC102EC: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C1/C102D0.asm:15 AND #PAD::SELECT_BUTTON
    case 0xC102EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/unknown/C1/C102D0.asm:15 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC102EF.
    case 0xC102F1: cpu.execute_instruction<0x20>(0x000CD0, 3); return true;
    // src/unknown/C1/C102D0.asm:16 BNE @UNKNOWN3
    case 0xC102F2: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C1/C102D0.asm:18 JSL UNKNOWN_C1004E
    case 0xC102F4: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/unknown/C1/C102D0.asm:20 LDA ACTIONSCRIPT_STATE
    case 0xC102F8: cpu.execute_instruction<0xAD>(0x009641, 3); return true;
    // src/unknown/C1/C102D0.asm:21 BEQ @UNKNOWN0
    case 0xC102FB: cpu.execute_instruction<0xF0>(0x0000E2, 2); return true;
    // src/unknown/C1/C102D0.asm:22 STZ ACTIONSCRIPT_STATE
    case 0xC102FD: cpu.execute_instruction<0x9C>(0x009641, 3); return true;
    // src/unknown/C1/C102D0.asm:24 RTS
    case 0xC10300: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1078D.asm (unresolved).
bool execute_unresolved_c1_c1078d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1078D.asm:3 BEGIN_C_FUNCTION
    case 0xC1078D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1078D.asm:6 END_STACK_VARS
    case 0xC1078F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1078D.asm:6 END_STACK_VARS
    case 0xC10790: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1078D.asm:6 END_STACK_VARS
    case 0xC10791: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1078D.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC10791.
    case 0xC10793: cpu.execute_instruction<0xFF>(0x7EA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1078D.asm:6 END_STACK_VARS
    case 0xC10794: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1183 LDA #.HIWORD(src)
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC10795: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:1183 LDA #.HIWORD(src)
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    // Overlapping static entry reached from 0xC10795.
    case 0xC10797: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1184 STA $0E
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC10798: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1185 LDA #dest
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC1079A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x007E40, 3); return true;
    // include/macros.asm:1185 LDA #dest
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    // Overlapping static entry reached from 0xC1079A.
    case 0xC1079C: cpu.execute_instruction<0x7E>(0x001085, 3); return true;
    // include/macros.asm:1186 STA $10
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC1079D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1187 LDY #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC1079F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00007E, 2); else cpu.execute_instruction<0xA0>(0x00827E, 3); return true;
    // include/macros.asm:1187 LDY #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    // Overlapping static entry reached from 0xC1079F.
    case 0xC107A1: cpu.execute_instruction<0x82>(0x0040A2, 3); return true;
    // include/macros.asm:1188 LDX #size
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC107A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000240, 3); return true;
    // include/macros.asm:1188 LDX #size
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    // Overlapping static entry reached from 0xC107A2.
    case 0xC107A4: cpu.execute_instruction<0x02>(0x0000E2, 2); return true;
    // include/macros.asm:1189 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC107A5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1192 LDA #unk
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC107A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1194 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    case 0xC107A9: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // include/macros.asm:1194 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Macro caller: src/unknown/C1/C1078D.asm:7 COPY_TO_VRAM2 BG2_BUFFER + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2, VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, ACTIVE_HPPP_WINDOW_Y_OFFSET, $240, 0
    // Overlapping static entry reached from 0xC107A7.
    case 0xC107AA: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1078D.asm:8 END_C_FUNCTION
    case 0xC107AD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1078D.asm:8 END_C_FUNCTION
    case 0xC107AE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C107AF.asm (unresolved).
bool execute_unresolved_c1_c107af_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C107AF.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC107AF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    case 0xC107B1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    case 0xC107B2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    case 0xC107B3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    case 0xC107B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC107B4.
    case 0xC107B6: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    case 0xC107B7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    case 0xC107B8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:16 STA @LOCAL08
    case 0xC107B9: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C1/C107AF.asm:16 STA @LOCAL08
    // Overlapping static entry reached from 0xC107B6.
    case 0xC107BA: cpu.execute_instruction<0x20>(0x0052A0, 3); return true;
    // src/unknown/C1/C107AF.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC107BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C107AF.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC107BB.
    case 0xC107BD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C107AF.asm:18 JSL MULT168
    case 0xC107BE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C107AF.asm:19 TAY
    case 0xC107C2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:20 LDA WINDOW_STATS + window_stats::tilemap_address,Y
    case 0xC107C3: cpu.execute_instruction<0xB9>(0x008685, 3); return true;
    // src/unknown/C1/C107AF.asm:21 STA @LOCAL07
    case 0xC107C6: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C1/C107AF.asm:22 LDA WINDOW_STATS + window_stats::window_x,Y
    case 0xC107C8: cpu.execute_instruction<0xB9>(0x008656, 3); return true;
    // src/unknown/C1/C107AF.asm:23 ASL
    case 0xC107CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:24 STA @VIRTUAL02
    case 0xC107CC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C107AF.asm:25 LDA WINDOW_STATS + window_stats::window_y,Y
    case 0xC107CE: cpu.execute_instruction<0xB9>(0x008658, 3); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:26 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC107D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:26 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC107D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:26 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC107D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:26 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC107D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:26 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC107D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:26 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC107D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:27 CLC
    case 0xC107D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:28 ADC @VIRTUAL02
    case 0xC107D8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C107AF.asm:29 CLC
    case 0xC107DA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:30 ADC #.LOWORD(BG2_BUFFER)
    case 0xC107DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x007DFE, 3); return true;
    // src/unknown/C1/C107AF.asm:30 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC107DB.
    case 0xC107DD: cpu.execute_instruction<0x7D>(0x00B9AA, 3); return true;
    // src/unknown/C1/C107AF.asm:31 TAX
    case 0xC107DE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:32 LDA WINDOW_STATS + window_stats::width,Y
    case 0xC107DF: cpu.execute_instruction<0xB9>(0x00865A, 3); return true;
    // src/unknown/C1/C107AF.asm:32 LDA WINDOW_STATS + window_stats::width,Y
    // Overlapping static entry reached from 0xC107DD.
    case 0xC107E0: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:32 LDA WINDOW_STATS + window_stats::width,Y
    // Overlapping static entry reached from 0xC107E0.
    case 0xC107E1: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/unknown/C1/C107AF.asm:33 STA @VIRTUAL04
    case 0xC107E2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C107AF.asm:33 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC107E1.
    case 0xC107E3: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C1/C107AF.asm:34 STA @LOCAL06
    case 0xC107E4: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C107AF.asm:34 STA @LOCAL06
    // Overlapping static entry reached from 0xC107E3.
    case 0xC107E5: cpu.execute_instruction<0x1C>(0x005CB9, 3); return true;
    // src/unknown/C1/C107AF.asm:35 LDA WINDOW_STATS + window_stats::height,Y
    case 0xC107E6: cpu.execute_instruction<0xB9>(0x00865C, 3); return true;
    // src/unknown/C1/C107AF.asm:35 LDA WINDOW_STATS + window_stats::height,Y
    // Overlapping static entry reached from 0xC107E5.
    case 0xC107E8: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/unknown/C1/C107AF.asm:36 STA @LOCAL05
    case 0xC107E9: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C107AF.asm:36 STA @LOCAL05
    // Overlapping static entry reached from 0xC107E8.
    case 0xC107EA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:37 LDA __BSS_START__,X
    case 0xC107EB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:38 BEQ @UNKNOWN0
    case 0xC107EE: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C107AF.asm:39 CMP #$3C10
    case 0xC107F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x003C10, 3); return true;
    // src/unknown/C1/C107AF.asm:39 CMP #$3C10
    // Overlapping static entry reached from 0xC107F0.
    case 0xC107F2: cpu.execute_instruction<0x3C>(0x000DD0, 3); return true;
    // src/unknown/C1/C107AF.asm:40 BNE @UNKNOWN1
    case 0xC107F3: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C1/C107AF.asm:42 LDA #$3C10
    case 0xC107F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x003C10, 3); return true;
    // src/unknown/C1/C107AF.asm:42 LDA #$3C10
    // Overlapping static entry reached from 0xC107F5.
    case 0xC107F7: cpu.execute_instruction<0x3C>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF.asm:43 STA __BSS_START__,X
    case 0xC107F8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:43 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC107F7.
    case 0xC107FA: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/unknown/C1/C107AF.asm:44 TXY
    case 0xC107FB: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:45 INY
    case 0xC107FC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:46 INY
    case 0xC107FD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:47 STY @LOCAL04
    case 0xC107FE: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:48 BRA @UNKNOWN2
    case 0xC10800: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C1/C107AF.asm:50 LDA #$3C13
    case 0xC10802: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x003C13, 3); return true;
    // src/unknown/C1/C107AF.asm:50 LDA #$3C13
    // Overlapping static entry reached from 0xC10802.
    case 0xC10804: cpu.execute_instruction<0x3C>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF.asm:51 STA __BSS_START__,X
    case 0xC10805: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:51 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC10804.
    case 0xC10807: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/unknown/C1/C107AF.asm:52 TXY
    case 0xC10808: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:53 INY
    case 0xC10809: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:54 INY
    case 0xC1080A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:55 STY @LOCAL04
    case 0xC1080B: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:57 LDA @LOCAL08
    case 0xC1080D: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C1/C107AF.asm:58 LDY #.SIZEOF(window_stats)
    case 0xC1080F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C107AF.asm:58 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1080F.
    case 0xC10811: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C107AF.asm:59 JSL MULT168
    case 0xC10812: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C107AF.asm:60 STA @LOCAL03
    case 0xC10816: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C107AF.asm:61 TAX
    case 0xC10818: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC10819: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C107AF.asm:63 LDA WINDOW_STATS + window_stats::unknown59,X
    case 0xC1081B: cpu.execute_instruction<0xBD>(0x00868B, 3); return true;
    // src/unknown/C1/C107AF.asm:64 STA @VIRTUAL00
    case 0xC1081E: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C107AF.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC10820: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C107AF.asm:66 LDA @VIRTUAL00
    case 0xC10822: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C107AF.asm:67 AND #$00FF
    case 0xC10824: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C107AF.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC10824.
    case 0xC10826: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C107AF.asm:68 BEQL @UNKNOWN6
    case 0xC10827: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C107AF.asm:68 BEQL @UNKNOWN6
    case 0xC10829: cpu.execute_instruction<0x4C>(0x0008B8, 3); return true;
    // src/unknown/C1/C107AF.asm:69 LDA @LOCAL03
    case 0xC1082C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C107AF.asm:70 CLC
    case 0xC1082E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:71 ADC #.LOWORD(WINDOW_STATS) + window_stats::title
    case 0xC1082F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x00868C, 3); return true;
    // src/unknown/C1/C107AF.asm:71 ADC #.LOWORD(WINDOW_STATS) + window_stats::title
    // Overlapping static entry reached from 0xC1082F.
    case 0xC10831: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/unknown/C1/C107AF.asm:72 STA @LOCAL02
    case 0xC10832: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C107AF.asm:72 STA @LOCAL02
    // Overlapping static entry reached from 0xC10831.
    case 0xC10833: cpu.execute_instruction<0x14>(0x0000A5, 2); return true;
    // src/unknown/C1/C107AF.asm:73 LDA @VIRTUAL00
    case 0xC10834: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C107AF.asm:73 LDA @VIRTUAL00
    // Overlapping static entry reached from 0xC10833.
    case 0xC10835: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C1/C107AF.asm:74 AND #$00FF
    case 0xC10836: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C107AF.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC10836.
    case 0xC10838: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C107AF.asm:75 DEC
    case 0xC10839: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:76 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC1083A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:76 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC1083B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:76 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC1083C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:76 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC1083D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:77 CLC
    case 0xC1083E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:78 ADC #$02E0
    case 0xC1083F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x0002E0, 3); return true;
    // src/unknown/C1/C107AF.asm:78 ADC #$02E0
    // Overlapping static entry reached from 0xC1083F.
    case 0xC10841: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C1/C107AF.asm:79 STA @VIRTUAL02
    case 0xC10842: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C107AF.asm:80 LDA #$3C16
    case 0xC10844: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x003C16, 3); return true;
    // src/unknown/C1/C107AF.asm:80 LDA #$3C16
    // Overlapping static entry reached from 0xC10844.
    case 0xC10846: cpu.execute_instruction<0x3C>(0x0018A4, 3); return true;
    // src/unknown/C1/C107AF.asm:81 LDY @LOCAL04
    case 0xC10847: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:82 STA __BSS_START__,Y
    case 0xC10849: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:83 TYX
    case 0xC1084C: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:84 INX
    case 0xC1084D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:85 INX
    case 0xC1084E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:86 STX @LOCAL04
    case 0xC1084F: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:87 LDA @VIRTUAL04
    case 0xC10851: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C107AF.asm:88 DEC
    case 0xC10853: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:89 STA @VIRTUAL04
    case 0xC10854: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C107AF.asm:90 STA @LOCAL01
    case 0xC10856: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C107AF.asm:91 LDA @LOCAL02
    case 0xC10858: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C107AF.asm:92 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1085A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C107AF.asm:92 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1085C: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C107AF.asm:92 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1085D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C107AF.asm:92 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1085F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C107AF.asm:92 PROMOTENEARPTRA @VIRTUAL06
    case 0xC10860: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C107AF.asm:92 PROMOTENEARPTRA @VIRTUAL06
    case 0xC10862: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C107AF.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0xC10864: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C107AF.asm:94 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10866: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C107AF.asm:94 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10868: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C107AF.asm:94 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1086A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C107AF.asm:94 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1086C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C107AF.asm:95 JSL STRLEN
    case 0xC1086E: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // src/unknown/C1/C107AF.asm:96 STA @VIRTUAL04
    case 0xC10872: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C107AF.asm:97 ASL
    case 0xC10874: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:98 ADC @VIRTUAL04
    case 0xC10875: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C107AF.asm:99 ASL
    case 0xC10877: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:100 CLC
    case 0xC10878: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:101 ADC #7
    case 0xC10879: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C1/C107AF.asm:101 ADC #7
    // Overlapping static entry reached from 0xC10879.
    case 0xC1087B: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C1/C107AF.asm:102 LSR
    case 0xC1087C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:103 LSR
    case 0xC1087D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:104 LSR
    case 0xC1087E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:105 STA @LOCAL02
    case 0xC1087F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C107AF.asm:106 BRA @UNKNOWN5
    case 0xC10881: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C1/C107AF.asm:108 LDA @VIRTUAL02
    case 0xC10883: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C107AF.asm:109 CLC
    case 0xC10885: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:110 ADC #$2000
    case 0xC10886: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/unknown/C1/C107AF.asm:110 ADC #$2000
    // Overlapping static entry reached from 0xC10886.
    case 0xC10888: cpu.execute_instruction<0x20>(0x0018A6, 3); return true;
    // src/unknown/C1/C107AF.asm:111 LDX @LOCAL04
    case 0xC10889: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:112 STA __BSS_START__,X
    case 0xC1088B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:113 INC @VIRTUAL02
    case 0xC1088E: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C107AF.asm:114 INX
    case 0xC10890: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:115 INX
    case 0xC10891: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:116 STX @LOCAL04
    case 0xC10892: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:117 LDA @LOCAL01
    case 0xC10894: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C107AF.asm:118 STA @VIRTUAL04
    case 0xC10896: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C107AF.asm:119 DEC
    case 0xC10898: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:120 STA @VIRTUAL04
    case 0xC10899: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C107AF.asm:121 STA @LOCAL01
    case 0xC1089B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C107AF.asm:122 LDA @LOCAL02
    case 0xC1089D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C107AF.asm:123 DEC
    case 0xC1089F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:124 STA @LOCAL02
    case 0xC108A0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C107AF.asm:126 BNE @UNKNOWN4
    case 0xC108A2: cpu.execute_instruction<0xD0>(0x0000DF, 2); return true;
    // src/unknown/C1/C107AF.asm:127 LDA #$7C16
    case 0xC108A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x007C16, 3); return true;
    // src/unknown/C1/C107AF.asm:127 LDA #$7C16
    // Overlapping static entry reached from 0xC108A4.
    case 0xC108A6: cpu.execute_instruction<0x7C>(0x0018A6, 3); return true;
    // src/unknown/C1/C107AF.asm:128 LDX @LOCAL04
    case 0xC108A7: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:129 STA __BSS_START__,X
    case 0xC108A9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:130 TXY
    case 0xC108AC: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:131 INY
    case 0xC108AD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:132 INY
    case 0xC108AE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:133 STY @LOCAL04
    case 0xC108AF: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:134 LDA @LOCAL01
    case 0xC108B1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C107AF.asm:135 STA @VIRTUAL04
    case 0xC108B3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C107AF.asm:136 DEC
    case 0xC108B5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:137 STA @VIRTUAL04
    case 0xC108B6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C107AF.asm:139 LDA @LOCAL08
    case 0xC108B8: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C1/C107AF.asm:140 LDY #.SIZEOF(window_stats)
    case 0xC108BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C107AF.asm:140 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC108BA.
    case 0xC108BC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C107AF.asm:141 JSL MULT168
    case 0xC108BD: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C107AF.asm:142 TAX
    case 0xC108C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:143 LDA WINDOW_STATS+window_stats::id,X
    case 0xC108C2: cpu.execute_instruction<0xBD>(0x008654, 3); return true;
    // src/unknown/C1/C107AF.asm:144 CMP PAGINATION_WINDOW
    case 0xC108C5: cpu.execute_instruction<0xCD>(0x005E7A, 3); return true;
    // src/unknown/C1/C107AF.asm:145 BNE @UNKNOWN7
    case 0xC108C8: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C1/C107AF.asm:146 LDA PAGINATION_ANIMATION_FRAME
    case 0xC108CA: cpu.execute_instruction<0xAD>(0x005E7C, 3); return true;
    // src/unknown/C1/C107AF.asm:147 CMP #$FFFF
    case 0xC108CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C107AF.asm:147 CMP #$FFFF
    // Overlapping static entry reached from 0xC108CD.
    case 0xC108CF: cpu.execute_instruction<0xFF>(0xA508F0, 4); return true;
    // src/unknown/C1/C107AF.asm:148 BEQ @UNKNOWN7
    case 0xC108D0: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C1/C107AF.asm:149 LDA @VIRTUAL04
    case 0xC108D2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C107AF.asm:149 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC108CF.
    case 0xC108D3: cpu.execute_instruction<0x04>(0x000038, 2); return true;
    // src/unknown/C1/C107AF.asm:150 SEC
    case 0xC108D4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:151 SBC #4
    case 0xC108D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C1/C107AF.asm:151 SBC #4
    // Overlapping static entry reached from 0xC108D5.
    case 0xC108D7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C107AF.asm:152 STA @VIRTUAL04
    case 0xC108D8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C107AF.asm:154 LDX @VIRTUAL04
    case 0xC108DA: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C107AF.asm:155 BRA @UNKNOWN9
    case 0xC108DC: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C1/C107AF.asm:157 LDA #$3C11
    case 0xC108DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x003C11, 3); return true;
    // src/unknown/C1/C107AF.asm:157 LDA #$3C11
    // Overlapping static entry reached from 0xC108DE.
    case 0xC108E0: cpu.execute_instruction<0x3C>(0x0018A4, 3); return true;
    // src/unknown/C1/C107AF.asm:158 LDY @LOCAL04
    case 0xC108E1: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:159 STA __BSS_START__,Y
    case 0xC108E3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:160 INY
    case 0xC108E6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:161 INY
    case 0xC108E7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:162 STY @LOCAL04
    case 0xC108E8: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:163 DEX
    case 0xC108EA: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:165 BNE @UNKNOWN8
    case 0xC108EB: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/unknown/C1/C107AF.asm:166 LDA @LOCAL08
    case 0xC108ED: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C1/C107AF.asm:167 LDY #.SIZEOF(window_stats)
    case 0xC108EF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C107AF.asm:167 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC108EF.
    case 0xC108F1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C107AF.asm:168 JSL MULT168
    case 0xC108F2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C107AF.asm:169 TAX
    case 0xC108F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:170 LDA WINDOW_STATS+window_stats::id,X
    case 0xC108F7: cpu.execute_instruction<0xBD>(0x008654, 3); return true;
    // src/unknown/C1/C107AF.asm:171 CMP PAGINATION_WINDOW
    case 0xC108FA: cpu.execute_instruction<0xCD>(0x005E7A, 3); return true;
    // src/unknown/C1/C107AF.asm:172 BNE @UNKNOWN12
    case 0xC108FD: cpu.execute_instruction<0xD0>(0x000042, 2); return true;
    // src/unknown/C1/C107AF.asm:173 LDA PAGINATION_ANIMATION_FRAME
    case 0xC108FF: cpu.execute_instruction<0xAD>(0x005E7C, 3); return true;
    // src/unknown/C1/C107AF.asm:174 CMP #.LOWORD(-1)
    case 0xC10902: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C107AF.asm:174 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10902.
    case 0xC10904: cpu.execute_instruction<0xFF>(0xA93AF0, 4); return true;
    // src/unknown/C1/C107AF.asm:175 BEQ @UNKNOWN12
    case 0xC10905: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC10907: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00E43C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10904.
    case 0xC10908: cpu.execute_instruction<0x3C>(0x0085E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10907.
    case 0xC10909: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC1090A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10909.
    case 0xC1090B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC1090C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1090C.
    case 0xC1090E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC1090F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C107AF.asm:177 LDA PAGINATION_ANIMATION_FRAME
    case 0xC10911: cpu.execute_instruction<0xAD>(0x005E7C, 3); return true;
    // src/unknown/C1/C107AF.asm:178 ASL
    case 0xC10914: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:179 ASL
    case 0xC10915: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:180 CLC
    case 0xC10916: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:181 ADC @VIRTUAL0A
    case 0xC10917: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C107AF.asm:182 STA @VIRTUAL0A
    case 0xC10919: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1091B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1091B.
    case 0xC1091D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1091E: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10920: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10921: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10923: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10925: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C1/C107AF.asm:184 LDX #0
    case 0xC10927: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:184 LDX #0
    // Overlapping static entry reached from 0xC10927.
    case 0xC10929: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C107AF.asm:185 BRA @UNKNOWN11
    case 0xC1092A: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C1/C107AF.asm:187 LDA [@VIRTUAL06]
    case 0xC1092C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C107AF.asm:188 LDY @LOCAL04
    case 0xC1092E: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:189 STA __BSS_START__,Y
    case 0xC10930: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:190 INC @VIRTUAL06
    case 0xC10933: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C107AF.asm:191 INC @VIRTUAL06
    case 0xC10935: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C107AF.asm:192 INY
    case 0xC10937: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:193 INY
    case 0xC10938: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:194 STY @LOCAL04
    case 0xC10939: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:195 INX
    case 0xC1093B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:197 CPX #4
    case 0xC1093C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C1/C107AF.asm:197 CPX #4
    // Overlapping static entry reached from 0xC1093C.
    case 0xC1093E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C107AF.asm:198 BCC @UNKNOWN10
    case 0xC1093F: cpu.execute_instruction<0x90>(0x0000EB, 2); return true;
    // src/unknown/C1/C107AF.asm:200 LDY @LOCAL04
    case 0xC10941: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:201 LDA __BSS_START__,Y
    case 0xC10943: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:202 BEQ @UNKNOWN13
    case 0xC10946: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C107AF.asm:203 CMP #$7C10
    case 0xC10948: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x007C10, 3); return true;
    // src/unknown/C1/C107AF.asm:203 CMP #$7C10
    // Overlapping static entry reached from 0xC10948.
    case 0xC1094A: cpu.execute_instruction<0x7C>(0x000DD0, 3); return true;
    // src/unknown/C1/C107AF.asm:204 BNE @UNKNOWN14
    case 0xC1094B: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C1/C107AF.asm:206 LDA #$7C10
    case 0xC1094D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x007C10, 3); return true;
    // src/unknown/C1/C107AF.asm:206 LDA #$7C10
    // Overlapping static entry reached from 0xC1094D.
    case 0xC1094F: cpu.execute_instruction<0x7C>(0x000099, 3); return true;
    // src/unknown/C1/C107AF.asm:207 STA __BSS_START__,Y
    case 0xC10950: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:208 TYA
    case 0xC10953: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:209 INC
    case 0xC10954: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:210 INC
    case 0xC10955: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:211 STA @LOCAL08
    case 0xC10956: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C1/C107AF.asm:212 BRA @UNKNOWN15
    case 0xC10958: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C1/C107AF.asm:214 LDA #$7C13
    case 0xC1095A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x007C13, 3); return true;
    // src/unknown/C1/C107AF.asm:214 LDA #$7C13
    // Overlapping static entry reached from 0xC1095A.
    case 0xC1095C: cpu.execute_instruction<0x7C>(0x000099, 3); return true;
    // src/unknown/C1/C107AF.asm:215 STA __BSS_START__,Y
    case 0xC1095D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:216 TYA
    case 0xC10960: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:217 INC
    case 0xC10961: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:218 INC
    case 0xC10962: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:219 STA @LOCAL08
    case 0xC10963: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C1/C107AF.asm:221 LDA #32
    case 0xC10965: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C1/C107AF.asm:221 LDA #32
    // Overlapping static entry reached from 0xC10965.
    case 0xC10967: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C1/C107AF.asm:222 SEC
    case 0xC10968: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:223 SBC @LOCAL06
    case 0xC10969: cpu.execute_instruction<0xE5>(0x00001C, 2); return true;
    // src/unknown/C1/C107AF.asm:224 DEC
    case 0xC1096B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:225 DEC
    case 0xC1096C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:226 ASL
    case 0xC1096D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:227 STA @VIRTUAL02
    case 0xC1096E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C107AF.asm:228 LDA @LOCAL08
    case 0xC10970: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C1/C107AF.asm:229 CLC
    case 0xC10972: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:230 ADC @VIRTUAL02
    case 0xC10973: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C107AF.asm:231 TAX
    case 0xC10975: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:232 LDY @LOCAL05
    case 0xC10976: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C1/C107AF.asm:233 BRA @UNKNOWN19
    case 0xC10978: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/unknown/C1/C107AF.asm:235 LDA #$3C12
    case 0xC1097A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x003C12, 3); return true;
    // src/unknown/C1/C107AF.asm:235 LDA #$3C12
    // Overlapping static entry reached from 0xC1097A.
    case 0xC1097C: cpu.execute_instruction<0x3C>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF.asm:236 STA __BSS_START__,X
    case 0xC1097D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:236 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1097C.
    case 0xC1097F: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/unknown/C1/C107AF.asm:237 INX
    case 0xC10980: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:238 INX
    case 0xC10981: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:239 LDA @LOCAL06
    case 0xC10982: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C107AF.asm:240 STA @LOCAL04
    case 0xC10984: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:241 BRA @UNKNOWN18
    case 0xC10986: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C1/C107AF.asm:243 LDA (@LOCAL07)
    case 0xC10988: cpu.execute_instruction<0xB2>(0x00001E, 2); return true;
    // src/unknown/C1/C107AF.asm:244 CLC
    case 0xC1098A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:245 ADC #$2000
    case 0xC1098B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/unknown/C1/C107AF.asm:245 ADC #$2000
    // Overlapping static entry reached from 0xC1098B.
    case 0xC1098D: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF.asm:246 STA __BSS_START__,X
    case 0xC1098E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:246 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1098D.
    case 0xC10990: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C1/C107AF.asm:247 INC @LOCAL07
    case 0xC10991: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // src/unknown/C1/C107AF.asm:248 INC @LOCAL07
    case 0xC10993: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // src/unknown/C1/C107AF.asm:249 INX
    case 0xC10995: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:250 INX
    case 0xC10996: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:251 LDA @LOCAL04
    case 0xC10997: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:252 DEC
    case 0xC10999: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:253 STA @LOCAL04
    case 0xC1099A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C107AF.asm:255 BNE @UNKNOWN17
    case 0xC1099C: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // src/unknown/C1/C107AF.asm:256 LDA #$7C12
    case 0xC1099E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x007C12, 3); return true;
    // src/unknown/C1/C107AF.asm:256 LDA #$7C12
    // Overlapping static entry reached from 0xC1099E.
    case 0xC109A0: cpu.execute_instruction<0x7C>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF.asm:257 STA __BSS_START__,X
    case 0xC109A1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:258 TXA
    case 0xC109A4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:259 INC
    case 0xC109A5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:260 INC
    case 0xC109A6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:261 STA @LOCAL03
    case 0xC109A7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C107AF.asm:262 LDA #32
    case 0xC109A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C1/C107AF.asm:262 LDA #32
    // Overlapping static entry reached from 0xC109A9.
    case 0xC109AB: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C1/C107AF.asm:263 SEC
    case 0xC109AC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:264 SBC @LOCAL06
    case 0xC109AD: cpu.execute_instruction<0xE5>(0x00001C, 2); return true;
    // src/unknown/C1/C107AF.asm:265 DEC
    case 0xC109AF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:266 DEC
    case 0xC109B0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:267 ASL
    case 0xC109B1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:268 STA @VIRTUAL02
    case 0xC109B2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C107AF.asm:269 LDA @LOCAL03
    case 0xC109B4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C107AF.asm:270 CLC
    case 0xC109B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:271 ADC @VIRTUAL02
    case 0xC109B7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C107AF.asm:272 TAX
    case 0xC109B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:273 DEY
    case 0xC109BA: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:275 BNE @UNKNOWN16
    case 0xC109BB: cpu.execute_instruction<0xD0>(0x0000BD, 2); return true;
    // src/unknown/C1/C107AF.asm:276 LDA __BSS_START__,X
    case 0xC109BD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:277 BEQ @UNKNOWN20
    case 0xC109C0: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C107AF.asm:278 CMP #$BC10
    case 0xC109C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x00BC10, 3); return true;
    // src/unknown/C1/C107AF.asm:278 CMP #$BC10
    // Overlapping static entry reached from 0xC109C2.
    case 0xC109C4: cpu.execute_instruction<0xBC>(0x000BD0, 3); return true;
    // src/unknown/C1/C107AF.asm:279 BNE @UNKNOWN21
    case 0xC109C5: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C1/C107AF.asm:281 LDA #$BC10
    case 0xC109C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x00BC10, 3); return true;
    // src/unknown/C1/C107AF.asm:281 LDA #$BC10
    // Overlapping static entry reached from 0xC109C7.
    case 0xC109C9: cpu.execute_instruction<0xBC>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF.asm:282 STA __BSS_START__,X
    case 0xC109CA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:282 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC109C9.
    case 0xC109CC: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/unknown/C1/C107AF.asm:283 TXY
    case 0xC109CD: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:284 INY
    case 0xC109CE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:285 INY
    case 0xC109CF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:286 BRA @UNKNOWN22
    case 0xC109D0: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C1/C107AF.asm:288 LDA #$BC13
    case 0xC109D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x00BC13, 3); return true;
    // src/unknown/C1/C107AF.asm:288 LDA #$BC13
    // Overlapping static entry reached from 0xC109D2.
    case 0xC109D4: cpu.execute_instruction<0xBC>(0x00009D, 3); return true;
    // src/unknown/C1/C107AF.asm:289 STA __BSS_START__,X
    case 0xC109D5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:289 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC109D4.
    case 0xC109D7: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/unknown/C1/C107AF.asm:290 TXY
    case 0xC109D8: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:291 INY
    case 0xC109D9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:292 INY
    case 0xC109DA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:294 LDX @LOCAL06
    case 0xC109DB: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C1/C107AF.asm:295 BRA @UNKNOWN24
    case 0xC109DD: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C1/C107AF.asm:297 LDA #$BC11
    case 0xC109DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x00BC11, 3); return true;
    // src/unknown/C1/C107AF.asm:297 LDA #$BC11
    // Overlapping static entry reached from 0xC109DF.
    case 0xC109E1: cpu.execute_instruction<0xBC>(0x000099, 3); return true;
    // src/unknown/C1/C107AF.asm:298 STA __BSS_START__,Y
    case 0xC109E2: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:298 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC109E1.
    case 0xC109E4: cpu.execute_instruction<0x00>(0x0000C8, 2); return true;
    // src/unknown/C1/C107AF.asm:299 INY
    case 0xC109E5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:300 INY
    case 0xC109E6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:301 DEX
    case 0xC109E7: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C107AF.asm:303 BNE @UNKNOWN23
    case 0xC109E8: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // src/unknown/C1/C107AF.asm:304 LDA __BSS_START__,Y
    case 0xC109EA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:305 BEQ @UNKNOWN25
    case 0xC109ED: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C107AF.asm:306 CMP #$FC10
    case 0xC109EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x00FC10, 3); return true;
    // src/unknown/C1/C107AF.asm:306 CMP #$FC10
    // Overlapping static entry reached from 0xC109EF.
    case 0xC109F1: cpu.execute_instruction<0xFC>(0x0008D0, 3); return true;
    // src/unknown/C1/C107AF.asm:307 BNE @UNKNOWN26
    case 0xC109F2: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C1/C107AF.asm:309 LDA #$FC10
    case 0xC109F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x00FC10, 3); return true;
    // src/unknown/C1/C107AF.asm:309 LDA #$FC10
    // Overlapping static entry reached from 0xC109F4.
    case 0xC109F6: cpu.execute_instruction<0xFC>(0x000099, 3); return true;
    // src/unknown/C1/C107AF.asm:310 STA __BSS_START__,Y
    case 0xC109F7: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:310 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC109F6.
    case 0xC109F9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C107AF.asm:311 BRA @UNKNOWN27
    case 0xC109FA: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C1/C107AF.asm:313 LDA #$FC13
    case 0xC109FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x00FC13, 3); return true;
    // src/unknown/C1/C107AF.asm:313 LDA #$FC13
    // Overlapping static entry reached from 0xC109FC.
    case 0xC109FE: cpu.execute_instruction<0xFC>(0x000099, 3); return true;
    // src/unknown/C1/C107AF.asm:314 STA __BSS_START__,Y
    case 0xC109FF: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C107AF.asm:314 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC109FE.
    case 0xC10A01: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C107AF.asm:316 END_C_FUNCTION
    case 0xC10A02: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C107AF.asm:316 END_C_FUNCTION
    case 0xC10A03: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10A85.asm (unresolved).
bool execute_unresolved_c1_c10a85_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10A85.asm:3 BEGIN_C_FUNCTION
    case 0xC10A85: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10A85.asm:14 END_STACK_VARS
    case 0xC10A87: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C10A85.asm:14 END_STACK_VARS
    case 0xC10A88: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10A85.asm:14 END_STACK_VARS
    case 0xC10A89: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10A85.asm:14 END_STACK_VARS
    case 0xC10A8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10A85.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC10A8A.
    case 0xC10A8C: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10A85.asm:14 END_STACK_VARS
    case 0xC10A8D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C10A85.asm:14 END_STACK_VARS
    case 0xC10A8E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:15 STY @LOCAL05
    case 0xC10A8F: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C1/C10A85.asm:15 STY @LOCAL05
    // Overlapping static entry reached from 0xC10A8C.
    case 0xC10A90: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:16 STX @VIRTUAL02
    case 0xC10A91: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:17 STX @LOCAL04
    case 0xC10A93: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C10A85.asm:18 STA @LOCAL03
    case 0xC10A95: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C10A85.asm:19 ASL
    case 0xC10A97: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:20 TAX
    case 0xC10A98: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:21 LDA OPEN_WINDOW_TABLE,X
    case 0xC10A99: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C10A85.asm:22 STA @LOCAL02
    case 0xC10A9C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C10A85.asm:23 CMP #.LOWORD(-1)
    case 0xC10A9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C10A85.asm:23 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10A9E.
    case 0xC10AA0: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C10A85.asm:24 BEQL @UNKNOWN10
    case 0xC10AA1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C10A85.asm:24 BEQL @UNKNOWN10
    case 0xC10AA3: cpu.execute_instruction<0x4C>(0x000B9F, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C10A85.asm:24 BEQL @UNKNOWN10
    // Overlapping static entry reached from 0xC10AA0.
    case 0xC10AA4: cpu.execute_instruction<0x9F>(0x12A50B, 4); return true;
    // src/unknown/C1/C10A85.asm:25 LDA @LOCAL02
    case 0xC10AA6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C10A85.asm:26 LDY #.SIZEOF(window_stats)
    case 0xC10AA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C10A85.asm:26 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10AA8.
    case 0xC10AAA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10A85.asm:27 JSL MULT168
    case 0xC10AAB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C10A85.asm:28 TAX
    case 0xC10AAF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:29 LDY WINDOW_STATS + window_stats::text_x,X
    case 0xC10AB0: cpu.execute_instruction<0xBC>(0x00865E, 3); return true;
    // src/unknown/C1/C10A85.asm:30 STY @LOCAL01
    case 0xC10AB3: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C10A85.asm:31 LDA WINDOW_STATS + window_stats::text_y,X
    case 0xC10AB5: cpu.execute_instruction<0xBD>(0x008660, 3); return true;
    // src/unknown/C1/C10A85.asm:32 STA @VIRTUAL04
    case 0xC10AB8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C10A85.asm:33 TYA
    case 0xC10ABA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:34 CMP WINDOW_STATS + window_stats::width,X
    case 0xC10ABB: cpu.execute_instruction<0xDD>(0x00865A, 3); return true;
    // src/unknown/C1/C10A85.asm:35 BNE @UNKNOWN3
    case 0xC10ABE: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/unknown/C1/C10A85.asm:36 LDA WINDOW_STATS + window_stats::height,X
    case 0xC10AC0: cpu.execute_instruction<0xBD>(0x00865C, 3); return true;
    // src/unknown/C1/C10A85.asm:37 LSR
    case 0xC10AC3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:38 DEC
    case 0xC10AC4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:39 STA @VIRTUAL02
    case 0xC10AC5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:40 LDA @VIRTUAL04
    case 0xC10AC7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C10A85.asm:41 CMP @VIRTUAL02
    case 0xC10AC9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:42 BEQ @UNKNOWN1
    case 0xC10ACB: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C1/C10A85.asm:43 INC @VIRTUAL04
    case 0xC10ACD: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C10A85.asm:44 BRA @UNKNOWN2
    case 0xC10ACF: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C1/C10A85.asm:46 LDA @LOCAL03
    case 0xC10AD1: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C1/C10A85.asm:47 JSL UNKNOWN_C437B8
    case 0xC10AD3: cpu.execute_instruction<0x22>(0xC437B8, 4); return true;
    // src/unknown/C1/C10A85.asm:49 LDY #0
    case 0xC10AD7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C10A85.asm:49 LDY #0
    // Overlapping static entry reached from 0xC10AD7.
    case 0xC10AD9: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C10A85.asm:50 STY @LOCAL01
    case 0xC10ADA: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C10A85.asm:52 LDA BLINKING_TRIANGLE_FLAG
    case 0xC10ADC: cpu.execute_instruction<0xAD>(0x00964D, 3); return true;
    // src/unknown/C1/C10A85.asm:53 BEQ @UNKNOWN6
    case 0xC10ADF: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/unknown/C1/C10A85.asm:54 CPY #0
    case 0xC10AE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C1/C10A85.asm:54 CPY #0
    // Overlapping static entry reached from 0xC10AE1.
    case 0xC10AE3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C10A85.asm:55 BNE @UNKNOWN6
    case 0xC10AE4: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/unknown/C1/C10A85.asm:56 LDA @LOCAL04
    case 0xC10AE6: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C10A85.asm:57 STA @VIRTUAL02
    case 0xC10AE8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:58 CMP #32
    case 0xC10AEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C1/C10A85.asm:58 CMP #32
    // Overlapping static entry reached from 0xC10AEA.
    case 0xC10AEC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C10A85.asm:59 BEQ @UNKNOWN4
    case 0xC10AED: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C1/C10A85.asm:60 LDA @VIRTUAL02
    case 0xC10AEF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:61 CMP #64
    case 0xC10AF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C1/C10A85.asm:61 CMP #64
    // Overlapping static entry reached from 0xC10AF1.
    case 0xC10AF3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C10A85.asm:62 BNE @UNKNOWN6
    case 0xC10AF4: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C1/C10A85.asm:64 LDA BLINKING_TRIANGLE_FLAG
    case 0xC10AF6: cpu.execute_instruction<0xAD>(0x00964D, 3); return true;
    // src/unknown/C1/C10A85.asm:65 CMP #1
    case 0xC10AF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C10A85.asm:65 CMP #1
    // Overlapping static entry reached from 0xC10AF9.
    case 0xC10AFB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C10A85.asm:66 BEQL @UNKNOWN9
    case 0xC10AFC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C10A85.asm:66 BEQL @UNKNOWN9
    case 0xC10AFE: cpu.execute_instruction<0x4C>(0x000B8A, 3); return true;
    // src/unknown/C1/C10A85.asm:67 CMP #2
    case 0xC10B01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C10A85.asm:67 CMP #2
    // Overlapping static entry reached from 0xC10B01.
    case 0xC10B03: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C10A85.asm:68 BNE @UNKNOWN6
    case 0xC10B04: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C1/C10A85.asm:69 LDA #32
    case 0xC10B06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C1/C10A85.asm:69 LDA #32
    // Overlapping static entry reached from 0xC10B06.
    case 0xC10B08: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C10A85.asm:70 STA @VIRTUAL02
    case 0xC10B09: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:71 STA @LOCAL04
    case 0xC10B0B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C10A85.asm:73 LDA @LOCAL02
    case 0xC10B0D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C10A85.asm:74 LDY #.SIZEOF(window_stats)
    case 0xC10B0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C10A85.asm:74 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10B0F.
    case 0xC10B11: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10A85.asm:75 JSL MULT168
    case 0xC10B12: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C10A85.asm:76 TAX
    case 0xC10B16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:77 LDY @LOCAL01
    case 0xC10B17: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C10A85.asm:78 TYA
    case 0xC10B19: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:79 ASL
    case 0xC10B1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:80 STA @VIRTUAL02
    case 0xC10B1B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:81 LDY WINDOW_STATS + window_stats::width,X
    case 0xC10B1D: cpu.execute_instruction<0xBC>(0x00865A, 3); return true;
    // src/unknown/C1/C10A85.asm:82 LDA @VIRTUAL04
    case 0xC10B20: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C10A85.asm:83 JSL MULT16
    case 0xC10B22: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C1/C10A85.asm:84 ASL
    case 0xC10B26: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:85 ASL
    case 0xC10B27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:86 CLC
    case 0xC10B28: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:87 ADC WINDOW_STATS + window_stats::tilemap_address,X
    case 0xC10B29: cpu.execute_instruction<0x7D>(0x008685, 3); return true;
    // src/unknown/C1/C10A85.asm:88 CLC
    case 0xC10B2C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:89 ADC @VIRTUAL02
    case 0xC10B2D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:90 STA @LOCAL00
    case 0xC10B2F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C10A85.asm:91 LDA @LOCAL04
    case 0xC10B31: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C10A85.asm:92 STA @VIRTUAL02
    case 0xC10B33: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:93 CMP #34
    case 0xC10B35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000022, 2); else cpu.execute_instruction<0xC9>(0x000022, 3); return true;
    // src/unknown/C1/C10A85.asm:93 CMP #34
    // Overlapping static entry reached from 0xC10B35.
    case 0xC10B37: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C10A85.asm:94 BNE @UNKNOWN7
    case 0xC10B38: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C10A85.asm:95 LDX #$0C00
    case 0xC10B3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000C00, 3); return true;
    // src/unknown/C1/C10A85.asm:95 LDX #$0C00
    // Overlapping static entry reached from 0xC10B3A.
    case 0xC10B3C: cpu.execute_instruction<0x0C>(0x000280, 3); return true;
    // src/unknown/C1/C10A85.asm:96 BRA @UNKNOWN8
    case 0xC10B3D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:98 LDX @LOCAL05
    case 0xC10B3F: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C10A85.asm:100 LDA @VIRTUAL02
    case 0xC10B41: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:101 AND #$000F
    case 0xC10B43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C1/C10A85.asm:101 AND #$000F
    // Overlapping static entry reached from 0xC10B43.
    case 0xC10B45: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C1/C10A85.asm:102 PHA
    case 0xC10B46: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:103 LDA @VIRTUAL02
    case 0xC10B47: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:104 AND #$FFF0
    case 0xC10B49: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/unknown/C1/C10A85.asm:104 AND #$FFF0
    // Overlapping static entry reached from 0xC10B49.
    case 0xC10B4B: cpu.execute_instruction<0xFF>(0x847A0A, 4); return true;
    // src/unknown/C1/C10A85.asm:105 ASL
    case 0xC10B4C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:106 PLY
    case 0xC10B4D: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:107 STY @VIRTUAL02
    case 0xC10B4E: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:107 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC10B4B.
    case 0xC10B4F: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C1/C10A85.asm:108 CLC
    case 0xC10B50: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:109 ADC @VIRTUAL02
    case 0xC10B51: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:110 STX @VIRTUAL02
    case 0xC10B53: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:111 CLC
    case 0xC10B55: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:112 ADC @VIRTUAL02
    case 0xC10B56: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:113 STA @VIRTUAL02
    case 0xC10B58: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:114 STA @LOCAL05
    case 0xC10B5A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C1/C10A85.asm:115 LDA @LOCAL00
    case 0xC10B5C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C10A85.asm:116 TAX
    case 0xC10B5E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:117 LDA @VIRTUAL02
    case 0xC10B5F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:118 STA __BSS_START__,X
    case 0xC10B61: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C10A85.asm:119 LDA @LOCAL02
    case 0xC10B64: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C10A85.asm:120 LDY #.SIZEOF(window_stats)
    case 0xC10B66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C10A85.asm:120 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10B66.
    case 0xC10B68: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10A85.asm:121 JSL MULT168
    case 0xC10B69: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C10A85.asm:122 TAX
    case 0xC10B6D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:123 LDA WINDOW_STATS + window_stats::width,X
    case 0xC10B6E: cpu.execute_instruction<0xBD>(0x00865A, 3); return true;
    // src/unknown/C1/C10A85.asm:124 ASL
    case 0xC10B71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:125 STA @VIRTUAL02
    case 0xC10B72: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:126 LDA @LOCAL00
    case 0xC10B74: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C10A85.asm:127 CLC
    case 0xC10B76: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:128 ADC @VIRTUAL02
    case 0xC10B77: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:129 TAX
    case 0xC10B79: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:130 LDA @LOCAL05
    case 0xC10B7A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C10A85.asm:131 STA @VIRTUAL02
    case 0xC10B7C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10A85.asm:132 CLC
    case 0xC10B7E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:133 ADC #16
    case 0xC10B7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C1/C10A85.asm:133 ADC #16
    // Overlapping static entry reached from 0xC10B7F.
    case 0xC10B81: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C1/C10A85.asm:134 STA __BSS_START__,X
    case 0xC10B82: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C10A85.asm:135 LDY @LOCAL01
    case 0xC10B85: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C10A85.asm:136 INY
    case 0xC10B87: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:137 STY @LOCAL01
    case 0xC10B88: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C10A85.asm:139 LDA @LOCAL02
    case 0xC10B8A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C10A85.asm:140 LDY #.SIZEOF(window_stats)
    case 0xC10B8C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C10A85.asm:140 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10B8C.
    case 0xC10B8E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10A85.asm:141 JSL MULT168
    case 0xC10B8F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C10A85.asm:142 TAX
    case 0xC10B93: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:143 LDY @LOCAL01
    case 0xC10B94: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C10A85.asm:144 TYA
    case 0xC10B96: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C10A85.asm:145 STA WINDOW_STATS + window_stats::text_x,X
    case 0xC10B97: cpu.execute_instruction<0x9D>(0x00865E, 3); return true;
    // src/unknown/C1/C10A85.asm:146 LDA @VIRTUAL04
    case 0xC10B9A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C10A85.asm:147 STA WINDOW_STATS + window_stats::text_y,X
    case 0xC10B9C: cpu.execute_instruction<0x9D>(0x008660, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10A85.asm:149 END_C_FUNCTION
    case 0xC10B9F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10A85.asm:149 END_C_FUNCTION
    case 0xC10BA0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10BA1.asm (unresolved).
bool execute_unresolved_c1_c10ba1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10BA1.asm:3 BEGIN_C_FUNCTION
    case 0xC10BA1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    case 0xC10BA3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    case 0xC10BA4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    case 0xC10BA5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    case 0xC10BA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10BA6.
    case 0xC10BA8: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    case 0xC10BA9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C10BA1.asm:7 END_STACK_VARS
    case 0xC10BAA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C10BA1.asm:8 TAX
    case 0xC10BAB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10BA1.asm:9 STX @LOCAL00
    case 0xC10BAC: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C10BA1.asm:10 LDA CURRENT_FOCUS_WINDOW
    case 0xC10BAE: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C10BA1.asm:11 CMP #.LOWORD(-1)
    case 0xC10BB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C10BA1.asm:11 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10BB1.
    case 0xC10BB3: cpu.execute_instruction<0xFF>(0xAD1BF0, 4); return true;
    // src/unknown/C1/C10BA1.asm:12 BEQ @UNKNOWN0
    case 0xC10BB4: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C1/C10BA1.asm:13 LDA CURRENT_FOCUS_WINDOW
    case 0xC10BB6: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C10BA1.asm:13 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10BB3.
    case 0xC10BB7: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C1/C10BA1.asm:13 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10BB7.
    case 0xC10BB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/unknown/C1/C10BA1.asm:14 ASL
    case 0xC10BB9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10BA1.asm:15 TAX
    case 0xC10BBA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10BA1.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC10BBB: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C10BA1.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC10BBE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C10BA1.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10BBE.
    case 0xC10BC0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10BA1.asm:18 JSL MULT168
    case 0xC10BC1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C10BA1.asm:19 TAX
    case 0xC10BC5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10BA1.asm:20 LDY WINDOW_STATS + window_stats::curr_tile_attributes,X
    case 0xC10BC6: cpu.execute_instruction<0xBC>(0x008663, 3); return true;
    // src/unknown/C1/C10BA1.asm:21 LDX @LOCAL00
    case 0xC10BC9: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C10BA1.asm:22 LDA CURRENT_FOCUS_WINDOW
    case 0xC10BCB: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C10BA1.asm:23 JSR UNKNOWN_C10A85
    case 0xC10BCE: cpu.execute_instruction<0x20>(0x000A85, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10BA1.asm:25 END_C_FUNCTION
    case 0xC10BD1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10BA1.asm:25 END_C_FUNCTION
    case 0xC10BD2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10BA1_redirect.asm (unresolved).
bool execute_unresolved_c1_c10ba1_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10BA1_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10C80: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C10BA1_redirect.asm:5 JSR UNKNOWN_C10BA1
    case 0xC10C82: cpu.execute_instruction<0x20>(0x000BA1, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C10BA1_redirect.asm:6 END_C_FUNCTION
    case 0xC10C85: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10BFE.asm (unresolved).
bool execute_unresolved_c1_c10bfe_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10BFE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10BFE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10BFE.asm:12 END_STACK_VARS
    case 0xC10C00: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C10BFE.asm:12 END_STACK_VARS
    case 0xC10C01: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10BFE.asm:12 END_STACK_VARS
    case 0xC10C02: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10BFE.asm:12 END_STACK_VARS
    case 0xC10C03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10BFE.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC10C03.
    case 0xC10C05: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10BFE.asm:12 END_STACK_VARS
    case 0xC10C06: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C10BFE.asm:12 END_STACK_VARS
    case 0xC10C07: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C10BFE.asm:13 STA @LOCAL03
    case 0xC10C08: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C10BFE.asm:13 STA @LOCAL03
    // Overlapping static entry reached from 0xC10C05.
    case 0xC10C09: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10BFE.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC10C0A: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10BFE.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC10C0C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10BFE.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC10C0E: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10BFE.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC10C10: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10BFE.asm:15 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC10C12: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10BFE.asm:15 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC10C14: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10BFE.asm:15 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC10C16: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10BFE.asm:15 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC10C18: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10BFE.asm:16 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC10C1A: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10BFE.asm:16 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC10C1C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10BFE.asm:16 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC10C1E: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10BFE.asm:16 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC10C20: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10BFE.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC10C22: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10BFE.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC10C24: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10BFE.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC10C26: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10BFE.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC10C28: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10BFE.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10C2A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10BFE.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10C2C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10BFE.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10C2E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10BFE.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10C30: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10BFE.asm:19 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC10C32: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10BFE.asm:19 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC10C34: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10BFE.asm:19 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC10C36: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10BFE.asm:19 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC10C38: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10BFE.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC10C3A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10BFE.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC10C3C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10BFE.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC10C3E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10BFE.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC10C40: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C10BFE.asm:21 LDA @LOCAL03
    case 0xC10C42: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C10BFE.asm:22 JSR UNKNOWN_C1153B
    case 0xC10C44: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10BFE.asm:23 END_C_FUNCTION
    case 0xC10C47: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C10BFE.asm:23 END_C_FUNCTION
    case 0xC10C48: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10C55.asm (unresolved).
bool execute_unresolved_c1_c10c55_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10C55.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10C55: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10C55.asm:7 END_STACK_VARS
    case 0xC10C57: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10C55.asm:7 END_STACK_VARS
    case 0xC10C58: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10C55.asm:7 END_STACK_VARS
    case 0xC10C59: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10C55.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10C59.
    case 0xC10C5B: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10C55.asm:7 END_STACK_VARS
    case 0xC10C5C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10C55.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10C5D: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10C55.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10C5F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10C55.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10C61: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10C55.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10C63: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10C55.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10C65: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10C55.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10C67: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10C55.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10C69: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10C55.asm:9 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10C6B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C10C55.asm:10 JSR UNKNOWN_C10D7C
    case 0xC10C6D: cpu.execute_instruction<0x20>(0x000D7C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10C55.asm:11 END_C_FUNCTION
    case 0xC10C70: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C10C55.asm:11 END_C_FUNCTION
    case 0xC10C71: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10D60.asm (unresolved).
bool execute_unresolved_c1_c10d60_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10D60.asm:3 BEGIN_C_FUNCTION
    case 0xC10D60: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C10D60.asm:5 JSR UNKNOWN_C10BA1
    case 0xC10D62: cpu.execute_instruction<0x20>(0x000BA1, 3); return true;
    // src/unknown/C1/C10D60.asm:6 LDA CURRENT_FOCUS_WINDOW
    case 0xC10D65: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C10D60.asm:7 ASL
    case 0xC10D68: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10D60.asm:8 TAX
    case 0xC10D69: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10D60.asm:9 LDA OPEN_WINDOW_TABLE,X
    case 0xC10D6A: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C10D60.asm:10 CMP WINDOW_TAIL
    case 0xC10D6D: cpu.execute_instruction<0xCD>(0x0088E2, 3); return true;
    // src/unknown/C1/C10D60.asm:11 BEQ @UNKNOWN0
    case 0xC10D70: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C1/C10D60.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xC10D72: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C10D60.asm:13 LDA #1
    case 0xC10D74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C1/C10D60.asm:14 STA REDRAW_ALL_WINDOWS
    case 0xC10D76: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/unknown/C1/C10D60.asm:14 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10D74.
    case 0xC10D77: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/unknown/C1/C10D60.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC10D79: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10D60.asm:17 END_C_FUNCTION
    case 0xC10D7B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10D7C.asm (unresolved).
bool execute_unresolved_c1_c10d7c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10D7C.asm:3 BEGIN_C_FUNCTION
    case 0xC10D7C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10D7C.asm:10 END_STACK_VARS
    case 0xC10D7E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10D7C.asm:10 END_STACK_VARS
    case 0xC10D7F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10D7C.asm:10 END_STACK_VARS
    case 0xC10D80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10D7C.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC10D80.
    case 0xC10D82: cpu.execute_instruction<0xFF>(0x26A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10D7C.asm:10 END_STACK_VARS
    case 0xC10D83: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10D7C.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10D84: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10D86: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10D7C.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10D88: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10D8A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10D7C.asm:12 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC10D8C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:12 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC10D8E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10D7C.asm:12 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC10D90: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:12 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC10D92: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C10D7C.asm:13 LDX #.LOWORD(NUMBER_TEXT_BUFFER) + 6
    case 0xC10D94: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000060, 2); else cpu.execute_instruction<0xA2>(0x008960, 3); return true;
    // src/unknown/C1/C10D7C.asm:13 LDX #.LOWORD(NUMBER_TEXT_BUFFER) + 6
    // Overlapping static entry reached from 0xC10D94.
    case 0xC10D96: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A9, 2); else cpu.execute_instruction<0x89>(0x0001A9, 3); return true;
    // src/unknown/C1/C10D7C.asm:14 LDA #1
    case 0xC10D97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C10D7C.asm:14 LDA #1
    // Overlapping static entry reached from 0xC10D96.
    case 0xC10D98: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C1/C10D7C.asm:14 LDA #1
    // Overlapping static entry reached from 0xC10D97.
    case 0xC10D99: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C10D7C.asm:15 STA @LOCAL01
    case 0xC10D9A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C10D7C.asm:16 BRA @UNKNOWN1
    case 0xC10D9C: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C1/C10D7C.asm:18 JSL MODULUS32
    case 0xC10D9E: cpu.execute_instruction<0x22>(0xC09237, 4); return true;
    // src/unknown/C1/C10D7C.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC10DA2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C10D7C.asm:20 LDA @VIRTUAL06
    case 0xC10DA4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C1/C10D7C.asm:21 STA __BSS_START__,X
    case 0xC10DA6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C10D7C.asm:22 DEX
    case 0xC10DA9: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C10D7C.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC10DAA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10D7C.asm:24 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC10DAC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:24 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC10DAE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10D7C.asm:24 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC10DB0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:24 MOVE_INT @LOCAL00, @VIRTUAL0A
    case 0xC10DB2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10D7C.asm:25 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC10DB4: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:25 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC10DB6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10D7C.asm:25 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC10DB8: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:25 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC10DBA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C10D7C.asm:26 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC10DBC: cpu.execute_instruction<0x22>(0xC091A6, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10D7C.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC10DC0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC10DC2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10D7C.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC10DC4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC10DC6: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C10D7C.asm:28 LDA @LOCAL01
    case 0xC10DC8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C10D7C.asm:29 INC
    case 0xC10DCA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C10D7C.asm:30 STA @LOCAL01
    case 0xC10DCB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C10D7C.asm:32 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC10DCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C10D7C.asm:32 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10DCD.
    case 0xC10DCF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:32 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC10DD0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C10D7C.asm:32 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC10DD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C10D7C.asm:32 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10DD2.
    case 0xC10DD4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:32 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC10DD5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C10D7C.asm:33 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC10DD7: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C10D7C.asm:33 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC10DD9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C10D7C.asm:33 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC10DDB: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C10D7C.asm:33 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC10DDD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C10D7C.asm:34 LDA @VIRTUAL06
    case 0xC10DDF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C1/C10D7C.asm:35 CMP @VIRTUAL0A
    case 0xC10DE1: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C1/C10D7C.asm:36 LDA @VIRTUAL06+2
    case 0xC10DE3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C10D7C.asm:37 SBC @VIRTUAL0A+2
    case 0xC10DE5: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/unknown/C1/C10D7C.asm:38 BCS @UNKNOWN0
    case 0xC10DE7: cpu.execute_instruction<0xB0>(0x0000B5, 2); return true;
    // src/unknown/C1/C10D7C.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC10DE9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C10D7C.asm:40 LDA @VIRTUAL06
    case 0xC10DEB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C1/C10D7C.asm:41 STA __BSS_START__,X
    case 0xC10DED: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C10D7C.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC10DF0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C10D7C.asm:43 LDA @LOCAL01
    case 0xC10DF2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10D7C.asm:44 END_C_FUNCTION
    case 0xC10DF4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10D7C.asm:44 END_C_FUNCTION
    case 0xC10DF5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10EB4.asm (unresolved).
bool execute_unresolved_c1_c10eb4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10EB4.asm:3 BEGIN_C_FUNCTION
    case 0xC10EB4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    case 0xC10EB6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    case 0xC10EB7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    case 0xC10EB8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    case 0xC10EB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10EB9.
    case 0xC10EBB: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    case 0xC10EBC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C10EB4.asm:7 END_STACK_VARS
    case 0xC10EBD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C10EB4.asm:8 STA @LOCAL00
    case 0xC10EBE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C10EB4.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC10EBB.
    case 0xC10EBF: cpu.execute_instruction<0x0E>(0x0058AD, 3); return true;
    // src/unknown/C1/C10EB4.asm:9 LDA CURRENT_FOCUS_WINDOW
    case 0xC10EC0: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C10EB4.asm:9 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10EBF.
    case 0xC10EC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000C9, 2); else cpu.execute_instruction<0x89>(0x00FFC9, 3); return true;
    // src/unknown/C1/C10EB4.asm:10 CMP #.LOWORD(-1)
    case 0xC10EC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C10EB4.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10EC2.
    case 0xC10EC4: cpu.execute_instruction<0xFF>(0x17F0FF, 4); return true;
    // src/unknown/C1/C10EB4.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10EC3.
    case 0xC10EC5: cpu.execute_instruction<0xFF>(0xAD17F0, 4); return true;
    // src/unknown/C1/C10EB4.asm:11 BEQ @UNKNOWN0
    case 0xC10EC6: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/unknown/C1/C10EB4.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC10EC8: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C10EB4.asm:12 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10EC5.
    case 0xC10EC9: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C1/C10EB4.asm:12 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10EC9.
    case 0xC10ECA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/unknown/C1/C10EB4.asm:13 ASL
    case 0xC10ECB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10EB4.asm:14 TAX
    case 0xC10ECC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10EB4.asm:15 LDA OPEN_WINDOW_TABLE,X
    case 0xC10ECD: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C10EB4.asm:16 LDY #.SIZEOF(window_stats)
    case 0xC10ED0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C10EB4.asm:16 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10ED0.
    case 0xC10ED2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10EB4.asm:17 JSL MULT168
    case 0xC10ED3: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C10EB4.asm:18 TAX
    case 0xC10ED7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10EB4.asm:19 LDA @LOCAL00
    case 0xC10ED8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C10EB4.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC10EDA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C10EB4.asm:21 STA WINDOW_STATS + window_stats::number_padding,X
    case 0xC10EDC: cpu.execute_instruction<0x9D>(0x008662, 3); return true;
    // src/unknown/C1/C10EB4.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC10EDF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10EB4.asm:24 END_C_FUNCTION
    case 0xC10EE1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10EB4.asm:24 END_C_FUNCTION
    case 0xC10EE2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10EE3.asm (unresolved).
bool execute_unresolved_c1_c10ee3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10EE3.asm:3 BEGIN_C_FUNCTION
    case 0xC10EE3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C10EE3.asm:5 CMP #1
    case 0xC10EE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C10EE3.asm:5 CMP #1
    // Overlapping static entry reached from 0xC10EE5.
    case 0xC10EE7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C10EE3.asm:6 BEQ @UNKNOWN0
    case 0xC10EE8: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C1/C10EE3.asm:7 CMP #2
    case 0xC10EEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C10EE3.asm:7 CMP #2
    // Overlapping static entry reached from 0xC10EEA.
    case 0xC10EEC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C10EE3.asm:8 BEQ @UNKNOWN1
    case 0xC10EED: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C1/C10EE3.asm:9 BRA @UNKNOWN2
    case 0xC10EEF: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C1/C10EE3.asm:11 JSL UNKNOWN_C12BF3
    case 0xC10EF1: cpu.execute_instruction<0x22>(0xC12BF3, 4); return true;
    // src/unknown/C1/C10EE3.asm:12 BRA @UNKNOWN2
    case 0xC10EF5: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C10EE3.asm:14 JSL UNKNOWN_C12C36
    case 0xC10EF7: cpu.execute_instruction<0x22>(0xC12C36, 4); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10EE3.asm:16 END_C_FUNCTION
    case 0xC10EFB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10F40.asm (unresolved).
bool execute_unresolved_c1_c10f40_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10F40.asm:3 BEGIN_C_FUNCTION
    case 0xC10F40: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    case 0xC10F42: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    case 0xC10F43: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    case 0xC10F44: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    case 0xC10F45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC10F45.
    case 0xC10F47: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    case 0xC10F48: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C10F40.asm:8 END_STACK_VARS
    case 0xC10F49: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:16 CMP #.LOWORD(-1)
    case 0xC10F4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C10F40.asm:16 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10F47.
    case 0xC10F4B: cpu.execute_instruction<0xFF>(0x52F0FF, 4); return true;
    // src/unknown/C1/C10F40.asm:16 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10F4A.
    case 0xC10F4C: cpu.execute_instruction<0xFF>(0x0A52F0, 4); return true;
    // src/unknown/C1/C10F40.asm:17 BEQ @UNKNOWN3
    case 0xC10F4D: cpu.execute_instruction<0xF0>(0x000052, 2); return true;
    // src/unknown/C1/C10F40.asm:18 ASL
    case 0xC10F4F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:19 TAX
    case 0xC10F50: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:20 LDA OPEN_WINDOW_TABLE,X
    case 0xC10F51: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C10F40.asm:21 LDY #.SIZEOF(window_stats)
    case 0xC10F54: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C10F40.asm:21 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10F54.
    case 0xC10F56: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10F40.asm:22 JSL MULT168
    case 0xC10F57: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C10F40.asm:23 CLC
    case 0xC10F5B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:24 ADC #.LOWORD(WINDOW_STATS)
    case 0xC10F5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C1/C10F40.asm:24 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC10F5C.
    case 0xC10F5E: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/unknown/C1/C10F40.asm:25 TAX
    case 0xC10F5F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:27 STX @LOCAL01
    case 0xC10F60: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C10F40.asm:29 LDY a:window_stats::tilemap_address,X
    case 0xC10F62: cpu.execute_instruction<0xBC>(0x000035, 3); return true;
    // src/unknown/C1/C10F40.asm:30 STY @TMP01
    case 0xC10F65: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C10F40.asm:31 LDY a:window_stats::height,X
    case 0xC10F67: cpu.execute_instruction<0xBC>(0x00000C, 3); return true;
    // src/unknown/C1/C10F40.asm:32 LDA a:window_stats::width,X
    case 0xC10F6A: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/C1/C10F40.asm:33 JSL MULT16
    case 0xC10F6D: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C1/C10F40.asm:34 STA @TMP00
    case 0xC10F71: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10F40.asm:35 BRA @UNKNOWN2
    case 0xC10F73: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C1/C10F40.asm:38 LDY @LOCAL00
    case 0xC10F75: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C10F40.asm:39 LDA __BSS_START__,Y
    case 0xC10F77: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C10F40.asm:40 BEQ @UNKNOWN1
    case 0xC10F7A: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C1/C10F40.asm:41 JSL FREE_TILE_SAFE
    case 0xC10F7C: cpu.execute_instruction<0x22>(0xC44E4D, 4); return true;
    // src/unknown/C1/C10F40.asm:44 LDA #64
    case 0xC10F80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C1/C10F40.asm:44 LDA #64
    // Overlapping static entry reached from 0xC10F80.
    case 0xC10F82: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C1/C10F40.asm:45 LDY @TMP01
    case 0xC10F83: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C10F40.asm:46 STA __BSS_START__,Y
    case 0xC10F85: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C10F40.asm:47 INY
    case 0xC10F88: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:48 INY
    case 0xC10F89: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:49 STY @TMP01
    case 0xC10F8A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C10F40.asm:50 LDA @TMP00
    case 0xC10F8C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C10F40.asm:51 DEC
    case 0xC10F8E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C10F40.asm:52 STA @TMP00
    case 0xC10F8F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C10F40.asm:58 LDA @TMP00
    case 0xC10F91: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C10F40.asm:59 BNE @UNKNOWN0
    case 0xC10F93: cpu.execute_instruction<0xD0>(0x0000E0, 2); return true;
    // src/unknown/C1/C10F40.asm:60 JSL UNKNOWN_C45E96
    case 0xC10F95: cpu.execute_instruction<0x22>(0xC45E96, 4); return true;
    // src/unknown/C1/C10F40.asm:61 LDX @LOCAL01
    case 0xC10F99: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C1/C10F40.asm:63 STZ a:window_stats::text_y,X
    case 0xC10F9B: cpu.execute_instruction<0x9E>(0x000010, 3); return true;
    // src/unknown/C1/C10F40.asm:64 STZ a:window_stats::text_x,X
    case 0xC10F9E: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10F40.asm:66 END_C_FUNCTION
    case 0xC10FA1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10F40.asm:66 END_C_FUNCTION
    case 0xC10FA2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10FA3.asm (unresolved).
bool execute_unresolved_c1_c10fa3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10FA3.asm:3 BEGIN_C_FUNCTION
    case 0xC10FA3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C10FA3.asm:5 LDA CURRENT_FOCUS_WINDOW
    case 0xC10FA5: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C10FA3.asm:6 JSR UNKNOWN_C10F40
    case 0xC10FA8: cpu.execute_instruction<0x20>(0x000F40, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10FA3.asm:7 END_C_FUNCTION
    case 0xC10FAB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10FA3_redirect.asm (unresolved).
bool execute_unresolved_c1_c10fa3_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10FA3_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DD53: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C10FA3_redirect.asm:5 JSR UNKNOWN_C10FA3
    case 0xC1DD55: cpu.execute_instruction<0x20>(0x000FA3, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C10FA3_redirect.asm:6 END_C_FUNCTION
    case 0xC1DD58: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C10FEA.asm (unresolved).
bool execute_unresolved_c1_c10fea_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C10FEA.asm:3 BEGIN_C_FUNCTION
    case 0xC10FEA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    case 0xC10FEC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    case 0xC10FED: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    case 0xC10FEE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    case 0xC10FEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10FEF.
    case 0xC10FF1: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    case 0xC10FF2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C10FEA.asm:7 END_STACK_VARS
    case 0xC10FF3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C10FEA.asm:8 STA @LOCAL00
    case 0xC10FF4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C10FEA.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC10FF1.
    case 0xC10FF5: cpu.execute_instruction<0x0E>(0x0058AD, 3); return true;
    // src/unknown/C1/C10FEA.asm:9 LDA CURRENT_FOCUS_WINDOW
    case 0xC10FF6: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C10FEA.asm:9 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10FF5.
    case 0xC10FF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000C9, 2); else cpu.execute_instruction<0x89>(0x00FFC9, 3); return true;
    // src/unknown/C1/C10FEA.asm:10 CMP #.LOWORD(-1)
    case 0xC10FF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C10FEA.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10FF8.
    case 0xC10FFA: cpu.execute_instruction<0xFF>(0x1CF0FF, 4); return true;
    // src/unknown/C1/C10FEA.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10FF9.
    case 0xC10FFB: cpu.execute_instruction<0xFF>(0xAD1CF0, 4); return true;
    // src/unknown/C1/C10FEA.asm:11 BEQ @UNKNOWN0
    case 0xC10FFC: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C1/C10FEA.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC10FFE: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C10FEA.asm:12 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10FFB.
    case 0xC10FFF: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C1/C10FEA.asm:12 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10FFF.
    case 0xC11000: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/unknown/C1/C10FEA.asm:13 ASL
    case 0xC11001: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C10FEA.asm:14 TAX
    case 0xC11002: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10FEA.asm:15 LDA OPEN_WINDOW_TABLE,X
    case 0xC11003: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C10FEA.asm:16 LDY #.SIZEOF(window_stats)
    case 0xC11006: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C10FEA.asm:16 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11006.
    case 0xC11008: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C10FEA.asm:17 JSL MULT168
    case 0xC11009: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C10FEA.asm:18 TAX
    case 0xC1100D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C10FEA.asm:19 LDY #1024
    case 0xC1100E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/unknown/C1/C10FEA.asm:19 LDY #1024
    // Overlapping static entry reached from 0xC1100E.
    case 0xC11010: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/unknown/C1/C10FEA.asm:20 LDA @LOCAL00
    case 0xC11011: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C10FEA.asm:20 LDA @LOCAL00
    // Overlapping static entry reached from 0xC11010.
    case 0xC11012: cpu.execute_instruction<0x0E>(0x003222, 3); return true;
    // src/unknown/C1/C10FEA.asm:21 JSL MULT16
    case 0xC11013: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C1/C10FEA.asm:21 JSL MULT16
    // Overlapping static entry reached from 0xC11012.
    case 0xC11015: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // src/unknown/C1/C10FEA.asm:22 STA WINDOW_STATS + window_stats::curr_tile_attributes,X
    case 0xC11017: cpu.execute_instruction<0x9D>(0x008663, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C10FEA.asm:24 END_C_FUNCTION
    case 0xC1101A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C10FEA.asm:24 END_C_FUNCTION
    case 0xC1101B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1134B.asm (unresolved).
bool execute_unresolved_c1_c1134b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1134B.asm:3 BEGIN_C_FUNCTION
    case 0xC1134B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1134B.asm:5 JSR SHOW_HPPP_WINDOWS
    case 0xC1134D: cpu.execute_instruction<0x20>(0x000A04, 3); return true;
    // src/unknown/C1/C1134B.asm:6 JSR UNKNOWN_C1AA18
    case 0xC11350: cpu.execute_instruction<0x20>(0x00AA18, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1134B.asm:7 END_C_FUNCTION
    case 0xC11353: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11354.asm (unresolved).
bool execute_unresolved_c1_c11354_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11354.asm:3 BEGIN_C_FUNCTION
    case 0xC11354: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C11354.asm:7 END_STACK_VARS
    case 0xC11356: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C11354.asm:7 END_STACK_VARS
    case 0xC11357: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11354.asm:7 END_STACK_VARS
    case 0xC11358: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11354.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC11358.
    case 0xC1135A: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C11354.asm:7 END_STACK_VARS
    case 0xC1135B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C11354.asm:8 LDA #0
    case 0xC1135C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C11354.asm:8 LDA #0
    // Overlapping static entry reached from 0xC1135C.
    case 0xC1135E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C11354.asm:9 STA @LOCAL00
    case 0xC1135F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C11354.asm:10 BRA @UNKNOWN2
    case 0xC11361: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C11354.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11363: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C11354.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11363.
    case 0xC11365: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C11354.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11366: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C11354.asm:13 TAX
    case 0xC1136A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11354.asm:14 LDA MENU_OPTIONS,X
    case 0xC1136B: cpu.execute_instruction<0xBD>(0x0089D4, 3); return true;
    // src/unknown/C1/C11354.asm:15 BNE @UNKNOWN1
    case 0xC1136E: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C1/C11354.asm:16 LDA @LOCAL00
    case 0xC11370: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C11354.asm:17 BRA @UNKNOWN3
    case 0xC11372: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C1/C11354.asm:19 LDA @LOCAL00
    case 0xC11374: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C11354.asm:20 INC
    case 0xC11376: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C11354.asm:21 STA @LOCAL00
    case 0xC11377: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C11354.asm:23 CMP #NUM_MENU_OPTIONS
    case 0xC11379: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000046, 2); else cpu.execute_instruction<0xC9>(0x000046, 3); return true;
    // src/unknown/C1/C11354.asm:23 CMP #NUM_MENU_OPTIONS
    // Overlapping static entry reached from 0xC11379.
    case 0xC1137B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C11354.asm:24 BNE @UNKNOWN0
    case 0xC1137C: cpu.execute_instruction<0xD0>(0x0000E5, 2); return true;
    // src/unknown/C1/C11354.asm:25 LDA #.LOWORD(-1)
    case 0xC1137E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C11354.asm:25 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1137E.
    case 0xC11380: cpu.execute_instruction<0xFF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C11354.asm:27 END_C_FUNCTION
    case 0xC11381: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11354.asm:27 END_C_FUNCTION
    case 0xC11382: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11383.asm (unresolved).
bool execute_unresolved_c1_c11383_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11383.asm:3 BEGIN_C_FUNCTION
    case 0xC11383: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11383.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC11380.
    case 0xC11384: cpu.execute_instruction<0x31>(0x0000AD, 2); return true;
    // src/unknown/C1/C11383.asm:5 LDA CURRENT_FOCUS_WINDOW
    case 0xC11385: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C11383.asm:5 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11384.
    case 0xC11386: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C1/C11383.asm:5 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11386.
    case 0xC11387: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000022, 2); else cpu.execute_instruction<0x89>(0x00E322, 3); return true;
    // src/unknown/C1/C11383.asm:6 JSR UNKNOWN_C3E7E3
    case 0xC11388: cpu.execute_instruction<0x22>(0xC3E7E3, 4); return true;
    // src/unknown/C1/C11383.asm:6 JSR UNKNOWN_C3E7E3
    // Overlapping static entry reached from 0xC11387.
    case 0xC11389: cpu.execute_instruction<0xE3>(0x0000E7, 2); return true;
    // src/unknown/C1/C11383.asm:6 JSR UNKNOWN_C3E7E3
    // Overlapping static entry reached from 0xC11387.
    case 0xC1138A: cpu.execute_instruction<0xE7>(0x0000C3, 2); return true;
    // src/unknown/C1/C11383.asm:6 JSR UNKNOWN_C3E7E3
    // Overlapping static entry reached from 0xC11389.
    case 0xC1138B: cpu.execute_instruction<0xC3>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11383.asm:7 END_C_FUNCTION
    case 0xC1138C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1138D.asm (unresolved).
bool execute_unresolved_c1_c1138d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1138D.asm:3 BEGIN_C_FUNCTION
    case 0xC1138D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    case 0xC1138F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    case 0xC11390: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    case 0xC11391: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    case 0xC11392: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC11392.
    case 0xC11394: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    case 0xC11395: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1138D.asm:8 END_STACK_VARS
    case 0xC11396: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1138D.asm:9 CMP #.LOWORD(-1)
    case 0xC11397: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1138D.asm:9 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11394.
    case 0xC11398: cpu.execute_instruction<0xFF>(0x05D0FF, 4); return true;
    // src/unknown/C1/C1138D.asm:9 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11397.
    case 0xC11399: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/unknown/C1/C1138D.asm:10 BNE @UNKNOWN0
    case 0xC1139A: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1138D.asm:11 LDA #0
    case 0xC1139C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1138D.asm:11 LDA #0
    // Overlapping static entry reached from 0xC11399.
    case 0xC1139D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1138D.asm:11 LDA #0
    // Overlapping static entry reached from 0xC1139C.
    case 0xC1139E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1138D.asm:12 BRA @UNKNOWN3
    case 0xC1139F: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C1/C1138D.asm:14 LDX #1
    case 0xC113A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1138D.asm:14 LDX #1
    // Overlapping static entry reached from 0xC113A1.
    case 0xC113A3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1138D.asm:15 STX @LOCAL00
    case 0xC113A4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1138D.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC113A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1138D.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC113A6.
    case 0xC113A8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C1138D.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC113A9: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1138D.asm:17 CLC
    case 0xC113AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1138D.asm:18 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC113AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C1/C1138D.asm:18 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC113AE.
    case 0xC113B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000080, 2); else cpu.execute_instruction<0x89>(0x001080, 3); return true;
    // src/unknown/C1/C1138D.asm:19 BRA @UNKNOWN2
    case 0xC113B1: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C1/C1138D.asm:19 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC113B0.
    case 0xC113B2: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC113B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC113B2.
    case 0xC113B4: cpu.execute_instruction<0x2D>(0x002200, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC113B3.
    case 0xC113B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC113B6: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC113B4.
    case 0xC113B7: cpu.execute_instruction<0xF7>(0x00008F, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C1138D.asm:21 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC113B7.
    case 0xC113B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006918, 3); return true;
    // src/unknown/C1/C1138D.asm:22 CLC
    case 0xC113BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1138D.asm:23 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC113BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C1/C1138D.asm:23 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC113B9.
    case 0xC113BC: cpu.execute_instruction<0xD4>(0x000089, 2); return true;
    // src/unknown/C1/C1138D.asm:23 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC113BB.
    case 0xC113BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A6, 2); else cpu.execute_instruction<0x89>(0x000EA6, 3); return true;
    // src/unknown/C1/C1138D.asm:24 LDX @LOCAL00
    case 0xC113BE: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1138D.asm:24 LDX @LOCAL00
    // Overlapping static entry reached from 0xC113BD.
    case 0xC113BF: cpu.execute_instruction<0x0E>(0x0086E8, 3); return true;
    // src/unknown/C1/C1138D.asm:25 INX
    case 0xC113C0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1138D.asm:26 STX @LOCAL00
    case 0xC113C1: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C1138D.asm:26 STX @LOCAL00
    // Overlapping static entry reached from 0xC113BF.
    case 0xC113C2: cpu.execute_instruction<0x0E>(0x00BDAA, 3); return true;
    // src/unknown/C1/C1138D.asm:28 TAX
    case 0xC113C3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1138D.asm:29 LDA a:menu_option::next,X
    case 0xC113C4: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C1/C1138D.asm:29 LDA a:menu_option::next,X
    // Overlapping static entry reached from 0xC113C2.
    case 0xC113C5: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/C1/C1138D.asm:30 CMP #.LOWORD(-1)
    case 0xC113C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1138D.asm:30 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC113C7.
    case 0xC113C9: cpu.execute_instruction<0xFF>(0xA6E7D0, 4); return true;
    // src/unknown/C1/C1138D.asm:31 BNE @UNKNOWN1
    case 0xC113CA: cpu.execute_instruction<0xD0>(0x0000E7, 2); return true;
    // src/unknown/C1/C1138D.asm:32 LDX @LOCAL00
    case 0xC113CC: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C1138D.asm:32 LDX @LOCAL00
    // Overlapping static entry reached from 0xC113C9.
    case 0xC113CD: cpu.execute_instruction<0x0E>(0x002B8A, 3); return true;
    // src/unknown/C1/C1138D.asm:33 TXA
    case 0xC113CE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1138D.asm:35 END_C_FUNCTION
    case 0xC113CF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1138D.asm:35 END_C_FUNCTION
    case 0xC113D0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1138D_redirect.asm (unresolved).
bool execute_unresolved_c1_c1138d_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1138D_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10C49: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1138D_redirect.asm:5 JSR UNKNOWN_C1138D
    case 0xC10C4B: cpu.execute_instruction<0x20>(0x00138D, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1138D_redirect.asm:6 END_C_FUNCTION
    case 0xC10C4E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C113D1.asm (unresolved).
bool execute_unresolved_c1_c113d1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C113D1.asm:3 BEGIN_C_FUNCTION
    case 0xC113D1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C113D1.asm:10 END_STACK_VARS
    case 0xC113D3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C113D1.asm:10 END_STACK_VARS
    case 0xC113D4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C113D1.asm:10 END_STACK_VARS
    case 0xC113D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C113D1.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC113D5.
    case 0xC113D7: cpu.execute_instruction<0xFF>(0x24A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C113D1.asm:10 END_STACK_VARS
    case 0xC113D8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C113D1.asm:11 MOVE_INT @SELECTED_TEXT, @VIRTUAL0A
    case 0xC113D9: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C113D1.asm:11 MOVE_INT @SELECTED_TEXT, @VIRTUAL0A
    case 0xC113DB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C113D1.asm:11 MOVE_INT @SELECTED_TEXT, @VIRTUAL0A
    case 0xC113DD: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C113D1.asm:11 MOVE_INT @SELECTED_TEXT, @VIRTUAL0A
    case 0xC113DF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C113D1.asm:12 MOVE_INT @LABEL, @VIRTUAL06
    case 0xC113E1: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C113D1.asm:12 MOVE_INT @LABEL, @VIRTUAL06
    case 0xC113E3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C113D1.asm:12 MOVE_INT @LABEL, @VIRTUAL06
    case 0xC113E5: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C113D1.asm:12 MOVE_INT @LABEL, @VIRTUAL06
    case 0xC113E7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C113D1.asm:13 LDA CURRENT_FOCUS_WINDOW
    case 0xC113E9: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C113D1.asm:14 CMP #.LOWORD(-1)
    case 0xC113EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C113D1.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC113EC.
    case 0xC113EE: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/unknown/C1/C113D1.asm:15 BNE @UNKNOWN0
    case 0xC113EF: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C1/C113D1.asm:16 LDA #.LOWORD(MENU_OPTIONS) + (.SIZEOF(menu_option) * (NUM_MENU_OPTIONS - 1))
    case 0xC113F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x0095F5, 3); return true;
    // src/unknown/C1/C113D1.asm:16 LDA #.LOWORD(MENU_OPTIONS) + (.SIZEOF(menu_option) * (NUM_MENU_OPTIONS - 1))
    // Overlapping static entry reached from 0xC113EE.
    case 0xC113F2: cpu.execute_instruction<0xF5>(0x000095, 2); return true;
    // src/unknown/C1/C113D1.asm:16 LDA #.LOWORD(MENU_OPTIONS) + (.SIZEOF(menu_option) * (NUM_MENU_OPTIONS - 1))
    // Overlapping static entry reached from 0xC113F1.
    case 0xC113F3: cpu.execute_instruction<0x95>(0x00004C, 2); return true;
    // src/unknown/C1/C113D1.asm:17 JMP @UNKNOWN5
    case 0xC113F4: cpu.execute_instruction<0x4C>(0x0014AF, 3); return true;
    // src/unknown/C1/C113D1.asm:17 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC113F3.
    case 0xC113F5: cpu.execute_instruction<0xAF>(0x58AD14, 4); return true;
    // src/unknown/C1/C113D1.asm:19 LDA CURRENT_FOCUS_WINDOW
    case 0xC113F7: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C113D1.asm:19 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC113F5.
    case 0xC113F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/unknown/C1/C113D1.asm:20 ASL
    case 0xC113FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:21 TAX
    case 0xC113FB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:22 LDA OPEN_WINDOW_TABLE,X
    case 0xC113FC: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C113D1.asm:23 LDY #.SIZEOF(window_stats)
    case 0xC113FF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C113D1.asm:23 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC113FF.
    case 0xC11401: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C113D1.asm:24 JSL MULT168
    case 0xC11402: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C113D1.asm:25 CLC
    case 0xC11406: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:26 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11407: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C1/C113D1.asm:26 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11407.
    case 0xC11409: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/unknown/C1/C113D1.asm:27 STA @VIRTUAL02
    case 0xC1140A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C113D1.asm:27 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC11409.
    case 0xC1140B: cpu.execute_instruction<0x02>(0x000020, 2); return true;
    // src/unknown/C1/C113D1.asm:28 JSR UNKNOWN_C11354
    case 0xC1140C: cpu.execute_instruction<0x20>(0x001354, 3); return true;
    // src/unknown/C1/C113D1.asm:29 STA @LOCAL01
    case 0xC1140F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C113D1.asm:30 CMP #.LOWORD(-1)
    case 0xC11411: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C113D1.asm:30 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11411.
    case 0xC11413: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/unknown/C1/C113D1.asm:31 BNE @UNKNOWN1
    case 0xC11414: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C1/C113D1.asm:32 LDA #.LOWORD(MENU_OPTIONS) + (.SIZEOF(menu_option) * (NUM_MENU_OPTIONS - 1))
    case 0xC11416: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x0095F5, 3); return true;
    // src/unknown/C1/C113D1.asm:32 LDA #.LOWORD(MENU_OPTIONS) + (.SIZEOF(menu_option) * (NUM_MENU_OPTIONS - 1))
    // Overlapping static entry reached from 0xC11413.
    case 0xC11417: cpu.execute_instruction<0xF5>(0x000095, 2); return true;
    // src/unknown/C1/C113D1.asm:32 LDA #.LOWORD(MENU_OPTIONS) + (.SIZEOF(menu_option) * (NUM_MENU_OPTIONS - 1))
    // Overlapping static entry reached from 0xC11416.
    case 0xC11418: cpu.execute_instruction<0x95>(0x00004C, 2); return true;
    // src/unknown/C1/C113D1.asm:33 JMP @UNKNOWN5
    case 0xC11419: cpu.execute_instruction<0x4C>(0x0014AF, 3); return true;
    // src/unknown/C1/C113D1.asm:33 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC11418.
    case 0xC1141A: cpu.execute_instruction<0xAF>(0x2DA014, 4); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C113D1.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1141C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C113D1.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1141C.
    case 0xC1141E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C113D1.asm:35 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1141F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C113D1.asm:36 CLC
    case 0xC11423: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:37 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11424: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C1/C113D1.asm:37 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11424.
    case 0xC11426: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/unknown/C1/C113D1.asm:38 TAY
    case 0xC11427: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:39 STY @LOCAL00
    case 0xC11428: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C113D1.asm:39 STY @LOCAL00
    // Overlapping static entry reached from 0xC11426.
    case 0xC11429: cpu.execute_instruction<0x0E>(0x0002A5, 3); return true;
    // src/unknown/C1/C113D1.asm:40 LDA @VIRTUAL02
    case 0xC1142A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C113D1.asm:41 CLC
    case 0xC1142C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:42 ADC #window_stats::current_option
    case 0xC1142D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002B, 2); else cpu.execute_instruction<0x69>(0x00002B, 3); return true;
    // src/unknown/C1/C113D1.asm:42 ADC #window_stats::current_option
    // Overlapping static entry reached from 0xC1142D.
    case 0xC1142F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C113D1.asm:43 TAX
    case 0xC11430: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:44 LDA __BSS_START__,X
    case 0xC11431: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C113D1.asm:45 CMP #.LOWORD(-1)
    case 0xC11434: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C113D1.asm:45 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11434.
    case 0xC11436: cpu.execute_instruction<0xFF>(0xA90DD0, 4); return true;
    // src/unknown/C1/C113D1.asm:46 BNE @UNKNOWN2
    case 0xC11437: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C1/C113D1.asm:47 LDA #.LOWORD(-1)
    case 0xC11439: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C113D1.asm:47 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11436.
    case 0xC1143A: cpu.execute_instruction<0xFF>(0x0499FF, 4); return true;
    // src/unknown/C1/C113D1.asm:47 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11439.
    case 0xC1143B: cpu.execute_instruction<0xFF>(0x000499, 4); return true;
    // src/unknown/C1/C113D1.asm:48 STA a:menu_option::previous,Y
    case 0xC1143C: cpu.execute_instruction<0x99>(0x000004, 3); return true;
    // src/unknown/C1/C113D1.asm:48 STA a:menu_option::previous,Y
    // Overlapping static entry reached from 0xC1143A.
    case 0xC1143E: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C113D1.asm:49 LDA @LOCAL01
    case 0xC1143F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C113D1.asm:50 STA __BSS_START__,X
    case 0xC11441: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C113D1.asm:51 BRA @UNKNOWN3
    case 0xC11444: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C1/C113D1.asm:53 LDA @VIRTUAL02
    case 0xC11446: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C113D1.asm:54 CLC
    case 0xC11448: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:55 ADC #window_stats::option_count
    case 0xC11449: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002D, 2); else cpu.execute_instruction<0x69>(0x00002D, 3); return true;
    // src/unknown/C1/C113D1.asm:55 ADC #window_stats::option_count
    // Overlapping static entry reached from 0xC11449.
    case 0xC1144B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C113D1.asm:56 TAX
    case 0xC1144C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:57 LDA __BSS_START__,X
    case 0xC1144D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C113D1.asm:58 STA a:menu_option::previous,Y
    case 0xC11450: cpu.execute_instruction<0x99>(0x000004, 3); return true;
    // src/unknown/C1/C113D1.asm:59 LDA __BSS_START__,X
    case 0xC11453: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C113D1.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11456: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C113D1.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11456.
    case 0xC11458: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C113D1.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11459: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C113D1.asm:61 TAX
    case 0xC1145D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:62 LDA @LOCAL01
    case 0xC1145E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C113D1.asm:63 STA MENU_OPTIONS + menu_option::next,X
    case 0xC11460: cpu.execute_instruction<0x9D>(0x0089D6, 3); return true;
    // src/unknown/C1/C113D1.asm:65 LDX @VIRTUAL02
    case 0xC11463: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C113D1.asm:66 STA a:window_stats::option_count,X
    case 0xC11465: cpu.execute_instruction<0x9D>(0x00002D, 3); return true;
    // src/unknown/C1/C113D1.asm:67 LDA #.LOWORD(-1)
    case 0xC11468: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C113D1.asm:67 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11468.
    case 0xC1146A: cpu.execute_instruction<0xFF>(0x990EA4, 4); return true;
    // src/unknown/C1/C113D1.asm:69 LDY @LOCAL00
    case 0xC1146B: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C113D1.asm:71 STA a:menu_option::next,Y
    case 0xC1146D: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C1/C113D1.asm:71 STA a:menu_option::next,Y
    // Overlapping static entry reached from 0xC1146A.
    case 0xC1146E: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/C1/C113D1.asm:72 LDA #1
    case 0xC11470: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C113D1.asm:72 LDA #1
    // Overlapping static entry reached from 0xC11470.
    case 0xC11472: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C1/C113D1.asm:73 STA a:menu_option::unknown0,Y
    case 0xC11473: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C113D1.asm:74 TYA
    case 0xC11476: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:75 CLC
    case 0xC11477: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:76 ADC #menu_option::script
    case 0xC11478: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000F, 2); else cpu.execute_instruction<0x69>(0x00000F, 3); return true;
    // src/unknown/C1/C113D1.asm:76 ADC #menu_option::script
    // Overlapping static entry reached from 0xC11478.
    case 0xC1147A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C113D1.asm:77 TAY
    case 0xC1147B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C113D1.asm:78 MOVE_INT_YPTRDEST @VIRTUAL0A, a:0
    case 0xC1147C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C113D1.asm:78 MOVE_INT_YPTRDEST @VIRTUAL0A, a:0
    case 0xC1147E: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C1/C113D1.asm:78 MOVE_INT_YPTRDEST @VIRTUAL0A, a:0
    case 0xC11481: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C1/C113D1.asm:78 MOVE_INT_YPTRDEST @VIRTUAL0A, a:0
    case 0xC11483: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C1/C113D1.asm:79 LDA #1
    case 0xC11486: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C113D1.asm:79 LDA #1
    // Overlapping static entry reached from 0xC11486.
    case 0xC11488: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C1/C113D1.asm:80 LDY @LOCAL00
    case 0xC11489: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C113D1.asm:81 STA a:menu_option::page,Y
    case 0xC1148B: cpu.execute_instruction<0x99>(0x000006, 3); return true;
    // src/unknown/C1/C113D1.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xC1148E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C113D1.asm:83 STA a:menu_option::sound_effect,Y
    case 0xC11490: cpu.execute_instruction<0x99>(0x00000E, 3); return true;
    // src/unknown/C1/C113D1.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC11493: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C113D1.asm:85 TYA
    case 0xC11495: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:86 CLC
    case 0xC11496: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:87 ADC #menu_option::label
    case 0xC11497: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/unknown/C1/C113D1.asm:87 ADC #menu_option::label
    // Overlapping static entry reached from 0xC11497.
    case 0xC11499: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C113D1.asm:88 TAX
    case 0xC1149A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC1149B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C113D1.asm:91 LDA [@VIRTUAL06]
    case 0xC1149D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C113D1.asm:92 STA __BSS_START__,X
    case 0xC1149F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C113D1.asm:93 INX
    case 0xC114A2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C113D1.asm:94 LDA [@VIRTUAL06]
    case 0xC114A3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C113D1.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC114A5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C113D1.asm:96 INC @VIRTUAL06
    case 0xC114A7: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C113D1.asm:97 AND #$00FF
    case 0xC114A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C113D1.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC114A9.
    case 0xC114AB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C113D1.asm:98 BNE @UNKNOWN4
    case 0xC114AC: cpu.execute_instruction<0xD0>(0x0000ED, 2); return true;
    // src/unknown/C1/C113D1.asm:99 TYA
    case 0xC114AE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C113D1.asm:101 END_C_FUNCTION
    case 0xC114AF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C113D1.asm:101 END_C_FUNCTION
    case 0xC114B0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C114B1.asm (unresolved).
bool execute_unresolved_c1_c114b1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C114B1.asm:3 BEGIN_C_FUNCTION
    case 0xC114B1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C114B1.asm:15 END_STACK_VARS
    case 0xC114B3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C114B1.asm:15 END_STACK_VARS
    case 0xC114B4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C114B1.asm:15 END_STACK_VARS
    case 0xC114B5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C114B1.asm:15 END_STACK_VARS
    case 0xC114B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C114B1.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC114B6.
    case 0xC114B8: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C114B1.asm:15 END_STACK_VARS
    case 0xC114B9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C114B1.asm:15 END_STACK_VARS
    case 0xC114BA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C114B1.asm:16 STX @VIRTUAL02
    case 0xC114BB: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C114B1.asm:16 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC114B8.
    case 0xC114BC: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C1/C114B1.asm:17 TAY
    case 0xC114BD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C114B1.asm:18 STY @LOCAL04
    case 0xC114BE: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C114B1.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC114C0: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C114B1.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC114C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C114B1.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC114C4: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C114B1.asm:19 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC114C6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C114B1.asm:20 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC114C8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C114B1.asm:20 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC114CA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C114B1.asm:20 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC114CC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C114B1.asm:20 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC114CE: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C114B1.asm:21 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC114D0: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C114B1.asm:21 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC114D2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C114B1.asm:21 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC114D4: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C114B1.asm:21 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC114D6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C114B1.asm:22 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC114D8: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C114B1.asm:22 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC114DA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C114B1.asm:22 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC114DC: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C114B1.asm:22 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC114DE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C114B1.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC114E0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C114B1.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC114E2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C114B1.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC114E4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C114B1.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC114E6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C114B1.asm:24 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC114E8: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C114B1.asm:24 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC114EA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C114B1.asm:24 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC114EC: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C114B1.asm:24 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC114EE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C114B1.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC114F0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C114B1.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC114F2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C114B1.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC114F4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C114B1.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC114F6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C114B1.asm:26 JSR UNKNOWN_C113D1
    case 0xC114F8: cpu.execute_instruction<0x20>(0x0013D1, 3); return true;
    // src/unknown/C1/C114B1.asm:27 STA @LOCAL02
    case 0xC114FB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C114B1.asm:28 CLC
    case 0xC114FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C114B1.asm:29 ADC #menu_option::pixel_align
    case 0xC114FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002C, 2); else cpu.execute_instruction<0x69>(0x00002C, 3); return true;
    // src/unknown/C1/C114B1.asm:29 ADC #menu_option::pixel_align
    // Overlapping static entry reached from 0xC114FE.
    case 0xC11500: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C114B1.asm:30 TAX
    case 0xC11501: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C114B1.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC11502: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C114B1.asm:32 LDA #0
    case 0xC11504: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C1/C114B1.asm:33 STA __BSS_START__,X
    case 0xC11506: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C114B1.asm:33 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11504.
    case 0xC11507: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C114B1.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC11509: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C114B1.asm:35 LDA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1150B: cpu.execute_instruction<0xAD>(0x005E71, 3); return true;
    // src/unknown/C1/C114B1.asm:36 AND #$00FF
    case 0xC1150E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C114B1.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC1150E.
    case 0xC11510: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C114B1.asm:37 BEQ @UNKNOWN0
    case 0xC11511: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C1/C114B1.asm:38 LDY @LOCAL04
    case 0xC11513: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C1/C114B1.asm:39 TYA
    case 0xC11515: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C114B1.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC11516: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C114B1.asm:41 AND #$0007
    case 0xC11518: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x009D07, 3); return true;
    // src/unknown/C1/C114B1.asm:42 STA __BSS_START__,X
    case 0xC1151A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C114B1.asm:42 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11518.
    case 0xC1151B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C114B1.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC1151D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C114B1.asm:44 TYA
    case 0xC1151F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C114B1.asm:45 LSR
    case 0xC11520: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C114B1.asm:46 LSR
    case 0xC11521: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C114B1.asm:47 LSR
    case 0xC11522: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C1/C114B1.asm:48 TAY
    case 0xC11523: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C114B1.asm:49 STY @LOCAL04
    case 0xC11524: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C1/C114B1.asm:51 LDY @LOCAL04
    case 0xC11526: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C1/C114B1.asm:52 LDA @LOCAL02
    case 0xC11528: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C114B1.asm:53 TAX
    case 0xC1152A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C114B1.asm:54 TYA
    case 0xC1152B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C114B1.asm:55 STA a:menu_option::text_x,X
    case 0xC1152C: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/unknown/C1/C114B1.asm:56 LDA @LOCAL02
    case 0xC1152F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C114B1.asm:57 TAX
    case 0xC11531: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C114B1.asm:58 LDA @VIRTUAL02
    case 0xC11532: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C114B1.asm:59 STA a:menu_option::text_y,X
    case 0xC11534: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/unknown/C1/C114B1.asm:60 LDA @LOCAL02
    case 0xC11537: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C114B1.asm:61 END_C_FUNCTION
    case 0xC11539: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C114B1.asm:61 END_C_FUNCTION
    case 0xC1153A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1153B.asm (unresolved).
bool execute_unresolved_c1_c1153b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1153B.asm:3 BEGIN_C_FUNCTION
    case 0xC1153B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    case 0xC1153D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    case 0xC1153E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    case 0xC1153F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    case 0xC11540: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC11540.
    case 0xC11542: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    case 0xC11543: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1153B.asm:15 END_STACK_VARS
    case 0xC11544: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1153B.asm:16 STX @VIRTUAL02
    case 0xC11545: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1153B.asm:16 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC11542.
    case 0xC11546: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C1/C1153B.asm:17 STA @VIRTUAL04
    case 0xC11547: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1153B.asm:24 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC11549: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1153B.asm:24 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1154B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1153B.asm:24 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1154D: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1153B.asm:24 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1154F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1153B.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC11551: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1153B.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC11553: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1153B.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC11555: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1153B.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC11557: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1153B.asm:26 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11559: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1153B.asm:26 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC1155B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1153B.asm:26 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC1155D: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1153B.asm:26 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC1155F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1153B.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11561: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1153B.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11563: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1153B.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11565: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1153B.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11567: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1153B.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11569: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1153B.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1156B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1153B.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1156D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1153B.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1156F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1153B.asm:29 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC11571: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1153B.asm:29 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC11573: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1153B.asm:29 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC11575: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1153B.asm:29 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC11577: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1153B.asm:30 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11579: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1153B.asm:30 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1157B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1153B.asm:30 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1157D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1153B.asm:30 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1157F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1153B.asm:32 TYX
    case 0xC11581: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C1153B.asm:33 LDA @VIRTUAL02
    case 0xC11582: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1153B.asm:34 JSR UNKNOWN_C114B1
    case 0xC11584: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // src/unknown/C1/C1153B.asm:35 TAX
    case 0xC11587: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1153B.asm:36 LDA @VIRTUAL04
    case 0xC11588: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1153B.asm:37 STA a:menu_option::userdata,X
    case 0xC1158A: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/unknown/C1/C1153B.asm:38 LDA #2
    case 0xC1158D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1153B.asm:38 LDA #2
    // Overlapping static entry reached from 0xC1158D.
    case 0xC1158F: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C1/C1153B.asm:39 STA a:menu_option::unknown0,X
    case 0xC11590: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C1153B.asm:40 TXA
    case 0xC11593: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1153B.asm:41 END_C_FUNCTION
    case 0xC11594: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1153B.asm:41 END_C_FUNCTION
    case 0xC11595: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11596.asm (unresolved).
bool execute_unresolved_c1_c11596_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11596.asm:3 BEGIN_C_FUNCTION
    case 0xC11596: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    case 0xC11598: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    case 0xC11599: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    case 0xC1159A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    case 0xC1159B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC1159B.
    case 0xC1159D: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    case 0xC1159E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C11596.asm:16 END_STACK_VARS
    case 0xC1159F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C11596.asm:17 STA @LOCAL03
    case 0xC115A0: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C11596.asm:17 STA @LOCAL03
    // Overlapping static entry reached from 0xC1159D.
    case 0xC115A1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C11596.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC115A2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C11596.asm:19 LDA @PARAM03
    case 0xC115A4: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // src/unknown/C1/C11596.asm:20 STA @VIRTUAL00
    case 0xC115A6: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C11596.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC115A8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11596.asm:28 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC115AA: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11596.asm:28 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC115AC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11596.asm:28 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC115AE: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11596.asm:28 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC115B0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11596.asm:29 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC115B2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11596.asm:29 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC115B4: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11596.asm:29 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC115B6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11596.asm:29 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC115B8: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11596.asm:30 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC115BA: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11596.asm:30 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC115BC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11596.asm:30 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC115BE: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11596.asm:30 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC115C0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11596.asm:31 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC115C2: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11596.asm:31 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC115C4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11596.asm:31 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC115C6: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11596.asm:31 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC115C8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11596.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC115CA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11596.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC115CC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11596.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC115CE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11596.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC115D0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11596.asm:33 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC115D2: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11596.asm:33 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC115D4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11596.asm:33 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC115D6: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11596.asm:33 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC115D8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11596.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC115DA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11596.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC115DC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11596.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC115DE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11596.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC115E0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C11596.asm:36 LDA @LOCAL03
    case 0xC115E2: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C11596.asm:37 JSR UNKNOWN_C1153B
    case 0xC115E4: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/unknown/C1/C11596.asm:38 TAX
    case 0xC115E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11596.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC115E8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C11596.asm:40 LDA @VIRTUAL00
    case 0xC115EA: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C11596.asm:41 STA a:menu_option::sound_effect,X
    case 0xC115EC: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
    // src/unknown/C1/C11596.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC115EF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C11596.asm:43 TXA
    case 0xC115F1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C11596.asm:44 END_C_FUNCTION
    case 0xC115F2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11596.asm:44 END_C_FUNCTION
    case 0xC115F3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C115F4.asm (unresolved).
bool execute_unresolved_c1_c115f4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C115F4.asm:3 BEGIN_C_FUNCTION
    case 0xC115F4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    case 0xC115F6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    case 0xC115F7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    case 0xC115F8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    case 0xC115F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC115F9.
    case 0xC115FB: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    case 0xC115FC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C115F4.asm:12 END_STACK_VARS
    case 0xC115FD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C115F4.asm:13 TAY
    case 0xC115FE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C115F4.asm:14 STY @LOCAL02
    case 0xC115FF: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C115F4.asm:15 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11601: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C115F4.asm:15 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11603: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C115F4.asm:15 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11605: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C115F4.asm:15 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC11607: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C115F4.asm:16 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC11609: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C115F4.asm:16 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1160B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C115F4.asm:16 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1160D: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C115F4.asm:16 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1160F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C115F4.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11611: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C115F4.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11613: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C115F4.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11615: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C115F4.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11617: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C115F4.asm:21 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11619: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C115F4.asm:21 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1161B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C115F4.asm:21 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1161D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C115F4.asm:21 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1161F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C115F4.asm:22 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11621: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C115F4.asm:22 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11623: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C115F4.asm:22 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11625: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C115F4.asm:22 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC11627: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C115F4.asm:24 JSR UNKNOWN_C113D1
    case 0xC11629: cpu.execute_instruction<0x20>(0x0013D1, 3); return true;
    // src/unknown/C1/C115F4.asm:25 TAX
    case 0xC1162C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C115F4.asm:26 LDY @LOCAL02
    case 0xC1162D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C1/C115F4.asm:27 TYA
    case 0xC1162F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C115F4.asm:28 STA a:menu_option::userdata,X
    case 0xC11630: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/unknown/C1/C115F4.asm:29 LDA #2
    case 0xC11633: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C115F4.asm:29 LDA #2
    // Overlapping static entry reached from 0xC11633.
    case 0xC11635: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C1/C115F4.asm:30 STA a:menu_option::unknown0,X
    case 0xC11636: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C115F4.asm:31 TXA
    case 0xC11639: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C115F4.asm:32 END_C_FUNCTION
    case 0xC1163A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C115F4.asm:32 END_C_FUNCTION
    case 0xC1163B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C117E2.asm (unresolved).
bool execute_unresolved_c1_c117e2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C117E2.asm:3 BEGIN_C_FUNCTION
    case 0xC117E2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    case 0xC117E4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    case 0xC117E5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    case 0xC117E6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    case 0xC117E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC117E7.
    case 0xC117E9: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    case 0xC117EA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C117E2.asm:9 END_STACK_VARS
    case 0xC117EB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C117E2.asm:10 TXY
    case 0xC117EC: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C117E2.asm:11 TAX
    case 0xC117ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C117E2.asm:12 LDA #0
    case 0xC117EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C117E2.asm:12 LDA #0
    // Overlapping static entry reached from 0xC117EE.
    case 0xC117F0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C117E2.asm:13 STA @LOCAL00
    case 0xC117F1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C117E2.asm:14 BRA @UNKNOWN1
    case 0xC117F3: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C1/C117E2.asm:16 LDA @LOCAL00
    case 0xC117F5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C117E2.asm:17 INC
    case 0xC117F7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C117E2.asm:18 STA @LOCAL00
    case 0xC117F8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C117E2.asm:19 DEY
    case 0xC117FA: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C1/C117E2.asm:20 INX
    case 0xC117FB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C117E2.asm:22 LDA __BSS_START__,X
    case 0xC117FC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C117E2.asm:23 AND #$00FF
    case 0xC117FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C117E2.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC117FF.
    case 0xC11801: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C117E2.asm:24 BEQ @UNKNOWN2
    case 0xC11802: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C117E2.asm:25 CPY #0
    case 0xC11804: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C1/C117E2.asm:25 CPY #0
    // Overlapping static entry reached from 0xC11804.
    case 0xC11806: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C117E2.asm:26 BNE @UNKNOWN0
    case 0xC11807: cpu.execute_instruction<0xD0>(0x0000EC, 2); return true;
    // src/unknown/C1/C117E2.asm:28 LDA @LOCAL00
    case 0xC11809: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C117E2.asm:29 END_C_FUNCTION
    case 0xC1180B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C117E2.asm:29 END_C_FUNCTION
    case 0xC1180C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C117E2_redirect.asm (unresolved).
bool execute_unresolved_c1_c117e2_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C117E2_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10C4F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C117E2_redirect.asm:5 JSR UNKNOWN_C117E2
    case 0xC10C51: cpu.execute_instruction<0x20>(0x0017E2, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C117E2_redirect.asm:6 END_C_FUNCTION
    case 0xC10C54: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1180D.asm (unresolved).
bool execute_unresolved_c1_c1180d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1180D.asm:3 BEGIN_C_FUNCTION
    case 0xC1180D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1180D.asm:7 TXY
    case 0xC1180F: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1180D.asm:8 LDX #0
    case 0xC11810: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1180D.asm:8 LDX #0
    // Overlapping static entry reached from 0xC11810.
    case 0xC11812: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1180D.asm:9 JSR UNKNOWN_C451FA
    case 0xC11813: cpu.execute_instruction<0x22>(0xC451FA, 4); return true;
    // src/unknown/C1/C1180D.asm:10 JSR PRINT_MENU_ITEMS
    case 0xC11817: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1180D.asm:11 END_C_FUNCTION
    case 0xC1181A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1181B.asm (unresolved).
bool execute_unresolved_c1_c1181b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1181B.asm:3 BEGIN_C_FUNCTION
    case 0xC1181B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    case 0xC1181D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    case 0xC1181E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    case 0xC1181F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    case 0xC11820: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC11820.
    case 0xC11822: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    case 0xC11823: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1181B.asm:11 END_STACK_VARS
    case 0xC11824: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:12 STY @VIRTUAL02
    case 0xC11825: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1181B.asm:12 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC11822.
    case 0xC11826: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C1/C1181B.asm:13 TXY
    case 0xC11827: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:14 LDX #0
    case 0xC11828: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1181B.asm:14 LDX #0
    // Overlapping static entry reached from 0xC11828.
    case 0xC1182A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1181B.asm:15 JSR UNKNOWN_C451FA
    case 0xC1182B: cpu.execute_instruction<0x22>(0xC451FA, 4); return true;
    // src/unknown/C1/C1181B.asm:16 LDA @VIRTUAL02
    case 0xC1182F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1181B.asm:17 CMP #.LOWORD(-1)
    case 0xC11831: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1181B.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11831.
    case 0xC11833: cpu.execute_instruction<0xFF>(0xAD4CF0, 4); return true;
    // src/unknown/C1/C1181B.asm:18 BEQ @UNKNOWN2
    case 0xC11834: cpu.execute_instruction<0xF0>(0x00004C, 2); return true;
    // src/unknown/C1/C1181B.asm:19 LDA CURRENT_FOCUS_WINDOW
    case 0xC11836: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C1181B.asm:19 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11833.
    case 0xC11837: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:19 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11837.
    case 0xC11838: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/unknown/C1/C1181B.asm:20 ASL
    case 0xC11839: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:21 TAX
    case 0xC1183A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:22 LDA OPEN_WINDOW_TABLE,X
    case 0xC1183B: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C1181B.asm:23 LDY #.SIZEOF(window_stats)
    case 0xC1183E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C1181B.asm:23 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1183E.
    case 0xC11840: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1181B.asm:24 JSL MULT168
    case 0xC11841: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1181B.asm:25 CLC
    case 0xC11845: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:26 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11846: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C1/C1181B.asm:26 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11846.
    case 0xC11848: cpu.execute_instruction<0x86>(0x0000A8, 2); return true;
    // src/unknown/C1/C1181B.asm:27 TAY
    case 0xC11849: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:29 STY @LOCAL00
    case 0xC1184A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C1181B.asm:31 LDA @VIRTUAL02
    case 0xC1184C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1181B.asm:32 STA a:window_stats::selected_option,Y
    case 0xC1184E: cpu.execute_instruction<0x99>(0x00002F, 3); return true;
    // src/unknown/C1/C1181B.asm:33 LDA a:window_stats::current_option,Y
    case 0xC11851: cpu.execute_instruction<0xB9>(0x00002B, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1181B.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11854: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1181B.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11854.
    case 0xC11856: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C1181B.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11857: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1181B.asm:35 CLC
    case 0xC1185B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:36 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1185C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C1/C1181B.asm:36 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11892.
    case 0xC1185D: cpu.execute_instruction<0xD4>(0x000089, 2); return true;
    // src/unknown/C1/C1181B.asm:36 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1185C.
    case 0xC1185E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x0080AA, 3); return true;
    // src/unknown/C1/C1181B.asm:37 TAX
    case 0xC1185F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:38 BRA @UNKNOWN1
    case 0xC11860: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C1/C1181B.asm:38 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC1185E.
    case 0xC11861: cpu.execute_instruction<0x14>(0x0000A5, 2); return true;
    // src/unknown/C1/C1181B.asm:40 LDA @VIRTUAL02
    case 0xC11862: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1181B.asm:40 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC11861.
    case 0xC11863: cpu.execute_instruction<0x02>(0x00003A, 2); return true;
    // src/unknown/C1/C1181B.asm:41 DEC
    case 0xC11864: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:42 STA @VIRTUAL02
    case 0xC11865: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1181B.asm:43 LDA a:menu_option::next,X
    case 0xC11867: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1181B.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1186A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C1181B.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1186A.
    case 0xC1186C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C1181B.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1186D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1181B.asm:45 CLC
    case 0xC11871: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:46 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11872: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C1/C1181B.asm:46 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11872.
    case 0xC11874: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x00A5AA, 3); return true;
    // src/unknown/C1/C1181B.asm:47 TAX
    case 0xC11875: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1181B.asm:49 LDA @VIRTUAL02
    case 0xC11876: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1181B.asm:49 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC11874.
    case 0xC11877: cpu.execute_instruction<0x02>(0x0000D0, 2); return true;
    // src/unknown/C1/C1181B.asm:50 BNE @UNKNOWN0
    case 0xC11878: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/unknown/C1/C1181B.asm:51 LDA a:menu_option::page,X
    case 0xC1187A: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C1/C1181B.asm:53 LDY @LOCAL00
    case 0xC1187D: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C1181B.asm:55 STA a:window_stats::menu_page_number,Y
    case 0xC1187F: cpu.execute_instruction<0x99>(0x000033, 3); return true;
    // src/unknown/C1/C1181B.asm:57 JSR PRINT_MENU_ITEMS
    case 0xC11882: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1181B.asm:58 END_C_FUNCTION
    case 0xC11885: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1181B.asm:58 END_C_FUNCTION
    case 0xC11886: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11887.asm (unresolved).
bool execute_unresolved_c1_c11887_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11887.asm:3 BEGIN_C_FUNCTION
    case 0xC11887: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    case 0xC11889: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    case 0xC1188A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    case 0xC1188B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    case 0xC1188C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1188C.
    case 0xC1188E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    case 0xC1188F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C11887.asm:10 END_STACK_VARS
    case 0xC11890: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:11 STA @LOCAL01
    case 0xC11891: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C11887.asm:11 STA @LOCAL01
    // Overlapping static entry reached from 0xC1188E.
    case 0xC11892: cpu.execute_instruction<0x10>(0x0000C9, 2); return true;
    // src/unknown/C1/C11887.asm:12 CMP #.LOWORD(-1)
    case 0xC11893: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C11887.asm:12 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11892.
    case 0xC11894: cpu.execute_instruction<0xFF>(0x4AF0FF, 4); return true;
    // src/unknown/C1/C11887.asm:12 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11893.
    case 0xC11895: cpu.execute_instruction<0xFF>(0xAD4AF0, 4); return true;
    // src/unknown/C1/C11887.asm:13 BEQ @UNKNOWN2
    case 0xC11896: cpu.execute_instruction<0xF0>(0x00004A, 2); return true;
    // src/unknown/C1/C11887.asm:14 LDA CURRENT_FOCUS_WINDOW
    case 0xC11898: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C11887.asm:14 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11895.
    case 0xC11899: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:14 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11899.
    case 0xC1189A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/unknown/C1/C11887.asm:15 ASL
    case 0xC1189B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:16 TAX
    case 0xC1189C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:17 LDA OPEN_WINDOW_TABLE,X
    case 0xC1189D: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C11887.asm:18 LDY #.SIZEOF(window_stats)
    case 0xC118A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C11887.asm:18 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC118A0.
    case 0xC118A2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C11887.asm:19 JSL MULT168
    case 0xC118A3: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C11887.asm:19 JSL MULT168
    // Overlapping static entry reached from 0xC10888.
    case 0xC118A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006918, 3); return true;
    // src/unknown/C1/C11887.asm:20 CLC
    case 0xC118A7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:21 ADC #.LOWORD(WINDOW_STATS)
    case 0xC118A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C1/C11887.asm:21 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC118A6.
    case 0xC118A9: cpu.execute_instruction<0x50>(0x000086, 2); return true;
    // src/unknown/C1/C11887.asm:21 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC118A8.
    case 0xC118AA: cpu.execute_instruction<0x86>(0x0000A8, 2); return true;
    // src/unknown/C1/C11887.asm:22 TAY
    case 0xC118AB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:24 STY @LOCAL00
    case 0xC118AC: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C11887.asm:26 LDA @LOCAL01
    case 0xC118AE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C11887.asm:27 STA a:window_stats::selected_option,Y
    case 0xC118B0: cpu.execute_instruction<0x99>(0x00002F, 3); return true;
    // src/unknown/C1/C11887.asm:28 LDA a:window_stats::current_option,Y
    case 0xC118B3: cpu.execute_instruction<0xB9>(0x00002B, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C11887.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC118B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C11887.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC118B6.
    case 0xC118B8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C11887.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC118B9: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C11887.asm:30 CLC
    case 0xC118BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:31 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC118BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C1/C11887.asm:31 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC118BE.
    case 0xC118C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x0080AA, 3); return true;
    // src/unknown/C1/C11887.asm:32 TAX
    case 0xC118C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:33 BRA @UNKNOWN1
    case 0xC118C2: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C1/C11887.asm:33 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC118C0.
    case 0xC118C3: cpu.execute_instruction<0x12>(0x00003A, 2); return true;
    // src/unknown/C1/C11887.asm:35 DEC
    case 0xC118C4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:36 STA @LOCAL01
    case 0xC118C5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C11887.asm:37 LDA a:menu_option::next,X
    case 0xC118C7: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C11887.asm:38 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC118CA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C11887.asm:38 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC118CA.
    case 0xC118CC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C11887.asm:38 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC118CD: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C11887.asm:39 CLC
    case 0xC118D1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:40 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC118D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C1/C11887.asm:40 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC118D2.
    case 0xC118D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x00A5AA, 3); return true;
    // src/unknown/C1/C11887.asm:41 TAX
    case 0xC118D5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:43 LDA @LOCAL01
    case 0xC118D6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C11887.asm:43 LDA @LOCAL01
    // Overlapping static entry reached from 0xC118D4.
    case 0xC118D7: cpu.execute_instruction<0x10>(0x0000D0, 2); return true;
    // src/unknown/C1/C11887.asm:44 BNE @UNKNOWN0
    case 0xC118D8: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // src/unknown/C1/C11887.asm:44 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC118D7.
    case 0xC118D9: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C1/C11887.asm:45 LDA a:menu_option::page,X
    case 0xC118DA: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C1/C11887.asm:47 LDY @LOCAL00
    case 0xC118DD: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C11887.asm:49 STA a:window_stats::menu_page_number,Y
    case 0xC118DF: cpu.execute_instruction<0x99>(0x000033, 3); return true;
    // src/unknown/C1/C11887.asm:51 JSR PRINT_MENU_ITEMS
    case 0xC118E2: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C11887.asm:52 END_C_FUNCTION
    case 0xC118E5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11887.asm:52 END_C_FUNCTION
    case 0xC118E6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11F5A.asm (unresolved).
bool execute_unresolved_c1_c11f5a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11F5A.asm:3 BEGIN_C_FUNCTION
    case 0xC11F5A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C11F5A.asm:6 END_STACK_VARS
    case 0xC11F5C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C11F5A.asm:6 END_STACK_VARS
    case 0xC11F5D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11F5A.asm:6 END_STACK_VARS
    case 0xC11F5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11F5A.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC11F5E.
    case 0xC11F60: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C11F5A.asm:6 END_STACK_VARS
    case 0xC11F61: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C11F5A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC11F62: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C11F5A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC11F64: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C11F5A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC11F66: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C11F5A.asm:7 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC11F68: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C11F5A.asm:8 LDA CURRENT_FOCUS_WINDOW
    case 0xC11F6A: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C11F5A.asm:9 ASL
    case 0xC11F6D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C11F5A.asm:10 TAX
    case 0xC11F6E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11F5A.asm:11 LDA OPEN_WINDOW_TABLE,X
    case 0xC11F6F: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C11F5A.asm:12 LDY #.SIZEOF(window_stats)
    case 0xC11F72: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C11F5A.asm:12 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11F72.
    case 0xC11F74: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C11F5A.asm:13 JSL MULT168
    case 0xC11F75: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C11F5A.asm:14 CLC
    case 0xC11F79: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C11F5A.asm:15 ADC #.LOWORD(WINDOW_STATS) + window_stats::cursor_move_callback
    case 0xC11F7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000087, 2); else cpu.execute_instruction<0x69>(0x008687, 3); return true;
    // src/unknown/C1/C11F5A.asm:15 ADC #.LOWORD(WINDOW_STATS) + window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC11F7A.
    case 0xC11F7C: cpu.execute_instruction<0x86>(0x0000A8, 2); return true;
    // src/unknown/C1/C11F5A.asm:16 TAY
    case 0xC11F7D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C11F5A.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC11F7E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C11F5A.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC11F80: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C1/C11F5A.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC11F83: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C1/C11F5A.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC11F85: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C11F5A.asm:18 END_C_FUNCTION
    case 0xC11F88: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11F5A.asm:18 END_C_FUNCTION
    case 0xC11F89: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11F8A.asm (unresolved).
bool execute_unresolved_c1_c11f8a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11F8A.asm:3 BEGIN_C_FUNCTION
    case 0xC11F8A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C11F8A.asm:5 END_STACK_VARS
    case 0xC11F8C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C11F8A.asm:5 END_STACK_VARS
    case 0xC11F8D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11F8A.asm:5 END_STACK_VARS
    case 0xC11F8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11F8A.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC11F8E.
    case 0xC11F90: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C11F8A.asm:5 END_STACK_VARS
    case 0xC11F91: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C11F8A.asm:6 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11F92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C11F8A.asm:6 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC11F92.
    case 0xC11F94: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C11F8A.asm:6 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11F95: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C11F8A.asm:6 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11F97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C11F8A.asm:6 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC11F97.
    case 0xC11F99: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C11F8A.asm:6 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11F9A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C11F8A.asm:7 LDA CURRENT_FOCUS_WINDOW
    case 0xC11F9C: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C11F8A.asm:8 ASL
    case 0xC11F9F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C11F8A.asm:9 TAX
    case 0xC11FA0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11F8A.asm:10 LDA OPEN_WINDOW_TABLE,X
    case 0xC11FA1: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C11F8A.asm:11 LDY #.SIZEOF(window_stats)
    case 0xC11FA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C11F8A.asm:11 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11FA4.
    case 0xC11FA6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C11F8A.asm:12 JSL MULT168
    case 0xC11FA7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C11F8A.asm:13 CLC
    case 0xC11FAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C11F8A.asm:14 ADC #.LOWORD(WINDOW_STATS) + window_stats::cursor_move_callback
    case 0xC11FAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000087, 2); else cpu.execute_instruction<0x69>(0x008687, 3); return true;
    // src/unknown/C1/C11F8A.asm:14 ADC #.LOWORD(WINDOW_STATS) + window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC11FAC.
    case 0xC11FAE: cpu.execute_instruction<0x86>(0x0000A8, 2); return true;
    // src/unknown/C1/C11F8A.asm:15 TAY
    case 0xC11FAF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C11F8A.asm:16 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC11FB0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C11F8A.asm:16 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC11FB2: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C1/C11F8A.asm:16 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC11FB5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C1/C11F8A.asm:16 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC11FB7: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C11F8A.asm:17 END_C_FUNCTION
    case 0xC11FBA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11F8A.asm:17 END_C_FUNCTION
    case 0xC11FBB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11FBC.asm (unresolved).
bool execute_unresolved_c1_c11fbc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11FBC.asm:3 BEGIN_C_FUNCTION
    case 0xC11FBC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C11FBC.asm:8 TXY
    case 0xC11FBE: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C11FBC.asm:9 TAX
    case 0xC11FBF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11FBC.asm:10 BNE @UNKNOWN0
    case 0xC11FC0: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C1/C11FBC.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC11FC2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C11FBC.asm:12 LDA BATTLER_FRONT_ROW_X_POSITIONS,Y
    case 0xC11FC4: cpu.execute_instruction<0xB9>(0x00AD5A, 3); return true;
    // src/unknown/C1/C11FBC.asm:13 BRA @UNKNOWN1
    case 0xC11FC7: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C1/C11FBC.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC11FC9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C11FBC.asm:16 LDA BATTLER_BACK_ROW_X_POSITIONS,Y
    case 0xC11FCB: cpu.execute_instruction<0xB9>(0x00AD6A, 3); return true;
    // src/unknown/C1/C11FBC.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC11FCE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C11FBC.asm:19 AND #$00FF
    case 0xC11FD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C11FBC.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC11FD0.
    case 0xC11FD2: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11FBC.asm:20 END_C_FUNCTION
    case 0xC11FD3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C11FD4.asm (unresolved).
bool execute_unresolved_c1_c11fd4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11FD4.asm:3 BEGIN_C_FUNCTION
    case 0xC11FD4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    case 0xC11FD6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    case 0xC11FD7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    case 0xC11FD8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    case 0xC11FD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC11FD9.
    case 0xC11FDB: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    case 0xC11FDC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C11FD4.asm:9 END_STACK_VARS
    case 0xC11FDD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:10 STX @VIRTUAL02
    case 0xC11FDE: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C11FD4.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC11FDB.
    case 0xC11FDF: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C1/C11FD4.asm:11 TAX
    case 0xC11FE0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:12 CPX #1
    case 0xC11FE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C1/C11FD4.asm:12 CPX #1
    // Overlapping static entry reached from 0xC11FE1.
    case 0xC11FE3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C11FD4.asm:13 BNE @UNKNOWN0
    case 0xC11FE4: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/unknown/C1/C11FD4.asm:14 TYA
    case 0xC11FE6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C1/C11FD4.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC11FE7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C1/C11FD4.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC11FE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C1/C11FD4.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC11FEA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C1/C11FD4.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC11FEC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C1/C11FD4.asm:15 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC11FED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:16 TAX
    case 0xC11FEE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:17 INX
    case 0xC11FEF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:18 INX
    case 0xC11FF0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:19 LDA f:BATTLE_ACTION_TABLE + battle_action::direction,X
    case 0xC11FF1: cpu.execute_instruction<0xBF>(0xD57B68, 4); return true;
    // src/unknown/C1/C11FD4.asm:19 LDA f:BATTLE_ACTION_TABLE + battle_action::direction,X
    // Overlapping static entry reached from 0xC12021.
    case 0xC11FF3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C1/C11FD4.asm:19 LDA f:BATTLE_ACTION_TABLE + battle_action::direction,X
    // Overlapping static entry reached from 0xC11FF3.
    case 0xC11FF4: cpu.execute_instruction<0xD5>(0x000029, 2); return true;
    // src/unknown/C1/C11FD4.asm:20 AND #$00FF
    case 0xC11FF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C11FD4.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC11FF4.
    case 0xC11FF6: cpu.execute_instruction<0xFF>(0x01C900, 4); return true;
    // src/unknown/C1/C11FD4.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC11FF5.
    case 0xC11FF7: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C11FD4.asm:21 CMP #1
    case 0xC11FF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C11FD4.asm:21 CMP #1
    // Overlapping static entry reached from 0xC11FF8.
    case 0xC11FFA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C11FD4.asm:22 BNE @UNKNOWN0
    case 0xC11FFB: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C1/C11FD4.asm:23 LDA @VIRTUAL02
    case 0xC11FFD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C11FD4.asm:24 JSL UNKNOWN_C2FAD2
    case 0xC11FFF: cpu.execute_instruction<0x22>(0xC2FAD2, 4); return true;
    // src/unknown/C1/C11FD4.asm:25 CMP #0
    case 0xC12003: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C11FD4.asm:25 CMP #0
    // Overlapping static entry reached from 0xC12003.
    case 0xC12005: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C11FD4.asm:26 BNE @UNKNOWN0
    case 0xC12006: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C11FD4.asm:27 LDA #0
    case 0xC12008: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C11FD4.asm:27 LDA #0
    // Overlapping static entry reached from 0xC12008.
    case 0xC1200A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C11FD4.asm:28 BRA @UNKNOWN1
    case 0xC1200B: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C11FD4.asm:30 LDA #1
    case 0xC1200D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C11FD4.asm:30 LDA #1
    // Overlapping static entry reached from 0xC1200D.
    case 0xC1200F: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C11FD4.asm:32 END_C_FUNCTION
    case 0xC12010: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11FD4.asm:32 END_C_FUNCTION
    case 0xC12011: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12012.asm (unresolved).
bool execute_unresolved_c1_c12012_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12012.asm:3 BEGIN_C_FUNCTION
    case 0xC12012: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    case 0xC12014: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    case 0xC12015: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    case 0xC12016: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    case 0xC12017: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC12017.
    case 0xC12019: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    case 0xC1201A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C12012.asm:13 END_STACK_VARS
    case 0xC1201B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C12012.asm:14 STY @LOCAL03
    case 0xC1201C: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C12012.asm:14 STY @LOCAL03
    // Overlapping static entry reached from 0xC12019.
    case 0xC1201D: cpu.execute_instruction<0x14>(0x000086, 2); return true;
    // src/unknown/C1/C12012.asm:15 STX @LOCAL02
    case 0xC1201E: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C12012.asm:15 STX @LOCAL02
    // Overlapping static entry reached from 0xC1201D.
    case 0xC1201F: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C1/C12012.asm:16 STA @LOCAL01
    case 0xC12020: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C12012.asm:16 STA @LOCAL01
    // Overlapping static entry reached from 0xC1201F.
    case 0xC12021: cpu.execute_instruction<0x10>(0x0000D0, 2); return true;
    // src/unknown/C1/C12012.asm:17 BNE @UNKNOWN0
    case 0xC12022: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C1/C12012.asm:17 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC12021.
    case 0xC12023: cpu.execute_instruction<0x0C>(0x0056AD, 3); return true;
    // src/unknown/C1/C12012.asm:18 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC12024: cpu.execute_instruction<0xAD>(0x00AD56, 3); return true;
    // src/unknown/C1/C12012.asm:18 LDA NUM_BATTLERS_IN_FRONT_ROW
    // Overlapping static entry reached from 0xC12023.
    case 0xC12026: cpu.execute_instruction<0xAD>(0x000E85, 3); return true;
    // src/unknown/C1/C12012.asm:19 STA @LOCAL00
    case 0xC12027: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12012.asm:20 LDA #.LOWORD(BATTLER_FRONT_ROW_X_POSITIONS)
    case 0xC12029: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005A, 2); else cpu.execute_instruction<0xA9>(0x00AD5A, 3); return true;
    // src/unknown/C1/C12012.asm:20 LDA #.LOWORD(BATTLER_FRONT_ROW_X_POSITIONS)
    // Overlapping static entry reached from 0xC12029.
    case 0xC1202B: cpu.execute_instruction<0xAD>(0x000485, 3); return true;
    // src/unknown/C1/C12012.asm:21 STA @VIRTUAL04
    case 0xC1202C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C12012.asm:22 BRA @UNKNOWN1
    case 0xC1202E: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C1/C12012.asm:24 LDA NUM_BATTLERS_IN_BACK_ROW
    case 0xC12030: cpu.execute_instruction<0xAD>(0x00AD58, 3); return true;
    // src/unknown/C1/C12012.asm:25 STA @LOCAL00
    case 0xC12033: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12012.asm:26 LDA #.LOWORD(BATTLER_BACK_ROW_X_POSITIONS)
    case 0xC12035: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006A, 2); else cpu.execute_instruction<0xA9>(0x00AD6A, 3); return true;
    // src/unknown/C1/C12012.asm:26 LDA #.LOWORD(BATTLER_BACK_ROW_X_POSITIONS)
    // Overlapping static entry reached from 0xC12035.
    case 0xC12037: cpu.execute_instruction<0xAD>(0x000485, 3); return true;
    // src/unknown/C1/C12012.asm:27 STA @VIRTUAL04
    case 0xC12038: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C12012.asm:29 LDA #0
    case 0xC1203A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C12012.asm:29 LDA #0
    // Overlapping static entry reached from 0xC1203A.
    case 0xC1203C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C12012.asm:30 STA @VIRTUAL02
    case 0xC1203D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C12012.asm:31 BRA @UNKNOWN4
    case 0xC1203F: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C1/C12012.asm:33 LDX @VIRTUAL04
    case 0xC12041: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C12012.asm:34 LDA __BSS_START__,X
    case 0xC12043: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C12012.asm:35 AND #$00FF
    case 0xC12046: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C12012.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC12046.
    case 0xC12048: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C1/C12012.asm:36 INC @VIRTUAL04
    case 0xC12049: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C1/C12012.asm:37 CMP @LOCAL02
    case 0xC1204B: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C1/C12012.asm:38 BLTEQ @UNKNOWN3
    case 0xC1204D: cpu.execute_instruction<0x90>(0x000014, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C1/C12012.asm:38 BLTEQ @UNKNOWN3
    case 0xC1204F: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C1/C12012.asm:39 LDY @LOCAL03
    case 0xC12051: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C12012.asm:40 LDX @VIRTUAL02
    case 0xC12053: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C12012.asm:41 LDA @LOCAL01
    case 0xC12055: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C12012.asm:42 JSR UNKNOWN_C11FD4
    case 0xC12057: cpu.execute_instruction<0x20>(0x001FD4, 3); return true;
    // src/unknown/C1/C12012.asm:43 CMP #0
    case 0xC1205A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12012.asm:43 CMP #0
    // Overlapping static entry reached from 0xC1205A.
    case 0xC1205C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C12012.asm:44 BEQ @UNKNOWN3
    case 0xC1205D: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C1/C12012.asm:45 LDA @VIRTUAL02
    case 0xC1205F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12012.asm:46 BRA @UNKNOWN5
    case 0xC12061: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C1/C12012.asm:48 INC @VIRTUAL02
    case 0xC12063: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C12012.asm:50 LDA @VIRTUAL02
    case 0xC12065: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12012.asm:51 CMP @LOCAL00
    case 0xC12067: cpu.execute_instruction<0xC5>(0x00000E, 2); return true;
    // src/unknown/C1/C12012.asm:52 BCC @UNKNOWN2
    case 0xC12069: cpu.execute_instruction<0x90>(0x0000D6, 2); return true;
    // src/unknown/C1/C12012.asm:53 LDA #.LOWORD(-1)
    case 0xC1206B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C12012.asm:53 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1206B.
    case 0xC1206D: cpu.execute_instruction<0xFF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12012.asm:55 END_C_FUNCTION
    case 0xC1206E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C12012.asm:55 END_C_FUNCTION
    case 0xC1206F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12070.asm (unresolved).
bool execute_unresolved_c1_c12070_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12070.asm:3 BEGIN_C_FUNCTION
    case 0xC12070: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12070.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC1206D.
    case 0xC12071: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    case 0xC12072: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    case 0xC12073: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    case 0xC12074: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    case 0xC12075: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC12075.
    case 0xC12077: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    case 0xC12078: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C12070.asm:13 END_STACK_VARS
    case 0xC12079: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:14 STY @LOCAL03
    case 0xC1207A: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C12070.asm:14 STY @LOCAL03
    // Overlapping static entry reached from 0xC12077.
    case 0xC1207B: cpu.execute_instruction<0x14>(0x000086, 2); return true;
    // src/unknown/C1/C12070.asm:15 STX @LOCAL02
    case 0xC1207C: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C12070.asm:15 STX @LOCAL02
    // Overlapping static entry reached from 0xC1207B.
    case 0xC1207D: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C1/C12070.asm:16 STA @LOCAL01
    case 0xC1207E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C12070.asm:16 STA @LOCAL01
    // Overlapping static entry reached from 0xC1207D.
    case 0xC1207F: cpu.execute_instruction<0x10>(0x0000D0, 2); return true;
    // src/unknown/C1/C12070.asm:17 BNE @UNKNOWN0
    case 0xC12080: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C1/C12070.asm:17 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC1207F.
    case 0xC12081: cpu.execute_instruction<0x0D>(0x0056AE, 3); return true;
    // src/unknown/C1/C12070.asm:18 LDX NUM_BATTLERS_IN_FRONT_ROW
    case 0xC12082: cpu.execute_instruction<0xAE>(0x00AD56, 3); return true;
    // src/unknown/C1/C12070.asm:18 LDX NUM_BATTLERS_IN_FRONT_ROW
    // Overlapping static entry reached from 0xC12081.
    case 0xC12084: cpu.execute_instruction<0xAD>(0x003A8A, 3); return true;
    // src/unknown/C1/C12070.asm:19 TXA
    case 0xC12085: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:20 DEC
    case 0xC12086: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:21 CLC
    case 0xC12087: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:22 ADC #.LOWORD(BATTLER_FRONT_ROW_X_POSITIONS)
    case 0xC12088: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005A, 2); else cpu.execute_instruction<0x69>(0x00AD5A, 3); return true;
    // src/unknown/C1/C12070.asm:22 ADC #.LOWORD(BATTLER_FRONT_ROW_X_POSITIONS)
    // Overlapping static entry reached from 0xC12088.
    case 0xC1208A: cpu.execute_instruction<0xAD>(0x000485, 3); return true;
    // src/unknown/C1/C12070.asm:23 STA @VIRTUAL04
    case 0xC1208B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C12070.asm:24 BRA @UNKNOWN1
    case 0xC1208D: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C1/C12070.asm:26 LDX NUM_BATTLERS_IN_BACK_ROW
    case 0xC1208F: cpu.execute_instruction<0xAE>(0x00AD58, 3); return true;
    // src/unknown/C1/C12070.asm:27 TXA
    case 0xC12092: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:28 DEC
    case 0xC12093: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:29 CLC
    case 0xC12094: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:30 ADC #.LOWORD(BATTLER_BACK_ROW_X_POSITIONS)
    case 0xC12095: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00AD6A, 3); return true;
    // src/unknown/C1/C12070.asm:30 ADC #.LOWORD(BATTLER_BACK_ROW_X_POSITIONS)
    // Overlapping static entry reached from 0xC12095.
    case 0xC12097: cpu.execute_instruction<0xAD>(0x000485, 3); return true;
    // src/unknown/C1/C12070.asm:31 STA @VIRTUAL04
    case 0xC12098: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C12070.asm:33 TXA
    case 0xC1209A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:34 DEC
    case 0xC1209B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:35 STA @VIRTUAL02
    case 0xC1209C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C12070.asm:36 BRA @UNKNOWN4
    case 0xC1209E: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C1/C12070.asm:38 LDX @VIRTUAL04
    case 0xC120A0: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C12070.asm:39 LDA __BSS_START__,X
    case 0xC120A2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C12070.asm:40 AND #$00FF
    case 0xC120A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C12070.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC120A5.
    case 0xC120A7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C12070.asm:41 STA @LOCAL00
    case 0xC120A8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12070.asm:42 LDA @VIRTUAL04
    case 0xC120AA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C12070.asm:43 DEC
    case 0xC120AC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:44 STA @VIRTUAL04
    case 0xC120AD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C12070.asm:45 LDA @LOCAL00
    case 0xC120AF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12070.asm:46 CMP @LOCAL02
    case 0xC120B1: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // src/unknown/C1/C12070.asm:47 BCS @UNKNOWN3
    case 0xC120B3: cpu.execute_instruction<0xB0>(0x000012, 2); return true;
    // src/unknown/C1/C12070.asm:48 LDY @LOCAL03
    case 0xC120B5: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C12070.asm:49 LDX @VIRTUAL02
    case 0xC120B7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C12070.asm:50 LDA @LOCAL01
    case 0xC120B9: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C12070.asm:51 JSR UNKNOWN_C11FD4
    case 0xC120BB: cpu.execute_instruction<0x20>(0x001FD4, 3); return true;
    // src/unknown/C1/C12070.asm:52 CMP #0
    case 0xC120BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12070.asm:52 CMP #0
    // Overlapping static entry reached from 0xC120BE.
    case 0xC120C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C12070.asm:53 BEQ @UNKNOWN3
    case 0xC120C1: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C1/C12070.asm:54 LDA @VIRTUAL02
    case 0xC120C3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12070.asm:55 BRA @UNKNOWN5
    case 0xC120C5: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C1/C12070.asm:57 LDA @VIRTUAL02
    case 0xC120C7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12070.asm:58 DEC
    case 0xC120C9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:59 STA @VIRTUAL02
    case 0xC120CA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C12070.asm:61 LDA @VIRTUAL02
    case 0xC120CC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12070.asm:62 INC
    case 0xC120CE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C12070.asm:63 BNE @UNKNOWN2
    case 0xC120CF: cpu.execute_instruction<0xD0>(0x0000CF, 2); return true;
    // src/unknown/C1/C12070.asm:64 LDA #.LOWORD(-1)
    case 0xC120D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C12070.asm:64 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120D1.
    case 0xC120D3: cpu.execute_instruction<0xFF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12070.asm:66 END_C_FUNCTION
    case 0xC120D4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C12070.asm:66 END_C_FUNCTION
    case 0xC120D5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C120D6.asm (unresolved).
bool execute_unresolved_c1_c120d6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C120D6.asm:3 BEGIN_C_FUNCTION
    case 0xC120D6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C120D6.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC120D3.
    case 0xC120D7: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    case 0xC120D8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    case 0xC120D9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    case 0xC120DA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    case 0xC120DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC120DB.
    case 0xC120DD: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    case 0xC120DE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C120D6.asm:13 END_STACK_VARS
    case 0xC120DF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:27 STX @LOCAL03
    case 0xC120E0: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C120D6.asm:27 STX @LOCAL03
    // Overlapping static entry reached from 0xC120DD.
    case 0xC120E1: cpu.execute_instruction<0x16>(0x0000A8, 2); return true;
    // src/unknown/C1/C120D6.asm:28 TAY
    case 0xC120E2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:29 STY @LOCAL02
    case 0xC120E3: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C1/C120D6.asm:30 JSR SET_INSTANT_PRINTING
    case 0xC120E5: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C120D6.asm:31 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN31
    case 0xC120E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C120D6.asm:31 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN31
    // Overlapping static entry reached from 0xC120E9.
    case 0xC120EB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C120D6.asm:31 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN31
    case 0xC120EC: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:32 LOADPTR BATTLE_TO_TEXT, @LOCAL00
    case 0xC120EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F2, 2); else cpu.execute_instruction<0xA9>(0x0054F2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:32 LOADPTR BATTLE_TO_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC120EF.
    case 0xC120F1: cpu.execute_instruction<0x54>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C120D6.asm:32 LOADPTR BATTLE_TO_TEXT, @LOCAL00
    case 0xC120F2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:32 LOADPTR BATTLE_TO_TEXT, @LOCAL00
    case 0xC120F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:32 LOADPTR BATTLE_TO_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC120F4.
    case 0xC120F6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C120D6.asm:32 LOADPTR BATTLE_TO_TEXT, @LOCAL00
    case 0xC120F7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C120D6.asm:33 LDA #@TO_TEXT_LENGTH
    case 0xC120F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C120D6.asm:33 LDA #@TO_TEXT_LENGTH
    // Overlapping static entry reached from 0xC120F9.
    case 0xC120FB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C120D6.asm:34 JSR PRINT_STRING
    case 0xC120FC: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C120D6.asm:35 LDX @LOCAL03
    case 0xC120FF: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C120D6.asm:36 CPX #.LOWORD(-1)
    case 0xC12101: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C120D6.asm:36 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12101.
    case 0xC12103: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C120D6.asm:38 BEQL @UNKNOWN3
    case 0xC12104: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C120D6.asm:38 BEQL @UNKNOWN3
    case 0xC12106: cpu.execute_instruction<0x4C>(0x00218A, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C120D6.asm:38 BEQL @UNKNOWN3
    // Overlapping static entry reached from 0xC12103.
    case 0xC12107: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C120D6.asm:38 BEQL @UNKNOWN3
    // Overlapping static entry reached from 0xC12107.
    case 0xC12108: cpu.execute_instruction<0x21>(0x000086, 2); return true;
    // src/unknown/C1/C120D6.asm:42 STX @VIRTUAL02
    case 0xC12109: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C120D6.asm:42 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC12108.
    case 0xC1210A: cpu.execute_instruction<0x02>(0x0000A4, 2); return true;
    // src/unknown/C1/C120D6.asm:43 LDY @LOCAL02
    case 0xC1210B: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C120D6.asm:44 TYA
    case 0xC1210D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:45 LDY NUM_BATTLERS_IN_FRONT_ROW
    case 0xC1210E: cpu.execute_instruction<0xAC>(0x00AD56, 3); return true;
    // src/unknown/C1/C120D6.asm:46 JSL MULT16
    case 0xC12111: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C1/C120D6.asm:47 CLC
    case 0xC12115: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:48 ADC @VIRTUAL02
    case 0xC12116: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C120D6.asm:49 INC
    case 0xC12118: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:50 JSL UNKNOWN_C23E8A
    case 0xC12119: cpu.execute_instruction<0x22>(0xC23E8A, 4); return true;
    // src/unknown/C1/C120D6.asm:52 LDA #0
    case 0xC1211D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C120D6.asm:52 LDA #0
    // Overlapping static entry reached from 0xC1211D.
    case 0xC1211F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C120D6.asm:53 JSL UNKNOWN_C3E75D
    case 0xC12120: cpu.execute_instruction<0x22>(0xC3E75D, 4); return true;
    // src/unknown/C1/C120D6.asm:55 JSR RETURN_BATTLE_ATTACKER_ADDRESS
    case 0xC12124: cpu.execute_instruction<0x20>(0x00AC9B, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C120D6.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC12127: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C120D6.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC12129: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C120D6.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1212A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C120D6.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1212C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C120D6.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1212D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C120D6.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1212F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C120D6.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC12131: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C120D6.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12133: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C120D6.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12135: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C120D6.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12137: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C120D6.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12139: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C120D6.asm:59 LDA #$00FF
    case 0xC1213B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C1/C120D6.asm:59 LDA #$00FF
    // Overlapping static entry reached from 0xC1213B.
    case 0xC1213D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C120D6.asm:60 JSR PRINT_STRING
    case 0xC1213E: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C120D6.asm:66 LDY @LOCAL02
    case 0xC12141: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C120D6.asm:67 BEQ @UNKNOWN1
    case 0xC12143: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C1/C120D6.asm:68 LDX @LOCAL03
    case 0xC12145: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C120D6.asm:69 LDA BACK_ROW_BATTLERS,X
    case 0xC12147: cpu.execute_instruction<0xBD>(0x00AD82, 3); return true;
    // src/unknown/C1/C120D6.asm:70 AND #$00FF
    case 0xC1214A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C120D6.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC1214A.
    case 0xC1214C: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C120D6.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    case 0xC1214D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C120D6.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    // Overlapping static entry reached from 0xC1214D.
    case 0xC1214F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C120D6.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    case 0xC12150: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C120D6.asm:72 CLC
    case 0xC12154: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:73 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC12155: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C9, 2); else cpu.execute_instruction<0x69>(0x009FC9, 3); return true;
    // src/unknown/C1/C120D6.asm:73 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC12155.
    case 0xC12157: cpu.execute_instruction<0x9F>(0xA61380, 4); return true;
    // src/unknown/C1/C120D6.asm:74 BRA @UNKNOWN2
    case 0xC12158: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C1/C120D6.asm:76 LDX @LOCAL03
    case 0xC1215A: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C120D6.asm:76 LDX @LOCAL03
    // Overlapping static entry reached from 0xC12157.
    case 0xC1215B: cpu.execute_instruction<0x16>(0x0000BD, 2); return true;
    // src/unknown/C1/C120D6.asm:77 LDA FRONT_ROW_BATTLERS,X
    case 0xC1215C: cpu.execute_instruction<0xBD>(0x00AD7A, 3); return true;
    // src/unknown/C1/C120D6.asm:77 LDA FRONT_ROW_BATTLERS,X
    // Overlapping static entry reached from 0xC1215B.
    case 0xC1215D: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:77 LDA FRONT_ROW_BATTLERS,X
    // Overlapping static entry reached from 0xC1215D.
    case 0xC1215E: cpu.execute_instruction<0xAD>(0x00FF29, 3); return true;
    // src/unknown/C1/C120D6.asm:78 AND #$00FF
    case 0xC1215F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C120D6.asm:78 AND #$00FF
    // Overlapping static entry reached from 0xC1215F.
    case 0xC12161: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C120D6.asm:79 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    case 0xC12162: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C120D6.asm:79 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    // Overlapping static entry reached from 0xC12162.
    case 0xC12164: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C120D6.asm:79 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battler)
    case 0xC12165: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C120D6.asm:80 CLC
    case 0xC12169: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:81 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC1216A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C9, 2); else cpu.execute_instruction<0x69>(0x009FC9, 3); return true;
    // src/unknown/C1/C120D6.asm:81 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC1216A.
    case 0xC1216C: cpu.execute_instruction<0x9F>(0x1284A8, 4); return true;
    // src/unknown/C1/C120D6.asm:83 TAY
    case 0xC1216D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:84 STY @LOCAL01
    case 0xC1216E: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C1/C120D6.asm:85 LDX #0
    case 0xC12170: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C120D6.asm:85 LDX #0
    // Overlapping static entry reached from 0xC12170.
    case 0xC12172: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C120D6.asm:86 LDA #@CURSOR_POS_Y
    case 0xC12173: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x000011, 3); return true;
    // src/unknown/C1/C120D6.asm:86 LDA #@CURSOR_POS_Y
    // Overlapping static entry reached from 0xC12173.
    case 0xC12175: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C120D6.asm:87 JSR UNKNOWN_C438A5
    case 0xC12176: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C120D6.asm:88 LDX #0
    case 0xC1217A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C120D6.asm:88 LDX #0
    // Overlapping static entry reached from 0xC1217A.
    case 0xC1217C: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C1/C120D6.asm:89 LDY @LOCAL01
    case 0xC1217D: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C120D6.asm:90 TYA
    case 0xC1217F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C120D6.asm:91 JSL UNKNOWN_C223D9
    case 0xC12180: cpu.execute_instruction<0x22>(0xC223D9, 4); return true;
    // src/unknown/C1/C120D6.asm:95 JSL UNKNOWN_C43F77
    case 0xC12184: cpu.execute_instruction<0x22>(0xC43F77, 4); return true;
    // src/unknown/C1/C120D6.asm:98 BRA @UNKNOWN6
    case 0xC12188: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C1/C120D6.asm:100 LDY @LOCAL02
    case 0xC1218A: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C1/C120D6.asm:101 BEQ @UNKNOWN4
    case 0xC1218C: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    case 0xC1218E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x005502, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1218E.
    case 0xC12190: cpu.execute_instruction<0x55>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    case 0xC12191: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC12190.
    case 0xC12192: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    case 0xC12193: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC12192.
    case 0xC12194: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC12193.
    case 0xC12195: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C120D6.asm:102 LOADPTR BATTLE_BACK_ROW_TEXT, @VIRTUAL06
    case 0xC12196: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C120D6.asm:103 BRA @UNKNOWN5
    case 0xC12198: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    case 0xC1219A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x0054F5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1219A.
    case 0xC1219C: cpu.execute_instruction<0x54>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    case 0xC1219D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    case 0xC1219F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1219F.
    case 0xC121A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C120D6.asm:105 LOADPTR BATTLE_FRONT_ROW_TEXT, @VIRTUAL06
    case 0xC121A2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C120D6.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC121A4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C120D6.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC121A6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C120D6.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC121A8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C120D6.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC121AA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C120D6.asm:108 LDA #@ROW_TEXT_LENGTH
    case 0xC121AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/unknown/C1/C120D6.asm:108 LDA #@ROW_TEXT_LENGTH
    // Overlapping static entry reached from 0xC121AC.
    case 0xC121AE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C120D6.asm:109 JSR PRINT_STRING
    case 0xC121AF: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C120D6.asm:111 JSR CLEAR_INSTANT_PRINTING
    case 0xC121B2: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C120D6.asm:112 END_C_FUNCTION
    case 0xC121B6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C120D6.asm:112 END_C_FUNCTION
    case 0xC121B7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C121B8.asm (unresolved).
bool execute_unresolved_c1_c121b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C121B8.asm:3 BEGIN_C_FUNCTION
    case 0xC121B8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C121B8.asm:18 END_STACK_VARS
    case 0xC121BA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C121B8.asm:18 END_STACK_VARS
    case 0xC121BB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C121B8.asm:18 END_STACK_VARS
    case 0xC121BC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C121B8.asm:18 END_STACK_VARS
    case 0xC121BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C121B8.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC121BD.
    case 0xC121BF: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C121B8.asm:18 END_STACK_VARS
    case 0xC121C0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C121B8.asm:18 END_STACK_VARS
    case 0xC121C1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C121B8.asm:19 STX @LOCAL07
    case 0xC121C2: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/unknown/C1/C121B8.asm:19 STX @LOCAL07
    // Overlapping static entry reached from 0xC121BF.
    case 0xC121C3: cpu.execute_instruction<0x1C>(0x001A85, 3); return true;
    // src/unknown/C1/C121B8.asm:20 STA @LOCAL06
    case 0xC121C4: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C121B8.asm:21 STZ @LOCAL05
    case 0xC121C6: cpu.execute_instruction<0x64>(0x000018, 2); return true;
    // src/unknown/C1/C121B8.asm:23 STZ @LOCAL04
    case 0xC121C8: cpu.execute_instruction<0x64>(0x000016, 2); return true;
    // src/unknown/C1/C121B8.asm:25 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC121CA: cpu.execute_instruction<0xAD>(0x00AD56, 3); return true;
    // src/unknown/C1/C121B8.asm:26 BEQ @UNKNOWN0
    case 0xC121CD: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C121B8.asm:27 LDX #0
    case 0xC121CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C121B8.asm:27 LDX #0
    // Overlapping static entry reached from 0xC121CF.
    case 0xC121D1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C121B8.asm:28 BRA @UNKNOWN1
    case 0xC121D2: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C121B8.asm:30 LDX #1
    case 0xC121D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C121B8.asm:30 LDX #1
    // Overlapping static entry reached from 0xC121D4.
    case 0xC121D6: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C121B8.asm:32 STX @VIRTUAL04
    case 0xC121D7: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:33 LDA GIYGAS_PHASE
    case 0xC121D9: cpu.execute_instruction<0xAD>(0x00A97A, 3); return true;
    // src/unknown/C1/C121B8.asm:34 BEQ @UNKNOWN2
    case 0xC121DC: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C121B8.asm:35 LDA #1
    case 0xC121DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C121B8.asm:35 LDA #1
    // Overlapping static entry reached from 0xC121DE.
    case 0xC121E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C121B8.asm:36 STA @VIRTUAL04
    case 0xC121E1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:38 LDX @LOCAL04
    case 0xC121E3: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C121B8.asm:39 LDA @VIRTUAL04
    case 0xC121E5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:40 JSR UNKNOWN_C11FBC
    case 0xC121E7: cpu.execute_instruction<0x20>(0x001FBC, 3); return true;
    // src/unknown/C1/C121B8.asm:41 STA @LOCAL03
    case 0xC121EA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C121B8.asm:42 LDX @LOCAL04
    case 0xC121EC: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C121B8.asm:43 LDA @VIRTUAL04
    case 0xC121EE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:44 JSR ENEMY_FLASHING_ON
    case 0xC121F0: cpu.execute_instruction<0x22>(0xEF0052, 4); return true;
    // src/unknown/C1/C121B8.asm:45 LDA @LOCAL05
    case 0xC121F4: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C1/C121B8.asm:46 BNE @UNKNOWN3
    case 0xC121F6: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C1/C121B8.asm:47 LDX @LOCAL04
    case 0xC121F8: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C121B8.asm:48 LDA @VIRTUAL04
    case 0xC121FA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:49 JSR UNKNOWN_C120D6
    case 0xC121FC: cpu.execute_instruction<0x20>(0x0020D6, 3); return true;
    // src/unknown/C1/C121B8.asm:51 INC @LOCAL05
    case 0xC121FF: cpu.execute_instruction<0xE6>(0x000018, 2); return true;
    // src/unknown/C1/C121B8.asm:52 JSL WINDOW_TICK
    case 0xC12201: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C1/C121B8.asm:54 JSL UNKNOWN_C12E42
    case 0xC12205: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/unknown/C1/C121B8.asm:55 LDA PAD_PRESS
    case 0xC12209: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C121B8.asm:56 AND #PAD::UP
    case 0xC1220C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/C1/C121B8.asm:56 AND #PAD::UP
    // Overlapping static entry reached from 0xC1220C.
    case 0xC1220E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C1/C121B8.asm:57 BEQ @UNKNOWN5
    case 0xC1220F: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C1/C121B8.asm:58 LDA @VIRTUAL04
    case 0xC12211: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:59 BNE @UNKNOWN5
    case 0xC12213: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C1/C121B8.asm:60 LDA NUM_BATTLERS_IN_BACK_ROW
    case 0xC12215: cpu.execute_instruction<0xAD>(0x00AD58, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C121B8.asm:61 BNEL @UNKNOWN16
    case 0xC12218: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:61 BNEL @UNKNOWN16
    case 0xC1221A: cpu.execute_instruction<0x4C>(0x002302, 3); return true;
    // src/unknown/C1/C121B8.asm:63 LDA PAD_PRESS
    case 0xC1221D: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C121B8.asm:64 AND #PAD::DOWN
    case 0xC12220: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/C1/C121B8.asm:64 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC12220.
    case 0xC12222: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/C1/C121B8.asm:65 BEQ @UNKNOWN6
    case 0xC12223: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C1/C121B8.asm:65 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xC12222.
    case 0xC12224: cpu.execute_instruction<0x0F>(0xC904A5, 4); return true;
    // src/unknown/C1/C121B8.asm:66 LDA @VIRTUAL04
    case 0xC12225: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:67 CMP #1
    case 0xC12227: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C121B8.asm:67 CMP #1
    // Overlapping static entry reached from 0xC12224.
    case 0xC12228: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C1/C121B8.asm:67 CMP #1
    // Overlapping static entry reached from 0xC12227.
    case 0xC12229: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C121B8.asm:68 BNE @UNKNOWN6
    case 0xC1222A: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C1/C121B8.asm:69 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC1222C: cpu.execute_instruction<0xAD>(0x00AD56, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C121B8.asm:70 BNEL @UNKNOWN16
    case 0xC1222F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:70 BNEL @UNKNOWN16
    case 0xC12231: cpu.execute_instruction<0x4C>(0x002302, 3); return true;
    // src/unknown/C1/C121B8.asm:72 LDA #SFX::CURSOR2
    case 0xC12234: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C121B8.asm:72 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC12234.
    case 0xC12236: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C121B8.asm:73 STA @LOCAL02
    case 0xC12237: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C121B8.asm:74 LDA PAD_PRESS
    case 0xC12239: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C121B8.asm:75 AND #PAD::LEFT
    case 0xC1223C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/C1/C121B8.asm:75 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1223C.
    case 0xC1223E: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C1/C121B8.asm:76 BEQ @UNKNOWN9
    case 0xC1223F: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C1/C121B8.asm:77 LDA @VIRTUAL04
    case 0xC12241: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:78 STA @VIRTUAL02
    case 0xC12243: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C121B8.asm:79 LDY @LOCAL07
    case 0xC12245: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C1/C121B8.asm:80 LDX @LOCAL03
    case 0xC12247: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C121B8.asm:81 LDA @VIRTUAL02
    case 0xC12249: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8.asm:82 JSR UNKNOWN_C12070
    case 0xC1224B: cpu.execute_instruction<0x20>(0x002070, 3); return true;
    // src/unknown/C1/C121B8.asm:83 TAX
    case 0xC1224E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8.asm:84 STX @LOCAL01
    case 0xC1224F: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C121B8.asm:85 CPX #.LOWORD(-1)
    case 0xC12251: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C121B8.asm:85 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12251.
    case 0xC12253: cpu.execute_instruction<0xFF>(0x4C03F0, 4); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C121B8.asm:86 BNEL @UNKNOWN17
    case 0xC12254: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:86 BNEL @UNKNOWN17
    case 0xC12256: cpu.execute_instruction<0x4C>(0x002335, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:86 BNEL @UNKNOWN17
    // Overlapping static entry reached from 0xC12253.
    case 0xC12257: cpu.execute_instruction<0x35>(0x000023, 2); return true;
    // src/unknown/C1/C121B8.asm:87 LDA @VIRTUAL04
    case 0xC12259: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:88 EOR #$0001
    case 0xC1225B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000001, 2); else cpu.execute_instruction<0x49>(0x000001, 3); return true;
    // src/unknown/C1/C121B8.asm:88 EOR #$0001
    // Overlapping static entry reached from 0xC1225B.
    case 0xC1225D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C121B8.asm:89 STA @VIRTUAL02
    case 0xC1225E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C121B8.asm:90 LDY @LOCAL07
    case 0xC12260: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C1/C121B8.asm:91 LDX @LOCAL03
    case 0xC12262: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C121B8.asm:92 LDA @VIRTUAL02
    case 0xC12264: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8.asm:93 JSR UNKNOWN_C12070
    case 0xC12266: cpu.execute_instruction<0x20>(0x002070, 3); return true;
    // src/unknown/C1/C121B8.asm:94 TAX
    case 0xC12269: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8.asm:95 STX @LOCAL01
    case 0xC1226A: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C121B8.asm:96 CPX #.LOWORD(-1)
    case 0xC1226C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C121B8.asm:96 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1226C.
    case 0xC1226E: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C121B8.asm:97 BEQL @UNKNOWN2
    case 0xC1226F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:97 BEQL @UNKNOWN2
    case 0xC12271: cpu.execute_instruction<0x4C>(0x0021E3, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:97 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC1226E.
    case 0xC12272: cpu.execute_instruction<0xE3>(0x000021, 2); return true;
    // src/unknown/C1/C121B8.asm:98 JMP @UNKNOWN17
    case 0xC12274: cpu.execute_instruction<0x4C>(0x002335, 3); return true;
    // src/unknown/C1/C121B8.asm:100 LDA PAD_PRESS
    case 0xC12277: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C121B8.asm:101 AND #PAD::RIGHT
    case 0xC1227A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C1/C121B8.asm:101 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1227A.
    case 0xC1227C: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C1/C121B8.asm:102 BEQ @UNKNOWN12
    case 0xC1227D: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C1/C121B8.asm:102 BEQ @UNKNOWN12
    // Overlapping static entry reached from 0xC1227C.
    case 0xC1227E: cpu.execute_instruction<0x36>(0x0000A5, 2); return true;
    // src/unknown/C1/C121B8.asm:103 LDA @VIRTUAL04
    case 0xC1227F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:103 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC1227E.
    case 0xC12280: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C1/C121B8.asm:104 STA @VIRTUAL02
    case 0xC12281: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C121B8.asm:104 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC12280.
    case 0xC12282: cpu.execute_instruction<0x02>(0x0000A4, 2); return true;
    // src/unknown/C1/C121B8.asm:105 LDY @LOCAL07
    case 0xC12283: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C1/C121B8.asm:106 LDX @LOCAL03
    case 0xC12285: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C121B8.asm:107 LDA @VIRTUAL02
    case 0xC12287: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8.asm:108 JSR UNKNOWN_C12012
    case 0xC12289: cpu.execute_instruction<0x20>(0x002012, 3); return true;
    // src/unknown/C1/C121B8.asm:109 TAX
    case 0xC1228C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8.asm:110 STX @LOCAL01
    case 0xC1228D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C121B8.asm:111 CPX #.LOWORD(-1)
    case 0xC1228F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C121B8.asm:111 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1228F.
    case 0xC12291: cpu.execute_instruction<0xFF>(0x4C03F0, 4); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C121B8.asm:112 BNEL @UNKNOWN17
    case 0xC12292: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:112 BNEL @UNKNOWN17
    case 0xC12294: cpu.execute_instruction<0x4C>(0x002335, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:112 BNEL @UNKNOWN17
    // Overlapping static entry reached from 0xC12291.
    case 0xC12295: cpu.execute_instruction<0x35>(0x000023, 2); return true;
    // src/unknown/C1/C121B8.asm:113 LDA @VIRTUAL04
    case 0xC12297: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:114 EOR #$0001
    case 0xC12299: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000001, 2); else cpu.execute_instruction<0x49>(0x000001, 3); return true;
    // src/unknown/C1/C121B8.asm:114 EOR #$0001
    // Overlapping static entry reached from 0xC12299.
    case 0xC1229B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C121B8.asm:115 STA @VIRTUAL02
    case 0xC1229C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C121B8.asm:116 LDY @LOCAL07
    case 0xC1229E: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C1/C121B8.asm:117 LDX @LOCAL03
    case 0xC122A0: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C121B8.asm:118 LDA @VIRTUAL02
    case 0xC122A2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8.asm:119 JSR UNKNOWN_C12012
    case 0xC122A4: cpu.execute_instruction<0x20>(0x002012, 3); return true;
    // src/unknown/C1/C121B8.asm:120 TAX
    case 0xC122A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8.asm:121 STX @LOCAL01
    case 0xC122A8: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C121B8.asm:122 CPX #.LOWORD(-1)
    case 0xC122AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C121B8.asm:122 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC122AA.
    case 0xC122AC: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C121B8.asm:123 BEQL @UNKNOWN2
    case 0xC122AD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:123 BEQL @UNKNOWN2
    case 0xC122AF: cpu.execute_instruction<0x4C>(0x0021E3, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:123 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC122AC.
    case 0xC122B0: cpu.execute_instruction<0xE3>(0x000021, 2); return true;
    // src/unknown/C1/C121B8.asm:124 JMP @UNKNOWN17
    case 0xC122B2: cpu.execute_instruction<0x4C>(0x002335, 3); return true;
    // src/unknown/C1/C121B8.asm:126 LDA PAD_PRESS
    case 0xC122B5: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C121B8.asm:127 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC122B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/unknown/C1/C121B8.asm:127 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC122B8.
    case 0xC122BA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C121B8.asm:128 BEQ @UNKNOWN13
    case 0xC122BB: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C1/C121B8.asm:129 JSR ENEMY_FLASHING_OFF
    case 0xC122BD: cpu.execute_instruction<0x22>(0xEF0000, 4); return true;
    // src/unknown/C1/C121B8.asm:130 LDY NUM_BATTLERS_IN_FRONT_ROW
    case 0xC122C1: cpu.execute_instruction<0xAC>(0x00AD56, 3); return true;
    // src/unknown/C1/C121B8.asm:131 LDA @VIRTUAL04
    case 0xC122C4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:132 JSL MULT16
    case 0xC122C6: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C1/C121B8.asm:133 CLC
    case 0xC122CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C121B8.asm:134 ADC @LOCAL04
    case 0xC122CB: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C1/C121B8.asm:135 TAX
    case 0xC122CD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8.asm:136 INX
    case 0xC122CE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C121B8.asm:137 STX @LOCAL00
    case 0xC122CF: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C121B8.asm:138 LDA #SFX::CURSOR1
    case 0xC122D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C121B8.asm:138 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC122D1.
    case 0xC122D3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C121B8.asm:139 JSL PLAY_SOUND
    case 0xC122D4: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C1/C121B8.asm:140 JMP @UNKNOWN18
    case 0xC122D8: cpu.execute_instruction<0x4C>(0x00235A, 3); return true;
    // src/unknown/C1/C121B8.asm:142 LDA PAD_PRESS
    case 0xC122DB: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C121B8.asm:143 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC122DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/unknown/C1/C121B8.asm:143 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC122DE.
    case 0xC122E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0003D0, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C121B8.asm:144 BEQL @UNKNOWN4
    case 0xC122E1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C121B8.asm:144 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC122E0.
    case 0xC122E2: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:144 BEQL @UNKNOWN4
    case 0xC122E3: cpu.execute_instruction<0x4C>(0x002205, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:144 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC122E2.
    case 0xC122E4: cpu.execute_instruction<0x05>(0x000022, 2); return true;
    // src/unknown/C1/C121B8.asm:145 LDA @LOCAL06
    case 0xC122E6: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C121B8.asm:146 CMP #1
    case 0xC122E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C121B8.asm:146 CMP #1
    // Overlapping static entry reached from 0xC122E8.
    case 0xC122EA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C121B8.asm:147 BNEL @UNKNOWN4
    case 0xC122EB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:147 BNEL @UNKNOWN4
    case 0xC122ED: cpu.execute_instruction<0x4C>(0x002205, 3); return true;
    // src/unknown/C1/C121B8.asm:148 JSR ENEMY_FLASHING_OFF
    case 0xC122F0: cpu.execute_instruction<0x22>(0xEF0000, 4); return true;
    // src/unknown/C1/C121B8.asm:149 LDX #0
    case 0xC122F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C121B8.asm:149 LDX #0
    // Overlapping static entry reached from 0xC122F4.
    case 0xC122F6: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C121B8.asm:150 STX @LOCAL00
    case 0xC122F7: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C121B8.asm:151 LDA #SFX::CURSOR2
    case 0xC122F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C121B8.asm:151 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC122F9.
    case 0xC122FB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C121B8.asm:152 JSL PLAY_SOUND
    case 0xC122FC: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C1/C121B8.asm:153 BRA @UNKNOWN18
    case 0xC12300: cpu.execute_instruction<0x80>(0x000058, 2); return true;
    // src/unknown/C1/C121B8.asm:155 LDA #SFX::CURSOR3
    case 0xC12302: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C121B8.asm:155 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC12302.
    case 0xC12304: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C121B8.asm:156 STA @LOCAL02
    case 0xC12305: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C121B8.asm:157 LDA @VIRTUAL04
    case 0xC12307: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:158 EOR #$0001
    case 0xC12309: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000001, 2); else cpu.execute_instruction<0x49>(0x000001, 3); return true;
    // src/unknown/C1/C121B8.asm:158 EOR #$0001
    // Overlapping static entry reached from 0xC12309.
    case 0xC1230B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C121B8.asm:159 STA @VIRTUAL02
    case 0xC1230C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C121B8.asm:160 LDY @LOCAL07
    case 0xC1230E: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C1/C121B8.asm:161 LDX @LOCAL03
    case 0xC12310: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C121B8.asm:162 DEX
    case 0xC12312: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8.asm:163 LDA @VIRTUAL02
    case 0xC12313: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8.asm:164 JSR UNKNOWN_C12012
    case 0xC12315: cpu.execute_instruction<0x20>(0x002012, 3); return true;
    // src/unknown/C1/C121B8.asm:165 TAX
    case 0xC12318: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8.asm:166 STX @LOCAL01
    case 0xC12319: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C121B8.asm:167 CPX #.LOWORD(-1)
    case 0xC1231B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C121B8.asm:167 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1231B.
    case 0xC1231D: cpu.execute_instruction<0xFF>(0xA415D0, 4); return true;
    // src/unknown/C1/C121B8.asm:168 BNE @UNKNOWN17
    case 0xC1231E: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/unknown/C1/C121B8.asm:169 LDY @LOCAL07
    case 0xC12320: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C1/C121B8.asm:169 LDY @LOCAL07
    // Overlapping static entry reached from 0xC1231D.
    case 0xC12321: cpu.execute_instruction<0x1C>(0x0014A6, 3); return true;
    // src/unknown/C1/C121B8.asm:170 LDX @LOCAL03
    case 0xC12322: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C1/C121B8.asm:171 INX
    case 0xC12324: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C121B8.asm:172 LDA @VIRTUAL02
    case 0xC12325: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8.asm:173 JSR UNKNOWN_C12070
    case 0xC12327: cpu.execute_instruction<0x20>(0x002070, 3); return true;
    // src/unknown/C1/C121B8.asm:174 TAX
    case 0xC1232A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C121B8.asm:175 STX @LOCAL01
    case 0xC1232B: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C121B8.asm:176 CPX #.LOWORD(-1)
    case 0xC1232D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C1/C121B8.asm:176 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1232D.
    case 0xC1232F: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C121B8.asm:177 BEQL @UNKNOWN2
    case 0xC12330: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:177 BEQL @UNKNOWN2
    case 0xC12332: cpu.execute_instruction<0x4C>(0x0021E3, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C121B8.asm:177 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC1232F.
    case 0xC12333: cpu.execute_instruction<0xE3>(0x000021, 2); return true;
    // src/unknown/C1/C121B8.asm:180 STZ @LOCAL05
    case 0xC12335: cpu.execute_instruction<0x64>(0x000018, 2); return true;
    // src/unknown/C1/C121B8.asm:181 JSL CLEAR_INSTANT_PRINTING
    case 0xC12337: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C121B8.asm:182 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN31
    case 0xC1233B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C121B8.asm:182 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN31
    // Overlapping static entry reached from 0xC1233B.
    case 0xC1233D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C121B8.asm:182 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN31
    case 0xC1233E: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C121B8.asm:183 JSL WINDOW_TICK
    case 0xC12341: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C1/C121B8.asm:184 JSL SET_INSTANT_PRINTING
    case 0xC12345: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/unknown/C1/C121B8.asm:185 LDX @LOCAL01
    case 0xC12349: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C1/C121B8.asm:187 STX @LOCAL04
    case 0xC1234B: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C121B8.asm:188 LDA @VIRTUAL02
    case 0xC1234D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C121B8.asm:189 STA @VIRTUAL04
    case 0xC1234F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C121B8.asm:190 LDA @LOCAL02
    case 0xC12351: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C121B8.asm:191 JSL PLAY_SOUND
    case 0xC12353: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C1/C121B8.asm:192 JMP @UNKNOWN2
    case 0xC12357: cpu.execute_instruction<0x4C>(0x0021E3, 3); return true;
    // src/unknown/C1/C121B8.asm:194 JSR CLOSE_FOCUS_WINDOW
    case 0xC1235A: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/unknown/C1/C121B8.asm:195 LDX @LOCAL00
    case 0xC1235D: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C121B8.asm:196 TXA
    case 0xC1235F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C121B8.asm:197 END_C_FUNCTION
    case 0xC12360: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C121B8.asm:197 END_C_FUNCTION
    case 0xC12361: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12362.asm (unresolved).
bool execute_unresolved_c1_c12362_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12362.asm:3 BEGIN_C_FUNCTION
    case 0xC12362: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    case 0xC12364: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    case 0xC12365: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    case 0xC12366: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    case 0xC12367: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC12367.
    case 0xC12369: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    case 0xC1236A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C12362.asm:10 END_STACK_VARS
    case 0xC1236B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:11 STA @VIRTUAL02
    case 0xC1236C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C12362.asm:11 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC12369.
    case 0xC1236D: cpu.execute_instruction<0x02>(0x0000AD, 2); return true;
    // src/unknown/C1/C12362.asm:12 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC1236E: cpu.execute_instruction<0xAD>(0x00AD56, 3); return true;
    // src/unknown/C1/C12362.asm:13 BEQ @UNKNOWN0
    case 0xC12371: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C12362.asm:14 LDX #0
    case 0xC12373: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C12362.asm:14 LDX #0
    // Overlapping static entry reached from 0xC12373.
    case 0xC12375: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C12362.asm:15 BRA @UNKNOWN1
    case 0xC12376: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C12362.asm:17 LDX #1
    case 0xC12378: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C12362.asm:17 LDX #1
    // Overlapping static entry reached from 0xC12378.
    case 0xC1237A: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/unknown/C1/C12362.asm:19 TXY
    case 0xC1237B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:20 STY @LOCAL02
    case 0xC1237C: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C1/C12362.asm:22 LDY @LOCAL02
    case 0xC1237E: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C12362.asm:23 TYA
    case 0xC12380: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:24 JSR UNKNOWN_C43657
    case 0xC12381: cpu.execute_instruction<0x22>(0xC43657, 4); return true;
    // src/unknown/C1/C12362.asm:25 JSR CLEAR_INSTANT_PRINTING
    case 0xC12385: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/unknown/C1/C12362.asm:26 LDX #.LOWORD(-1)
    case 0xC12389: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C1/C12362.asm:26 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12389.
    case 0xC1238B: cpu.execute_instruction<0xFF>(0x9812A4, 4); return true;
    // src/unknown/C1/C12362.asm:27 LDY @LOCAL02
    case 0xC1238C: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C12362.asm:28 TYA
    case 0xC1238E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:29 JSR UNKNOWN_C120D6
    case 0xC1238F: cpu.execute_instruction<0x20>(0x0020D6, 3); return true;
    // src/unknown/C1/C12362.asm:30 JSL WINDOW_TICK
    case 0xC12392: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C1/C12362.asm:32 JSL UNKNOWN_C12E42
    case 0xC12396: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/unknown/C1/C12362.asm:33 LDA PAD_PRESS
    case 0xC1239A: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C12362.asm:34 AND #PAD::UP
    case 0xC1239D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/C1/C12362.asm:34 AND #PAD::UP
    // Overlapping static entry reached from 0xC1239D.
    case 0xC1239F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:35 BEQ @UNKNOWN4
    case 0xC123A0: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C1/C12362.asm:36 LDX #1
    case 0xC123A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C12362.asm:36 LDX #1
    // Overlapping static entry reached from 0xC123A2.
    case 0xC123A4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12362.asm:37 STX @LOCAL01
    case 0xC123A5: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:38 LDA #SFX::CURSOR3
    case 0xC123A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C12362.asm:38 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC123A7.
    case 0xC123A9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C12362.asm:39 STA @LOCAL00
    case 0xC123AA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12362.asm:40 BRA @UNKNOWN7
    case 0xC123AC: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/unknown/C1/C12362.asm:42 LDA PAD_PRESS
    case 0xC123AE: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C12362.asm:43 AND #PAD::DOWN
    case 0xC123B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/C1/C12362.asm:43 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC123B1.
    case 0xC123B3: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/C1/C12362.asm:44 BEQ @UNKNOWN5
    case 0xC123B4: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C1/C12362.asm:44 BEQ @UNKNOWN5
    // Overlapping static entry reached from 0xC123B3.
    case 0xC123B5: cpu.execute_instruction<0x0C>(0x0000A2, 3); return true;
    // src/unknown/C1/C12362.asm:45 LDX #0
    case 0xC123B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C12362.asm:45 LDX #0
    // Overlapping static entry reached from 0xC123B6.
    case 0xC123B8: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12362.asm:46 STX @LOCAL01
    case 0xC123B9: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:47 LDA #SFX::CURSOR3
    case 0xC123BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C12362.asm:47 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC123BB.
    case 0xC123BD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C12362.asm:48 STA @LOCAL00
    case 0xC123BE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12362.asm:49 BRA @UNKNOWN7
    case 0xC123C0: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/unknown/C1/C12362.asm:51 LDA PAD_PRESS
    case 0xC123C2: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C12362.asm:52 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC123C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/unknown/C1/C12362.asm:52 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC123C5.
    case 0xC123C7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C12362.asm:53 BEQ @UNKNOWN6
    case 0xC123C8: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C1/C12362.asm:54 JSR UNKNOWN_C435E4
    case 0xC123CA: cpu.execute_instruction<0x22>(0xC435E4, 4); return true;
    // src/unknown/C1/C12362.asm:55 LDY @LOCAL02
    case 0xC123CE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C1/C12362.asm:56 TYX
    case 0xC123D0: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:57 INX
    case 0xC123D1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:58 STX @LOCAL01
    case 0xC123D2: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:59 LDA #SFX::CURSOR1
    case 0xC123D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C12362.asm:59 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC123D4.
    case 0xC123D6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C12362.asm:60 JSL PLAY_SOUND
    case 0xC123D7: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C1/C12362.asm:61 BRA @UNKNOWN11
    case 0xC123DB: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/unknown/C1/C12362.asm:63 LDA PAD_PRESS
    case 0xC123DD: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C12362.asm:64 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC123E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/unknown/C1/C12362.asm:64 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC123E0.
    case 0xC123E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x00B1F0, 3); return true;
    // src/unknown/C1/C12362.asm:65 BEQ @UNKNOWN3
    case 0xC123E3: cpu.execute_instruction<0xF0>(0x0000B1, 2); return true;
    // src/unknown/C1/C12362.asm:65 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC123E2.
    case 0xC123E4: cpu.execute_instruction<0xB1>(0x0000A5, 2); return true;
    // src/unknown/C1/C12362.asm:66 LDA @VIRTUAL02
    case 0xC123E5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12362.asm:66 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC123E4.
    case 0xC123E6: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C1/C12362.asm:67 CMP #1
    case 0xC123E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C12362.asm:67 CMP #1
    // Overlapping static entry reached from 0xC123E7.
    case 0xC123E9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12362.asm:68 BNE @UNKNOWN3
    case 0xC123EA: cpu.execute_instruction<0xD0>(0x0000AA, 2); return true;
    // src/unknown/C1/C12362.asm:69 JSR UNKNOWN_C435E4
    case 0xC123EC: cpu.execute_instruction<0x22>(0xC435E4, 4); return true;
    // src/unknown/C1/C12362.asm:70 LDX #0
    case 0xC123F0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C12362.asm:70 LDX #0
    // Overlapping static entry reached from 0xC123F0.
    case 0xC123F2: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12362.asm:71 STX @LOCAL01
    case 0xC123F3: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:72 LDA #SFX::CURSOR2
    case 0xC123F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C12362.asm:72 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC123F5.
    case 0xC123F7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C12362.asm:73 JSL PLAY_SOUND
    case 0xC123F8: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C1/C12362.asm:74 BRA @UNKNOWN11
    case 0xC123FC: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C1/C12362.asm:76 CPX #0
    case 0xC123FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C1/C12362.asm:76 CPX #0
    // Overlapping static entry reached from 0xC123FE.
    case 0xC12400: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12362.asm:77 BNE @UNKNOWN8
    case 0xC12401: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C12362.asm:78 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC12403: cpu.execute_instruction<0xAD>(0x00AD56, 3); return true;
    // src/unknown/C1/C12362.asm:79 BNE @UNKNOWN10
    case 0xC12406: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:81 CPX #0
    case 0xC12408: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C1/C12362.asm:81 CPX #0
    // Overlapping static entry reached from 0xC12408.
    case 0xC1240A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C12362.asm:82 BEQL @UNKNOWN2
    case 0xC1240B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C12362.asm:82 BEQL @UNKNOWN2
    case 0xC1240D: cpu.execute_instruction<0x4C>(0x00237E, 3); return true;
    // src/unknown/C1/C12362.asm:83 LDA NUM_BATTLERS_IN_BACK_ROW
    case 0xC12410: cpu.execute_instruction<0xAD>(0x00AD58, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C12362.asm:84 BEQL @UNKNOWN2
    case 0xC12413: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C12362.asm:84 BEQL @UNKNOWN2
    case 0xC12415: cpu.execute_instruction<0x4C>(0x00237E, 3); return true;
    // src/unknown/C1/C12362.asm:86 LDA @LOCAL00
    case 0xC12418: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12362.asm:87 JSL PLAY_SOUND
    case 0xC1241A: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C1/C12362.asm:88 LDX @LOCAL01
    case 0xC1241E: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:89 TXY
    case 0xC12420: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C12362.asm:90 STY @LOCAL02
    case 0xC12421: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C1/C12362.asm:91 JMP @UNKNOWN2
    case 0xC12423: cpu.execute_instruction<0x4C>(0x00237E, 3); return true;
    // src/unknown/C1/C12362.asm:93 JSR CLOSE_FOCUS_WINDOW
    case 0xC12426: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/unknown/C1/C12362.asm:94 LDX @LOCAL01
    case 0xC12429: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C1/C12362.asm:95 TXA
    case 0xC1242B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12362.asm:96 END_C_FUNCTION
    case 0xC1242C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C12362.asm:96 END_C_FUNCTION
    case 0xC1242D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1242E.asm (unresolved).
bool execute_unresolved_c1_c1242e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1242E.asm:3 BEGIN_C_FUNCTION
    case 0xC1242E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    case 0xC12430: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    case 0xC12431: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    case 0xC12432: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    case 0xC12433: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC12433.
    case 0xC12435: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    case 0xC12436: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1242E.asm:9 END_STACK_VARS
    case 0xC12437: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1242E.asm:10 STY @VIRTUAL02
    case 0xC12438: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C1/C1242E.asm:10 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC12435.
    case 0xC12439: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C1/C1242E.asm:11 TXY
    case 0xC1243A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C1242E.asm:12 TAX
    case 0xC1243B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1242E.asm:13 BEQ @UNKNOWN0
    case 0xC1243C: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C1242E.asm:14 TYA
    case 0xC1243E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1242E.asm:15 JSR UNKNOWN_C12362
    case 0xC1243F: cpu.execute_instruction<0x20>(0x002362, 3); return true;
    // src/unknown/C1/C1242E.asm:16 BRA @UNKNOWN1
    case 0xC12442: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C1/C1242E.asm:18 LDX @VIRTUAL02
    case 0xC12444: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1242E.asm:19 TYA
    case 0xC12446: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1242E.asm:20 JSR UNKNOWN_C121B8
    case 0xC12447: cpu.execute_instruction<0x20>(0x0021B8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1242E.asm:22 END_C_FUNCTION
    case 0xC1244A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1242E.asm:22 END_C_FUNCTION
    case 0xC1244B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1242E_redirect.asm (unresolved).
bool execute_unresolved_c1_c1242e_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1242E_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DE37: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1242E_redirect.asm:5 JSR UNKNOWN_C1242E
    case 0xC1DE39: cpu.execute_instruction<0x20>(0x00242E, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1242E_redirect.asm:6 END_C_FUNCTION
    case 0xC1DE3C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1244C.asm (unresolved).
bool execute_unresolved_c1_c1244c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1244C.asm:3 BEGIN_C_FUNCTION
    case 0xC1244C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1244C.asm:20 END_STACK_VARS
    case 0xC1244E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1244C.asm:20 END_STACK_VARS
    case 0xC1244F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1244C.asm:20 END_STACK_VARS
    case 0xC12450: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1244C.asm:20 END_STACK_VARS
    case 0xC12451: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1244C.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC12451.
    case 0xC12453: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1244C.asm:20 END_STACK_VARS
    case 0xC12454: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1244C.asm:20 END_STACK_VARS
    case 0xC12455: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:21 STY @LOCAL0A
    case 0xC12456: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // src/unknown/C1/C1244C.asm:21 STY @LOCAL0A
    // Overlapping static entry reached from 0xC12453.
    case 0xC12457: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:22 STX @LOCAL09
    case 0xC12458: cpu.execute_instruction<0x86>(0x000026, 2); return true;
    // src/unknown/C1/C1244C.asm:23 STA @LOCAL08
    case 0xC1245A: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C1/C1244C.asm:24 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC1245C: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/unknown/C1/C1244C.asm:25 STA @LOCAL07
    case 0xC1245F: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C1/C1244C.asm:26 CLC
    case 0xC12461: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:27 ADC #window_stats::argument_memory
    case 0xC12462: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/unknown/C1/C1244C.asm:27 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC12462.
    case 0xC12464: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1244C.asm:28 TAY
    case 0xC12465: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1244C.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC12466: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC12469: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1244C.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC1246B: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:29 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC1246E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL06
    case 0xC12470: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL06
    case 0xC12472: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL06
    case 0xC12474: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL06
    case 0xC12476: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C1/C1244C.asm:31 LDA @LOCAL09
    case 0xC12478: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1244C.asm:32 CMP #1
    case 0xC1247A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1244C.asm:32 CMP #1
    // Overlapping static entry reached from 0xC1247A.
    case 0xC1247C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C1244C.asm:33 BNEL @UNKNOWN7
    case 0xC1247D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C1244C.asm:33 BNEL @UNKNOWN7
    case 0xC1247F: cpu.execute_instruction<0x4C>(0x00255C, 3); return true;
    // src/unknown/C1/C1244C.asm:34 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC12482: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C1244C.asm:34 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC12482.
    case 0xC12484: cpu.execute_instruction<0x9C>(0x002022, 3); return true;
    // src/unknown/C1/C1244C.asm:35 JSL UNKNOWN_C20A20
    case 0xC12485: cpu.execute_instruction<0x22>(0xC20A20, 4); return true;
    // src/unknown/C1/C1244C.asm:35 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC12484.
    case 0xC12487: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:35 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC12487.
    case 0xC12488: cpu.execute_instruction<0xC2>(0x0000AD, 2); return true;
    // src/unknown/C1/C1244C.asm:36 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC12489: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C1244C.asm:36 LDA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC12488.
    case 0xC1248A: cpu.execute_instruction<0xA4>(0x000098, 2); return true;
    // src/unknown/C1/C1244C.asm:37 AND #$00FF
    case 0xC1248C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC1248C.
    case 0xC1248E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1244C.asm:38 CMP #1
    case 0xC1248F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1244C.asm:38 CMP #1
    // Overlapping static entry reached from 0xC1248F.
    case 0xC12491: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1244C.asm:39 BNE @UNKNOWN1
    case 0xC12492: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1244C.asm:40 LDX #WINDOW::UNKNOWN33
    case 0xC12494: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000033, 2); else cpu.execute_instruction<0xA2>(0x000033, 3); return true;
    // src/unknown/C1/C1244C.asm:40 LDX #WINDOW::UNKNOWN33
    // Overlapping static entry reached from 0xC12494.
    case 0xC12496: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C.asm:41 BRA @UNKNOWN2
    case 0xC12497: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C1/C1244C.asm:43 CLC
    case 0xC12499: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:44 ADC #WINDOW::UNKNOWN28
    case 0xC1249A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/unknown/C1/C1244C.asm:44 ADC #WINDOW::UNKNOWN28
    // Overlapping static entry reached from 0xC1249A.
    case 0xC1249C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1244C.asm:45 TAX
    case 0xC1249D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:46 DEX
    case 0xC1249E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:48 STX @VIRTUAL04
    case 0xC1249F: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1244C.asm:49 LDA @VIRTUAL04
    case 0xC124A1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1244C.asm:50 STA @LOCAL05
    case 0xC124A3: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1244C.asm:51 CREATE_WINDOW_NEAR @VIRTUAL04
    case 0xC124A5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1244C.asm:51 CREATE_WINDOW_NEAR @VIRTUAL04
    case 0xC124A7: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1244C.asm:52 STZ @LOCAL04
    case 0xC124AA: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C.asm:53 JMP @UNKNOWN4
    case 0xC124AC: cpu.execute_instruction<0x4C>(0x00252A, 3); return true;
    // src/unknown/C1/C1244C.asm:55 LDA @LOCAL04
    case 0xC124AF: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C.asm:56 CLC
    case 0xC124B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:57 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC124B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006F, 2); else cpu.execute_instruction<0x69>(0x00986F, 3); return true;
    // src/unknown/C1/C1244C.asm:57 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC124B2.
    case 0xC124B4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:58 STA @VIRTUAL02
    case 0xC124B5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1244C.asm:59 LDX @VIRTUAL02
    case 0xC124B7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1244C.asm:60 LDA __BSS_START__,X
    case 0xC124B9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1244C.asm:61 AND #$00FF
    case 0xC124BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC124BC.
    case 0xC124BE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1244C.asm:62 JSL GET_PARTY_CHARACTER_NAME
    case 0xC124BF: cpu.execute_instruction<0x22>(0xC222D3, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC124C3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC124C5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC124C7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC124C9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1244C.asm:64 LDX #6
    case 0xC124CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C1/C1244C.asm:64 LDX #6
    // Overlapping static entry reached from 0xC124CB.
    case 0xC124CD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1244C.asm:65 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC124CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // src/unknown/C1/C1244C.asm:65 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC124CE.
    case 0xC124D0: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/unknown/C1/C1244C.asm:66 JSL MEMCPY16
    case 0xC124D1: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C1/C1244C.asm:66 JSL MEMCPY16
    // Overlapping static entry reached from 0xC124D0.
    case 0xC124D3: cpu.execute_instruction<0x8E>(0x00E2C0, 3); return true;
    // src/unknown/C1/C1244C.asm:67 SEP #PROC_FLAGS::ACCUM8
    case 0xC124D5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1244C.asm:67 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC124D3.
    case 0xC124D6: cpu.execute_instruction<0x20>(0x00A49C, 3); return true;
    // src/unknown/C1/C1244C.asm:68 STZ TEMPORARY_TEXT_BUFFER+5
    case 0xC124D7: cpu.execute_instruction<0x9C>(0x009CA4, 3); return true;
    // src/unknown/C1/C1244C.asm:68 STZ TEMPORARY_TEXT_BUFFER+5
    // Overlapping static entry reached from 0xC124D6.
    case 0xC124D9: cpu.execute_instruction<0x9C>(0x0020C2, 3); return true;
    // src/unknown/C1/C1244C.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC124DA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1244C.asm:70 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC124DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1244C.asm:70 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC124DC.
    case 0xC124DE: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:70 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC124DF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1244C.asm:70 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC124E1: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1244C.asm:70 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC124E2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1244C.asm:70 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC124E4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:70 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC124E5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1244C.asm:70 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC124E7: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1244C.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC124E9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC124EB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC124ED: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC124EF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC124F1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1244C.asm:73 LDA @LOCAL04
    case 0xC124F3: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C.asm:74 ASL
    case 0xC124F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:75 ASL
    case 0xC124F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:76 CLC
    case 0xC124F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:77 ADC @LOCAL08
    case 0xC124F8: cpu.execute_instruction<0x65>(0x000024, 2); return true;
    // src/unknown/C1/C1244C.asm:78 TAY
    case 0xC124FA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1244C.asm:79 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC124FB: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:79 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC124FE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1244C.asm:79 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12500: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:79 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12503: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C.asm:80 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC12505: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:80 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC12507: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C.asm:80 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC12509: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:80 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1250B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C1244C.asm:81 LDY #0
    case 0xC1250D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C1244C.asm:81 LDY #0
    // Overlapping static entry reached from 0xC1250D.
    case 0xC1250F: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1244C.asm:82 LDA @LOCAL04
    case 0xC12510: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C.asm:83 STA @VIRTUAL04
    case 0xC12512: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1244C.asm:84 ASL
    case 0xC12514: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:85 ADC @VIRTUAL04
    case 0xC12515: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1244C.asm:86 ASL
    case 0xC12517: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:87 TAX
    case 0xC12518: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:88 STX @LOCAL03
    case 0xC12519: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C1/C1244C.asm:89 LDX @VIRTUAL02
    case 0xC1251B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C1/C1244C.asm:90 LDA __BSS_START__,X
    case 0xC1251D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1244C.asm:91 AND #$00FF
    case 0xC12520: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C.asm:91 AND #$00FF
    // Overlapping static entry reached from 0xC12520.
    case 0xC12522: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C1/C1244C.asm:92 LDX @LOCAL03
    case 0xC12523: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C1/C1244C.asm:93 JSR UNKNOWN_C1153B
    case 0xC12525: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/unknown/C1/C1244C.asm:94 INC @LOCAL04
    case 0xC12528: cpu.execute_instruction<0xE6>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C.asm:96 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1252A: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C1244C.asm:97 AND #$00FF
    case 0xC1252D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC1252D.
    case 0xC1252F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1244C.asm:98 CLC
    case 0xC12530: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:99 SBC @LOCAL04
    case 0xC12531: cpu.execute_instruction<0xE5>(0x00001A, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C1/C1244C.asm:100 JUMPGTS @UNKNOWN3
    case 0xC12533: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C1/C1244C.asm:100 JUMPGTS @UNKNOWN3
    case 0xC12535: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C1/C1244C.asm:100 JUMPGTS @UNKNOWN3
    case 0xC12537: cpu.execute_instruction<0x4C>(0x0024AF, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C1/C1244C.asm:100 JUMPGTS @UNKNOWN3
    case 0xC1253A: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C1/C1244C.asm:100 JUMPGTS @UNKNOWN3
    case 0xC1253C: cpu.execute_instruction<0x4C>(0x0024AF, 3); return true;
    // src/unknown/C1/C1244C.asm:101 JSR PRINT_MENU_ITEMS
    case 0xC1253F: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // src/unknown/C1/C1244C.asm:102 LDA @LOCAL0A
    case 0xC12542: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C1/C1244C.asm:103 JSR SELECTION_MENU
    case 0xC12544: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C1244C.asm:104 TAX
    case 0xC12547: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:105 STX @LOCAL02
    case 0xC12548: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1244C.asm:106 LDA @LOCAL05
    case 0xC1254A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C.asm:107 STA @VIRTUAL04
    case 0xC1254C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C1244C.asm:108 JSL CLOSE_WINDOW
    case 0xC1254E: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/unknown/C1/C1244C.asm:109 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC12552: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C1244C.asm:109 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC12552.
    case 0xC12554: cpu.execute_instruction<0x9C>(0x00BC22, 3); return true;
    // src/unknown/C1/C1244C.asm:110 JSL UNKNOWN_C20ABC
    case 0xC12555: cpu.execute_instruction<0x22>(0xC20ABC, 4); return true;
    // src/unknown/C1/C1244C.asm:110 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC12554.
    case 0xC12557: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:110 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC12557.
    case 0xC12558: cpu.execute_instruction<0xC2>(0x00004C, 2); return true;
    // src/unknown/C1/C1244C.asm:111 JMP @UNKNOWN42
    case 0xC12559: cpu.execute_instruction<0x4C>(0x0027CB, 3); return true;
    // src/unknown/C1/C1244C.asm:111 JMP @UNKNOWN42
    // Overlapping static entry reached from 0xC12558.
    case 0xC1255A: cpu.execute_instruction<0xCB>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:111 JMP @UNKNOWN42
    // Overlapping static entry reached from 0xC1255A.
    case 0xC1255B: cpu.execute_instruction<0x27>(0x0000A2, 2); return true;
    // src/unknown/C1/C1244C.asm:113 LDX #0
    case 0xC1255C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1244C.asm:113 LDX #0
    // Overlapping static entry reached from 0xC1255B.
    case 0xC1255D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1244C.asm:113 LDX #0
    // Overlapping static entry reached from 0xC1255C.
    case 0xC1255E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C.asm:114 BRA @UNKNOWN9
    case 0xC1255F: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/unknown/C1/C1244C.asm:116 TXA
    case 0xC12561: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:117 ASL
    case 0xC12562: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:118 ASL
    case 0xC12563: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:119 STA @LOCAL05
    case 0xC12564: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C.asm:120 CLC
    case 0xC12566: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:121 ADC @LOCAL08
    case 0xC12567: cpu.execute_instruction<0x65>(0x000024, 2); return true;
    // src/unknown/C1/C1244C.asm:122 TAY
    case 0xC12569: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1244C.asm:123 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1256A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:123 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1256D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1244C.asm:123 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1256F: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:123 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12572: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1244C.asm:124 LDA @LOCAL05
    case 0xC12574: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C.asm:125 CLC
    case 0xC12576: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:126 ADC #.LOWORD(PARTY_MEMBER_SELECTION_SCRIPTS)
    case 0xC12577: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x009631, 3); return true;
    // src/unknown/C1/C1244C.asm:126 ADC #.LOWORD(PARTY_MEMBER_SELECTION_SCRIPTS)
    // Overlapping static entry reached from 0xC12577.
    case 0xC12579: cpu.execute_instruction<0x96>(0x0000A8, 2); return true;
    // src/unknown/C1/C1244C.asm:127 TAY
    case 0xC1257A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C1244C.asm:128 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1257B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C1244C.asm:128 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1257D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C1/C1244C.asm:128 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12580: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C1/C1244C.asm:128 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12582: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C1/C1244C.asm:129 INX
    case 0xC12585: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:131 CPX #4
    case 0xC12586: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C1/C1244C.asm:131 CPX #4
    // Overlapping static entry reached from 0xC12586.
    case 0xC12588: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1244C.asm:132 BNE @UNKNOWN8
    case 0xC12589: cpu.execute_instruction<0xD0>(0x0000D6, 2); return true;
    // src/unknown/C1/C1244C.asm:133 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC1258B: cpu.execute_instruction<0xAD>(0x0089CA, 3); return true;
    // src/unknown/C1/C1244C.asm:134 CMP #.LOWORD(-1)
    case 0xC1258E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1244C.asm:134 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1258E.
    case 0xC12590: cpu.execute_instruction<0xFF>(0xA205D0, 4); return true;
    // src/unknown/C1/C1244C.asm:135 BNE @UNKNOWN10
    case 0xC12591: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1244C.asm:136 LDX #0
    case 0xC12593: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1244C.asm:136 LDX #0
    // Overlapping static entry reached from 0xC12590.
    case 0xC12594: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1244C.asm:136 LDX #0
    // Overlapping static entry reached from 0xC12593.
    case 0xC12595: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C.asm:137 BRA @UNKNOWN11
    case 0xC12596: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1244C.asm:139 LDX BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC12598: cpu.execute_instruction<0xAE>(0x0089CA, 3); return true;
    // src/unknown/C1/C1244C.asm:141 STX @VIRTUAL04
    case 0xC1259B: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1244C.asm:142 LDA GAME_STATE + game_state::party_members,X
    case 0xC1259D: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/unknown/C1/C1244C.asm:143 AND #$00FF
    case 0xC125A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C.asm:143 AND #$00FF
    // Overlapping static entry reached from 0xC125A0.
    case 0xC125A2: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1244C.asm:144 DEC
    case 0xC125A3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:145 ASL
    case 0xC125A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:146 ASL
    case 0xC125A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:147 CLC
    case 0xC125A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:148 ADC #.LOWORD(PARTY_MEMBER_SELECTION_SCRIPTS)
    case 0xC125A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x009631, 3); return true;
    // src/unknown/C1/C1244C.asm:148 ADC #.LOWORD(PARTY_MEMBER_SELECTION_SCRIPTS)
    // Overlapping static entry reached from 0xC125A7.
    case 0xC125A9: cpu.execute_instruction<0x96>(0x0000A8, 2); return true;
    // src/unknown/C1/C1244C.asm:149 TAY
    case 0xC125AA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1244C.asm:150 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC125AB: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:150 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC125AE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1244C.asm:150 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC125B0: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:150 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC125B3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1244C.asm:151 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC125B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1244C.asm:151 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC125B5.
    case 0xC125B7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:151 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC125B8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1244C.asm:151 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC125BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1244C.asm:151 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC125BA.
    case 0xC125BC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:151 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC125BD: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C1/C1244C.asm:152 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC125BF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C1/C1244C.asm:152 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC125C1: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C1/C1244C.asm:152 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC125C3: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C1/C1244C.asm:152 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC125C5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C1/C1244C.asm:152 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC125C7: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C1/C1244C.asm:153 BEQ @UNKNOWN13
    case 0xC125C9: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC125CB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC125CD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC125CF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:154 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC125D1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1244C.asm:155 JSL DISPLAY_TEXT
    case 0xC125D3: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/unknown/C1/C1244C.asm:157 STZ PAGINATION_ANIMATION_FRAME
    case 0xC125D7: cpu.execute_instruction<0x9C>(0x005E7C, 3); return true;
    // src/unknown/C1/C1244C.asm:158 LDA #10
    case 0xC125DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C1244C.asm:158 LDA #10
    // Overlapping static entry reached from 0xC125DA.
    case 0xC125DC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1244C.asm:159 STA @VIRTUAL02
    case 0xC125DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1244C.asm:160 STA @LOCAL05
    case 0xC125DF: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C.asm:162 LDA @LOCAL09
    case 0xC125E1: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1244C.asm:163 BNE @UNKNOWN15
    case 0xC125E3: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C1/C1244C.asm:164 LDA @VIRTUAL04
    case 0xC125E5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1244C.asm:165 JSL UNKNOWN_C43573
    case 0xC125E7: cpu.execute_instruction<0x22>(0xC43573, 4); return true;
    // src/unknown/C1/C1244C.asm:167 JSL CLEAR_INSTANT_PRINTING
    case 0xC125EB: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/unknown/C1/C1244C.asm:168 JSL WINDOW_TICK
    case 0xC125EF: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C1/C1244C.asm:169 LDA @VIRTUAL04
    case 0xC125F3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C1244C.asm:170 STA @LOCAL08
    case 0xC125F5: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C1/C1244C.asm:171 LDA PAGINATION_WINDOW
    case 0xC125F7: cpu.execute_instruction<0xAD>(0x005E7A, 3); return true;
    // src/unknown/C1/C1244C.asm:172 CMP #.LOWORD(-1)
    case 0xC125FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1244C.asm:172 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC125FA.
    case 0xC125FC: cpu.execute_instruction<0xFF>(0xAD1AF0, 4); return true;
    // src/unknown/C1/C1244C.asm:173 BEQ @UNKNOWN16
    case 0xC125FD: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C.asm:174 LDA PAGINATION_WINDOW
    case 0xC125FF: cpu.execute_instruction<0xAD>(0x005E7A, 3); return true;
    // src/unknown/C1/C1244C.asm:174 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC125FC.
    case 0xC12600: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:174 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC12600.
    case 0xC12601: cpu.execute_instruction<0x5E>(0x00AA0A, 3); return true;
    // src/unknown/C1/C1244C.asm:175 ASL
    case 0xC12602: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:176 TAX
    case 0xC12603: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:177 LDA OPEN_WINDOW_TABLE,X
    case 0xC12604: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C1244C.asm:178 CMP #.LOWORD(-1)
    case 0xC12607: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1244C.asm:178 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12607.
    case 0xC12609: cpu.execute_instruction<0xFF>(0xA00DF0, 4); return true;
    // src/unknown/C1/C1244C.asm:179 BEQ @UNKNOWN16
    case 0xC1260A: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C1/C1244C.asm:180 LDY #.SIZEOF(window_stats)
    case 0xC1260C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C1244C.asm:180 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC12609.
    case 0xC1260D: cpu.execute_instruction<0x52>(0x000000, 2); return true;
    // src/unknown/C1/C1244C.asm:180 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1260C.
    case 0xC1260E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1244C.asm:181 JSL MULT168
    case 0xC1260F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1244C.asm:182 CLC
    case 0xC12613: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:183 ADC #.LOWORD(WINDOW_STATS)
    case 0xC12614: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C1/C1244C.asm:183 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC12614.
    case 0xC12616: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/unknown/C1/C1244C.asm:184 STA @LOCAL04
    case 0xC12617: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C.asm:184 STA @LOCAL04
    // Overlapping static entry reached from 0xC12616.
    case 0xC12618: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:186 LDA PAGINATION_WINDOW
    case 0xC12619: cpu.execute_instruction<0xAD>(0x005E7A, 3); return true;
    // src/unknown/C1/C1244C.asm:187 CMP #.LOWORD(-1)
    case 0xC1261C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1244C.asm:187 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1261C.
    case 0xC1261E: cpu.execute_instruction<0xFF>(0xAD62F0, 4); return true;
    // src/unknown/C1/C1244C.asm:188 BEQ @UNKNOWN17
    case 0xC1261F: cpu.execute_instruction<0xF0>(0x000062, 2); return true;
    // src/unknown/C1/C1244C.asm:189 LDA PAGINATION_WINDOW
    case 0xC12621: cpu.execute_instruction<0xAD>(0x005E7A, 3); return true;
    // src/unknown/C1/C1244C.asm:189 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC1261E.
    case 0xC12622: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:189 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC12622.
    case 0xC12623: cpu.execute_instruction<0x5E>(0x00AA0A, 3); return true;
    // src/unknown/C1/C1244C.asm:190 ASL
    case 0xC12624: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:191 TAX
    case 0xC12625: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:192 LDA OPEN_WINDOW_TABLE,X
    case 0xC12626: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C1244C.asm:193 CMP #.LOWORD(-1)
    case 0xC12629: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1244C.asm:193 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12629.
    case 0xC1262B: cpu.execute_instruction<0xFF>(0xA955F0, 4); return true;
    // src/unknown/C1/C1244C.asm:194 BEQ @UNKNOWN17
    case 0xC1262C: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1244C.asm:195 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC1262E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00E43C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1244C.asm:195 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1262B.
    case 0xC1262F: cpu.execute_instruction<0x3C>(0x0085E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1244C.asm:195 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1262E.
    case 0xC12630: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1244C.asm:195 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC12631: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1244C.asm:195 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC12630.
    case 0xC12632: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1244C.asm:195 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC12633: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1244C.asm:195 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC12632.
    case 0xC12634: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1244C.asm:195 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC12633.
    case 0xC12635: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1244C.asm:195 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC12636: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1244C.asm:196 LDA PAGINATION_ANIMATION_FRAME
    case 0xC12638: cpu.execute_instruction<0xAD>(0x005E7C, 3); return true;
    // src/unknown/C1/C1244C.asm:197 ASL
    case 0xC1263B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:198 ASL
    case 0xC1263C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:199 CLC
    case 0xC1263D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:200 ADC @VIRTUAL06
    case 0xC1263E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1244C.asm:201 STA @VIRTUAL06
    case 0xC12640: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1244C.asm:202 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC12642: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C1244C.asm:202 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC12642.
    case 0xC12644: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C1244C.asm:202 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC12645: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C1244C.asm:202 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC12647: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C1244C.asm:202 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC12648: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:202 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1264A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:202 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1264C: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C.asm:203 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1264E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:203 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12650: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C.asm:203 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12652: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:203 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12654: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1244C.asm:204 LDY #window_stats::window_y
    case 0xC12656: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C1/C1244C.asm:204 LDY #window_stats::window_y
    // Overlapping static entry reached from 0xC12656.
    case 0xC12658: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C1/C1244C.asm:205 LDA (@LOCAL04),Y
    case 0xC12659: cpu.execute_instruction<0xB1>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C.asm:206 ASL
    case 0xC1265B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:207 ASL
    case 0xC1265C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:208 ASL
    case 0xC1265D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:209 ASL
    case 0xC1265E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:210 ASL
    case 0xC1265F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:211 STA @VIRTUAL02
    case 0xC12660: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1244C.asm:212 LDY #window_stats::window_x
    case 0xC12662: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C1/C1244C.asm:212 LDY #window_stats::window_x
    // Overlapping static entry reached from 0xC12662.
    case 0xC12664: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C1/C1244C.asm:213 LDA (@LOCAL04),Y
    case 0xC12665: cpu.execute_instruction<0xB1>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C.asm:214 LDY #window_stats::width
    case 0xC12667: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C1/C1244C.asm:214 LDY #window_stats::width
    // Overlapping static entry reached from 0xC12667.
    case 0xC12669: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1244C.asm:215 CLC
    case 0xC1266A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:216 ADC (@LOCAL04),Y
    case 0xC1266B: cpu.execute_instruction<0x71>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C.asm:217 DEC
    case 0xC1266D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:218 DEC
    case 0xC1266E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:219 DEC
    case 0xC1266F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:220 CLC
    case 0xC12670: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:221 ADC @VIRTUAL02
    case 0xC12671: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C1/C1244C.asm:222 CLC
    case 0xC12673: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:223 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xC12674: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/unknown/C1/C1244C.asm:223 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xC12674.
    case 0xC12676: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/unknown/C1/C1244C.asm:224 TAY
    case 0xC12677: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:225 LDX #8
    case 0xC12678: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C1/C1244C.asm:225 LDX #8
    // Overlapping static entry reached from 0xC12678.
    case 0xC1267A: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C1/C1244C.asm:226 SEP #PROC_FLAGS::ACCUM8
    case 0xC1267B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1244C.asm:227 LDA #0
    case 0xC1267D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C1/C1244C.asm:228 JSL PREPARE_VRAM_COPY
    case 0xC1267F: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C1/C1244C.asm:228 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1267D.
    case 0xC12680: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C1/C1244C.asm:228 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC12680.
    case 0xC12682: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // src/unknown/C1/C1244C.asm:231 LDA #0
    case 0xC12683: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1244C.asm:231 LDA #0
    // Overlapping static entry reached from 0xC12682.
    case 0xC12684: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C1244C.asm:231 LDA #0
    // Overlapping static entry reached from 0xC12683.
    case 0xC12685: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1244C.asm:232 STA @LOCAL02
    case 0xC12686: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C1244C.asm:233 JMP @UNKNOWN29
    case 0xC12688: cpu.execute_instruction<0x4C>(0x002720, 3); return true;
    // src/unknown/C1/C1244C.asm:235 JSL UNKNOWN_C12E42
    case 0xC1268B: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/unknown/C1/C1244C.asm:236 LDA PAD_PRESS
    case 0xC1268F: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C1244C.asm:237 AND #PAD::LEFT
    case 0xC12692: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/C1/C1244C.asm:237 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC12692.
    case 0xC12694: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C1/C1244C.asm:238 BEQ @UNKNOWN21
    case 0xC12695: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C1/C1244C.asm:239 LDX @LOCAL08
    case 0xC12697: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/unknown/C1/C1244C.asm:240 DEX
    case 0xC12699: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:241 STX @LOCAL02
    case 0xC1269A: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1244C.asm:242 LDA @LOCAL09
    case 0xC1269C: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1244C.asm:243 BEQ @UNKNOWN19
    case 0xC1269E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1244C.asm:244 LDY #2
    case 0xC126A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C1/C1244C.asm:244 LDY #2
    // Overlapping static entry reached from 0xC126A0.
    case 0xC126A2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C.asm:245 BRA @UNKNOWN20
    case 0xC126A3: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1244C.asm:247 LDY #27
    case 0xC126A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x00001B, 3); return true;
    // src/unknown/C1/C1244C.asm:247 LDY #27
    // Overlapping static entry reached from 0xC126A5.
    case 0xC126A7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1244C.asm:249 LDA #2
    case 0xC126A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1244C.asm:249 LDA #2
    // Overlapping static entry reached from 0xC126A8.
    case 0xC126AA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1244C.asm:250 STA PAGINATION_ANIMATION_FRAME
    case 0xC126AB: cpu.execute_instruction<0x8D>(0x005E7C, 3); return true;
    // src/unknown/C1/C1244C.asm:251 JMP @UNKNOWN33
    case 0xC126AE: cpu.execute_instruction<0x4C>(0x002747, 3); return true;
    // src/unknown/C1/C1244C.asm:253 LDA PAD_PRESS
    case 0xC126B1: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C1244C.asm:254 AND #PAD::RIGHT
    case 0xC126B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C1/C1244C.asm:254 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC126B4.
    case 0xC126B6: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C1/C1244C.asm:255 BEQ @UNKNOWN24
    case 0xC126B7: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/unknown/C1/C1244C.asm:255 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xC126B6.
    case 0xC126B8: cpu.execute_instruction<0x19>(0x0024A6, 3); return true;
    // src/unknown/C1/C1244C.asm:256 LDX @LOCAL08
    case 0xC126B9: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/unknown/C1/C1244C.asm:257 INX
    case 0xC126BB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:258 STX @LOCAL02
    case 0xC126BC: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1244C.asm:259 LDA @LOCAL09
    case 0xC126BE: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1244C.asm:260 BEQ @UNKNOWN22
    case 0xC126C0: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1244C.asm:261 LDY #SFX::CURSOR2
    case 0xC126C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C1/C1244C.asm:261 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC126C2.
    case 0xC126C4: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C.asm:262 BRA @UNKNOWN23
    case 0xC126C5: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1244C.asm:264 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC126C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x00001B, 3); return true;
    // src/unknown/C1/C1244C.asm:264 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC126C7.
    case 0xC126C9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1244C.asm:266 LDA #3
    case 0xC126CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1244C.asm:266 LDA #3
    // Overlapping static entry reached from 0xC126CA.
    case 0xC126CC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1244C.asm:267 STA PAGINATION_ANIMATION_FRAME
    case 0xC126CD: cpu.execute_instruction<0x8D>(0x005E7C, 3); return true;
    // src/unknown/C1/C1244C.asm:268 BRA @UNKNOWN33
    case 0xC126D0: cpu.execute_instruction<0x80>(0x000075, 2); return true;
    // src/unknown/C1/C1244C.asm:270 LDA PAD_PRESS
    case 0xC126D2: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C1244C.asm:271 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC126D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/unknown/C1/C1244C.asm:271 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC126D5.
    case 0xC126D7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1244C.asm:272 BEQ @UNKNOWN25
    case 0xC126D8: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C1/C1244C.asm:273 LDX @VIRTUAL04
    case 0xC126DA: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C1/C1244C.asm:274 LDA GAME_STATE + game_state::party_members,X
    case 0xC126DC: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/unknown/C1/C1244C.asm:275 AND #$00FF
    case 0xC126DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C.asm:275 AND #$00FF
    // Overlapping static entry reached from 0xC126DF.
    case 0xC126E1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C1244C.asm:276 TAX
    case 0xC126E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:277 STX @LOCAL02
    case 0xC126E3: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1244C.asm:278 LDA #SFX::CURSOR1
    case 0xC126E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1244C.asm:278 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC126E5.
    case 0xC126E7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1244C.asm:279 JSL PLAY_SOUND
    case 0xC126E8: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C1/C1244C.asm:280 JMP @UNKNOWN42
    case 0xC126EC: cpu.execute_instruction<0x4C>(0x0027CB, 3); return true;
    // src/unknown/C1/C1244C.asm:282 LDA PAD_PRESS
    case 0xC126EF: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C1/C1244C.asm:283 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC126F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/unknown/C1/C1244C.asm:283 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC126F2.
    case 0xC126F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x0024F0, 3); return true;
    // src/unknown/C1/C1244C.asm:284 BEQ @UNKNOWN28
    case 0xC126F5: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/unknown/C1/C1244C.asm:284 BEQ @UNKNOWN28
    // Overlapping static entry reached from 0xC126F4.
    case 0xC126F6: cpu.execute_instruction<0x24>(0x0000A5, 2); return true;
    // src/unknown/C1/C1244C.asm:285 LDA @LOCAL0A
    case 0xC126F7: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C1/C1244C.asm:285 LDA @LOCAL0A
    // Overlapping static entry reached from 0xC126F6.
    case 0xC126F8: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:286 CMP #1
    case 0xC126F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1244C.asm:286 CMP #1
    // Overlapping static entry reached from 0xC126F9.
    case 0xC126FB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1244C.asm:287 BNE @UNKNOWN28
    case 0xC126FC: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/unknown/C1/C1244C.asm:288 LDX #0
    case 0xC126FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1244C.asm:288 LDX #0
    // Overlapping static entry reached from 0xC126FE.
    case 0xC12700: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1244C.asm:289 STX @LOCAL02
    case 0xC12701: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1244C.asm:290 LDA @LOCAL09
    case 0xC12703: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C1/C1244C.asm:291 BEQ @UNKNOWN26
    case 0xC12705: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C1244C.asm:292 LDY #SFX::CURSOR2
    case 0xC12707: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C1/C1244C.asm:292 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC12707.
    case 0xC12709: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C.asm:293 BRA @UNKNOWN27
    case 0xC1270A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1244C.asm:295 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC1270C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x00001B, 3); return true;
    // src/unknown/C1/C1244C.asm:295 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC1270C.
    case 0xC1270E: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C1/C1244C.asm:297 TYA
    case 0xC1270F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:298 JSL PLAY_SOUND
    case 0xC12710: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C1/C1244C.asm:299 JSL UNKNOWN_C3E6F8
    case 0xC12714: cpu.execute_instruction<0x22>(0xC3E6F8, 4); return true;
    // src/unknown/C1/C1244C.asm:300 JMP @UNKNOWN42
    case 0xC12718: cpu.execute_instruction<0x4C>(0x0027CB, 3); return true;
    // src/unknown/C1/C1244C.asm:302 LDA @LOCAL02
    case 0xC1271B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C1244C.asm:303 INC
    case 0xC1271D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:304 STA @LOCAL02
    case 0xC1271E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C1244C.asm:306 LDX @LOCAL05
    case 0xC12720: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C.asm:307 STX @VIRTUAL02
    case 0xC12722: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1244C.asm:308 CMP @VIRTUAL02
    case 0xC12724: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C1/C1244C.asm:309 BCCL @UNKNOWN18
    case 0xC12726: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C1/C1244C.asm:309 BCCL @UNKNOWN18
    case 0xC12728: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C1/C1244C.asm:309 BCCL @UNKNOWN18
    case 0xC1272A: cpu.execute_instruction<0x4C>(0x00268B, 3); return true;
    // src/unknown/C1/C1244C.asm:310 LDA PAGINATION_ANIMATION_FRAME
    case 0xC1272D: cpu.execute_instruction<0xAD>(0x005E7C, 3); return true;
    // src/unknown/C1/C1244C.asm:311 BNE @UNKNOWN31
    case 0xC12730: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1244C.asm:312 LDX #1
    case 0xC12732: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1244C.asm:312 LDX #1
    // Overlapping static entry reached from 0xC12732.
    case 0xC12734: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1244C.asm:313 BRA @UNKNOWN32
    case 0xC12735: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C1244C.asm:315 LDX #0
    case 0xC12737: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1244C.asm:315 LDX #0
    // Overlapping static entry reached from 0xC12737.
    case 0xC12739: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/unknown/C1/C1244C.asm:317 STX PAGINATION_ANIMATION_FRAME
    case 0xC1273A: cpu.execute_instruction<0x8E>(0x005E7C, 3); return true;
    // src/unknown/C1/C1244C.asm:318 LDA #10
    case 0xC1273D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C1244C.asm:318 LDA #10
    // Overlapping static entry reached from 0xC1273D.
    case 0xC1273F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1244C.asm:319 STA @VIRTUAL02
    case 0xC12740: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1244C.asm:320 STA @LOCAL05
    case 0xC12742: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C.asm:321 JMP @UNKNOWN16
    case 0xC12744: cpu.execute_instruction<0x4C>(0x002619, 3); return true;
    // src/unknown/C1/C1244C.asm:323 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC12747: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C1244C.asm:324 AND #$00FF
    case 0xC1274A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C.asm:324 AND #$00FF
    // Overlapping static entry reached from 0xC1274A.
    case 0xC1274C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1244C.asm:325 STA @LOCAL08
    case 0xC1274D: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C1/C1244C.asm:326 STX @VIRTUAL02
    case 0xC1274F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1244C.asm:327 CLC
    case 0xC12751: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:328 SBC @VIRTUAL02
    case 0xC12752: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C1244C.asm:329 BRANCHGTS @UNKNOWN36
    case 0xC12754: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C1244C.asm:329 BRANCHGTS @UNKNOWN36
    case 0xC12756: cpu.execute_instruction<0x10>(0x00000B, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C1244C.asm:329 BRANCHGTS @UNKNOWN36
    case 0xC12758: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C1244C.asm:329 BRANCHGTS @UNKNOWN36
    case 0xC1275A: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/unknown/C1/C1244C.asm:330 LDX #0
    case 0xC1275C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1244C.asm:330 LDX #0
    // Overlapping static entry reached from 0xC1275C.
    case 0xC1275E: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1244C.asm:331 STX @LOCAL02
    case 0xC1275F: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1244C.asm:332 BRA @UNKNOWN39
    case 0xC12761: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C1/C1244C.asm:334 STX @VIRTUAL02
    case 0xC12763: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C1244C.asm:335 LDA #0
    case 0xC12765: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1244C.asm:335 LDA #0
    // Overlapping static entry reached from 0xC12765.
    case 0xC12767: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1244C.asm:336 CLC
    case 0xC12768: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:337 SBC @VIRTUAL02
    case 0xC12769: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1244C.asm:338 BRANCHLTEQS @UNKNOWN39
    case 0xC1276B: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1244C.asm:338 BRANCHLTEQS @UNKNOWN39
    case 0xC1276D: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1244C.asm:338 BRANCHLTEQS @UNKNOWN39
    case 0xC1276F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1244C.asm:338 BRANCHLTEQS @UNKNOWN39
    case 0xC12771: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/unknown/C1/C1244C.asm:339 LDA @LOCAL08
    case 0xC12773: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C1/C1244C.asm:340 TAX
    case 0xC12775: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:341 DEX
    case 0xC12776: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:342 STX @LOCAL02
    case 0xC12777: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C1/C1244C.asm:344 TXA
    case 0xC12779: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:345 CMP @VIRTUAL04
    case 0xC1277A: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C1/C1244C.asm:346 BEQ @UNKNOWN41
    case 0xC1277C: cpu.execute_instruction<0xF0>(0x000043, 2); return true;
    // src/unknown/C1/C1244C.asm:347 TYA
    case 0xC1277E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:348 JSL PLAY_SOUND
    case 0xC1277F: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C1/C1244C.asm:349 LDX @LOCAL02
    case 0xC12783: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1244C.asm:350 STX @VIRTUAL04
    case 0xC12785: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1244C.asm:351 LDA GAME_STATE + game_state::party_members,X
    case 0xC12787: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/unknown/C1/C1244C.asm:352 AND #$00FF
    case 0xC1278A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1244C.asm:352 AND #$00FF
    // Overlapping static entry reached from 0xC1278A.
    case 0xC1278C: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1244C.asm:353 DEC
    case 0xC1278D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:354 ASL
    case 0xC1278E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:355 ASL
    case 0xC1278F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:356 CLC
    case 0xC12790: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:357 ADC #.LOWORD(PARTY_MEMBER_SELECTION_SCRIPTS)
    case 0xC12791: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x009631, 3); return true;
    // src/unknown/C1/C1244C.asm:357 ADC #.LOWORD(PARTY_MEMBER_SELECTION_SCRIPTS)
    // Overlapping static entry reached from 0xC12791.
    case 0xC12793: cpu.execute_instruction<0x96>(0x0000A8, 2); return true;
    // src/unknown/C1/C1244C.asm:358 TAY
    case 0xC12794: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1244C.asm:359 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12795: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:359 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12798: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1244C.asm:359 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1279A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:359 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1279D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1244C.asm:360 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1279F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1244C.asm:360 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1279F.
    case 0xC127A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:360 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC127A2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:360 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC127FC.
    case 0xC127A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1244C.asm:360 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC127A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1244C.asm:360 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC127A4.
    case 0xC127A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:360 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC127A7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C1/C1244C.asm:361 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC127A9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C1/C1244C.asm:361 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC127AB: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C1/C1244C.asm:361 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC127AD: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C1/C1244C.asm:361 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC127AF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C1/C1244C.asm:361 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC127B1: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C1/C1244C.asm:362 BEQ @UNKNOWN41
    case 0xC127B3: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C.asm:363 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC127B5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:363 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC127B7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C.asm:363 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC127B9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:363 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC127BB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1244C.asm:364 JSL DISPLAY_TEXT
    case 0xC127BD: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/unknown/C1/C1244C.asm:366 LDA #4
    case 0xC127C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C1244C.asm:366 LDA #4
    // Overlapping static entry reached from 0xC127C1.
    case 0xC127C3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1244C.asm:367 STA @VIRTUAL02
    case 0xC127C4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1244C.asm:368 STA @LOCAL05
    case 0xC127C6: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C1/C1244C.asm:369 JMP @UNKNOWN14
    case 0xC127C8: cpu.execute_instruction<0x4C>(0x0025E1, 3); return true;
    // src/unknown/C1/C1244C.asm:371 LDA #.LOWORD(-1)
    case 0xC127CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C1/C1244C.asm:371 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC127CB.
    case 0xC127CD: cpu.execute_instruction<0xFF>(0x5E7C8D, 4); return true;
    // src/unknown/C1/C1244C.asm:372 STA PAGINATION_ANIMATION_FRAME
    case 0xC127CE: cpu.execute_instruction<0x8D>(0x005E7C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1244C.asm:373 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC127D1: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1244C.asm:373 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC127D3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1244C.asm:373 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC127D5: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1244C.asm:373 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC127D7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1244C.asm:374 LDA @LOCAL07
    case 0xC127D9: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C1/C1244C.asm:375 CLC
    case 0xC127DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1244C.asm:376 ADC #window_stats::argument_memory
    case 0xC127DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/unknown/C1/C1244C.asm:376 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC127DC.
    case 0xC127DE: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C1244C.asm:377 TAY
    case 0xC127DF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C1244C.asm:378 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC127E0: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C1244C.asm:378 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC127E2: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C1/C1244C.asm:378 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC127E5: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C1/C1244C.asm:378 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC127E7: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C1/C1244C.asm:379 LDX @LOCAL02
    case 0xC127EA: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C1/C1244C.asm:380 TXA
    case 0xC127EC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1244C.asm:381 END_C_FUNCTION
    case 0xC127ED: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1244C.asm:381 END_C_FUNCTION
    case 0xC127EE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12BD5.asm (unresolved).
bool execute_unresolved_c1_c12bd5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C12BD5.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC12BD5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C12BD5.asm:4 CMP #$0000
    case 0xC12BD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12BD5.asm:4 CMP #$0000
    // Overlapping static entry reached from 0xC12BD7.
    case 0xC12BD9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12BD5.asm:5 BNE @UNKNOWN0
    case 0xC12BDA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C1/C12BD5.asm:6 LDA CURRENT_FOCUS_WINDOW
    case 0xC12BDC: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/C1/C12BD5.asm:8 ASL
    case 0xC12BDF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C12BD5.asm:9 TAX
    case 0xC12BE0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12BD5.asm:10 LDA OPEN_WINDOW_TABLE,X
    case 0xC12BE1: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C1/C12BD5.asm:11 LDY #.SIZEOF(window_stats)
    case 0xC12BE4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C1/C12BD5.asm:11 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC12BE4.
    case 0xC12BE6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C12BD5.asm:12 JSL MULT168
    case 0xC12BE7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C12BD5.asm:13 TAX
    case 0xC12BEB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12BD5.asm:14 LDA WINDOW_STATS+window_stats::current_option,X
    case 0xC12BEC: cpu.execute_instruction<0xBD>(0x00867B, 3); return true;
    // src/unknown/C1/C12BD5.asm:15 JSR UNKNOWN_C1138D
    case 0xC12BEF: cpu.execute_instruction<0x20>(0x00138D, 3); return true;
    // src/unknown/C1/C12BD5.asm:16 RTS
    case 0xC12BF2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12BF3.asm (unresolved).
bool execute_unresolved_c1_c12bf3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12BF3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC12BF3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12BF3.asm:6 END_STACK_VARS
    case 0xC12BF5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12BF3.asm:6 END_STACK_VARS
    case 0xC12BF6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12BF3.asm:6 END_STACK_VARS
    case 0xC12BF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12BF3.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC12BF7.
    case 0xC12BF9: cpu.execute_instruction<0xFF>(0x03A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12BF3.asm:6 END_STACK_VARS
    case 0xC12BFA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C12BF3.asm:7 LDA #3
    case 0xC12BFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C12BF3.asm:7 LDA #3
    // Overlapping static entry reached from 0xC12BFB.
    case 0xC12BFD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C12BF3.asm:8 JSR UNKNOWN_C10FEA
    case 0xC12BFE: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    case 0xC12C01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00E84E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    // Overlapping static entry reached from 0xC12C01.
    case 0xC12C03: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    case 0xC12C04: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    case 0xC12C06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    // Overlapping static entry reached from 0xC12C06.
    case 0xC12C08: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C12BF3.asm:9 LOADPTR UNKNOWN_C3E84E, @VIRTUAL06
    case 0xC12C09: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C12BF3.asm:10 BRA @UNKNOWN3
    case 0xC12C0B: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C1/C12BF3.asm:12 INC @VIRTUAL06
    case 0xC12C0D: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C12BF3.asm:13 INC @VIRTUAL06
    case 0xC12C0F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C12BF3.asm:14 JSR UNKNOWN_C10D60
    case 0xC12C11: cpu.execute_instruction<0x20>(0x000D60, 3); return true;
    // src/unknown/C1/C12BF3.asm:15 LDX #1
    case 0xC12C14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C12BF3.asm:15 LDX #1
    // Overlapping static entry reached from 0xC12C14.
    case 0xC12C16: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12BF3.asm:16 STX @LOCAL00
    case 0xC12C17: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12BF3.asm:17 BRA @UNKNOWN2
    case 0xC12C19: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C12BF3.asm:19 JSL WINDOW_TICK
    case 0xC12C1B: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C1/C12BF3.asm:21 LDX @LOCAL00
    case 0xC12C1F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C12BF3.asm:22 TXA
    case 0xC12C21: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12BF3.asm:23 DEX
    case 0xC12C22: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C12BF3.asm:24 STX @LOCAL00
    case 0xC12C23: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12BF3.asm:25 CMP #0
    case 0xC12C25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12BF3.asm:25 CMP #0
    // Overlapping static entry reached from 0xC12C25.
    case 0xC12C27: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12BF3.asm:26 BNE @UNKNOWN1
    case 0xC12C28: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/unknown/C1/C12BF3.asm:28 LDA [@VIRTUAL06]
    case 0xC12C2A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C12BF3.asm:29 BNE @UNKNOWN0
    case 0xC12C2C: cpu.execute_instruction<0xD0>(0x0000DF, 2); return true;
    // src/unknown/C1/C12BF3.asm:30 LDA #0
    case 0xC12C2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C12BF3.asm:30 LDA #0
    // Overlapping static entry reached from 0xC12C2E.
    case 0xC12C30: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C12BF3.asm:31 JSR UNKNOWN_C10FEA
    case 0xC12C31: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12BF3.asm:32 END_C_FUNCTION
    case 0xC12C34: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C12BF3.asm:32 END_C_FUNCTION
    case 0xC12C35: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12C36.asm (unresolved).
bool execute_unresolved_c1_c12c36_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12C36.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC12C36: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12C36.asm:7 END_STACK_VARS
    case 0xC12C38: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12C36.asm:7 END_STACK_VARS
    case 0xC12C39: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12C36.asm:7 END_STACK_VARS
    case 0xC12C3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12C36.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC12C3A.
    case 0xC12C3C: cpu.execute_instruction<0xFF>(0x03A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12C36.asm:7 END_STACK_VARS
    case 0xC12C3D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:8 LDA #3
    case 0xC12C3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C12C36.asm:8 LDA #3
    // Overlapping static entry reached from 0xC12C3E.
    case 0xC12C40: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C12C36.asm:9 JSR UNKNOWN_C10FEA
    case 0xC12C41: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    case 0xC12C44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x00E862, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    // Overlapping static entry reached from 0xC12C44.
    case 0xC12C46: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    case 0xC12C47: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    case 0xC12C49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    // Overlapping static entry reached from 0xC12C49.
    case 0xC12C4B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C12C36.asm:10 LOADPTR UNKNOWN_C3E862, @VIRTUAL06
    case 0xC12C4C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C12C36.asm:11 LDY #0
    case 0xC12C4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C12C36.asm:11 LDY #0
    // Overlapping static entry reached from 0xC12C4E.
    case 0xC12C50: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C12C36.asm:12 STY @LOCAL01
    case 0xC12C51: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12C36.asm:13 BRA @UNKNOWN3
    case 0xC12C53: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C1/C12C36.asm:15 LDA [@VIRTUAL06]
    case 0xC12C55: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C12C36.asm:16 INC @VIRTUAL06
    case 0xC12C57: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C12C36.asm:17 INC @VIRTUAL06
    case 0xC12C59: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C12C36.asm:18 JSR UNKNOWN_C10D60
    case 0xC12C5B: cpu.execute_instruction<0x20>(0x000D60, 3); return true;
    // src/unknown/C1/C12C36.asm:19 LDX #1
    case 0xC12C5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C12C36.asm:19 LDX #1
    // Overlapping static entry reached from 0xC12C5E.
    case 0xC12C60: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12C36.asm:20 STX @LOCAL00
    case 0xC12C61: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:21 BRA @UNKNOWN2
    case 0xC12C63: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C12C36.asm:23 JSL WINDOW_TICK
    case 0xC12C65: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C1/C12C36.asm:25 LDX @LOCAL00
    case 0xC12C69: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:26 TXA
    case 0xC12C6B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:27 DEX
    case 0xC12C6C: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:28 STX @LOCAL00
    case 0xC12C6D: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:29 CMP #0
    case 0xC12C6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12C36.asm:29 CMP #0
    // Overlapping static entry reached from 0xC12C6F.
    case 0xC12C71: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12C36.asm:30 BNE @UNKNOWN1
    case 0xC12C72: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/unknown/C1/C12C36.asm:31 LDY @LOCAL01
    case 0xC12C74: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C12C36.asm:32 INY
    case 0xC12C76: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:33 STY @LOCAL01
    case 0xC12C77: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12C36.asm:35 CPY #4
    case 0xC12C79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/unknown/C1/C12C36.asm:35 CPY #4
    // Overlapping static entry reached from 0xC12C79.
    case 0xC12C7B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C12C36.asm:36 BCC @UNKNOWN0
    case 0xC12C7C: cpu.execute_instruction<0x90>(0x0000D7, 2); return true;
    // src/unknown/C1/C12C36.asm:37 LDX #8
    case 0xC12C7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C1/C12C36.asm:37 LDX #8
    // Overlapping static entry reached from 0xC12C7E.
    case 0xC12C80: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12C36.asm:38 STX @LOCAL00
    case 0xC12C81: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:39 BRA @UNKNOWN5
    case 0xC12C83: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C12C36.asm:41 JSL UNKNOWN_C12E42
    case 0xC12C85: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/unknown/C1/C12C36.asm:43 LDX @LOCAL00
    case 0xC12C89: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:44 TXA
    case 0xC12C8B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:45 DEX
    case 0xC12C8C: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:46 STX @LOCAL00
    case 0xC12C8D: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:47 CMP #0
    case 0xC12C8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12C36.asm:47 CMP #0
    // Overlapping static entry reached from 0xC12C8F.
    case 0xC12C91: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12C36.asm:48 BNE @UNKNOWN4
    case 0xC12C92: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/unknown/C1/C12C36.asm:49 LDY #0
    case 0xC12C94: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C12C36.asm:49 LDY #0
    // Overlapping static entry reached from 0xC12C94.
    case 0xC12C96: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C12C36.asm:50 STY @LOCAL01
    case 0xC12C97: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12C36.asm:51 BRA @UNKNOWN9
    case 0xC12C99: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C1/C12C36.asm:53 LDA [@VIRTUAL06]
    case 0xC12C9B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C12C36.asm:54 INC @VIRTUAL06
    case 0xC12C9D: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C12C36.asm:55 INC @VIRTUAL06
    case 0xC12C9F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C1/C12C36.asm:56 JSR UNKNOWN_C10D60
    case 0xC12CA1: cpu.execute_instruction<0x20>(0x000D60, 3); return true;
    // src/unknown/C1/C12C36.asm:57 LDX #1
    case 0xC12CA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C12C36.asm:57 LDX #1
    // Overlapping static entry reached from 0xC12CA4.
    case 0xC12CA6: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C12C36.asm:58 STX @LOCAL00
    case 0xC12CA7: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:59 BRA @UNKNOWN8
    case 0xC12CA9: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C1/C12C36.asm:61 JSL WINDOW_TICK
    case 0xC12CAB: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/unknown/C1/C12C36.asm:63 LDX @LOCAL00
    case 0xC12CAF: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:64 TXA
    case 0xC12CB1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:65 DEX
    case 0xC12CB2: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:66 STX @LOCAL00
    case 0xC12CB3: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C12C36.asm:67 CMP #0
    case 0xC12CB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12C36.asm:67 CMP #0
    // Overlapping static entry reached from 0xC12CB5.
    case 0xC12CB7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12C36.asm:68 BNE @UNKNOWN7
    case 0xC12CB8: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/unknown/C1/C12C36.asm:69 LDY @LOCAL01
    case 0xC12CBA: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C12C36.asm:70 INY
    case 0xC12CBC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C12C36.asm:71 STY @LOCAL01
    case 0xC12CBD: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12C36.asm:73 CPY #5
    case 0xC12CBF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000005, 2); else cpu.execute_instruction<0xC0>(0x000005, 3); return true;
    // src/unknown/C1/C12C36.asm:73 CPY #5
    // Overlapping static entry reached from 0xC12CBF.
    case 0xC12CC1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C12C36.asm:74 BCC @UNKNOWN6
    case 0xC12CC2: cpu.execute_instruction<0x90>(0x0000D7, 2); return true;
    // src/unknown/C1/C12C36.asm:75 LDA #0
    case 0xC12CC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C12C36.asm:75 LDA #0
    // Overlapping static entry reached from 0xC12CC4.
    case 0xC12CC6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C12C36.asm:76 JSR UNKNOWN_C10FEA
    case 0xC12CC7: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12C36.asm:77 END_C_FUNCTION
    case 0xC12CCA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C12C36.asm:77 END_C_FUNCTION
    case 0xC12CCB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12CCC.asm (unresolved).
bool execute_unresolved_c1_c12ccc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12CCC.asm:3 BEGIN_C_FUNCTION
    case 0xC12CCC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    case 0xC12CCE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    case 0xC12CCF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    case 0xC12CD0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    case 0xC12CD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC12CD1.
    case 0xC12CD3: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    case 0xC12CD4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C12CCC.asm:8 END_STACK_VARS
    case 0xC12CD5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:9 TAY
    case 0xC12CD6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:10 STY @LOCAL01
    case 0xC12CD7: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12CCC.asm:11 LDX #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC12CD9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00005A, 2); else cpu.execute_instruction<0xA2>(0x00895A, 3); return true;
    // src/unknown/C1/C12CCC.asm:11 LDX #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC12CD9.
    case 0xC12CDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A9, 2); else cpu.execute_instruction<0x89>(0x0010A9, 3); return true;
    // src/unknown/C1/C12CCC.asm:12 LDA #10000
    case 0xC12CDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x002710, 3); return true;
    // src/unknown/C1/C12CCC.asm:12 LDA #10000
    // Overlapping static entry reached from 0xC12CDB.
    case 0xC12CDD: cpu.execute_instruction<0x10>(0x000027, 2); return true;
    // src/unknown/C1/C12CCC.asm:12 LDA #10000
    // Overlapping static entry reached from 0xC12CDC.
    case 0xC12CDE: cpu.execute_instruction<0x27>(0x000085, 2); return true;
    // src/unknown/C1/C12CCC.asm:13 STA @LOCAL00
    case 0xC12CDF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12CCC.asm:13 STA @LOCAL00
    // Overlapping static entry reached from 0xC12CDE.
    case 0xC12CE0: cpu.execute_instruction<0x0E>(0x002D80, 3); return true;
    // src/unknown/C1/C12CCC.asm:14 BRA @UNKNOWN1
    case 0xC12CE1: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/unknown/C1/C12CCC.asm:16 PHA
    case 0xC12CE3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:17 LDY @LOCAL01
    case 0xC12CE4: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C12CCC.asm:18 TYA
    case 0xC12CE6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:19 PLY
    case 0xC12CE7: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:20 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC12CE8: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C1/C12CCC.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC12CEC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C12CCC.asm:22 CLC
    case 0xC12CEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:23 ADC #48
    case 0xC12CEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x009D30, 3); return true;
    // src/unknown/C1/C12CCC.asm:24 STA __BSS_START__,X
    case 0xC12CF1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C12CCC.asm:24 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC12CEF.
    case 0xC12CF2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C12CCC.asm:25 INX
    case 0xC12CF4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC12CF5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C12CCC.asm:27 LDA @LOCAL00
    case 0xC12CF7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12CCC.asm:28 PHA
    case 0xC12CF9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:29 LDY @LOCAL01
    case 0xC12CFA: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C12CCC.asm:30 TYA
    case 0xC12CFC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:31 PLY
    case 0xC12CFD: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:32 JSL MODULUS16
    case 0xC12CFE: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/unknown/C1/C12CCC.asm:33 TAY
    case 0xC12D02: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:34 STY @LOCAL01
    case 0xC12D03: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12CCC.asm:35 LDY #10
    case 0xC12D05: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C1/C12CCC.asm:35 LDY #10
    // Overlapping static entry reached from 0xC12CDD.
    case 0xC12D06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C12CCC.asm:35 LDY #10
    // Overlapping static entry reached from 0xC12D05.
    case 0xC12D07: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C12CCC.asm:36 LDA @LOCAL00
    case 0xC12D08: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12CCC.asm:37 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC12D0A: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C1/C12CCC.asm:38 STA @LOCAL00
    case 0xC12D0E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12CCC.asm:40 CMP #0
    case 0xC12D10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C12CCC.asm:40 CMP #0
    // Overlapping static entry reached from 0xC12D10.
    case 0xC12D12: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C12CCC.asm:41 BNE @UNKNOWN0
    case 0xC12D13: cpu.execute_instruction<0xD0>(0x0000CE, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12CCC.asm:42 END_C_FUNCTION
    case 0xC12D15: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C12CCC.asm:42 END_C_FUNCTION
    case 0xC12D16: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12D17.asm (unresolved).
bool execute_unresolved_c1_c12d17_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C12D17.asm:3 BEGIN_C_FUNCTION
    case 0xC12D17: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    case 0xC12D19: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    case 0xC12D1A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    case 0xC12D1B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    case 0xC12D1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC12D1C.
    case 0xC12D1E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    case 0xC12D1F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C12D17.asm:8 END_STACK_VARS
    case 0xC12D20: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:9 STA @VIRTUAL04
    case 0xC12D21: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C1/C12D17.asm:9 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC12D1E.
    case 0xC12D22: cpu.execute_instruction<0x04>(0x0000AD, 2); return true;
    // src/unknown/C1/C12D17.asm:10 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC12D23: cpu.execute_instruction<0xAD>(0x009698, 3); return true;
    // src/unknown/C1/C12D17.asm:10 LDA HPPP_METER_FLIPOUT_MODE
    // Overlapping static entry reached from 0xC12D22.
    case 0xC12D24: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:10 LDA HPPP_METER_FLIPOUT_MODE
    // Overlapping static entry reached from 0xC12D24.
    case 0xC12D25: cpu.execute_instruction<0x96>(0x0000D0, 2); return true;
    // src/unknown/C1/C12D17.asm:11 BNE @UNKNOWN4
    case 0xC12D26: cpu.execute_instruction<0xD0>(0x000063, 2); return true;
    // src/unknown/C1/C12D17.asm:11 BNE @UNKNOWN4
    // Overlapping static entry reached from 0xC12D25.
    case 0xC12D27: cpu.execute_instruction<0x63>(0x0000A5, 2); return true;
    // src/unknown/C1/C12D17.asm:12 LDA @VIRTUAL04
    case 0xC12D28: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C12D17.asm:12 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC12D27.
    case 0xC12D29: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/C1/C12D17.asm:13 BEQ @UNKNOWN4
    case 0xC12D2A: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/unknown/C1/C12D17.asm:13 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC12D29.
    case 0xC12D2B: cpu.execute_instruction<0x5F>(0x0000A9, 4); return true;
    // src/unknown/C1/C12D17.asm:14 LDA #0
    case 0xC12D2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:14 LDA #0
    // Overlapping static entry reached from 0xC12D2C.
    case 0xC12D2E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C12D17.asm:15 STA @VIRTUAL02
    case 0xC12D2F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C12D17.asm:16 BRA @UNKNOWN1
    case 0xC12D31: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C1/C12D17.asm:18 LDA @VIRTUAL02
    case 0xC12D33: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12D17.asm:19 ASL
    case 0xC12D35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:20 TAY
    case 0xC12D36: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:21 STY @LOCAL01
    case 0xC12D37: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:22 LDA @VIRTUAL02
    case 0xC12D39: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C12D17.asm:23 LDY #.SIZEOF(char_struct)
    case 0xC12D3B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C12D17.asm:23 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC12D3B.
    case 0xC12D3D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C12D17.asm:24 JSL MULT168
    case 0xC12D3E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C12D17.asm:25 STA @LOCAL00
    case 0xC12D42: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C12D17.asm:26 CLC
    case 0xC12D44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:27 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_hp_target
    case 0xC12D45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000015, 2); else cpu.execute_instruction<0x69>(0x009A15, 3); return true;
    // src/unknown/C1/C12D17.asm:27 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_hp_target
    // Overlapping static entry reached from 0xC12D45.
    case 0xC12D47: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:28 TAX
    case 0xC12D48: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:29 LDA __BSS_START__,X
    case 0xC12D49: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:30 LDY @LOCAL01
    case 0xC12D4C: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:31 STA HPPP_METER_FLIPOUT_MODE_HP_BACKUPS,Y
    case 0xC12D4E: cpu.execute_instruction<0x99>(0x00969A, 3); return true;
    // src/unknown/C1/C12D17.asm:32 LDA #999
    case 0xC12D51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E7, 2); else cpu.execute_instruction<0xA9>(0x0003E7, 3); return true;
    // src/unknown/C1/C12D17.asm:32 LDA #999
    // Overlapping static entry reached from 0xC12D51.
    case 0xC12D53: cpu.execute_instruction<0x03>(0x00009D, 2); return true;
    // src/unknown/C1/C12D17.asm:33 STA __BSS_START__,X
    case 0xC12D54: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:33 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC12D53.
    case 0xC12D55: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C1/C12D17.asm:34 LDA @LOCAL00
    case 0xC12D57: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12D17.asm:35 TAX
    case 0xC12D59: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:36 LDA #999
    case 0xC12D5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E7, 2); else cpu.execute_instruction<0xA9>(0x0003E7, 3); return true;
    // src/unknown/C1/C12D17.asm:36 LDA #999
    // Overlapping static entry reached from 0xC12D5A.
    case 0xC12D5C: cpu.execute_instruction<0x03>(0x00009D, 2); return true;
    // src/unknown/C1/C12D17.asm:37 STA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC12D5D: cpu.execute_instruction<0x9D>(0x009A13, 3); return true;
    // src/unknown/C1/C12D17.asm:37 STA PARTY_CHARACTERS+char_struct::current_hp,X
    // Overlapping static entry reached from 0xC12D5C.
    case 0xC12D5E: cpu.execute_instruction<0x13>(0x00009A, 2); return true;
    // src/unknown/C1/C12D17.asm:38 LDA @LOCAL00
    case 0xC12D60: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12D17.asm:39 CLC
    case 0xC12D62: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:40 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_pp_target
    case 0xC12D63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x009A1B, 3); return true;
    // src/unknown/C1/C12D17.asm:40 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::current_pp_target
    // Overlapping static entry reached from 0xC12D63.
    case 0xC12D65: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:41 TAX
    case 0xC12D66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:42 LDA __BSS_START__,X
    case 0xC12D67: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:43 STA HPPP_METER_FLIPOUT_MODE_PP_BACKUPS,Y
    case 0xC12D6A: cpu.execute_instruction<0x99>(0x0096A2, 3); return true;
    // src/unknown/C1/C12D17.asm:44 LDA #0
    case 0xC12D6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:44 LDA #0
    // Overlapping static entry reached from 0xC12D6D.
    case 0xC12D6F: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C1/C12D17.asm:45 STA __BSS_START__,X
    case 0xC12D70: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:46 LDA @LOCAL00
    case 0xC12D73: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C12D17.asm:47 TAX
    case 0xC12D75: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:48 STZ PARTY_CHARACTERS+char_struct::current_pp,X
    case 0xC12D76: cpu.execute_instruction<0x9E>(0x009A19, 3); return true;
    // src/unknown/C1/C12D17.asm:49 INC @VIRTUAL02
    case 0xC12D79: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C12D17.asm:51 LDA #PLAYER_CHAR_COUNT
    case 0xC12D7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C12D17.asm:51 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC12D7B.
    case 0xC12D7D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C12D17.asm:52 CLC
    case 0xC12D7E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:53 SBC @VIRTUAL02
    case 0xC12D7F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C12D17.asm:54 BRANCHGTS @UNKNOWN0
    case 0xC12D81: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C12D17.asm:54 BRANCHGTS @UNKNOWN0
    case 0xC12D83: cpu.execute_instruction<0x10>(0x0000AE, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C12D17.asm:54 BRANCHGTS @UNKNOWN0
    case 0xC12D85: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C12D17.asm:54 BRANCHGTS @UNKNOWN0
    case 0xC12D87: cpu.execute_instruction<0x30>(0x0000AA, 2); return true;
    // src/unknown/C1/C12D17.asm:55 BRA @UNKNOWN8
    case 0xC12D89: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/unknown/C1/C12D17.asm:57 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC12D8B: cpu.execute_instruction<0xAD>(0x009698, 3); return true;
    // src/unknown/C1/C12D17.asm:58 BEQ @UNKNOWN8
    case 0xC12D8E: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/unknown/C1/C12D17.asm:59 LDA @VIRTUAL04
    case 0xC12D90: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C12D17.asm:60 BNE @UNKNOWN8
    case 0xC12D92: cpu.execute_instruction<0xD0>(0x000036, 2); return true;
    // src/unknown/C1/C12D17.asm:61 LDA #0
    case 0xC12D94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C12D17.asm:61 LDA #0
    // Overlapping static entry reached from 0xC12D94.
    case 0xC12D96: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C12D17.asm:62 STA @LOCAL01
    case 0xC12D97: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:63 BRA @UNKNOWN6
    case 0xC12D99: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C1/C12D17.asm:65 LDA @LOCAL01
    case 0xC12D9B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:66 LDY #.SIZEOF(char_struct)
    case 0xC12D9D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C12D17.asm:66 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC12D9D.
    case 0xC12D9F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C12D17.asm:67 JSL MULT168
    case 0xC12DA0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C12D17.asm:68 TAY
    case 0xC12DA4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:69 LDA @LOCAL01
    case 0xC12DA5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:70 ASL
    case 0xC12DA7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:71 TAX
    case 0xC12DA8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:72 LDA HPPP_METER_FLIPOUT_MODE_HP_BACKUPS,X
    case 0xC12DA9: cpu.execute_instruction<0xBD>(0x00969A, 3); return true;
    // src/unknown/C1/C12D17.asm:73 STA PARTY_CHARACTERS+char_struct::current_hp_target,Y
    case 0xC12DAC: cpu.execute_instruction<0x99>(0x009A15, 3); return true;
    // src/unknown/C1/C12D17.asm:74 LDA HPPP_METER_FLIPOUT_MODE_PP_BACKUPS,X
    case 0xC12DAF: cpu.execute_instruction<0xBD>(0x0096A2, 3); return true;
    // src/unknown/C1/C12D17.asm:75 STA PARTY_CHARACTERS+char_struct::current_pp_target,Y
    case 0xC12DB2: cpu.execute_instruction<0x99>(0x009A1B, 3); return true;
    // src/unknown/C1/C12D17.asm:76 LDA @LOCAL01
    case 0xC12DB5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:77 INC
    case 0xC12DB7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:78 STA @LOCAL01
    case 0xC12DB8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C12D17.asm:80 STA @VIRTUAL02
    case 0xC12DBA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C12D17.asm:81 LDA #PLAYER_CHAR_COUNT
    case 0xC12DBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C1/C12D17.asm:81 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC12DBC.
    case 0xC12DBE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C12D17.asm:82 CLC
    case 0xC12DBF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C12D17.asm:83 SBC @VIRTUAL02
    case 0xC12DC0: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C12D17.asm:84 BRANCHGTS @UNKNOWN5
    case 0xC12DC2: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C12D17.asm:84 BRANCHGTS @UNKNOWN5
    case 0xC12DC4: cpu.execute_instruction<0x10>(0x0000D5, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C12D17.asm:84 BRANCHGTS @UNKNOWN5
    case 0xC12DC6: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C12D17.asm:84 BRANCHGTS @UNKNOWN5
    case 0xC12DC8: cpu.execute_instruction<0x30>(0x0000D1, 2); return true;
    // src/unknown/C1/C12D17.asm:86 LDA @VIRTUAL04
    case 0xC12DCA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C12D17.asm:87 STA HPPP_METER_FLIPOUT_MODE
    case 0xC12DCC: cpu.execute_instruction<0x8D>(0x009698, 3); return true;
    // src/unknown/C1/C12D17.asm:88 JSL RESUME_MUSIC
    case 0xC12DCF: cpu.execute_instruction<0x22>(0xEF026E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C12D17.asm:89 END_C_FUNCTION
    case 0xC12DD3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C12D17.asm:89 END_C_FUNCTION
    case 0xC12DD4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C12E42.asm (unresolved).
bool execute_unresolved_c1_c12e42_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C12E42.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC12E42: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C12E42.asm:4 JSL HP_PP_ROLLER
    case 0xC12E44: cpu.execute_instruction<0x22>(0xC2109F, 4); return true;
    // src/unknown/C1/C12E42.asm:5 LDA HPPP_METER_AREA_NEEDS_UPDATE
    case 0xC12E48: cpu.execute_instruction<0xAD>(0x009649, 3); return true;
    // src/unknown/C1/C12E42.asm:6 BEQ @UNKNOWN0
    case 0xC12E4B: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C1/C12E42.asm:7 JSR UNKNOWN_C1078D
    case 0xC12E4D: cpu.execute_instruction<0x20>(0x00078D, 3); return true;
    // src/unknown/C1/C12E42.asm:8 STZ HPPP_METER_AREA_NEEDS_UPDATE
    case 0xC12E50: cpu.execute_instruction<0x9C>(0x009649, 3); return true;
    // src/unknown/C1/C12E42.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC12E53: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C12E42.asm:10 LDA #$0001
    case 0xC12E55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C1/C12E42.asm:11 STA UPLOAD_HPPP_METER_TILES
    case 0xC12E57: cpu.execute_instruction<0x8D>(0x009624, 3); return true;
    // src/unknown/C1/C12E42.asm:11 STA UPLOAD_HPPP_METER_TILES
    // Overlapping static entry reached from 0xC12E55.
    case 0xC12E58: cpu.execute_instruction<0x24>(0x000096, 2); return true;
    // src/unknown/C1/C12E42.asm:13 JSL UPDATE_HPPP_METER_TILES
    case 0xC12E5A: cpu.execute_instruction<0x22>(0xC213AC, 4); return true;
    // src/unknown/C1/C12E42.asm:14 JSL UNKNOWN_C1004E
    case 0xC12E5E: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/unknown/C1/C12E42.asm:15 RTL
    case 0xC12E62: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1339E.asm (unresolved).
bool execute_unresolved_c1_c1339e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C1339E.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1339E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1339E.asm:4 LDX #$0002
    case 0xC133A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C1/C1339E.asm:4 LDX #$0002
    // Overlapping static entry reached from 0xC133A0.
    case 0xC133A2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1339E.asm:5 JSR INVENTORY_GET_ITEM_NAME
    case 0xC133A3: cpu.execute_instruction<0x20>(0x0098DE, 3); return true;
    // src/unknown/C1/C1339E.asm:6 RTL
    case 0xC133A6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C133A7.asm (unresolved).
bool execute_unresolved_c1_c133a7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C133A7.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC133A7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C133A7.asm:4 LDX #$002C
    case 0xC133A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00002C, 2); else cpu.execute_instruction<0xA2>(0x00002C, 3); return true;
    // src/unknown/C1/C133A7.asm:4 LDX #$002C
    // Overlapping static entry reached from 0xC133A9.
    case 0xC133AB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C133A7.asm:5 JSR INVENTORY_GET_ITEM_NAME
    case 0xC133AC: cpu.execute_instruction<0x20>(0x0098DE, 3); return true;
    // src/unknown/C1/C133A7.asm:6 RTL
    case 0xC133AF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C133B0.asm (unresolved).
bool execute_unresolved_c1_c133b0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C133B0.asm:3 BEGIN_C_FUNCTION
    case 0xC133B0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C133B0.asm:10 END_STACK_VARS
    case 0xC133B2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C133B0.asm:10 END_STACK_VARS
    case 0xC133B3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C133B0.asm:10 END_STACK_VARS
    case 0xC133B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E3, 2); else cpu.execute_instruction<0x69>(0x00FFE3, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C133B0.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC133B4.
    case 0xC133B6: cpu.execute_instruction<0xFF>(0x6CAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C133B0.asm:10 END_STACK_VARS
    case 0xC133B7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C133B0.asm:11 LDA SKIP_ADDING_COMMAND_TEXT
    case 0xC133B8: cpu.execute_instruction<0xAD>(0x005E6C, 3); return true;
    // src/unknown/C1/C133B0.asm:11 LDA SKIP_ADDING_COMMAND_TEXT
    // Overlapping static entry reached from 0xC133B6.
    case 0xC133BA: cpu.execute_instruction<0x5E>(0x00FF29, 3); return true;
    // src/unknown/C1/C133B0.asm:12 AND #$00FF
    case 0xC133BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C133B0.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC133BB.
    case 0xC133BD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C133B0.asm:13 BNEL @UNKNOWN8
    case 0xC133BE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C133B0.asm:13 BNEL @UNKNOWN8
    case 0xC133C0: cpu.execute_instruction<0x4C>(0x00349D, 3); return true;
    // src/unknown/C1/C133B0.asm:14 LDA #1
    case 0xC133C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C133B0.asm:14 LDA #1
    // Overlapping static entry reached from 0xC133C3.
    case 0xC133C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C133B0.asm:15 STA @VIRTUAL02
    case 0xC133C6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C133B0.asm:16 JMP @UNKNOWN7
    case 0xC133C8: cpu.execute_instruction<0x4C>(0x003491, 3); return true;
    // src/unknown/C1/C133B0.asm:18 LDA @VIRTUAL02
    case 0xC133CB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C133B0.asm:19 CMP #3
    case 0xC133CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C1/C133B0.asm:19 CMP #3
    // Overlapping static entry reached from 0xC133CD.
    case 0xC133CF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C133B0.asm:20 BNE @UNKNOWN2
    case 0xC133D0: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C1/C133B0.asm:21 JSR UNKNOWN_C1C373
    case 0xC133D2: cpu.execute_instruction<0x20>(0x00C373, 3); return true;
    // src/unknown/C1/C133B0.asm:22 CMP #0
    case 0xC133D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C133B0.asm:22 CMP #0
    // Overlapping static entry reached from 0xC133D5.
    case 0xC133D7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C133B0.asm:23 BEQL @UNKNOWN6
    case 0xC133D8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C133B0.asm:23 BEQL @UNKNOWN6
    case 0xC133DA: cpu.execute_instruction<0x4C>(0x00348F, 3); return true;
    // src/unknown/C1/C133B0.asm:25 LDA @VIRTUAL02
    case 0xC133DD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C133B0.asm:26 CMP #1
    case 0xC133DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C133B0.asm:26 CMP #1
    // Overlapping static entry reached from 0xC133DF.
    case 0xC133E1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C133B0.asm:27 BEQ @UNKNOWN3
    case 0xC133E2: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C1/C133B0.asm:28 LDA @VIRTUAL02
    case 0xC133E4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C133B0.asm:29 CMP #5
    case 0xC133E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C1/C133B0.asm:29 CMP #5
    // Overlapping static entry reached from 0xC133E6.
    case 0xC133E8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C133B0.asm:30 BEQ @UNKNOWN3
    case 0xC133E9: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/unknown/C1/C133B0.asm:31 LDA @VIRTUAL02
    case 0xC133EB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C133B0.asm:32 CMP #2
    case 0xC133ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C133B0.asm:32 CMP #2
    // Overlapping static entry reached from 0xC133ED.
    case 0xC133EF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C133B0.asm:33 BNE @UNKNOWN4
    case 0xC133F0: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/unknown/C1/C133B0.asm:34 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC133F2: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C133B0.asm:35 AND #$00FF
    case 0xC133F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C133B0.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC133F5.
    case 0xC133F7: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C133B0.asm:36 CMP #1
    case 0xC133F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C133B0.asm:36 CMP #1
    // Overlapping static entry reached from 0xC133F8.
    case 0xC133FA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C133B0.asm:37 BNE @UNKNOWN4
    case 0xC133FB: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C1/C133B0.asm:38 LDX #1
    case 0xC133FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C133B0.asm:38 LDX #1
    // Overlapping static entry reached from 0xC133FD.
    case 0xC133FF: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C1/C133B0.asm:39 LDA GAME_STATE + game_state::party_members
    case 0xC13400: cpu.execute_instruction<0xAD>(0x00986F, 3); return true;
    // src/unknown/C1/C133B0.asm:40 AND #$00FF
    case 0xC13403: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C133B0.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC13403.
    case 0xC13405: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C133B0.asm:41 JSL GET_CHARACTER_ITEM
    case 0xC13406: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // src/unknown/C1/C133B0.asm:42 CMP #0
    case 0xC1340A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C133B0.asm:42 CMP #0
    // Overlapping static entry reached from 0xC1340A.
    case 0xC1340C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C133B0.asm:43 BNE @UNKNOWN4
    case 0xC1340D: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C133B0.asm:45 LDY #1
    case 0xC1340F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C133B0.asm:45 LDY #1
    // Overlapping static entry reached from 0xC1340F.
    case 0xC13411: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C133B0.asm:46 BRA @UNKNOWN5
    case 0xC13412: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C1/C133B0.asm:48 LDY #27
    case 0xC13414: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x00001B, 3); return true;
    // src/unknown/C1/C133B0.asm:48 LDY #27
    // Overlapping static entry reached from 0xC13414.
    case 0xC13416: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C133B0.asm:50 LDA @VIRTUAL02
    case 0xC13417: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C133B0.asm:51 DEC
    case 0xC13419: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C133B0.asm:52 STA @LOCAL04
    case 0xC1341A: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C133B0.asm:53 LOADPTR DEBUG_MENU_ELEMENT_SPACING_DATA, @VIRTUAL06
    case 0xC1341C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x00E964, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C133B0.asm:53 LOADPTR DEBUG_MENU_ELEMENT_SPACING_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC1341C.
    case 0xC1341E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000085, 2); else cpu.execute_instruction<0xE9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C133B0.asm:53 LOADPTR DEBUG_MENU_ELEMENT_SPACING_DATA, @VIRTUAL06
    case 0xC1341F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C133B0.asm:53 LOADPTR DEBUG_MENU_ELEMENT_SPACING_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC1341E.
    case 0xC13420: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C133B0.asm:53 LOADPTR DEBUG_MENU_ELEMENT_SPACING_DATA, @VIRTUAL06
    case 0xC13421: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C133B0.asm:53 LOADPTR DEBUG_MENU_ELEMENT_SPACING_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC13420.
    case 0xC13422: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C133B0.asm:53 LOADPTR DEBUG_MENU_ELEMENT_SPACING_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC13421.
    case 0xC13423: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C133B0.asm:53 LOADPTR DEBUG_MENU_ELEMENT_SPACING_DATA, @VIRTUAL06
    case 0xC13424: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C133B0.asm:54 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC13426: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C133B0.asm:54 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC13428: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C133B0.asm:54 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1342A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C133B0.asm:54 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1342C: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/unknown/C1/C133B0.asm:55 LDA @LOCAL04
    case 0xC1342E: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // src/unknown/C1/C133B0.asm:56 ASL
    case 0xC13430: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C133B0.asm:57 TAX
    case 0xC13431: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C133B0.asm:58 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    case 0xC13432: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00A37A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C133B0.asm:58 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13432.
    case 0xC13434: cpu.execute_instruction<0xA3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C133B0.asm:58 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    case 0xC13435: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C133B0.asm:58 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13434.
    case 0xC13436: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C133B0.asm:58 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    case 0xC13437: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C133B0.asm:58 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13436.
    case 0xC13438: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C133B0.asm:58 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13437.
    case 0xC13439: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C133B0.asm:58 LOADPTR CMD_WINDOW_TEXT, @VIRTUAL06
    case 0xC1343A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C133B0.asm:59 LDA @LOCAL04
    case 0xC1343C: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/unknown/C1/C133B0.asm:60 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC1343E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/unknown/C1/C133B0.asm:60 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC13440: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/unknown/C1/C133B0.asm:60 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC13441: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/unknown/C1/C133B0.asm:60 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC13442: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/unknown/C1/C133B0.asm:60 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC13444: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C133B0.asm:61 CLC
    case 0xC13445: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C133B0.asm:62 ADC @VIRTUAL06
    case 0xC13446: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C133B0.asm:63 STA @VIRTUAL06
    case 0xC13448: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C133B0.asm:64 STA @LOCAL00
    case 0xC1344A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C133B0.asm:65 LDA @VIRTUAL06+2
    case 0xC1344C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C133B0.asm:66 STA @LOCAL00+2
    case 0xC1344E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C133B0.asm:67 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13450: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C133B0.asm:67 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13450.
    case 0xC13452: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C133B0.asm:67 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13453: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C133B0.asm:67 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13455: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C133B0.asm:67 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC13455.
    case 0xC13457: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C133B0.asm:67 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC13458: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C133B0.asm:68 TYA
    case 0xC1345A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C133B0.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC1345B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C133B0.asm:70 STA @LOCAL02
    case 0xC1345D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C1/C133B0.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC1345F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C133B0.asm:72 TXA
    case 0xC13461: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C133B0.asm:73 INC
    case 0xC13462: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C1/C133B0.asm:74 MOVE_INTY @LOCAL03, @VIRTUAL06
    case 0xC13463: cpu.execute_instruction<0xA4>(0x000017, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C1/C133B0.asm:74 MOVE_INTY @LOCAL03, @VIRTUAL06
    case 0xC13465: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C1/C133B0.asm:74 MOVE_INTY @LOCAL03, @VIRTUAL06
    case 0xC13467: cpu.execute_instruction<0xA4>(0x000019, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C1/C133B0.asm:74 MOVE_INTY @LOCAL03, @VIRTUAL06
    case 0xC13469: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C1/C133B0.asm:75 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1346B: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C1/C133B0.asm:75 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1346D: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C1/C133B0.asm:75 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1346F: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C1/C133B0.asm:75 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC13471: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C1/C133B0.asm:76 CLC
    case 0xC13473: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C133B0.asm:77 ADC @VIRTUAL0A
    case 0xC13474: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C133B0.asm:78 STA @VIRTUAL0A
    case 0xC13476: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C133B0.asm:79 LDA [@VIRTUAL0A]
    case 0xC13478: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C133B0.asm:80 AND #$00FF
    case 0xC1347A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C133B0.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC1347A.
    case 0xC1347C: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C1/C133B0.asm:81 TAY
    case 0xC1347D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C133B0.asm:82 TXA
    case 0xC1347E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C133B0.asm:83 CLC
    case 0xC1347F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C133B0.asm:84 ADC @VIRTUAL06
    case 0xC13480: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C133B0.asm:85 STA @VIRTUAL06
    case 0xC13482: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C133B0.asm:86 LDA [@VIRTUAL06]
    case 0xC13484: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C133B0.asm:87 AND #$00FF
    case 0xC13486: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C133B0.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC13486.
    case 0xC13488: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C133B0.asm:88 TAX
    case 0xC13489: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C133B0.asm:89 LDA @VIRTUAL02
    case 0xC1348A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C133B0.asm:90 JSR UNKNOWN_C11596
    case 0xC1348C: cpu.execute_instruction<0x20>(0x001596, 3); return true;
    // src/unknown/C1/C133B0.asm:92 INC @VIRTUAL02
    case 0xC1348F: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C1/C133B0.asm:94 LDA @VIRTUAL02
    case 0xC13491: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C133B0.asm:95 CMP #7
    case 0xC13493: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C1/C133B0.asm:95 CMP #7
    // Overlapping static entry reached from 0xC13493.
    case 0xC13495: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C1/C133B0.asm:96 BCCL @UNKNOWN1
    case 0xC13496: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C1/C133B0.asm:96 BCCL @UNKNOWN1
    case 0xC13498: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C1/C133B0.asm:96 BCCL @UNKNOWN1
    case 0xC1349A: cpu.execute_instruction<0x4C>(0x0033CB, 3); return true;
    // src/unknown/C1/C133B0.asm:98 SEP #PROC_FLAGS::ACCUM8
    case 0xC1349D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C133B0.asm:99 STZ SKIP_ADDING_COMMAND_TEXT
    case 0xC1349F: cpu.execute_instruction<0x9C>(0x005E6C, 3); return true;
    // src/unknown/C1/C133B0.asm:100 JSR PRINT_MENU_ITEMS
    case 0xC134A2: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C133B0.asm:101 END_C_FUNCTION
    case 0xC134A5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C133B0.asm:101 END_C_FUNCTION
    case 0xC134A6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C14012.asm (unresolved).
bool execute_unresolved_c1_c14012_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C14012.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14012: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    case 0xC14014: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    case 0xC14015: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    case 0xC14016: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC14016.
    case 0xC14018: cpu.execute_instruction<0xFF>(0xB8AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    case 0xC14019: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C14012.asm:6 LDX NEXT_TEXT_STACK_FRAME
    case 0xC1401A: cpu.execute_instruction<0xAE>(0x0097B8, 3); return true;
    // src/unknown/C1/C14012.asm:6 LDX NEXT_TEXT_STACK_FRAME
    // Overlapping static entry reached from 0xC14018.
    case 0xC1401C: cpu.execute_instruction<0x97>(0x0000E8, 2); return true;
    // src/unknown/C1/C14012.asm:7 INX
    case 0xC1401D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C14012.asm:8 STX NEXT_TEXT_STACK_FRAME
    case 0xC1401E: cpu.execute_instruction<0x8E>(0x0097B8, 3); return true;
    // src/unknown/C1/C14012.asm:9 STX @VIRTUAL02
    case 0xC14021: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C14012.asm:10 LDA #$000A
    case 0xC14023: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C14012.asm:10 LDA #$000A
    // Overlapping static entry reached from 0xC14023.
    case 0xC14025: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C14012.asm:11 CLC
    case 0xC14026: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C14012.asm:12 SBC @VIRTUAL02
    case 0xC14027: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C14012.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC14029: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C14012.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC1402B: cpu.execute_instruction<0x10>(0x000007, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C14012.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC1402D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C14012.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC1402F: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C1/C14012.asm:14 STZ NEXT_TEXT_STACK_FRAME
    case 0xC14031: cpu.execute_instruction<0x9C>(0x0097B8, 3); return true;
    // src/unknown/C1/C14012.asm:16 LDA NEXT_TEXT_STACK_FRAME
    case 0xC14034: cpu.execute_instruction<0xAD>(0x0097B8, 3); return true;
    // include/macros.asm:638 STA scratch
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC14037: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:639 ASL
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC14039: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:640 ADC scratch
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC1403A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:641 ASL
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC1403C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:642 ASL
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC1403D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:643 ADC scratch
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC1403E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:644 ASL
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC14040: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:645 ADC scratch
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC14041: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C14012.asm:18 CLC
    case 0xC14043: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C14012.asm:19 ADC #.LOWORD(DISPLAY_TEXT_STATES)
    case 0xC14044: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AA, 2); else cpu.execute_instruction<0x69>(0x0096AA, 3); return true;
    // src/unknown/C1/C14012.asm:19 ADC #.LOWORD(DISPLAY_TEXT_STATES)
    // Overlapping static entry reached from 0xC14044.
    case 0xC14046: cpu.execute_instruction<0x96>(0x00002B, 2); return true;
    // src/unknown/C1/C14012.asm:20 PLD
    case 0xC14047: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C1/C14012.asm:21 RTS
    case 0xC14048: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C14049.asm (unresolved).
bool execute_unresolved_c1_c14049_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C14049.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14049: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    case 0xC1404B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    case 0xC1404C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    case 0xC1404D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC1404D.
    case 0xC1404F: cpu.execute_instruction<0xFF>(0xB8AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    case 0xC14050: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C14049.asm:6 LDX NEXT_TEXT_STACK_FRAME
    case 0xC14051: cpu.execute_instruction<0xAE>(0x0097B8, 3); return true;
    // src/unknown/C1/C14049.asm:6 LDX NEXT_TEXT_STACK_FRAME
    // Overlapping static entry reached from 0xC1404F.
    case 0xC14053: cpu.execute_instruction<0x97>(0x0000CA, 2); return true;
    // src/unknown/C1/C14049.asm:7 DEX
    case 0xC14054: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C14049.asm:8 STX NEXT_TEXT_STACK_FRAME
    case 0xC14055: cpu.execute_instruction<0x8E>(0x0097B8, 3); return true;
    // src/unknown/C1/C14049.asm:9 STX @VIRTUAL02
    case 0xC14058: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C14049.asm:10 LDA #$000A
    case 0xC1405A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C14049.asm:10 LDA #$000A
    // Overlapping static entry reached from 0xC1405A.
    case 0xC1405C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C14049.asm:11 CLC
    case 0xC1405D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C14049.asm:12 SBC @VIRTUAL02
    case 0xC1405E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C14049.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC14060: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C14049.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC14062: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C14049.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC14064: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C14049.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC14066: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/unknown/C1/C14049.asm:14 LDA #$0009
    case 0xC14068: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C1/C14049.asm:14 LDA #$0009
    // Overlapping static entry reached from 0xC14068.
    case 0xC1406A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C14049.asm:15 STA NEXT_TEXT_STACK_FRAME
    case 0xC1406B: cpu.execute_instruction<0x8D>(0x0097B8, 3); return true;
    // src/unknown/C1/C14049.asm:17 PLD
    case 0xC1406E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C1/C14049.asm:18 RTS
    case 0xC1406F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C14070.asm (unresolved).
bool execute_unresolved_c1_c14070_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C14070.asm:3 BEGIN_C_FUNCTION
    case 0xC14070: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    case 0xC14072: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    case 0xC14073: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    case 0xC14074: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    case 0xC14075: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14075.
    case 0xC14077: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    case 0xC14078: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C14070.asm:9 END_STACK_VARS
    case 0xC14079: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C14070.asm:10 TXY
    case 0xC1407A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C14070.asm:11 TAX
    case 0xC1407B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C14070.asm:12 BRA @UNKNOWN1
    case 0xC1407C: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C1/C14070.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC1407E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C14070.asm:15 LDA __BSS_START__,Y
    case 0xC14080: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C14070.asm:16 STA @VIRTUAL00
    case 0xC14083: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C14070.asm:17 LDA @LOCAL00
    case 0xC14085: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C14070.asm:18 CMP @VIRTUAL00
    case 0xC14087: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C1/C14070.asm:19 BNE @UNKNOWN2
    case 0xC14089: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C1/C14070.asm:20 INX
    case 0xC1408B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C14070.asm:21 INY
    case 0xC1408C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C14070.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC1408D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C14070.asm:24 LDA __BSS_START__,X
    case 0xC1408F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C14070.asm:25 STA @LOCAL00
    case 0xC14092: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C14070.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC14094: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C14070.asm:27 AND #$00FF
    case 0xC14096: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C14070.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC14096.
    case 0xC14098: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C14070.asm:28 BNE @UNKNOWN0
    case 0xC14099: cpu.execute_instruction<0xD0>(0x0000E3, 2); return true;
    // src/unknown/C1/C14070.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC1409B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C14070.asm:31 LDA __BSS_START__,X
    case 0xC1409D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C14070.asm:32 AND #$00FF
    case 0xC140A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C14070.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC140A0.
    case 0xC140A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C14070.asm:33 STA @VIRTUAL02
    case 0xC140A3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C14070.asm:34 LDA __BSS_START__,Y
    case 0xC140A5: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C1/C14070.asm:35 AND #$00FF
    case 0xC140A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C14070.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC140A8.
    case 0xC140AA: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C1/C14070.asm:36 SEC
    case 0xC140AB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C1/C14070.asm:37 SBC @VIRTUAL02
    case 0xC140AC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C14070.asm:38 END_C_FUNCTION
    case 0xC140AE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C14070.asm:38 END_C_FUNCTION
    case 0xC140AF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C15FB1.asm (unresolved).
bool execute_unresolved_c1_c15fb1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C15FB1.asm:3 BEGIN_C_FUNCTION
    case 0xC15FB1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    case 0xC15FB3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    case 0xC15FB4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    case 0xC15FB5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    case 0xC15FB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC15FB6.
    case 0xC15FB8: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    case 0xC15FB9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C15FB1.asm:8 END_STACK_VARS
    case 0xC15FBA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:9 STX @VIRTUAL04
    case 0xC15FBB: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C15FB1.asm:9 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC15FB8.
    case 0xC15FBC: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C1/C15FB1.asm:10 STA @VIRTUAL02
    case 0xC15FBD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C15FB1.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC15FBC.
    case 0xC15FBE: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/C1/C15FB1.asm:11 LDY #0
    case 0xC15FBF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C1/C15FB1.asm:11 LDY #0
    // Overlapping static entry reached from 0xC15FBF.
    case 0xC15FC1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C15FB1.asm:12 BRA @UNKNOWN2
    case 0xC15FC2: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/unknown/C1/C15FB1.asm:14 TYA
    case 0xC15FC4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:15 CLC
    case 0xC15FC5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:16 ADC #.LOWORD(GAME_STATE)
    case 0xC15FC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F5, 2); else cpu.execute_instruction<0x69>(0x0097F5, 3); return true;
    // src/unknown/C1/C15FB1.asm:16 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC15FC6.
    case 0xC15FC8: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // src/unknown/C1/C15FB1.asm:17 STA @LOCAL00
    case 0xC15FC9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C15FB1.asm:17 STA @LOCAL00
    // Overlapping static entry reached from 0xC15FC8.
    case 0xC15FCA: cpu.execute_instruction<0x0E>(0x006918, 3); return true;
    // src/unknown/C1/C15FB1.asm:18 CLC
    case 0xC15FCB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:19 ADC #game_state::unknownB6
    case 0xC15FCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0000B6, 3); return true;
    // src/unknown/C1/C15FB1.asm:19 ADC #game_state::unknownB6
    // Overlapping static entry reached from 0xC15FCA.
    case 0xC15FCD: cpu.execute_instruction<0xB6>(0x000000, 2); return true;
    // src/unknown/C1/C15FB1.asm:19 ADC #game_state::unknownB6
    // Overlapping static entry reached from 0xC15FCC.
    case 0xC15FCE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C1/C15FB1.asm:20 TAX
    case 0xC15FCF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:21 LDA __BSS_START__,X
    case 0xC15FD0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C15FB1.asm:22 AND #$00FF
    case 0xC15FD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C15FB1.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC15FD3.
    case 0xC15FD5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C15FB1.asm:23 BNE @UNKNOWN1
    case 0xC15FD6: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/unknown/C1/C15FB1.asm:24 LDA @VIRTUAL04
    case 0xC15FD8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C1/C15FB1.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC15FDA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C15FB1.asm:26 STA __BSS_START__,X
    case 0xC15FDC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C1/C15FB1.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC15FDF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C15FB1.asm:28 LDA @LOCAL00
    case 0xC15FE1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C15FB1.asm:29 TAX
    case 0xC15FE3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:30 LDA @VIRTUAL02
    case 0xC15FE4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C15FB1.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC15FE6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C15FB1.asm:32 STA a:game_state::unknownB8,X
    case 0xC15FE8: cpu.execute_instruction<0x9D>(0x0000B9, 3); return true;
    // src/unknown/C1/C15FB1.asm:33 BRA @UNKNOWN3
    case 0xC15FEB: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C1/C15FB1.asm:35 INY
    case 0xC15FED: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C15FB1.asm:37 CPY #3
    case 0xC15FEE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/unknown/C1/C15FB1.asm:37 CPY #3
    // Overlapping static entry reached from 0xC15FEE.
    case 0xC15FF0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C15FB1.asm:38 BCC @UNKNOWN0
    case 0xC15FF1: cpu.execute_instruction<0x90>(0x0000D1, 2); return true;
    // src/unknown/C1/C15FB1.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC15FF3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C15FB1.asm:41 END_C_FUNCTION
    case 0xC15FF5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C15FB1.asm:41 END_C_FUNCTION
    case 0xC15FF6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1621F.asm (unresolved).
bool execute_unresolved_c1_c1621f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1621F.asm:3 BEGIN_C_FUNCTION
    case 0xC1621F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    case 0xC16221: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    case 0xC16222: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    case 0xC16223: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    case 0xC16224: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16224.
    case 0xC16226: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    case 0xC16227: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1621F.asm:9 END_STACK_VARS
    case 0xC16228: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:10 STA @LOCAL01
    case 0xC16229: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1621F.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC16226.
    case 0xC1622A: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/unknown/C1/C1621F.asm:11 LDA #3
    case 0xC1622B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C1621F.asm:11 LDA #3
    // Overlapping static entry reached from 0xC1622A.
    case 0xC1622C: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/unknown/C1/C1621F.asm:11 LDA #3
    // Overlapping static entry reached from 0xC1622B.
    case 0xC1622D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1621F.asm:12 CLC
    case 0xC1622E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1622F: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1621F.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16232: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1621F.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16234: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1621F.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16236: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1621F.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16238: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/unknown/C1/C1621F.asm:15 TXA
    case 0xC1623A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC1623B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1621F.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1623D: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/unknown/C1/C1621F.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC16240: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/unknown/C1/C1621F.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC16243: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1621F.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16245: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/unknown/C1/C1621F.asm:21 LDA #.LOWORD(UNKNOWN_C1621F)
    case 0xC16248: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00621F, 3); return true;
    // src/unknown/C1/C1621F.asm:21 LDA #.LOWORD(UNKNOWN_C1621F)
    // Overlapping static entry reached from 0xC16248.
    case 0xC1624A: cpu.execute_instruction<0x62>(0x00064C, 3); return true;
    // src/unknown/C1/C1621F.asm:22 JMP @UNKNOWN3
    case 0xC1624B: cpu.execute_instruction<0x4C>(0x006306, 3); return true;
    // src/unknown/C1/C1621F.asm:22 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC1624A.
    case 0xC1624D: cpu.execute_instruction<0x63>(0x00008A, 2); return true;
    // src/unknown/C1/C1621F.asm:24 TXA
    case 0xC1624E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC1624F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC16251: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C1/C1621F.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC16253: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C1/C1621F.asm:27 LDY #24
    case 0xC16255: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x002218, 3); return true;
    // src/unknown/C1/C1621F.asm:28 JSL ASL32_ENTRY2
    case 0xC16257: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // src/unknown/C1/C1621F.asm:28 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC16255.
    case 0xC16258: cpu.execute_instruction<0x46>(0x000092, 2); return true;
    // src/unknown/C1/C1621F.asm:28 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC16258.
    case 0xC1625A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0008A5, 3); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/unknown/C1/C1621F.asm:29 PUSH32 @VIRTUAL06
    case 0xC1625B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/unknown/C1/C1621F.asm:29 PUSH32 @VIRTUAL06
    // Overlapping static entry reached from 0xC1625A.
    case 0xC1625C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/unknown/C1/C1621F.asm:29 PUSH32 @VIRTUAL06
    case 0xC1625D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/unknown/C1/C1621F.asm:29 PUSH32 @VIRTUAL06
    case 0xC1625E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/unknown/C1/C1621F.asm:29 PUSH32 @VIRTUAL06
    case 0xC16260: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:30 LDY #16
    case 0xC16261: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/unknown/C1/C1621F.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC16263: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1621F.asm:31 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16261.
    case 0xC16264: cpu.execute_instruction<0x20>(0x00BCAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC16265: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC16264.
    case 0xC16267: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC16268: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC16267.
    case 0xC16269: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1626A: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC16269.
    case 0xC1626B: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1626C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC1626B.
    case 0xC1626D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1621F.asm:32 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1626E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1621F.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC16270: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1621F.asm:34 JSL ASL32_ENTRY2
    case 0xC16272: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/unknown/C1/C1621F.asm:35 PUSH32 @VIRTUAL06
    case 0xC16276: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/unknown/C1/C1621F.asm:35 PUSH32 @VIRTUAL06
    case 0xC16278: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/unknown/C1/C1621F.asm:35 PUSH32 @VIRTUAL06
    case 0xC16279: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/unknown/C1/C1621F.asm:35 PUSH32 @VIRTUAL06
    case 0xC1627B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:36 LDY #8
    case 0xC1627C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/unknown/C1/C1621F.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC1627E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1621F.asm:37 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1627C.
    case 0xC1627F: cpu.execute_instruction<0x20>(0x00BBAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16280: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1627F.
    case 0xC16282: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16283: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC16282.
    case 0xC16284: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16285: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC16284.
    case 0xC16286: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16287: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC16286.
    case 0xC16288: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1621F.asm:38 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16289: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1621F.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC1628B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1621F.asm:40 JSL ASL32_ENTRY2
    case 0xC1628D: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16291: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16293: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1621F.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16295: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:41 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16297: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1621F.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC16299: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:43 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1629B: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:43 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1629E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1621F.asm:43 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC162A0: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:43 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC162A2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1621F.asm:43 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC162A4: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1621F.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC162A6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/unknown/C1/C1621F.asm:45 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162A8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C1621F.asm:45 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162AA: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:45 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162AC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/unknown/C1/C1621F.asm:45 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162AE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/unknown/C1/C1621F.asm:45 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162B0: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/unknown/C1/C1621F.asm:45 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162B2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/unknown/C1/C1621F.asm:46 PULL32 @VIRTUAL0A
    case 0xC162B4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/unknown/C1/C1621F.asm:46 PULL32 @VIRTUAL0A
    case 0xC162B5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/unknown/C1/C1621F.asm:46 PULL32 @VIRTUAL0A
    case 0xC162B7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/unknown/C1/C1621F.asm:46 PULL32 @VIRTUAL0A
    case 0xC162B8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162BA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162BC: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC16313.
    case 0xC162BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162BE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162C0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162C2: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/unknown/C1/C1621F.asm:47 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162C4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/unknown/C1/C1621F.asm:48 PULL32 @VIRTUAL0A
    case 0xC162C6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/unknown/C1/C1621F.asm:48 PULL32 @VIRTUAL0A
    case 0xC162C7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/unknown/C1/C1621F.asm:48 PULL32 @VIRTUAL0A
    case 0xC162C9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/unknown/C1/C1621F.asm:48 PULL32 @VIRTUAL0A
    case 0xC162CA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/unknown/C1/C1621F.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162CC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C1621F.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162CE: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162D0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/unknown/C1/C1621F.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162D2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/unknown/C1/C1621F.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162D4: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/unknown/C1/C1621F.asm:49 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC162D6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1621F.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC162D8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC162DA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1621F.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC162DC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC162DE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1621F.asm:51 JSL DISPLAY_TEXT
    case 0xC162E0: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/unknown/C1/C1621F.asm:52 LDA @LOCAL01
    case 0xC162E4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1621F.asm:53 TAY
    case 0xC162E6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1621F.asm:54 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC162E7: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1621F.asm:54 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC162EA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1621F.asm:54 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC162EC: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1621F.asm:54 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC162EF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1621F.asm:55 LDA ONGOSUB_OFFSET
    case 0xC162F1: cpu.execute_instruction<0xAD>(0x0097D5, 3); return true;
    // src/unknown/C1/C1621F.asm:56 ASL
    case 0xC162F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:57 ASL
    case 0xC162F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:58 CLC
    case 0xC162F6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1621F.asm:59 ADC @VIRTUAL06
    case 0xC162F7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1621F.asm:60 STA @VIRTUAL06
    case 0xC162F9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1621F.asm:61 STA __BSS_START__,Y
    case 0xC162FB: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C1/C1621F.asm:62 LDA @VIRTUAL06+2
    case 0xC162FE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1621F.asm:63 STA __BSS_START__+2,Y
    case 0xC16300: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C1/C1621F.asm:64 LDA #NULL
    case 0xC16303: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1621F.asm:64 LDA #NULL
    // Overlapping static entry reached from 0xC16303.
    case 0xC16305: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1621F.asm:66 END_C_FUNCTION
    case 0xC16306: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1621F.asm:66 END_C_FUNCTION
    case 0xC16307: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C17796.asm (unresolved).
bool execute_unresolved_c1_c17796_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C17796.asm:3 BEGIN_C_FUNCTION
    case 0xC17796: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C17796.asm:12 END_STACK_VARS
    case 0xC17798: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C17796.asm:12 END_STACK_VARS
    case 0xC17799: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C17796.asm:12 END_STACK_VARS
    case 0xC1779A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C17796.asm:12 END_STACK_VARS
    case 0xC1779B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C17796.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC1779B.
    case 0xC1779D: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C17796.asm:12 END_STACK_VARS
    case 0xC1779E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C17796.asm:12 END_STACK_VARS
    case 0xC1779F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C17796.asm:13 TXA
    case 0xC177A0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C17796.asm:14 STA @LOCAL03
    case 0xC177A1: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C1/C17796.asm:15 LDA #3
    case 0xC177A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C1/C17796.asm:15 LDA #3
    // Overlapping static entry reached from 0xC177A3.
    case 0xC177A5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C17796.asm:16 CLC
    case 0xC177A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C17796.asm:17 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC177A7: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C17796.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC177AA: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C17796.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC177AC: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C17796.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC177AE: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C17796.asm:18 BRANCHLTEQS @UNKNOWN2
    case 0xC177B0: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/unknown/C1/C17796.asm:19 LDA @LOCAL03
    case 0xC177B2: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C1/C17796.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC177B4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C17796.asm:21 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC177B6: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/unknown/C1/C17796.asm:22 STA CC_ARGUMENT_STORAGE,X
    case 0xC177B9: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/unknown/C1/C17796.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC177BC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C17796.asm:24 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC177BE: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/unknown/C1/C17796.asm:25 LDA #.LOWORD(UNKNOWN_C17796)
    case 0xC177C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000096, 2); else cpu.execute_instruction<0xA9>(0x007796, 3); return true;
    // src/unknown/C1/C17796.asm:25 LDA #.LOWORD(UNKNOWN_C17796)
    // Overlapping static entry reached from 0xC177C1.
    case 0xC177C3: cpu.execute_instruction<0x77>(0x00004C, 2); return true;
    // src/unknown/C1/C17796.asm:26 JMP @UNKNOWN3
    case 0xC177C4: cpu.execute_instruction<0x4C>(0x007887, 3); return true;
    // src/unknown/C1/C17796.asm:26 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC177C3.
    case 0xC177C5: cpu.execute_instruction<0x87>(0x000078, 2); return true;
    // src/unknown/C1/C17796.asm:28 SEP #PROC_FLAGS::INDEX8
    case 0xC177C7: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C1/C17796.asm:29 LDY #24
    case 0xC177C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C1/C17796.asm:30 MOVE_INT1632 @LOCAL03, @VIRTUAL06
    case 0xC177CB: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C1/C17796.asm:30 MOVE_INT1632 @LOCAL03, @VIRTUAL06
    // Overlapping static entry reached from 0xC177C9.
    case 0xC177CC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:30 MOVE_INT1632 @LOCAL03, @VIRTUAL06
    case 0xC177CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C17796.asm:30 MOVE_INT1632 @LOCAL03, @VIRTUAL06
    case 0xC177CF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C1/C17796.asm:31 JSL ASL32_ENTRY2
    case 0xC177D1: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/unknown/C1/C17796.asm:32 PUSH32 @VIRTUAL06
    case 0xC177D5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/unknown/C1/C17796.asm:32 PUSH32 @VIRTUAL06
    case 0xC177D7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/unknown/C1/C17796.asm:32 PUSH32 @VIRTUAL06
    case 0xC177D8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/unknown/C1/C17796.asm:32 PUSH32 @VIRTUAL06
    case 0xC177DA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C17796.asm:33 LDY #16
    case 0xC177DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/unknown/C1/C17796.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC177DD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C17796.asm:34 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC177DB.
    case 0xC177DE: cpu.execute_instruction<0x20>(0x00BCAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C17796.asm:35 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC177DF: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C17796.asm:35 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC177DE.
    case 0xC177E1: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:35 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC177E2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:35 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC177E1.
    case 0xC177E3: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C17796.asm:35 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC177E4: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C17796.asm:35 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC177E3.
    case 0xC177E5: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C17796.asm:35 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC177E6: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C17796.asm:35 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC177E5.
    case 0xC177E7: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C17796.asm:35 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC177E8: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C17796.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC177EA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C17796.asm:37 JSL ASL32_ENTRY2
    case 0xC177EC: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/unknown/C1/C17796.asm:38 PUSH32 @VIRTUAL06
    case 0xC177F0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/unknown/C1/C17796.asm:38 PUSH32 @VIRTUAL06
    case 0xC177F2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/unknown/C1/C17796.asm:38 PUSH32 @VIRTUAL06
    case 0xC177F3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/unknown/C1/C17796.asm:38 PUSH32 @VIRTUAL06
    case 0xC177F5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C1/C17796.asm:39 LDY #8
    case 0xC177F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/unknown/C1/C17796.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC177F8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C17796.asm:40 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC177F6.
    case 0xC177F9: cpu.execute_instruction<0x20>(0x00BBAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C17796.asm:41 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC177FA: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C17796.asm:41 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC177F9.
    case 0xC177FC: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:41 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC177FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:41 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC177FC.
    case 0xC177FE: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C17796.asm:41 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC177FF: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C17796.asm:41 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC177FE.
    case 0xC17800: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C17796.asm:41 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC17801: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C17796.asm:41 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC17800.
    case 0xC17802: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C17796.asm:41 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC17803: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C17796.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC17805: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C17796.asm:43 JSL ASL32_ENTRY2
    case 0xC17807: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C17796.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1780B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1780D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C17796.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1780F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C17796.asm:44 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17811: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C17796.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC17813: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/unknown/C1/C17796.asm:46 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC17815: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:46 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC17818: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C17796.asm:46 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1781A: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C17796.asm:46 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1781C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C17796.asm:46 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1781E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C17796.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC17820: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/unknown/C1/C17796.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17822: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C17796.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17824: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17826: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/unknown/C1/C17796.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17828: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/unknown/C1/C17796.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1782A: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/unknown/C1/C17796.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1782C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/unknown/C1/C17796.asm:49 PULL32 @VIRTUAL0A
    case 0xC1782E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/unknown/C1/C17796.asm:49 PULL32 @VIRTUAL0A
    case 0xC1782F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/unknown/C1/C17796.asm:49 PULL32 @VIRTUAL0A
    case 0xC17831: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/unknown/C1/C17796.asm:49 PULL32 @VIRTUAL0A
    case 0xC17832: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/unknown/C1/C17796.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17834: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C17796.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17836: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17838: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/unknown/C1/C17796.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1783A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/unknown/C1/C17796.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1783C: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/unknown/C1/C17796.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1783E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/unknown/C1/C17796.asm:51 PULL32 @VIRTUAL0A
    case 0xC17840: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/unknown/C1/C17796.asm:51 PULL32 @VIRTUAL0A
    case 0xC17841: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/unknown/C1/C17796.asm:51 PULL32 @VIRTUAL0A
    case 0xC17843: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/unknown/C1/C17796.asm:51 PULL32 @VIRTUAL0A
    case 0xC17844: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/unknown/C1/C17796.asm:52 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17846: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/unknown/C1/C17796.asm:52 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17848: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:52 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1784A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/unknown/C1/C17796.asm:52 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1784C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/unknown/C1/C17796.asm:52 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1784E: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/unknown/C1/C17796.asm:52 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17850: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C17796.asm:53 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC17852: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:53 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC17854: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C17796.asm:53 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC17856: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C17796.asm:53 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC17858: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C17796.asm:54 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC1785A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x0097D7, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C17796.asm:54 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1785A.
    case 0xC1785C: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:54 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC1785D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:54 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1785C.
    case 0xC1785E: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C17796.asm:54 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC1785F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C17796.asm:54 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC17860: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C17796.asm:54 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC17862: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:54 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC17863: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C17796.asm:54 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC17865: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C17796.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC17867: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C17796.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17869: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1786B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C17796.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1786D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C17796.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1786F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C17796.asm:57 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC17871: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:57 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC17873: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C17796.asm:57 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC17875: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C17796.asm:57 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC17877: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C17796.asm:58 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC17879: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C17796.asm:58 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1787B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C17796.asm:58 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1787D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C17796.asm:58 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1787F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C17796.asm:59 JSR UNKNOWN_C113D1
    case 0xC17881: cpu.execute_instruction<0x20>(0x0013D1, 3); return true;
    // src/unknown/C1/C17796.asm:60 LDA #NULL
    case 0xC17884: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C17796.asm:60 LDA #NULL
    // Overlapping static entry reached from 0xC17884.
    case 0xC17886: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C17796.asm:62 END_C_FUNCTION
    case 0xC17887: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C17796.asm:62 END_C_FUNCTION
    case 0xC17888: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C17889.asm (unresolved).
bool execute_unresolved_c1_c17889_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C17889.asm:3 BEGIN_C_FUNCTION
    case 0xC17889: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    case 0xC1788B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    case 0xC1788C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    case 0xC1788D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    case 0xC1788E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1788E.
    case 0xC17890: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    case 0xC17891: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C17889.asm:10 END_STACK_VARS
    case 0xC17892: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C17889.asm:11 TXA
    case 0xC17893: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C17889.asm:12 CMP #1
    case 0xC17894: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C17889.asm:12 CMP #1
    // Overlapping static entry reached from 0xC17894.
    case 0xC17896: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C17889.asm:13 BEQ @UNKNOWN0
    case 0xC17897: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C1/C17889.asm:14 CMP #2
    case 0xC17899: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C17889.asm:14 CMP #2
    // Overlapping static entry reached from 0xC17899.
    case 0xC1789B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C17889.asm:15 BEQ @UNKNOWN1
    case 0xC1789C: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C1/C17889.asm:16 BRA @UNKNOWN2
    case 0xC1789E: cpu.execute_instruction<0x80>(0x000045, 2); return true;
    // src/unknown/C1/C17889.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC178A0: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/unknown/C1/C17889.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC178A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C17889.asm:20 STZ TEXT_NEW_MENU_OPTION_BUFFER,X
    case 0xC178A5: cpu.execute_instruction<0x9E>(0x0097D7, 3); return true;
    // src/unknown/C1/C17889.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC178A8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C17889.asm:22 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC178AA: cpu.execute_instruction<0x9C>(0x0097CA, 3); return true;
    // src/unknown/C1/C17889.asm:23 LDA #.LOWORD(UNKNOWN_C17796)
    case 0xC178AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000096, 2); else cpu.execute_instruction<0xA9>(0x007796, 3); return true;
    // src/unknown/C1/C17889.asm:23 LDA #.LOWORD(UNKNOWN_C17796)
    // Overlapping static entry reached from 0xC178AD.
    case 0xC178AF: cpu.execute_instruction<0x77>(0x000080, 2); return true;
    // src/unknown/C1/C17889.asm:24 BRA @UNKNOWN3
    case 0xC178B0: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/unknown/C1/C17889.asm:24 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC178AF.
    case 0xC178B1: cpu.execute_instruction<0x43>(0x0000AE, 2); return true;
    // src/unknown/C1/C17889.asm:26 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC178B2: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/unknown/C1/C17889.asm:26 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC178B1.
    case 0xC178B3: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C17889.asm:26 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC178B3.
    case 0xC178B4: cpu.execute_instruction<0x97>(0x0000E2, 2); return true;
    // src/unknown/C1/C17889.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC178B5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C17889.asm:27 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC178B4.
    case 0xC178B6: cpu.execute_instruction<0x20>(0x00D79E, 3); return true;
    // src/unknown/C1/C17889.asm:28 STZ TEXT_NEW_MENU_OPTION_BUFFER,X
    case 0xC178B7: cpu.execute_instruction<0x9E>(0x0097D7, 3); return true;
    // src/unknown/C1/C17889.asm:28 STZ TEXT_NEW_MENU_OPTION_BUFFER,X
    // Overlapping static entry reached from 0xC178B6.
    case 0xC178B9: cpu.execute_instruction<0x97>(0x0000C2, 2); return true;
    // src/unknown/C1/C17889.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC178BA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C17889.asm:29 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC178B9.
    case 0xC178BB: cpu.execute_instruction<0x20>(0x00D7A9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC178BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x0097D7, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC178BC.
    case 0xC178BE: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC178BF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC178BE.
    case 0xC178C0: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC178C1: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC178C2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC178C4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC178C5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C17889.asm:30 PROMOTENEARPTR TEXT_NEW_MENU_OPTION_BUFFER, @VIRTUAL06
    case 0xC178C7: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C17889.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC178C9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C17889.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC178CB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C17889.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC178CD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C17889.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC178CF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C17889.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC178D1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C17889.asm:33 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC178D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C17889.asm:33 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC178D3.
    case 0xC178D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C17889.asm:33 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC178D6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C17889.asm:33 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC178D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C17889.asm:33 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC178D8.
    case 0xC178DA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C17889.asm:33 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC178DB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C17889.asm:34 JSR UNKNOWN_C113D1
    case 0xC178DD: cpu.execute_instruction<0x20>(0x0013D1, 3); return true;
    // src/unknown/C1/C17889.asm:35 LDA #NULL
    case 0xC178E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C17889.asm:35 LDA #NULL
    // Overlapping static entry reached from 0xC178E0.
    case 0xC178E2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C17889.asm:36 BRA @UNKNOWN3
    case 0xC178E3: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C1/C17889.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC178E5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C17889.asm:39 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC178E7: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/unknown/C1/C17889.asm:40 STA TEXT_NEW_MENU_OPTION_BUFFER,X
    case 0xC178EA: cpu.execute_instruction<0x9D>(0x0097D7, 3); return true;
    // src/unknown/C1/C17889.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC178ED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C17889.asm:42 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC178EF: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/unknown/C1/C17889.asm:43 LDA #.LOWORD(UNKNOWN_C17889)
    case 0xC178F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x007889, 3); return true;
    // src/unknown/C1/C17889.asm:43 LDA #.LOWORD(UNKNOWN_C17889)
    // Overlapping static entry reached from 0xC178F2.
    case 0xC178F4: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C17889.asm:45 END_C_FUNCTION
    case 0xC178F5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C17889.asm:45 END_C_FUNCTION
    case 0xC178F6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1866D.asm (unresolved).
bool execute_unresolved_c1_c1866d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1866D.asm:3 BEGIN_C_FUNCTION
    case 0xC1866D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC1866F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC18670: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC18671: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC18672: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC18672.
    case 0xC18674: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC18675: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC18676: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1866D.asm:10 STA @LOCAL00
    case 0xC18677: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1866D.asm:10 STA @LOCAL00
    // Overlapping static entry reached from 0xC18674.
    case 0xC18678: cpu.execute_instruction<0x0E>(0x001EA5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1866D.asm:11 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC18679: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1866D.asm:11 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1867B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1866D.asm:11 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1867D: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1866D.asm:11 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1867F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1866D.asm:12 LDA @LOCAL00
    case 0xC18681: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C1866D.asm:13 BNE @UNKNOWN0
    case 0xC18683: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C1866D.asm:14 LDA #0
    case 0xC18685: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C1866D.asm:14 LDA #0
    // Overlapping static entry reached from 0xC18685.
    case 0xC18687: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C1866D.asm:15 BRA @UNKNOWN1
    case 0xC18688: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C1/C1866D.asm:17 TAX
    case 0xC1868A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1866D.asm:18 STZ a:display_text_state::unknown4,X
    case 0xC1868B: cpu.execute_instruction<0x9E>(0x000004, 3); return true;
    // src/unknown/C1/C1866D.asm:19 TAY
    case 0xC1868E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C1866D.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1868F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C1866D.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC18691: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C1/C1866D.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC18694: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C1/C1866D.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC18696: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C1/C1866D.asm:21 LDA @LOCAL00
    case 0xC18699: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1866D.asm:23 END_C_FUNCTION
    case 0xC1869B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1866D.asm:23 END_C_FUNCTION
    case 0xC1869C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1869D.asm (unresolved).
bool execute_unresolved_c1_c1869d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C1869D.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1869D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C1869D.asm:4 TAX
    case 0xC1869F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1869D.asm:5 BEQ @UNKNOWN0
    case 0xC186A0: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C1/C1869D.asm:6 LDA a:display_text_state::unknown4,X
    case 0xC186A2: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C1/C1869D.asm:7 BEQ @UNKNOWN0
    case 0xC186A5: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C1/C1869D.asm:8 TXA
    case 0xC186A7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1869D.asm:9 CLC
    case 0xC186A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1869D.asm:10 ADC #display_text_state::saved_text_attributes
    case 0xC186A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C1/C1869D.asm:10 ADC #display_text_state::saved_text_attributes
    // Overlapping static entry reached from 0xC186A9.
    case 0xC186AB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1869D.asm:11 JSL UNKNOWN_C20ABC
    case 0xC186AC: cpu.execute_instruction<0x22>(0xC20ABC, 4); return true;
    // src/unknown/C1/C1869D.asm:13 RTS
    case 0xC186B0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C190E6.asm (unresolved).
bool execute_unresolved_c1_c190e6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C190E6.asm:3 BEGIN_C_FUNCTION
    case 0xC190E6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C190E6.asm:14 TAX
    case 0xC190E8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C190E6.asm:15 DEX
    case 0xC190E9: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C190E6.asm:16 LDA GAME_STATE + game_state::unknown96,X
    case 0xC190EA: cpu.execute_instruction<0xBD>(0x00988B, 3); return true;
    // src/unknown/C1/C190E6.asm:18 AND #$00FF
    case 0xC190ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C190E6.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC190ED.
    case 0xC190EF: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C190E6.asm:19 END_C_FUNCTION
    case 0xC190F0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C190F1.asm (unresolved).
bool execute_unresolved_c1_c190f1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C190F1.asm:3 BEGIN_C_FUNCTION
    case 0xC190F1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C190F1.asm:7 END_STACK_VARS
    case 0xC190F3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C190F1.asm:7 END_STACK_VARS
    case 0xC190F4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C190F1.asm:7 END_STACK_VARS
    case 0xC190F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C190F1.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC190F5.
    case 0xC190F7: cpu.execute_instruction<0xFF>(0x24A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C190F1.asm:7 END_STACK_VARS
    case 0xC190F8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C190F1.asm:8 LDA #36
    case 0xC190F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/unknown/C1/C190F1.asm:8 LDA #36
    // Overlapping static entry reached from 0xC190F9.
    case 0xC190FB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C190F1.asm:9 STA @LOCAL00
    case 0xC190FC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C190F1.asm:10 LDX #0
    case 0xC190FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C190F1.asm:10 LDX #0
    // Overlapping static entry reached from 0xC190FE.
    case 0xC19100: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C190F1.asm:11 BRA @UNKNOWN2
    case 0xC19101: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C1/C190F1.asm:13 LDA GAME_STATE + game_state::unknownB6,X
    case 0xC19103: cpu.execute_instruction<0xBD>(0x0098AB, 3); return true;
    // src/unknown/C1/C190F1.asm:14 AND #$00FF
    case 0xC19106: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C190F1.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC19106.
    case 0xC19108: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C190F1.asm:15 BEQ @UNKNOWN1
    case 0xC19109: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C1/C190F1.asm:16 LDA @LOCAL00
    case 0xC1910B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C190F1.asm:17 DEC
    case 0xC1910D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C190F1.asm:18 STA @LOCAL00
    case 0xC1910E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C190F1.asm:20 INX
    case 0xC19110: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C190F1.asm:22 CPX #3
    case 0xC19111: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/unknown/C1/C190F1.asm:22 CPX #3
    // Overlapping static entry reached from 0xC19111.
    case 0xC19113: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C190F1.asm:23 BCC @UNKNOWN0
    case 0xC19114: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/unknown/C1/C190F1.asm:24 LDX #0
    case 0xC19116: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C190F1.asm:24 LDX #0
    // Overlapping static entry reached from 0xC19116.
    case 0xC19118: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C190F1.asm:25 BRA @UNKNOWN5
    case 0xC19119: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C1/C190F1.asm:27 LDA GAME_STATE+game_state::escargo_express_items,X
    case 0xC1911B: cpu.execute_instruction<0xBD>(0x00984B, 3); return true;
    // src/unknown/C1/C190F1.asm:28 AND #$00FF
    case 0xC1911E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C190F1.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC1911E.
    case 0xC19120: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C190F1.asm:29 BNE @UNKNOWN4
    case 0xC19121: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C1/C190F1.asm:30 LDA #0
    case 0xC19123: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C190F1.asm:30 LDA #0
    // Overlapping static entry reached from 0xC19123.
    case 0xC19125: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C1/C190F1.asm:31 BRA @UNKNOWN8
    case 0xC19126: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C1/C190F1.asm:33 INX
    case 0xC19128: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C190F1.asm:35 STX @VIRTUAL02
    case 0xC19129: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C1/C190F1.asm:36 LDA @LOCAL00
    case 0xC1912B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C190F1.asm:37 CLC
    case 0xC1912D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C190F1.asm:38 SBC @VIRTUAL02
    case 0xC1912E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C190F1.asm:39 BRANCHGTS @UNKNOWN3
    case 0xC19130: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C190F1.asm:39 BRANCHGTS @UNKNOWN3
    case 0xC19132: cpu.execute_instruction<0x10>(0x0000E7, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C190F1.asm:39 BRANCHGTS @UNKNOWN3
    case 0xC19134: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C190F1.asm:39 BRANCHGTS @UNKNOWN3
    case 0xC19136: cpu.execute_instruction<0x30>(0x0000E3, 2); return true;
    // src/unknown/C1/C190F1.asm:40 LDA #1
    case 0xC19138: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C190F1.asm:40 LDA #1
    // Overlapping static entry reached from 0xC19138.
    case 0xC1913A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C190F1.asm:42 END_C_FUNCTION
    case 0xC1913B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C190F1.asm:42 END_C_FUNCTION
    case 0xC1913C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C191B0.asm (unresolved).
bool execute_unresolved_c1_c191b0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C191B0.asm:3 BEGIN_C_FUNCTION
    case 0xC191B0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C191B0.asm:8 END_STACK_VARS
    case 0xC191B2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C191B0.asm:8 END_STACK_VARS
    case 0xC191B3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C191B0.asm:8 END_STACK_VARS
    case 0xC191B4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C191B0.asm:8 END_STACK_VARS
    case 0xC191B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C191B0.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC191B5.
    case 0xC191B7: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C191B0.asm:8 END_STACK_VARS
    case 0xC191B8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C191B0.asm:8 END_STACK_VARS
    case 0xC191B9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C191B0.asm:9 TAX
    case 0xC191BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C191B0.asm:10 DEX
    case 0xC191BB: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C1/C191B0.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC191BC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0.asm:12 LDA GAME_STATE+game_state::escargo_express_items,X
    case 0xC191BE: cpu.execute_instruction<0xBD>(0x00984B, 3); return true;
    // src/unknown/C1/C191B0.asm:13 STA @VIRTUAL01
    case 0xC191C1: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C1/C191B0.asm:14 BRA @UNKNOWN1
    case 0xC191C3: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C1/C191B0.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC191C5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0.asm:17 LDA @VIRTUAL00
    case 0xC191C7: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C191B0.asm:18 STA GAME_STATE+game_state::escargo_express_items,X
    case 0xC191C9: cpu.execute_instruction<0x9D>(0x00984B, 3); return true;
    // src/unknown/C1/C191B0.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC191CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0.asm:20 LDA @LOCAL00
    case 0xC191CE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C1/C191B0.asm:21 TAX
    case 0xC191D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C191B0.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC191D1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0.asm:24 LDA GAME_STATE+game_state::escargo_express_items+1,X
    case 0xC191D3: cpu.execute_instruction<0xBD>(0x00984C, 3); return true;
    // src/unknown/C1/C191B0.asm:25 STA @VIRTUAL00
    case 0xC191D6: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C1/C191B0.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC191D8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0.asm:27 LDA @VIRTUAL00
    case 0xC191DA: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C1/C191B0.asm:28 AND #$00FF
    case 0xC191DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C191B0.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC191DC.
    case 0xC191DE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C191B0.asm:29 BEQ @UNKNOWN2
    case 0xC191DF: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C1/C191B0.asm:30 TXA
    case 0xC191E1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C191B0.asm:31 INC
    case 0xC191E2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C191B0.asm:32 STA @LOCAL00
    case 0xC191E3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C191B0.asm:33 CMP #36
    case 0xC191E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000024, 2); else cpu.execute_instruction<0xC9>(0x000024, 3); return true;
    // src/unknown/C1/C191B0.asm:33 CMP #36
    // Overlapping static entry reached from 0xC191E5.
    case 0xC191E7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C1/C191B0.asm:34 BCC @UNKNOWN0
    case 0xC191E8: cpu.execute_instruction<0x90>(0x0000DB, 2); return true;
    // src/unknown/C1/C191B0.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC191EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0.asm:37 STZ GAME_STATE+game_state::escargo_express_items,X
    case 0xC191EC: cpu.execute_instruction<0x9E>(0x00984B, 3); return true;
    // src/unknown/C1/C191B0.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC191EF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C191B0.asm:39 LDA @VIRTUAL01
    case 0xC191F1: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C1/C191B0.asm:40 AND #$00FF
    case 0xC191F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C191B0.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC191F3.
    case 0xC191F5: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C191B0.asm:41 END_C_FUNCTION
    case 0xC191F6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C191B0.asm:41 END_C_FUNCTION
    case 0xC191F7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C191F8.asm (unresolved).
bool execute_unresolved_c1_c191f8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C191F8.asm:3 BEGIN_C_FUNCTION
    case 0xC191F8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    case 0xC191FA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    case 0xC191FB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    case 0xC191FC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    case 0xC191FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC191FD.
    case 0xC191FF: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    case 0xC19200: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C191F8.asm:8 END_STACK_VARS
    case 0xC19201: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C191F8.asm:9 TAY
    case 0xC19202: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C191F8.asm:10 STY @LOCAL00
    case 0xC19203: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C1/C191F8.asm:11 TXA
    case 0xC19205: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C191F8.asm:12 JSR UNKNOWN_C191B0
    case 0xC19206: cpu.execute_instruction<0x20>(0x0091B0, 3); return true;
    // src/unknown/C1/C191F8.asm:13 TAX
    case 0xC19209: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C191F8.asm:14 LDY @LOCAL00
    case 0xC1920A: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C191F8.asm:15 TYA
    case 0xC1920C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C191F8.asm:16 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC1920D: cpu.execute_instruction<0x22>(0xC18BC6, 4); return true;
    // src/unknown/C1/C191F8.asm:17 LDY @LOCAL00
    case 0xC19211: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C1/C191F8.asm:18 TYA
    case 0xC19213: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C191F8.asm:19 END_C_FUNCTION
    case 0xC19214: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C191F8.asm:19 END_C_FUNCTION
    case 0xC19215: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19216.asm (unresolved).
bool execute_unresolved_c1_c19216_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19216.asm:3 BEGIN_C_FUNCTION
    case 0xC19216: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    case 0xC19218: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    case 0xC19219: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    case 0xC1921A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    case 0xC1921B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1921B.
    case 0xC1921D: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    case 0xC1921E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C19216.asm:8 END_STACK_VARS
    case 0xC1921F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C19216.asm:9 STA @LOCAL01
    case 0xC19220: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19216.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC1921D.
    case 0xC19221: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19222: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19221.
    case 0xC19223: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19222.
    case 0xC19224: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19225: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19224.
    case 0xC19226: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19227: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19226.
    case 0xC19228: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19227.
    case 0xC19229: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19216.asm:10 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1922A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19216.asm:11 LDA @LOCAL01
    case 0xC1922C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C19216.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1922E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C19216.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC1922E.
    case 0xC19230: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C19216.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19231: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19216.asm:13 CLC
    case 0xC19235: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19216.asm:14 ADC @VIRTUAL06
    case 0xC19236: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19216.asm:15 STA @VIRTUAL06
    case 0xC19238: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19216.asm:16 STA @LOCAL00
    case 0xC1923A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C19216.asm:17 LDA @VIRTUAL06+2
    case 0xC1923C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C19216.asm:18 STA @LOCAL00+2
    case 0xC1923E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19216.asm:19 LDA #item::type
    case 0xC19240: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/unknown/C1/C19216.asm:19 LDA #item::type
    // Overlapping static entry reached from 0xC19240.
    case 0xC19242: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19216.asm:25 JSL UNKNOWN_C4487C
    case 0xC19243: cpu.execute_instruction<0x22>(0xC4487C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19216.asm:27 END_C_FUNCTION
    case 0xC19247: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19216.asm:27 END_C_FUNCTION
    case 0xC19248: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19249.asm (unresolved).
bool execute_unresolved_c1_c19249_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19249.asm:3 BEGIN_C_FUNCTION
    case 0xC19249: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    case 0xC1924B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    case 0xC1924C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    case 0xC1924D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    case 0xC1924E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1924E.
    case 0xC19250: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    case 0xC19251: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C19249.asm:8 END_STACK_VARS
    case 0xC19252: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:9 STA @LOCAL01
    case 0xC19253: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19249.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC19250.
    case 0xC19254: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC19255: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00550F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19254.
    case 0xC19256: cpu.execute_instruction<0x0F>(0x068555, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19255.
    case 0xC19257: cpu.execute_instruction<0x55>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC19258: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19257.
    case 0xC19259: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC1925A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19259.
    case 0xC1925B: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1925A.
    case 0xC1925C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19249.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC1925D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19249.asm:11 LDA @LOCAL01
    case 0xC1925F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C1/C19249.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19261: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C1/C19249.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19263: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C1/C19249.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC19264: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C19249.asm:13 TAX
    case 0xC19266: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C1/C19249.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC19267: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C1/C19249.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC19269: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C1/C19249.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1926B: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C1/C19249.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1926D: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C1/C19249.asm:15 CLC
    case 0xC1926F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:16 ADC @VIRTUAL0A
    case 0xC19270: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C19249.asm:17 STA @VIRTUAL0A
    case 0xC19272: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C19249.asm:18 LDA [@VIRTUAL0A]
    case 0xC19274: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C19249.asm:19 AND #$00FF
    case 0xC19276: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19249.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC19276.
    case 0xC19278: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19249.asm:20 STA @LOCAL01
    case 0xC19279: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C19249.asm:21 AND #$0080
    case 0xC1927B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C1/C19249.asm:21 AND #$0080
    // Overlapping static entry reached from 0xC1927B.
    case 0xC1927D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19249.asm:22 BEQ @UNKNOWN3
    case 0xC1927E: cpu.execute_instruction<0xF0>(0x000076, 2); return true;
    // src/unknown/C1/C19249.asm:23 LDA @LOCAL01
    case 0xC19280: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C19249.asm:24 AND #$007F
    case 0xC19282: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/C1/C19249.asm:24 AND #$007F
    // Overlapping static entry reached from 0xC19282.
    case 0xC19284: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C19249.asm:25 CMP #1
    case 0xC19285: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C19249.asm:25 CMP #1
    // Overlapping static entry reached from 0xC19285.
    case 0xC19287: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19249.asm:26 BEQ @UNKNOWN0
    case 0xC19288: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C1/C19249.asm:27 CMP #2
    case 0xC1928A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C19249.asm:27 CMP #2
    // Overlapping static entry reached from 0xC1928A.
    case 0xC1928C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19249.asm:28 BEQ @UNKNOWN1
    case 0xC1928D: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/unknown/C1/C19249.asm:29 BRA @UNKNOWN2
    case 0xC1928F: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/unknown/C1/C19249.asm:31 TXA
    case 0xC19291: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:32 INC
    case 0xC19292: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:33 CLC
    case 0xC19293: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:34 ADC @VIRTUAL06
    case 0xC19294: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:35 STA @VIRTUAL06
    case 0xC19296: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:36 LDA [@VIRTUAL06]
    case 0xC19298: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:37 TAX
    case 0xC1929A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC1929B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19249.asm:39 LDA __BSS_START__,X
    case 0xC1929D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC192A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C19249.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC192A2: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C19249.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC192A4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C19249.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC192A6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19249.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC192A8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19249.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC192AA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC192AC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19249.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC192AE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19249.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC192B0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19249.asm:43 JSR PRINT_NUMBER
    case 0xC192B2: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C19249.asm:44 BRA @UNKNOWN4
    case 0xC192B5: cpu.execute_instruction<0x80>(0x000062, 2); return true;
    // src/unknown/C1/C19249.asm:46 TXA
    case 0xC192B7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:47 INC
    case 0xC192B8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:48 CLC
    case 0xC192B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:49 ADC @VIRTUAL06
    case 0xC192BA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:50 STA @VIRTUAL06
    case 0xC192BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:51 LDA [@VIRTUAL06]
    case 0xC192BE: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:52 TAX
    case 0xC192C0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:53 LDA __BSS_START__,X
    case 0xC192C1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC192C4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C19249.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC192C6: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19249.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC192C8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC192CA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19249.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC192CC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19249.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC192CE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19249.asm:56 JSR PRINT_NUMBER
    case 0xC192D0: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C19249.asm:57 BRA @UNKNOWN4
    case 0xC192D3: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/unknown/C1/C19249.asm:59 TXA
    case 0xC192D5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:60 INC
    case 0xC192D6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:61 CLC
    case 0xC192D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:62 ADC @VIRTUAL06
    case 0xC192D8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:63 STA @VIRTUAL06
    case 0xC192DA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:64 LDA [@VIRTUAL06]
    case 0xC192DC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:65 TAY
    case 0xC192DE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C19249.asm:66 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC192DF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:66 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC192E2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C19249.asm:66 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC192E4: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C19249.asm:66 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC192E7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19249.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC192E9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC192EB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19249.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC192ED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19249.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC192EF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19249.asm:68 JSR PRINT_NUMBER
    case 0xC192F1: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C19249.asm:69 BRA @UNKNOWN4
    case 0xC192F4: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/unknown/C1/C19249.asm:71 TXA
    case 0xC192F6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:72 INC
    case 0xC192F7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:73 CLC
    case 0xC192F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19249.asm:74 ADC @VIRTUAL06
    case 0xC192F9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:75 STA @VIRTUAL06
    case 0xC192FB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19249.asm:76 LDA [@VIRTUAL06]
    case 0xC192FD: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xC192FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19249.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19301: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19249.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19302: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19249.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19304: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19305: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19249.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19307: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19249.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC19309: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19249.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1930B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19249.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1930D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19249.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1930F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19249.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19311: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19249.asm:80 LDA @LOCAL01
    case 0xC19313: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C19249.asm:84 JSL UNKNOWN_C447FB
    case 0xC19315: cpu.execute_instruction<0x22>(0xC447FB, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19249.asm:87 END_C_FUNCTION
    case 0xC19319: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19249.asm:87 END_C_FUNCTION
    case 0xC1931A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1931B.asm (unresolved).
bool execute_unresolved_c1_c1931b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1931B.asm:3 BEGIN_C_FUNCTION
    case 0xC1931B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1931B.asm:8 END_STACK_VARS
    case 0xC1931D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1931B.asm:8 END_STACK_VARS
    case 0xC1931E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1931B.asm:8 END_STACK_VARS
    case 0xC1931F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1931B.asm:8 END_STACK_VARS
    case 0xC19320: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1931B.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC19320.
    case 0xC19322: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1931B.asm:8 END_STACK_VARS
    case 0xC19323: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1931B.asm:8 END_STACK_VARS
    case 0xC19324: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1931B.asm:9 STA @LOCAL01
    case 0xC19325: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1931B.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC19322.
    case 0xC19326: cpu.execute_instruction<0x12>(0x0000C9, 2); return true;
    // src/unknown/C1/C1931B.asm:10 CMP #PLAYER_CHAR_COUNT
    case 0xC19327: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C1/C1931B.asm:10 CMP #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC19326.
    case 0xC19328: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/unknown/C1/C1931B.asm:10 CMP #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC19327.
    case 0xC19329: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C1/C1931B.asm:11 BLTEQ @UNKNOWN2
    case 0xC1932A: cpu.execute_instruction<0x90>(0x000076, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C1/C1931B.asm:11 BLTEQ @UNKNOWN2
    case 0xC1932C: cpu.execute_instruction<0xF0>(0x000074, 2); return true;
    // src/unknown/C1/C1931B.asm:12 CMP #PARTY_MEMBER::KING
    case 0xC1932E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C1/C1931B.asm:12 CMP #PARTY_MEMBER::KING
    // Overlapping static entry reached from 0xC1932E.
    case 0xC19330: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C1/C1931B.asm:13 BNE @UNKNOWN1
    case 0xC19331: cpu.execute_instruction<0xD0>(0x00003D, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1931B.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC19333: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x009819, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C1931B.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC19333.
    case 0xC19335: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1931B.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC19336: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1931B.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC19338: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1931B.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC19339: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1931B.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC1933B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1931B.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC1933C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1931B.asm:14 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC1933E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1931B.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC19340: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1931B.asm:16 LDA #.SIZEOF(game_state::pet_name)
    case 0xC19342: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1931B.asm:16 LDA #.SIZEOF(game_state::pet_name)
    // Overlapping static entry reached from 0xC19342.
    case 0xC19344: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1931B.asm:17 STA @LOCAL01
    case 0xC19345: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1931B.asm:18 LDA f:ALLOW_TEXT_OVERFLOW
    case 0xC19347: cpu.execute_instruction<0xAF>(0x7EB49D, 4); return true;
    // src/unknown/C1/C1931B.asm:19 AND #$00FF
    case 0xC1934B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1931B.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC1934B.
    case 0xC1934D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1931B.asm:20 BEQ @UNKNOWN0
    case 0xC1934E: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1931B.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19350: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1931B.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19352: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1931B.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19354: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1931B.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19356: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1931B.asm:22 LDA @LOCAL01
    case 0xC19358: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1931B.asm:23 JSR PRINT_STRING
    case 0xC1935A: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C1931B.asm:24 JMP @UNKNOWN4
    case 0xC1935D: cpu.execute_instruction<0x4C>(0x0093E5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1931B.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19360: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1931B.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19362: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1931B.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19364: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1931B.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19366: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1931B.asm:27 LDA @LOCAL01
    case 0xC19368: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1931B.asm:28 JSL UNKNOWN_C447FB
    case 0xC1936A: cpu.execute_instruction<0x22>(0xC447FB, 4); return true;
    // src/unknown/C1/C1931B.asm:29 BRA @UNKNOWN4
    case 0xC1936E: cpu.execute_instruction<0x80>(0x000075, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1931B.asm:31 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19370: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1931B.asm:31 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19370.
    case 0xC19372: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1931B.asm:31 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19373: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1931B.asm:31 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19372.
    case 0xC19374: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1931B.asm:31 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19375: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1931B.asm:31 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19374.
    case 0xC19376: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1931B.asm:31 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC19375.
    case 0xC19377: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1931B.asm:31 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC19378: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1931B.asm:32 LDA @LOCAL01
    case 0xC1937A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:520 ASL
    // Macro caller: src/unknown/C1/C1931B.asm:33 OPTIMIZED_MULT @VIRTUAL04, 2
    case 0xC1937C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1931B.asm:34 TAX
    case 0xC1937D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1931B.asm:35 INX
    case 0xC1937E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1931B.asm:36 LDA f:NPC_AI_TABLE,X
    case 0xC1937F: cpu.execute_instruction<0xBF>(0xD58F23, 4); return true;
    // src/unknown/C1/C1931B.asm:37 AND #$00FF
    case 0xC19383: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1931B.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC19383.
    case 0xC19385: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C1/C1931B.asm:38 LDY #.SIZEOF(enemy_data)
    case 0xC19386: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C1/C1931B.asm:38 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC19386.
    case 0xC19388: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1931B.asm:39 JSL MULT168
    case 0xC19389: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1931B.asm:40 INC
    case 0xC1938D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1931B.asm:41 CLC
    case 0xC1938E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1931B.asm:42 ADC @VIRTUAL06
    case 0xC1938F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1931B.asm:43 STA @VIRTUAL06
    case 0xC19391: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1931B.asm:44 STA @LOCAL00
    case 0xC19393: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C1931B.asm:45 LDA @VIRTUAL06+2
    case 0xC19395: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1931B.asm:46 STA @LOCAL00+2
    case 0xC19397: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1931B.asm:47 LDA #25
    case 0xC19399: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/unknown/C1/C1931B.asm:47 LDA #25
    // Overlapping static entry reached from 0xC19399.
    case 0xC1939B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1931B.asm:48 JSL UNKNOWN_C447FB
    case 0xC1939C: cpu.execute_instruction<0x22>(0xC447FB, 4); return true;
    // src/unknown/C1/C1931B.asm:49 BRA @UNKNOWN4
    case 0xC193A0: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/unknown/C1/C1931B.asm:51 DEC
    case 0xC193A2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1931B.asm:52 LDY #.SIZEOF(char_struct)
    case 0xC193A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1931B.asm:52 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC193A3.
    case 0xC193A5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1931B.asm:53 JSL MULT168
    case 0xC193A6: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1931B.asm:54 CLC
    case 0xC193AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1931B.asm:55 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    case 0xC193AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C1/C1931B.asm:55 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    // Overlapping static entry reached from 0xC193AB.
    case 0xC193AD: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1931B.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC193AE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1931B.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC193B0: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1931B.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC193B1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1931B.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC193B3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1931B.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC193B4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1931B.asm:56 PROMOTENEARPTRA @VIRTUAL06
    case 0xC193B6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1931B.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC193B8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1931B.asm:58 LDA #.SIZEOF(char_struct::name)
    case 0xC193BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C1/C1931B.asm:58 LDA #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC193BA.
    case 0xC193BC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C1931B.asm:59 STA @LOCAL01
    case 0xC193BD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1931B.asm:60 LDA f:ALLOW_TEXT_OVERFLOW
    case 0xC193BF: cpu.execute_instruction<0xAF>(0x7EB49D, 4); return true;
    // src/unknown/C1/C1931B.asm:61 AND #$00FF
    case 0xC193C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1931B.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC193C3.
    case 0xC193C5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1931B.asm:62 BEQ @UNKNOWN3
    case 0xC193C6: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1931B.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193C8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1931B.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193CA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1931B.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193CC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1931B.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193CE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1931B.asm:64 LDA @LOCAL01
    case 0xC193D0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1931B.asm:65 JSR PRINT_STRING
    case 0xC193D2: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C1931B.asm:66 BRA @UNKNOWN4
    case 0xC193D5: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1931B.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193D7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1931B.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193D9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1931B.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193DB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1931B.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC193DD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1931B.asm:69 LDA @LOCAL01
    case 0xC193DF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1931B.asm:70 JSL UNKNOWN_C447FB
    case 0xC193E1: cpu.execute_instruction<0x22>(0xC447FB, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1931B.asm:72 END_C_FUNCTION
    case 0xC193E5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1931B.asm:72 END_C_FUNCTION
    case 0xC193E6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C193E7.asm (unresolved).
bool execute_unresolved_c1_c193e7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C193E7.asm:3 BEGIN_C_FUNCTION
    case 0xC193E7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    case 0xC193E9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    case 0xC193EA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    case 0xC193EB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    case 0xC193EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC193EC.
    case 0xC193EE: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    case 0xC193EF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C193E7.asm:8 END_STACK_VARS
    case 0xC193F0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C193E7.asm:9 TAX
    case 0xC193F1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C193E7.asm:10 STX @LOCAL01
    case 0xC193F2: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C1/C193E7.asm:11 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC193F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C193E7.asm:11 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC193F4.
    case 0xC193F6: cpu.execute_instruction<0x9C>(0x002022, 3); return true;
    // src/unknown/C1/C193E7.asm:12 JSL UNKNOWN_C20A20
    case 0xC193F7: cpu.execute_instruction<0x22>(0xC20A20, 4); return true;
    // src/unknown/C1/C193E7.asm:12 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC193F6.
    case 0xC193F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C193E7.asm:12 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC193F9.
    case 0xC193FA: cpu.execute_instruction<0xC2>(0x000022, 2); return true;
    // src/unknown/C1/C193E7.asm:13 JSR SET_INSTANT_PRINTING
    case 0xC193FB: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/unknown/C1/C193E7.asm:13 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC193FA.
    case 0xC193FC: cpu.execute_instruction<0xD4>(0x0000E4, 2); return true;
    // src/unknown/C1/C193E7.asm:13 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC193FC.
    case 0xC193FE: cpu.execute_instruction<0xC3>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C193E7.asm:14 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN28
    case 0xC193FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C193E7.asm:14 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN28
    // Overlapping static entry reached from 0xC193FE.
    case 0xC19400: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C193E7.asm:14 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN28
    // Overlapping static entry reached from 0xC193FF.
    case 0xC19401: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C193E7.asm:14 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN28
    case 0xC19402: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    case 0xC19405: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000063, 2); else cpu.execute_instruction<0xA9>(0x005963, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC19405.
    case 0xC19407: cpu.execute_instruction<0x59>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    case 0xC19408: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    case 0xC1940A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC1940A.
    case 0xC1940C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C193E7.asm:15 LOADPTR MISC_TARGET_TEXT, @VIRTUAL06
    case 0xC1940D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C193E7.asm:16 LDX @LOCAL01
    case 0xC1940F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C1/C193E7.asm:17 TXA
    case 0xC19411: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/unknown/C1/C193E7.asm:18 OPTIMIZED_MULT @VIRTUAL04, MISC_TARGET_TEXT_LENGTH
    case 0xC19412: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/unknown/C1/C193E7.asm:18 OPTIMIZED_MULT @VIRTUAL04, MISC_TARGET_TEXT_LENGTH
    case 0xC19414: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/unknown/C1/C193E7.asm:18 OPTIMIZED_MULT @VIRTUAL04, MISC_TARGET_TEXT_LENGTH
    case 0xC19415: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/unknown/C1/C193E7.asm:18 OPTIMIZED_MULT @VIRTUAL04, MISC_TARGET_TEXT_LENGTH
    case 0xC19416: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/unknown/C1/C193E7.asm:18 OPTIMIZED_MULT @VIRTUAL04, MISC_TARGET_TEXT_LENGTH
    case 0xC19418: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C193E7.asm:19 CLC
    case 0xC19419: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C193E7.asm:20 ADC @VIRTUAL06
    case 0xC1941A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C193E7.asm:21 STA @VIRTUAL06
    case 0xC1941C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C193E7.asm:22 STA @LOCAL00
    case 0xC1941E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C1/C193E7.asm:23 LDA @VIRTUAL06+2
    case 0xC19420: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C193E7.asm:24 STA @LOCAL00+2
    case 0xC19422: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C193E7.asm:25 LDA #MISC_TARGET_TEXT_LENGTH
    case 0xC19424: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C193E7.asm:25 LDA #MISC_TARGET_TEXT_LENGTH
    // Overlapping static entry reached from 0xC19424.
    case 0xC19426: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C193E7.asm:26 JSR PRINT_STRING
    case 0xC19427: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C193E7.asm:27 JSR CLEAR_INSTANT_PRINTING
    case 0xC1942A: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/unknown/C1/C193E7.asm:28 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1942E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C193E7.asm:28 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1942E.
    case 0xC19430: cpu.execute_instruction<0x9C>(0x00BC22, 3); return true;
    // src/unknown/C1/C193E7.asm:29 JSL UNKNOWN_C20ABC
    case 0xC19431: cpu.execute_instruction<0x22>(0xC20ABC, 4); return true;
    // src/unknown/C1/C193E7.asm:29 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC19430.
    case 0xC19433: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C193E7.asm:29 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC19433.
    case 0xC19434: cpu.execute_instruction<0xC2>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C193E7.asm:30 END_C_FUNCTION
    case 0xC19435: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C193E7.asm:30 END_C_FUNCTION
    case 0xC19436: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19437.asm (unresolved).
bool execute_unresolved_c1_c19437_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19437.asm:3 BEGIN_C_FUNCTION
    case 0xC19437: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C1/C19437.asm:5 LDA #WINDOW::UNKNOWN28
    case 0xC19439: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // src/unknown/C1/C19437.asm:5 LDA #WINDOW::UNKNOWN28
    // Overlapping static entry reached from 0xC19439.
    case 0xC1943B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19437.asm:6 JSR CLOSE_WINDOW
    case 0xC1943C: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19437.asm:7 END_C_FUNCTION
    case 0xC19440: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19441.asm (unresolved).
bool execute_unresolved_c1_c19441_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19441.asm:3 BEGIN_C_FUNCTION
    case 0xC19441: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19441.asm:10 END_STACK_VARS
    case 0xC19443: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19441.asm:10 END_STACK_VARS
    case 0xC19444: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19441.asm:10 END_STACK_VARS
    case 0xC19445: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19441.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC19445.
    case 0xC19447: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19441.asm:10 END_STACK_VARS
    case 0xC19448: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:11 LDA #0
    case 0xC19449: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19441.asm:11 LDA #0
    // Overlapping static entry reached from 0xC19449.
    case 0xC1944B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C1/C19441.asm:12 STA @VIRTUAL02
    case 0xC1944C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19441.asm:13 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1944E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C19441.asm:13 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1944E.
    case 0xC19450: cpu.execute_instruction<0x9C>(0x002022, 3); return true;
    // src/unknown/C1/C19441.asm:14 JSL UNKNOWN_C20A20
    case 0xC19451: cpu.execute_instruction<0x22>(0xC20A20, 4); return true;
    // src/unknown/C1/C19441.asm:14 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC19450.
    case 0xC19453: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:14 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC19453.
    case 0xC19454: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19441.asm:15 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    case 0xC19455: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19441.asm:15 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    // Overlapping static entry reached from 0xC19454.
    case 0xC19456: cpu.execute_instruction<0x07>(0x000000, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C19441.asm:15 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    // Overlapping static entry reached from 0xC19455.
    case 0xC19457: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C19441.asm:15 CREATE_WINDOW_NEAR #WINDOW::EQUIP_MENU_ITEMLIST
    case 0xC19458: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:16 LOADPTR PHONE_CALL_TEXT, @LOCAL00
    case 0xC1945B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000095, 2); else cpu.execute_instruction<0xA9>(0x005995, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:16 LOADPTR PHONE_CALL_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC1945B.
    case 0xC1945D: cpu.execute_instruction<0x59>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19441.asm:16 LOADPTR PHONE_CALL_TEXT, @LOCAL00
    case 0xC1945E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:16 LOADPTR PHONE_CALL_TEXT, @LOCAL00
    case 0xC19460: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:16 LOADPTR PHONE_CALL_TEXT, @LOCAL00
    // Overlapping static entry reached from 0xC19460.
    case 0xC19462: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19441.asm:16 LOADPTR PHONE_CALL_TEXT, @LOCAL00
    case 0xC19463: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19441.asm:17 LDX #.SIZEOF(char_struct::name)
    case 0xC19465: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C1/C19441.asm:17 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC19465.
    case 0xC19467: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19441.asm:18 LDA #7
    case 0xC19468: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C1/C19441.asm:18 LDA #7
    // Overlapping static entry reached from 0xC19468.
    case 0xC1946A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C19441.asm:19 JSL SET_WINDOW_TITLE
    case 0xC1946B: cpu.execute_instruction<0x22>(0xC2032B, 4); return true;
    // src/unknown/C1/C19441.asm:20 LDY #1
    case 0xC1946F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C19441.asm:20 LDY #1
    // Overlapping static entry reached from 0xC1946F.
    case 0xC19471: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C1/C19441.asm:21 STY @LOCAL03
    case 0xC19472: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C1/C19441.asm:22 BRA @UNKNOWN2
    case 0xC19474: cpu.execute_instruction<0x80>(0x000063, 2); return true;
    // src/unknown/C1/C19441.asm:24 LDA @LOCAL02
    case 0xC19476: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C1/C19441.asm:25 CLC
    case 0xC19478: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:26 ADC #telephone_contact::event_flag
    case 0xC19479: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/unknown/C1/C19441.asm:26 ADC #telephone_contact::event_flag
    // Overlapping static entry reached from 0xC19479.
    case 0xC1947B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C19441.asm:27 CLC
    case 0xC1947C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:28 ADC @VIRTUAL06
    case 0xC1947D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C19441.asm:29 STA @VIRTUAL06
    case 0xC1947F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C19441.asm:30 LDA [@VIRTUAL06]
    case 0xC19481: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C1/C19441.asm:31 JSL GET_EVENT_FLAG
    case 0xC19483: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C1/C19441.asm:32 CMP #0
    case 0xC19487: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C19441.asm:32 CMP #0
    // Overlapping static entry reached from 0xC19487.
    case 0xC19489: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19441.asm:33 BEQ @UNKNOWN1
    case 0xC1948A: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19441.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1948C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19441.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1948E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19441.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC19490: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19441.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC19492: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19441.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19494: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19441.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19496: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19441.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19498: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19441.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1949A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C19441.asm:40 LDX #.SIZEOF(telephone_contact::label)
    case 0xC1949C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/unknown/C1/C19441.asm:40 LDX #.SIZEOF(telephone_contact::label)
    // Overlapping static entry reached from 0xC1949C.
    case 0xC1949E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C19441.asm:41 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1949F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // src/unknown/C1/C19441.asm:41 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1949F.
    case 0xC194A1: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/unknown/C1/C19441.asm:42 JSL MEMCPY16
    case 0xC194A2: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C1/C19441.asm:42 JSL MEMCPY16
    // Overlapping static entry reached from 0xC194A1.
    case 0xC194A4: cpu.execute_instruction<0x8E>(0x00E2C0, 3); return true;
    // src/unknown/C1/C19441.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC194A6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C19441.asm:43 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC194A4.
    case 0xC194A7: cpu.execute_instruction<0x20>(0x00B89C, 3); return true;
    // src/unknown/C1/C19441.asm:44 STZ TEMPORARY_TEXT_BUFFER + .SIZEOF(telephone_contact::label)
    case 0xC194A8: cpu.execute_instruction<0x9C>(0x009CB8, 3); return true;
    // src/unknown/C1/C19441.asm:44 STZ TEMPORARY_TEXT_BUFFER + .SIZEOF(telephone_contact::label)
    // Overlapping static entry reached from 0xC194A7.
    case 0xC194AA: cpu.execute_instruction<0x9C>(0x0020C2, 3); return true;
    // src/unknown/C1/C19441.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC194AB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC194AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC194AD.
    case 0xC194AF: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC194B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC194B2: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC194B3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC194B5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC194B6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C19441.asm:46 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC194B8: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C19441.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC194BA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C19441.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC194BC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C19441.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC194BE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C19441.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC194C0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C19441.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC194C2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19441.asm:49 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC194C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C19441.asm:49 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC194C4.
    case 0xC194C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C19441.asm:49 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC194C7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19441.asm:49 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC194C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C19441.asm:49 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC194C9.
    case 0xC194CB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C19441.asm:49 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC194CC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C1/C19441.asm:50 LDY @LOCAL03
    case 0xC194CE: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C19441.asm:51 TYA
    case 0xC194D0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:52 JSR UNKNOWN_C115F4
    case 0xC194D1: cpu.execute_instruction<0x20>(0x0015F4, 3); return true;
    // src/unknown/C1/C19441.asm:54 LDY @LOCAL03
    case 0xC194D4: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C1/C19441.asm:55 INY
    case 0xC194D6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:56 STY @LOCAL03
    case 0xC194D7: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:58 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL06
    case 0xC194D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008F, 2); else cpu.execute_instruction<0xA9>(0x007A8F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:58 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC194D9.
    case 0xC194DB: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C19441.asm:58 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL06
    case 0xC194DC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:58 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL06
    case 0xC194DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C19441.asm:58 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC194DE.
    case 0xC194E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C19441.asm:58 LOADPTR TELEPHONE_CONTACTS_TABLE, @VIRTUAL06
    case 0xC194E1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C19441.asm:59 TYA
    case 0xC194E3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C19441.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    case 0xC194E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001F, 2); else cpu.execute_instruction<0xA0>(0x00001F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C1/C19441.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    // Overlapping static entry reached from 0xC194E4.
    case 0xC194E6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C1/C19441.asm:60 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(telephone_contact)
    case 0xC194E7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C19441.asm:61 STA @LOCAL02
    case 0xC194EB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C1/C19441.asm:62 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC194ED: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C1/C19441.asm:62 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC194EF: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C1/C19441.asm:62 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC194F1: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C1/C19441.asm:62 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC194F3: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C1/C19441.asm:63 CLC
    case 0xC194F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:64 ADC @VIRTUAL0A
    case 0xC194F6: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C1/C19441.asm:65 STA @VIRTUAL0A
    case 0xC194F8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C1/C19441.asm:66 LDA [@VIRTUAL0A]
    case 0xC194FA: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C1/C19441.asm:67 AND #$00FF
    case 0xC194FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C19441.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC194FC.
    case 0xC194FE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C1/C19441.asm:68 BNEL @UNKNOWN0
    case 0xC194FF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C1/C19441.asm:68 BNEL @UNKNOWN0
    case 0xC19501: cpu.execute_instruction<0x4C>(0x009476, 3); return true;
    // src/unknown/C1/C19441.asm:69 LDA #0
    case 0xC19504: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C1/C19441.asm:69 LDA #0
    // Overlapping static entry reached from 0xC19504.
    case 0xC19506: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19441.asm:70 JSR UNKNOWN_C12BD5
    case 0xC19507: cpu.execute_instruction<0x20>(0x002BD5, 3); return true;
    // src/unknown/C1/C19441.asm:71 CMP #0
    case 0xC1950A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C1/C19441.asm:71 CMP #0
    // Overlapping static entry reached from 0xC1950A.
    case 0xC1950C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C19441.asm:72 BEQ @UNKNOWN4
    case 0xC1950D: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C1/C19441.asm:73 LDY #1
    case 0xC1950F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C1/C19441.asm:73 LDY #1
    // Overlapping static entry reached from 0xC1950F.
    case 0xC19511: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C1/C19441.asm:74 LDX #0
    case 0xC19512: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C19441.asm:74 LDX #0
    // Overlapping static entry reached from 0xC19512.
    case 0xC19514: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C1/C19441.asm:75 TYA
    case 0xC19515: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:76 JSR UNKNOWN_C1180D
    case 0xC19516: cpu.execute_instruction<0x20>(0x00180D, 3); return true;
    // src/unknown/C1/C19441.asm:77 LDA #1
    case 0xC19519: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C19441.asm:77 LDA #1
    // Overlapping static entry reached from 0xC19519.
    case 0xC1951B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C19441.asm:78 JSR SELECTION_MENU
    case 0xC1951C: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C19441.asm:79 STA @VIRTUAL02
    case 0xC1951F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C19441.asm:81 JSR CLOSE_FOCUS_WINDOW
    case 0xC19521: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/unknown/C1/C19441.asm:82 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC19524: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C19441.asm:82 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC19524.
    case 0xC19526: cpu.execute_instruction<0x9C>(0x00BC22, 3); return true;
    // src/unknown/C1/C19441.asm:83 JSL UNKNOWN_C20ABC
    case 0xC19527: cpu.execute_instruction<0x22>(0xC20ABC, 4); return true;
    // src/unknown/C1/C19441.asm:83 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC19526.
    case 0xC19529: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19441.asm:83 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC19529.
    case 0xC1952A: cpu.execute_instruction<0xC2>(0x0000A5, 2); return true;
    // src/unknown/C1/C19441.asm:84 LDA @VIRTUAL02
    case 0xC1952B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C19441.asm:84 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1952A.
    case 0xC1952C: cpu.execute_instruction<0x02>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19441.asm:85 END_C_FUNCTION
    case 0xC1952D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19441.asm:85 END_C_FUNCTION
    case 0xC1952E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C1952F.asm (unresolved).
bool execute_unresolved_c1_c1952f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1952F.asm:3 BEGIN_C_FUNCTION
    case 0xC1952F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1952F.asm:9 END_STACK_VARS
    case 0xC19531: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1952F.asm:9 END_STACK_VARS
    case 0xC19532: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1952F.asm:9 END_STACK_VARS
    case 0xC19533: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1952F.asm:9 END_STACK_VARS
    case 0xC19534: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00FFEB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1952F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC19534.
    case 0xC19536: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1952F.asm:9 END_STACK_VARS
    case 0xC19537: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1952F.asm:9 END_STACK_VARS
    case 0xC19538: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:10 TAX
    case 0xC19539: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:11 DEC
    case 0xC1953A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:12 STA @VIRTUAL02
    case 0xC1953B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C1/C1952F.asm:13 JSR SET_INSTANT_PRINTING
    case 0xC1953D: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1952F.asm:14 CREATE_WINDOW_NEAR #WINDOW::STATUS_MENU
    case 0xC19541: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/unknown/C1/C1952F.asm:14 CREATE_WINDOW_NEAR #WINDOW::STATUS_MENU
    // Overlapping static entry reached from 0xC19541.
    case 0xC19543: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/unknown/C1/C1952F.asm:14 CREATE_WINDOW_NEAR #WINDOW::STATUS_MENU
    case 0xC19544: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/unknown/C1/C1952F.asm:15 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC19547: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // src/unknown/C1/C1952F.asm:16 LDA #1
    case 0xC1954B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1952F.asm:16 LDA #1
    // Overlapping static entry reached from 0xC1954B.
    case 0xC1954D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1952F.asm:17 STA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1954E: cpu.execute_instruction<0x8D>(0x005E71, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    case 0xC19551: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B6, 2); else cpu.execute_instruction<0xA9>(0x00A3B6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    // Overlapping static entry reached from 0xC19551.
    case 0xC19553: cpu.execute_instruction<0xA3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1952F.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    case 0xC19554: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1952F.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    // Overlapping static entry reached from 0xC19553.
    case 0xC19555: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    case 0xC19556: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    // Overlapping static entry reached from 0xC19556.
    case 0xC19558: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1952F.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    case 0xC19559: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/unknown/C1/C1952F.asm:18 DISPLAY_TEXT_PTR STATUS_WINDOW_TEXT
    case 0xC1955B: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/unknown/C1/C1952F.asm:19 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1955F: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // src/unknown/C1/C1952F.asm:20 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC19562: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C1/C1952F.asm:21 AND #$00FF
    case 0xC19565: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1952F.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC19565.
    case 0xC19567: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C1/C1952F.asm:22 CMP #1
    case 0xC19568: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1952F.asm:22 CMP #1
    // Overlapping static entry reached from 0xC19568.
    case 0xC1956A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1952F.asm:23 BEQ @UNKNOWN0
    case 0xC1956B: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C1/C1952F.asm:24 LDA #8
    case 0xC1956D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C1952F.asm:24 LDA #8
    // Overlapping static entry reached from 0xC1956D.
    case 0xC1956F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1952F.asm:25 STA PAGINATION_WINDOW
    case 0xC19570: cpu.execute_instruction<0x8D>(0x005E7A, 3); return true;
    // src/unknown/C1/C1952F.asm:27 LDA @VIRTUAL02
    case 0xC19573: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1952F.asm:28 LDY #.SIZEOF(char_struct)
    case 0xC19575: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1952F.asm:28 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19575.
    case 0xC19577: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:29 JSL MULT168
    case 0xC19578: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1952F.asm:30 TAY
    case 0xC1957C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:31 STY @LOCAL02
    case 0xC1957D: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:32 TYA
    case 0xC1957F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:33 CLC
    case 0xC19580: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC19581: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C1/C1952F.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC19581.
    case 0xC19583: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19584: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C1952F.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19586: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C1952F.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19587: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C1952F.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC19589: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1958A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1958C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC1958E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19590: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19592: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19594: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19596: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:38 LDX #.SIZEOF(char_struct::name)
    case 0xC19598: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C1/C1952F.asm:38 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC19598.
    case 0xC1959A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:39 LDA #8
    case 0xC1959B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C1/C1952F.asm:39 LDA #8
    // Overlapping static entry reached from 0xC1959B.
    case 0xC1959D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:40 JSL SET_WINDOW_TITLE
    case 0xC1959E: cpu.execute_instruction<0x22>(0xC2032B, 4); return true;
    // src/unknown/C1/C1952F.asm:41 LDA #1
    case 0xC195A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1952F.asm:41 LDA #1
    // Overlapping static entry reached from 0xC195A2.
    case 0xC195A4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1952F.asm:42 STA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC195A5: cpu.execute_instruction<0x8D>(0x005E71, 3); return true;
    // src/unknown/C1/C1952F.asm:43 JSR UNKNOWN_C10EB4
    case 0xC195A8: cpu.execute_instruction<0x20>(0x000EB4, 3); return true;
    // src/unknown/C1/C1952F.asm:44 LDX #0
    case 0xC195AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1952F.asm:44 LDX #0
    // Overlapping static entry reached from 0xC195AB.
    case 0xC195AD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:45 LDA #38
    case 0xC195AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x000026, 3); return true;
    // src/unknown/C1/C1952F.asm:45 LDA #38
    // Overlapping static entry reached from 0xC195AE.
    case 0xC195B0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:46 JSL UNKNOWN_C43D75
    case 0xC195B1: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:47 LDY @LOCAL02
    case 0xC195B5: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC195B7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:49 LDA PARTY_CHARACTERS+char_struct::level,Y
    case 0xC195B9: cpu.execute_instruction<0xB9>(0x0099D3, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:50 STORE_INT832 @VIRTUAL06
    case 0xC195BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F.asm:50 STORE_INT832 @VIRTUAL06
    case 0xC195BE: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:50 STORE_INT832 @VIRTUAL06
    case 0xC195C0: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F.asm:50 STORE_INT832 @VIRTUAL06
    case 0xC195C2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC195C4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC195C6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC195C8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC195CA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC195CC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:53 JSR PRINT_NUMBER
    case 0xC195CE: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:54 LDA #2
    case 0xC195D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C1/C1952F.asm:54 LDA #2
    // Overlapping static entry reached from 0xC195D1.
    case 0xC195D3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:55 JSR UNKNOWN_C10EB4
    case 0xC195D4: cpu.execute_instruction<0x20>(0x000EB4, 3); return true;
    // src/unknown/C1/C1952F.asm:56 LDX #3
    case 0xC195D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/unknown/C1/C1952F.asm:56 LDX #3
    // Overlapping static entry reached from 0xC195D7.
    case 0xC195D9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:57 LDA #94
    case 0xC195DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005E, 2); else cpu.execute_instruction<0xA9>(0x00005E, 3); return true;
    // src/unknown/C1/C1952F.asm:57 LDA #94
    // Overlapping static entry reached from 0xC195DA.
    case 0xC195DC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:58 JSL UNKNOWN_C43D75
    case 0xC195DD: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:59 LDY @LOCAL02
    case 0xC195E1: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:60 LDA PARTY_CHARACTERS+char_struct::current_hp,Y
    case 0xC195E3: cpu.execute_instruction<0xB9>(0x009A13, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:61 STORE_INT1632 @VIRTUAL06
    case 0xC195E6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:61 STORE_INT1632 @VIRTUAL06
    case 0xC195E8: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC195EA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC195EC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC195EE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC195F0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:63 JSR PRINT_NUMBER
    case 0xC195F2: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:64 LDX #3
    case 0xC195F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/unknown/C1/C1952F.asm:64 LDX #3
    // Overlapping static entry reached from 0xC195F5.
    case 0xC195F7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:65 LDA #114
    case 0xC195F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000072, 2); else cpu.execute_instruction<0xA9>(0x000072, 3); return true;
    // src/unknown/C1/C1952F.asm:65 LDA #114
    // Overlapping static entry reached from 0xC195F8.
    case 0xC195FA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:66 JSL UNKNOWN_C43D75
    case 0xC195FB: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:67 LDA #$5F ;'\'
    case 0xC195FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005F, 2); else cpu.execute_instruction<0xA9>(0x00005F, 3); return true;
    // src/unknown/C1/C1952F.asm:67 LDA #$5F ;'\'
    // Overlapping static entry reached from 0xC195FF.
    case 0xC19601: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:68 JSR PRINT_LETTER
    case 0xC19602: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // src/unknown/C1/C1952F.asm:69 LDX #3
    case 0xC19605: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/unknown/C1/C1952F.asm:69 LDX #3
    // Overlapping static entry reached from 0xC19605.
    case 0xC19607: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:70 LDA #121
    case 0xC19608: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x000079, 3); return true;
    // src/unknown/C1/C1952F.asm:70 LDA #121
    // Overlapping static entry reached from 0xC19608.
    case 0xC1960A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:71 JSL UNKNOWN_C43D75
    case 0xC1960B: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:72 LDY @LOCAL02
    case 0xC1960F: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:73 LDA PARTY_CHARACTERS+char_struct::max_hp,Y
    case 0xC19611: cpu.execute_instruction<0xB9>(0x0099D8, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:74 STORE_INT1632 @VIRTUAL06
    case 0xC19614: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:74 STORE_INT1632 @VIRTUAL06
    case 0xC19616: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19618: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1961A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1961C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1961E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:76 JSR PRINT_NUMBER
    case 0xC19620: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:77 LDX #4
    case 0xC19623: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1952F.asm:77 LDX #4
    // Overlapping static entry reached from 0xC19623.
    case 0xC19625: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:78 LDA #94
    case 0xC19626: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005E, 2); else cpu.execute_instruction<0xA9>(0x00005E, 3); return true;
    // src/unknown/C1/C1952F.asm:78 LDA #94
    // Overlapping static entry reached from 0xC19626.
    case 0xC19628: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:79 JSL UNKNOWN_C43D75
    case 0xC19629: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:80 LDY @LOCAL02
    case 0xC1962D: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:81 LDA PARTY_CHARACTERS+char_struct::current_pp,Y
    case 0xC1962F: cpu.execute_instruction<0xB9>(0x009A19, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:82 STORE_INT1632 @VIRTUAL06
    case 0xC19632: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:82 STORE_INT1632 @VIRTUAL06
    case 0xC19634: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:83 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19636: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:83 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19638: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:83 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1963A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:83 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1963C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:84 JSR PRINT_NUMBER
    case 0xC1963E: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:85 LDX #4
    case 0xC19641: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1952F.asm:85 LDX #4
    // Overlapping static entry reached from 0xC19641.
    case 0xC19643: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:86 LDA #114
    case 0xC19644: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000072, 2); else cpu.execute_instruction<0xA9>(0x000072, 3); return true;
    // src/unknown/C1/C1952F.asm:86 LDA #114
    // Overlapping static entry reached from 0xC19644.
    case 0xC19646: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:87 JSL UNKNOWN_C43D75
    case 0xC19647: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:88 LDA #$5F ;'\'
    case 0xC1964B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005F, 2); else cpu.execute_instruction<0xA9>(0x00005F, 3); return true;
    // src/unknown/C1/C1952F.asm:88 LDA #$5F ;'\'
    // Overlapping static entry reached from 0xC1964B.
    case 0xC1964D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:89 JSR PRINT_LETTER
    case 0xC1964E: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // src/unknown/C1/C1952F.asm:90 LDX #4
    case 0xC19651: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1952F.asm:90 LDX #4
    // Overlapping static entry reached from 0xC19651.
    case 0xC19653: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:91 LDA #121
    case 0xC19654: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x000079, 3); return true;
    // src/unknown/C1/C1952F.asm:91 LDA #121
    // Overlapping static entry reached from 0xC19654.
    case 0xC19656: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:92 JSL UNKNOWN_C43D75
    case 0xC19657: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:93 LDY @LOCAL02
    case 0xC1965B: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:94 LDA PARTY_CHARACTERS+char_struct::max_pp,Y
    case 0xC1965D: cpu.execute_instruction<0xB9>(0x0099DA, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:95 STORE_INT1632 @VIRTUAL06
    case 0xC19660: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:95 STORE_INT1632 @VIRTUAL06
    case 0xC19662: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19664: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19666: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19668: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1966A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:97 JSR PRINT_NUMBER
    case 0xC1966C: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:98 LDX #0
    case 0xC1966F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1952F.asm:98 LDX #0
    // Overlapping static entry reached from 0xC1966F.
    case 0xC19671: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:99 LDA #199
    case 0xC19672: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // src/unknown/C1/C1952F.asm:99 LDA #199
    // Overlapping static entry reached from 0xC19672.
    case 0xC19674: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:100 JSL UNKNOWN_C43D75
    case 0xC19675: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:101 LDY @LOCAL02
    case 0xC19679: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC1967B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:103 LDA PARTY_CHARACTERS+char_struct::offense,Y
    case 0xC1967D: cpu.execute_instruction<0xB9>(0x0099E3, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:104 STORE_INT832 @VIRTUAL06
    case 0xC19680: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F.asm:104 STORE_INT832 @VIRTUAL06
    case 0xC19682: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:104 STORE_INT832 @VIRTUAL06
    case 0xC19684: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F.asm:104 STORE_INT832 @VIRTUAL06
    case 0xC19686: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F.asm:105 REP #PROC_FLAGS::ACCUM8
    case 0xC19688: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:106 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1968A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:106 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1968C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:106 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1968E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:106 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19690: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:107 JSR PRINT_NUMBER
    case 0xC19692: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:108 LDX #1
    case 0xC19695: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1952F.asm:108 LDX #1
    // Overlapping static entry reached from 0xC19695.
    case 0xC19697: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:109 LDA #199
    case 0xC19698: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // src/unknown/C1/C1952F.asm:109 LDA #199
    // Overlapping static entry reached from 0xC19698.
    case 0xC1969A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:110 JSL UNKNOWN_C43D75
    case 0xC1969B: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:111 LDY @LOCAL02
    case 0xC1969F: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:112 SEP #PROC_FLAGS::ACCUM8
    case 0xC196A1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:113 LDA PARTY_CHARACTERS+char_struct::defense,Y
    case 0xC196A3: cpu.execute_instruction<0xB9>(0x0099E4, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:114 STORE_INT832 @VIRTUAL06
    case 0xC196A6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F.asm:114 STORE_INT832 @VIRTUAL06
    case 0xC196A8: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:114 STORE_INT832 @VIRTUAL06
    case 0xC196AA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F.asm:114 STORE_INT832 @VIRTUAL06
    case 0xC196AC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC196AE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:116 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196B0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:116 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196B2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:116 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196B4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:116 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196B6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:117 JSR PRINT_NUMBER
    case 0xC196B8: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:118 LDX #2
    case 0xC196BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C1/C1952F.asm:118 LDX #2
    // Overlapping static entry reached from 0xC196BB.
    case 0xC196BD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:119 LDA #199
    case 0xC196BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // src/unknown/C1/C1952F.asm:119 LDA #199
    // Overlapping static entry reached from 0xC196BE.
    case 0xC196C0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:120 JSL UNKNOWN_C43D75
    case 0xC196C1: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:121 LDY @LOCAL02
    case 0xC196C5: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:122 SEP #PROC_FLAGS::ACCUM8
    case 0xC196C7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:123 LDA PARTY_CHARACTERS+char_struct::speed,Y
    case 0xC196C9: cpu.execute_instruction<0xB9>(0x0099E5, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC196CC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC196CE: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC196D0: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC196D2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F.asm:125 REP #PROC_FLAGS::ACCUM8
    case 0xC196D4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196D6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196D8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196DA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196DC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:127 JSR PRINT_NUMBER
    case 0xC196DE: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:128 LDX #3
    case 0xC196E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/unknown/C1/C1952F.asm:128 LDX #3
    // Overlapping static entry reached from 0xC196E1.
    case 0xC196E3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:129 LDA #199
    case 0xC196E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // src/unknown/C1/C1952F.asm:129 LDA #199
    // Overlapping static entry reached from 0xC196E4.
    case 0xC196E6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:130 JSL UNKNOWN_C43D75
    case 0xC196E7: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:131 LDY @LOCAL02
    case 0xC196EB: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:132 SEP #PROC_FLAGS::ACCUM8
    case 0xC196ED: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:133 LDA PARTY_CHARACTERS+char_struct::guts,Y
    case 0xC196EF: cpu.execute_instruction<0xB9>(0x0099E6, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:134 STORE_INT832 @VIRTUAL06
    case 0xC196F2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F.asm:134 STORE_INT832 @VIRTUAL06
    case 0xC196F4: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:134 STORE_INT832 @VIRTUAL06
    case 0xC196F6: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F.asm:134 STORE_INT832 @VIRTUAL06
    case 0xC196F8: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F.asm:135 REP #PROC_FLAGS::ACCUM8
    case 0xC196FA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:136 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196FC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:136 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC196FE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:136 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19700: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:136 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19702: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:137 JSR PRINT_NUMBER
    case 0xC19704: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:138 LDX #4
    case 0xC19707: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C1/C1952F.asm:138 LDX #4
    // Overlapping static entry reached from 0xC19707.
    case 0xC19709: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:139 LDA #199
    case 0xC1970A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // src/unknown/C1/C1952F.asm:139 LDA #199
    // Overlapping static entry reached from 0xC1970A.
    case 0xC1970C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:140 JSL UNKNOWN_C43D75
    case 0xC1970D: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:141 LDY @LOCAL02
    case 0xC19711: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:142 SEP #PROC_FLAGS::ACCUM8
    case 0xC19713: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:143 LDA PARTY_CHARACTERS+char_struct::vitality,Y
    case 0xC19715: cpu.execute_instruction<0xB9>(0x0099E8, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:144 STORE_INT832 @VIRTUAL06
    case 0xC19718: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F.asm:144 STORE_INT832 @VIRTUAL06
    case 0xC1971A: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:144 STORE_INT832 @VIRTUAL06
    case 0xC1971C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F.asm:144 STORE_INT832 @VIRTUAL06
    case 0xC1971E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F.asm:145 REP #PROC_FLAGS::ACCUM8
    case 0xC19720: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:146 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19722: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:146 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19724: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:146 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19726: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:146 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19728: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:147 JSR PRINT_NUMBER
    case 0xC1972A: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:148 LDX #5
    case 0xC1972D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C1/C1952F.asm:148 LDX #5
    // Overlapping static entry reached from 0xC1972D.
    case 0xC1972F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:149 LDA #199
    case 0xC19730: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // src/unknown/C1/C1952F.asm:149 LDA #199
    // Overlapping static entry reached from 0xC19730.
    case 0xC19732: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:150 JSL UNKNOWN_C43D75
    case 0xC19733: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:151 LDY @LOCAL02
    case 0xC19737: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:152 SEP #PROC_FLAGS::ACCUM8
    case 0xC19739: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:153 LDA PARTY_CHARACTERS+char_struct::iq,Y
    case 0xC1973B: cpu.execute_instruction<0xB9>(0x0099E9, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:154 STORE_INT832 @VIRTUAL06
    case 0xC1973E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F.asm:154 STORE_INT832 @VIRTUAL06
    case 0xC19740: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:154 STORE_INT832 @VIRTUAL06
    case 0xC19742: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F.asm:154 STORE_INT832 @VIRTUAL06
    case 0xC19744: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F.asm:155 REP #PROC_FLAGS::ACCUM8
    case 0xC19746: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:156 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19748: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:156 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1974A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:156 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1974C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:156 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1974E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:157 JSR PRINT_NUMBER
    case 0xC19750: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:158 LDX #6
    case 0xC19753: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C1/C1952F.asm:158 LDX #6
    // Overlapping static entry reached from 0xC19753.
    case 0xC19755: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:159 LDA #199
    case 0xC19756: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // src/unknown/C1/C1952F.asm:159 LDA #199
    // Overlapping static entry reached from 0xC19756.
    case 0xC19758: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:160 JSL UNKNOWN_C43D75
    case 0xC19759: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:161 LDY @LOCAL02
    case 0xC1975D: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:162 SEP #PROC_FLAGS::ACCUM8
    case 0xC1975F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:163 LDA PARTY_CHARACTERS+char_struct::luck,Y
    case 0xC19761: cpu.execute_instruction<0xB9>(0x0099E7, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:164 STORE_INT832 @VIRTUAL06
    case 0xC19764: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C1/C1952F.asm:164 STORE_INT832 @VIRTUAL06
    case 0xC19766: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:164 STORE_INT832 @VIRTUAL06
    case 0xC19768: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C1/C1952F.asm:164 STORE_INT832 @VIRTUAL06
    case 0xC1976A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C1/C1952F.asm:165 REP #PROC_FLAGS::ACCUM8
    case 0xC1976C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:166 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1976E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:166 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19770: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:166 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19772: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:166 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19774: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:167 JSR PRINT_NUMBER
    case 0xC19776: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:168 LDA #6
    case 0xC19779: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C1/C1952F.asm:168 LDA #6
    // Overlapping static entry reached from 0xC19779.
    case 0xC1977B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:169 JSR UNKNOWN_C10EB4
    case 0xC1977C: cpu.execute_instruction<0x20>(0x000EB4, 3); return true;
    // src/unknown/C1/C1952F.asm:170 LDX #5
    case 0xC1977F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C1/C1952F.asm:170 LDX #5
    // Overlapping static entry reached from 0xC1977F.
    case 0xC19781: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:171 LDA #97
    case 0xC19782: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000061, 2); else cpu.execute_instruction<0xA9>(0x000061, 3); return true;
    // src/unknown/C1/C1952F.asm:171 LDA #97
    // Overlapping static entry reached from 0xC19782.
    case 0xC19784: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:172 JSL UNKNOWN_C43D75
    case 0xC19785: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:173 LDY @LOCAL02
    case 0xC19789: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:174 TYA
    case 0xC1978B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:175 CLC
    case 0xC1978C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:176 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    case 0xC1978D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0099D4, 3); return true;
    // src/unknown/C1/C1952F.asm:176 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::exp
    // Overlapping static entry reached from 0xC1978D.
    case 0xC1978F: cpu.execute_instruction<0x99>(0x00B9A8, 3); return true;
    // src/unknown/C1/C1952F.asm:177 TAY
    case 0xC19790: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1952F.asm:178 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC19791: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C1/C1952F.asm:178 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC1978F.
    case 0xC19792: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:178 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC19794: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C1/C1952F.asm:178 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC19796: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:178 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC19799: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1952F.asm:179 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    case 0xC1979B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00967F, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C1/C1952F.asm:179 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1979B.
    case 0xC1979D: cpu.execute_instruction<0x96>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:179 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    case 0xC1979E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:179 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1979D.
    case 0xC1979F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1952F.asm:179 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    case 0xC197A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000098, 2); else cpu.execute_instruction<0xA9>(0x000098, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C1/C1952F.asm:179 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC197A0.
    case 0xC197A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:179 MOVE_INT_CONSTANT EXP_LIMIT, @VIRTUAL0A
    case 0xC197A3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C1/C1952F.asm:180 CLC
    case 0xC197A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:181 LDA @VIRTUAL06
    case 0xC197A6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C1/C1952F.asm:182 SBC @VIRTUAL0A
    case 0xC197A8: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/unknown/C1/C1952F.asm:183 LDA @VIRTUAL06+2
    case 0xC197AA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C1/C1952F.asm:184 SBC @VIRTUAL0A+2
    case 0xC197AC: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C1/C1952F.asm:185 BRANCHLTEQS @UNKNOWN3
    case 0xC197AE: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C1/C1952F.asm:185 BRANCHLTEQS @UNKNOWN3
    case 0xC197B0: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C1/C1952F.asm:185 BRANCHLTEQS @UNKNOWN3
    case 0xC197B2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C1/C1952F.asm:185 BRANCHLTEQS @UNKNOWN3
    case 0xC197B4: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:186 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC197B6: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:186 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC197B8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:186 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC197BA: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:186 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC197BC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:188 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197BE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:188 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197C0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:188 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197C2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:188 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197C4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:189 JSR PRINT_NUMBER
    case 0xC197C6: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:190 LDX #6
    case 0xC197C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C1/C1952F.asm:190 LDX #6
    // Overlapping static entry reached from 0xC197C9.
    case 0xC197CB: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:191 LDA #10
    case 0xC197CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C1/C1952F.asm:191 LDA #10
    // Overlapping static entry reached from 0xC197CC.
    case 0xC197CE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:192 JSL UNKNOWN_C43D75
    case 0xC197CF: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/unknown/C1/C1952F.asm:193 LDA @VIRTUAL02
    case 0xC197D3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1952F.asm:194 INC
    case 0xC197D5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:195 JSL GET_REQUIRED_EXP
    case 0xC197D6: cpu.execute_instruction<0x22>(0xC4599A, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:196 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197DA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:196 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197DC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:196 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197DE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:196 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC197E0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:197 JSR PRINT_NUMBER
    case 0xC197E2: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/unknown/C1/C1952F.asm:198 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC197E5: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // src/unknown/C1/C1952F.asm:199 LDX #0
    case 0xC197E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1952F.asm:199 LDX #0
    // Overlapping static entry reached from 0xC197E8.
    case 0xC197EA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C1/C1952F.asm:200 STX @LOCAL02
    case 0xC197EB: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:201 JMP @UNKNOWN10
    case 0xC197ED: cpu.execute_instruction<0x4C>(0x009882, 3); return true;
    // src/unknown/C1/C1952F.asm:203 STX @VIRTUAL04
    case 0xC197F0: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C1/C1952F.asm:204 LDA @VIRTUAL02
    case 0xC197F2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1952F.asm:205 LDY #.SIZEOF(char_struct)
    case 0xC197F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1952F.asm:205 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC197F4.
    case 0xC197F6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:206 JSL MULT168
    case 0xC197F7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1952F.asm:207 CLC
    case 0xC197FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:208 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC197FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/unknown/C1/C1952F.asm:208 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC197FC.
    case 0xC197FE: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C1/C1952F.asm:209 CLC
    case 0xC197FF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:210 ADC @VIRTUAL04
    case 0xC19800: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C1/C1952F.asm:210 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC197FE.
    case 0xC19801: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C1/C1952F.asm:211 TAX
    case 0xC19802: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:212 SEP #PROC_FLAGS::ACCUM8
    case 0xC19803: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:213 LDA __BSS_START__,X
    case 0xC19805: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C1/C1952F.asm:214 STA @LOCAL01
    case 0xC19808: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C1/C1952F.asm:215 REP #PROC_FLAGS::ACCUM8
    case 0xC1980A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:216 AND #$00FF
    case 0xC1980C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1952F.asm:216 AND #$00FF
    // Overlapping static entry reached from 0xC1980C.
    case 0xC1980E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1952F.asm:217 BEQ @UNKNOWN9
    case 0xC1980F: cpu.execute_instruction<0xF0>(0x00006C, 2); return true;
    // src/unknown/C1/C1952F.asm:218 LDX @LOCAL02
    case 0xC19811: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:219 TXA
    case 0xC19813: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:220 BEQ @UNKNOWN5
    case 0xC19814: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C1/C1952F.asm:221 CMP #1
    case 0xC19816: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C1/C1952F.asm:221 CMP #1
    // Overlapping static entry reached from 0xC19816.
    case 0xC19818: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1952F.asm:222 BEQ @UNKNOWN6
    case 0xC19819: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:223 CMP #5
    case 0xC1981B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C1/C1952F.asm:223 CMP #5
    // Overlapping static entry reached from 0xC1981B.
    case 0xC1981D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1952F.asm:224 BEQ @UNKNOWN7
    case 0xC1981E: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/unknown/C1/C1952F.asm:225 BRA @UNKNOWN11
    case 0xC19820: cpu.execute_instruction<0x80>(0x00006A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:227 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC19822: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x005B70, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:227 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    // Overlapping static entry reached from 0xC19822.
    case 0xC19824: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1952F.asm:227 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC19825: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:227 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC19827: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:227 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    // Overlapping static entry reached from 0xC19827.
    case 0xC19829: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1952F.asm:227 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC1982A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1952F.asm:228 LDA @LOCAL01
    case 0xC1982C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1952F.asm:229 AND #$00FF
    case 0xC1982E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1952F.asm:229 AND #$00FF
    // Overlapping static entry reached from 0xC1982E.
    case 0xC19830: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C1/C1952F.asm:230 DEC
    case 0xC19831: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C1/C1952F.asm:231 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC19832: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C1/C1952F.asm:231 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC19833: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C1/C1952F.asm:231 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC19834: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C1/C1952F.asm:231 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC19835: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:232 CLC
    case 0xC19836: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:233 ADC @VIRTUAL06
    case 0xC19837: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1952F.asm:234 STA @VIRTUAL06
    case 0xC19839: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1952F.asm:235 BRA @UNKNOWN8
    case 0xC1983B: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:237 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC1983D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x005B70, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:237 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    // Overlapping static entry reached from 0xC1983D.
    case 0xC1983F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1952F.asm:237 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC19840: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:237 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC19842: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:237 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    // Overlapping static entry reached from 0xC19842.
    case 0xC19844: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1952F.asm:237 LOADPTR STATUS_EQUIP_WINDOW_TEXT_5, @VIRTUAL06
    case 0xC19845: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1952F.asm:238 LDA @LOCAL01
    case 0xC19847: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C1/C1952F.asm:239 AND #$00FF
    case 0xC19849: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C1/C1952F.asm:239 AND #$00FF
    // Overlapping static entry reached from 0xC19849.
    case 0xC1984B: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C1/C1952F.asm:240 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC1984C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C1/C1952F.asm:240 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC1984D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C1/C1952F.asm:240 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC1984E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C1/C1952F.asm:240 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC1984F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:241 CLC
    case 0xC19850: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:242 ADC #96
    case 0xC19851: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x000060, 3); return true;
    // src/unknown/C1/C1952F.asm:242 ADC #96
    // Overlapping static entry reached from 0xC19851.
    case 0xC19853: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C1/C1952F.asm:243 CLC
    case 0xC19854: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:244 ADC @VIRTUAL06
    case 0xC19855: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C1/C1952F.asm:245 STA @VIRTUAL06
    case 0xC19857: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C1/C1952F.asm:246 BRA @UNKNOWN8
    case 0xC19859: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:248 LOADPTR STATUS_EQUIP_WINDOW_TEXT_6, @VIRTUAL06
    case 0xC1985B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005C00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:248 LOADPTR STATUS_EQUIP_WINDOW_TEXT_6, @VIRTUAL06
    // Overlapping static entry reached from 0xC1985B.
    case 0xC1985D: cpu.execute_instruction<0x5C>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1952F.asm:248 LOADPTR STATUS_EQUIP_WINDOW_TEXT_6, @VIRTUAL06
    case 0xC1985E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:248 LOADPTR STATUS_EQUIP_WINDOW_TEXT_6, @VIRTUAL06
    case 0xC19860: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:248 LOADPTR STATUS_EQUIP_WINDOW_TEXT_6, @VIRTUAL06
    // Overlapping static entry reached from 0xC19860.
    case 0xC19862: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1952F.asm:248 LOADPTR STATUS_EQUIP_WINDOW_TEXT_6, @VIRTUAL06
    case 0xC19863: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C1/C1952F.asm:250 LDX #1
    case 0xC19865: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1952F.asm:250 LDX #1
    // Overlapping static entry reached from 0xC19865.
    case 0xC19867: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C1/C1952F.asm:251 TXA
    case 0xC19868: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:252 JSR UNKNOWN_C438A5
    case 0xC19869: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1952F.asm:253 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1986D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1952F.asm:253 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1986F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1952F.asm:253 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19871: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1952F.asm:253 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC19873: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:254 LDA #256
    case 0xC19875: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/unknown/C1/C1952F.asm:254 LDA #256
    // Overlapping static entry reached from 0xC19875.
    case 0xC19877: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:255 JSR PRINT_STRING
    case 0xC19878: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C1952F.asm:255 JSR PRINT_STRING
    // Overlapping static entry reached from 0xC19877.
    case 0xC19879: cpu.execute_instruction<0xFC>(0x00800E, 3); return true;
    // src/unknown/C1/C1952F.asm:256 BRA @UNKNOWN11
    case 0xC1987B: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C1/C1952F.asm:256 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xC19879.
    case 0xC1987C: cpu.execute_instruction<0x0F>(0xE813A6, 4); return true;
    // src/unknown/C1/C1952F.asm:258 LDX @LOCAL02
    case 0xC1987D: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:259 INX
    case 0xC1987F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:260 STX @LOCAL02
    case 0xC19880: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/unknown/C1/C1952F.asm:262 CPX #7
    case 0xC19882: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/unknown/C1/C1952F.asm:262 CPX #7
    // Overlapping static entry reached from 0xC19882.
    case 0xC19884: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C1/C1952F.asm:263 BCCL @UNKNOWN4
    case 0xC19885: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C1/C1952F.asm:263 BCCL @UNKNOWN4
    case 0xC19887: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C1/C1952F.asm:263 BCCL @UNKNOWN4
    case 0xC19889: cpu.execute_instruction<0x4C>(0x0097F0, 3); return true;
    // src/unknown/C1/C1952F.asm:265 LDX #1
    case 0xC1988C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C1/C1952F.asm:265 LDX #1
    // Overlapping static entry reached from 0xC1988C.
    case 0xC1988E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:266 LDA #11
    case 0xC1988F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/unknown/C1/C1952F.asm:266 LDA #11
    // Overlapping static entry reached from 0xC1988F.
    case 0xC19891: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:267 JSR UNKNOWN_C438A5
    case 0xC19892: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/unknown/C1/C1952F.asm:268 LDX #0
    case 0xC19896: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C1/C1952F.asm:268 LDX #0
    // Overlapping static entry reached from 0xC19896.
    case 0xC19898: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C1/C1952F.asm:269 LDA @VIRTUAL02
    case 0xC19899: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1952F.asm:270 LDY #.SIZEOF(char_struct)
    case 0xC1989B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C1/C1952F.asm:270 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1989B.
    case 0xC1989D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:271 JSL MULT168
    case 0xC1989E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C1/C1952F.asm:272 CLC
    case 0xC198A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:273 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC198A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/unknown/C1/C1952F.asm:273 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC198A3.
    case 0xC198A5: cpu.execute_instruction<0x99>(0x00D922, 3); return true;
    // src/unknown/C1/C1952F.asm:274 JSL UNKNOWN_C223D9
    case 0xC198A6: cpu.execute_instruction<0x22>(0xC223D9, 4); return true;
    // src/unknown/C1/C1952F.asm:274 JSL UNKNOWN_C223D9
    // Overlapping static entry reached from 0xC198A5.
    case 0xC198A8: cpu.execute_instruction<0x23>(0x0000C2, 2); return true;
    // src/unknown/C1/C1952F.asm:275 JSL UNKNOWN_C43F77
    case 0xC198AA: cpu.execute_instruction<0x22>(0xC43F77, 4); return true;
    // src/unknown/C1/C1952F.asm:276 LDA @VIRTUAL02
    case 0xC198AE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C1/C1952F.asm:277 CMP #2
    case 0xC198B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C1/C1952F.asm:277 CMP #2
    // Overlapping static entry reached from 0xC198B0.
    case 0xC198B2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C1/C1952F.asm:278 BEQ @UNKNOWN12
    case 0xC198B3: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/C1/C1952F.asm:279 LDA #1
    case 0xC198B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C1/C1952F.asm:279 LDA #1
    // Overlapping static entry reached from 0xC198B5.
    case 0xC198B7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C1/C1952F.asm:280 STA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC198B8: cpu.execute_instruction<0x8D>(0x005E71, 3); return true;
    // src/unknown/C1/C1952F.asm:281 LDX #7
    case 0xC198BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000007, 2); else cpu.execute_instruction<0xA2>(0x000007, 3); return true;
    // src/unknown/C1/C1952F.asm:281 LDX #7
    // Overlapping static entry reached from 0xC198BB.
    case 0xC198BD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C1/C1952F.asm:282 LDA #36
    case 0xC198BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/unknown/C1/C1952F.asm:282 LDA #36
    // Overlapping static entry reached from 0xC198BE.
    case 0xC198C0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C1/C1952F.asm:283 JSL UNKNOWN_C43D75
    case 0xC198C1: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:284 LOADPTR STATUS_EQUIP_WINDOW_TEXT_4, @LOCAL00
    case 0xC198C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004D, 2); else cpu.execute_instruction<0xA9>(0x005B4D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:284 LOADPTR STATUS_EQUIP_WINDOW_TEXT_4, @LOCAL00
    // Overlapping static entry reached from 0xC198C5.
    case 0xC198C7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C1952F.asm:284 LOADPTR STATUS_EQUIP_WINDOW_TEXT_4, @LOCAL00
    case 0xC198C8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:284 LOADPTR STATUS_EQUIP_WINDOW_TEXT_4, @LOCAL00
    case 0xC198CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C1952F.asm:284 LOADPTR STATUS_EQUIP_WINDOW_TEXT_4, @LOCAL00
    // Overlapping static entry reached from 0xC198CA.
    case 0xC198CC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C1952F.asm:284 LOADPTR STATUS_EQUIP_WINDOW_TEXT_4, @LOCAL00
    case 0xC198CD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C1/C1952F.asm:285 LDA #35
    case 0xC198CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x000023, 3); return true;
    // src/unknown/C1/C1952F.asm:285 LDA #35
    // Overlapping static entry reached from 0xC198CF.
    case 0xC198D1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C1/C1952F.asm:286 JSR PRINT_STRING
    case 0xC198D2: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/unknown/C1/C1952F.asm:287 STZ FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC198D5: cpu.execute_instruction<0x9C>(0x005E71, 3); return true;
    // src/unknown/C1/C1952F.asm:289 JSL CLEAR_INSTANT_PRINTING
    case 0xC198D8: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/unknown/C1/C1952F.asm:290 PLD
    case 0xC198DC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C1/C1952F.asm:291 RTL
    case 0xC198DD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C1/C19A11.asm (unresolved).
bool execute_unresolved_c1_c19a11_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C19A11.asm:3 BEGIN_C_FUNCTION
    case 0xC19A11: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    case 0xC19A13: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    case 0xC19A14: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    case 0xC19A15: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    case 0xC19A16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC19A16.
    case 0xC19A18: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    case 0xC19A19: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C19A11.asm:10 END_STACK_VARS
    case 0xC19A1A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:11 TXY
    case 0xC19A1B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:12 STY @LOCAL01
    case 0xC19A1C: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C1/C19A11.asm:13 TAX
    case 0xC19A1E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:14 STX @LOCAL00
    case 0xC19A1F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C19A11.asm:15 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC19A21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C19A11.asm:15 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC19A21.
    case 0xC19A23: cpu.execute_instruction<0x9C>(0x002022, 3); return true;
    // src/unknown/C1/C19A11.asm:16 JSL UNKNOWN_C20A20
    case 0xC19A24: cpu.execute_instruction<0x22>(0xC20A20, 4); return true;
    // src/unknown/C1/C19A11.asm:16 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC19A23.
    case 0xC19A26: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:16 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC19A26.
    case 0xC19A27: cpu.execute_instruction<0xC2>(0x0000A6, 2); return true;
    // src/unknown/C1/C19A11.asm:17 LDX @LOCAL00
    case 0xC19A28: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C19A11.asm:17 LDX @LOCAL00
    // Overlapping static entry reached from 0xC19A27.
    case 0xC19A29: cpu.execute_instruction<0x0E>(0x00208A, 3); return true;
    // src/unknown/C1/C19A11.asm:18 TXA
    case 0xC19A2A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:19 JSR SET_WINDOW_FOCUS
    case 0xC19A2B: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/unknown/C1/C19A11.asm:19 JSR SET_WINDOW_FOCUS
    // Overlapping static entry reached from 0xC19A29.
    case 0xC19A2C: cpu.execute_instruction<0x7E>(0x00A400, 3); return true;
    // src/unknown/C1/C19A11.asm:20 LDY @LOCAL01
    case 0xC19A2E: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C1/C19A11.asm:20 LDY @LOCAL01
    // Overlapping static entry reached from 0xC19A2C.
    case 0xC19A2F: cpu.execute_instruction<0x10>(0x000098, 2); return true;
    // src/unknown/C1/C19A11.asm:21 TYA
    case 0xC19A30: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:22 JSR SELECTION_MENU
    case 0xC19A31: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/unknown/C1/C19A11.asm:23 TAX
    case 0xC19A34: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:24 STX @LOCAL00
    case 0xC19A35: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C1/C19A11.asm:25 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC19A37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/unknown/C1/C19A11.asm:25 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC19A37.
    case 0xC19A39: cpu.execute_instruction<0x9C>(0x00BC22, 3); return true;
    // src/unknown/C1/C19A11.asm:26 JSL UNKNOWN_C20ABC
    case 0xC19A3A: cpu.execute_instruction<0x22>(0xC20ABC, 4); return true;
    // src/unknown/C1/C19A11.asm:26 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC19A39.
    case 0xC19A3C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C1/C19A11.asm:26 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC19A3C.
    case 0xC19A3D: cpu.execute_instruction<0xC2>(0x0000A6, 2); return true;
    // src/unknown/C1/C19A11.asm:27 LDX @LOCAL00
    case 0xC19A3E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C1/C19A11.asm:27 LDX @LOCAL00
    // Overlapping static entry reached from 0xC19A3D.
    case 0xC19A3F: cpu.execute_instruction<0x0E>(0x002B8A, 3); return true;
    // src/unknown/C1/C19A11.asm:28 TXA
    case 0xC19A40: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C19A11.asm:29 END_C_FUNCTION
    case 0xC19A41: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C19A11.asm:29 END_C_FUNCTION
    case 0xC19A42: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
