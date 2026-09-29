// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/EF/EF00BB.asm (unresolved).
bool execute_unresolved_ef_ef00bb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF00BB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF00BB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF00BB.asm:7 END_STACK_VARS
    case 0xEF00BD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EF00BB.asm:7 END_STACK_VARS
    case 0xEF00BE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF00BB.asm:7 END_STACK_VARS
    case 0xEF00BF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF00BB.asm:7 END_STACK_VARS
    case 0xEF00C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF00BB.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEF00C0.
    case 0xEF00C2: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF00BB.asm:7 END_STACK_VARS
    case 0xEF00C3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EF00BB.asm:7 END_STACK_VARS
    case 0xEF00C4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF00BB.asm:8 STA @LOCAL00
    case 0xEF00C5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF00BB.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xEF00C2.
    case 0xEF00C6: cpu.execute_instruction<0x0E>(0x00B9A8, 3); return true;
    // src/unknown/EF/EF00BB.asm:9 TAY
    case 0xEF00C7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EF00BB.asm:10 LDA __BSS_START__,Y
    case 0xEF00C8: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/EF/EF00BB.asm:10 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xEF00C6.
    case 0xEF00C9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF00BB.asm:11 AND #$03FF
    case 0xEF00CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/EF/EF00BB.asm:11 AND #$03FF
    // Overlapping static entry reached from 0xEF00CB.
    case 0xEF00CD: cpu.execute_instruction<0x03>(0x000099, 2); return true;
    // src/unknown/EF/EF00BB.asm:12 STA __BSS_START__,Y
    case 0xEF00CE: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/EF/EF00BB.asm:12 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xEF00CD.
    case 0xEF00CF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF00BB.asm:13 TXA
    case 0xEF00D1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF00BB.asm:14 ASL
    case 0xEF00D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF00BB.asm:15 STA @VIRTUAL02
    case 0xEF00D3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF00BB.asm:16 LDA @LOCAL00
    case 0xEF00D5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EF00BB.asm:17 CLC
    case 0xEF00D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF00BB.asm:18 ADC @VIRTUAL02
    case 0xEF00D8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EF00BB.asm:19 TAX
    case 0xEF00DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF00BB.asm:20 LDA __BSS_START__,X
    case 0xEF00DB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF00BB.asm:21 AND #$03FF
    case 0xEF00DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/EF/EF00BB.asm:21 AND #$03FF
    // Overlapping static entry reached from 0xEF00DE.
    case 0xEF00E0: cpu.execute_instruction<0x03>(0x00009D, 2); return true;
    // src/unknown/EF/EF00BB.asm:22 STA __BSS_START__,X
    case 0xEF00E1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF00BB.asm:22 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEF00E0.
    case 0xEF00E2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF00BB.asm:23 END_C_FUNCTION
    case 0xEF00E4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF00BB.asm:23 END_C_FUNCTION
    case 0xEF00E5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF00E6.asm (unresolved).
bool execute_unresolved_ef_ef00e6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF00E6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF00E6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF00E6.asm:8 END_STACK_VARS
    case 0xEF00E8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EF00E6.asm:8 END_STACK_VARS
    case 0xEF00E9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF00E6.asm:8 END_STACK_VARS
    case 0xEF00EA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF00E6.asm:8 END_STACK_VARS
    case 0xEF00EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF00E6.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEF00EB.
    case 0xEF00ED: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF00E6.asm:8 END_STACK_VARS
    case 0xEF00EE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EF00E6.asm:8 END_STACK_VARS
    case 0xEF00EF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:9 STY @VIRTUAL02
    case 0xEF00F0: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EF00E6.asm:9 STY @VIRTUAL02
    // Overlapping static entry reached from 0xEF00ED.
    case 0xEF00F1: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/EF/EF00E6.asm:10 TXY
    case 0xEF00F2: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:11 TAX
    case 0xEF00F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:12 LDA __BSS_START__,X
    case 0xEF00F4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF00E6.asm:13 AND #$03FF
    case 0xEF00F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/EF/EF00E6.asm:13 AND #$03FF
    // Overlapping static entry reached from 0xEF00F7.
    case 0xEF00F9: cpu.execute_instruction<0x03>(0x000005, 2); return true;
    // src/unknown/EF/EF00E6.asm:14 ORA @VIRTUAL02
    case 0xEF00FA: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/EF/EF00E6.asm:14 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xEF00F9.
    case 0xEF00FB: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/unknown/EF/EF00E6.asm:15 STA __BSS_START__,X
    case 0xEF00FC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF00E6.asm:16 TYA
    case 0xEF00FF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:17 ASL
    case 0xEF0100: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:18 STA @VIRTUAL04
    case 0xEF0101: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF00E6.asm:19 TXA
    case 0xEF0103: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:20 CLC
    case 0xEF0104: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:21 ADC @VIRTUAL04
    case 0xEF0105: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/EF/EF00E6.asm:22 TAX
    case 0xEF0107: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF00E6.asm:23 LDA __BSS_START__,X
    case 0xEF0108: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF00E6.asm:24 AND #$03FF
    case 0xEF010B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/unknown/EF/EF00E6.asm:24 AND #$03FF
    // Overlapping static entry reached from 0xEF010B.
    case 0xEF010D: cpu.execute_instruction<0x03>(0x000005, 2); return true;
    // src/unknown/EF/EF00E6.asm:25 ORA @VIRTUAL02
    case 0xEF010E: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/EF/EF00E6.asm:25 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xEF010D.
    case 0xEF010F: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/unknown/EF/EF00E6.asm:26 STA __BSS_START__,X
    case 0xEF0110: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF00E6.asm:27 END_C_FUNCTION
    case 0xEF0113: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF00E6.asm:27 END_C_FUNCTION
    case 0xEF0114: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0115.asm (unresolved).
bool execute_unresolved_ef_ef0115_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0115.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0115: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0115.asm:8 END_STACK_VARS
    case 0xEF0117: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EF0115.asm:8 END_STACK_VARS
    case 0xEF0118: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0115.asm:8 END_STACK_VARS
    case 0xEF0119: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0115.asm:8 END_STACK_VARS
    case 0xEF011A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0115.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEF011A.
    case 0xEF011C: cpu.execute_instruction<0xFF>(0x0A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0115.asm:8 END_STACK_VARS
    case 0xEF011D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EF0115.asm:8 END_STACK_VARS
    case 0xEF011E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:9 ASL
    case 0xEF011F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:10 TAX
    case 0xEF0120: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:11 LDA OPEN_WINDOW_TABLE,X
    case 0xEF0121: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/EF/EF0115.asm:12 LDY #.SIZEOF(window_stats)
    case 0xEF0124: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/EF/EF0115.asm:12 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xEF0124.
    case 0xEF0126: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0115.asm:13 JSL MULT168
    case 0xEF0127: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/EF/EF0115.asm:14 CLC
    case 0xEF012B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:15 ADC #.LOWORD(WINDOW_STATS)
    case 0xEF012C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/EF/EF0115.asm:15 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xEF012C.
    case 0xEF012E: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0115.asm:16 TAX
    case 0xEF012F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:17 LDY a:window_stats::tilemap_address,X
    case 0xEF0130: cpu.execute_instruction<0xBC>(0x000035, 3); return true;
    // src/unknown/EF/EF0115.asm:18 STY @LOCAL01
    case 0xEF0133: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/EF/EF0115.asm:19 LDY a:window_stats::height,X
    case 0xEF0135: cpu.execute_instruction<0xBC>(0x00000C, 3); return true;
    // src/unknown/EF/EF0115.asm:20 LDA a:window_stats::width,X
    case 0xEF0138: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/EF/EF0115.asm:21 JSL MULT16
    case 0xEF013B: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/EF/EF0115.asm:22 TAX
    case 0xEF013F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:23 STX @LOCAL00
    case 0xEF0140: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EF0115.asm:24 BRA @UNKNOWN2
    case 0xEF0142: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/EF/EF0115.asm:26 LDY @LOCAL01
    case 0xEF0144: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/EF/EF0115.asm:27 LDA __BSS_START__,Y
    case 0xEF0146: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/EF/EF0115.asm:28 BEQ @UNKNOWN1
    case 0xEF0149: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EF0115.asm:29 JSL FREE_TILE_SAFE
    case 0xEF014B: cpu.execute_instruction<0x22>(0xC44E4D, 4); return true;
    // src/unknown/EF/EF0115.asm:31 LDA #64
    case 0xEF014F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EF0115.asm:31 LDA #64
    // Overlapping static entry reached from 0xEF014F.
    case 0xEF0151: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/EF/EF0115.asm:32 LDY @LOCAL01
    case 0xEF0152: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/EF/EF0115.asm:33 STA __BSS_START__,Y
    case 0xEF0154: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/EF/EF0115.asm:34 INY
    case 0xEF0157: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:35 INY
    case 0xEF0158: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:36 STY @LOCAL01
    case 0xEF0159: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/EF/EF0115.asm:37 LDX @LOCAL00
    case 0xEF015B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/EF/EF0115.asm:38 DEX
    case 0xEF015D: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/EF/EF0115.asm:39 STX @LOCAL00
    case 0xEF015E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EF0115.asm:41 BNE @UNKNOWN0
    case 0xEF0160: cpu.execute_instruction<0xD0>(0x0000E2, 2); return true;
    // src/unknown/EF/EF0115.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0162: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EF0115.asm:43 LDA #1
    case 0xEF0164: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/EF/EF0115.asm:44 STA REDRAW_ALL_WINDOWS
    case 0xEF0166: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/unknown/EF/EF0115.asm:44 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xEF0164.
    case 0xEF0167: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/unknown/EF/EF0115.asm:45 JSL UNKNOWN_C07C5B
    case 0xEF0169: cpu.execute_instruction<0x22>(0xC07C5B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0115.asm:46 END_C_FUNCTION
    case 0xEF016D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0115.asm:46 END_C_FUNCTION
    case 0xEF016E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF016F.asm (unresolved).
bool execute_unresolved_ef_ef016f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF016F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF016F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF016F.asm:8 END_STACK_VARS
    case 0xEF0171: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF016F.asm:8 END_STACK_VARS
    case 0xEF0172: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF016F.asm:8 END_STACK_VARS
    case 0xEF0173: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF016F.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0173.
    case 0xEF0175: cpu.execute_instruction<0xFF>(0x58AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF016F.asm:8 END_STACK_VARS
    case 0xEF0176: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:9 LDA CURRENT_FOCUS_WINDOW
    case 0xEF0177: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/EF/EF016F.asm:9 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xEF0175.
    case 0xEF0179: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/unknown/EF/EF016F.asm:10 ASL
    case 0xEF017A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:11 TAX
    case 0xEF017B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:12 LDA OPEN_WINDOW_TABLE,X
    case 0xEF017C: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/EF/EF016F.asm:13 LDY #.SIZEOF(window_stats)
    case 0xEF017F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/EF/EF016F.asm:13 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xEF017F.
    case 0xEF0181: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF016F.asm:14 JSL MULT168
    case 0xEF0182: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/EF/EF016F.asm:15 CLC
    case 0xEF0186: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:16 ADC #.LOWORD(WINDOW_STATS)
    case 0xEF0187: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/EF/EF016F.asm:16 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xEF0187.
    case 0xEF0189: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/unknown/EF/EF016F.asm:17 STA @LOCAL02
    case 0xEF018A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF016F.asm:17 STA @LOCAL02
    // Overlapping static entry reached from 0xEF0189.
    case 0xEF018B: cpu.execute_instruction<0x12>(0x000018, 2); return true;
    // src/unknown/EF/EF016F.asm:18 CLC
    case 0xEF018C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:19 ADC #window_stats::current_option
    case 0xEF018D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002B, 2); else cpu.execute_instruction<0x69>(0x00002B, 3); return true;
    // src/unknown/EF/EF016F.asm:19 ADC #window_stats::current_option
    // Overlapping static entry reached from 0xEF018D.
    case 0xEF018F: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/EF/EF016F.asm:20 TAY
    case 0xEF0190: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:21 STY @LOCAL01
    case 0xEF0191: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/EF/EF016F.asm:22 LDA @LOCAL02
    case 0xEF0193: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF016F.asm:23 CLC
    case 0xEF0195: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:24 ADC #window_stats::selected_option
    case 0xEF0196: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002F, 2); else cpu.execute_instruction<0x69>(0x00002F, 3); return true;
    // src/unknown/EF/EF016F.asm:24 ADC #window_stats::selected_option
    // Overlapping static entry reached from 0xEF0196.
    case 0xEF0198: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF016F.asm:25 STA @LOCAL00
    case 0xEF0199: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF016F.asm:26 TAX
    case 0xEF019B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:27 LDA __BSS_START__,X
    case 0xEF019C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF016F.asm:28 STA @VIRTUAL02
    case 0xEF019F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF016F.asm:29 LDA __BSS_START__,Y
    case 0xEF01A1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/EF/EF016F.asm:30 CLC
    case 0xEF01A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:31 ADC @VIRTUAL02
    case 0xEF01A5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EF016F.asm:32 LDY #.SIZEOF(menu_option)
    case 0xEF01A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // src/unknown/EF/EF016F.asm:32 LDY #.SIZEOF(menu_option)
    // Overlapping static entry reached from 0xEF01A7.
    case 0xEF01A9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF016F.asm:33 JSL MULT168
    case 0xEF01AA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/EF/EF016F.asm:34 CLC
    case 0xEF01AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:35 ADC #.LOWORD(MENU_OPTIONS)
    case 0xEF01AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/EF/EF016F.asm:35 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xEF01AF.
    case 0xEF01B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x00BDAA, 3); return true;
    // src/unknown/EF/EF016F.asm:36 TAX
    case 0xEF01B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:37 LDA a:menu_option::text_x,X
    case 0xEF01B3: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/unknown/EF/EF016F.asm:37 LDA a:menu_option::text_x,X
    // Overlapping static entry reached from 0xEF01B1.
    case 0xEF01B4: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:37 LDA a:menu_option::text_x,X
    // Overlapping static entry reached from 0xEF01B4.
    case 0xEF01B5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF016F.asm:38 STA MENU_BACKUP_SELECTED_TEXT_X
    case 0xEF01B6: cpu.execute_instruction<0x8D>(0x009684, 3); return true;
    // src/unknown/EF/EF016F.asm:39 LDA a:menu_option::text_y,X
    case 0xEF01B9: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/EF/EF016F.asm:40 STA MENU_BACKUP_SELECTED_TEXT_Y
    case 0xEF01BC: cpu.execute_instruction<0x8D>(0x009686, 3); return true;
    // src/unknown/EF/EF016F.asm:41 LDY @LOCAL01
    case 0xEF01BF: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/EF/EF016F.asm:42 LDA __BSS_START__,Y
    case 0xEF01C1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/EF/EF016F.asm:43 STA MENU_BACKUP_CURRENT_OPTION
    case 0xEF01C4: cpu.execute_instruction<0x8D>(0x009688, 3); return true;
    // src/unknown/EF/EF016F.asm:44 LDA @LOCAL00
    case 0xEF01C7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EF016F.asm:45 TAX
    case 0xEF01C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF016F.asm:46 LDA __BSS_START__,X
    case 0xEF01CA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF016F.asm:47 STA MENU_BACKUP_SELECTED_OPTION
    case 0xEF01CD: cpu.execute_instruction<0x8D>(0x00968A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF016F.asm:48 END_C_FUNCTION
    case 0xEF01D0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF016F.asm:48 END_C_FUNCTION
    case 0xEF01D1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF01D2.asm (unresolved).
bool execute_unresolved_ef_ef01d2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF01D2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF01D2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF01D2.asm:7 END_STACK_VARS
    case 0xEF01D4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EF01D2.asm:7 END_STACK_VARS
    case 0xEF01D5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF01D2.asm:7 END_STACK_VARS
    case 0xEF01D6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF01D2.asm:7 END_STACK_VARS
    case 0xEF01D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF01D2.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEF01D7.
    case 0xEF01D9: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF01D2.asm:7 END_STACK_VARS
    case 0xEF01DA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EF01D2.asm:7 END_STACK_VARS
    case 0xEF01DB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:8 STA @LOCAL00
    case 0xEF01DC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF01D2.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xEF01D9.
    case 0xEF01DD: cpu.execute_instruction<0x0E>(0x0058AD, 3); return true;
    // src/unknown/EF/EF01D2.asm:9 LDA CURRENT_FOCUS_WINDOW
    case 0xEF01DE: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/unknown/EF/EF01D2.asm:9 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xEF01DD.
    case 0xEF01E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/unknown/EF/EF01D2.asm:10 ASL
    case 0xEF01E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:11 TAX
    case 0xEF01E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:12 LDA OPEN_WINDOW_TABLE,X
    case 0xEF01E3: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/EF/EF01D2.asm:13 LDY #.SIZEOF(window_stats)
    case 0xEF01E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/EF/EF01D2.asm:13 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xEF01E6.
    case 0xEF01E8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF01D2.asm:14 JSL MULT168
    case 0xEF01E9: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/EF/EF01D2.asm:15 CLC
    case 0xEF01ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:16 ADC #.LOWORD(WINDOW_STATS)
    case 0xEF01EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/EF/EF01D2.asm:16 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xEF01EE.
    case 0xEF01F0: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/unknown/EF/EF01D2.asm:17 TAX
    case 0xEF01F1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:18 LDA @LOCAL00
    case 0xEF01F2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EF01D2.asm:19 SEC
    case 0xEF01F4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:20 SBC #$50
    case 0xEF01F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/unknown/EF/EF01D2.asm:20 SBC #$50
    // Overlapping static entry reached from 0xEF01F5.
    case 0xEF01F7: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/EF/EF01D2.asm:21 AND #$007F
    case 0xEF01F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/EF/EF01D2.asm:21 AND #$007F
    // Overlapping static entry reached from 0xEF01F8.
    case 0xEF01FA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF01D2.asm:22 STA @LOCAL00
    case 0xEF01FB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF01D2.asm:23 LDA CHARACTER_PADDING
    case 0xEF01FD: cpu.execute_instruction<0xAD>(0x005E6D, 3); return true;
    // src/unknown/EF/EF01D2.asm:24 AND #$00FF
    case 0xEF0200: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF01D2.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xEF0200.
    case 0xEF0202: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF01D2.asm:25 STA @VIRTUAL02
    case 0xEF0203: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EF01D2.asm:26 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xEF0205: cpu.execute_instruction<0xAF>(0xC3F054, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EF01D2.asm:26 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xEF0209: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EF01D2.asm:26 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xEF020B: cpu.execute_instruction<0xAF>(0xC3F056, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EF01D2.asm:26 MOVE_INT FONT_PTR_TABLE, @VIRTUAL06
    case 0xEF020F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EF01D2.asm:27 LDA @LOCAL00
    case 0xEF0211: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EF01D2.asm:28 CLC
    case 0xEF0213: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:29 ADC @VIRTUAL06
    case 0xEF0214: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EF01D2.asm:30 STA @VIRTUAL06
    case 0xEF0216: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF01D2.asm:31 LDA [@VIRTUAL06]
    case 0xEF0218: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EF01D2.asm:32 AND #$00FF
    case 0xEF021A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF01D2.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xEF021A.
    case 0xEF021C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EF01D2.asm:33 CLC
    case 0xEF021D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:34 ADC @VIRTUAL02
    case 0xEF021E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EF01D2.asm:35 STA @LOCAL00
    case 0xEF0220: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF01D2.asm:36 LDA VWF_X
    case 0xEF0222: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/EF/EF01D2.asm:37 AND #$0007
    case 0xEF0225: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/EF/EF01D2.asm:37 AND #$0007
    // Overlapping static entry reached from 0xEF0225.
    case 0xEF0227: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF01D2.asm:38 STA @VIRTUAL04
    case 0xEF0228: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF01D2.asm:39 LDA a:window_stats::text_x,X
    case 0xEF022A: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/EF/EF01D2.asm:40 DEC
    case 0xEF022D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:41 ASL
    case 0xEF022E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:42 ASL
    case 0xEF022F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:43 ASL
    case 0xEF0230: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:44 CLC
    case 0xEF0231: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:45 ADC @VIRTUAL04
    case 0xEF0232: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/EF/EF01D2.asm:46 STA @VIRTUAL02
    case 0xEF0234: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF01D2.asm:47 LDA @LOCAL00
    case 0xEF0236: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EF01D2.asm:48 CLC
    case 0xEF0238: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:49 ADC @VIRTUAL02
    case 0xEF0239: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EF01D2.asm:50 STA @VIRTUAL02
    case 0xEF023B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF01D2.asm:51 LDA a:window_stats::width,X
    case 0xEF023D: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/unknown/EF/EF01D2.asm:52 ASL
    case 0xEF0240: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:53 ASL
    case 0xEF0241: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:54 ASL
    case 0xEF0242: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF01D2.asm:55 CMP @VIRTUAL02
    case 0xEF0243: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/EF/EF01D2.asm:56 BCS @UNKNOWN0
    case 0xEF0245: cpu.execute_instruction<0xB0>(0x00000B, 2); return true;
    // src/unknown/EF/EF01D2.asm:57 JSL REDIRECT_PRINT_NEWLINE
    case 0xEF0247: cpu.execute_instruction<0x22>(0xC10C79, 4); return true;
    // src/unknown/EF/EF01D2.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xEF024B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EF01D2.asm:59 LDA #1
    case 0xEF024D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/EF/EF01D2.asm:60 STA VWF_INDENT_NEW_LINE
    case 0xEF024F: cpu.execute_instruction<0x8D>(0x005E75, 3); return true;
    // src/unknown/EF/EF01D2.asm:60 STA VWF_INDENT_NEW_LINE
    // Overlapping static entry reached from 0xEF024D.
    case 0xEF0250: cpu.execute_instruction<0x75>(0x00005E, 2); return true;
    // src/unknown/EF/EF01D2.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xEF0252: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF01D2.asm:63 END_C_FUNCTION
    case 0xEF0254: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF01D2.asm:63 END_C_FUNCTION
    case 0xEF0255: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0262.asm (unresolved).
bool execute_unresolved_ef_ef0262_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0262.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0262: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0262.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0264: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EF0262.asm:6 LDA #1
    case 0xEF0266: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/EF/EF0262.asm:7 STA HALF_HPPP_METER_SPEED
    case 0xEF0268: cpu.execute_instruction<0x8D>(0x009695, 3); return true;
    // src/unknown/EF/EF0262.asm:7 STA HALF_HPPP_METER_SPEED
    // Overlapping static entry reached from 0xEF0266.
    case 0xEF0269: cpu.execute_instruction<0x95>(0x000096, 2); return true;
    // src/unknown/EF/EF0262.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xEF026B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0262.asm:9 END_C_FUNCTION
    case 0xEF026D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF027D.asm (unresolved).
bool execute_unresolved_ef_ef027d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF027D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF027D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF027D.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xEF02CF.
    case 0xEF027E: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF027D.asm:5 END_STACK_VARS
    case 0xEF027F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF027D.asm:5 END_STACK_VARS
    case 0xEF0280: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF027D.asm:5 END_STACK_VARS
    case 0xEF0281: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF027D.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0281.
    case 0xEF0283: cpu.execute_instruction<0xFF>(0x339C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF027D.asm:5 END_STACK_VARS
    case 0xEF0284: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:6 STZ BUBBLE_MONKEY_MODE
    case 0xEF0285: cpu.execute_instruction<0x9C>(0x009F33, 3); return true;
    // src/unknown/EF/EF027D.asm:6 STZ BUBBLE_MONKEY_MODE
    // Overlapping static entry reached from 0xEF0283.
    case 0xEF0287: cpu.execute_instruction<0x9F>(0x001EA9, 4); return true;
    // src/unknown/EF/EF027D.asm:7 LDA #30
    case 0xEF0288: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/unknown/EF/EF027D.asm:7 LDA #30
    // Overlapping static entry reached from 0xEF0288.
    case 0xEF028A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF027D.asm:8 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xEF028B: cpu.execute_instruction<0x8D>(0x009F35, 3); return true;
    // src/unknown/EF/EF027D.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xEF028E: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF027D.asm:10 ASL
    case 0xEF0291: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:11 TAX
    case 0xEF0292: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:12 LDA #4
    case 0xEF0293: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EF027D.asm:12 LDA #4
    // Overlapping static entry reached from 0xEF0293.
    case 0xEF0295: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EF027D.asm:13 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xEF0296: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/EF/EF027D.asm:14 LDA CURRENT_ENTITY_SLOT
    case 0xEF0299: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF027D.asm:15 ASL
    case 0xEF029C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:16 TAX
    case 0xEF029D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:17 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xEF029E: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/EF/EF027D.asm:18 ASL
    case 0xEF02A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:19 TAX
    case 0xEF02A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:20 LDA CHOSEN_FOUR_PTRS,X
    case 0xEF02A3: cpu.execute_instruction<0xBD>(0x004DC8, 3); return true;
    // src/unknown/EF/EF027D.asm:21 TAX
    case 0xEF02A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:22 LDA a:char_struct::position_index,X
    case 0xEF02A7: cpu.execute_instruction<0xBD>(0x00003D, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/EF/EF027D.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xEF02AA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/EF/EF027D.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xEF02AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/EF/EF027D.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xEF02AD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/EF/EF027D.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xEF02AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/EF/EF027D.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xEF02B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:24 CLC
    case 0xEF02B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:25 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xEF02B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/unknown/EF/EF027D.asm:25 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xEF02B2.
    case 0xEF02B4: cpu.execute_instruction<0x51>(0x0000AA, 2); return true;
    // src/unknown/EF/EF027D.asm:26 TAX
    case 0xEF02B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:27 LDA GAME_STATE+game_state::leader_x_coord
    case 0xEF02B6: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/EF/EF027D.asm:28 STA a:player_position_buffer_entry::x_coord,X
    case 0xEF02B9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF027D.asm:29 LDA GAME_STATE+game_state::leader_y_coord
    case 0xEF02BC: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/EF/EF027D.asm:30 STA a:player_position_buffer_entry::y_coord,X
    case 0xEF02BF: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF027D.asm:31 END_C_FUNCTION
    case 0xEF02C2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF027D.asm:31 END_C_FUNCTION
    case 0xEF02C3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF02C4.asm (unresolved).
bool execute_unresolved_ef_ef02c4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF02C4.asm:3 BEGIN_C_FUNCTION
    case 0xEF02C4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    case 0xEF02C6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    case 0xEF02C7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    case 0xEF02C8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    case 0xEF02C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEF02C9.
    case 0xEF02CB: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    case 0xEF02CC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    case 0xEF02CD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:9 STA @LOCAL01
    case 0xEF02CE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EF02C4.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xEF02CB.
    case 0xEF02CF: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/EF/EF02C4.asm:10 LDA BUBBLE_MONKEY_MODE
    case 0xEF02D0: cpu.execute_instruction<0xAD>(0x009F33, 3); return true;
    // src/unknown/EF/EF02C4.asm:10 LDA BUBBLE_MONKEY_MODE
    // Overlapping static entry reached from 0xEF02CF.
    case 0xEF02D1: cpu.execute_instruction<0x33>(0x00009F, 2); return true;
    // src/unknown/EF/EF02C4.asm:11 CMP #3
    case 0xEF02D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF02C4.asm:11 CMP #3
    // Overlapping static entry reached from 0xEF02D3.
    case 0xEF02D5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF02C4.asm:12 BEQ @UNKNOWN0
    case 0xEF02D6: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EF02C4.asm:13 LDA BUBBLE_MONKEY_MODE
    case 0xEF02D8: cpu.execute_instruction<0xAD>(0x009F33, 3); return true;
    // src/unknown/EF/EF02C4.asm:14 CMP #1
    case 0xEF02DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EF02C4.asm:14 CMP #1
    // Overlapping static entry reached from 0xEF02DB.
    case 0xEF02DD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF02C4.asm:15 BNE @UNKNOWN1
    case 0xEF02DE: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/EF/EF02C4.asm:17 LDA #2
    case 0xEF02E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF02C4.asm:17 LDA #2
    // Overlapping static entry reached from 0xEF02E0.
    case 0xEF02E2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF02C4.asm:18 STA BUBBLE_MONKEY_MODE
    case 0xEF02E3: cpu.execute_instruction<0x8D>(0x009F33, 3); return true;
    // src/unknown/EF/EF02C4.asm:19 BRA @UNKNOWN3
    case 0xEF02E6: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/EF/EF02C4.asm:21 LDA @LOCAL01
    case 0xEF02E8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/EF/EF02C4.asm:22 JSL UNKNOWN_C03E9D
    case 0xEF02EA: cpu.execute_instruction<0x22>(0xC03E9D, 4); return true;
    // src/unknown/EF/EF02C4.asm:23 CMP #40
    case 0xEF02EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000028, 2); else cpu.execute_instruction<0xC9>(0x000028, 3); return true;
    // src/unknown/EF/EF02C4.asm:23 CMP #40
    // Overlapping static entry reached from 0xEF02EE.
    case 0xEF02F0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/EF/EF02C4.asm:24 BLTEQ @UNKNOWN2
    case 0xEF02F1: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/EF/EF02C4.asm:24 BLTEQ @UNKNOWN2
    case 0xEF02F3: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EF02C4.asm:25 LDA #2
    case 0xEF02F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF02C4.asm:25 LDA #2
    // Overlapping static entry reached from 0xEF02F5.
    case 0xEF02F7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF02C4.asm:26 STA BUBBLE_MONKEY_MODE
    case 0xEF02F8: cpu.execute_instruction<0x8D>(0x009F33, 3); return true;
    // src/unknown/EF/EF02C4.asm:27 BRA @UNKNOWN3
    case 0xEF02FB: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/EF/EF02C4.asm:29 JSL RAND
    case 0xEF02FD: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/EF/EF02C4.asm:30 AND #$0003
    case 0xEF0301: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF02C4.asm:30 AND #$0003
    // Overlapping static entry reached from 0xEF0301.
    case 0xEF0303: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF02C4.asm:31 TAX
    case 0xEF0304: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:32 STX @LOCAL00
    case 0xEF0305: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EF02C4.asm:33 STX BUBBLE_MONKEY_MODE
    case 0xEF0307: cpu.execute_instruction<0x8E>(0x009F33, 3); return true;
    // src/unknown/EF/EF02C4.asm:35 LDX @LOCAL00
    case 0xEF030A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/EF/EF02C4.asm:36 TXA
    case 0xEF030C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:37 AND #$0003
    case 0xEF030D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF02C4.asm:37 AND #$0003
    // Overlapping static entry reached from 0xEF030D.
    case 0xEF030F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/EF/EF02C4.asm:38 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xEF0310: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/EF/EF02C4.asm:38 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xEF0312: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/EF/EF02C4.asm:38 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xEF0313: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/EF/EF02C4.asm:39 INC
    case 0xEF0315: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:40 INC
    case 0xEF0316: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:41 INC
    case 0xEF0317: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:42 INC
    case 0xEF0318: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:43 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xEF0319: cpu.execute_instruction<0x8D>(0x009F35, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF02C4.asm:44 END_C_FUNCTION
    case 0xEF031C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EF02C4.asm:44 END_C_FUNCTION
    case 0xEF031D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF031E.asm (unresolved).
bool execute_unresolved_ef_ef031e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF031E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF031E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF031E.asm:11 END_STACK_VARS
    case 0xEF0320: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF031E.asm:11 END_STACK_VARS
    case 0xEF0321: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF031E.asm:11 END_STACK_VARS
    case 0xEF0322: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF031E.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0322.
    case 0xEF0324: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF031E.asm:11 END_STACK_VARS
    case 0xEF0325: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xEF0326: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF031E.asm:12 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xEF0324.
    case 0xEF0328: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:13 STA @LOCAL05
    case 0xEF0329: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:14 ASL
    case 0xEF032B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:15 TAX
    case 0xEF032C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:16 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xEF032D: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/EF/EF031E.asm:17 LDY #.SIZEOF(char_struct)
    case 0xEF0330: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/EF/EF031E.asm:17 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xEF0330.
    case 0xEF0332: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF031E.asm:18 JSL MULT168
    case 0xEF0333: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/EF/EF031E.asm:19 CLC
    case 0xEF0337: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:20 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xEF0338: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/EF/EF031E.asm:20 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xEF0338.
    case 0xEF033A: cpu.execute_instruction<0x99>(0x008CA8, 3); return true;
    // src/unknown/EF/EF031E.asm:21 TAY
    case 0xEF033B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:22 STY CURRENT_PARTY_MEMBER_TICK
    case 0xEF033C: cpu.execute_instruction<0x8C>(0x004DC6, 3); return true;
    // src/unknown/EF/EF031E.asm:22 STY CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xEF033A.
    case 0xEF033D: cpu.execute_instruction<0xC6>(0x00004D, 2); return true;
    // src/unknown/EF/EF031E.asm:23 LDA a:char_struct::position_index,Y
    case 0xEF033F: cpu.execute_instruction<0xB9>(0x00003D, 3); return true;
    // src/unknown/EF/EF031E.asm:24 STA @VIRTUAL02
    case 0xEF0342: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:25 STA @VIRTUAL04
    case 0xEF0344: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF031E.asm:26 STA @LOCAL04
    case 0xEF0346: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:27 LDA @VIRTUAL02
    case 0xEF0348: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/EF/EF031E.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xEF034A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/EF/EF031E.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xEF034C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/EF/EF031E.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xEF034D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/EF/EF031E.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xEF034F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/EF/EF031E.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xEF0350: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:29 CLC
    case 0xEF0351: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:30 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xEF0352: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/unknown/EF/EF031E.asm:30 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xEF0352.
    case 0xEF0354: cpu.execute_instruction<0x51>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:31 STA @LOCAL03
    case 0xEF0355: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:31 STA @LOCAL03
    // Overlapping static entry reached from 0xEF0354.
    case 0xEF0356: cpu.execute_instruction<0x14>(0x0000BD, 2); return true;
    // src/unknown/EF/EF031E.asm:32 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xEF0357: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/EF/EF031E.asm:32 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    // Overlapping static entry reached from 0xEF0356.
    case 0xEF0358: cpu.execute_instruction<0x5E>(0x00850E, 3); return true;
    // src/unknown/EF/EF031E.asm:33 STA @LOCAL02
    case 0xEF035A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:33 STA @LOCAL02
    // Overlapping static entry reached from 0xEF0358.
    case 0xEF035B: cpu.execute_instruction<0x12>(0x0000B2, 2); return true;
    // src/unknown/EF/EF031E.asm:34 LDA (@LOCAL03) ;player_position_buffer_entry::x_coord
    case 0xEF035C: cpu.execute_instruction<0xB2>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:34 LDA (@LOCAL03) ;player_position_buffer_entry::x_coord
    // Overlapping static entry reached from 0xEF035B.
    case 0xEF035D: cpu.execute_instruction<0x14>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:35 STA ENTITY_ABS_X_TABLE,X
    case 0xEF035E: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/EF/EF031E.asm:35 STA ENTITY_ABS_X_TABLE,X
    // Overlapping static entry reached from 0xEF035D.
    case 0xEF035F: cpu.execute_instruction<0x8E>(0x00A00B, 3); return true;
    // src/unknown/EF/EF031E.asm:36 LDY #player_position_buffer_entry::y_coord
    case 0xEF0361: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:36 LDY #player_position_buffer_entry::y_coord
    // Overlapping static entry reached from 0xEF035F.
    case 0xEF0362: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:36 LDY #player_position_buffer_entry::y_coord
    // Overlapping static entry reached from 0xEF0361.
    case 0xEF0363: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:37 LDA (@LOCAL03),Y
    case 0xEF0364: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:38 STA ENTITY_ABS_Y_TABLE,X
    case 0xEF0366: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/EF/EF031E.asm:39 LDY #player_position_buffer_entry::walking_style
    case 0xEF0369: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/EF/EF031E.asm:39 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xEF0369.
    case 0xEF036B: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:40 LDA (@LOCAL03),Y
    case 0xEF036C: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:41 BEQ @UNKNOWN0
    case 0xEF036E: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/unknown/EF/EF031E.asm:42 LDY CURRENT_ENTITY_SLOT
    case 0xEF0370: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/EF/EF031E.asm:43 TAX
    case 0xEF0373: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:44 LDA @LOCAL02
    case 0xEF0374: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:45 JSL UNKNOWN_C07A56
    case 0xEF0376: cpu.execute_instruction<0x22>(0xC07A56, 4); return true;
    // src/unknown/EF/EF031E.asm:46 LDA #2
    case 0xEF037A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:46 LDA #2
    // Overlapping static entry reached from 0xEF037A.
    case 0xEF037C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:47 STA @LOCAL00
    case 0xEF037D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF031E.asm:48 LDY @VIRTUAL02
    case 0xEF037F: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:49 LDX #30
    case 0xEF0381: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001E, 2); else cpu.execute_instruction<0xA2>(0x00001E, 3); return true;
    // src/unknown/EF/EF031E.asm:49 LDX #30
    // Overlapping static entry reached from 0xEF0381.
    case 0xEF0383: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF031E.asm:50 LDA @LOCAL02
    case 0xEF0384: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:51 JSL UNKNOWN_C03EC3
    case 0xEF0386: cpu.execute_instruction<0x22>(0xC03EC3, 4); return true;
    // src/unknown/EF/EF031E.asm:52 AND #$00FF
    case 0xEF038A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF031E.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xEF038A.
    case 0xEF038C: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/EF/EF031E.asm:53 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xEF038D: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/EF/EF031E.asm:54 STA a:char_struct::position_index,X
    case 0xEF0390: cpu.execute_instruction<0x9D>(0x00003D, 3); return true;
    // src/unknown/EF/EF031E.asm:55 JMP @UNKNOWN14
    case 0xEF0393: cpu.execute_instruction<0x4C>(0x0004DA, 3); return true;
    // src/unknown/EF/EF031E.asm:57 LDA BUBBLE_MONKEY_MODE
    case 0xEF0396: cpu.execute_instruction<0xAD>(0x009F33, 3); return true;
    // src/unknown/EF/EF031E.asm:58 BEQ @UNKNOWN3
    case 0xEF0399: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:59 CMP #2
    case 0xEF039B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:59 CMP #2
    // Overlapping static entry reached from 0xEF039B.
    case 0xEF039D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF031E.asm:60 BEQ @UNKNOWN3
    case 0xEF039E: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/EF/EF031E.asm:61 CMP #1
    case 0xEF03A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EF031E.asm:61 CMP #1
    // Overlapping static entry reached from 0xEF03A0.
    case 0xEF03A2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EF031E.asm:62 BEQL @UNKNOWN8
    case 0xEF03A3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EF031E.asm:62 BEQL @UNKNOWN8
    case 0xEF03A5: cpu.execute_instruction<0x4C>(0x000426, 3); return true;
    // src/unknown/EF/EF031E.asm:63 CMP #3
    case 0xEF03A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF031E.asm:63 CMP #3
    // Overlapping static entry reached from 0xEF03A8.
    case 0xEF03AA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EF031E.asm:64 BEQL @UNKNOWN9
    case 0xEF03AB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EF031E.asm:64 BEQL @UNKNOWN9
    case 0xEF03AD: cpu.execute_instruction<0x4C>(0x000437, 3); return true;
    // src/unknown/EF/EF031E.asm:65 JMP @UNKNOWN11
    case 0xEF03B0: cpu.execute_instruction<0x4C>(0x00048E, 3); return true;
    // src/unknown/EF/EF031E.asm:67 LDA #2
    case 0xEF03B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:67 LDA #2
    // Overlapping static entry reached from 0xEF03B3.
    case 0xEF03B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:68 STA @LOCAL00
    case 0xEF03B6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF031E.asm:69 LDY @VIRTUAL02
    case 0xEF03B8: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:70 LDX #12
    case 0xEF03BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/unknown/EF/EF031E.asm:70 LDX #12
    // Overlapping static entry reached from 0xEF03BA.
    case 0xEF03BC: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF031E.asm:71 LDA @LOCAL02
    case 0xEF03BD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:72 JSL UNKNOWN_C03EC3
    case 0xEF03BF: cpu.execute_instruction<0x22>(0xC03EC3, 4); return true;
    // src/unknown/EF/EF031E.asm:73 STA @VIRTUAL02
    case 0xEF03C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:74 AND #$00FF
    case 0xEF03C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF031E.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xEF03C5.
    case 0xEF03C7: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/EF/EF031E.asm:75 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xEF03C8: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/unknown/EF/EF031E.asm:76 STA a:char_struct::position_index,X
    case 0xEF03CB: cpu.execute_instruction<0x9D>(0x00003D, 3); return true;
    // src/unknown/EF/EF031E.asm:77 LDA @LOCAL04
    case 0xEF03CE: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:78 STA @VIRTUAL04
    case 0xEF03D0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF031E.asm:79 CMP @VIRTUAL02
    case 0xEF03D2: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:80 BEQ @UNKNOWN4
    case 0xEF03D4: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EF031E.asm:81 LDA @VIRTUAL04
    case 0xEF03D6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF031E.asm:82 INC
    case 0xEF03D8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:83 CMP @VIRTUAL02
    case 0xEF03D9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:84 BNE @UNKNOWN6
    case 0xEF03DB: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/unknown/EF/EF031E.asm:86 LDY CURRENT_ENTITY_SLOT
    case 0xEF03DD: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/EF/EF031E.asm:87 STY @LOCAL01
    case 0xEF03E0: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/EF/EF031E.asm:87 STY @LOCAL01
    // Overlapping static entry reached from 0xEF0442.
    case 0xEF03E1: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/unknown/EF/EF031E.asm:88 LDY #player_position_buffer_entry::walking_style
    case 0xEF03E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/EF/EF031E.asm:88 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xEF03E1.
    case 0xEF03E3: cpu.execute_instruction<0x06>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:88 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xEF03E2.
    case 0xEF03E4: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:89 LDA (@LOCAL03),Y
    case 0xEF03E5: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:90 TAX
    case 0xEF03E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:91 LDA @LOCAL02
    case 0xEF03E8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:92 LDY @LOCAL01
    case 0xEF03EA: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/EF/EF031E.asm:93 JSL UNKNOWN_C07A56
    case 0xEF03EC: cpu.execute_instruction<0x22>(0xC07A56, 4); return true;
    // src/unknown/EF/EF031E.asm:94 LDA GAME_STATE + game_state::unknown90
    case 0xEF03F0: cpu.execute_instruction<0xAD>(0x009885, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EF031E.asm:95 BEQL @UNKNOWN11
    case 0xEF03F3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EF031E.asm:95 BEQL @UNKNOWN11
    case 0xEF03F5: cpu.execute_instruction<0x4C>(0x00048E, 3); return true;
    // src/unknown/EF/EF031E.asm:96 BRA @UNKNOWN7
    case 0xEF03F8: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/EF/EF031E.asm:98 LDY CURRENT_ENTITY_SLOT
    case 0xEF03FA: cpu.execute_instruction<0xAC>(0x001A42, 3); return true;
    // src/unknown/EF/EF031E.asm:99 LDX #14
    case 0xEF03FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000E, 2); else cpu.execute_instruction<0xA2>(0x00000E, 3); return true;
    // src/unknown/EF/EF031E.asm:99 LDX #14
    // Overlapping static entry reached from 0xEF03FD.
    case 0xEF03FF: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF031E.asm:100 LDA @LOCAL02
    case 0xEF0400: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:101 JSL UNKNOWN_C07A56
    case 0xEF0402: cpu.execute_instruction<0x22>(0xC07A56, 4); return true;
    // src/unknown/EF/EF031E.asm:103 LDA @LOCAL05
    case 0xEF0406: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:104 ASL
    case 0xEF0408: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:105 STA @LOCAL04
    case 0xEF0409: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:106 TAX
    case 0xEF040B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:107 LDY #player_position_buffer_entry::direction
    case 0xEF040C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/EF/EF031E.asm:107 LDY #player_position_buffer_entry::direction
    // Overlapping static entry reached from 0xEF040C.
    case 0xEF040E: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:108 LDA (@LOCAL03),Y
    case 0xEF040F: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:109 STA ENTITY_DIRECTIONS,X
    case 0xEF0411: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/EF/EF031E.asm:110 LDA @LOCAL04
    case 0xEF0414: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:111 CLC
    case 0xEF0416: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:112 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xEF0417: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/unknown/EF/EF031E.asm:112 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xEF0417.
    case 0xEF0419: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EF031E.asm:113 TAX
    case 0xEF041A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:114 LDA __BSS_START__,X
    case 0xEF041B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:115 AND #$1FFF
    case 0xEF041E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x001FFF, 3); return true;
    // src/unknown/EF/EF031E.asm:115 AND #$1FFF
    // Overlapping static entry reached from 0xEF041E.
    case 0xEF0420: cpu.execute_instruction<0x1F>(0x00009D, 4); return true;
    // src/unknown/EF/EF031E.asm:116 STA __BSS_START__,X
    case 0xEF0421: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:117 BRA @UNKNOWN11
    case 0xEF0424: cpu.execute_instruction<0x80>(0x000068, 2); return true;
    // src/unknown/EF/EF031E.asm:119 TXA
    case 0xEF0426: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:120 CLC
    case 0xEF0427: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:121 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xEF0428: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/unknown/EF/EF031E.asm:121 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xEF0428.
    case 0xEF042A: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EF031E.asm:122 TAX
    case 0xEF042B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:123 LDA __BSS_START__,X
    case 0xEF042C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:124 ORA #$7000
    case 0xEF042F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x007000, 3); return true;
    // src/unknown/EF/EF031E.asm:124 ORA #$7000
    // Overlapping static entry reached from 0xEF042F.
    case 0xEF0431: cpu.execute_instruction<0x70>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:125 STA __BSS_START__,X
    case 0xEF0432: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:125 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEF0431.
    case 0xEF0433: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:126 BRA @UNKNOWN11
    case 0xEF0435: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/unknown/EF/EF031E.asm:128 TXA
    case 0xEF0437: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:129 CLC
    case 0xEF0438: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:130 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xEF0439: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/unknown/EF/EF031E.asm:130 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xEF0439.
    case 0xEF043B: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EF031E.asm:131 TAX
    case 0xEF043C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:132 LDA __BSS_START__,X
    case 0xEF043D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:133 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13 | SPRITE_TABLE_10_FLAGS::UNKNOWN12
    case 0xEF0440: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x007000, 3); return true;
    // src/unknown/EF/EF031E.asm:133 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13 | SPRITE_TABLE_10_FLAGS::UNKNOWN12
    // Overlapping static entry reached from 0xEF0440.
    case 0xEF0442: cpu.execute_instruction<0x70>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:134 STA __BSS_START__,X
    case 0xEF0443: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:134 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEF0442.
    case 0xEF0444: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:135 LDX #.LOWORD(BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME)
    case 0xEF0446: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003B, 2); else cpu.execute_instruction<0xA2>(0x009F3B, 3); return true;
    // src/unknown/EF/EF031E.asm:135 LDX #.LOWORD(BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME)
    // Overlapping static entry reached from 0xEF0446.
    case 0xEF0448: cpu.execute_instruction<0x9F>(0x0000BD, 4); return true;
    // src/unknown/EF/EF031E.asm:136 LDA __BSS_START__,X
    case 0xEF0449: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:137 DEC
    case 0xEF044C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:138 STA __BSS_START__,X
    case 0xEF044D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:139 BNE @UNKNOWN11
    case 0xEF0450: cpu.execute_instruction<0xD0>(0x00003C, 2); return true;
    // src/unknown/EF/EF031E.asm:140 LDY #.LOWORD(BUBBLE_MONKEY_DISTRACTED_DIRECTION_CHANGES_LEFT)
    case 0xEF0452: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003D, 2); else cpu.execute_instruction<0xA0>(0x009F3D, 3); return true;
    // src/unknown/EF/EF031E.asm:140 LDY #.LOWORD(BUBBLE_MONKEY_DISTRACTED_DIRECTION_CHANGES_LEFT)
    // Overlapping static entry reached from 0xEF0452.
    case 0xEF0454: cpu.execute_instruction<0x9F>(0x0000B9, 4); return true;
    // src/unknown/EF/EF031E.asm:141 LDA __BSS_START__,Y
    case 0xEF0455: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:142 DEC
    case 0xEF0458: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:143 STA __BSS_START__,Y
    case 0xEF0459: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:144 BNE @UNKNOWN10
    case 0xEF045C: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/EF/EF031E.asm:145 LDA #15
    case 0xEF045E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/unknown/EF/EF031E.asm:145 LDA #15
    // Overlapping static entry reached from 0xEF045E.
    case 0xEF0460: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:146 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xEF0461: cpu.execute_instruction<0x8D>(0x009F35, 3); return true;
    // src/unknown/EF/EF031E.asm:147 LDA #.LOWORD(-1)
    case 0xEF0464: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF031E.asm:147 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF0464.
    case 0xEF0466: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/EF/EF031E.asm:148 STA __BSS_START__,X
    case 0xEF0467: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:150 JSL RAND
    case 0xEF046A: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/EF/EF031E.asm:151 ASL
    case 0xEF046E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:152 ASL
    case 0xEF046F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:153 AND #$000F
    case 0xEF0470: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/EF/EF031E.asm:153 AND #$000F
    // Overlapping static entry reached from 0xEF0470.
    case 0xEF0472: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/EF/EF031E.asm:154 INC
    case 0xEF0473: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:155 INC
    case 0xEF0474: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:156 INC
    case 0xEF0475: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:157 INC
    case 0xEF0476: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:158 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME
    case 0xEF0477: cpu.execute_instruction<0x8D>(0x009F3B, 3); return true;
    // src/unknown/EF/EF031E.asm:159 LDA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION
    case 0xEF047A: cpu.execute_instruction<0xAD>(0x009F39, 3); return true;
    // src/unknown/EF/EF031E.asm:160 EOR #$0004
    case 0xEF047D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000004, 2); else cpu.execute_instruction<0x49>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:160 EOR #$0004
    // Overlapping static entry reached from 0xEF047D.
    case 0xEF047F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:161 STA @LOCAL04
    case 0xEF0480: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:162 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION
    case 0xEF0482: cpu.execute_instruction<0x8D>(0x009F39, 3); return true;
    // src/unknown/EF/EF031E.asm:163 LDA @LOCAL05
    case 0xEF0485: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:164 ASL
    case 0xEF0487: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:165 TAX
    case 0xEF0488: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:166 LDA @LOCAL04
    case 0xEF0489: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:167 STA ENTITY_DIRECTIONS,X
    case 0xEF048B: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/EF/EF031E.asm:169 LDA @LOCAL05
    case 0xEF048E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:170 ASL
    case 0xEF0490: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:171 TAX
    case 0xEF0491: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:172 LDA #4
    case 0xEF0492: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:172 LDA #4
    // Overlapping static entry reached from 0xEF0492.
    case 0xEF0494: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:173 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xEF0495: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/EF/EF031E.asm:174 LDX BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xEF0498: cpu.execute_instruction<0xAE>(0x009F35, 3); return true;
    // src/unknown/EF/EF031E.asm:175 DEX
    case 0xEF049B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:176 STX BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xEF049C: cpu.execute_instruction<0x8E>(0x009F35, 3); return true;
    // src/unknown/EF/EF031E.asm:177 BNE @UNKNOWN13
    case 0xEF049F: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // src/unknown/EF/EF031E.asm:178 LDA @LOCAL02
    case 0xEF04A1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:179 JSR UNKNOWN_EF02C4
    case 0xEF04A3: cpu.execute_instruction<0x20>(0x0002C4, 3); return true;
    // src/unknown/EF/EF031E.asm:180 LDA BUBBLE_MONKEY_MODE
    case 0xEF04A6: cpu.execute_instruction<0xAD>(0x009F33, 3); return true;
    // src/unknown/EF/EF031E.asm:181 CMP #3
    case 0xEF04A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF031E.asm:181 CMP #3
    // Overlapping static entry reached from 0xEF04A9.
    case 0xEF04AB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF031E.asm:182 BNE @UNKNOWN12
    case 0xEF04AC: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/EF/EF031E.asm:183 LDA #4
    case 0xEF04AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:183 LDA #4
    // Overlapping static entry reached from 0xEF04AE.
    case 0xEF04B0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:184 STA BUBBLE_MONKEY_DISTRACTED_DIRECTION_CHANGES_LEFT
    case 0xEF04B1: cpu.execute_instruction<0x8D>(0x009F3D, 3); return true;
    // src/unknown/EF/EF031E.asm:185 LDA #6
    case 0xEF04B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/EF/EF031E.asm:185 LDA #6
    // Overlapping static entry reached from 0xEF04B4.
    case 0xEF04B6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:186 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION
    case 0xEF04B7: cpu.execute_instruction<0x8D>(0x009F39, 3); return true;
    // src/unknown/EF/EF031E.asm:187 LDA #15
    case 0xEF04BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/unknown/EF/EF031E.asm:187 LDA #15
    // Overlapping static entry reached from 0xEF04BA.
    case 0xEF04BC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:188 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME
    case 0xEF04BD: cpu.execute_instruction<0x8D>(0x009F3B, 3); return true;
    // src/unknown/EF/EF031E.asm:189 LDA #.LOWORD(-1)
    case 0xEF04C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF031E.asm:189 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF04C0.
    case 0xEF04C2: cpu.execute_instruction<0xFF>(0x9F358D, 4); return true;
    // src/unknown/EF/EF031E.asm:190 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xEF04C3: cpu.execute_instruction<0x8D>(0x009F35, 3); return true;
    // src/unknown/EF/EF031E.asm:191 BRA @UNKNOWN13
    case 0xEF04C6: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/EF/EF031E.asm:193 LDA #60
    case 0xEF04C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/EF/EF031E.asm:193 LDA #60
    // Overlapping static entry reached from 0xEF04C8.
    case 0xEF04CA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:194 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xEF04CB: cpu.execute_instruction<0x8D>(0x009F35, 3); return true;
    // src/unknown/EF/EF031E.asm:196 LDA @LOCAL05
    case 0xEF04CE: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:197 ASL
    case 0xEF04D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:198 TAX
    case 0xEF04D1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:199 LDY #player_position_buffer_entry::tile_flags
    case 0xEF04D2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:199 LDY #player_position_buffer_entry::tile_flags
    // Overlapping static entry reached from 0xEF04D2.
    case 0xEF04D4: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:200 LDA (@LOCAL03),Y
    case 0xEF04D5: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:201 STA ENTITY_SURFACE_FLAGS,X
    case 0xEF04D7: cpu.execute_instruction<0x9D>(0x002BAA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF031E.asm:203 END_C_FUNCTION
    case 0xEF04DA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF031E.asm:203 END_C_FUNCTION
    case 0xEF04DB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF04DC.asm (unresolved).
bool execute_unresolved_ef_ef04dc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF04DC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF04DC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF04DC.asm:7 END_STACK_VARS
    case 0xEF04DE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF04DC.asm:7 END_STACK_VARS
    case 0xEF04DF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF04DC.asm:7 END_STACK_VARS
    case 0xEF04E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF04DC.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEF04E0.
    case 0xEF04E2: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF04DC.asm:7 END_STACK_VARS
    case 0xEF04E3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF04DC.asm:8 LDA #0
    case 0xEF04E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EF04DC.asm:8 LDA #0
    // Overlapping static entry reached from 0xEF04E4.
    case 0xEF04E6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF04DC.asm:9 STA @VIRTUAL04
    case 0xEF04E7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF04DC.asm:10 JSL UNKNOWN_C08726
    case 0xEF04E9: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/unknown/EF/EF04DC.asm:11 JSL UNKNOWN_C0927C
    case 0xEF04ED: cpu.execute_instruction<0x22>(0xC0927C, 4); return true;
    // src/unknown/EF/EF04DC.asm:12 JSL UNKNOWN_C0EBE0
    case 0xEF04F1: cpu.execute_instruction<0x22>(0xC0EBE0, 4); return true;
    // src/unknown/EF/EF04DC.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xEF04F5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EF04DC.asm:14 LDA #$11
    case 0xEF04F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008D11, 3); return true;
    // src/unknown/EF/EF04DC.asm:14 LDA #$11
    // Overlapping static entry reached from 0xEF0549.
    case 0xEF04F8: cpu.execute_instruction<0x11>(0x00008D, 2); return true;
    // src/unknown/EF/EF04DC.asm:15 STA TM_MIRROR
    case 0xEF04F9: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/EF/EF04DC.asm:15 STA TM_MIRROR
    // Overlapping static entry reached from 0xEF04F7.
    case 0xEF04FA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF04DC.asm:15 STA TM_MIRROR
    // Overlapping static entry reached from 0xEF04FA.
    case 0xEF04FB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF04DC.asm:16 JSL OAM_CLEAR
    case 0xEF04FC: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/EF/EF04DC.asm:18 LDA #1
    case 0xEF0500: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF04DC.asm:18 LDA #1
    // Overlapping static entry reached from 0xEF0500.
    case 0xEF0502: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF04DC.asm:19 STA TITLE_SCREEN_QUICK_MODE
    case 0xEF0503: cpu.execute_instruction<0x8D>(0x009F75, 3); return true;
    // src/unknown/EF/EF04DC.asm:20 LDY #0
    case 0xEF0506: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EF04DC.asm:20 LDY #0
    // Overlapping static entry reached from 0xEF0506.
    case 0xEF0508: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EF04DC.asm:21 TYX
    case 0xEF0509: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EF04DC.asm:25 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    case 0xEF050A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000314, 3); return true;
    // src/unknown/EF/EF04DC.asm:25 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    // Overlapping static entry reached from 0xEF050A.
    case 0xEF050C: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/EF/EF04DC.asm:27 JSL INIT_ENTITY_WIPE
    case 0xEF050D: cpu.execute_instruction<0x22>(0xC092F5, 4); return true;
    // src/unknown/EF/EF04DC.asm:27 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xEF050C.
    case 0xEF050E: cpu.execute_instruction<0xF5>(0x000092, 2); return true;
    // src/unknown/EF/EF04DC.asm:27 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xEF050E.
    case 0xEF0510: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009C, 2); else cpu.execute_instruction<0xC0>(0x00419C, 3); return true;
    // src/unknown/EF/EF04DC.asm:28 STZ ACTIONSCRIPT_STATE
    case 0xEF0511: cpu.execute_instruction<0x9C>(0x009641, 3); return true;
    // src/unknown/EF/EF04DC.asm:28 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xEF0510.
    case 0xEF0512: cpu.execute_instruction<0x41>(0x000096, 2); return true;
    // src/unknown/EF/EF04DC.asm:28 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xEF0510.
    case 0xEF0513: cpu.execute_instruction<0x96>(0x000022, 2); return true;
    // src/unknown/EF/EF04DC.asm:29 JSL UNKNOWN_C1004E
    case 0xEF0514: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/unknown/EF/EF04DC.asm:29 JSL UNKNOWN_C1004E
    // Overlapping static entry reached from 0xEF0513.
    case 0xEF0515: cpu.execute_instruction<0x4E>(0x00C100, 3); return true;
    // src/unknown/EF/EF04DC.asm:30 LDX #1
    case 0xEF0518: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EF04DC.asm:30 LDX #1
    // Overlapping static entry reached from 0xEF0518.
    case 0xEF051A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EF04DC.asm:31 LDA #16
    case 0xEF051B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/EF/EF04DC.asm:31 LDA #16
    // Overlapping static entry reached from 0xEF051B.
    case 0xEF051D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF04DC.asm:32 JSL FADE_IN
    case 0xEF051E: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/EF/EF04DC.asm:32 JSL FADE_IN
    // Overlapping static entry reached from 0xEF054F.
    case 0xEF0521: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x0000A2, 3); return true;
    // src/unknown/EF/EF04DC.asm:33 LDX #0
    case 0xEF0522: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EF04DC.asm:33 LDX #0
    // Overlapping static entry reached from 0xEF0521.
    case 0xEF0523: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF04DC.asm:33 LDX #0
    // Overlapping static entry reached from 0xEF0522.
    case 0xEF0524: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/EF/EF04DC.asm:34 STX @LOCAL00
    case 0xEF0525: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EF04DC.asm:35 BRA @UNKNOWN2
    case 0xEF0527: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/EF/EF04DC.asm:37 JSL UNKNOWN_C1004E
    case 0xEF0529: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/unknown/EF/EF04DC.asm:38 LDX @LOCAL00
    case 0xEF052D: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/EF/EF04DC.asm:39 INX
    case 0xEF052F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EF04DC.asm:40 STX @LOCAL00
    case 0xEF0530: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EF04DC.asm:42 CPX #60
    case 0xEF0532: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00003C, 2); else cpu.execute_instruction<0xE0>(0x00003C, 3); return true;
    // src/unknown/EF/EF04DC.asm:42 CPX #60
    // Overlapping static entry reached from 0xEF0532.
    case 0xEF0534: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EF04DC.asm:43 BCC @UNKNOWN1
    case 0xEF0535: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // src/unknown/EF/EF04DC.asm:44 LDA #0
    case 0xEF0537: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EF04DC.asm:44 LDA #0
    // Overlapping static entry reached from 0xEF0537.
    case 0xEF0539: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF04DC.asm:45 STA @VIRTUAL02
    case 0xEF053A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF04DC.asm:46 BRA @UNKNOWN7
    case 0xEF053C: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/unknown/EF/EF04DC.asm:48 LDA @VIRTUAL04
    case 0xEF053E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF04DC.asm:49 BNE @UNKNOWN6
    case 0xEF0540: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/unknown/EF/EF04DC.asm:50 LDA PAD_PRESS
    case 0xEF0542: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EF04DC.asm:51 AND #PAD::A_BUTTON
    case 0xEF0545: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EF04DC.asm:51 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEF0545.
    case 0xEF0547: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF04DC.asm:52 BNE @UNKNOWN5
    case 0xEF0548: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/EF/EF04DC.asm:52 BNE @UNKNOWN5
    // Overlapping static entry reached from 0xEF0557.
    case 0xEF0549: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/EF/EF04DC.asm:53 LDA PAD_PRESS
    case 0xEF054A: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EF04DC.asm:53 LDA PAD_PRESS
    // Overlapping static entry reached from 0xEF0549.
    case 0xEF054B: cpu.execute_instruction<0x6D>(0x002900, 3); return true;
    // src/unknown/EF/EF04DC.asm:54 AND #PAD::B_BUTTON
    case 0xEF054D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EF04DC.asm:54 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEF054B.
    case 0xEF054E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF04DC.asm:54 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEF054D.
    case 0xEF054F: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/EF/EF04DC.asm:55 BNE @UNKNOWN5
    case 0xEF0550: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/EF/EF04DC.asm:56 LDA PAD_PRESS
    case 0xEF0552: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EF04DC.asm:57 AND #PAD::START_BUTTON
    case 0xEF0555: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/unknown/EF/EF04DC.asm:57 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xEF0555.
    case 0xEF0557: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/unknown/EF/EF04DC.asm:58 BEQ @UNKNOWN6
    case 0xEF0558: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EF04DC.asm:58 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xEF0557.
    case 0xEF0559: cpu.execute_instruction<0x07>(0x0000A9, 2); return true;
    // src/unknown/EF/EF04DC.asm:60 LDA #1
    case 0xEF055A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF04DC.asm:60 LDA #1
    // Overlapping static entry reached from 0xEF0559.
    case 0xEF055B: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EF04DC.asm:60 LDA #1
    // Overlapping static entry reached from 0xEF055A.
    case 0xEF055C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF04DC.asm:61 STA @VIRTUAL02
    case 0xEF055D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF04DC.asm:62 BRA @UNKNOWN8
    case 0xEF055F: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/EF/EF04DC.asm:64 JSL UNKNOWN_C1004E
    case 0xEF0561: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/unknown/EF/EF04DC.asm:66 LDA ACTIONSCRIPT_STATE
    case 0xEF0565: cpu.execute_instruction<0xAD>(0x009641, 3); return true;
    // src/unknown/EF/EF04DC.asm:67 BEQ @UNKNOWN3
    case 0xEF0568: cpu.execute_instruction<0xF0>(0x0000D4, 2); return true;
    // src/unknown/EF/EF04DC.asm:68 LDA ACTIONSCRIPT_STATE
    case 0xEF056A: cpu.execute_instruction<0xAD>(0x009641, 3); return true;
    // src/unknown/EF/EF04DC.asm:69 CMP #2
    case 0xEF056D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EF04DC.asm:69 CMP #2
    // Overlapping static entry reached from 0xEF056D.
    case 0xEF056F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF04DC.asm:70 BEQ @UNKNOWN3
    case 0xEF0570: cpu.execute_instruction<0xF0>(0x0000CC, 2); return true;
    // src/unknown/EF/EF04DC.asm:72 LDY #0
    case 0xEF0572: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EF04DC.asm:72 LDY #0
    // Overlapping static entry reached from 0xEF0572.
    case 0xEF0574: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EF04DC.asm:73 LDX #4
    case 0xEF0575: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EF04DC.asm:73 LDX #4
    // Overlapping static entry reached from 0xEF0575.
    case 0xEF0577: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EF04DC.asm:74 LDA #1
    case 0xEF0578: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF04DC.asm:74 LDA #1
    // Overlapping static entry reached from 0xEF0578.
    case 0xEF057A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF04DC.asm:75 JSL FADE_OUT_WITH_MOSAIC
    case 0xEF057B: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/unknown/EF/EF04DC.asm:76 STZ ACTIONSCRIPT_STATE
    case 0xEF057F: cpu.execute_instruction<0x9C>(0x009641, 3); return true;
    // src/unknown/EF/EF04DC.asm:77 LDA #0
    case 0xEF0582: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EF04DC.asm:77 LDA #0
    // Overlapping static entry reached from 0xEF0582.
    case 0xEF0584: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF04DC.asm:78 JSL UNKNOWN_C474A8
    case 0xEF0585: cpu.execute_instruction<0x22>(0xC474A8, 4); return true;
    // src/unknown/EF/EF04DC.asm:79 JSL UNKNOWN_C0927C
    case 0xEF0589: cpu.execute_instruction<0x22>(0xC0927C, 4); return true;
    // src/unknown/EF/EF04DC.asm:80 LDA @VIRTUAL02
    case 0xEF058D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF04DC.asm:81 END_C_FUNCTION
    case 0xEF058F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF04DC.asm:81 END_C_FUNCTION
    case 0xEF0590: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0C3D.asm (unresolved).
bool execute_unresolved_ef_ef0c3d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0C3D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0C3D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0C3D.asm:5 END_STACK_VARS
    case 0xEF0C3F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0C3D.asm:5 END_STACK_VARS
    case 0xEF0C40: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0C3D.asm:5 END_STACK_VARS
    case 0xEF0C41: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0C3D.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0C41.
    case 0xEF0C43: cpu.execute_instruction<0xFF>(0x03A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0C3D.asm:5 END_STACK_VARS
    case 0xEF0C44: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0C3D.asm:6 LDA #3
    case 0xEF0C45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EF0C3D.asm:6 LDA #3
    // Overlapping static entry reached from 0xEF0C45.
    case 0xEF0C47: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0C3D.asm:7 JSL LOAD_GAME_SLOT
    case 0xEF0C48: cpu.execute_instruction<0x22>(0xEF0A68, 4); return true;
    // src/unknown/EF/EF0C3D.asm:8 LDA GAME_STATE+game_state::leader_x_coord
    case 0xEF0C4C: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/EF/EF0C3D.asm:9 STA @VIRTUAL04
    case 0xEF0C4F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF0C3D.asm:10 LDA GAME_STATE+game_state::leader_y_coord
    case 0xEF0C51: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/EF/EF0C3D.asm:11 STA @VIRTUAL02
    case 0xEF0C54: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF0C3D.asm:12 LDX #1
    case 0xEF0C56: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EF0C3D.asm:12 LDX #1
    // Overlapping static entry reached from 0xEF0C56.
    case 0xEF0C58: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EF0C3D.asm:13 TXA
    case 0xEF0C59: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C3D.asm:14 JSL FADE_OUT
    case 0xEF0C5A: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/unknown/EF/EF0C3D.asm:15 LDX @VIRTUAL02
    case 0xEF0C5E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EF0C3D.asm:16 LDA @VIRTUAL04
    case 0xEF0C60: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF0C3D.asm:17 JSL UNKNOWN_C068F4
    case 0xEF0C62: cpu.execute_instruction<0x22>(0xC068F4, 4); return true;
    // src/unknown/EF/EF0C3D.asm:18 LDX @VIRTUAL02
    case 0xEF0C66: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EF0C3D.asm:19 LDA @VIRTUAL04
    case 0xEF0C68: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF0C3D.asm:20 JSL LOAD_MAP_AT_POSITION
    case 0xEF0C6A: cpu.execute_instruction<0x22>(0xC013F6, 4); return true;
    // src/unknown/EF/EF0C3D.asm:21 LDY GAME_STATE+game_state::leader_direction
    case 0xEF0C6E: cpu.execute_instruction<0xAC>(0x00987F, 3); return true;
    // src/unknown/EF/EF0C3D.asm:22 LDX @VIRTUAL02
    case 0xEF0C71: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EF0C3D.asm:23 LDA @VIRTUAL04
    case 0xEF0C73: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF0C3D.asm:24 JSL UNKNOWN_C03FA9
    case 0xEF0C75: cpu.execute_instruction<0x22>(0xC03FA9, 4); return true;
    // src/unknown/EF/EF0C3D.asm:25 JSL UNKNOWN_C069AF
    case 0xEF0C79: cpu.execute_instruction<0x22>(0xC069AF, 4); return true;
    // src/unknown/EF/EF0C3D.asm:26 LDX #1
    case 0xEF0C7D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EF0C3D.asm:26 LDX #1
    // Overlapping static entry reached from 0xEF0C7D.
    case 0xEF0C7F: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EF0C3D.asm:27 TXA
    case 0xEF0C80: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C3D.asm:28 JSL FADE_IN
    case 0xEF0C81: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0C3D.asm:29 END_C_FUNCTION
    case 0xEF0C85: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0C3D.asm:29 END_C_FUNCTION
    case 0xEF0C86: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0C87.asm (unresolved).
bool execute_unresolved_ef_ef0c87_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0C87.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0C87: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0C87.asm:6 LDA CURRENT_ENTITY_SLOT
    case 0xEF0C89: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0C87.asm:7 ASL
    case 0xEF0C8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C87.asm:8 TAX
    case 0xEF0C8D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0C87.asm:9 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xEF0C8E: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0C87.asm:10 ASL
    case 0xEF0C91: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C87.asm:11 TAX
    case 0xEF0C92: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0C87.asm:12 LDA DELIVERY_ATTEMPTS,X
    case 0xEF0C93: cpu.execute_instruction<0xBD>(0x00B511, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0C87.asm:13 END_C_FUNCTION
    case 0xEF0C96: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0C97.asm (unresolved).
bool execute_unresolved_ef_ef0c97_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0C97.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0C97: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0C97.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xEF0C99: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0C97.asm:6 ASL
    case 0xEF0C9C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C97.asm:7 TAX
    case 0xEF0C9D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0C97.asm:8 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xEF0C9E: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0C97.asm:9 ASL
    case 0xEF0CA1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C97.asm:10 TAX
    case 0xEF0CA2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0C97.asm:11 STZ DELIVERY_ATTEMPTS,X
    case 0xEF0CA3: cpu.execute_instruction<0x9E>(0x00B511, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0C97.asm:12 END_C_FUNCTION
    case 0xEF0CA6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0CA7.asm (unresolved).
bool execute_unresolved_ef_ef0ca7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0CA7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0CA7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0CA7.asm:7 END_STACK_VARS
    case 0xEF0CA9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0CA7.asm:7 END_STACK_VARS
    case 0xEF0CAA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0CA7.asm:7 END_STACK_VARS
    case 0xEF0CAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0CA7.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0CAB.
    case 0xEF0CAD: cpu.execute_instruction<0xFF>(0x45A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0CA7.asm:7 END_STACK_VARS
    case 0xEF0CAE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0CA7.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0CAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000045, 2); else cpu.execute_instruction<0xA9>(0x00F645, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0CA7.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0CAF.
    case 0xEF0CB1: cpu.execute_instruction<0xF6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0CA7.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0CB2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0CA7.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0CB1.
    case 0xEF0CB3: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0CA7.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0CB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0CA7.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0CB3.
    case 0xEF0CB5: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0CA7.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0CB4.
    case 0xEF0CB6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EF0CA7.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0CB7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EF0CA7.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xEF0CB9: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0CA7.asm:10 ASL
    case 0xEF0CBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:11 TAX
    case 0xEF0CBD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:12 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xEF0CBE: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0CA7.asm:13 STA @LOCAL00
    case 0xEF0CC1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0CA7.asm:14 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0CC3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0CA7.asm:14 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0CC5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0CA7.asm:14 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0CC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0CA7.asm:14 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0CC7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0CA7.asm:14 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0CC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0CA7.asm:14 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0CCA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:15 INC
    case 0xEF0CCB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:16 INC
    case 0xEF0CCC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:17 INC
    case 0xEF0CCD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:18 INC
    case 0xEF0CCE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EF0CA7.asm:19 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEF0CCF: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EF0CA7.asm:19 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEF0CD1: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EF0CA7.asm:19 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEF0CD3: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EF0CA7.asm:19 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEF0CD5: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EF0CA7.asm:20 CLC
    case 0xEF0CD7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:21 ADC @VIRTUAL0A
    case 0xEF0CD8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EF0CA7.asm:22 STA @VIRTUAL0A
    case 0xEF0CDA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EF0CA7.asm:23 LDA [@VIRTUAL0A]
    case 0xEF0CDC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/EF/EF0CA7.asm:24 CMP #<-1
    case 0xEF0CDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/EF/EF0CA7.asm:24 CMP #<-1
    // Overlapping static entry reached from 0xEF0CDE.
    case 0xEF0CE0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF0CA7.asm:25 BNE @UNKNOWN0
    case 0xEF0CE1: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EF0CA7.asm:26 LDA #1
    case 0xEF0CE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0CA7.asm:26 LDA #1
    // Overlapping static entry reached from 0xEF0CE3.
    case 0xEF0CE5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0CA7.asm:27 BRA @RETURN
    case 0xEF0CE6: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/unknown/EF/EF0CA7.asm:29 LDY #0
    case 0xEF0CE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EF0CA7.asm:29 LDY #0
    // Overlapping static entry reached from 0xEF0CE8.
    case 0xEF0CEA: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF0CA7.asm:30 LDA @LOCAL00
    case 0xEF0CEB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EF0CA7.asm:31 ASL
    case 0xEF0CED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:32 CLC
    case 0xEF0CEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:33 ADC #.LOWORD(DELIVERY_ATTEMPTS)
    case 0xEF0CEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000011, 2); else cpu.execute_instruction<0x69>(0x00B511, 3); return true;
    // src/unknown/EF/EF0CA7.asm:33 ADC #.LOWORD(DELIVERY_ATTEMPTS)
    // Overlapping static entry reached from 0xEF0CEF.
    case 0xEF0CF1: cpu.execute_instruction<0xB5>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0CA7.asm:34 TAX
    case 0xEF0CF2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:35 LDA __BSS_START__,X
    case 0xEF0CF3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF0CA7.asm:36 INC
    case 0xEF0CF6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:37 STA __BSS_START__,X
    case 0xEF0CF7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF0CA7.asm:38 STA @VIRTUAL02
    case 0xEF0CFA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF0CA7.asm:39 LDA CURRENT_ENTITY_SLOT
    case 0xEF0CFC: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0CA7.asm:40 ASL
    case 0xEF0CFF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:41 TAX
    case 0xEF0D00: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:42 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xEF0D01: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0CA7.asm:43 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D04: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0CA7.asm:43 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0CA7.asm:43 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0CA7.asm:43 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D08: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0CA7.asm:43 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D0A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0CA7.asm:43 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D0B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:44 INC
    case 0xEF0D0C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:45 INC
    case 0xEF0D0D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:46 INC
    case 0xEF0D0E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:47 INC
    case 0xEF0D0F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:48 CLC
    case 0xEF0D10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7.asm:49 ADC @VIRTUAL06
    case 0xEF0D11: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EF0CA7.asm:50 STA @VIRTUAL06
    case 0xEF0D13: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0CA7.asm:51 LDA [@VIRTUAL06]
    case 0xEF0D15: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EF0CA7.asm:52 CMP @VIRTUAL02
    case 0xEF0D17: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/EF/EF0CA7.asm:53 BLTEQ @UNKNOWN1
    case 0xEF0D19: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/EF/EF0CA7.asm:53 BLTEQ @UNKNOWN1
    case 0xEF0D1B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EF0CA7.asm:54 LDY #1
    case 0xEF0D1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/EF/EF0CA7.asm:54 LDY #1
    // Overlapping static entry reached from 0xEF0D1D.
    case 0xEF0D1F: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/EF/EF0CA7.asm:56 TYA
    case 0xEF0D20: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0CA7.asm:58 END_C_FUNCTION
    case 0xEF0D21: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0CA7.asm:58 END_C_FUNCTION
    case 0xEF0D22: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0D23.asm (unresolved).
bool execute_unresolved_ef_ef0d23_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0D23.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0D23: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0D23.asm:6 END_STACK_VARS
    case 0xEF0D25: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0D23.asm:6 END_STACK_VARS
    case 0xEF0D26: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0D23.asm:6 END_STACK_VARS
    case 0xEF0D27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0D23.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0D27.
    case 0xEF0D29: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0D23.asm:6 END_STACK_VARS
    case 0xEF0D2A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xEF0D2B: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0D23.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xEF0D29.
    case 0xEF0D2D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:8 ASL
    case 0xEF0D2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:9 TAX
    case 0xEF0D2F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xEF0D30: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0D23.asm:11 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D33: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0D23.asm:11 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0D23.asm:11 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0D23.asm:11 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D37: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0D23.asm:11 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D39: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0D23.asm:11 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D3A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:12 CLC
    case 0xEF0D3B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:13 ADC #6
    case 0xEF0D3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/EF/EF0D23.asm:13 ADC #6
    // Overlapping static entry reached from 0xEF0D3C.
    case 0xEF0D3E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0D23.asm:14 TAX
    case 0xEF0D3F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:15 LDA TIMED_DELIVERY_TABLE,X
    case 0xEF0D40: cpu.execute_instruction<0xBF>(0xD5F645, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0D23.asm:16 END_C_FUNCTION
    case 0xEF0D44: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0D23.asm:16 END_C_FUNCTION
    case 0xEF0D45: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0D46.asm (unresolved).
bool execute_unresolved_ef_ef0d46_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0D46.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0D46: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0D46.asm:6 END_STACK_VARS
    case 0xEF0D48: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0D46.asm:6 END_STACK_VARS
    case 0xEF0D49: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0D46.asm:6 END_STACK_VARS
    case 0xEF0D4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0D46.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0D4A.
    case 0xEF0D4C: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0D46.asm:6 END_STACK_VARS
    case 0xEF0D4D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xEF0D4E: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0D46.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xEF0D4C.
    case 0xEF0D50: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:8 ASL
    case 0xEF0D51: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:9 TAX
    case 0xEF0D52: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xEF0D53: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0D46.asm:11 STA @LOCAL00
    case 0xEF0D56: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF0D46.asm:12 ASL
    case 0xEF0D58: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:13 PHA
    case 0xEF0D59: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:14 LDA @LOCAL00
    case 0xEF0D5A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0D46.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D5C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0D46.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D5E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0D46.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D5F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0D46.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D60: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0D46.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D62: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0D46.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0D63: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:16 CLC
    case 0xEF0D64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:17 ADC #8
    case 0xEF0D65: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/EF/EF0D46.asm:17 ADC #8
    // Overlapping static entry reached from 0xEF0D65.
    case 0xEF0D67: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0D46.asm:18 TAX
    case 0xEF0D68: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:19 LDA TIMED_DELIVERY_TABLE,X
    case 0xEF0D69: cpu.execute_instruction<0xBF>(0xD5F645, 4); return true;
    // src/unknown/EF/EF0D46.asm:20 PLX
    case 0xEF0D6D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:21 STA DELIVERY_TIMERS,X
    case 0xEF0D6E: cpu.execute_instruction<0x9D>(0x00B525, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0D46.asm:22 END_C_FUNCTION
    case 0xEF0D71: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0D46.asm:22 END_C_FUNCTION
    case 0xEF0D72: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0D73.asm (unresolved).
bool execute_unresolved_ef_ef0d73_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0D73.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0D73: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0D73.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xEF0D75: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0D73.asm:6 ASL
    case 0xEF0D78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:7 TAX
    case 0xEF0D79: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:8 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xEF0D7A: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0D73.asm:9 ASL
    case 0xEF0D7D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:10 CLC
    case 0xEF0D7E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:11 ADC #.LOWORD(DELIVERY_TIMERS)
    case 0xEF0D7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x00B525, 3); return true;
    // src/unknown/EF/EF0D73.asm:11 ADC #.LOWORD(DELIVERY_TIMERS)
    // Overlapping static entry reached from 0xEF0D7F.
    case 0xEF0D81: cpu.execute_instruction<0xB5>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0D73.asm:12 TAX
    case 0xEF0D82: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:13 LDA __BSS_START__,X
    case 0xEF0D83: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF0D73.asm:14 BEQ @UNKNOWN0
    case 0xEF0D86: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EF0D73.asm:15 DEC
    case 0xEF0D88: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:16 STA __BSS_START__,X
    case 0xEF0D89: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0D73.asm:18 END_C_FUNCTION
    case 0xEF0D8C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0D8D.asm (unresolved).
bool execute_unresolved_ef_ef0d8d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0D8D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0D8D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0D8D.asm:7 END_STACK_VARS
    case 0xEF0D8F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0D8D.asm:7 END_STACK_VARS
    case 0xEF0D90: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0D8D.asm:7 END_STACK_VARS
    case 0xEF0D91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0D8D.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0D91.
    case 0xEF0D93: cpu.execute_instruction<0xFF>(0x45A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0D8D.asm:7 END_STACK_VARS
    case 0xEF0D94: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0D8D.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0D95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000045, 2); else cpu.execute_instruction<0xA9>(0x00F645, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0D8D.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0D95.
    case 0xEF0D97: cpu.execute_instruction<0xF6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0D8D.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0D98: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0D8D.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0D97.
    case 0xEF0D99: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0D8D.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0D9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0D8D.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0D99.
    case 0xEF0D9B: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0D8D.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0D9A.
    case 0xEF0D9C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EF0D8D.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0D9D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EF0D8D.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xEF0D9F: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0D8D.asm:10 ASL
    case 0xEF0DA2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:11 CLC
    case 0xEF0DA3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:12 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    case 0xEF0DA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005E, 2); else cpu.execute_instruction<0x69>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0D8D.asm:12 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    // Overlapping static entry reached from 0xEF0DA4.
    case 0xEF0DA6: cpu.execute_instruction<0x0E>(0x00BDAA, 3); return true;
    // src/unknown/EF/EF0D8D.asm:13 TAX
    case 0xEF0DA7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:14 LDA __BSS_START__,X
    case 0xEF0DA8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF0D8D.asm:14 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xEF0DA6.
    case 0xEF0DA9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0D8D.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0DAB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0D8D.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0DAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0D8D.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0DAE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0D8D.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0DAF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0D8D.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0DB1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0D8D.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0DB2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:16 CLC
    case 0xEF0DB3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:17 ADC #12
    case 0xEF0DB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/unknown/EF/EF0D8D.asm:17 ADC #12
    // Overlapping static entry reached from 0xEF0DB4.
    case 0xEF0DB6: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/EF/EF0D8D.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xEF0DB7: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/EF/EF0D8D.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xEF0DB9: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/EF/EF0D8D.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xEF0DBB: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/EF/EF0D8D.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xEF0DBD: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/EF/EF0D8D.asm:19 CLC
    case 0xEF0DBF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:20 ADC @VIRTUAL0A
    case 0xEF0DC0: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EF0D8D.asm:21 STA @VIRTUAL0A
    case 0xEF0DC2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EF0D8D.asm:22 LDA [@VIRTUAL0A]
    case 0xEF0DC4: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/EF/EF0D8D.asm:23 AND #$00FF
    case 0xEF0DC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF0D8D.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xEF0DC6.
    case 0xEF0DC8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF0D8D.asm:24 STA @LOCAL01+2
    case 0xEF0DC9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EF0D8D.asm:25 LDA __BSS_START__,X
    case 0xEF0DCB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0D8D.asm:26 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0DCE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0D8D.asm:26 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0DD0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0D8D.asm:26 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0DD1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0D8D.asm:26 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0DD2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0D8D.asm:26 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0DD4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0D8D.asm:26 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0DD5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:27 CLC
    case 0xEF0DD6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:28 ADC #10
    case 0xEF0DD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/EF/EF0D8D.asm:28 ADC #10
    // Overlapping static entry reached from 0xEF0DD7.
    case 0xEF0DD9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EF0D8D.asm:29 CLC
    case 0xEF0DDA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D.asm:30 ADC @VIRTUAL06
    case 0xEF0DDB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EF0D8D.asm:31 STA @VIRTUAL06
    case 0xEF0DDD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0D8D.asm:32 LDA [@VIRTUAL06]
    case 0xEF0DDF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EF0D8D.asm:33 STA @LOCAL01
    case 0xEF0DE1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF0D8D.asm:34 STA @VIRTUAL06
    case 0xEF0DE3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0D8D.asm:35 LDA @LOCAL01+2
    case 0xEF0DE5: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EF0D8D.asm:36 STA @VIRTUAL06+2
    case 0xEF0DE7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EF0D8D.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0DE9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EF0D8D.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0DEB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EF0D8D.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0DED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EF0D8D.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0DEF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EF0D8D.asm:38 LDA #8
    case 0xEF0DF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/EF/EF0D8D.asm:38 LDA #8
    // Overlapping static entry reached from 0xEF0DF1.
    case 0xEF0DF3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0D8D.asm:39 JSL UNKNOWN_C064E3
    case 0xEF0DF4: cpu.execute_instruction<0x22>(0xC064E3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0D8D.asm:40 END_C_FUNCTION
    case 0xEF0DF8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0D8D.asm:40 END_C_FUNCTION
    case 0xEF0DF9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0DFA.asm (unresolved).
bool execute_unresolved_ef_ef0dfa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0DFA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0DFA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0DFA.asm:7 END_STACK_VARS
    case 0xEF0DFC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0DFA.asm:7 END_STACK_VARS
    case 0xEF0DFD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0DFA.asm:7 END_STACK_VARS
    case 0xEF0DFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0DFA.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0DFE.
    case 0xEF0E00: cpu.execute_instruction<0xFF>(0x45A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0DFA.asm:7 END_STACK_VARS
    case 0xEF0E01: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0DFA.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0E02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000045, 2); else cpu.execute_instruction<0xA9>(0x00F645, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0DFA.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0E02.
    case 0xEF0E04: cpu.execute_instruction<0xF6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0DFA.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0E05: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0DFA.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0E04.
    case 0xEF0E06: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0DFA.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0E07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0DFA.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0E06.
    case 0xEF0E08: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0DFA.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0E07.
    case 0xEF0E09: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EF0DFA.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0E0A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EF0DFA.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xEF0E0C: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0DFA.asm:10 ASL
    case 0xEF0E0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:11 CLC
    case 0xEF0E10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:12 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    case 0xEF0E11: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005E, 2); else cpu.execute_instruction<0x69>(0x000E5E, 3); return true;
    // src/unknown/EF/EF0DFA.asm:12 ADC #.LOWORD(ENTITY_SCRIPT_VAR0_TABLE)
    // Overlapping static entry reached from 0xEF0E11.
    case 0xEF0E13: cpu.execute_instruction<0x0E>(0x00BDAA, 3); return true;
    // src/unknown/EF/EF0DFA.asm:13 TAX
    case 0xEF0E14: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:14 LDA __BSS_START__,X
    case 0xEF0E15: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF0DFA.asm:14 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xEF0E13.
    case 0xEF0E16: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0DFA.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0E18: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0DFA.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0E1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0DFA.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0E1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0DFA.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0E1C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0DFA.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0E1E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0DFA.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0E1F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:16 CLC
    case 0xEF0E20: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:17 ADC #15
    case 0xEF0E21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000F, 2); else cpu.execute_instruction<0x69>(0x00000F, 3); return true;
    // src/unknown/EF/EF0DFA.asm:17 ADC #15
    // Overlapping static entry reached from 0xEF0E21.
    case 0xEF0E23: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/EF/EF0DFA.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xEF0E24: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/EF/EF0DFA.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xEF0E26: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/EF/EF0DFA.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xEF0E28: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/EF/EF0DFA.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xEF0E2A: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/EF/EF0DFA.asm:19 CLC
    case 0xEF0E2C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:20 ADC @VIRTUAL0A
    case 0xEF0E2D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EF0DFA.asm:21 STA @VIRTUAL0A
    case 0xEF0E2F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EF0DFA.asm:22 LDA [@VIRTUAL0A]
    case 0xEF0E31: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/EF/EF0DFA.asm:23 AND #$00FF
    case 0xEF0E33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF0DFA.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xEF0E33.
    case 0xEF0E35: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF0DFA.asm:24 STA @LOCAL01+2
    case 0xEF0E36: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EF0DFA.asm:25 LDA __BSS_START__,X
    case 0xEF0E38: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0DFA.asm:26 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0E3B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0DFA.asm:26 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0E3D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0DFA.asm:26 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0E3E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0DFA.asm:26 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0E3F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0DFA.asm:26 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0E41: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0DFA.asm:26 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0E42: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:27 CLC
    case 0xEF0E43: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:28 ADC #13
    case 0xEF0E44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/unknown/EF/EF0DFA.asm:28 ADC #13
    // Overlapping static entry reached from 0xEF0E44.
    case 0xEF0E46: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EF0DFA.asm:29 CLC
    case 0xEF0E47: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA.asm:30 ADC @VIRTUAL06
    case 0xEF0E48: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EF0DFA.asm:31 STA @VIRTUAL06
    case 0xEF0E4A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0DFA.asm:32 LDA [@VIRTUAL06]
    case 0xEF0E4C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EF0DFA.asm:33 STA @LOCAL01
    case 0xEF0E4E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF0DFA.asm:34 STA @VIRTUAL06
    case 0xEF0E50: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0DFA.asm:35 LDA @LOCAL01+2
    case 0xEF0E52: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EF0DFA.asm:36 STA @VIRTUAL06+2
    case 0xEF0E54: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EF0DFA.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0E56: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EF0DFA.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0E58: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EF0DFA.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0E5A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EF0DFA.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0E5C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EF0DFA.asm:38 LDA #10
    case 0xEF0E5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EF0DFA.asm:38 LDA #10
    // Overlapping static entry reached from 0xEF0E5E.
    case 0xEF0E60: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0DFA.asm:39 JSL UNKNOWN_C064E3
    case 0xEF0E61: cpu.execute_instruction<0x22>(0xC064E3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0DFA.asm:40 END_C_FUNCTION
    case 0xEF0E65: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0DFA.asm:40 END_C_FUNCTION
    case 0xEF0E66: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0E67.asm (unresolved).
bool execute_unresolved_ef_ef0e67_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0E67.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0E67: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0E67.asm:6 END_STACK_VARS
    case 0xEF0E69: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0E67.asm:6 END_STACK_VARS
    case 0xEF0E6A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0E67.asm:6 END_STACK_VARS
    case 0xEF0E6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0E67.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0E6B.
    case 0xEF0E6D: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0E67.asm:6 END_STACK_VARS
    case 0xEF0E6E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xEF0E6F: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0E67.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xEF0E6D.
    case 0xEF0E71: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:8 ASL
    case 0xEF0E72: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:9 TAX
    case 0xEF0E73: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xEF0E74: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0E67.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xEF0E77: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0E67.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xEF0E79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0E67.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xEF0E7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0E67.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xEF0E7B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0E67.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xEF0E7D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0E67.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xEF0E7E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:12 CLC
    case 0xEF0E7F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:13 ADC #timed_delivery::enter_speed
    case 0xEF0E80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/EF/EF0E67.asm:13 ADC #timed_delivery::enter_speed
    // Overlapping static entry reached from 0xEF0E80.
    case 0xEF0E82: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0E67.asm:14 TAX
    case 0xEF0E83: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:15 LDA TIMED_DELIVERY_TABLE,X
    case 0xEF0E84: cpu.execute_instruction<0xBF>(0xD5F645, 4); return true;
    // src/unknown/EF/EF0E67.asm:15 LDA TIMED_DELIVERY_TABLE,X
    // Overlapping static entry reached from 0xEFDC90.
    case 0xEF0E85: cpu.execute_instruction<0x45>(0x0000F6, 2); return true;
    // src/unknown/EF/EF0E67.asm:15 LDA TIMED_DELIVERY_TABLE,X
    // Overlapping static entry reached from 0xEF0E85.
    case 0xEF0E87: cpu.execute_instruction<0xD5>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0E67.asm:16 END_C_FUNCTION
    case 0xEF0E88: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0E67.asm:16 END_C_FUNCTION
    case 0xEF0E89: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0E8A.asm (unresolved).
bool execute_unresolved_ef_ef0e8a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0E8A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0E8A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0E8A.asm:6 END_STACK_VARS
    case 0xEF0E8C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0E8A.asm:6 END_STACK_VARS
    case 0xEF0E8D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0E8A.asm:6 END_STACK_VARS
    case 0xEF0E8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0E8A.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0E8E.
    case 0xEF0E90: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0E8A.asm:6 END_STACK_VARS
    case 0xEF0E91: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xEF0E92: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/EF/EF0E8A.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xEF0E90.
    case 0xEF0E94: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:8 ASL
    case 0xEF0E95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:9 TAX
    case 0xEF0E96: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xEF0E97: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0E8A.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xEF0E9A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0E8A.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xEF0E9C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0E8A.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xEF0E9D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0E8A.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xEF0E9E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0E8A.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xEF0EA0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0E8A.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xEF0EA1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:12 CLC
    case 0xEF0EA2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:13 ADC #timed_delivery::exit_speed
    case 0xEF0EA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/unknown/EF/EF0E8A.asm:13 ADC #timed_delivery::exit_speed
    // Overlapping static entry reached from 0xEF0EA3.
    case 0xEF0EA5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0E8A.asm:14 TAX
    case 0xEF0EA6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:15 LDA TIMED_DELIVERY_TABLE,X
    case 0xEF0EA7: cpu.execute_instruction<0xBF>(0xD5F645, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0E8A.asm:16 END_C_FUNCTION
    case 0xEF0EAB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0E8A.asm:16 END_C_FUNCTION
    case 0xEF0EAC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0EAD.asm (unresolved).
bool execute_unresolved_ef_ef0ead_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0EAD.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0EAD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    case 0xEF0EAF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    case 0xEF0EB0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    case 0xEF0EB1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    case 0xEF0EB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0EB2.
    case 0xEF0EB4: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    case 0xEF0EB5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    case 0xEF0EB6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:12 TAX
    case 0xEF0EB7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:13 DEC
    case 0xEF0EB8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:14 STA NEW_ENTITY_VAR0
    case 0xEF0EB9: cpu.execute_instruction<0x8D>(0x000A38, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0EAD.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0EBC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0EAD.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0EBE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0EAD.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0EBF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0EAD.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0EC0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0EAD.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0EC2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0EAD.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0EC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:16 TAX
    case 0xEF0EC4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:17 LDA TIMED_DELIVERY_TABLE,X
    case 0xEF0EC5: cpu.execute_instruction<0xBF>(0xD5F645, 4); return true;
    // src/unknown/EF/EF0EAD.asm:21 BNE @UNKNOWN0
    case 0xEF0EC9: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/EF/EF0EAD.asm:22 JSL RAND
    case 0xEF0ECB: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/EF/EF0EAD.asm:23 AND #$0003
    case 0xEF0ECF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF0EAD.asm:23 AND #$0003
    // Overlapping static entry reached from 0xEF0ECF.
    case 0xEF0ED1: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EAD.asm:24 ASL
    case 0xEF0ED2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:25 TAX
    case 0xEF0ED3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:26 LDA FOR_SALE_SIGN_SPRITE_TABLE,X
    case 0xEF0ED4: cpu.execute_instruction<0xBF>(0xC3FDBD, 4); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/EF/EF0EAD.asm:31 STZ_BADOPT @LOCAL00
    case 0xEF0ED8: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/EF/EF0EAD.asm:32 STZ_BADOPT2 @LOCAL01
    case 0xEF0EDA: cpu.execute_instruction<0x64>(0x000010, 2); return true;
    // src/unknown/EF/EF0EAD.asm:33 LDY #.LOWORD(-1)
    case 0xEF0EDC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF0EAD.asm:33 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF0EDC.
    case 0xEF0EDE: cpu.execute_instruction<0xFF>(0x01F3A2, 4); return true;
    // src/unknown/EF/EF0EAD.asm:34 LDX #EVENT_SCRIPT::EVENT_499
    case 0xEF0EDF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F3, 2); else cpu.execute_instruction<0xA2>(0x0001F3, 3); return true;
    // src/unknown/EF/EF0EAD.asm:34 LDX #EVENT_SCRIPT::EVENT_499
    // Overlapping static entry reached from 0xEF0EDF.
    case 0xEF0EE1: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/EF/EF0EAD.asm:38 JSL CREATE_ENTITY
    case 0xEF0EE2: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/EF/EF0EAD.asm:38 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xEF0EE1.
    case 0xEF0EE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x00001E, 2); else cpu.execute_instruction<0x49>(0x00C01E, 3); return true;
    // src/unknown/EF/EF0EAD.asm:38 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xEF0EE3.
    case 0xEF0EE5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0EAD.asm:39 END_C_FUNCTION
    case 0xEF0EE6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0EAD.asm:39 END_C_FUNCTION
    case 0xEF0EE7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0EE8.asm (unresolved).
bool execute_unresolved_ef_ef0ee8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0EE8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0EE8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0EE8.asm:11 END_STACK_VARS
    case 0xEF0EEA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0EE8.asm:11 END_STACK_VARS
    case 0xEF0EEB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0EE8.asm:11 END_STACK_VARS
    case 0xEF0EEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0EE8.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0EEC.
    case 0xEF0EEE: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0EE8.asm:11 END_STACK_VARS
    case 0xEF0EEF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:12 LDA #0
    case 0xEF0EF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EF0EE8.asm:12 LDA #0
    // Overlapping static entry reached from 0xEF0EF0.
    case 0xEF0EF2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF0EE8.asm:13 STA @VIRTUAL02
    case 0xEF0EF3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF0EE8.asm:14 BRA @UNKNOWN3
    case 0xEF0EF5: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0EF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000045, 2); else cpu.execute_instruction<0xA9>(0x00F645, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0EF7.
    case 0xEF0EF9: cpu.execute_instruction<0xF6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0EFA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0EF9.
    case 0xEF0EFB: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0EFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0EFB.
    case 0xEF0EFD: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0EFC.
    case 0xEF0EFE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xEF0EFF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EF0EE8.asm:17 LDA @VIRTUAL02
    case 0xEF0F01: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0EE8.asm:18 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0F03: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0EE8.asm:18 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0F05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0EE8.asm:18 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0F06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0EE8.asm:18 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0F07: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0EE8.asm:18 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0F09: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0EE8.asm:18 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xEF0F0A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:19 TAX
    case 0xEF0F0B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:20 STX @LOCAL03
    case 0xEF0F0C: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/EF/EF0EE8.asm:21 TXA
    case 0xEF0F0E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:22 INC
    case 0xEF0F0F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:23 INC
    case 0xEF0F10: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EF0EE8.asm:24 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEF0F11: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EF0EE8.asm:24 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEF0F13: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EF0EE8.asm:24 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEF0F15: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EF0EE8.asm:24 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEF0F17: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EF0EE8.asm:25 CLC
    case 0xEF0F19: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:26 ADC @VIRTUAL0A
    case 0xEF0F1A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EE8.asm:27 STA @VIRTUAL0A
    case 0xEF0F1C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EE8.asm:28 LDA [@VIRTUAL0A]
    case 0xEF0F1E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EE8.asm:29 JSL GET_EVENT_FLAG
    case 0xEF0F20: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/EF/EF0EE8.asm:30 CMP #0
    case 0xEF0F24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EF0EE8.asm:30 CMP #0
    // Overlapping static entry reached from 0xEF0F24.
    case 0xEF0F26: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0EE8.asm:31 BEQ @UNKNOWN2
    case 0xEF0F27: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/unknown/EF/EF0EE8.asm:32 LDA @VIRTUAL02
    case 0xEF0F29: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EF0EE8.asm:33 STA NEW_ENTITY_VAR0
    case 0xEF0F2B: cpu.execute_instruction<0x8D>(0x000A38, 3); return true;
    // src/unknown/EF/EF0EE8.asm:34 LDX @LOCAL03
    case 0xEF0F2E: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/EF/EF0EE8.asm:35 TXA
    case 0xEF0F30: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:36 CLC
    case 0xEF0F31: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:37 ADC @VIRTUAL06
    case 0xEF0F32: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EF0EE8.asm:38 STA @VIRTUAL06
    case 0xEF0F34: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0EE8.asm:39 LDA [@VIRTUAL06]
    case 0xEF0F36: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EF0EE8.asm:43 BNE @UNKNOWN1
    case 0xEF0F38: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/EF/EF0EE8.asm:44 JSL RAND
    case 0xEF0F3A: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/EF/EF0EE8.asm:45 AND #$0003
    case 0xEF0F3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF0EE8.asm:45 AND #$0003
    // Overlapping static entry reached from 0xEF0F3E.
    case 0xEF0F40: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EE8.asm:46 ASL
    case 0xEF0F41: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:47 TAX
    case 0xEF0F42: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:48 LDA FOR_SALE_SIGN_SPRITE_TABLE,X
    case 0xEF0F43: cpu.execute_instruction<0xBF>(0xC3FDBD, 4); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/EF/EF0EE8.asm:53 STZ_BADOPT @LOCAL00
    case 0xEF0F47: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/EF/EF0EE8.asm:54 STZ_BADOPT2 @LOCAL01
    case 0xEF0F49: cpu.execute_instruction<0x64>(0x000010, 2); return true;
    // src/unknown/EF/EF0EE8.asm:55 LDY #.LOWORD(-1)
    case 0xEF0F4B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF0EE8.asm:55 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF0F4B.
    case 0xEF0F4D: cpu.execute_instruction<0xFF>(0x01F4A2, 4); return true;
    // src/unknown/EF/EF0EE8.asm:56 LDX #EVENT_SCRIPT::EVENT_500
    case 0xEF0F4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F4, 2); else cpu.execute_instruction<0xA2>(0x0001F4, 3); return true;
    // src/unknown/EF/EF0EE8.asm:56 LDX #EVENT_SCRIPT::EVENT_500
    // Overlapping static entry reached from 0xEF0F4E.
    case 0xEF0F50: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/EF/EF0EE8.asm:60 JSL CREATE_ENTITY
    case 0xEF0F51: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/EF/EF0EE8.asm:60 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xEF0F50.
    case 0xEF0F52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x00001E, 2); else cpu.execute_instruction<0x49>(0x00C01E, 3); return true;
    // src/unknown/EF/EF0EE8.asm:60 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xEF0F52.
    case 0xEF0F54: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E6, 2); else cpu.execute_instruction<0xC0>(0x0002E6, 3); return true;
    // src/unknown/EF/EF0EE8.asm:62 INC @VIRTUAL02
    case 0xEF0F55: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EF0EE8.asm:62 INC @VIRTUAL02
    // Overlapping static entry reached from 0xEF0F54.
    case 0xEF0F56: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/EF/EF0EE8.asm:64 LDA @VIRTUAL02
    case 0xEF0F57: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EF0EE8.asm:65 CMP #10
    case 0xEF0F59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EF0EE8.asm:65 CMP #10
    // Overlapping static entry reached from 0xEF0F59.
    case 0xEF0F5B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EF0EE8.asm:66 BCC @UNKNOWN0
    case 0xEF0F5C: cpu.execute_instruction<0x90>(0x000099, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0EE8.asm:67 END_C_FUNCTION
    case 0xEF0F5E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0EE8.asm:67 END_C_FUNCTION
    case 0xEF0F5F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0F60.asm (unresolved).
bool execute_unresolved_ef_ef0f60_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0F60.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0F60: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0F60.asm:6 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xEF0F62: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/unknown/EF/EF0F60.asm:7 AND #$00FF
    case 0xEF0F65: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF0F60.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xEF0F65.
    case 0xEF0F67: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF0F60.asm:8 BNE @UNKNOWN0
    case 0xEF0F68: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/EF/EF0F60.asm:9 LDA INIDISP_MIRROR
    case 0xEF0F6A: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/unknown/EF/EF0F60.asm:10 AND #$00FF
    case 0xEF0F6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF0F60.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xEF0F6D.
    case 0xEF0F6F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/EF/EF0F60.asm:11 CMP #15
    case 0xEF0F70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00000F, 3); return true;
    // src/unknown/EF/EF0F60.asm:11 CMP #15
    // Overlapping static entry reached from 0xEF0F70.
    case 0xEF0F72: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60.asm:12 BEQ @UNKNOWN1
    case 0xEF0F73: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:14 LDA #TRUE
    case 0xEF0F75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60.asm:14 LDA #TRUE
    // Overlapping static entry reached from 0xEF0F75.
    case 0xEF0F77: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60.asm:15 BRA @UNKNOWN9
    case 0xEF0F78: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/unknown/EF/EF0F60.asm:17 LDA WINDOW_HEAD
    case 0xEF0F7A: cpu.execute_instruction<0xAD>(0x0088E0, 3); return true;
    // src/unknown/EF/EF0F60.asm:18 CMP #.LOWORD(-1)
    case 0xEF0F7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF0F60.asm:18 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF0F7D.
    case 0xEF0F7F: cpu.execute_instruction<0xFF>(0xA905F0, 4); return true;
    // src/unknown/EF/EF0F60.asm:19 BEQ @UNKNOWN2
    case 0xEF0F80: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:20 LDA #TRUE
    case 0xEF0F82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60.asm:20 LDA #TRUE
    // Overlapping static entry reached from 0xEF0F7F.
    case 0xEF0F83: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EF0F60.asm:20 LDA #TRUE
    // Overlapping static entry reached from 0xEF0F82.
    case 0xEF0F84: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60.asm:21 BRA @UNKNOWN9
    case 0xEF0F85: cpu.execute_instruction<0x80>(0x000053, 2); return true;
    // src/unknown/EF/EF0F60.asm:23 LDA ENTITY_FADE_ENTITY
    case 0xEF0F87: cpu.execute_instruction<0xAD>(0x00B4A8, 3); return true;
    // src/unknown/EF/EF0F60.asm:24 CMP #.LOWORD(-1)
    case 0xEF0F8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF0F60.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF0F8A.
    case 0xEF0F8C: cpu.execute_instruction<0xFF>(0xA905F0, 4); return true;
    // src/unknown/EF/EF0F60.asm:25 BEQ @UNKNOWN3
    case 0xEF0F8D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:26 LDA #TRUE
    case 0xEF0F8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60.asm:26 LDA #TRUE
    // Overlapping static entry reached from 0xEF0F8C.
    case 0xEF0F90: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EF0F60.asm:26 LDA #TRUE
    // Overlapping static entry reached from 0xEF0F8F.
    case 0xEF0F91: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60.asm:27 BRA @UNKNOWN9
    case 0xEF0F92: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/EF/EF0F60.asm:29 LDA OVERWORLD_STATUS_SUPPRESSION
    case 0xEF0F94: cpu.execute_instruction<0xAD>(0x005D98, 3); return true;
    // src/unknown/EF/EF0F60.asm:30 BEQ @UNKNOWN4
    case 0xEF0F97: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:31 LDA #TRUE
    case 0xEF0F99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60.asm:31 LDA #TRUE
    // Overlapping static entry reached from 0xEF0FA8.
    case 0xEF0F9A: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EF0F60.asm:31 LDA #TRUE
    // Overlapping static entry reached from 0xEF0F99.
    case 0xEF0F9B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60.asm:32 BRA @UNKNOWN9
    case 0xEF0F9C: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/unknown/EF/EF0F60.asm:34 LDA GAME_STATE+game_state::current_party_members
    case 0xEF0F9E: cpu.execute_instruction<0xAD>(0x009889, 3); return true;
    // src/unknown/EF/EF0F60.asm:35 ASL
    case 0xEF0FA1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0F60.asm:36 TAX
    case 0xEF0FA2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0F60.asm:37 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xEF0FA3: cpu.execute_instruction<0xBD>(0x00116A, 3); return true;
    // src/unknown/EF/EF0F60.asm:38 AND #$8000
    case 0xEF0FA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EF0F60.asm:38 AND #$8000
    // Overlapping static entry reached from 0xEF0FA6.
    case 0xEF0FA8: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60.asm:39 BEQ @UNKNOWN5
    case 0xEF0FA9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:40 LDA #TRUE
    case 0xEF0FAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60.asm:40 LDA #TRUE
    // Overlapping static entry reached from 0xEF0FAB.
    case 0xEF0FAD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60.asm:41 BRA @UNKNOWN9
    case 0xEF0FAE: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/unknown/EF/EF0F60.asm:43 LDA ENTITY_TICK_CALLBACK_HIGH+46
    case 0xEF0FB0: cpu.execute_instruction<0xAD>(0x0010E4, 3); return true;
    // src/unknown/EF/EF0F60.asm:44 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xEF0FB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00C000, 3); return true;
    // src/unknown/EF/EF0F60.asm:44 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xEF0FB3.
    case 0xEF0FB5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000F0, 2); else cpu.execute_instruction<0xC0>(0x0005F0, 3); return true;
    // src/unknown/EF/EF0F60.asm:45 BEQ @UNKNOWN6
    case 0xEF0FB6: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:45 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xEF0FB5.
    case 0xEF0FB7: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/unknown/EF/EF0F60.asm:46 LDA #0
    case 0xEF0FB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EF0F60.asm:46 LDA #0
    // Overlapping static entry reached from 0xEF0FB7.
    case 0xEF0FB9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF0F60.asm:46 LDA #0
    // Overlapping static entry reached from 0xEF0FB8.
    case 0xEF0FBA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60.asm:47 BRA @UNKNOWN7
    case 0xEF0FBB: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EF0F60.asm:49 LDA PENDING_INTERACTIONS
    case 0xEF0FBD: cpu.execute_instruction<0xAD>(0x005D9A, 3); return true;
    // src/unknown/EF/EF0F60.asm:51 LDX GAME_STATE+game_state::walking_style
    case 0xEF0FC0: cpu.execute_instruction<0xAE>(0x009883, 3); return true;
    // src/unknown/EF/EF0F60.asm:52 CPX #WALKING_STYLE::LADDER
    case 0xEF0FC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/unknown/EF/EF0F60.asm:52 CPX #WALKING_STYLE::LADDER
    // Overlapping static entry reached from 0xEF0FC3.
    case 0xEF0FC5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60.asm:53 BEQ @UNKNOWN8
    case 0xEF0FC6: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/EF/EF0F60.asm:54 CPX #WALKING_STYLE::ROPE
    case 0xEF0FC8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/EF/EF0F60.asm:54 CPX #WALKING_STYLE::ROPE
    // Overlapping static entry reached from 0xEF0FC8.
    case 0xEF0FCA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60.asm:55 BEQ @UNKNOWN8
    case 0xEF0FCB: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/EF/EF0F60.asm:56 CPX #WALKING_STYLE::ESCALATOR
    case 0xEF0FCD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000C, 2); else cpu.execute_instruction<0xE0>(0x00000C, 3); return true;
    // src/unknown/EF/EF0F60.asm:56 CPX #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xEF0FCD.
    case 0xEF0FCF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60.asm:57 BEQ @UNKNOWN8
    case 0xEF0FD0: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60.asm:58 CPX #WALKING_STYLE::STAIRS
    case 0xEF0FD2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000D, 2); else cpu.execute_instruction<0xE0>(0x00000D, 3); return true;
    // src/unknown/EF/EF0F60.asm:58 CPX #WALKING_STYLE::STAIRS
    // Overlapping static entry reached from 0xEF0FD2.
    case 0xEF0FD4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF0F60.asm:59 BNE @UNKNOWN9
    case 0xEF0FD5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/EF/EF0F60.asm:61 LDA #TRUE
    case 0xEF0FD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60.asm:61 LDA #TRUE
    // Overlapping static entry reached from 0xEF0FD7.
    case 0xEF0FD9: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0F60.asm:63 END_C_FUNCTION
    case 0xEF0FDA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0FDB.asm (unresolved).
bool execute_unresolved_ef_ef0fdb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0FDB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0FDB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0FDB.asm:5 LDA #1
    case 0xEF0FDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0FDB.asm:5 LDA #1
    // Overlapping static entry reached from 0xEF0FDD.
    case 0xEF0FDF: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF0FDB.asm:6 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xEF0FE0: cpu.execute_instruction<0x8D>(0x005D98, 3); return true;
    // src/unknown/EF/EF0FDB.asm:7 STA PENDING_INTERACTIONS
    case 0xEF0FE3: cpu.execute_instruction<0x8D>(0x005D9A, 3); return true;
    // src/unknown/EF/EF0FDB.asm:8 JSL UNKNOWN_C09F3B_ENTRY2
    case 0xEF0FE6: cpu.execute_instruction<0x22>(0xC09F43, 4); return true;
    // src/unknown/EF/EF0FDB.asm:9 LDA #MUSIC::DELIVERY
    case 0xEF0FEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000059, 2); else cpu.execute_instruction<0xA9>(0x000059, 3); return true;
    // src/unknown/EF/EF0FDB.asm:9 LDA #MUSIC::DELIVERY
    // Overlapping static entry reached from 0xEF0FEA.
    case 0xEF0FEC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0FDB.asm:10 JSL CHANGE_MUSIC
    case 0xEF0FED: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/EF/EF0FDB.asm:11 JSL UNKNOWN_C03CFD
    case 0xEF0FF1: cpu.execute_instruction<0x22>(0xC03CFD, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0FDB.asm:12 END_C_FUNCTION
    case 0xEF0FF5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0FF6.asm (unresolved).
bool execute_unresolved_ef_ef0ff6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0FF6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0FF6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0FF6.asm:5 STZ PENDING_INTERACTIONS
    case 0xEF0FF8: cpu.execute_instruction<0x9C>(0x005D9A, 3); return true;
    // src/unknown/EF/EF0FF6.asm:6 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xEF0FFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x000049, 3); return true;
    // src/unknown/EF/EF0FF6.asm:6 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xEF0FFB.
    case 0xEF0FFD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0FF6.asm:7 JSL GET_EVENT_FLAG
    case 0xEF0FFE: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/EF/EF0FF6.asm:8 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xEF1002: cpu.execute_instruction<0x8D>(0x005D98, 3); return true;
    // src/unknown/EF/EF0FF6.asm:9 LDA GAME_STATE+game_state::walking_style
    case 0xEF1005: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/unknown/EF/EF0FF6.asm:10 CMP #WALKING_STYLE::BICYCLE
    case 0xEF1008: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF0FF6.asm:10 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xEF1008.
    case 0xEF100A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF0FF6.asm:11 BNE @UNKNOWN0
    case 0xEF100B: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/EF/EF0FF6.asm:12 LDA #MUSIC::BICYCLE
    case 0xEF100D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000052, 2); else cpu.execute_instruction<0xA9>(0x000052, 3); return true;
    // src/unknown/EF/EF0FF6.asm:12 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xEF100D.
    case 0xEF100F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0FF6.asm:13 JSL CHANGE_MUSIC
    case 0xEF1010: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/EF/EF0FF6.asm:14 BRA @UNKNOWN1
    case 0xEF1014: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EF0FF6.asm:16 JSL UNKNOWN_C06A07
    case 0xEF1016: cpu.execute_instruction<0x22>(0xC06A07, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0FF6.asm:18 END_C_FUNCTION
    case 0xEF101A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFD56F.asm (unresolved).
bool execute_unresolved_ef_efd56f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFD56F.asm:3 BEGIN_C_FUNCTION
    case 0xEFD56F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    case 0xEFD571: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    case 0xEFD572: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    case 0xEFD573: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    case 0xEFD574: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xEFD574.
    case 0xEFD576: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    case 0xEFD577: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    case 0xEFD578: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:13 STY @LOCAL03
    case 0xEFD579: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/EF/EFD56F.asm:13 STY @LOCAL03
    // Overlapping static entry reached from 0xEFD576.
    case 0xEFD57A: cpu.execute_instruction<0x14>(0x000086, 2); return true;
    // src/unknown/EF/EFD56F.asm:14 STX @VIRTUAL04
    case 0xEFD57B: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:14 STX @VIRTUAL04
    // Overlapping static entry reached from 0xEFD57A.
    case 0xEFD57C: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/EF/EFD56F.asm:15 STA @VIRTUAL02
    case 0xEFD57D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD56F.asm:15 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFD57C.
    case 0xEFD57E: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD56F.asm:16 LDA #04
    case 0xEFD57F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFD56F.asm:16 LDA #04
    // Overlapping static entry reached from 0xEFD57F.
    case 0xEFD581: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD56F.asm:17 JSL SBRK
    case 0xEFD582: cpu.execute_instruction<0x22>(0xC086DE, 4); return true;
    // src/unknown/EF/EFD56F.asm:18 TAX
    case 0xEFD586: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:19 LDY @LOCAL03
    case 0xEFD587: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/EF/EFD56F.asm:20 TYA
    case 0xEFD589: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:21 LSR
    case 0xEFD58A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:22 LSR
    case 0xEFD58B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:23 LSR
    case 0xEFD58C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:24 LSR
    case 0xEFD58D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:25 CMP #10
    case 0xEFD58E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD56F.asm:25 CMP #10
    // Overlapping static entry reached from 0xEFD58E.
    case 0xEFD590: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFD56F.asm:26 BCC @UNKNOWN0
    case 0xEFD591: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:27 CLC
    case 0xEFD593: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:28 ADC #7
    case 0xEFD594: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/EF/EFD56F.asm:28 ADC #7
    // Overlapping static entry reached from 0xEFD594.
    case 0xEFD596: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFD56F.asm:30 CLC
    case 0xEFD597: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:31 ADC #$2030
    case 0xEFD598: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x002030, 3); return true;
    // src/unknown/EF/EFD56F.asm:31 ADC #$2030
    // Overlapping static entry reached from 0xEFD598.
    case 0xEFD59A: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/unknown/EF/EFD56F.asm:32 STA __BSS_START__,X
    case 0xEFD59B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFD56F.asm:32 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFD59A.
    case 0xEFD59D: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/EF/EFD56F.asm:33 TYA
    case 0xEFD59E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:34 AND #$000F
    case 0xEFD59F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/EF/EFD56F.asm:34 AND #$000F
    // Overlapping static entry reached from 0xEFD59F.
    case 0xEFD5A1: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD56F.asm:35 CMP #10
    case 0xEFD5A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD56F.asm:35 CMP #10
    // Overlapping static entry reached from 0xEFD5A2.
    case 0xEFD5A4: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFD56F.asm:36 BCC @UNKNOWN1
    case 0xEFD5A5: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:37 CLC
    case 0xEFD5A7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:38 ADC #7
    case 0xEFD5A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/EF/EFD56F.asm:38 ADC #7
    // Overlapping static entry reached from 0xEFD5A8.
    case 0xEFD5AA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFD56F.asm:40 CLC
    case 0xEFD5AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:41 ADC #$2030
    case 0xEFD5AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x002030, 3); return true;
    // src/unknown/EF/EFD56F.asm:41 ADC #$2030
    // Overlapping static entry reached from 0xEFD5AC.
    case 0xEFD5AE: cpu.execute_instruction<0x20>(0x00029D, 3); return true;
    // src/unknown/EF/EFD56F.asm:42 STA __BSS_START__+2,X
    case 0xEFD5AF: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/EF/EFD56F.asm:42 STA __BSS_START__+2,X
    // Overlapping static entry reached from 0xEFD5AE.
    case 0xEFD5B1: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFD56F.asm:43 LDA @VIRTUAL04
    case 0xEFD5B2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:44 ASL
    case 0xEFD5B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:45 ASL
    case 0xEFD5B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:46 ASL
    case 0xEFD5B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:47 ASL
    case 0xEFD5B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:48 ASL
    case 0xEFD5B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:49 CLC
    case 0xEFD5B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:50 ADC @VIRTUAL02
    case 0xEFD5BA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFD56F.asm:51 CLC
    case 0xEFD5BC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:52 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xEFD5BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFD56F.asm:52 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFD5BD.
    case 0xEFD5BF: cpu.execute_instruction<0x7C>(0x001285, 3); return true;
    // src/unknown/EF/EFD56F.asm:53 STA @LOCAL02
    case 0xEFD5C0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFD56F.asm:54 LDA #$007E
    case 0xEFD5C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/EF/EFD56F.asm:54 LDA #$007E
    // Overlapping static entry reached from 0xEFD5C2.
    case 0xEFD5C4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD56F.asm:55 STA @LOCAL00
    case 0xEFD5C5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD56F.asm:56 LDA @LOCAL02
    case 0xEFD5C7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFD56F.asm:57 STA @LOCAL01
    case 0xEFD5C9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD56F.asm:58 TXY
    case 0xEFD5CB: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:59 LDX #4
    case 0xEFD5CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EFD56F.asm:59 LDX #4
    // Overlapping static entry reached from 0xEFD5CC.
    case 0xEFD5CE: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFD56F.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xEFD5CF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFD56F.asm:61 LDA #0
    case 0xEFD5D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/EF/EFD56F.asm:62 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFD5D3: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/unknown/EF/EFD56F.asm:62 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFD5D1.
    case 0xEFD5D4: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFD56F.asm:63 END_C_FUNCTION
    case 0xEFD5D7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFD56F.asm:63 END_C_FUNCTION
    case 0xEFD5D8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFD5D9.asm (unresolved).
bool execute_unresolved_ef_efd5d9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFD5D9.asm:3 BEGIN_C_FUNCTION
    case 0xEFD5D9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFD5D9.asm:8 END_STACK_VARS
    case 0xEFD5DB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFD5D9.asm:8 END_STACK_VARS
    case 0xEFD5DC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFD5D9.asm:8 END_STACK_VARS
    case 0xEFD5DD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD5D9.asm:8 END_STACK_VARS
    case 0xEFD5DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD5D9.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEFD5DE.
    case 0xEFD5E0: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFD5D9.asm:8 END_STACK_VARS
    case 0xEFD5E1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFD5D9.asm:8 END_STACK_VARS
    case 0xEFD5E2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:9 STA @VIRTUAL02
    case 0xEFD5E3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD5D9.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFD5E0.
    case 0xEFD5E4: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/EF/EFD5D9.asm:10 LDY #0
    case 0xEFD5E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFD5D9.asm:10 LDY #0
    // Overlapping static entry reached from 0xEFD5E5.
    case 0xEFD5E7: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFD5D9.asm:11 LDX #1
    case 0xEFD5E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFD5D9.asm:11 LDX #1
    // Overlapping static entry reached from 0xEFD5E8.
    case 0xEFD5EA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:12 LDA #4
    case 0xEFD5EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFD5D9.asm:12 LDA #4
    // Overlapping static entry reached from 0xEFD5EB.
    case 0xEFD5ED: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD5D9.asm:13 JSL FADE_OUT_WITH_MOSAIC
    case 0xEFD5EE: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/unknown/EF/EFD5D9.asm:14 JSL UNKNOWN_C0927C
    case 0xEFD5F2: cpu.execute_instruction<0x22>(0xC0927C, 4); return true;
    // src/unknown/EF/EFD5D9.asm:15 JSR UNKNOWN_EFDA05
    case 0xEFD5F6: cpu.execute_instruction<0x20>(0x00DA05, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD5D9.asm:16 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    case 0xEFD5F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00D51B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD5D9.asm:16 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD5F9.
    case 0xEFD5FB: cpu.execute_instruction<0xD5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFD5D9.asm:16 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    case 0xEFD5FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFD5D9.asm:16 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD5FB.
    case 0xEFD5FD: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD5D9.asm:16 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    case 0xEFD5FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD5D9.asm:16 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD5FD.
    case 0xEFD5FF: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD5D9.asm:16 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD5FE.
    case 0xEFD600: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:16 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    case 0xEFD601: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFD5D9.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD603: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFD5D9.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD605: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD607: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD609: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFD5D9.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD60B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFD5D9.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD60D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD60F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD611: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9.asm:19 LDX #5
    case 0xEFD613: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/EF/EFD5D9.asm:19 LDX #5
    // Overlapping static entry reached from 0xEFD613.
    case 0xEFD615: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:20 LDA #10
    case 0xEFD616: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9.asm:20 LDA #10
    // Overlapping static entry reached from 0xEFD616.
    case 0xEFD618: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9.asm:21 JSR UNKNOWN_EFDABD
    case 0xEFD619: cpu.execute_instruction<0x20>(0x00DABD, 3); return true;
    // src/unknown/EF/EFD5D9.asm:22 LDA #14
    case 0xEFD61C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/EF/EFD5D9.asm:22 LDA #14
    // Overlapping static entry reached from 0xEFD61C.
    case 0xEFD61E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EFD5D9.asm:23 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD61F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EFD5D9.asm:23 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD621: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:23 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD623: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:23 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD625: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:24 CLC
    case 0xEFD627: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:25 ADC @VIRTUAL06
    case 0xEFD628: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:26 STA @VIRTUAL06
    case 0xEFD62A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:27 STA @LOCAL00
    case 0xEFD62C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9.asm:28 LDA @VIRTUAL06+2
    case 0xEFD62E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:29 STA @LOCAL00+2
    case 0xEFD630: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9.asm:30 LDX #10
    case 0xEFD632: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9.asm:30 LDX #10
    // Overlapping static entry reached from 0xEFD632.
    case 0xEFD634: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EFD5D9.asm:31 TXA
    case 0xEFD635: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:32 JSR UNKNOWN_EFDABD
    case 0xEFD636: cpu.execute_instruction<0x20>(0x00DABD, 3); return true;
    // src/unknown/EF/EFD5D9.asm:33 LDA #28
    case 0xEFD639: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/unknown/EF/EFD5D9.asm:33 LDA #28
    // Overlapping static entry reached from 0xEFD639.
    case 0xEFD63B: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EFD5D9.asm:34 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD63C: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EFD5D9.asm:34 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD63E: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:34 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD640: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:34 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD642: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:35 CLC
    case 0xEFD644: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:36 ADC @VIRTUAL06
    case 0xEFD645: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:37 STA @VIRTUAL06
    case 0xEFD647: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:38 STA @LOCAL00
    case 0xEFD649: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9.asm:39 LDA @VIRTUAL06+2
    case 0xEFD64B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:40 STA @LOCAL00+2
    case 0xEFD64D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9.asm:41 LDX #12
    case 0xEFD64F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/unknown/EF/EFD5D9.asm:41 LDX #12
    // Overlapping static entry reached from 0xEFD64F.
    case 0xEFD651: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:42 LDA #10
    case 0xEFD652: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9.asm:42 LDA #10
    // Overlapping static entry reached from 0xEFD652.
    case 0xEFD654: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9.asm:43 JSR UNKNOWN_EFDABD
    case 0xEFD655: cpu.execute_instruction<0x20>(0x00DABD, 3); return true;
    // src/unknown/EF/EFD5D9.asm:44 LDA #42
    case 0xEFD658: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x00002A, 3); return true;
    // src/unknown/EF/EFD5D9.asm:44 LDA #42
    // Overlapping static entry reached from 0xEFD658.
    case 0xEFD65A: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EFD5D9.asm:45 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD65B: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EFD5D9.asm:45 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD65D: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:45 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD65F: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:45 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD661: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:46 CLC
    case 0xEFD663: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:47 ADC @VIRTUAL06
    case 0xEFD664: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:48 STA @VIRTUAL06
    case 0xEFD666: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:49 STA @LOCAL00
    case 0xEFD668: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9.asm:50 LDA @VIRTUAL06+2
    case 0xEFD66A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:51 STA @LOCAL00+2
    case 0xEFD66C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9.asm:52 LDX #14
    case 0xEFD66E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000E, 2); else cpu.execute_instruction<0xA2>(0x00000E, 3); return true;
    // src/unknown/EF/EFD5D9.asm:52 LDX #14
    // Overlapping static entry reached from 0xEFD66E.
    case 0xEFD670: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:53 LDA #10
    case 0xEFD671: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9.asm:53 LDA #10
    // Overlapping static entry reached from 0xEFD671.
    case 0xEFD673: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9.asm:54 JSR UNKNOWN_EFDABD
    case 0xEFD674: cpu.execute_instruction<0x20>(0x00DABD, 3); return true;
    // src/unknown/EF/EFD5D9.asm:55 LDA #56
    case 0xEFD677: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000038, 2); else cpu.execute_instruction<0xA9>(0x000038, 3); return true;
    // src/unknown/EF/EFD5D9.asm:55 LDA #56
    // Overlapping static entry reached from 0xEFD677.
    case 0xEFD679: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EFD5D9.asm:56 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD67A: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EFD5D9.asm:56 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD67C: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:56 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD67E: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:56 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD680: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:57 CLC
    case 0xEFD682: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:58 ADC @VIRTUAL06
    case 0xEFD683: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:59 STA @VIRTUAL06
    case 0xEFD685: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:60 STA @LOCAL00
    case 0xEFD687: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9.asm:61 LDA @VIRTUAL06+2
    case 0xEFD689: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:62 STA @LOCAL00+2
    case 0xEFD68B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9.asm:63 LDX #20
    case 0xEFD68D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000014, 2); else cpu.execute_instruction<0xA2>(0x000014, 3); return true;
    // src/unknown/EF/EFD5D9.asm:63 LDX #20
    // Overlapping static entry reached from 0xEFD68D.
    case 0xEFD68F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:64 LDA #9
    case 0xEFD690: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/EF/EFD5D9.asm:64 LDA #9
    // Overlapping static entry reached from 0xEFD690.
    case 0xEFD692: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9.asm:65 JSR UNKNOWN_EFDABD
    case 0xEFD693: cpu.execute_instruction<0x20>(0x00DABD, 3); return true;
    // src/unknown/EF/EFD5D9.asm:66 LDA #70
    case 0xEFD696: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000046, 2); else cpu.execute_instruction<0xA9>(0x000046, 3); return true;
    // src/unknown/EF/EFD5D9.asm:66 LDA #70
    // Overlapping static entry reached from 0xEFD696.
    case 0xEFD698: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EFD5D9.asm:67 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD699: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EFD5D9.asm:67 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD69B: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:67 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD69D: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EFD5D9.asm:67 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xEFD69F: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:68 CLC
    case 0xEFD6A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:69 ADC @VIRTUAL06
    case 0xEFD6A2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:70 STA @VIRTUAL06
    case 0xEFD6A4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9.asm:71 STA @LOCAL00
    case 0xEFD6A6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9.asm:72 LDA @VIRTUAL06+2
    case 0xEFD6A8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9.asm:73 STA @LOCAL00+2
    case 0xEFD6AA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9.asm:74 LDX #22
    case 0xEFD6AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000016, 2); else cpu.execute_instruction<0xA2>(0x000016, 3); return true;
    // src/unknown/EF/EFD5D9.asm:74 LDX #22
    // Overlapping static entry reached from 0xEFD6AC.
    case 0xEFD6AE: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:75 LDA #10
    case 0xEFD6AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9.asm:75 LDA #10
    // Overlapping static entry reached from 0xEFD6AF.
    case 0xEFD6B1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9.asm:76 JSR UNKNOWN_EFDABD
    case 0xEFD6B2: cpu.execute_instruction<0x20>(0x00DABD, 3); return true;
    // src/unknown/EF/EFD5D9.asm:77 LDA @VIRTUAL02
    case 0xEFD6B5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD5D9.asm:78 ASL
    case 0xEFD6B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:79 TAX
    case 0xEFD6B8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9.asm:80 LDA #64
    case 0xEFD6B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFD5D9.asm:80 LDA #64
    // Overlapping static entry reached from 0xEFD6B9.
    case 0xEFD6BB: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EFD5D9.asm:81 STA ENTITY_ABS_X_TABLE,X
    case 0xEFD6BC: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/EF/EFD5D9.asm:82 LDA #80
    case 0xEFD6BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x000050, 3); return true;
    // src/unknown/EF/EFD5D9.asm:82 LDA #80
    // Overlapping static entry reached from 0xEFD6BF.
    case 0xEFD6C1: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EFD5D9.asm:83 STA ENTITY_ABS_Y_TABLE,X
    case 0xEFD6C2: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/EF/EFD5D9.asm:84 LDY #0
    case 0xEFD6C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFD5D9.asm:84 LDY #0
    // Overlapping static entry reached from 0xEFD6C5.
    case 0xEFD6C7: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFD5D9.asm:85 LDX #1
    case 0xEFD6C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFD5D9.asm:85 LDX #1
    // Overlapping static entry reached from 0xEFD6C8.
    case 0xEFD6CA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9.asm:86 LDA #4
    case 0xEFD6CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFD5D9.asm:86 LDA #4
    // Overlapping static entry reached from 0xEFD6CB.
    case 0xEFD6CD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD5D9.asm:87 JSL FADE_IN_WITH_MOSAIC
    case 0xEFD6CE: cpu.execute_instruction<0x22>(0xC087CE, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFD5D9.asm:88 END_C_FUNCTION
    case 0xEFD6D2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFD5D9.asm:88 END_C_FUNCTION
    case 0xEFD6D3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFD6D4.asm (unresolved).
bool execute_unresolved_ef_efd6d4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFD6D4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFD6D4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    case 0xEFD6D6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    case 0xEFD6D7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    case 0xEFD6D8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    case 0xEFD6D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEFD6D9.
    case 0xEFD6DB: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    case 0xEFD6DC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    case 0xEFD6DD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:7 STA @VIRTUAL04
    case 0xEFD6DE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:7 STA @VIRTUAL04
    // Overlapping static entry reached from 0xEFD6DB.
    case 0xEFD6DF: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:8 LDA #0
    case 0xEFD6E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:8 LDA #0
    // Overlapping static entry reached from 0xEFD6DF.
    case 0xEFD6E1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:8 LDA #0
    // Overlapping static entry reached from 0xEFD6E0.
    case 0xEFD6E2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD6D4.asm:9 STA @VIRTUAL02
    case 0xEFD6E3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:10 LDX CURRENT_MUSIC_TRACK
    case 0xEFD6E5: cpu.execute_instruction<0xAE>(0x00B53B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:11 STX DEBUG_SOUND_MENU_INITIAL_BGM
    case 0xEFD6E8: cpu.execute_instruction<0x8E>(0x00B545, 3); return true;
    // src/unknown/EF/EFD6D4.asm:12 STX DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFD6EB: cpu.execute_instruction<0x8E>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:13 LDA #2
    case 0xEFD6EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFD6D4.asm:13 LDA #2
    // Overlapping static entry reached from 0xEFD6EE.
    case 0xEFD6F0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:14 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFD6F1: cpu.execute_instruction<0x8D>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:15 LDA @VIRTUAL04
    case 0xEFD6F4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:16 JSR UNKNOWN_EFD5D9
    case 0xEFD6F6: cpu.execute_instruction<0x20>(0x00D5D9, 3); return true;
    // src/unknown/EF/EFD6D4.asm:18 JSL UPDATE_SCREEN
    case 0xEFD6F9: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/unknown/EF/EFD6D4.asm:19 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xEFD6FD: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/EF/EFD6D4.asm:20 LDA PAD_PRESS
    case 0xEFD701: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:21 AND #PAD::Y_BUTTON
    case 0xEFD704: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:21 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFD704.
    case 0xEFD706: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:22 BEQ @UNKNOWN1
    case 0xEFD707: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:23 JSR UNKNOWN_EFE175
    case 0xEFD709: cpu.execute_instruction<0x20>(0x00E175, 3); return true;
    // src/unknown/EF/EFD6D4.asm:24 LDA @VIRTUAL04
    case 0xEFD70C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:25 JSR UNKNOWN_EFD5D9
    case 0xEFD70E: cpu.execute_instruction<0x20>(0x00D5D9, 3); return true;
    // src/unknown/EF/EFD6D4.asm:27 JSL OAM_CLEAR
    case 0xEFD711: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/EF/EFD6D4.asm:27 JSL OAM_CLEAR
    // Overlapping static entry reached from 0xEFD742.
    case 0xEFD714: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x006622, 3); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xEFD715: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    // Overlapping static entry reached from 0xEFD714.
    case 0xEFD716: cpu.execute_instruction<0x66>(0x000094, 2); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    // Overlapping static entry reached from 0xEFD714.
    case 0xEFD717: cpu.execute_instruction<0x94>(0x0000C0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    // Overlapping static entry reached from 0xEFD716.
    case 0xEFD718: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AC, 2); else cpu.execute_instruction<0xC0>(0x004BAC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:29 LDY DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFD719: cpu.execute_instruction<0xAC>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:29 LDY DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD718.
    case 0xEFD71A: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:29 LDY DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD718.
    case 0xEFD71B: cpu.execute_instruction<0xB5>(0x0000A2, 2); return true;
    // src/unknown/EF/EFD6D4.asm:30 LDX #10
    case 0xEFD71C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/EF/EFD6D4.asm:30 LDX #10
    // Overlapping static entry reached from 0xEFD71B.
    case 0xEFD71D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:30 LDX #10
    // Overlapping static entry reached from 0xEFD71C.
    case 0xEFD71E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:31 LDA #18
    case 0xEFD71F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/EF/EFD6D4.asm:31 LDA #18
    // Overlapping static entry reached from 0xEFD71F.
    case 0xEFD721: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD6D4.asm:32 JSR UNKNOWN_EFD56F
    case 0xEFD722: cpu.execute_instruction<0x20>(0x00D56F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:33 LDY DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFD725: cpu.execute_instruction<0xAC>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:34 LDX #12
    case 0xEFD728: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/unknown/EF/EFD6D4.asm:34 LDX #12
    // Overlapping static entry reached from 0xEFD728.
    case 0xEFD72A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:35 LDA #18
    case 0xEFD72B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/EF/EFD6D4.asm:35 LDA #18
    // Overlapping static entry reached from 0xEFD72B.
    case 0xEFD72D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD6D4.asm:36 JSR UNKNOWN_EFD56F
    case 0xEFD72E: cpu.execute_instruction<0x20>(0x00D56F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:37 LDY DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFD731: cpu.execute_instruction<0xAC>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:38 LDX #14
    case 0xEFD734: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000E, 2); else cpu.execute_instruction<0xA2>(0x00000E, 3); return true;
    // src/unknown/EF/EFD6D4.asm:38 LDX #14
    // Overlapping static entry reached from 0xEFD734.
    case 0xEFD736: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:39 LDA #18
    case 0xEFD737: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/EF/EFD6D4.asm:39 LDA #18
    // Overlapping static entry reached from 0xEFD737.
    case 0xEFD739: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD6D4.asm:40 JSR UNKNOWN_EFD56F
    case 0xEFD73A: cpu.execute_instruction<0x20>(0x00D56F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:41 LDA PAD_PRESS
    case 0xEFD73D: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:42 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    case 0xEFD740: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x003000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:42 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xEFD740.
    case 0xEFD742: cpu.execute_instruction<0x30>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFD6D4.asm:43 BEQL @UNKNOWN29
    case 0xEFD743: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFD6D4.asm:43 BEQL @UNKNOWN29
    // Overlapping static entry reached from 0xEFD742.
    case 0xEFD744: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFD6D4.asm:43 BEQL @UNKNOWN29
    case 0xEFD745: cpu.execute_instruction<0x4C>(0x00D8B3, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFD6D4.asm:43 BEQL @UNKNOWN29
    // Overlapping static entry reached from 0xEFD744.
    case 0xEFD746: cpu.execute_instruction<0xB3>(0x0000D8, 2); return true;
    // src/unknown/EF/EFD6D4.asm:44 LDA PAD_HELD
    case 0xEFD748: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:45 AND #PAD::UP
    case 0xEFD74B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/EF/EFD6D4.asm:45 AND #PAD::UP
    // Overlapping static entry reached from 0xEFD74B.
    case 0xEFD74D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:46 BEQ @UNKNOWN3
    case 0xEFD74E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFD6D4.asm:47 LDA @VIRTUAL02
    case 0xEFD750: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:48 DEC
    case 0xEFD752: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:49 STA @VIRTUAL02
    case 0xEFD753: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:51 LDA PAD_HELD
    case 0xEFD755: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:52 AND #PAD::DOWN
    case 0xEFD758: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/EF/EFD6D4.asm:52 AND #PAD::DOWN
    // Overlapping static entry reached from 0xEFD758.
    case 0xEFD75A: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:53 BEQ @UNKNOWN4
    case 0xEFD75B: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:53 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xEFD75A.
    case 0xEFD75C: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/unknown/EF/EFD6D4.asm:54 INC @VIRTUAL02
    case 0xEFD75D: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:56 LDA @VIRTUAL02
    case 0xEFD75F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:57 CMP #.LOWORD(-1)
    case 0xEFD761: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:57 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD790.
    case 0xEFD762: cpu.execute_instruction<0xFF>(0x05D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:57 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD761.
    case 0xEFD763: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:58 BNE @UNKNOWN5
    case 0xEFD764: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EFD6D4.asm:59 LDA #2
    case 0xEFD766: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFD6D4.asm:59 LDA #2
    // Overlapping static entry reached from 0xEFD763.
    case 0xEFD767: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:59 LDA #2
    // Overlapping static entry reached from 0xEFD766.
    case 0xEFD768: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD6D4.asm:60 STA @VIRTUAL02
    case 0xEFD769: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:62 LDA @VIRTUAL02
    case 0xEFD76B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:63 CMP #3
    case 0xEFD76D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFD6D4.asm:63 CMP #3
    // Overlapping static entry reached from 0xEFD76D.
    case 0xEFD76F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:64 BNE @UNKNOWN6
    case 0xEFD770: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EFD6D4.asm:65 LDA #0
    case 0xEFD772: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:65 LDA #0
    // Overlapping static entry reached from 0xEFD772.
    case 0xEFD774: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD6D4.asm:66 STA @VIRTUAL02
    case 0xEFD775: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:68 LDA PAD_PRESS
    case 0xEFD777: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:69 AND #PAD::L_BUTTON
    case 0xEFD77A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/unknown/EF/EFD6D4.asm:69 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xEFD77A.
    case 0xEFD77C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:70 BEQ @UNKNOWN7
    case 0xEFD77D: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/EF/EFD6D4.asm:71 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFD77F: cpu.execute_instruction<0xAD>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:72 STA DEBUG_SOUND_MENU_INITIAL_BGM
    case 0xEFD782: cpu.execute_instruction<0x8D>(0x00B545, 3); return true;
    // src/unknown/EF/EFD6D4.asm:73 LDA #46
    case 0xEFD785: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00002E, 3); return true;
    // src/unknown/EF/EFD6D4.asm:73 LDA #46
    // Overlapping static entry reached from 0xEFD785.
    case 0xEFD787: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:74 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFD788: cpu.execute_instruction<0x8D>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:76 LDA PAD_PRESS
    case 0xEFD78B: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:77 AND #PAD::B_BUTTON
    case 0xEFD78E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:77 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFD78E.
    case 0xEFD790: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:78 BNE @UNKNOWN8
    case 0xEFD791: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:79 LDA PAD_PRESS
    case 0xEFD793: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:80 AND #PAD::R_BUTTON
    case 0xEFD796: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/unknown/EF/EFD6D4.asm:80 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xEFD796.
    case 0xEFD798: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:81 BEQ @UNKNOWN9
    case 0xEFD799: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:83 LDA DEBUG_SOUND_MENU_INITIAL_BGM
    case 0xEFD79B: cpu.execute_instruction<0xAD>(0x00B545, 3); return true;
    // src/unknown/EF/EFD6D4.asm:84 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFD79E: cpu.execute_instruction<0x8D>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:86 LDA @VIRTUAL02
    case 0xEFD7A1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:87 BEQ @UNKNOWN11
    case 0xEFD7A3: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/EF/EFD6D4.asm:88 CMP #1
    case 0xEFD7A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:88 CMP #1
    // Overlapping static entry reached from 0xEFD7A5.
    case 0xEFD7A7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:89 BEQ @UNKNOWN17
    case 0xEFD7A8: cpu.execute_instruction<0xF0>(0x000061, 2); return true;
    // src/unknown/EF/EFD6D4.asm:90 CMP #2
    case 0xEFD7AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFD6D4.asm:90 CMP #2
    // Overlapping static entry reached from 0xEFD7AA.
    case 0xEFD7AC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFD6D4.asm:91 BEQL @UNKNOWN22
    case 0xEFD7AD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFD6D4.asm:91 BEQL @UNKNOWN22
    case 0xEFD7AF: cpu.execute_instruction<0x4C>(0x00D84E, 3); return true;
    // src/unknown/EF/EFD6D4.asm:92 JMP @UNKNOWN27
    case 0xEFD7B2: cpu.execute_instruction<0x4C>(0x00D88F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:94 LDA PAD_HELD
    case 0xEFD7B5: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:95 AND #PAD::LEFT
    case 0xEFD7B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/EF/EFD6D4.asm:95 AND #PAD::LEFT
    // Overlapping static entry reached from 0xEFD7B8.
    case 0xEFD7BA: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:96 BEQ @UNKNOWN12
    case 0xEFD7BB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:97 DEC DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFD7BD: cpu.execute_instruction<0xCE>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:99 LDA PAD_HELD
    case 0xEFD7C0: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:100 AND #PAD::RIGHT
    case 0xEFD7C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/EF/EFD6D4.asm:100 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xEFD7C3.
    case 0xEFD7C5: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:101 BEQ @UNKNOWN13
    case 0xEFD7C6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:101 BEQ @UNKNOWN13
    // Overlapping static entry reached from 0xEFD7C5.
    case 0xEFD7C7: cpu.execute_instruction<0x03>(0x0000EE, 2); return true;
    // src/unknown/EF/EFD6D4.asm:102 INC DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFD7C8: cpu.execute_instruction<0xEE>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:102 INC DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7C7.
    case 0xEFD7C9: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:102 INC DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7C9.
    case 0xEFD7CA: cpu.execute_instruction<0xB5>(0x0000AD, 2); return true;
    // src/unknown/EF/EFD6D4.asm:104 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFD7CB: cpu.execute_instruction<0xAD>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:104 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7CA.
    case 0xEFD7CC: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:104 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7CC.
    case 0xEFD7CD: cpu.execute_instruction<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:105 CMP #.LOWORD(-1)
    case 0xEFD7CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:105 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD7CD.
    case 0xEFD7CF: cpu.execute_instruction<0xFF>(0x06D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:105 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD7CE.
    case 0xEFD7D0: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:106 BNE @UNKNOWN14
    case 0xEFD7D1: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:107 LDA #191
    case 0xEFD7D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BF, 2); else cpu.execute_instruction<0xA9>(0x0000BF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:107 LDA #191
    // Overlapping static entry reached from 0xEFD7D0.
    case 0xEFD7D4: cpu.execute_instruction<0xBF>(0x4B8D00, 4); return true;
    // src/unknown/EF/EFD6D4.asm:107 LDA #191
    // Overlapping static entry reached from 0xEFD7D3.
    case 0xEFD7D5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:108 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFD7D6: cpu.execute_instruction<0x8D>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:108 STA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7D4.
    case 0xEFD7D8: cpu.execute_instruction<0xB5>(0x0000AD, 2); return true;
    // src/unknown/EF/EFD6D4.asm:110 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFD7D9: cpu.execute_instruction<0xAD>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:110 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7D8.
    case 0xEFD7DA: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:110 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFD7DA.
    case 0xEFD7DB: cpu.execute_instruction<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:111 CMP #192
    case 0xEFD7DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0000C0, 3); return true;
    // src/unknown/EF/EFD6D4.asm:111 CMP #192
    // Overlapping static entry reached from 0xEFD7DB.
    case 0xEFD7DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x00D000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:111 CMP #192
    // Overlapping static entry reached from 0xEFD7DC.
    case 0xEFD7DE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:112 BNE @UNKNOWN15
    case 0xEFD7DF: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:112 BNE @UNKNOWN15
    // Overlapping static entry reached from 0xEFD7DD.
    case 0xEFD7E0: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:113 LDA #1
    case 0xEFD7E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:113 LDA #1
    // Overlapping static entry reached from 0xEFD7E0.
    case 0xEFD7E2: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:113 LDA #1
    // Overlapping static entry reached from 0xEFD7E1.
    case 0xEFD7E3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:114 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFD7E4: cpu.execute_instruction<0x8D>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:116 LDA PAD_PRESS
    case 0xEFD7E7: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:117 AND #PAD::A_BUTTON
    case 0xEFD7EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:117 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFD7EA.
    case 0xEFD7EC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFD6D4.asm:118 BEQL @UNKNOWN27
    case 0xEFD7ED: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFD6D4.asm:118 BEQL @UNKNOWN27
    case 0xEFD7EF: cpu.execute_instruction<0x4C>(0x00D88F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:119 JSL STOP_MUSIC
    case 0xEFD7F2: cpu.execute_instruction<0x22>(0xC0ABC6, 4); return true;
    // src/unknown/EF/EFD6D4.asm:120 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xEFD7F6: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/EF/EFD6D4.asm:121 LDA CURRENT_MUSIC_TRACK
    case 0xEFD7FA: cpu.execute_instruction<0xAD>(0x00B53B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:122 JSL UNKNOWN_C0AC20
    case 0xEFD7FD: cpu.execute_instruction<0x22>(0xC0AC20, 4); return true;
    // src/unknown/EF/EFD6D4.asm:123 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFD801: cpu.execute_instruction<0xAD>(0x00B54B, 3); return true;
    // src/unknown/EF/EFD6D4.asm:124 JSL CHANGE_MUSIC
    case 0xEFD804: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/EF/EFD6D4.asm:125 JMP @UNKNOWN27
    case 0xEFD808: cpu.execute_instruction<0x4C>(0x00D88F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:127 LDA PAD_HELD
    case 0xEFD80B: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:128 AND #PAD::LEFT
    case 0xEFD80E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/EF/EFD6D4.asm:128 AND #PAD::LEFT
    // Overlapping static entry reached from 0xEFD80E.
    case 0xEFD810: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:129 BEQ @UNKNOWN18
    case 0xEFD811: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:130 DEC DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFD813: cpu.execute_instruction<0xCE>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:132 LDA PAD_HELD
    case 0xEFD816: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:133 AND #PAD::RIGHT
    case 0xEFD819: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/EF/EFD6D4.asm:133 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xEFD819.
    case 0xEFD81B: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:134 BEQ @UNKNOWN19
    case 0xEFD81C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:134 BEQ @UNKNOWN19
    // Overlapping static entry reached from 0xEFD81B.
    case 0xEFD81D: cpu.execute_instruction<0x03>(0x0000EE, 2); return true;
    // src/unknown/EF/EFD6D4.asm:135 INC DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFD81E: cpu.execute_instruction<0xEE>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:135 INC DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFD81D.
    case 0xEFD81F: cpu.execute_instruction<0x4D>(0x00ADB5, 3); return true;
    // src/unknown/EF/EFD6D4.asm:137 LDA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFD821: cpu.execute_instruction<0xAD>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:137 LDA DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFD81F.
    case 0xEFD822: cpu.execute_instruction<0x4D>(0x00C9B5, 3); return true;
    // src/unknown/EF/EFD6D4.asm:138 CMP #.LOWORD(-1)
    case 0xEFD824: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:138 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD822.
    case 0xEFD825: cpu.execute_instruction<0xFF>(0x06D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:138 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD824.
    case 0xEFD826: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:139 BNE @UNKNOWN20
    case 0xEFD827: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:140 LDA #127
    case 0xEFD829: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:140 LDA #127
    // Overlapping static entry reached from 0xEFD826.
    case 0xEFD82A: cpu.execute_instruction<0x7F>(0x4D8D00, 4); return true;
    // src/unknown/EF/EFD6D4.asm:140 LDA #127
    // Overlapping static entry reached from 0xEFD829.
    case 0xEFD82B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:141 STA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFD82C: cpu.execute_instruction<0x8D>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:141 STA DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFD82A.
    case 0xEFD82E: cpu.execute_instruction<0xB5>(0x0000AD, 2); return true;
    // src/unknown/EF/EFD6D4.asm:143 LDA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFD82F: cpu.execute_instruction<0xAD>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:143 LDA DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFD82E.
    case 0xEFD830: cpu.execute_instruction<0x4D>(0x00C9B5, 3); return true;
    // src/unknown/EF/EFD6D4.asm:144 CMP #128
    case 0xEFD832: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:144 CMP #128
    // Overlapping static entry reached from 0xEFD830.
    case 0xEFD833: cpu.execute_instruction<0x80>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:144 CMP #128
    // Overlapping static entry reached from 0xEFD832.
    case 0xEFD834: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:145 BNE @UNKNOWN21
    case 0xEFD835: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:146 LDA #1
    case 0xEFD837: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:146 LDA #1
    // Overlapping static entry reached from 0xEFD837.
    case 0xEFD839: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:147 STA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFD83A: cpu.execute_instruction<0x8D>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:149 LDA PAD_PRESS
    case 0xEFD83D: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:150 AND #PAD::A_BUTTON
    case 0xEFD840: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:150 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFD840.
    case 0xEFD842: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:151 BEQ @UNKNOWN27
    case 0xEFD843: cpu.execute_instruction<0xF0>(0x00004A, 2); return true;
    // src/unknown/EF/EFD6D4.asm:152 LDA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFD845: cpu.execute_instruction<0xAD>(0x00B54D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:153 JSL PLAY_SOUND
    case 0xEFD848: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:154 BRA @UNKNOWN27
    case 0xEFD84C: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/unknown/EF/EFD6D4.asm:156 LDA PAD_HELD
    case 0xEFD84E: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:157 AND #PAD::LEFT
    case 0xEFD851: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/EF/EFD6D4.asm:157 AND #PAD::LEFT
    // Overlapping static entry reached from 0xEFD851.
    case 0xEFD853: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:158 BEQ @UNKNOWN23
    case 0xEFD854: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:159 DEC DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFD856: cpu.execute_instruction<0xCE>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:161 LDA PAD_HELD
    case 0xEFD859: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:162 AND #PAD::RIGHT
    case 0xEFD85C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/EF/EFD6D4.asm:162 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xEFD85C.
    case 0xEFD85E: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:163 BEQ @UNKNOWN24
    case 0xEFD85F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:163 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xEFD85E.
    case 0xEFD860: cpu.execute_instruction<0x03>(0x0000EE, 2); return true;
    // src/unknown/EF/EFD6D4.asm:164 INC DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFD861: cpu.execute_instruction<0xEE>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:164 INC DEBUG_SOUND_MENU_SELECTED_EFFECT
    // Overlapping static entry reached from 0xEFD860.
    case 0xEFD862: cpu.execute_instruction<0x4F>(0x4FADB5, 4); return true;
    // src/unknown/EF/EFD6D4.asm:166 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFD864: cpu.execute_instruction<0xAD>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:166 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    // Overlapping static entry reached from 0xEFD862.
    case 0xEFD866: cpu.execute_instruction<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:167 CMP #.LOWORD(-1)
    case 0xEFD867: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:167 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD866.
    case 0xEFD868: cpu.execute_instruction<0xFF>(0x06D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:167 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD867.
    case 0xEFD869: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:168 BNE @UNKNOWN25
    case 0xEFD86A: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:169 LDA #32
    case 0xEFD86C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/EF/EFD6D4.asm:169 LDA #32
    // Overlapping static entry reached from 0xEFD869.
    case 0xEFD86D: cpu.execute_instruction<0x20>(0x008D00, 3); return true;
    // src/unknown/EF/EFD6D4.asm:169 LDA #32
    // Overlapping static entry reached from 0xEFD86C.
    case 0xEFD86E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:170 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFD86F: cpu.execute_instruction<0x8D>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:170 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    // Overlapping static entry reached from 0xEFD86D.
    case 0xEFD870: cpu.execute_instruction<0x4F>(0x4FADB5, 4); return true;
    // src/unknown/EF/EFD6D4.asm:172 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFD872: cpu.execute_instruction<0xAD>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:172 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    // Overlapping static entry reached from 0xEFD870.
    case 0xEFD874: cpu.execute_instruction<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:173 CMP #33
    case 0xEFD875: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000021, 2); else cpu.execute_instruction<0xC9>(0x000021, 3); return true;
    // src/unknown/EF/EFD6D4.asm:173 CMP #33
    // Overlapping static entry reached from 0xEFD874.
    case 0xEFD876: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:173 CMP #33
    // Overlapping static entry reached from 0xEFD875.
    case 0xEFD877: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:174 BNE @UNKNOWN26
    case 0xEFD878: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:175 LDA #1
    case 0xEFD87A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:175 LDA #1
    // Overlapping static entry reached from 0xEFD87A.
    case 0xEFD87C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:176 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFD87D: cpu.execute_instruction<0x8D>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:178 LDA PAD_PRESS
    case 0xEFD880: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:179 AND #PAD::A_BUTTON
    case 0xEFD883: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:179 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFD883.
    case 0xEFD885: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:180 BEQ @UNKNOWN27
    case 0xEFD886: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EFD6D4.asm:181 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFD888: cpu.execute_instruction<0xAD>(0x00B54F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:182 JSL UNKNOWN_C0AC0C
    case 0xEFD88B: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // src/unknown/EF/EFD6D4.asm:184 LDA PAD_PRESS
    case 0xEFD88F: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:185 AND #PAD::X_BUTTON
    case 0xEFD892: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFD6D4.asm:185 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xEFD892.
    case 0xEFD894: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:186 BEQ @UNKNOWN28
    case 0xEFD895: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:187 JSL STOP_MUSIC
    case 0xEFD897: cpu.execute_instruction<0x22>(0xC0ABC6, 4); return true;
    // src/unknown/EF/EFD6D4.asm:188 JSL PLAY_SOUND_UNKNOWN0
    case 0xEFD89B: cpu.execute_instruction<0x22>(0xC0AC01, 4); return true;
    // src/unknown/EF/EFD6D4.asm:190 LDA @VIRTUAL04
    case 0xEFD89F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:191 ASL
    case 0xEFD8A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:192 TAX
    case 0xEFD8A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:193 LDA @VIRTUAL02
    case 0xEFD8A3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:194 ASL
    case 0xEFD8A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:195 ASL
    case 0xEFD8A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:196 ASL
    case 0xEFD8A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:197 ASL
    case 0xEFD8A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:198 CLC
    case 0xEFD8A9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:199 ADC #84
    case 0xEFD8AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000054, 2); else cpu.execute_instruction<0x69>(0x000054, 3); return true;
    // src/unknown/EF/EFD6D4.asm:199 ADC #84
    // Overlapping static entry reached from 0xEFD8AA.
    case 0xEFD8AC: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:200 STA ENTITY_ABS_Y_TABLE,X
    case 0xEFD8AD: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/EF/EFD6D4.asm:201 JMP @UNKNOWN0
    case 0xEFD8B0: cpu.execute_instruction<0x4C>(0x00D6F9, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFD6D4.asm:203 END_C_FUNCTION
    case 0xEFD8B3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFD6D4.asm:203 END_C_FUNCTION
    case 0xEFD8B4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFD95E.asm (unresolved).
bool execute_unresolved_ef_efd95e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFD95E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFD95E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFD95E.asm:6 END_STACK_VARS
    case 0xEFD960: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFD95E.asm:6 END_STACK_VARS
    case 0xEFD961: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD95E.asm:6 END_STACK_VARS
    case 0xEFD962: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD95E.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEFD962.
    case 0xEFD964: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFD95E.asm:6 END_STACK_VARS
    case 0xEFD965: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFD966: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:7 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD966.
    case 0xEFD968: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFD95E.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFD969: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFD96B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:7 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD96B.
    case 0xEFD96D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFD95E.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFD96E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFD95E.asm:8 JSL UNKNOWN_C200D9
    case 0xEFD970: cpu.execute_instruction<0x22>(0xC200D9, 4); return true;
    // src/unknown/EF/EFD95E.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xEFD974: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/EF/EFD95E.asm:10 LDA DEBUG_MODE_NUMBER
    case 0xEFD978: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFD95E.asm:11 CMP #1
    case 0xEFD97B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFD95E.asm:11 CMP #1
    // Overlapping static entry reached from 0xEFD97B.
    case 0xEFD97D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD95E.asm:12 BNE @UNKNOWN0
    case 0xEFD97E: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/unknown/EF/EFD95E.asm:13 JSL LOAD_WINDOW_GFX
    case 0xEFD980: cpu.execute_instruction<0x22>(0xC47C3F, 4); return true;
    // src/unknown/EF/EFD95E.asm:17 LDA #1
    case 0xEFD984: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD95E.asm:17 LDA #1
    // Overlapping static entry reached from 0xEFD984.
    case 0xEFD986: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD95E.asm:18 JSL UNKNOWN_C44963
    case 0xEFD987: cpu.execute_instruction<0x22>(0xC44963, 4); return true;
    // src/unknown/EF/EFD95E.asm:20 JSL UNKNOWN_C47F87
    case 0xEFD98B: cpu.execute_instruction<0x22>(0xC47F87, 4); return true;
    // src/unknown/EF/EFD95E.asm:21 BRA @UNKNOWN2
    case 0xEFD98F: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFD991: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005F, 2); else cpu.execute_instruction<0xA9>(0x00EB5F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFD991.
    case 0xEFD993: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFD994: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFD996: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFD996.
    case 0xEFD998: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFD999: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFD99B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006100, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFD99B.
    case 0xEFD99D: cpu.execute_instruction<0x61>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFD99E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFD99D.
    case 0xEFD99F: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFD99E.
    case 0xEFD9A0: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFD9A1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFD9A0.
    case 0xEFD9A2: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFD9A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFD9A5: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFD9A3.
    case 0xEFD9A6: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFD9A6.
    case 0xEFD9A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // src/unknown/EF/EFD95E.asm:24 LDA #0
    case 0xEFD9A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFD95E.asm:24 LDA #0
    // Overlapping static entry reached from 0xEFD9A8.
    case 0xEFD9AA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFD95E.asm:24 LDA #0
    // Overlapping static entry reached from 0xEFD9A9.
    case 0xEFD9AB: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/EF/EFD95E.asm:25 STA [@VIRTUAL06]
    case 0xEFD9AC: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFD9AE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFD9B0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFD9B2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFD9B4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFD9B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xEFD9B6.
    case 0xEFD9B8: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFD9B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xEFD9B9.
    case 0xEFD9BB: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFD9BC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFD9BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFD9C0: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xEFD9BE.
    case 0xEFD9C1: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xEFD9C1.
    case 0xEFD9C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x0059AD, 3); return true;
    // src/unknown/EF/EFD95E.asm:27 LDA DEBUG_MODE_NUMBER
    case 0xEFD9C4: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFD95E.asm:27 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFD9C3.
    case 0xEFD9C5: cpu.execute_instruction<0x59>(0x00C9B5, 3); return true;
    // src/unknown/EF/EFD95E.asm:27 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFD9C3.
    case 0xEFD9C6: cpu.execute_instruction<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD95E.asm:28 CMP #3
    case 0xEFD9C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFD95E.asm:28 CMP #3
    // Overlapping static entry reached from 0xEFD9C6.
    case 0xEFD9C8: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/unknown/EF/EFD95E.asm:28 CMP #3
    // Overlapping static entry reached from 0xEFD9C7.
    case 0xEFD9C9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD95E.asm:29 BEQ @UNKNOWN1
    case 0xEFD9CA: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EFD95E.asm:30 LDA #.LOWORD(-1)
    case 0xEFD9CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD95E.asm:30 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD9CC.
    case 0xEFD9CE: cpu.execute_instruction<0xFF>(0x02048D, 4); return true;
    // src/unknown/EF/EFD95E.asm:31 STA PALETTES+4
    case 0xEFD9CF: cpu.execute_instruction<0x8D>(0x000204, 3); return true;
    // src/unknown/EF/EFD95E.asm:32 BRA @UNKNOWN2
    case 0xEFD9D2: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:34 LOADPTR DEBUG_FONT_PALETTE, @LOCAL00
    case 0xEFD9D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x00EF9F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:34 LOADPTR DEBUG_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xEFD9D4.
    case 0xEFD9D6: cpu.execute_instruction<0xEF>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFD95E.asm:34 LOADPTR DEBUG_FONT_PALETTE, @LOCAL00
    case 0xEFD9D7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:34 LOADPTR DEBUG_FONT_PALETTE, @LOCAL00
    case 0xEFD9D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:34 LOADPTR DEBUG_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xEFD9D6.
    case 0xEFD9DA: cpu.execute_instruction<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:34 LOADPTR DEBUG_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xEFD9D9.
    case 0xEFD9DB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFD95E.asm:34 LOADPTR DEBUG_FONT_PALETTE, @LOCAL00
    case 0xEFD9DC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD95E.asm:35 LDX #BPP2PALETTE_SIZE * 3
    case 0xEFD9DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000018, 2); else cpu.execute_instruction<0xA2>(0x000018, 3); return true;
    // src/unknown/EF/EFD95E.asm:35 LDX #BPP2PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xEFD9DE.
    case 0xEFD9E0: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD95E.asm:36 LDA #.LOWORD(PALETTES)
    case 0xEFD9E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/EF/EFD95E.asm:36 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xEFD9E1.
    case 0xEFD9E3: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFD95E.asm:37 JSL MEMCPY16
    case 0xEFD9E4: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/EF/EFD95E.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xEFD9E8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFD95E.asm:40 LDA #PALETTE_UPLOAD::FULL
    case 0xEFD9EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/EF/EFD95E.asm:41 STA PALETTE_UPLOAD_MODE
    case 0xEFD9EC: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/EF/EFD95E.asm:41 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xEFD9EA.
    case 0xEFD9ED: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/EF/EFD95E.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xEFD9EF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFD95E.asm:43 END_C_FUNCTION
    case 0xEFD9F1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFD95E.asm:43 END_C_FUNCTION
    case 0xEFD9F2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFD9F3.asm (unresolved).
bool execute_unresolved_ef_efd9f3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFD9F3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFD9F3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFD9F3.asm:5 LDA DEBUG_MODE_NUMBER
    case 0xEFD9F5: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFD9F3.asm:6 BEQ @UNKNOWN0
    case 0xEFD9F8: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFD9F3.asm:7 JSL UNKNOWN_EFD95E
    case 0xEFD9FA: cpu.execute_instruction<0x22>(0xEFD95E, 4); return true;
    // src/unknown/EF/EFD9F3.asm:8 BRA @UNKNOWN1
    case 0xEFD9FE: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EFD9F3.asm:10 JSL UNKNOWN_C47F87
    case 0xEFDA00: cpu.execute_instruction<0x22>(0xC47F87, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFD9F3.asm:12 END_C_FUNCTION
    case 0xEFDA04: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFDA05.asm (unresolved).
bool execute_unresolved_ef_efda05_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFDA05.asm:3 BEGIN_C_FUNCTION
    case 0xEFDA05: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFDA05.asm:6 END_STACK_VARS
    case 0xEFDA07: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFDA05.asm:6 END_STACK_VARS
    case 0xEFDA08: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDA05.asm:6 END_STACK_VARS
    case 0xEFDA09: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDA05.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEFDA09.
    case 0xEFDA0B: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFDA05.asm:6 END_STACK_VARS
    case 0xEFDA0C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFDA0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:7 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xEFDA0D.
    case 0xEFDA0F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFDA05.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFDA10: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFDA12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:7 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xEFDA12.
    case 0xEFDA14: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFDA05.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFDA15: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFDA05.asm:8 JSL UNKNOWN_C08726
    case 0xEFDA17: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/unknown/EF/EFDA05.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDA1B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDA05.asm:10 LDA #$17
    case 0xEFDA1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/unknown/EF/EFDA05.asm:11 STA TM_MIRROR
    case 0xEFDA1F: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/EF/EFDA05.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFDA1D.
    case 0xEFDA20: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFDA20.
    case 0xEFDA21: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFDA05.asm:12 LDA #$2F
    case 0xEFDA22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x008D2F, 3); return true;
    // src/unknown/EF/EFDA05.asm:13 STA SPRITEMAP_BANK
    case 0xEFDA24: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/EF/EFDA05.asm:13 STA SPRITEMAP_BANK
    // Overlapping static entry reached from 0xEFDA22.
    case 0xEFDA25: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:13 STA SPRITEMAP_BANK
    // Overlapping static entry reached from 0xEFDA25.
    case 0xEFDA26: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/EF/EFDA05.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xEFDA27: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFDA05.asm:15 STZ UNREAD_7EB55D
    case 0xEFDA29: cpu.execute_instruction<0x9C>(0x00B55D, 3); return true;
    // src/unknown/EF/EFDA05.asm:16 STZ DEBUG_MENU_BUTTONS_PRESSED
    case 0xEFDA2C: cpu.execute_instruction<0x9C>(0x00B557, 3); return true;
    // src/unknown/EF/EFDA05.asm:17 STZ DEBUG_MENU_CURSOR_POSITION
    case 0xEFDA2F: cpu.execute_instruction<0x9C>(0x00B555, 3); return true;
    // src/unknown/EF/EFDA05.asm:18 STZ UNREAD_7EB551
    case 0xEFDA32: cpu.execute_instruction<0x9C>(0x00B551, 3); return true;
    // src/unknown/EF/EFDA05.asm:19 STZ VIEW_ATTRIBUTE_MODE
    case 0xEFDA35: cpu.execute_instruction<0x9C>(0x00B55F, 3); return true;
    // src/unknown/EF/EFDA05.asm:20 LDA #9
    case 0xEFDA38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/EF/EFDA05.asm:20 LDA #9
    // Overlapping static entry reached from 0xEFDA38.
    case 0xEFDA3A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:21 JSL UNKNOWN_C08D79
    case 0xEFDA3B: cpu.execute_instruction<0x22>(0xC08D79, 4); return true;
    // src/unknown/EF/EFDA05.asm:22 LDY #VRAM::OVERWORLD_LAYER_1_TILES
    case 0xEFDA3F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:22 LDY #VRAM::OVERWORLD_LAYER_1_TILES
    // Overlapping static entry reached from 0xEFDA3F.
    case 0xEFDA41: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFDA05.asm:23 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    case 0xEFDA42: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // src/unknown/EF/EFDA05.asm:23 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xEFDA42.
    case 0xEFDA44: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:24 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xEFDA45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFDA05.asm:24 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xEFDA45.
    case 0xEFDA47: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:25 JSL SET_BG1_VRAM_LOCATION
    case 0xEFDA48: cpu.execute_instruction<0x22>(0xC08D9E, 4); return true;
    // src/unknown/EF/EFDA05.asm:26 LDY #VRAM::OVERWORLD_LAYER_2_TILES
    case 0xEFDA4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/EF/EFDA05.asm:26 LDY #VRAM::OVERWORLD_LAYER_2_TILES
    // Overlapping static entry reached from 0xEFDA4C.
    case 0xEFDA4E: cpu.execute_instruction<0x20>(0x0000A2, 3); return true;
    // src/unknown/EF/EFDA05.asm:27 LDX #VRAM::OVERWORLD_LAYER_2_TILEMAP
    case 0xEFDA4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/unknown/EF/EFDA05.asm:27 LDX #VRAM::OVERWORLD_LAYER_2_TILEMAP
    // Overlapping static entry reached from 0xEFDA4F.
    case 0xEFDA51: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:28 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xEFDA52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFDA05.asm:28 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xEFDA52.
    case 0xEFDA54: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:29 JSL SET_BG2_VRAM_LOCATION
    case 0xEFDA55: cpu.execute_instruction<0x22>(0xC08DDE, 4); return true;
    // src/unknown/EF/EFDA05.asm:30 LDY #VRAM::TEXT_LAYER_TILES
    case 0xEFDA59: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/unknown/EF/EFDA05.asm:30 LDY #VRAM::TEXT_LAYER_TILES
    // Overlapping static entry reached from 0xEFDA59.
    case 0xEFDA5B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:31 LDX #VRAM::TEXT_LAYER_TILEMAP
    case 0xEFDA5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/unknown/EF/EFDA05.asm:31 LDX #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFDA5C.
    case 0xEFDA5E: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/unknown/EF/EFDA05.asm:32 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xEFDA5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:32 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xEFDA5F.
    case 0xEFDA61: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:33 JSL SET_BG3_VRAM_LOCATION
    case 0xEFDA62: cpu.execute_instruction<0x22>(0xC08E1C, 4); return true;
    // src/unknown/EF/EFDA05.asm:34 LDA #$02
    case 0xEFDA66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFDA05.asm:34 LDA #$02
    // Overlapping static entry reached from 0xEFDA66.
    case 0xEFDA68: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:35 JSL SET_OAM_SIZE
    case 0xEFDA69: cpu.execute_instruction<0x22>(0xC08D92, 4); return true;
    // src/unknown/EF/EFDA05.asm:36 LDA #0
    case 0xEFDA6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:36 LDA #0
    // Overlapping static entry reached from 0xEFDA6D.
    case 0xEFDA6F: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/EF/EFDA05.asm:37 STA [@VIRTUAL06]
    case 0xEFDA70: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFDA05.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFDA72: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFDA05.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFDA74: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFDA05.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFDA76: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFDA05.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFDA78: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDA05.asm:39 LDY #0
    case 0xEFDA7A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:39 LDY #0
    // Overlapping static entry reached from 0xEFDA7A.
    case 0xEFDA7C: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EFDA05.asm:40 TYX
    case 0xEFDA7D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDA7E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDA05.asm:42 LDA #3
    case 0xEFDA80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // src/unknown/EF/EFDA05.asm:43 JSL PREPARE_VRAM_COPY
    case 0xEFDA82: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/EF/EFDA05.asm:43 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFDA80.
    case 0xEFDA83: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/EF/EFDA05.asm:43 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFDA83.
    case 0xEFDA85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00BBA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    case 0xEFDA86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BB, 2); else cpu.execute_instruction<0xA9>(0x00F1BB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    // Overlapping static entry reached from 0xEFDA85.
    case 0xEFDA87: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    // Overlapping static entry reached from 0xEFDA86.
    case 0xEFDA88: cpu.execute_instruction<0xF1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    case 0xEFDA89: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    // Overlapping static entry reached from 0xEFDA88.
    case 0xEFDA8A: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    case 0xEFDA8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    // Overlapping static entry reached from 0xEFDA8B.
    case 0xEFDA8D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    case 0xEFDA8E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDA05.asm:46 LDX #BPP4PALETTE_SIZE * 16
    case 0xEFDA90: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/EF/EFDA05.asm:46 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xEFDA90.
    case 0xEFDA92: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/EF/EFDA05.asm:47 LDA #.LOWORD(PALETTES)
    case 0xEFDA93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/EF/EFDA05.asm:47 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xEFDA93.
    case 0xEFDA95: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:48 JSL MEMCPY16
    case 0xEFDA96: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/EF/EFDA05.asm:49 JSL UNKNOWN_EFD95E
    case 0xEFDA9A: cpu.execute_instruction<0x22>(0xEFD95E, 4); return true;
    // src/unknown/EF/EFDA05.asm:50 STZ ENTITY_ALLOCATION_MIN_SLOT
    case 0xEFDA9E: cpu.execute_instruction<0x9C>(0x000A4C, 3); return true;
    // src/unknown/EF/EFDA05.asm:51 LDA #1
    case 0xEFDAA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFDA05.asm:51 LDA #1
    // Overlapping static entry reached from 0xEFDAA1.
    case 0xEFDAA3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFDA05.asm:52 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xEFDAA4: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/unknown/EF/EFDA05.asm:53 LDY #52
    case 0xEFDAA7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000034, 2); else cpu.execute_instruction<0xA0>(0x000034, 3); return true;
    // src/unknown/EF/EFDA05.asm:53 LDY #52
    // Overlapping static entry reached from 0xEFDAA7.
    case 0xEFDAA9: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EFDA05.asm:54 TYX
    case 0xEFDAAA: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:55 LDA #EVENT_SCRIPT::EVENT_000
    case 0xEFDAAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:55 LDA #EVENT_SCRIPT::EVENT_000
    // Overlapping static entry reached from 0xEFDAAB.
    case 0xEFDAAD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:56 JSL INIT_ENTITY_WIPE
    case 0xEFDAAE: cpu.execute_instruction<0x22>(0xC092F5, 4); return true;
    // src/unknown/EF/EFDA05.asm:57 STA DEBUG_CURSOR_ENTITY
    case 0xEFDAB2: cpu.execute_instruction<0x8D>(0x00B553, 3); return true;
    // src/unknown/EF/EFDA05.asm:58 STZ NPC_SPAWNS_ENABLED
    case 0xEFDAB5: cpu.execute_instruction<0x9C>(0x004A58, 3); return true;
    // src/unknown/EF/EFDA05.asm:59 STZ ENEMY_SPAWNS_ENABLED
    case 0xEFDAB8: cpu.execute_instruction<0x9C>(0x004A5A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFDA05.asm:60 END_C_FUNCTION
    case 0xEFDABB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFDA05.asm:60 END_C_FUNCTION
    case 0xEFDABC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFDABD.asm (unresolved).
bool execute_unresolved_ef_efdabd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFDABD.asm:3 BEGIN_C_FUNCTION
    case 0xEFDABD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    case 0xEFDABF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    case 0xEFDAC0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    case 0xEFDAC1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    case 0xEFDAC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xEFDAC2.
    case 0xEFDAC4: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    case 0xEFDAC5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    case 0xEFDAC6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:13 STX @LOCAL03
    case 0xEFDAC7: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/EF/EFDABD.asm:13 STX @LOCAL03
    // Overlapping static entry reached from 0xEFDAC4.
    case 0xEFDAC8: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/EF/EFDABD.asm:14 STA @VIRTUAL04
    case 0xEFDAC9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFDABD.asm:14 STA @VIRTUAL04
    // Overlapping static entry reached from 0xEFDAC8.
    case 0xEFDACA: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xEFDACB: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    // Overlapping static entry reached from 0xEFDACA.
    case 0xEFDACC: cpu.execute_instruction<0x24>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xEFDACD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    // Overlapping static entry reached from 0xEFDACC.
    case 0xEFDACE: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xEFDACF: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    // Overlapping static entry reached from 0xEFDACE.
    case 0xEFDAD0: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xEFDAD1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    // Overlapping static entry reached from 0xEFDAD0.
    case 0xEFDAD2: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:16 LDA #0
    case 0xEFDAD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDABD.asm:16 LDA #0
    // Overlapping static entry reached from 0xEFDAD3.
    case 0xEFDAD5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDABD.asm:17 STA @VIRTUAL02
    case 0xEFDAD6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:18 LDA #64
    case 0xEFDAD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFDABD.asm:18 LDA #64
    // Overlapping static entry reached from 0xEFDAD8.
    case 0xEFDADA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDABD.asm:19 JSL SBRK
    case 0xEFDADB: cpu.execute_instruction<0x22>(0xC086DE, 4); return true;
    // src/unknown/EF/EFDABD.asm:20 TAY
    case 0xEFDADF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:21 TYX
    case 0xEFDAE0: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:22 BRA @UNKNOWN1
    case 0xEFDAE1: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/EF/EFDABD.asm:24 AND #$00FF
    case 0xEFDAE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDABD.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xEFDAE3.
    case 0xEFDAE5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFDABD.asm:25 CLC
    case 0xEFDAE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:26 ADC #$2000
    case 0xEFDAE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/unknown/EF/EFDABD.asm:26 ADC #$2000
    // Overlapping static entry reached from 0xEFDAE7.
    case 0xEFDAE9: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/unknown/EF/EFDABD.asm:27 STA __BSS_START__,X
    case 0xEFDAEA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFDABD.asm:27 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFDAE9.
    case 0xEFDAEC: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/EF/EFDABD.asm:28 INC @VIRTUAL06
    case 0xEFDAED: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/EF/EFDABD.asm:29 INX
    case 0xEFDAEF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:30 INX
    case 0xEFDAF0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:31 INC @VIRTUAL02
    case 0xEFDAF1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:32 INC @VIRTUAL02
    case 0xEFDAF3: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:34 LDA [@VIRTUAL06]
    case 0xEFDAF5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EFDABD.asm:35 AND #$00FF
    case 0xEFDAF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDABD.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xEFDAF7.
    case 0xEFDAF9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFDABD.asm:36 BNE @UNKNOWN0
    case 0xEFDAFA: cpu.execute_instruction<0xD0>(0x0000E7, 2); return true;
    // src/unknown/EF/EFDABD.asm:37 LDA @LOCAL03
    case 0xEFDAFC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFDABD.asm:38 ASL
    case 0xEFDAFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:39 ASL
    case 0xEFDAFF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:40 ASL
    case 0xEFDB00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:41 ASL
    case 0xEFDB01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:42 ASL
    case 0xEFDB02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:43 CLC
    case 0xEFDB03: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:44 ADC @VIRTUAL04
    case 0xEFDB04: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/EF/EFDABD.asm:45 CLC
    case 0xEFDB06: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:46 ADC #$7C00
    case 0xEFDB07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFDABD.asm:46 ADC #$7C00
    // Overlapping static entry reached from 0xEFDB07.
    case 0xEFDB09: cpu.execute_instruction<0x7C>(0x001285, 3); return true;
    // src/unknown/EF/EFDABD.asm:47 STA @LOCAL02
    case 0xEFDB0A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFDABD.asm:48 LDA #^STACK_START
    case 0xEFDB0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/EF/EFDABD.asm:48 LDA #^STACK_START
    // Overlapping static entry reached from 0xEFDB0C.
    case 0xEFDB0E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDABD.asm:49 STA @LOCAL00
    case 0xEFDB0F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFDABD.asm:50 LDA @LOCAL02
    case 0xEFDB11: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFDABD.asm:51 STA @LOCAL01
    case 0xEFDB13: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDABD.asm:52 LDX @VIRTUAL02
    case 0xEFDB15: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDB17: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDABD.asm:54 LDA #0
    case 0xEFDB19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/EF/EFDABD.asm:55 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDB1B: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/unknown/EF/EFDABD.asm:55 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDB19.
    case 0xEFDB1C: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFDABD.asm:56 END_C_FUNCTION
    case 0xEFDB1F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFDABD.asm:56 END_C_FUNCTION
    case 0xEFDB20: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFDF0B.asm (unresolved).
bool execute_unresolved_ef_efdf0b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFDF0B.asm:3 BEGIN_C_FUNCTION
    case 0xEFDF0B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    case 0xEFDF0D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    case 0xEFDF0E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    case 0xEFDF0F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    case 0xEFDF10: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xEFDF10.
    case 0xEFDF12: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    case 0xEFDF13: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    case 0xEFDF14: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:10 STY @VIRTUAL02
    case 0xEFDF15: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EFDF0B.asm:10 STY @VIRTUAL02
    // Overlapping static entry reached from 0xEFDF12.
    case 0xEFDF16: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:11 TXY
    case 0xEFDF17: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:12 STA @LOCAL00
    case 0xEFDF18: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:13 LDX #0
    case 0xEFDF1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFDF0B.asm:13 LDX #0
    // Overlapping static entry reached from 0xEFDF1A.
    case 0xEFDF1C: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/EF/EFDF0B.asm:14 LDA VIEW_ATTRIBUTE_MODE
    case 0xEFDF1D: cpu.execute_instruction<0xAD>(0x00B55F, 3); return true;
    // src/unknown/EF/EFDF0B.asm:15 AND #$00FF
    case 0xEFDF20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDF0B.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xEFDF20.
    case 0xEFDF22: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:16 BEQ @UNKNOWN1
    case 0xEFDF23: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/EF/EFDF0B.asm:17 CMP #1
    case 0xEFDF25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFDF0B.asm:17 CMP #1
    // Overlapping static entry reached from 0xEFDF25.
    case 0xEFDF27: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:18 BEQ @UNKNOWN5
    case 0xEFDF28: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/EF/EFDF0B.asm:19 CMP #2
    case 0xEFDF2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFDF0B.asm:19 CMP #2
    // Overlapping static entry reached from 0xEFDF2A.
    case 0xEFDF2C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFDF0B.asm:20 BEQL @UNKNOWN10
    case 0xEFDF2D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFDF0B.asm:20 BEQL @UNKNOWN10
    case 0xEFDF2F: cpu.execute_instruction<0x4C>(0x00DFB7, 3); return true;
    // src/unknown/EF/EFDF0B.asm:21 JMP @UNKNOWN11
    case 0xEFDF32: cpu.execute_instruction<0x4C>(0x00DFC1, 3); return true;
    // src/unknown/EF/EFDF0B.asm:23 LDA @LOCAL00
    case 0xEFDF35: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:24 AND #$0002
    case 0xEFDF37: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/EF/EFDF0B.asm:24 AND #$0002
    // Overlapping static entry reached from 0xEFDF37.
    case 0xEFDF39: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:25 BEQ @UNKNOWN2
    case 0xEFDF3A: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFDF0B.asm:26 LDX #$2061
    case 0xEFDF3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000061, 2); else cpu.execute_instruction<0xA2>(0x002061, 3); return true;
    // src/unknown/EF/EFDF0B.asm:26 LDX #$2061
    // Overlapping static entry reached from 0xEFDF3C.
    case 0xEFDF3E: cpu.execute_instruction<0x20>(0x00C14C, 3); return true;
    // src/unknown/EF/EFDF0B.asm:27 JMP @UNKNOWN11
    case 0xEFDF3F: cpu.execute_instruction<0x4C>(0x00DFC1, 3); return true;
    // src/unknown/EF/EFDF0B.asm:27 JMP @UNKNOWN11
    // Overlapping static entry reached from 0xEFDF3E.
    case 0xEFDF41: cpu.execute_instruction<0xDF>(0x290EA5, 4); return true;
    // src/unknown/EF/EFDF0B.asm:29 LDA @LOCAL00
    case 0xEFDF42: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:30 AND #$0001
    case 0xEFDF44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/EF/EFDF0B.asm:30 AND #$0001
    // Overlapping static entry reached from 0xEFDF41.
    case 0xEFDF45: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EFDF0B.asm:30 AND #$0001
    // Overlapping static entry reached from 0xEFDF44.
    case 0xEFDF46: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:31 BEQ @UNKNOWN3
    case 0xEFDF47: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFDF0B.asm:32 LDX #$2062
    case 0xEFDF49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000062, 2); else cpu.execute_instruction<0xA2>(0x002062, 3); return true;
    // src/unknown/EF/EFDF0B.asm:32 LDX #$2062
    // Overlapping static entry reached from 0xEFDF49.
    case 0xEFDF4B: cpu.execute_instruction<0x20>(0x007380, 3); return true;
    // src/unknown/EF/EFDF0B.asm:33 BRA @UNKNOWN11
    case 0xEFDF4C: cpu.execute_instruction<0x80>(0x000073, 2); return true;
    // src/unknown/EF/EFDF0B.asm:35 LDA @LOCAL00
    case 0xEFDF4E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:36 AND #$0080
    case 0xEFDF50: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFDF0B.asm:36 AND #$0080
    // Overlapping static entry reached from 0xEFDF50.
    case 0xEFDF52: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:37 BEQ @UNKNOWN4
    case 0xEFDF53: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFDF0B.asm:38 LDX #$2063
    case 0xEFDF55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000063, 2); else cpu.execute_instruction<0xA2>(0x002063, 3); return true;
    // src/unknown/EF/EFDF0B.asm:38 LDX #$2063
    // Overlapping static entry reached from 0xEFDF55.
    case 0xEFDF57: cpu.execute_instruction<0x20>(0x006780, 3); return true;
    // src/unknown/EF/EFDF0B.asm:39 BRA @UNKNOWN11
    case 0xEFDF58: cpu.execute_instruction<0x80>(0x000067, 2); return true;
    // src/unknown/EF/EFDF0B.asm:41 LDA @LOCAL00
    case 0xEFDF5A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:42 AND #$0040
    case 0xEFDF5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFDF0B.asm:42 AND #$0040
    // Overlapping static entry reached from 0xEFDF5C.
    case 0xEFDF5E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:43 BEQ @UNKNOWN11
    case 0xEFDF5F: cpu.execute_instruction<0xF0>(0x000060, 2); return true;
    // src/unknown/EF/EFDF0B.asm:44 LDX #$2063
    case 0xEFDF61: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000063, 2); else cpu.execute_instruction<0xA2>(0x002063, 3); return true;
    // src/unknown/EF/EFDF0B.asm:44 LDX #$2063
    // Overlapping static entry reached from 0xEFDF61.
    case 0xEFDF63: cpu.execute_instruction<0x20>(0x005B80, 3); return true;
    // src/unknown/EF/EFDF0B.asm:45 BRA @UNKNOWN11
    case 0xEFDF64: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:47 LDA @LOCAL00
    case 0xEFDF66: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:48 AND #$0010
    case 0xEFDF68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/unknown/EF/EFDF0B.asm:48 AND #$0010
    // Overlapping static entry reached from 0xEFDF68.
    case 0xEFDF6A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:49 BEQ @UNKNOWN11
    case 0xEFDF6B: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/unknown/EF/EFDF0B.asm:50 LDX @VIRTUAL02
    case 0xEFDF6D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFDF0B.asm:51 TYA
    case 0xEFDF6F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:52 JSL UNKNOWN_C07477
    case 0xEFDF70: cpu.execute_instruction<0x22>(0xC07477, 4); return true;
    // src/unknown/EF/EFDF0B.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xEFDF74: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFDF0B.asm:54 AND #$00FF
    case 0xEFDF76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDF0B.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xEFDF76.
    case 0xEFDF78: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/EF/EFDF0B.asm:55 CMP #2
    case 0xEFDF79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFDF0B.asm:55 CMP #2
    // Overlapping static entry reached from 0xEFDF79.
    case 0xEFDF7B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:56 BEQ @UNKNOWN6
    case 0xEFDF7C: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/EF/EFDF0B.asm:57 CMP #1
    case 0xEFDF7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFDF0B.asm:57 CMP #1
    // Overlapping static entry reached from 0xEFDF7E.
    case 0xEFDF80: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:58 BEQ @UNKNOWN7
    case 0xEFDF81: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/EF/EFDF0B.asm:59 CMP #3
    case 0xEFDF83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFDF0B.asm:59 CMP #3
    // Overlapping static entry reached from 0xEFDF83.
    case 0xEFDF85: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:60 BEQ @UNKNOWN7
    case 0xEFDF86: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/EF/EFDF0B.asm:61 CMP #4
    case 0xEFDF88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/EF/EFDF0B.asm:61 CMP #4
    // Overlapping static entry reached from 0xEFDF88.
    case 0xEFDF8A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:62 BEQ @UNKNOWN7
    case 0xEFDF8B: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:63 CMP #5
    case 0xEFDF8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFDF0B.asm:63 CMP #5
    // Overlapping static entry reached from 0xEFDF8D.
    case 0xEFDF8F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:64 BEQ @UNKNOWN8
    case 0xEFDF90: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:65 CMP #0
    case 0xEFDF92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFDF0B.asm:65 CMP #0
    // Overlapping static entry reached from 0xEFDF92.
    case 0xEFDF94: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:66 BEQ @UNKNOWN8
    case 0xEFDF95: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/EF/EFDF0B.asm:67 CMP #6
    case 0xEFDF97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/EF/EFDF0B.asm:67 CMP #6
    // Overlapping static entry reached from 0xEFDF97.
    case 0xEFDF99: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:68 BEQ @UNKNOWN8
    case 0xEFDF9A: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/EF/EFDF0B.asm:69 CMP #7
    case 0xEFDF9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/EF/EFDF0B.asm:69 CMP #7
    // Overlapping static entry reached from 0xEFDF9C.
    case 0xEFDF9E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:70 BEQ @UNKNOWN8
    case 0xEFDF9F: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/EF/EFDF0B.asm:71 BRA @UNKNOWN9
    case 0xEFDFA1: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/EF/EFDF0B.asm:73 LDX #$2461
    case 0xEFDFA3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000061, 2); else cpu.execute_instruction<0xA2>(0x002461, 3); return true;
    // src/unknown/EF/EFDF0B.asm:73 LDX #$2461
    // Overlapping static entry reached from 0xEFDFA3.
    case 0xEFDFA5: cpu.execute_instruction<0x24>(0x000080, 2); return true;
    // src/unknown/EF/EFDF0B.asm:74 BRA @UNKNOWN11
    case 0xEFDFA6: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/EF/EFDF0B.asm:74 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xEFDFA5.
    case 0xEFDFA7: cpu.execute_instruction<0x19>(0x0062A2, 3); return true;
    // src/unknown/EF/EFDF0B.asm:76 LDX #$2462
    case 0xEFDFA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000062, 2); else cpu.execute_instruction<0xA2>(0x002462, 3); return true;
    // src/unknown/EF/EFDF0B.asm:76 LDX #$2462
    // Overlapping static entry reached from 0xEFDFA8.
    case 0xEFDFAA: cpu.execute_instruction<0x24>(0x000080, 2); return true;
    // src/unknown/EF/EFDF0B.asm:77 BRA @UNKNOWN11
    case 0xEFDFAB: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/EF/EFDF0B.asm:77 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xEFDFAA.
    case 0xEFDFAC: cpu.execute_instruction<0x14>(0x0000A2, 2); return true;
    // src/unknown/EF/EFDF0B.asm:79 LDX #$2463
    case 0xEFDFAD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000063, 2); else cpu.execute_instruction<0xA2>(0x002463, 3); return true;
    // src/unknown/EF/EFDF0B.asm:79 LDX #$2463
    // Overlapping static entry reached from 0xEFDFAC.
    case 0xEFDFAE: cpu.execute_instruction<0x63>(0x000024, 2); return true;
    // src/unknown/EF/EFDF0B.asm:79 LDX #$2463
    // Overlapping static entry reached from 0xEFDFAD.
    case 0xEFDFAF: cpu.execute_instruction<0x24>(0x000080, 2); return true;
    // src/unknown/EF/EFDF0B.asm:80 BRA @UNKNOWN11
    case 0xEFDFB0: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/EF/EFDF0B.asm:80 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xEFDFAF.
    case 0xEFDFB1: cpu.execute_instruction<0x0F>(0x2058A2, 4); return true;
    // src/unknown/EF/EFDF0B.asm:82 LDX #$2058
    case 0xEFDFB2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000058, 2); else cpu.execute_instruction<0xA2>(0x002058, 3); return true;
    // src/unknown/EF/EFDF0B.asm:82 LDX #$2058
    // Overlapping static entry reached from 0xEFE001.
    case 0xEFDFB3: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:82 LDX #$2058
    // Overlapping static entry reached from 0xEFDFB2.
    case 0xEFDFB4: cpu.execute_instruction<0x20>(0x000A80, 3); return true;
    // src/unknown/EF/EFDF0B.asm:83 BRA @UNKNOWN11
    case 0xEFDFB5: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/EF/EFDF0B.asm:85 LDA @LOCAL00
    case 0xEFDFB7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:86 AND #$0020
    case 0xEFDFB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/unknown/EF/EFDF0B.asm:86 AND #$0020
    // Overlapping static entry reached from 0xEFDFB9.
    case 0xEFDFBB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:87 BEQ @UNKNOWN11
    case 0xEFDFBC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFDF0B.asm:88 LDX #$2261
    case 0xEFDFBE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000061, 2); else cpu.execute_instruction<0xA2>(0x002261, 3); return true;
    // src/unknown/EF/EFDF0B.asm:88 LDX #$2261
    // Overlapping static entry reached from 0xEFDFBE.
    case 0xEFDFC0: cpu.execute_instruction<0x22>(0x602B8A, 4); return true;
    // src/unknown/EF/EFDF0B.asm:90 TXA
    case 0xEFDFC1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFDF0B.asm:91 END_C_FUNCTION
    case 0xEFDFC2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFDF0B.asm:91 END_C_FUNCTION
    case 0xEFDFC3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFDFC4.asm (unresolved).
bool execute_unresolved_ef_efdfc4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFDFC4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFDFC4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    case 0xEFDFC6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    case 0xEFDFC7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    case 0xEFDFC8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    case 0xEFDFC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xEFDFC9.
    case 0xEFDFCB: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    case 0xEFDFCC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    case 0xEFDFCD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:14 STX @LOCAL05
    case 0xEFDFCE: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:14 STX @LOCAL05
    // Overlapping static entry reached from 0xEFDFCB.
    case 0xEFDFCF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:15 STA @VIRTUAL02
    case 0xEFDFD0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:16 STA @LOCAL04
    case 0xEFDFD2: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFDFC4.asm:17 LDA DEBUG_MODE_NUMBER
    case 0xEFDFD4: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFDFC4.asm:18 CMP #3
    case 0xEFDFD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFDFC4.asm:18 CMP #3
    // Overlapping static entry reached from 0xEFDFD7.
    case 0xEFDFD9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/EF/EFDFC4.asm:19 BNEL @UNKNOWN5
    case 0xEFDFDA: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/EF/EFDFC4.asm:19 BNEL @UNKNOWN5
    case 0xEFDFDC: cpu.execute_instruction<0x4C>(0x00E07A, 3); return true;
    // src/unknown/EF/EFDFC4.asm:20 LDA #64
    case 0xEFDFDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFDFC4.asm:20 LDA #64
    // Overlapping static entry reached from 0xEFDFDF.
    case 0xEFDFE1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDFC4.asm:21 JSL SBRK
    case 0xEFDFE2: cpu.execute_instruction<0x22>(0xC086DE, 4); return true;
    // src/unknown/EF/EFDFC4.asm:22 STA @LOCAL03
    case 0xEFDFE6: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EFDFC4.asm:23 LDA @LOCAL05
    case 0xEFDFE8: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:24 CMP #$8000
    case 0xEFDFEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:24 CMP #$8000
    // Overlapping static entry reached from 0xEFDFEA.
    case 0xEFDFEC: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFDFC4.asm:25 BCS @UNKNOWN4
    case 0xEFDFED: cpu.execute_instruction<0xB0>(0x00005B, 2); return true;
    // src/unknown/EF/EFDFC4.asm:26 LDA @VIRTUAL02
    case 0xEFDFEF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:27 AND #$001F
    case 0xEFDFF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:27 AND #$001F
    // Overlapping static entry reached from 0xEFDFF1.
    case 0xEFDFF3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:28 STA @LOCAL02
    case 0xEFDFF4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:29 LDA #0
    case 0xEFDFF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:29 LDA #0
    // Overlapping static entry reached from 0xEFDFF6.
    case 0xEFDFF8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:30 STA @VIRTUAL04
    case 0xEFDFF9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFDFC4.asm:31 BRA @UNKNOWN3
    case 0xEFDFFB: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/EF/EFDFC4.asm:33 LDA @VIRTUAL02
    case 0xEFDFFD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:34 CMP #$8000
    case 0xEFDFFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:34 CMP #$8000
    // Overlapping static entry reached from 0xEFDFFF.
    case 0xEFE001: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFDFC4.asm:35 BCS @UNKNOWN2
    case 0xEFE002: cpu.execute_instruction<0xB0>(0x00002F, 2); return true;
    // src/unknown/EF/EFDFC4.asm:36 LDA @VIRTUAL02
    case 0xEFE004: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:37 AND #$003F
    case 0xEFE006: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:37 AND #$003F
    // Overlapping static entry reached from 0xEFE006.
    case 0xEFE008: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:38 STA @VIRTUAL02
    case 0xEFE009: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:39 LDA @LOCAL05
    case 0xEFE00B: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:40 AND #$003F
    case 0xEFE00D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:40 AND #$003F
    // Overlapping static entry reached from 0xEFE00D.
    case 0xEFE00F: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:41 ASL
    case 0xEFE010: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:42 ASL
    case 0xEFE011: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:43 ASL
    case 0xEFE012: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:44 ASL
    case 0xEFE013: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:45 ASL
    case 0xEFE014: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:46 ASL
    case 0xEFE015: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:47 CLC
    case 0xEFE016: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:48 ADC @VIRTUAL02
    case 0xEFE017: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:49 TAX
    case 0xEFE019: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:50 LDA LOADED_COLLISION_TILES,X
    case 0xEFE01A: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:51 AND #$00FF
    case 0xEFE01D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDFC4.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xEFE01D.
    case 0xEFE01F: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/EF/EFDFC4.asm:52 LDY @LOCAL05
    case 0xEFE020: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:53 LDX @LOCAL04
    case 0xEFE022: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/EF/EFDFC4.asm:54 STX @VIRTUAL02
    case 0xEFE024: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:55 JSR UNKNOWN_EFDF0B
    case 0xEFE026: cpu.execute_instruction<0x20>(0x00DF0B, 3); return true;
    // src/unknown/EF/EFDFC4.asm:56 STA @LOCAL01
    case 0xEFE029: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFDFC4.asm:57 LDA @LOCAL02
    case 0xEFE02B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:58 ASL
    case 0xEFE02D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:59 TAY
    case 0xEFE02E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:60 LDA @LOCAL01
    case 0xEFE02F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFDFC4.asm:61 STA (@LOCAL03),Y
    case 0xEFE031: cpu.execute_instruction<0x91>(0x000016, 2); return true;
    // src/unknown/EF/EFDFC4.asm:63 LDA @LOCAL02
    case 0xEFE033: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:64 INC
    case 0xEFE035: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:65 AND #$001F
    case 0xEFE036: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:65 AND #$001F
    // Overlapping static entry reached from 0xEFE036.
    case 0xEFE038: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:66 STA @LOCAL02
    case 0xEFE039: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:67 INC @VIRTUAL02
    case 0xEFE03B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:68 LDA @VIRTUAL02
    case 0xEFE03D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:69 STA @LOCAL04
    case 0xEFE03F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFDFC4.asm:70 INC @VIRTUAL04
    case 0xEFE041: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/EF/EFDFC4.asm:72 LDA @VIRTUAL04
    case 0xEFE043: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFDFC4.asm:73 CMP #32
    case 0xEFE045: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/EF/EFDFC4.asm:73 CMP #32
    // Overlapping static entry reached from 0xEFE045.
    case 0xEFE047: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFDFC4.asm:74 BCC @UNKNOWN1
    case 0xEFE048: cpu.execute_instruction<0x90>(0x0000B3, 2); return true;
    // src/unknown/EF/EFDFC4.asm:76 LDA @LOCAL03
    case 0xEFE04A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/EF/EFDFC4.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFE04C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/EF/EFDFC4.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFE04E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/EF/EFDFC4.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFE04F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/EF/EFDFC4.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFE051: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/EF/EFDFC4.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFE052: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/EF/EFDFC4.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFE054: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/EF/EFDFC4.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xEFE056: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFDFC4.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE058: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFDFC4.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE05A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFDFC4.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE05C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFDFC4.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE05E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDFC4.asm:80 LDA @LOCAL05
    case 0xEFE060: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:81 AND #$001F
    case 0xEFE062: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:81 AND #$001F
    // Overlapping static entry reached from 0xEFE062.
    case 0xEFE064: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:82 ASL
    case 0xEFE065: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:83 ASL
    case 0xEFE066: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:84 ASL
    case 0xEFE067: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:85 ASL
    case 0xEFE068: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:86 ASL
    case 0xEFE069: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:87 CLC
    case 0xEFE06A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:88 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xEFE06B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFDFC4.asm:88 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFE06B.
    case 0xEFE06D: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/unknown/EF/EFDFC4.asm:89 TAY
    case 0xEFE06E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:90 LDX #64
    case 0xEFE06F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/unknown/EF/EFDFC4.asm:90 LDX #64
    // Overlapping static entry reached from 0xEFE06F.
    case 0xEFE071: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFDFC4.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xEFE072: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDFC4.asm:92 LDA #0
    case 0xEFE074: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/EF/EFDFC4.asm:93 JSL PREPARE_VRAM_COPY
    case 0xEFE076: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/EF/EFDFC4.asm:93 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFE074.
    case 0xEFE077: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/EF/EFDFC4.asm:93 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFE077.
    case 0xEFE079: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFDFC4.asm:95 END_C_FUNCTION
    case 0xEFE07A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFDFC4.asm:95 END_C_FUNCTION
    case 0xEFE07B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE07C.asm (unresolved).
bool execute_unresolved_ef_efe07c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE07C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFE07C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    case 0xEFE07E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    case 0xEFE07F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    case 0xEFE080: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    case 0xEFE081: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xEFE081.
    case 0xEFE083: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    case 0xEFE084: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    case 0xEFE085: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:14 STX @VIRTUAL02
    case 0xEFE086: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:14 STX @VIRTUAL02
    // Overlapping static entry reached from 0xEFE083.
    case 0xEFE087: cpu.execute_instruction<0x02>(0x000086, 2); return true;
    // src/unknown/EF/EFE07C.asm:15 STX @LOCAL05
    case 0xEFE088: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/EF/EFE07C.asm:16 STA @LOCAL04
    case 0xEFE08A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:17 LDA DEBUG_MODE_NUMBER
    case 0xEFE08C: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE07C.asm:18 CMP #3
    case 0xEFE08F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE07C.asm:18 CMP #3
    // Overlapping static entry reached from 0xEFE08F.
    case 0xEFE091: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/EF/EFE07C.asm:19 BNEL @UNKNOWN5
    case 0xEFE092: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/EF/EFE07C.asm:19 BNEL @UNKNOWN5
    case 0xEFE094: cpu.execute_instruction<0x4C>(0x00E131, 3); return true;
    // src/unknown/EF/EFE07C.asm:20 LDA #64
    case 0xEFE097: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFE07C.asm:20 LDA #64
    // Overlapping static entry reached from 0xEFE097.
    case 0xEFE099: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE07C.asm:21 JSL SBRK
    case 0xEFE09A: cpu.execute_instruction<0x22>(0xC086DE, 4); return true;
    // src/unknown/EF/EFE07C.asm:22 STA @LOCAL03
    case 0xEFE09E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EFE07C.asm:23 LDA @LOCAL04
    case 0xEFE0A0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:24 CMP #$8000
    case 0xEFE0A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFE07C.asm:24 CMP #$8000
    // Overlapping static entry reached from 0xEFE0A2.
    case 0xEFE0A4: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFE07C.asm:25 BCS @UNKNOWN4
    case 0xEFE0A5: cpu.execute_instruction<0xB0>(0x00005F, 2); return true;
    // src/unknown/EF/EFE07C.asm:26 LDA @VIRTUAL02
    case 0xEFE0A7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:27 AND #$001F
    case 0xEFE0A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFE07C.asm:27 AND #$001F
    // Overlapping static entry reached from 0xEFE0A9.
    case 0xEFE0AB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE07C.asm:28 STA @LOCAL02
    case 0xEFE0AC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:29 LDA #0
    case 0xEFE0AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE07C.asm:29 LDA #0
    // Overlapping static entry reached from 0xEFE0AE.
    case 0xEFE0B0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE07C.asm:30 STA @VIRTUAL04
    case 0xEFE0B1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE07C.asm:31 BRA @UNKNOWN3
    case 0xEFE0B3: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/unknown/EF/EFE07C.asm:33 LDA @VIRTUAL02
    case 0xEFE0B5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:34 CMP #$8000
    case 0xEFE0B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFE07C.asm:34 CMP #$8000
    // Overlapping static entry reached from 0xEFE0B7.
    case 0xEFE0B9: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFE07C.asm:35 BCS @UNKNOWN2
    case 0xEFE0BA: cpu.execute_instruction<0xB0>(0x000033, 2); return true;
    // src/unknown/EF/EFE07C.asm:36 LDA @LOCAL04
    case 0xEFE0BC: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:37 AND #$003F
    case 0xEFE0BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFE07C.asm:37 AND #$003F
    // Overlapping static entry reached from 0xEFE0BE.
    case 0xEFE0C0: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/EF/EFE07C.asm:38 PHA
    case 0xEFE0C1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:39 LDA @VIRTUAL02
    case 0xEFE0C2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:40 AND #$003F
    case 0xEFE0C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFE07C.asm:40 AND #$003F
    // Overlapping static entry reached from 0xEFE0C4.
    case 0xEFE0C6: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EFE07C.asm:41 ASL
    case 0xEFE0C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:42 ASL
    case 0xEFE0C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:43 ASL
    case 0xEFE0C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:44 ASL
    case 0xEFE0CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:45 ASL
    case 0xEFE0CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:46 ASL
    case 0xEFE0CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:47 PLY
    case 0xEFE0CD: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:48 STY @VIRTUAL02
    case 0xEFE0CE: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:49 CLC
    case 0xEFE0D0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:50 ADC @VIRTUAL02
    case 0xEFE0D1: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:51 TAX
    case 0xEFE0D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:52 LDA LOADED_COLLISION_TILES,X
    case 0xEFE0D4: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/EF/EFE07C.asm:53 AND #$00FF
    case 0xEFE0D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFE07C.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xEFE0D7.
    case 0xEFE0D9: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/EF/EFE07C.asm:54 LDX @LOCAL05
    case 0xEFE0DA: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/EF/EFE07C.asm:55 STX @VIRTUAL02
    case 0xEFE0DC: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:56 LDY @VIRTUAL02
    case 0xEFE0DE: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:57 LDX @LOCAL04
    case 0xEFE0E0: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:57 LDX @LOCAL04
    // Overlapping static entry reached from 0xEFE15A.
    case 0xEFE0E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:58 JSR UNKNOWN_EFDF0B
    case 0xEFE0E2: cpu.execute_instruction<0x20>(0x00DF0B, 3); return true;
    // src/unknown/EF/EFE07C.asm:59 STA @LOCAL01
    case 0xEFE0E5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFE07C.asm:60 LDA @LOCAL02
    case 0xEFE0E7: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:61 ASL
    case 0xEFE0E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:62 TAY
    case 0xEFE0EA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:63 LDA @LOCAL01
    case 0xEFE0EB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFE07C.asm:64 STA (@LOCAL03),Y
    case 0xEFE0ED: cpu.execute_instruction<0x91>(0x000016, 2); return true;
    // src/unknown/EF/EFE07C.asm:66 LDA @LOCAL02
    case 0xEFE0EF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:67 INC
    case 0xEFE0F1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:68 AND #$001F
    case 0xEFE0F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFE07C.asm:68 AND #$001F
    // Overlapping static entry reached from 0xEFE0F2.
    case 0xEFE0F4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE07C.asm:69 STA @LOCAL02
    case 0xEFE0F5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:70 INC @VIRTUAL02
    case 0xEFE0F7: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:71 LDA @VIRTUAL02
    case 0xEFE0F9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:72 STA @LOCAL05
    case 0xEFE0FB: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE07C.asm:73 INC @VIRTUAL04
    case 0xEFE0FD: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/EF/EFE07C.asm:75 LDA @VIRTUAL04
    case 0xEFE0FF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE07C.asm:76 CMP #32
    case 0xEFE101: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/EF/EFE07C.asm:76 CMP #32
    // Overlapping static entry reached from 0xEFE101.
    case 0xEFE103: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFE07C.asm:77 BCC @UNKNOWN1
    case 0xEFE104: cpu.execute_instruction<0x90>(0x0000AF, 2); return true;
    // src/unknown/EF/EFE07C.asm:79 LDA @LOCAL03
    case 0xEFE106: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/EF/EFE07C.asm:80 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFE108: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/EF/EFE07C.asm:80 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFE10A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/EF/EFE07C.asm:80 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFE10B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/EF/EFE07C.asm:80 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFE10D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/EF/EFE07C.asm:80 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFE10E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/EF/EFE07C.asm:80 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFE110: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/EF/EFE07C.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xEFE112: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE07C.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE114: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE07C.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE116: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE07C.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE118: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE07C.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE11A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE07C.asm:83 LDA @LOCAL04
    case 0xEFE11C: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:84 AND #$001F
    case 0xEFE11E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFE07C.asm:84 AND #$001F
    // Overlapping static entry reached from 0xEFE11E.
    case 0xEFE120: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:85 CLC
    case 0xEFE121: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:86 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xEFE122: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFE07C.asm:86 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFE122.
    case 0xEFE124: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/unknown/EF/EFE07C.asm:87 TAY
    case 0xEFE125: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:88 LDX #64
    case 0xEFE126: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/unknown/EF/EFE07C.asm:88 LDX #64
    // Overlapping static entry reached from 0xEFE126.
    case 0xEFE128: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFE07C.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xEFE129: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE07C.asm:90 LDA #27
    case 0xEFE12B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // src/unknown/EF/EFE07C.asm:91 JSL PREPARE_VRAM_COPY
    case 0xEFE12D: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/EF/EFE07C.asm:91 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFE12B.
    case 0xEFE12E: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/EF/EFE07C.asm:91 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFE12E.
    case 0xEFE130: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE07C.asm:93 END_C_FUNCTION
    case 0xEFE131: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE07C.asm:93 END_C_FUNCTION
    case 0xEFE132: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE133.asm (unresolved).
bool execute_unresolved_ef_efe133_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE133.asm:3 BEGIN_C_FUNCTION
    case 0xEFE133: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    case 0xEFE135: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    case 0xEFE136: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    case 0xEFE137: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    case 0xEFE138: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEFE138.
    case 0xEFE13A: cpu.execute_instruction<0xFF>(0x4A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    case 0xEFE13B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    case 0xEFE13C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:9 LSR
    case 0xEFE13D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:10 LSR
    case 0xEFE13E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:11 LSR
    case 0xEFE13F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:12 SEC
    case 0xEFE140: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:13 SBC #16
    case 0xEFE141: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/EF/EFE133.asm:13 SBC #16
    // Overlapping static entry reached from 0xEFE141.
    case 0xEFE143: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE133.asm:14 STA @VIRTUAL04
    case 0xEFE144: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE133.asm:15 TXA
    case 0xEFE146: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:16 LSR
    case 0xEFE147: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:17 LSR
    case 0xEFE148: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:18 LSR
    case 0xEFE149: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:19 SEC
    case 0xEFE14A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:20 SBC #14
    case 0xEFE14B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/unknown/EF/EFE133.asm:20 SBC #14
    // Overlapping static entry reached from 0xEFE14B.
    case 0xEFE14D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE133.asm:21 STA @VIRTUAL02
    case 0xEFE14E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:22 STA @LOCAL01
    case 0xEFE150: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE133.asm:23 LDY #.LOWORD(-1)
    case 0xEFE152: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE133.asm:23 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE152.
    case 0xEFE154: cpu.execute_instruction<0xFF>(0x800E84, 4); return true;
    // src/unknown/EF/EFE133.asm:24 STY @LOCAL00
    case 0xEFE155: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/EF/EFE133.asm:25 BRA @UNKNOWN1
    case 0xEFE157: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/EF/EFE133.asm:25 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xEFE154.
    case 0xEFE158: cpu.execute_instruction<0x15>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE133.asm:27 LDA @LOCAL01
    case 0xEFE159: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/EF/EFE133.asm:27 LDA @LOCAL01
    // Overlapping static entry reached from 0xEFE158.
    case 0xEFE15A: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/unknown/EF/EFE133.asm:28 STA @VIRTUAL02
    case 0xEFE15B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:28 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFE15A.
    case 0xEFE15C: cpu.execute_instruction<0x02>(0x000084, 2); return true;
    // src/unknown/EF/EFE133.asm:29 STY @VIRTUAL02
    case 0xEFE15D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:30 CLC
    case 0xEFE15F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:31 ADC @VIRTUAL02
    case 0xEFE160: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:32 TAX
    case 0xEFE162: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:33 LDA @VIRTUAL04
    case 0xEFE163: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE133.asm:34 JSL UNKNOWN_EFDFC4
    case 0xEFE165: cpu.execute_instruction<0x22>(0xEFDFC4, 4); return true;
    // src/unknown/EF/EFE133.asm:35 LDY @LOCAL00
    case 0xEFE169: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/EF/EFE133.asm:36 INY
    case 0xEFE16B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:37 STY @LOCAL00
    case 0xEFE16C: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/EF/EFE133.asm:39 CPY #31
    case 0xEFE16E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001F, 2); else cpu.execute_instruction<0xC0>(0x00001F, 3); return true;
    // src/unknown/EF/EFE133.asm:39 CPY #31
    // Overlapping static entry reached from 0xEFE16E.
    case 0xEFE170: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE133.asm:40 BNE @UNKNOWN0
    case 0xEFE171: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE133.asm:41 END_C_FUNCTION
    case 0xEFE173: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFE133.asm:41 END_C_FUNCTION
    case 0xEFE174: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE175.asm (unresolved).
bool execute_unresolved_ef_efe175_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE175.asm:3 BEGIN_C_FUNCTION
    case 0xEFE175: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE175.asm:13 END_STACK_VARS
    case 0xEFE177: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE175.asm:13 END_STACK_VARS
    case 0xEFE178: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE175.asm:13 END_STACK_VARS
    case 0xEFE179: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE175.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xEFE179.
    case 0xEFE17B: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE175.asm:13 END_STACK_VARS
    case 0xEFE17C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE175.asm:14 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFE17D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE175.asm:14 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE17D.
    case 0xEFE17F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE175.asm:14 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFE180: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE175.asm:14 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFE182: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE175.asm:14 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE182.
    case 0xEFE184: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE175.asm:14 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFE185: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFE175.asm:15 LDA #0
    case 0xEFE187: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:15 LDA #0
    // Overlapping static entry reached from 0xEFE187.
    case 0xEFE189: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/EF/EFE175.asm:16 STA [@VIRTUAL06]
    case 0xEFE18A: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/EF/EFE175.asm:17 LDA DEBUG_START_POSITION_X
    case 0xEFE18C: cpu.execute_instruction<0xAD>(0x00B561, 3); return true;
    // src/unknown/EF/EFE175.asm:18 STA @VIRTUAL04
    case 0xEFE18F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:19 LDA DEBUG_START_POSITION_Y
    case 0xEFE191: cpu.execute_instruction<0xAD>(0x00B563, 3); return true;
    // src/unknown/EF/EFE175.asm:20 STA @VIRTUAL02
    case 0xEFE194: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:21 JSL UNKNOWN_C08726
    case 0xEFE196: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/unknown/EF/EFE175.asm:22 JSL UNKNOWN_C0927C
    case 0xEFE19A: cpu.execute_instruction<0x22>(0xC0927C, 4); return true;
    // src/unknown/EF/EFE175.asm:23 JSL UNKNOWN_C01A86
    case 0xEFE19E: cpu.execute_instruction<0x22>(0xC01A86, 4); return true;
    // src/unknown/EF/EFE175.asm:24 LDX #0
    case 0xEFE1A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:24 LDX #0
    // Overlapping static entry reached from 0xEFE1A2.
    case 0xEFE1A4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175.asm:25 LDA #$8000
    case 0xEFE1A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/EF/EFE175.asm:25 LDA #$8000
    // Overlapping static entry reached from 0xEFE1A5.
    case 0xEFE1A7: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:26 JSL ALLOC_SPRITE_MEM
    case 0xEFE1A8: cpu.execute_instruction<0x22>(0xC01C11, 4); return true;
    // src/unknown/EF/EFE175.asm:27 JSL INITIALIZE_MISC_OBJECT_DATA
    case 0xEFE1AC: cpu.execute_instruction<0x22>(0xC01A69, 4); return true;
    // src/unknown/EF/EFE175.asm:28 LDA DEBUG_VIEW_CHARACTER_SPRITE
    case 0xEFE1B0: cpu.execute_instruction<0xAD>(0x00B565, 3); return true;
    // src/unknown/EF/EFE175.asm:29 STA @LOCAL07
    case 0xEFE1B3: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:30 LDA #23
    case 0xEFE1B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/EF/EFE175.asm:30 LDA #23
    // Overlapping static entry reached from 0xEFE1B5.
    case 0xEFE1B7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175.asm:31 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xEFE1B8: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/unknown/EF/EFE175.asm:32 LDA #24
    case 0xEFE1BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/EF/EFE175.asm:32 LDA #24
    // Overlapping static entry reached from 0xEFE1BB.
    case 0xEFE1BD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175.asm:33 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xEFE1BE: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/unknown/EF/EFE175.asm:34 LDA #3
    case 0xEFE1C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175.asm:34 LDA #3
    // Overlapping static entry reached from 0xEFE1C1.
    case 0xEFE1C3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175.asm:35 STA NEW_ENTITY_PRIORITY
    case 0xEFE1C4: cpu.execute_instruction<0x8D>(0x000A4A, 3); return true;
    // src/unknown/EF/EFE175.asm:36 LDA @VIRTUAL04
    case 0xEFE1C7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:37 STA GAME_STATE+game_state::leader_x_coord
    case 0xEFE1C9: cpu.execute_instruction<0x8D>(0x009877, 3); return true;
    // src/unknown/EF/EFE175.asm:37 STA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xEFE1A7.
    case 0xEFE1CB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:38 LDA @VIRTUAL02
    case 0xEFE1CC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:39 STA GAME_STATE+game_state::leader_y_coord
    case 0xEFE1CE: cpu.execute_instruction<0x8D>(0x00987B, 3); return true;
    // src/unknown/EF/EFE175.asm:40 LDY #0
    case 0xEFE1D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:40 LDY #0
    // Overlapping static entry reached from 0xEFE1D1.
    case 0xEFE1D3: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EFE175.asm:41 TYX
    case 0xEFE1D4: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:42 LDA #EVENT_SCRIPT::EVENT_001
    case 0xEFE1D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFE175.asm:42 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xEFE1D5.
    case 0xEFE1D7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:43 JSL INIT_ENTITY
    case 0xEFE1D8: cpu.execute_instruction<0x22>(0xC09321, 4); return true;
    // src/unknown/EF/EFE175.asm:44 JSL UNKNOWN_C02D29
    case 0xEFE1DC: cpu.execute_instruction<0x22>(0xC02D29, 4); return true;
    // src/unknown/EF/EFE175.asm:45 LDX #0
    case 0xEFE1E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:45 LDX #0
    // Overlapping static entry reached from 0xEFE1E0.
    case 0xEFE1E2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EFE175.asm:46 BRA @UNKNOWN1
    case 0xEFE1E3: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/EF/EFE175.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xEFE1E5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175.asm:49 STZ GAME_STATE + game_state::party_members,X
    case 0xEFE1E7: cpu.execute_instruction<0x9E>(0x00986F, 3); return true;
    // src/unknown/EF/EFE175.asm:50 INX
    case 0xEFE1EA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:52 CPX #6
    case 0xEFE1EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/unknown/EF/EFE175.asm:52 CPX #6
    // Overlapping static entry reached from 0xEFE1EB.
    case 0xEFE1ED: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFE175.asm:53 BCC @UNKNOWN0
    case 0xEFE1EE: cpu.execute_instruction<0x90>(0x0000F5, 2); return true;
    // src/unknown/EF/EFE175.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xEFE1F0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175.asm:55 LDA #CHARACTER_PAULA
    case 0xEFE1F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFE175.asm:55 LDA #CHARACTER_PAULA
    // Overlapping static entry reached from 0xEFE1F2.
    case 0xEFE1F4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:56 JSL ADD_CHAR_TO_PARTY
    case 0xEFE1F5: cpu.execute_instruction<0x22>(0xC228F8, 4); return true;
    // src/unknown/EF/EFE175.asm:57 LDA DEBUG_MODE_NUMBER
    case 0xEFE1F9: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:58 CMP #5
    case 0xEFE1FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175.asm:58 CMP #5
    // Overlapping static entry reached from 0xEFE1FC.
    case 0xEFE1FE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:59 BEQ @UNKNOWN2
    case 0xEFE1FF: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/EF/EFE175.asm:60 LDA DEBUG_MODE_NUMBER
    case 0xEFE201: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:60 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFE264.
    case 0xEFE203: cpu.execute_instruction<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFE175.asm:61 CMP #3
    case 0xEFE204: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175.asm:61 CMP #3
    // Overlapping static entry reached from 0xEFE203.
    case 0xEFE205: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/unknown/EF/EFE175.asm:61 CMP #3
    // Overlapping static entry reached from 0xEFE204.
    case 0xEFE206: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:62 BEQ @UNKNOWN2
    case 0xEFE207: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175.asm:63 LDA #CHARACTER_JEFF
    case 0xEFE209: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175.asm:63 LDA #CHARACTER_JEFF
    // Overlapping static entry reached from 0xEFE209.
    case 0xEFE20B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:64 JSL ADD_CHAR_TO_PARTY
    case 0xEFE20C: cpu.execute_instruction<0x22>(0xC228F8, 4); return true;
    // src/unknown/EF/EFE175.asm:65 LDA #CHARACTER_POO
    case 0xEFE210: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175.asm:65 LDA #CHARACTER_POO
    // Overlapping static entry reached from 0xEFE210.
    case 0xEFE212: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:66 JSL ADD_CHAR_TO_PARTY
    case 0xEFE213: cpu.execute_instruction<0x22>(0xC228F8, 4); return true;
    // src/unknown/EF/EFE175.asm:68 LDA #<-1
    case 0xEFE217: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/EF/EFE175.asm:68 LDA #<-1
    // Overlapping static entry reached from 0xEFE217.
    case 0xEFE219: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:69 JSL UNKNOWN_C46631
    case 0xEFE21A: cpu.execute_instruction<0x22>(0xC46631, 4); return true;
    // src/unknown/EF/EFE175.asm:70 LDX #128
    case 0xEFE21E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000080, 3); return true;
    // src/unknown/EF/EFE175.asm:70 LDX #128
    // Overlapping static entry reached from 0xEFE21E.
    case 0xEFE220: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/unknown/EF/EFE175.asm:71 STX ENTITY_SCREEN_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xEFE221: cpu.execute_instruction<0x8E>(0x000B46, 3); return true;
    // src/unknown/EF/EFE175.asm:72 LDX #112
    case 0xEFE224: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000070, 2); else cpu.execute_instruction<0xA2>(0x000070, 3); return true;
    // src/unknown/EF/EFE175.asm:72 LDX #112
    // Overlapping static entry reached from 0xEFE224.
    case 0xEFE226: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/unknown/EF/EFE175.asm:73 STX ENTITY_SCREEN_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xEFE227: cpu.execute_instruction<0x8E>(0x000B82, 3); return true;
    // src/unknown/EF/EFE175.asm:74 LDA DEBUG_MODE_NUMBER
    case 0xEFE22A: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:75 CMP #2
    case 0xEFE22D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175.asm:75 CMP #2
    // Overlapping static entry reached from 0xEFE22D.
    case 0xEFE22F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:76 BNE @UNKNOWN3
    case 0xEFE230: cpu.execute_instruction<0xD0>(0x000036, 2); return true;
    // src/unknown/EF/EFE175.asm:77 LDA #32
    case 0xEFE232: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/EF/EFE175.asm:77 LDA #32
    // Overlapping static entry reached from 0xEFE232.
    case 0xEFE234: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175.asm:78 STA @LOCAL00
    case 0xEFE235: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175.asm:79 STA @LOCAL01
    case 0xEFE237: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE175.asm:80 LDY #.LOWORD(-1)
    case 0xEFE239: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:80 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE239.
    case 0xEFE23B: cpu.execute_instruction<0xFF>(0x0004A2, 4); return true;
    // src/unknown/EF/EFE175.asm:81 LDX #EVENT_SCRIPT::EVENT_004
    case 0xEFE23C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EFE175.asm:81 LDX #EVENT_SCRIPT::EVENT_004
    // Overlapping static entry reached from 0xEFE23C.
    case 0xEFE23E: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175.asm:82 LDA @LOCAL07
    case 0xEFE23F: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:83 JSL CREATE_ENTITY
    case 0xEFE241: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/EF/EFE175.asm:84 STA @LOCAL06
    case 0xEFE245: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175.asm:85 ASL
    case 0xEFE247: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:86 STA @LOCAL05
    case 0xEFE248: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:87 CLC
    case 0xEFE24A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:88 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xEFE24B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/EF/EFE175.asm:88 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xEFE24B.
    case 0xEFE24D: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:89 TAX
    case 0xEFE24E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:90 LDA __BSS_START__,X
    case 0xEFE24F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:91 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xEFE252: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/EF/EFE175.asm:91 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xEFE252.
    case 0xEFE254: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/EF/EFE175.asm:92 STA __BSS_START__,X
    case 0xEFE255: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:92 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFE254.
    case 0xEFE256: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFE175.asm:92 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFE254.
    case 0xEFE257: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175.asm:93 LDA @LOCAL05
    case 0xEFE258: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:94 CLC
    case 0xEFE25A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:95 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xEFE25B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/EF/EFE175.asm:95 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xEFE25B.
    case 0xEFE25D: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:96 TAX
    case 0xEFE25E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:97 LDA __BSS_START__,X
    case 0xEFE25F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:98 ORA #$8000
    case 0xEFE262: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/EF/EFE175.asm:98 ORA #$8000
    // Overlapping static entry reached from 0xEFE262.
    case 0xEFE264: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/EF/EFE175.asm:99 STA __BSS_START__,X
    case 0xEFE265: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xEFE268: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/EF/EFE175.asm:102 STZ_BADOPT @LOCAL00
    case 0xEFE26A: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175.asm:103 LDX #BPP4PALETTE_SIZE * 16
    case 0xEFE26C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/EF/EFE175.asm:103 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xEFE26C.
    case 0xEFE26E: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/unknown/EF/EFE175.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xEFE26F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175.asm:105 LDA #.LOWORD(PALETTES)
    case 0xEFE271: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/EF/EFE175.asm:105 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xEFE271.
    case 0xEFE273: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:106 JSL MEMSET16
    case 0xEFE274: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/EF/EFE175.asm:107 JSL OVERWORLD_INITIALIZE
    case 0xEFE278: cpu.execute_instruction<0x22>(0xC0004B, 4); return true;
    // src/unknown/EF/EFE175.asm:108 LDX @VIRTUAL02
    case 0xEFE27C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:109 LDA @VIRTUAL04
    case 0xEFE27E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:110 JSL LOAD_MAP_AT_POSITION
    case 0xEFE280: cpu.execute_instruction<0x22>(0xC013F6, 4); return true;
    // src/unknown/EF/EFE175.asm:111 LDY #4
    case 0xEFE284: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/EF/EFE175.asm:111 LDY #4
    // Overlapping static entry reached from 0xEFE284.
    case 0xEFE286: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/EF/EFE175.asm:112 LDX @VIRTUAL02
    case 0xEFE287: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:113 LDA @VIRTUAL04
    case 0xEFE289: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:114 JSL UNKNOWN_C03FA9
    case 0xEFE28B: cpu.execute_instruction<0x22>(0xC03FA9, 4); return true;
    // src/unknown/EF/EFE175.asm:115 JSL UNKNOWN_EFD95E
    case 0xEFE28F: cpu.execute_instruction<0x22>(0xEFD95E, 4); return true;
    // src/unknown/EF/EFE175.asm:116 LDA DEBUG_MODE_NUMBER
    case 0xEFE293: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:117 CMP #3
    case 0xEFE296: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175.asm:117 CMP #3
    // Overlapping static entry reached from 0xEFE296.
    case 0xEFE298: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:118 BNE @UNKNOWN4
    case 0xEFE299: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/EF/EFE175.asm:119 SEP #PROC_FLAGS::ACCUM8
    case 0xEFE29B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175.asm:120 LDA #$13
    case 0xEFE29D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008D13, 3); return true;
    // src/unknown/EF/EFE175.asm:121 STA TM_MIRROR
    case 0xEFE29F: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/EF/EFE175.asm:121 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFE29D.
    case 0xEFE2A0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:121 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFE2A0.
    case 0xEFE2A1: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175.asm:122 LDA #$04
    case 0xEFE2A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/unknown/EF/EFE175.asm:123 STA TD_MIRROR
    case 0xEFE2A4: cpu.execute_instruction<0x8D>(0x00001B, 3); return true;
    // src/unknown/EF/EFE175.asm:123 STA TD_MIRROR
    // Overlapping static entry reached from 0xEFE2A2.
    case 0xEFE2A5: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:123 STA TD_MIRROR
    // Overlapping static entry reached from 0xEFE2A5.
    case 0xEFE2A6: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175.asm:124 LDA #$02
    case 0xEFE2A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008F02, 3); return true;
    // src/unknown/EF/EFE175.asm:125 STA f:CGWSEL
    case 0xEFE2A9: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/EF/EFE175.asm:125 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFE2A7.
    case 0xEFE2AA: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/EF/EFE175.asm:125 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFE2AA.
    case 0xEFE2AC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175.asm:126 LDA #$47
    case 0xEFE2AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x008F47, 3); return true;
    // src/unknown/EF/EFE175.asm:127 STA f:CGADSUB
    case 0xEFE2AF: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/EF/EFE175.asm:127 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFE2AD.
    case 0xEFE2B0: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/EF/EFE175.asm:127 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFE2B0.
    case 0xEFE2B2: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/EF/EFE175.asm:128 REP #PROC_FLAGS::ACCUM8
    case 0xEFE2B3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175.asm:129 LDA #3
    case 0xEFE2B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175.asm:129 LDA #3
    // Overlapping static entry reached from 0xEFE2B5.
    case 0xEFE2B7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175.asm:130 STA DEBUG_MODE_NUMBER
    case 0xEFE2B8: cpu.execute_instruction<0x8D>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:132 LDA DEBUG_MODE_NUMBER
    case 0xEFE2BB: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:133 CMP #5
    case 0xEFE2BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175.asm:133 CMP #5
    // Overlapping static entry reached from 0xEFE2BE.
    case 0xEFE2C0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:134 BNE @UNKNOWN5
    case 0xEFE2C1: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:135 JSL UNKNOWN_EFEAC8
    case 0xEFE2C3: cpu.execute_instruction<0x22>(0xEFEAC8, 4); return true;
    // src/unknown/EF/EFE175.asm:137 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    case 0xEFE2C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00DC4E, 3); return true;
    // src/unknown/EF/EFE175.asm:137 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xEFE2C7.
    case 0xEFE2C9: cpu.execute_instruction<0xDC>(0x001C22, 3); return true;
    // src/unknown/EF/EFE175.asm:138 JSL SET_IRQ_CALLBACK
    case 0xEFE2CA: cpu.execute_instruction<0x22>(0xC0851C, 4); return true;
    // src/unknown/EF/EFE175.asm:138 JSL SET_IRQ_CALLBACK
    // Overlapping static entry reached from 0xEFE2AA.
    case 0xEFE2CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x004422, 3); return true;
    // src/unknown/EF/EFE175.asm:139 JSL UNKNOWN_C08744
    case 0xEFE2CE: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // src/unknown/EF/EFE175.asm:139 JSL UNKNOWN_C08744
    // Overlapping static entry reached from 0xEFE2CD.
    case 0xEFE2CF: cpu.execute_instruction<0x44>(0x00C087, 3); return true;
    // src/unknown/EF/EFE175.asm:139 JSL UNKNOWN_C08744
    // Overlapping static entry reached from 0xEFE2CD.
    case 0xEFE2D0: cpu.execute_instruction<0x87>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE175.asm:140 LDX #1
    case 0xEFE2D2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFE175.asm:140 LDX #1
    // Overlapping static entry reached from 0xEFE2D2.
    case 0xEFE2D4: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EFE175.asm:141 TXA
    case 0xEFE2D5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:142 JSL FADE_IN
    case 0xEFE2D6: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/EF/EFE175.asm:144 JSL OAM_CLEAR
    case 0xEFE2DA: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/EF/EFE175.asm:145 LDA DEBUG_MODE_NUMBER
    case 0xEFE2DE: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:146 CMP #2
    case 0xEFE2E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175.asm:146 CMP #2
    // Overlapping static entry reached from 0xEFE2E1.
    case 0xEFE2E3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:147 BEQ @UNKNOWN7
    case 0xEFE2E4: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EFE175.asm:148 CMP #5
    case 0xEFE2E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175.asm:148 CMP #5
    // Overlapping static entry reached from 0xEFE2E6.
    case 0xEFE2E8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:149 BEQ @UNKNOWN8
    case 0xEFE2E9: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EFE175.asm:150 BRA @UNKNOWN9
    case 0xEFE2EB: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/EF/EFE175.asm:152 JSR DISPLAY_VIEW_CHARACTER_DEBUG_OVERLAY
    case 0xEFE2ED: cpu.execute_instruction<0x20>(0x00DE1A, 3); return true;
    // src/unknown/EF/EFE175.asm:153 BRA @UNKNOWN9
    case 0xEFE2F0: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EFE175.asm:155 JSR DISPLAY_CHECK_POSITION_DEBUG_OVERLAY
    case 0xEFE2F2: cpu.execute_instruction<0x20>(0x00DCBC, 3); return true;
    // src/unknown/EF/EFE175.asm:157 LDA PAD_PRESS
    case 0xEFE2F5: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175.asm:158 AND #PAD::A_BUTTON
    case 0xEFE2F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFE175.asm:158 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFE2F8.
    case 0xEFE2FA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFE175.asm:159 BEQL @UNKNOWN13
    case 0xEFE2FB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFE175.asm:159 BEQL @UNKNOWN13
    case 0xEFE2FD: cpu.execute_instruction<0x4C>(0x00E387, 3); return true;
    // src/unknown/EF/EFE175.asm:160 STZ BATTLE_SWIRL_COUNTDOWN
    case 0xEFE300: cpu.execute_instruction<0x9C>(0x005D60, 3); return true;
    // src/unknown/EF/EFE175.asm:161 LDA PAD_STATE
    case 0xEFE303: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE175.asm:162 AND #PAD::X_BUTTON
    case 0xEFE306: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFE175.asm:162 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xEFE306.
    case 0xEFE308: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:163 BEQ @UNKNOWN11
    case 0xEFE309: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFE175.asm:164 LDA #.LOWORD(-1)
    case 0xEFE30B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:164 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE30B.
    case 0xEFE30D: cpu.execute_instruction<0xFF>(0xB5758D, 4); return true;
    // src/unknown/EF/EFE175.asm:165 STA DEBUG_ENEMIES_ENABLED_FLAG
    case 0xEFE30E: cpu.execute_instruction<0x8D>(0x00B575, 3); return true;
    // src/unknown/EF/EFE175.asm:167 LDA #.LOWORD(-1)
    case 0xEFE311: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:167 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE311.
    case 0xEFE313: cpu.execute_instruction<0xFF>(0x43708D, 4); return true;
    // src/unknown/EF/EFE175.asm:168 STA LOADED_MAP_PALETTE
    case 0xEFE314: cpu.execute_instruction<0x8D>(0x004370, 3); return true;
    // src/unknown/EF/EFE175.asm:169 STA LOADED_MAP_TILE_COMBO
    case 0xEFE317: cpu.execute_instruction<0x8D>(0x00436E, 3); return true;
    // src/unknown/EF/EFE175.asm:170 LDA SCREEN_X_PIXELS
    case 0xEFE31A: cpu.execute_instruction<0xAD>(0x004380, 3); return true;
    // src/unknown/EF/EFE175.asm:171 AND #$FFF8
    case 0xEFE31D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/EF/EFE175.asm:171 AND #$FFF8
    // Overlapping static entry reached from 0xEFE31D.
    case 0xEFE31F: cpu.execute_instruction<0xFF>(0x43808D, 4); return true;
    // src/unknown/EF/EFE175.asm:172 STA SCREEN_X_PIXELS
    case 0xEFE320: cpu.execute_instruction<0x8D>(0x004380, 3); return true;
    // src/unknown/EF/EFE175.asm:173 LDA SCREEN_Y_PIXELS
    case 0xEFE323: cpu.execute_instruction<0xAD>(0x004382, 3); return true;
    // src/unknown/EF/EFE175.asm:174 AND #$FFF8
    case 0xEFE326: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/EF/EFE175.asm:174 AND #$FFF8
    // Overlapping static entry reached from 0xEFE326.
    case 0xEFE328: cpu.execute_instruction<0xFF>(0x43828D, 4); return true;
    // src/unknown/EF/EFE175.asm:175 STA SCREEN_Y_PIXELS
    case 0xEFE329: cpu.execute_instruction<0x8D>(0x004382, 3); return true;
    // src/unknown/EF/EFE175.asm:176 JSL UNKNOWN_C08726
    case 0xEFE32C: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/unknown/EF/EFE175.asm:177 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    case 0xEFE330: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000077, 2); else cpu.execute_instruction<0xA9>(0x009877, 3); return true;
    // src/unknown/EF/EFE175.asm:177 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    // Overlapping static entry reached from 0xEFE330.
    case 0xEFE332: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:178 STA @VIRTUAL04
    case 0xEFE333: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:179 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    case 0xEFE335: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00987B, 3); return true;
    // src/unknown/EF/EFE175.asm:179 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    // Overlapping static entry reached from 0xEFE335.
    case 0xEFE337: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:180 STA @VIRTUAL02
    case 0xEFE338: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:181 LDX @VIRTUAL02
    case 0xEFE33A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:182 LDA __BSS_START__,X
    case 0xEFE33C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:183 TAX
    case 0xEFE33F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:184 STX @LOCAL04
    case 0xEFE340: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/EF/EFE175.asm:185 LDX @VIRTUAL04
    case 0xEFE342: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:186 LDA __BSS_START__,X
    case 0xEFE344: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:187 LDX @LOCAL04
    case 0xEFE347: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/EF/EFE175.asm:188 JSL LOAD_MAP_AT_POSITION
    case 0xEFE349: cpu.execute_instruction<0x22>(0xC013F6, 4); return true;
    // src/unknown/EF/EFE175.asm:189 LDY GAME_STATE+game_state::leader_direction
    case 0xEFE34D: cpu.execute_instruction<0xAC>(0x00987F, 3); return true;
    // src/unknown/EF/EFE175.asm:190 LDX @VIRTUAL02
    case 0xEFE350: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:191 LDA __BSS_START__,X
    case 0xEFE352: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:192 TAX
    case 0xEFE355: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:193 STX @LOCAL04
    case 0xEFE356: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/EF/EFE175.asm:194 LDX @VIRTUAL04
    case 0xEFE358: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:195 LDA __BSS_START__,X
    case 0xEFE35A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:196 LDX @LOCAL04
    case 0xEFE35D: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/EF/EFE175.asm:197 JSL UNKNOWN_C03FA9
    case 0xEFE35F: cpu.execute_instruction<0x22>(0xC03FA9, 4); return true;
    // src/unknown/EF/EFE175.asm:198 JSL UNKNOWN_EFD95E
    case 0xEFE363: cpu.execute_instruction<0x22>(0xEFD95E, 4); return true;
    // src/unknown/EF/EFE175.asm:199 STZ DEBUG_ENEMIES_ENABLED_FLAG
    case 0xEFE367: cpu.execute_instruction<0x9C>(0x00B575, 3); return true;
    // src/unknown/EF/EFE175.asm:200 LDA DEBUG_MODE_NUMBER
    case 0xEFE36A: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:201 CMP #5
    case 0xEFE36D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175.asm:201 CMP #5
    // Overlapping static entry reached from 0xEFE36D.
    case 0xEFE36F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:202 BNE @UNKNOWN12
    case 0xEFE370: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:203 JSL UNKNOWN_EFEAC8
    case 0xEFE372: cpu.execute_instruction<0x22>(0xEFEAC8, 4); return true;
    // src/unknown/EF/EFE175.asm:205 JSL UNKNOWN_C08744
    case 0xEFE376: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // src/unknown/EF/EFE175.asm:206 LDY #0
    case 0xEFE37A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:206 LDY #0
    // Overlapping static entry reached from 0xEFE37A.
    case 0xEFE37C: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFE175.asm:207 LDX #1
    case 0xEFE37D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFE175.asm:207 LDX #1
    // Overlapping static entry reached from 0xEFE37D.
    case 0xEFE37F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175.asm:208 LDA #4
    case 0xEFE380: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFE175.asm:208 LDA #4
    // Overlapping static entry reached from 0xEFE380.
    case 0xEFE382: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:209 JSL FADE_IN_WITH_MOSAIC
    case 0xEFE383: cpu.execute_instruction<0x22>(0xC087CE, 4); return true;
    // src/unknown/EF/EFE175.asm:211 LDA DEBUG_MODE_NUMBER
    case 0xEFE387: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:212 CMP #2
    case 0xEFE38A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175.asm:212 CMP #2
    // Overlapping static entry reached from 0xEFE38A.
    case 0xEFE38C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/EF/EFE175.asm:213 BNEL @UNKNOWN26
    case 0xEFE38D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/EF/EFE175.asm:213 BNEL @UNKNOWN26
    case 0xEFE38F: cpu.execute_instruction<0x4C>(0x00E4C2, 3); return true;
    // src/unknown/EF/EFE175.asm:214 LDY @LOCAL07
    case 0xEFE392: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:215 LDA PAD_HELD + 2
    case 0xEFE394: cpu.execute_instruction<0xAD>(0x00006B, 3); return true;
    // src/unknown/EF/EFE175.asm:216 STA @LOCAL03
    case 0xEFE397: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE175.asm:217 AND #PAD::UP
    case 0xEFE399: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/EF/EFE175.asm:217 AND #PAD::UP
    // Overlapping static entry reached from 0xEFE399.
    case 0xEFE39B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:218 BEQ @UNKNOWN16
    case 0xEFE39C: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/EF/EFE175.asm:219 LDA @LOCAL07
    case 0xEFE39E: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:220 CMP #333
    case 0xEFE3A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00004D, 2); else cpu.execute_instruction<0xC9>(0x00014D, 3); return true;
    // src/unknown/EF/EFE175.asm:220 CMP #333
    // Overlapping static entry reached from 0xEFE3A0.
    case 0xEFE3A2: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:221 BEQ @UNKNOWN15
    case 0xEFE3A3: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:221 BEQ @UNKNOWN15
    // Overlapping static entry reached from 0xEFE3A2.
    case 0xEFE3A4: cpu.execute_instruction<0x04>(0x0000E6, 2); return true;
    // src/unknown/EF/EFE175.asm:222 INC @LOCAL07
    case 0xEFE3A5: cpu.execute_instruction<0xE6>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:222 INC @LOCAL07
    // Overlapping static entry reached from 0xEFE3A4.
    case 0xEFE3A6: cpu.execute_instruction<0x1C>(0x001880, 3); return true;
    // src/unknown/EF/EFE175.asm:223 BRA @UNKNOWN18
    case 0xEFE3A7: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:223 BRA @UNKNOWN18
    // Overlapping static entry reached from 0xEFE3FC.
    case 0xEFE3A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:225 STZ @LOCAL07
    case 0xEFE3A9: cpu.execute_instruction<0x64>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:226 BRA @UNKNOWN18
    case 0xEFE3AB: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/EF/EFE175.asm:228 LDA @LOCAL03
    case 0xEFE3AD: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFE175.asm:229 AND #PAD::DOWN
    case 0xEFE3AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/EF/EFE175.asm:229 AND #PAD::DOWN
    // Overlapping static entry reached from 0xEFE3AF.
    case 0xEFE3B1: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:230 BEQ @UNKNOWN18
    case 0xEFE3B2: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/EF/EFE175.asm:230 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xEFE3B1.
    case 0xEFE3B3: cpu.execute_instruction<0x0D>(0x001CA5, 3); return true;
    // src/unknown/EF/EFE175.asm:231 LDA @LOCAL07
    case 0xEFE3B4: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:232 BEQ @UNKNOWN17
    case 0xEFE3B6: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:233 DEC @LOCAL07
    case 0xEFE3B8: cpu.execute_instruction<0xC6>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:234 BRA @UNKNOWN18
    case 0xEFE3BA: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/EF/EFE175.asm:236 LDA #324
    case 0xEFE3BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000044, 2); else cpu.execute_instruction<0xA9>(0x000144, 3); return true;
    // src/unknown/EF/EFE175.asm:236 LDA #324
    // Overlapping static entry reached from 0xEFE3BC.
    case 0xEFE3BE: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/unknown/EF/EFE175.asm:237 STA @LOCAL07
    case 0xEFE3BF: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:237 STA @LOCAL07
    // Overlapping static entry reached from 0xEFE3BE.
    case 0xEFE3C0: cpu.execute_instruction<0x1C>(0x006FAD, 3); return true;
    // src/unknown/EF/EFE175.asm:239 LDA PAD_PRESS + 2
    case 0xEFE3C1: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175.asm:239 LDA PAD_PRESS + 2
    // Overlapping static entry reached from 0xEFE3C0.
    case 0xEFE3C3: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/EF/EFE175.asm:240 AND #PAD::X_BUTTON
    case 0xEFE3C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFE175.asm:240 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xEFE3C4.
    case 0xEFE3C6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:241 BEQ @UNKNOWN19
    case 0xEFE3C7: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/EF/EFE175.asm:242 LDA @LOCAL06
    case 0xEFE3C9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175.asm:243 ASL
    case 0xEFE3CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:244 STA @LOCAL05
    case 0xEFE3CC: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:245 CLC
    case 0xEFE3CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:246 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xEFE3CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/EF/EFE175.asm:246 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xEFE3CF.
    case 0xEFE3D1: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:247 TAX
    case 0xEFE3D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:248 LDA __BSS_START__,X
    case 0xEFE3D3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:249 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xEFE3D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/EF/EFE175.asm:249 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xEFE3D6.
    case 0xEFE3D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/EF/EFE175.asm:250 STA __BSS_START__,X
    case 0xEFE3D9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:250 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFE3D8.
    case 0xEFE3DA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFE175.asm:250 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFE3D8.
    case 0xEFE3DB: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175.asm:251 LDA @LOCAL05
    case 0xEFE3DC: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:252 CLC
    case 0xEFE3DE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:253 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xEFE3DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/EF/EFE175.asm:253 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xEFE3DF.
    case 0xEFE3E1: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:254 TAX
    case 0xEFE3E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:255 LDA __BSS_START__,X
    case 0xEFE3E3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:256 ORA #$8000
    case 0xEFE3E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/EF/EFE175.asm:256 ORA #$8000
    // Overlapping static entry reached from 0xEFE3E6.
    case 0xEFE3E8: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/EF/EFE175.asm:257 STA __BSS_START__,X
    case 0xEFE3E9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:259 LDA PAD_PRESS + 2
    case 0xEFE3EC: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175.asm:260 AND #PAD::Y_BUTTON
    case 0xEFE3EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFE175.asm:260 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFE3EF.
    case 0xEFE3F1: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:261 BEQ @UNKNOWN20
    case 0xEFE3F2: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/EF/EFE175.asm:262 LDA @LOCAL06
    case 0xEFE3F4: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175.asm:263 ASL
    case 0xEFE3F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:264 STA @LOCAL05
    case 0xEFE3F7: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:265 CLC
    case 0xEFE3F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:266 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xEFE3FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/EF/EFE175.asm:266 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xEFE3FA.
    case 0xEFE3FC: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:267 TAX
    case 0xEFE3FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:268 LDA __BSS_START__,X
    case 0xEFE3FE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:269 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xEFE401: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/EF/EFE175.asm:269 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xEFE401.
    case 0xEFE403: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/EF/EFE175.asm:270 STA __BSS_START__,X
    case 0xEFE404: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:271 LDA @LOCAL05
    case 0xEFE407: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:272 CLC
    case 0xEFE409: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:273 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xEFE40A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/EF/EFE175.asm:273 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xEFE40A.
    case 0xEFE40C: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:274 TAX
    case 0xEFE40D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:275 LDA __BSS_START__,X
    case 0xEFE40E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:276 AND #$7FFF
    case 0xEFE411: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/EF/EFE175.asm:276 AND #$7FFF
    // Overlapping static entry reached from 0xEFE411.
    case 0xEFE413: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/EF/EFE175.asm:277 STA __BSS_START__,X
    case 0xEFE414: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:279 CPY @LOCAL07
    case 0xEFE417: cpu.execute_instruction<0xC4>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:280 BEQ @UNKNOWN21
    case 0xEFE419: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/EF/EFE175.asm:281 LDA @LOCAL06
    case 0xEFE41B: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175.asm:282 JSL UNKNOWN_C02140
    case 0xEFE41D: cpu.execute_instruction<0x22>(0xC02140, 4); return true;
    // src/unknown/EF/EFE175.asm:283 LDA #32
    case 0xEFE421: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/EF/EFE175.asm:283 LDA #32
    // Overlapping static entry reached from 0xEFE421.
    case 0xEFE423: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175.asm:284 STA @LOCAL00
    case 0xEFE424: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175.asm:285 STA @LOCAL01
    case 0xEFE426: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE175.asm:286 LDY @LOCAL06
    case 0xEFE428: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175.asm:287 LDX #EVENT_SCRIPT::EVENT_004
    case 0xEFE42A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EFE175.asm:287 LDX #EVENT_SCRIPT::EVENT_004
    // Overlapping static entry reached from 0xEFE42A.
    case 0xEFE42C: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175.asm:288 LDA @LOCAL07
    case 0xEFE42D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:289 JSL CREATE_ENTITY
    case 0xEFE42F: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/EF/EFE175.asm:290 ASL
    case 0xEFE433: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:291 TAX
    case 0xEFE434: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:292 STZ ENTITY_NPC_IDS,X
    case 0xEFE435: cpu.execute_instruction<0x9E>(0x002C9A, 3); return true;
    // src/unknown/EF/EFE175.asm:294 LDA PAD_PRESS + 2
    case 0xEFE438: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175.asm:295 AND #PAD::A_BUTTON
    case 0xEFE43B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFE175.asm:295 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFE43B.
    case 0xEFE43D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:296 BEQ @UNKNOWN22
    case 0xEFE43E: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/EF/EFE175.asm:297 LDA @LOCAL06
    case 0xEFE440: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175.asm:298 ASL
    case 0xEFE442: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:299 TAX
    case 0xEFE443: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:300 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xEFE444: cpu.execute_instruction<0xBD>(0x0010B6, 3); return true;
    // src/unknown/EF/EFE175.asm:301 AND #OBJECT_TICK_DISABLED
    case 0xEFE447: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE175.asm:301 AND #OBJECT_TICK_DISABLED
    // Overlapping static entry reached from 0xEFE447.
    case 0xEFE449: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:302 BNE @UNKNOWN22
    case 0xEFE44A: cpu.execute_instruction<0xD0>(0x000028, 2); return true;
    // src/unknown/EF/EFE175.asm:303 LDA BG1_X_POS
    case 0xEFE44C: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/EF/EFE175.asm:304 CLC
    case 0xEFE44F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:305 ADC #32
    case 0xEFE450: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/EF/EFE175.asm:305 ADC #32
    // Overlapping static entry reached from 0xEFE450.
    case 0xEFE452: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175.asm:306 STA @LOCAL05
    case 0xEFE453: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:307 LDA BG1_Y_POS
    case 0xEFE455: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/unknown/EF/EFE175.asm:308 CLC
    case 0xEFE458: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:309 ADC #32
    case 0xEFE459: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/EF/EFE175.asm:309 ADC #32
    // Overlapping static entry reached from 0xEFE459.
    case 0xEFE45B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175.asm:310 TAX
    case 0xEFE45C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:311 LDA @LOCAL05
    case 0xEFE45D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:312 STA @LOCAL00
    case 0xEFE45F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175.asm:313 STX @LOCAL01
    case 0xEFE461: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/EF/EFE175.asm:314 LDY #.LOWORD(-1)
    case 0xEFE463: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:314 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE463.
    case 0xEFE465: cpu.execute_instruction<0xFF>(0x0006A2, 4); return true;
    // src/unknown/EF/EFE175.asm:315 LDX #EVENT_SCRIPT::EVENT_006
    case 0xEFE466: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/EF/EFE175.asm:315 LDX #EVENT_SCRIPT::EVENT_006
    // Overlapping static entry reached from 0xEFE466.
    case 0xEFE468: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175.asm:316 LDA @LOCAL07
    case 0xEFE469: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:317 JSL CREATE_ENTITY
    case 0xEFE46B: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/EF/EFE175.asm:318 ASL
    case 0xEFE46F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:319 TAX
    case 0xEFE470: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:320 STZ ENTITY_NPC_IDS,X
    case 0xEFE471: cpu.execute_instruction<0x9E>(0x002C9A, 3); return true;
    // src/unknown/EF/EFE175.asm:322 LDA PAD_PRESS + 2
    case 0xEFE474: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175.asm:323 AND #PAD::B_BUTTON
    case 0xEFE477: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE175.asm:323 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFE477.
    case 0xEFE479: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:324 BEQ @UNKNOWN26
    case 0xEFE47A: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/unknown/EF/EFE175.asm:325 LDY BG1_X_POS
    case 0xEFE47C: cpu.execute_instruction<0xAC>(0x000031, 3); return true;
    // src/unknown/EF/EFE175.asm:326 LDA BG1_Y_POS
    case 0xEFE47F: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/unknown/EF/EFE175.asm:327 STA @LOCAL02
    case 0xEFE482: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFE175.asm:328 LDA #0
    case 0xEFE484: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE175.asm:328 LDA #0
    // Overlapping static entry reached from 0xEFE484.
    case 0xEFE486: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175.asm:329 STA @VIRTUAL02
    case 0xEFE487: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:330 BRA @UNKNOWN25
    case 0xEFE489: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/EF/EFE175.asm:332 LDA @VIRTUAL02
    case 0xEFE48B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:333 ASL
    case 0xEFE48D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:334 TAX
    case 0xEFE48E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:335 LDA ENTITY_SCRIPT_TABLE,X
    case 0xEFE48F: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/EF/EFE175.asm:336 CMP #.LOWORD(-1)
    case 0xEFE492: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:336 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE492.
    case 0xEFE494: cpu.execute_instruction<0xFF>(0x9E03F0, 4); return true;
    // src/unknown/EF/EFE175.asm:337 BEQ @UNKNOWN24
    case 0xEFE495: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFE175.asm:337 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xEFE4CB.
    case 0xEFE496: cpu.execute_instruction<0x03>(0x00009E, 2); return true;
    // src/unknown/EF/EFE175.asm:338 STZ ENTITY_PATHFINDING_STATES,X
    case 0xEFE497: cpu.execute_instruction<0x9E>(0x002C5E, 3); return true;
    // src/unknown/EF/EFE175.asm:338 STZ ENTITY_PATHFINDING_STATES,X
    // Overlapping static entry reached from 0xEFE494.
    case 0xEFE498: cpu.execute_instruction<0x5E>(0x00E62C, 3); return true;
    // src/unknown/EF/EFE175.asm:340 INC @VIRTUAL02
    case 0xEFE49A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:340 INC @VIRTUAL02
    // Overlapping static entry reached from 0xEFE498.
    case 0xEFE49B: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175.asm:342 LDA @VIRTUAL02
    case 0xEFE49C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE175.asm:343 CMP #MAX_ENTITIES
    case 0xEFE49E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/EF/EFE175.asm:343 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xEFE49E.
    case 0xEFE4A0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:344 BNE @UNKNOWN23
    case 0xEFE4A1: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/unknown/EF/EFE175.asm:345 STY @LOCAL00
    case 0xEFE4A3: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175.asm:346 LDA @LOCAL02
    case 0xEFE4A5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFE175.asm:347 STA @LOCAL01
    case 0xEFE4A7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE175.asm:348 LDY #.LOWORD(-1)
    case 0xEFE4A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:348 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE4A9.
    case 0xEFE4AB: cpu.execute_instruction<0xFF>(0x01F3A2, 4); return true;
    // src/unknown/EF/EFE175.asm:349 LDX #EVENT_SCRIPT::EVENT_499
    case 0xEFE4AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F3, 2); else cpu.execute_instruction<0xA2>(0x0001F3, 3); return true;
    // src/unknown/EF/EFE175.asm:349 LDX #EVENT_SCRIPT::EVENT_499
    // Overlapping static entry reached from 0xEFE4AC.
    case 0xEFE4AE: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175.asm:350 LDA #OVERWORLD_SPRITE::GIRL_IN_STRIPED_APRON
    case 0xEFE4AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x00008A, 3); return true;
    // src/unknown/EF/EFE175.asm:350 LDA #OVERWORLD_SPRITE::GIRL_IN_STRIPED_APRON
    // Overlapping static entry reached from 0xEFE4AE.
    case 0xEFE4B0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:350 LDA #OVERWORLD_SPRITE::GIRL_IN_STRIPED_APRON
    // Overlapping static entry reached from 0xEFE4AF.
    case 0xEFE4B1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175.asm:351 JSL CREATE_ENTITY
    case 0xEFE4B2: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/EF/EFE175.asm:352 ASL
    case 0xEFE4B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:353 TAX
    case 0xEFE4B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:354 LDA #.LOWORD(-1)
    case 0xEFE4B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175.asm:354 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE4B8.
    case 0xEFE4BA: cpu.execute_instruction<0xFF>(0x2C5E9D, 4); return true;
    // src/unknown/EF/EFE175.asm:355 STA ENTITY_PATHFINDING_STATES,X
    case 0xEFE4BB: cpu.execute_instruction<0x9D>(0x002C5E, 3); return true;
    // src/unknown/EF/EFE175.asm:356 JSL UNKNOWN_C0BD96
    case 0xEFE4BE: cpu.execute_instruction<0x22>(0xC0BD96, 4); return true;
    // src/unknown/EF/EFE175.asm:358 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xEFE4C2: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/unknown/EF/EFE175.asm:359 LDA PAD_STATE
    case 0xEFE4C6: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE175.asm:360 AND #PAD::START_BUTTON | PAD::SELECT_BUTTON
    case 0xEFE4C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x003000, 3); return true;
    // src/unknown/EF/EFE175.asm:360 AND #PAD::START_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFE4C9.
    case 0xEFE4CB: cpu.execute_instruction<0x30>(0x0000C9, 2); return true;
    // src/unknown/EF/EFE175.asm:361 CMP #PAD::START_BUTTON | PAD::SELECT_BUTTON
    case 0xEFE4CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x003000, 3); return true;
    // src/unknown/EF/EFE175.asm:361 CMP #PAD::START_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFE4CB.
    case 0xEFE4CD: cpu.execute_instruction<0x00>(0x000030, 2); return true;
    // src/unknown/EF/EFE175.asm:361 CMP #PAD::START_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFE4CC.
    case 0xEFE4CE: cpu.execute_instruction<0x30>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:362 BNE @UNKNOWN27
    case 0xEFE4CF: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/EF/EFE175.asm:362 BNE @UNKNOWN27
    // Overlapping static entry reached from 0xEFE4CE.
    case 0xEFE4D0: cpu.execute_instruction<0x13>(0x0000AD, 2); return true;
    // src/unknown/EF/EFE175.asm:363 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xEFE4D1: cpu.execute_instruction<0xAD>(0x000BBE, 3); return true;
    // src/unknown/EF/EFE175.asm:363 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    // Overlapping static entry reached from 0xEFE4D0.
    case 0xEFE4D2: cpu.execute_instruction<0xBE>(0x008D0B, 3); return true;
    // src/unknown/EF/EFE175.asm:364 STA DEBUG_START_POSITION_X
    case 0xEFE4D4: cpu.execute_instruction<0x8D>(0x00B561, 3); return true;
    // src/unknown/EF/EFE175.asm:364 STA DEBUG_START_POSITION_X
    // Overlapping static entry reached from 0xEFE4D2.
    case 0xEFE4D5: cpu.execute_instruction<0x61>(0x0000B5, 2); return true;
    // src/unknown/EF/EFE175.asm:365 LDA ENTITY_ABS_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xEFE4D7: cpu.execute_instruction<0xAD>(0x000BFA, 3); return true;
    // src/unknown/EF/EFE175.asm:366 STA DEBUG_START_POSITION_Y
    case 0xEFE4DA: cpu.execute_instruction<0x8D>(0x00B563, 3); return true;
    // src/unknown/EF/EFE175.asm:367 LDA @LOCAL07
    case 0xEFE4DD: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175.asm:368 STA DEBUG_VIEW_CHARACTER_SPRITE
    case 0xEFE4DF: cpu.execute_instruction<0x8D>(0x00B565, 3); return true;
    // src/unknown/EF/EFE175.asm:369 BRA @UNKNOWN33
    case 0xEFE4E2: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/unknown/EF/EFE175.asm:371 LDA PAD_PRESS
    case 0xEFE4E4: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175.asm:372 AND #PAD::Y_BUTTON
    case 0xEFE4E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFE175.asm:372 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFE4E7.
    case 0xEFE4E9: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:373 BEQ @UNKNOWN28
    case 0xEFE4EA: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:374 JSL DEBUG_Y_BUTTON_MENU
    case 0xEFE4EC: cpu.execute_instruction<0x22>(0xC12E63, 4); return true;
    // src/unknown/EF/EFE175.asm:376 LDA DEBUG_MODE_NUMBER
    case 0xEFE4F0: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:377 CMP #3
    case 0xEFE4F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175.asm:377 CMP #3
    // Overlapping static entry reached from 0xEFE4F3.
    case 0xEFE4F5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:378 BNE @UNKNOWN30
    case 0xEFE4F6: cpu.execute_instruction<0xD0>(0x00002C, 2); return true;
    // src/unknown/EF/EFE175.asm:379 LDA BG1_X_POS
    case 0xEFE4F8: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/EF/EFE175.asm:380 STA BG3_X_POS
    case 0xEFE4FB: cpu.execute_instruction<0x8D>(0x000039, 3); return true;
    // src/unknown/EF/EFE175.asm:381 LDA BG1_Y_POS
    case 0xEFE4FE: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/unknown/EF/EFE175.asm:382 STA BG3_Y_POS
    case 0xEFE501: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // src/unknown/EF/EFE175.asm:383 LDA PAD_PRESS
    case 0xEFE504: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175.asm:384 AND #PAD::SELECT_BUTTON
    case 0xEFE507: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/unknown/EF/EFE175.asm:384 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFE507.
    case 0xEFE509: cpu.execute_instruction<0x20>(0x0018F0, 3); return true;
    // src/unknown/EF/EFE175.asm:385 BEQ @UNKNOWN30
    case 0xEFE50A: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/EF/EFE175.asm:386 LDX VIEW_ATTRIBUTE_MODE
    case 0xEFE50C: cpu.execute_instruction<0xAE>(0x00B55F, 3); return true;
    // src/unknown/EF/EFE175.asm:387 INX
    case 0xEFE50F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:388 STX VIEW_ATTRIBUTE_MODE
    case 0xEFE510: cpu.execute_instruction<0x8E>(0x00B55F, 3); return true;
    // src/unknown/EF/EFE175.asm:389 CPX #4
    case 0xEFE513: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/EF/EFE175.asm:389 CPX #4
    // Overlapping static entry reached from 0xEFE513.
    case 0xEFE515: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:390 BNE @UNKNOWN29
    case 0xEFE516: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/EF/EFE175.asm:391 STZ VIEW_ATTRIBUTE_MODE
    case 0xEFE518: cpu.execute_instruction<0x9C>(0x00B55F, 3); return true;
    // src/unknown/EF/EFE175.asm:393 LDX GAME_STATE+game_state::leader_y_coord
    case 0xEFE51B: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/EF/EFE175.asm:394 LDA GAME_STATE+game_state::leader_x_coord
    case 0xEFE51E: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/EF/EFE175.asm:395 JSR UNKNOWN_EFE133
    case 0xEFE521: cpu.execute_instruction<0x20>(0x00E133, 3); return true;
    // src/unknown/EF/EFE175.asm:395 JSR UNKNOWN_EFE133
    // Overlapping static entry reached from 0xEFE531.
    case 0xEFE523: cpu.execute_instruction<0xE1>(0x0000AD, 2); return true;
    // src/unknown/EF/EFE175.asm:397 LDA DEBUG_MODE_NUMBER
    case 0xEFE524: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE175.asm:397 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFE523.
    case 0xEFE525: cpu.execute_instruction<0x59>(0x00C9B5, 3); return true;
    // src/unknown/EF/EFE175.asm:398 CMP #1
    case 0xEFE527: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFE175.asm:398 CMP #1
    // Overlapping static entry reached from 0xEFE525.
    case 0xEFE528: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EFE175.asm:398 CMP #1
    // Overlapping static entry reached from 0xEFE527.
    case 0xEFE529: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175.asm:399 BNE @UNKNOWN31
    case 0xEFE52A: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/EF/EFE175.asm:400 LDA PAD_PRESS
    case 0xEFE52C: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175.asm:401 AND #PAD::B_BUTTON
    case 0xEFE52F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE175.asm:401 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFE52F.
    case 0xEFE531: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175.asm:402 BEQ @UNKNOWN31
    case 0xEFE532: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:403 JSL OPEN_MENU_BUTTON
    case 0xEFE534: cpu.execute_instruction<0x22>(0xC134A7, 4); return true;
    // src/unknown/EF/EFE175.asm:405 LDA CURRENT_QUEUED_INTERACTION
    case 0xEFE538: cpu.execute_instruction<0xAD>(0x005E02, 3); return true;
    // src/unknown/EF/EFE175.asm:406 SEC
    case 0xEFE53B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFE175.asm:407 SBC NEXT_QUEUED_INTERACTION
    case 0xEFE53C: cpu.execute_instruction<0xED>(0x005E04, 3); return true;
    // src/unknown/EF/EFE175.asm:408 BEQ @UNKNOWN32
    case 0xEFE53F: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175.asm:409 JSL PROCESS_QUEUED_INTERACTIONS
    case 0xEFE541: cpu.execute_instruction<0x22>(0xC075DD, 4); return true;
    // src/unknown/EF/EFE175.asm:411 JSL UPDATE_SCREEN
    case 0xEFE545: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/unknown/EF/EFE175.asm:412 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xEFE549: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/EF/EFE175.asm:413 JSL INIT_BATTLE_OVERWORLD
    case 0xEFE54D: cpu.execute_instruction<0x22>(0xC0B731, 4); return true;
    // src/unknown/EF/EFE175.asm:413 JSL INIT_BATTLE_OVERWORLD
    // Overlapping static entry reached from 0xEFE5A0.
    case 0xEFE54F: cpu.execute_instruction<0xB7>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE175.asm:414 JMP @UNKNOWN6
    case 0xEFE551: cpu.execute_instruction<0x4C>(0x00E2DA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE175.asm:416 END_C_FUNCTION
    case 0xEFE554: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFE175.asm:416 END_C_FUNCTION
    case 0xEFE555: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE6CF.asm (unresolved).
bool execute_unresolved_ef_efe6cf_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE6CF.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFE6CF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFE6CF.asm:6 LDA DEBUG_MODE_NUMBER
    case 0xEFE6D1: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE6CF.asm:7 CMP #1
    case 0xEFE6D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFE6CF.asm:7 CMP #1
    // Overlapping static entry reached from 0xEFE6D4.
    case 0xEFE6D6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE6CF.asm:8 BNE @UNKNOWN1
    case 0xEFE6D7: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EFE6CF.asm:9 LDA #0
    case 0xEFE6D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE6CF.asm:9 LDA #0
    // Overlapping static entry reached from 0xEFE6D9.
    case 0xEFE6DB: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EFE6CF.asm:10 BRA @UNKNOWN2
    case 0xEFE6DC: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EFE6CF.asm:12 LDA #.LOWORD(-1)
    case 0xEFE6DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE6CF.asm:12 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE6DE.
    case 0xEFE6E0: cpu.execute_instruction<0xFF>(0x31C26B, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE6CF.asm:14 END_C_FUNCTION
    case 0xEFE6E1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE6E2.asm (unresolved).
bool execute_unresolved_ef_efe6e2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE6E2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFE6E2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    case 0xEFE6E4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    case 0xEFE6E5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    case 0xEFE6E6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    case 0xEFE6E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEFE6E7.
    case 0xEFE6E9: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    case 0xEFE6EA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    case 0xEFE6EB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE6E2.asm:9 STA @LOCAL00
    case 0xEFE6EC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xEFE6E9.
    case 0xEFE6ED: cpu.execute_instruction<0x0E>(0x0059AD, 3); return true;
    // src/unknown/EF/EFE6E2.asm:10 LDA DEBUG_MODE_NUMBER
    case 0xEFE6EE: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE6E2.asm:10 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFE6ED.
    case 0xEFE6F0: cpu.execute_instruction<0xB5>(0x0000C9, 2); return true;
    // src/unknown/EF/EFE6E2.asm:11 CMP #1
    case 0xEFE6F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFE6E2.asm:11 CMP #1
    // Overlapping static entry reached from 0xEFE6F0.
    case 0xEFE6F2: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EFE6E2.asm:11 CMP #1
    // Overlapping static entry reached from 0xEFE6F1.
    case 0xEFE6F3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE6E2.asm:12 BNE @UNKNOWN0
    case 0xEFE6F4: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:13 LDA @LOCAL00
    case 0xEFE6F6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:14 CMP #10
    case 0xEFE6F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EFE6E2.asm:14 CMP #10
    // Overlapping static entry reached from 0xEFE6F8.
    case 0xEFE6FA: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/EF/EFE6E2.asm:15 BLTEQ @UNKNOWN0
    case 0xEFE6FB: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/EF/EFE6E2.asm:15 BLTEQ @UNKNOWN0
    case 0xEFE6FD: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFE6E2.asm:16 LDA #10
    case 0xEFE6FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFE6E2.asm:16 LDA #10
    // Overlapping static entry reached from 0xEFE6FF.
    case 0xEFE701: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE6E2.asm:17 STA @LOCAL00
    case 0xEFE702: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:19 LDA @LOCAL00
    case 0xEFE704: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE6E2.asm:20 END_C_FUNCTION
    case 0xEFE706: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE6E2.asm:20 END_C_FUNCTION
    case 0xEFE707: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE708.asm (unresolved).
bool execute_unresolved_ef_efe708_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE708.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFE708: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE708.asm:7 END_STACK_VARS
    case 0xEFE70A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE708.asm:7 END_STACK_VARS
    case 0xEFE70B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE708.asm:7 END_STACK_VARS
    case 0xEFE70C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE708.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEFE70C.
    case 0xEFE70E: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE708.asm:7 END_STACK_VARS
    case 0xEFE70F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFE708.asm:8 LDA #0
    case 0xEFE710: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE708.asm:8 LDA #0
    // Overlapping static entry reached from 0xEFE710.
    case 0xEFE712: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE708.asm:9 STA @LOCAL00
    case 0xEFE713: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:10 LDA DEBUG_MODE_NUMBER
    case 0xEFE715: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE708.asm:11 CMP #2
    case 0xEFE718: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE708.asm:11 CMP #2
    // Overlapping static entry reached from 0xEFE718.
    case 0xEFE71A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE708.asm:12 BNE @UNKNOWN2
    case 0xEFE71B: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/unknown/EF/EFE708.asm:13 BRA @UNKNOWN1
    case 0xEFE71D: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EFE708.asm:15 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xEFE71F: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/EF/EFE708.asm:17 LDA PAD_STATE
    case 0xEFE723: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE708.asm:18 AND #PAD::B_BUTTON
    case 0xEFE726: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE708.asm:18 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFE726.
    case 0xEFE728: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE708.asm:19 BEQ @UNKNOWN0
    case 0xEFE729: cpu.execute_instruction<0xF0>(0x0000F4, 2); return true;
    // src/unknown/EF/EFE708.asm:20 STZ BATTLE_MODE
    case 0xEFE72B: cpu.execute_instruction<0x9C>(0x004DC2, 3); return true;
    // src/unknown/EF/EFE708.asm:21 LDA #.LOWORD(-1)
    case 0xEFE72E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE708.asm:21 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE72E.
    case 0xEFE730: cpu.execute_instruction<0xFF>(0x800E85, 4); return true;
    // src/unknown/EF/EFE708.asm:22 STA @LOCAL00
    case 0xEFE731: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:23 BRA @UNKNOWN3
    case 0xEFE733: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/EF/EFE708.asm:23 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xEFE730.
    case 0xEFE734: cpu.execute_instruction<0x0D>(0x0065AD, 3); return true;
    // src/unknown/EF/EFE708.asm:25 LDA PAD_STATE
    case 0xEFE735: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE708.asm:25 LDA PAD_STATE
    // Overlapping static entry reached from 0xEFE734.
    case 0xEFE737: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/EF/EFE708.asm:26 AND #PAD::Y_BUTTON
    case 0xEFE738: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFE708.asm:26 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFE738.
    case 0xEFE73A: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFE708.asm:27 BEQ @UNKNOWN3
    case 0xEFE73B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFE708.asm:28 LDA #.LOWORD(-1)
    case 0xEFE73D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE708.asm:28 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE73D.
    case 0xEFE73F: cpu.execute_instruction<0xFF>(0xA50E85, 4); return true;
    // src/unknown/EF/EFE708.asm:29 STA @LOCAL00
    case 0xEFE740: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:31 LDA @LOCAL00
    case 0xEFE742: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:31 LDA @LOCAL00
    // Overlapping static entry reached from 0xEFE73F.
    case 0xEFE743: cpu.execute_instruction<0x0E>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE708.asm:32 END_C_FUNCTION
    case 0xEFE744: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE708.asm:32 END_C_FUNCTION
    case 0xEFE745: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE759.asm (unresolved).
bool execute_unresolved_ef_efe759_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE759.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFE759: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFE759.asm:6 LDA DEBUG_MODE_NUMBER
    case 0xEFE75B: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/unknown/EF/EFE759.asm:7 CMP #2
    case 0xEFE75E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE759.asm:7 CMP #2
    // Overlapping static entry reached from 0xEFE75E.
    case 0xEFE760: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE759.asm:8 BNE @UNKNOWN0
    case 0xEFE761: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/EF/EFE759.asm:9 LDA DEBUG_ENEMIES_ENABLED_FLAG
    case 0xEFE763: cpu.execute_instruction<0xAD>(0x00B575, 3); return true;
    // src/unknown/EF/EFE759.asm:10 BEQ @UNKNOWN0
    case 0xEFE766: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFE759.asm:11 LDA #.LOWORD(-1)
    case 0xEFE768: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE759.asm:11 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFE768.
    case 0xEFE76A: cpu.execute_instruction<0xFF>(0xA90380, 4); return true;
    // src/unknown/EF/EFE759.asm:12 BRA @UNKNOWN1
    case 0xEFE76B: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EFE759.asm:14 LDA #0
    case 0xEFE76D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE759.asm:14 LDA #0
    // Overlapping static entry reached from 0xEFE76A.
    case 0xEFE76E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFE759.asm:14 LDA #0
    // Overlapping static entry reached from 0xEFE76D.
    case 0xEFE76F: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE759.asm:16 END_C_FUNCTION
    case 0xEFE770: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE771.asm (unresolved).
bool execute_unresolved_ef_efe771_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE771.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFE771: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE771.asm:7 END_STACK_VARS
    case 0xEFE773: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE771.asm:7 END_STACK_VARS
    case 0xEFE774: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE771.asm:7 END_STACK_VARS
    case 0xEFE775: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE771.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEFE775.
    case 0xEFE777: cpu.execute_instruction<0xFF>(0x91225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE771.asm:7 END_STACK_VARS
    case 0xEFE778: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFE771.asm:8 JSL TEST_SRAM_SIZE
    case 0xEFE779: cpu.execute_instruction<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE771.asm:8 JSL TEST_SRAM_SIZE
    // Overlapping static entry reached from 0xEFE777.
    case 0xEFE77B: cpu.execute_instruction<0x83>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE771.asm:9 CMP #0
    case 0xEFE77D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE771.asm:9 CMP #0
    // Overlapping static entry reached from 0xEFE77D.
    case 0xEFE77F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFE771.asm:10 BEQL @INSUFFICIENT_SRAM
    case 0xEFE780: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFE771.asm:10 BEQL @INSUFFICIENT_SRAM
    case 0xEFE782: cpu.execute_instruction<0x4C>(0x00E871, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:11 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFE785: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:11 LOADPTR UNKNOWN_316000, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE785.
    case 0xEFE787: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:11 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFE788: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:11 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFE78A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:11 LOADPTR UNKNOWN_316000, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE78A.
    case 0xEFE78C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE771.asm:11 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFE78D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:12 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFE78F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:12 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xEFE78F.
    case 0xEFE791: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:12 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFE792: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:12 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFE794: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:12 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xEFE794.
    case 0xEFE796: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE771.asm:12 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFE797: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE799: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE79B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE79D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE79F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:14 LDA #.LOWORD(GAME_STATE)
    case 0xEFE7A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x0097F5, 3); return true;
    // src/unknown/EF/EFE771.asm:14 LDA #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xEFE7A1.
    case 0xEFE7A3: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:15 STORE_INT1632 @VIRTUAL06
    case 0xEFE7A4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:15 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xEFE7A3.
    case 0xEFE7A5: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:15 STORE_INT1632 @VIRTUAL06
    case 0xEFE7A6: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:15 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xEFE7A5.
    case 0xEFE7A7: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFE771.asm:16 CLC
    case 0xEFE7A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE771.asm:17 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE7A9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE771.asm:17 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE7AB: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:17 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE7AD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE771.asm:17 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE7AF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE771.asm:17 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE7B1: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:17 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE7B3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE7B5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE7B7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE7B9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE7BB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:19 LDA #.SIZEOF(game_state)
    case 0xEFE7BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x0001D9, 3); return true;
    // src/unknown/EF/EFE771.asm:19 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEFE7BD.
    case 0xEFE7BF: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:20 JSL MEMCPY24
    case 0xEFE7C0: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/EF/EFE771.asm:20 JSL MEMCPY24
    // Overlapping static entry reached from 0xEFE7BF.
    case 0xEFE7C1: cpu.execute_instruction<0xED>(0x00C08E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFE7C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x0061D9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE7C4.
    case 0xEFE7C6: cpu.execute_instruction<0x61>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFE7C7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE7C6.
    case 0xEFE7C8: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFE7C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE7C8.
    case 0xEFE7CA: cpu.execute_instruction<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE7C9.
    case 0xEFE7CB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFE7CC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE7CE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE7D0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE7D2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE7D4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:23 LDA #.LOWORD(PARTY_CHARACTERS)
    case 0xEFE7D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0099CE, 3); return true;
    // src/unknown/EF/EFE771.asm:23 LDA #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xEFE7D6.
    case 0xEFE7D8: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xEFE7D9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xEFE7DB: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:25 CLC
    case 0xEFE7DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE771.asm:26 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE7DE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE771.asm:26 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE7E0: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:26 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE7E2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE771.asm:26 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE7E4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE771.asm:26 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE7E6: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:26 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE7E8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE7EA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE7EC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE7EE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE7F0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:28 LDA #.SIZEOF(char_struct) * (TOTAL_PARTY_COUNT)
    case 0xEFE7F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x00023A, 3); return true;
    // src/unknown/EF/EFE771.asm:28 LDA #.SIZEOF(char_struct) * (TOTAL_PARTY_COUNT)
    // Overlapping static entry reached from 0xEFE7F2.
    case 0xEFE7F4: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:29 JSL MEMCPY24
    case 0xEFE7F5: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFE7F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x006413, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE7F9.
    case 0xEFE7FB: cpu.execute_instruction<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFE7FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE7FB.
    case 0xEFE7FD: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFE7FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE7FD.
    case 0xEFE7FF: cpu.execute_instruction<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE7FE.
    case 0xEFE800: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFE801: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE803: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE805: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE807: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE809: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:32 LDA #.LOWORD(EVENT_FLAGS)
    case 0xEFE80B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x009C08, 3); return true;
    // src/unknown/EF/EFE771.asm:32 LDA #.LOWORD(EVENT_FLAGS)
    // Overlapping static entry reached from 0xEFE80B.
    case 0xEFE80D: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xEFE80E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xEFE810: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:34 CLC
    case 0xEFE812: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE771.asm:35 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE813: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE771.asm:35 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE815: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:35 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE817: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE771.asm:35 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE819: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE771.asm:35 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE81B: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:35 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE81D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE81F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE821: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE823: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE825: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:37 LDA #.SIZEOF(save_block::event_flags)
    case 0xEFE827: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/EF/EFE771.asm:37 LDA #.SIZEOF(save_block::event_flags)
    // Overlapping static entry reached from 0xEFE827.
    case 0xEFE829: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:38 JSL MEMCPY24
    case 0xEFE82A: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFE82E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000093, 2); else cpu.execute_instruction<0xA9>(0x006493, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE82E.
    case 0xEFE830: cpu.execute_instruction<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFE831: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE830.
    case 0xEFE832: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFE833: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE832.
    case 0xEFE834: cpu.execute_instruction<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE833.
    case 0xEFE835: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFE836: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE838: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE83A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE83C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE83E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:41 LDA #.LOWORD(TIMER)
    case 0xEFE840: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A7, 2); else cpu.execute_instruction<0xA9>(0x0000A7, 3); return true;
    // src/unknown/EF/EFE771.asm:41 LDA #.LOWORD(TIMER)
    // Overlapping static entry reached from 0xEFE840.
    case 0xEFE842: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xEFE843: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xEFE845: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:43 CLC
    case 0xEFE847: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE771.asm:44 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE848: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE771.asm:44 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE84A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:44 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE84C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE771.asm:44 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE84E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE771.asm:44 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE850: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:44 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE852: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE854: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE856: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE858: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE85A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:46 LDA #4
    case 0xEFE85C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFE771.asm:46 LDA #4
    // Overlapping static entry reached from 0xEFE85C.
    case 0xEFE85E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:47 JSL MEMCPY24
    case 0xEFE85F: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:48 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFE863: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:48 LOADPTR UNKNOWN_326000, @LOCAL00
    // Overlapping static entry reached from 0xEFE863.
    case 0xEFE865: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:48 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFE866: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:48 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFE868: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:48 LOADPTR UNKNOWN_326000, @LOCAL00
    // Overlapping static entry reached from 0xEFE868.
    case 0xEFE86A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE771.asm:48 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFE86B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:49 JSL UNKNOWN_C083C1
    case 0xEFE86D: cpu.execute_instruction<0x22>(0xC083C1, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE771.asm:51 END_C_FUNCTION
    case 0xEFE871: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE771.asm:51 END_C_FUNCTION
    case 0xEFE872: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE873.asm (unresolved).
bool execute_unresolved_ef_efe873_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE873.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFE873: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFE873.asm:6 JSL TEST_SRAM_SIZE
    case 0xEFE875: cpu.execute_instruction<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE873.asm:7 CMP #0
    case 0xEFE879: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE873.asm:7 CMP #0
    // Overlapping static entry reached from 0xEFE879.
    case 0xEFE87B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE873.asm:8 BEQ @GOOD_SRAM_SIZE
    case 0xEFE87C: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE873.asm:9 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFE87E: cpu.execute_instruction<0xAD>(0x00B56D, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE873.asm:9 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFE881: cpu.execute_instruction<0x8D>(0x000024, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE873.asm:9 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFE884: cpu.execute_instruction<0xAD>(0x00B56F, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE873.asm:9 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFE887: cpu.execute_instruction<0x8D>(0x000026, 3); return true;
    // src/unknown/EF/EFE873.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xEFE88A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE873.asm:11 LDA FRAME_COUNTER_BACKUP
    case 0xEFE88C: cpu.execute_instruction<0xAD>(0x00B571, 3); return true;
    // src/unknown/EF/EFE873.asm:12 STA FRAME_COUNTER
    case 0xEFE88F: cpu.execute_instruction<0x8D>(0x000002, 3); return true;
    // src/unknown/EF/EFE873.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xEFE892: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE873.asm:15 END_C_FUNCTION
    case 0xEFE894: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE895.asm (unresolved).
bool execute_unresolved_ef_efe895_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE895.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFE895: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    case 0xEFE897: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    case 0xEFE898: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    case 0xEFE899: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    case 0xEFE89A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEFE89A.
    case 0xEFE89C: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    case 0xEFE89D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    case 0xEFE89E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE895.asm:8 TAX
    case 0xEFE89F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE895.asm:9 STX @LOCAL00
    case 0xEFE8A0: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EFE895.asm:10 JSL TEST_SRAM_SIZE
    case 0xEFE8A2: cpu.execute_instruction<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE895.asm:11 CMP #0
    case 0xEFE8A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE895.asm:11 CMP #0
    // Overlapping static entry reached from 0xEFE8A6.
    case 0xEFE8A8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE895.asm:12 BEQ @GOOD_SRAM_SIZE
    case 0xEFE8A9: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE895.asm:13 MOVE_INT RAND_A, RAND_A_BACKUP
    case 0xEFE8AB: cpu.execute_instruction<0xAD>(0x000024, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE895.asm:13 MOVE_INT RAND_A, RAND_A_BACKUP
    case 0xEFE8AE: cpu.execute_instruction<0x8D>(0x00B56D, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE895.asm:13 MOVE_INT RAND_A, RAND_A_BACKUP
    case 0xEFE8B1: cpu.execute_instruction<0xAD>(0x000026, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE895.asm:13 MOVE_INT RAND_A, RAND_A_BACKUP
    case 0xEFE8B4: cpu.execute_instruction<0x8D>(0x00B56F, 3); return true;
    // src/unknown/EF/EFE895.asm:14 LDA FRAME_COUNTER
    case 0xEFE8B7: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/unknown/EF/EFE895.asm:15 AND #$00FF
    case 0xEFE8BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFE895.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xEFE8BA.
    case 0xEFE8BC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE895.asm:16 STA FRAME_COUNTER_BACKUP
    case 0xEFE8BD: cpu.execute_instruction<0x8D>(0x00B571, 3); return true;
    // src/unknown/EF/EFE895.asm:17 LDX @LOCAL00
    case 0xEFE8C0: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/EF/EFE895.asm:18 STX REPLAY_TRANSITION_STYLE
    case 0xEFE8C2: cpu.execute_instruction<0x8E>(0x00B573, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE895.asm:20 END_C_FUNCTION
    case 0xEFE8C5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE895.asm:20 END_C_FUNCTION
    case 0xEFE8C6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE8C7.asm (unresolved).
bool execute_unresolved_ef_efe8c7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE8C7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFE8C7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE8C7.asm:8 END_STACK_VARS
    case 0xEFE8C9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE8C7.asm:8 END_STACK_VARS
    case 0xEFE8CA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE8C7.asm:8 END_STACK_VARS
    case 0xEFE8CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE8C7.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEFE8CB.
    case 0xEFE8CD: cpu.execute_instruction<0xFF>(0x91225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE8C7.asm:8 END_STACK_VARS
    case 0xEFE8CE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFE8C7.asm:9 JSL TEST_SRAM_SIZE
    case 0xEFE8CF: cpu.execute_instruction<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE8C7.asm:9 JSL TEST_SRAM_SIZE
    // Overlapping static entry reached from 0xEFE8CD.
    case 0xEFE8D1: cpu.execute_instruction<0x83>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE8C7.asm:10 CMP #0
    case 0xEFE8D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE8C7.asm:10 CMP #0
    // Overlapping static entry reached from 0xEFE8D3.
    case 0xEFE8D5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFE8C7.asm:11 BEQL @INSUFFICIENT_SRAM
    case 0xEFE8D6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:11 BEQL @INSUFFICIENT_SRAM
    case 0xEFE8D8: cpu.execute_instruction<0x4C>(0x00EA21, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:12 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFE8DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:12 LOADPTR UNKNOWN_316000, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE8DB.
    case 0xEFE8DD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7.asm:12 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFE8DE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:12 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFE8E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:12 LOADPTR UNKNOWN_316000, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE8E0.
    case 0xEFE8E2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:12 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFE8E3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:13 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE8E5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:13 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE8E7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:13 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE8E9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:13 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE8EB: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:14 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFE8ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:14 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xEFE8ED.
    case 0xEFE8EF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7.asm:14 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFE8F0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:14 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFE8F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:14 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xEFE8F2.
    case 0xEFE8F4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:14 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFE8F5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/EF/EFE8C7.asm:15 LDA #.LOWORD(GAME_STATE)
    case 0xEFE8F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x0097F5, 3); return true;
    // src/unknown/EF/EFE8C7.asm:15 LDA #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xEFE8F7.
    case 0xEFE8F9: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:16 STORE_INT1632 @VIRTUAL06
    case 0xEFE8FA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:16 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xEFE8F9.
    case 0xEFE8FB: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:16 STORE_INT1632 @VIRTUAL06
    case 0xEFE8FC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:16 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xEFE8FB.
    case 0xEFE8FD: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFE8C7.asm:17 CLC
    case 0xEFE8FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE8C7.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE8FF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE8C7.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE901: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE903: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE905: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE907: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE909: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE90B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE90D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE90F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE911: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE913: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE915: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE917: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE919: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE91B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE91D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE91F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE921: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7.asm:22 LDA #.SIZEOF(game_state)
    case 0xEFE923: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x0001D9, 3); return true;
    // src/unknown/EF/EFE8C7.asm:22 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEFE923.
    case 0xEFE925: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7.asm:23 JSL MEMCPY24
    case 0xEFE926: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/EF/EFE8C7.asm:23 JSL MEMCPY24
    // Overlapping static entry reached from 0xEFE925.
    case 0xEFE927: cpu.execute_instruction<0xED>(0x00C08E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFE92A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x0061D9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE92A.
    case 0xEFE92C: cpu.execute_instruction<0x61>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFE92D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE92C.
    case 0xEFE92E: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFE92F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE92E.
    case 0xEFE930: cpu.execute_instruction<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE92F.
    case 0xEFE931: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFE932: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE934: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE936: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE938: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE93A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE8C7.asm:26 LDA #.LOWORD(PARTY_CHARACTERS)
    case 0xEFE93C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0099CE, 3); return true;
    // src/unknown/EF/EFE8C7.asm:26 LDA #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xEFE93C.
    case 0xEFE93E: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:27 STORE_INT1632 @VIRTUAL06
    case 0xEFE93F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:27 STORE_INT1632 @VIRTUAL06
    case 0xEFE941: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7.asm:28 CLC
    case 0xEFE943: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE8C7.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE944: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE8C7.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE946: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE948: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE94A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE94C: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE94E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE950: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE952: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE954: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE956: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:31 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE958: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:31 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE95A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:31 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE95C: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:31 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE95E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE960: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE962: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE964: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE966: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7.asm:33 LDA #.SIZEOF(char_struct)*6
    case 0xEFE968: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x00023A, 3); return true;
    // src/unknown/EF/EFE8C7.asm:33 LDA #.SIZEOF(char_struct)*6
    // Overlapping static entry reached from 0xEFE968.
    case 0xEFE96A: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7.asm:34 JSL MEMCPY24
    case 0xEFE96B: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFE96F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x006413, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE96F.
    case 0xEFE971: cpu.execute_instruction<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFE972: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE971.
    case 0xEFE973: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFE974: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE973.
    case 0xEFE975: cpu.execute_instruction<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE974.
    case 0xEFE976: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFE977: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:36 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE979: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:36 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE97B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:36 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE97D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:36 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE97F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE8C7.asm:37 LDA #.LOWORD(EVENT_FLAGS)
    case 0xEFE981: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x009C08, 3); return true;
    // src/unknown/EF/EFE8C7.asm:37 LDA #.LOWORD(EVENT_FLAGS)
    // Overlapping static entry reached from 0xEFE981.
    case 0xEFE983: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xEFE984: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xEFE986: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7.asm:39 CLC
    case 0xEFE988: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE8C7.asm:40 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE989: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE8C7.asm:40 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE98B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:40 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE98D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:40 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE98F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:40 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE991: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:40 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE993: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE995: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE997: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE999: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE99B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:42 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE99D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:42 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE99F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:42 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE9A1: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:42 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE9A3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE9A5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE9A7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE9A9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE9AB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7.asm:44 LDA #.SIZEOF(save_block::event_flags)
    case 0xEFE9AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/EF/EFE8C7.asm:44 LDA #.SIZEOF(save_block::event_flags)
    // Overlapping static entry reached from 0xEFE9AD.
    case 0xEFE9AF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7.asm:45 JSL MEMCPY24
    case 0xEFE9B0: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFE9B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000093, 2); else cpu.execute_instruction<0xA9>(0x006493, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE9B4.
    case 0xEFE9B6: cpu.execute_instruction<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFE9B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE9B6.
    case 0xEFE9B8: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFE9B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE9B8.
    case 0xEFE9BA: cpu.execute_instruction<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFE9B9.
    case 0xEFE9BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFE9BC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:47 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE9BE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:47 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE9C0: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:47 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE9C2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:47 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFE9C4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE8C7.asm:48 LDA #167
    case 0xEFE9C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A7, 2); else cpu.execute_instruction<0xA9>(0x0000A7, 3); return true;
    // src/unknown/EF/EFE8C7.asm:48 LDA #167
    // Overlapping static entry reached from 0xEFE9C6.
    case 0xEFE9C8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xEFE9C9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xEFE9CB: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7.asm:50 CLC
    case 0xEFE9CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE8C7.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE9CE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE8C7.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE9D0: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE9D2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE9D4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE9D6: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:51 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFE9D8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE9DA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE9DC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE9DE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFE9E0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:53 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE9E2: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:53 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE9E4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:53 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE9E6: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:53 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFE9E8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:54 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE9EA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:54 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE9EC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:54 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE9EE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:54 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFE9F0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7.asm:55 LDA #4
    case 0xEFE9F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFE8C7.asm:55 LDA #4
    // Overlapping static entry reached from 0xEFE9F2.
    case 0xEFE9F4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7.asm:56 JSL MEMCPY24
    case 0xEFE9F5: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/EF/EFE8C7.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xEFE9F9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE8C7.asm:58 LDA FRAME_COUNTER_BACKUP
    case 0xEFE9FB: cpu.execute_instruction<0xAD>(0x00B571, 3); return true;
    // src/unknown/EF/EFE8C7.asm:59 STA FRAME_COUNTER
    case 0xEFE9FE: cpu.execute_instruction<0x8D>(0x000002, 3); return true;
    // src/unknown/EF/EFE8C7.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xEFEA01: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7.asm:61 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFEA03: cpu.execute_instruction<0xAD>(0x00B56D, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7.asm:61 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFEA06: cpu.execute_instruction<0x8D>(0x000024, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:61 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFEA09: cpu.execute_instruction<0xAD>(0x00B56F, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:61 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFEA0C: cpu.execute_instruction<0x8D>(0x000026, 3); return true;
    // src/unknown/EF/EFE8C7.asm:62 JSL UNKNOWN_C083B8
    case 0xEFEA0F: cpu.execute_instruction<0x22>(0xC083B8, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:63 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFEA13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:63 LOADPTR UNKNOWN_326000, @LOCAL00
    // Overlapping static entry reached from 0xEFEA13.
    case 0xEFEA15: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7.asm:63 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFEA16: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:63 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFEA18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7.asm:63 LOADPTR UNKNOWN_326000, @LOCAL00
    // Overlapping static entry reached from 0xEFEA18.
    case 0xEFEA1A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE8C7.asm:63 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFEA1B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE8C7.asm:64 JSL UNKNOWN_C083E3
    case 0xEFEA1D: cpu.execute_instruction<0x22>(0xC083E3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE8C7.asm:66 END_C_FUNCTION
    case 0xEFEA21: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE8C7.asm:66 END_C_FUNCTION
    case 0xEFEA22: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFEA23.asm (unresolved).
bool execute_unresolved_ef_efea23_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFEA23.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFEA23: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFEA23.asm:5 JSL TEST_SRAM_SIZE
    case 0xEFEA25: cpu.execute_instruction<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFEA23.asm:6 CMP #0
    case 0xEFEA29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFEA23.asm:6 CMP #0
    // Overlapping static entry reached from 0xEFEA29.
    case 0xEFEA2B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFEA23.asm:7 BEQ @RETURN ;insufficient SRAM
    case 0xEFEA2C: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/EF/EFEA23.asm:8 LDA REPLAY_MODE_ACTIVE
    case 0xEFEA2E: cpu.execute_instruction<0xAD>(0x00B567, 3); return true;
    // src/unknown/EF/EFEA23.asm:9 BEQ @UNKNOWN0
    case 0xEFEA31: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/EF/EFEA23.asm:10 JSL LOAD_REPLAY_SAVE_SLOT
    case 0xEFEA33: cpu.execute_instruction<0x22>(0xEFE8C7, 4); return true;
    // src/unknown/EF/EFEA23.asm:11 LDA GAME_STATE+game_state::leader_x_coord
    case 0xEFEA37: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/EF/EFEA23.asm:12 STA UNUSED_7EB569
    case 0xEFEA3A: cpu.execute_instruction<0x8D>(0x00B569, 3); return true;
    // src/unknown/EF/EFEA23.asm:13 LDA GAME_STATE+game_state::leader_y_coord
    case 0xEFEA3D: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/EF/EFEA23.asm:14 STA UNUSED_7EB56B
    case 0xEFEA40: cpu.execute_instruction<0x8D>(0x00B56B, 3); return true;
    // src/unknown/EF/EFEA23.asm:15 BRA @RETURN
    case 0xEFEA43: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EFEA23.asm:17 JSL SAVE_REPLAY_SAVE_SLOT
    case 0xEFEA45: cpu.execute_instruction<0x22>(0xEFE771, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFEA23.asm:19 END_C_FUNCTION
    case 0xEFEA49: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFEA4A.asm (unresolved).
bool execute_unresolved_ef_efea4a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFEA4A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFEA4A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFEA4A.asm:5 END_STACK_VARS
    case 0xEFEA4C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFEA4A.asm:5 END_STACK_VARS
    case 0xEFEA4D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFEA4A.asm:5 END_STACK_VARS
    case 0xEFEA4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFEA4A.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xEFEA4E.
    case 0xEFEA50: cpu.execute_instruction<0xFF>(0x91225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFEA4A.asm:5 END_STACK_VARS
    case 0xEFEA51: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFEA4A.asm:6 JSL TEST_SRAM_SIZE
    case 0xEFEA52: cpu.execute_instruction<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFEA4A.asm:6 JSL TEST_SRAM_SIZE
    // Overlapping static entry reached from 0xEFEA50.
    case 0xEFEA54: cpu.execute_instruction<0x83>(0x0000C0, 2); return true;
    // src/unknown/EF/EFEA4A.asm:7 CMP #0
    case 0xEFEA56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFEA4A.asm:7 CMP #0
    // Overlapping static entry reached from 0xEFEA56.
    case 0xEFEA58: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFEA4A.asm:8 BEQ @INSUFFICIENT_SRAM
    case 0xEFEA59: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/unknown/EF/EFEA4A.asm:9 LDA #1
    case 0xEFEA5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFEA4A.asm:9 LDA #1
    // Overlapping static entry reached from 0xEFEA5B.
    case 0xEFEA5D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFEA4A.asm:10 STA REPLAY_MODE_ACTIVE
    case 0xEFEA5E: cpu.execute_instruction<0x8D>(0x00B567, 3); return true;
    // src/unknown/EF/EFEA4A.asm:11 JSL LOAD_REPLAY_SAVE_SLOT
    case 0xEFEA61: cpu.execute_instruction<0x22>(0xEFE8C7, 4); return true;
    // src/unknown/EF/EFEA4A.asm:12 LDA GAME_STATE + game_state::leader_x_coord
    case 0xEFEA65: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/EF/EFEA4A.asm:13 STA @VIRTUAL04
    case 0xEFEA68: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFEA4A.asm:14 LDA GAME_STATE + game_state::leader_y_coord
    case 0xEFEA6A: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/EF/EFEA4A.asm:15 STA @VIRTUAL02
    case 0xEFEA6D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFEA4A.asm:16 LDX #1
    case 0xEFEA6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFEA4A.asm:16 LDX #1
    // Overlapping static entry reached from 0xEFEA6F.
    case 0xEFEA71: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EFEA4A.asm:17 TXA
    case 0xEFEA72: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFEA4A.asm:18 JSL FADE_OUT
    case 0xEFEA73: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/unknown/EF/EFEA4A.asm:19 LDX @VIRTUAL02
    case 0xEFEA77: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFEA4A.asm:20 LDA @VIRTUAL04
    case 0xEFEA79: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFEA4A.asm:21 JSL LOAD_MAP_AT_POSITION
    case 0xEFEA7B: cpu.execute_instruction<0x22>(0xC013F6, 4); return true;
    // src/unknown/EF/EFEA4A.asm:22 LDY #0
    case 0xEFEA7F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFEA4A.asm:22 LDY #0
    // Overlapping static entry reached from 0xEFEA7F.
    case 0xEFEA81: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/EF/EFEA4A.asm:23 LDX @VIRTUAL02
    case 0xEFEA82: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFEA4A.asm:24 LDA @VIRTUAL04
    case 0xEFEA84: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFEA4A.asm:25 JSL UNKNOWN_C03FA9
    case 0xEFEA86: cpu.execute_instruction<0x22>(0xC03FA9, 4); return true;
    // src/unknown/EF/EFEA4A.asm:26 JSL UNKNOWN_C09451
    case 0xEFEA8A: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/unknown/EF/EFEA4A.asm:27 LDX #0
    case 0xEFEA8E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFEA4A.asm:27 LDX #0
    // Overlapping static entry reached from 0xEFEA8E.
    case 0xEFEA90: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/EF/EFEA4A.asm:28 LDA REPLAY_TRANSITION_STYLE
    case 0xEFEA91: cpu.execute_instruction<0xAD>(0x00B573, 3); return true;
    // src/unknown/EF/EFEA4A.asm:29 JSL SCREEN_TRANSITION
    case 0xEFEA94: cpu.execute_instruction<0x22>(0xC06662, 4); return true;
    // src/unknown/EF/EFEA4A.asm:30 JSL UNKNOWN_C0943C
    case 0xEFEA98: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFEA4A.asm:32 END_C_FUNCTION
    case 0xEFEA9C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFEA4A.asm:32 END_C_FUNCTION
    case 0xEFEA9D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFEA9E.asm (unresolved).
bool execute_unresolved_ef_efea9e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFEA9E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFEA9E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFEA9E.asm:5 STZ REPLAY_MODE_ACTIVE
    case 0xEFEAA0: cpu.execute_instruction<0x9C>(0x00B567, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFEA9E.asm:6 END_C_FUNCTION
    case 0xEFEAA3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFEAA4.asm (unresolved).
bool execute_unresolved_ef_efeaa4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/EF/EFEAA4.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xEFEAA4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAA4.asm:4 LDA INIDISP_MIRROR
    case 0xEFEAA6: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/unknown/EF/EFEAA4.asm:5 PHA
    case 0xEFEAA9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:6 LDA #$0080
    case 0xEFEAAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/unknown/EF/EFEAA4.asm:7 STA INIDISP_MIRROR
    case 0xEFEAAC: cpu.execute_instruction<0x8D>(0x00000D, 3); return true;
    // src/unknown/EF/EFEAA4.asm:7 STA INIDISP_MIRROR
    // Overlapping static entry reached from 0xEFEAAA.
    case 0xEFEAAD: cpu.execute_instruction<0x0D>(0x008F00, 3); return true;
    // src/unknown/EF/EFEAA4.asm:8 STA f:INIDISP
    case 0xEFEAAF: cpu.execute_instruction<0x8F>(0x002100, 4); return true;
    // src/unknown/EF/EFEAA4.asm:8 STA f:INIDISP
    // Overlapping static entry reached from 0xEFEAAD.
    case 0xEFEAB0: cpu.execute_instruction<0x00>(0x000021, 2); return true;
    // src/unknown/EF/EFEAA4.asm:9 LDX #$0000
    case 0xEFEAB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFEAA4.asm:9 LDX #$0000
    // Overlapping static entry reached from 0xEFEAB3.
    case 0xEFEAB5: cpu.execute_instruction<0x00>(0x0000BF, 2); return true;
    // src/unknown/EF/EFEAA4.asm:11 LDA BUFFER,X
    case 0xEFEAB6: cpu.execute_instruction<0xBF>(0x7F0000, 4); return true;
    // src/unknown/EF/EFEAA4.asm:12 INX
    case 0xEFEABA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:13 BNE @UNKNOWN0
    case 0xEFEABB: cpu.execute_instruction<0xD0>(0x0000F9, 2); return true;
    // src/unknown/EF/EFEAA4.asm:14 PLA
    case 0xEFEABD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:15 STA INIDISP_MIRROR
    case 0xEFEABE: cpu.execute_instruction<0x8D>(0x00000D, 3); return true;
    // src/unknown/EF/EFEAA4.asm:16 STA f:INIDISP
    case 0xEFEAC1: cpu.execute_instruction<0x8F>(0x002100, 4); return true;
    // src/unknown/EF/EFEAA4.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xEFEAC5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAA4.asm:18 RTL
    case 0xEFEAC7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFEAC8.asm (unresolved).
bool execute_unresolved_ef_efeac8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/EF/EFEAC8.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xEFEAC8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8.asm:4 LDA #$0020
    case 0xEFEACA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/EF/EFEAC8.asm:5 STA f:WOBJSEL
    case 0xEFEACC: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/EF/EFEAC8.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xEFEACA.
    case 0xEFEACD: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xEFEACD.
    case 0xEFEACF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8.asm:6 LDA #$0018
    case 0xEFEAD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008F18, 3); return true;
    // src/unknown/EF/EFEAC8.asm:7 STA f:WH0
    case 0xEFEAD2: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/EF/EFEAC8.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xEFEAD0.
    case 0xEFEAD3: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xEFEAD3.
    case 0xEFEAD5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8.asm:8 LDA #$0078
    case 0xEFEAD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x008F78, 3); return true;
    // src/unknown/EF/EFEAC8.asm:9 STA f:WH1
    case 0xEFEAD8: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/EF/EFEAC8.asm:9 STA f:WH1
    // Overlapping static entry reached from 0xEFEAD6.
    case 0xEFEAD9: cpu.execute_instruction<0x27>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8.asm:9 STA f:WH1
    // Overlapping static entry reached from 0xEFEAD9.
    case 0xEFEADB: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8.asm:10 LDA #$0013
    case 0xEFEADC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008F13, 3); return true;
    // src/unknown/EF/EFEAC8.asm:11 STA f:TMW
    case 0xEFEADE: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/unknown/EF/EFEAC8.asm:11 STA f:TMW
    // Overlapping static entry reached from 0xEFEADC.
    case 0xEFEADF: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/unknown/EF/EFEAC8.asm:12 LDA #$0010
    case 0xEFEAE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x008F10, 3); return true;
    // src/unknown/EF/EFEAC8.asm:13 STA f:CGWSEL
    case 0xEFEAE4: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/EF/EFEAC8.asm:13 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFEAE2.
    case 0xEFEAE5: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8.asm:13 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFEAE5.
    case 0xEFEAE7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8.asm:14 LDA #$0093
    case 0xEFEAE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000093, 2); else cpu.execute_instruction<0xA9>(0x008F93, 3); return true;
    // src/unknown/EF/EFEAC8.asm:15 STA f:CGADSUB
    case 0xEFEAEA: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/EF/EFEAC8.asm:15 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFEAE8.
    case 0xEFEAEB: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8.asm:15 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFEAEB.
    case 0xEFEAED: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8.asm:16 LDA #$00EF
    case 0xEFEAEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x008FEF, 3); return true;
    // src/unknown/EF/EFEAC8.asm:17 STA f:$2132
    case 0xEFEAF0: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/EF/EFEAC8.asm:17 STA f:$2132
    // Overlapping static entry reached from 0xEFEAEE.
    case 0xEFEAF1: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8.asm:17 STA f:$2132
    // Overlapping static entry reached from 0xEFEAF1.
    case 0xEFEAF3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8.asm:18 LDA #$0001
    case 0xEFEAF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008F01, 3); return true;
    // src/unknown/EF/EFEAC8.asm:19 STA f:DMAP4
    case 0xEFEAF6: cpu.execute_instruction<0x8F>(0x004340, 4); return true;
    // src/unknown/EF/EFEAC8.asm:19 STA f:DMAP4
    // Overlapping static entry reached from 0xEFEAF4.
    case 0xEFEAF7: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFEAC8.asm:20 LDA #$0026
    case 0xEFEAFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x008F26, 3); return true;
    // src/unknown/EF/EFEAC8.asm:21 STA f:BBAD4
    case 0xEFEAFC: cpu.execute_instruction<0x8F>(0x004341, 4); return true;
    // src/unknown/EF/EFEAC8.asm:21 STA f:BBAD4
    // Overlapping static entry reached from 0xEFEAFA.
    case 0xEFEAFD: cpu.execute_instruction<0x41>(0x000043, 2); return true;
    // src/unknown/EF/EFEAC8.asm:21 STA f:BBAD4
    // Overlapping static entry reached from 0xEFEAFD.
    case 0xEFEAFF: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/EF/EFEAC8.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xEFEB00: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8.asm:23 LDA #$EB1D
    case 0xEFEB02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x00EB1D, 3); return true;
    // src/unknown/EF/EFEAC8.asm:23 LDA #$EB1D
    // Overlapping static entry reached from 0xEFEB02.
    case 0xEFEB04: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/EF/EFEAC8.asm:24 STA f:A1T4L
    case 0xEFEB05: cpu.execute_instruction<0x8F>(0x004342, 4); return true;
    // src/unknown/EF/EFEAC8.asm:24 STA f:A1T4L
    // Overlapping static entry reached from 0xEFEAE5.
    case 0xEFEB08: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFEAC8.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xEFEB09: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8.asm:26 LDA #$00EF
    case 0xEFEB0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x008FEF, 3); return true;
    // src/unknown/EF/EFEAC8.asm:27 STA f:A1B4
    case 0xEFEB0D: cpu.execute_instruction<0x8F>(0x004344, 4); return true;
    // src/unknown/EF/EFEAC8.asm:27 STA f:A1B4
    // Overlapping static entry reached from 0xEFEB0B.
    case 0xEFEB0E: cpu.execute_instruction<0x44>(0x000043, 3); return true;
    // src/unknown/EF/EFEAC8.asm:28 STA f:$4347
    case 0xEFEB11: cpu.execute_instruction<0x8F>(0x004347, 4); return true;
    // src/unknown/EF/EFEAC8.asm:29 LDA #$0010
    case 0xEFEB15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000C10, 3); return true;
    // src/unknown/EF/EFEAC8.asm:30 TSB HDMAEN_MIRROR
    case 0xEFEB17: cpu.execute_instruction<0x0C>(0x00001F, 3); return true;
    // src/unknown/EF/EFEAC8.asm:30 TSB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xEFEB15.
    case 0xEFEB18: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/EF/EFEAC8.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xEFEB1A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8.asm:32 RTL
    case 0xEFEB1C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFEB2A.asm (unresolved).
bool execute_unresolved_ef_efeb2a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/EF/EFEB2A.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xEFEB2A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEB2A.asm:4 STZ HDMAEN_MIRROR
    case 0xEFEB2C: cpu.execute_instruction<0x9C>(0x00001F, 3); return true;
    // src/unknown/EF/EFEB2A.asm:5 LDA #$0080
    case 0xEFEB2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008F80, 3); return true;
    // src/unknown/EF/EFEB2A.asm:6 STA f:WH0
    case 0xEFEB31: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/EF/EFEB2A.asm:6 STA f:WH0
    // Overlapping static entry reached from 0xEFEB2F.
    case 0xEFEB32: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/EF/EFEB2A.asm:6 STA f:WH0
    // Overlapping static entry reached from 0xEFEB32.
    case 0xEFEB34: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/EF/EFEB2A.asm:7 DEC
    case 0xEFEB35: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EFEB2A.asm:8 STA f:WH1
    case 0xEFEB36: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/EF/EFEB2A.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xEFEB3A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEB2A.asm:10 RTL
    case 0xEFEB3C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
