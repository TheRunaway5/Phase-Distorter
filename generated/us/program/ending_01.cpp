// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/ending/change_vwf_2bpp_to_3_colour.asm (source_named).
bool execute_ending_change_vwf_2bpp_to_3_colour_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EEE1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    case 0xC4EEE3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    case 0xC4EEE4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    case 0xC4EEE5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    case 0xC4EEE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EEE6.
    case 0xC4EEE8: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    case 0xC4EEE9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    case 0xC4EEEA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:10 STA @VIRTUAL04
    case 0xC4EEEB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:10 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC4EEE8.
    case 0xC4EEEC: cpu.execute_instruction<0x04>(0x0000A2, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:11 LDX #.LOWORD(VWF_BUFFER)
    case 0xC4EEED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000092, 2); else cpu.execute_instruction<0xA2>(0x003492, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:11 LDX #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC4EEEC.
    case 0xC4EEEE: cpu.execute_instruction<0x92>(0x000034, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:11 LDX #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC4EEED.
    case 0xC4EEEF: cpu.execute_instruction<0x34>(0x0000A9, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:12 LDA #0
    case 0xC4EEF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:12 LDA #0
    // Overlapping static entry reached from 0xC4EEEF.
    case 0xC4EEF1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:12 LDA #0
    // Overlapping static entry reached from 0xC4EEF0.
    case 0xC4EEF2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:13 STA @VIRTUAL02
    case 0xC4EEF3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:14 STA @LOCAL02
    case 0xC4EEF5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:15 JMP @UNKNOWN10
    case 0xC4EEF7: cpu.execute_instruction<0x4C>(0x00EFAD, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EEFA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:18 LDA #0
    case 0xC4EEFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:19 STA @LOCAL01
    case 0xC4EEFE: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:19 STA @LOCAL01
    // Overlapping static entry reached from 0xC4EEFC.
    case 0xC4EEFF: cpu.execute_instruction<0x0F>(0xBD0085, 4); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:20 STA @VIRTUAL00
    case 0xC4EF00: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:21 LDA __BSS_START__,X
    case 0xC4EF02: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:21 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4EEFF.
    case 0xC4EF03: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:22 STA @LOCAL00
    case 0xC4EF05: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:23 LDA __BSS_START__+1,X
    case 0xC4EF07: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:24 STA @VIRTUAL01
    case 0xC4EF0A: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:25 LDY #0
    case 0xC4EF0C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:25 LDY #0
    // Overlapping static entry reached from 0xC4EF0C.
    case 0xC4EF0E: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:26 JMP @UNKNOWN8
    case 0xC4EF0F: cpu.execute_instruction<0x4C>(0x00EF8B, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:28 LDA @VIRTUAL00
    case 0xC4EF12: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:29 ASL
    case 0xC4EF14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:30 STA @VIRTUAL00
    case 0xC4EF15: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:31 LDA @LOCAL01
    case 0xC4EF17: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:32 ASL
    case 0xC4EF19: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:33 STA @LOCAL01
    case 0xC4EF1A: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC4EF1C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:35 LDA @LOCAL00
    case 0xC4EF1E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:36 AND #$00FF
    case 0xC4EF20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC4EF20.
    case 0xC4EF22: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:37 AND #$0080
    case 0xC4EF23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:37 AND #$0080
    // Overlapping static entry reached from 0xC4EF23.
    case 0xC4EF25: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:38 BEQ @UNKNOWN2
    case 0xC4EF26: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:39 LDA @VIRTUAL01
    case 0xC4EF28: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:40 AND #$00FF
    case 0xC4EF2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC4EF2A.
    case 0xC4EF2C: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:41 AND #$0080
    case 0xC4EF2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:41 AND #$0080
    // Overlapping static entry reached from 0xC4EF2D.
    case 0xC4EF2F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:42 BEQ @UNKNOWN2
    case 0xC4EF30: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EF32: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:44 LDA @VIRTUAL00
    case 0xC4EF34: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:45 AND #$00FE
    case 0xC4EF36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x0085FE, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:46 STA @VIRTUAL00
    case 0xC4EF38: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:46 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC4EF36.
    case 0xC4EF39: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:47 LDA @LOCAL01
    case 0xC4EF3A: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:48 AND #$00FE
    case 0xC4EF3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x0085FE, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:49 STA @LOCAL01
    case 0xC4EF3E: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:49 STA @LOCAL01
    // Overlapping static entry reached from 0xC4EF3C.
    case 0xC4EF3F: cpu.execute_instruction<0x0F>(0xA53E80, 4); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:50 BRA @UNKNOWN7
    case 0xC4EF40: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:53 LDA @LOCAL00
    case 0xC4EF42: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:53 LDA @LOCAL00
    // Overlapping static entry reached from 0xC4EF3F.
    case 0xC4EF43: cpu.execute_instruction<0x0E>(0x00FF29, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:54 AND #$00FF
    case 0xC4EF44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC4EF44.
    case 0xC4EF46: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:55 AND #$0080
    case 0xC4EF47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:55 AND #$0080
    // Overlapping static entry reached from 0xC4EF47.
    case 0xC4EF49: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:56 BEQ @UNKNOWN3
    case 0xC4EF4A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:57 LDA #1
    case 0xC4EF4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:57 LDA #1
    // Overlapping static entry reached from 0xC4EF4C.
    case 0xC4EF4E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:58 BRA @UNKNOWN4
    case 0xC4EF4F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:60 LDA #0
    case 0xC4EF51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:60 LDA #0
    // Overlapping static entry reached from 0xC4EF51.
    case 0xC4EF53: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EF54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:63 PHA
    case 0xC4EF56: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:64 LDA @VIRTUAL00
    case 0xC4EF57: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:65 STA TEMP_REGISTER
    case 0xC4EF59: cpu.execute_instruction<0x8D>(0x0000C0, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:66 PLA
    case 0xC4EF5C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:67 STA @VIRTUAL00
    case 0xC4EF5D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:68 LDA TEMP_REGISTER
    case 0xC4EF5F: cpu.execute_instruction<0xAD>(0x0000C0, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:69 ORA @VIRTUAL00
    case 0xC4EF62: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:70 STA @VIRTUAL00
    case 0xC4EF64: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC4EF66: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:72 LDA @VIRTUAL01
    case 0xC4EF68: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:73 AND #$00FF
    case 0xC4EF6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC4EF6A.
    case 0xC4EF6C: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:74 AND #$0080
    case 0xC4EF6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:74 AND #$0080
    // Overlapping static entry reached from 0xC4EF6D.
    case 0xC4EF6F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:75 BEQ @UNKNOWN5
    case 0xC4EF70: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:76 LDA #1
    case 0xC4EF72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:76 LDA #1
    // Overlapping static entry reached from 0xC4EF72.
    case 0xC4EF74: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:77 BRA @UNKNOWN6
    case 0xC4EF75: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:79 LDA #0
    case 0xC4EF77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:79 LDA #0
    // Overlapping static entry reached from 0xC4EF77.
    case 0xC4EF79: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EF7A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:82 ORA @LOCAL01
    case 0xC4EF7C: cpu.execute_instruction<0x05>(0x00000F, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:83 STA @LOCAL01
    case 0xC4EF7E: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:85 LDA @LOCAL00
    case 0xC4EF80: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:86 ASL
    case 0xC4EF82: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:87 STA @LOCAL00
    case 0xC4EF83: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:88 LDA @VIRTUAL01
    case 0xC4EF85: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:89 ASL
    case 0xC4EF87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:90 STA @VIRTUAL01
    case 0xC4EF88: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:91 INY
    case 0xC4EF8A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:93 CPY #8
    case 0xC4EF8B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:93 CPY #8
    // Overlapping static entry reached from 0xC4EF8B.
    case 0xC4EF8D: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:94 BCCL @UNKNOWN1
    case 0xC4EF8E: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:94 BCCL @UNKNOWN1
    case 0xC4EF90: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:94 BCCL @UNKNOWN1
    case 0xC4EF92: cpu.execute_instruction<0x4C>(0x00EF12, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:95 LDA @LOCAL01
    case 0xC4EF95: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:96 STA __BSS_START__+1,X
    case 0xC4EF97: cpu.execute_instruction<0x9D>(0x000001, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:97 LDA @VIRTUAL00
    case 0xC4EF9A: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:98 STA __BSS_START__,X
    case 0xC4EF9C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:99 INX
    case 0xC4EF9F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:100 INX
    case 0xC4EFA0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:101 REP #PROC_FLAGS::ACCUM8
    case 0xC4EFA1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:102 LDA @LOCAL02
    case 0xC4EFA3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:103 STA @VIRTUAL02
    case 0xC4EFA5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:104 INC @VIRTUAL02
    case 0xC4EFA7: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:105 LDA @VIRTUAL02
    case 0xC4EFA9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:106 STA @LOCAL02
    case 0xC4EFAB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:108 LDA @VIRTUAL04
    case 0xC4EFAD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:109 ASL
    case 0xC4EFAF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:110 ASL
    case 0xC4EFB0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:111 ASL
    case 0xC4EFB1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:112 ASL
    case 0xC4EFB2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:113 PHA
    case 0xC4EFB3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:114 LDA @VIRTUAL02
    case 0xC4EFB4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:115 PLY
    case 0xC4EFB6: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:116 STY @VIRTUAL02
    case 0xC4EFB7: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:117 CMP @VIRTUAL02
    case 0xC4EFB9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:118 BCCL @UNKNOWN0
    case 0xC4EFBB: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:118 BCCL @UNKNOWN0
    case 0xC4EFBD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:118 BCCL @UNKNOWN0
    case 0xC4EFBF: cpu.execute_instruction<0x4C>(0x00EEFA, 3); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:119 PLD
    case 0xC4EFC2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/ending/change_vwf_2bpp_to_3_colour.asm:120 RTL
    case 0xC4EFC3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/check_cast_scroll_threshold.asm (source_named).
bool execute_ending_check_cast_scroll_threshold_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4E4F9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4E4FB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4E4FC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4E4FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E4FD.
    case 0xC4E4FF: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4E500: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/check_cast_scroll_threshold.asm:8 LDA #0
    case 0xC4E501: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/check_cast_scroll_threshold.asm:8 LDA #0
    // Overlapping static entry reached from 0xC4E501.
    case 0xC4E503: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/check_cast_scroll_threshold.asm:9 STA @LOCAL00
    case 0xC4E504: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/check_cast_scroll_threshold.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC4E506: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/ending/check_cast_scroll_threshold.asm:11 ASL
    case 0xC4E509: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/check_cast_scroll_threshold.asm:12 TAX
    case 0xC4E50A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/check_cast_scroll_threshold.asm:13 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4E50B: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/ending/check_cast_scroll_threshold.asm:14 CMP BG3_Y_POS
    case 0xC4E50E: cpu.execute_instruction<0xCD>(0x00003B, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:15 BGT @UNKNOWN1
    case 0xC4E511: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:15 BGT @UNKNOWN1
    case 0xC4E513: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/ending/check_cast_scroll_threshold.asm:16 LDA #1
    case 0xC4E515: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/check_cast_scroll_threshold.asm:16 LDA #1
    // Overlapping static entry reached from 0xC4E515.
    case 0xC4E517: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/check_cast_scroll_threshold.asm:17 STA @LOCAL00
    case 0xC4E518: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/check_cast_scroll_threshold.asm:19 LDA @LOCAL00
    case 0xC4E51A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:20 END_C_FUNCTION
    case 0xC4E51C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:20 END_C_FUNCTION
    case 0xC4E51D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/copy_cast_name_tilemap.asm (source_named).
bool execute_ending_copy_cast_name_tilemap_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EB04: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    case 0xC4EB06: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    case 0xC4EB07: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    case 0xC4EB08: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    case 0xC4EB09: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EB09.
    case 0xC4EB0B: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    case 0xC4EB0C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:13 END_STACK_VARS
    case 0xC4EB0D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:14 STY @LOCAL04
    case 0xC4EB0E: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:14 STY @LOCAL04
    // Overlapping static entry reached from 0xC4EB0B.
    case 0xC4EB0F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:15 STX @VIRTUAL02
    case 0xC4EB10: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:16 STA @LOCAL03
    case 0xC4EB12: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:17 LDA BG3_Y_POS
    case 0xC4EB14: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/copy_cast_name_tilemap.asm:18 LSR
    case 0xC4EB17: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:19 LSR
    case 0xC4EB18: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:20 LSR
    case 0xC4EB19: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:21 CLC
    case 0xC4EB1A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:22 ADC @VIRTUAL02
    case 0xC4EB1B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:23 AND #$001F
    case 0xC4EB1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/ending/copy_cast_name_tilemap.asm:23 AND #$001F
    // Overlapping static entry reached from 0xC4EB1D.
    case 0xC4EB1F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:24 STA @VIRTUAL02
    case 0xC4EB20: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:25 STA @LOCAL02
    case 0xC4EB22: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:26 LDA @LOCAL04
    case 0xC4EB24: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:27 INC
    case 0xC4EB26: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:28 LSR
    case 0xC4EB27: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:29 PHA
    case 0xC4EB28: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:30 LDA @VIRTUAL02
    case 0xC4EB29: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:31 ASL
    case 0xC4EB2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:32 ASL
    case 0xC4EB2C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:33 ASL
    case 0xC4EB2D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:34 ASL
    case 0xC4EB2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:35 ASL
    case 0xC4EB2F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:36 CLC
    case 0xC4EB30: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:37 ADC @LOCAL03
    case 0xC4EB31: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:38 CLC
    case 0xC4EB33: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:39 ADC #VRAM::CAST_TILEMAP
    case 0xC4EB34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/ending/copy_cast_name_tilemap.asm:39 ADC #VRAM::CAST_TILEMAP
    // Overlapping static entry reached from 0xC4EB34.
    case 0xC4EB36: cpu.execute_instruction<0x7C>(0x00847A, 3); return true;
    // src/ending/copy_cast_name_tilemap.asm:40 PLY
    case 0xC4EB37: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:41 STY @VIRTUAL02
    case 0xC4EB38: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:42 SEC
    case 0xC4EB3A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:43 SBC @VIRTUAL02
    case 0xC4EB3B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:44 STA @VIRTUAL04
    case 0xC4EB3D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:45 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:45 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EB3F.
    case 0xC4EB41: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:45 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB42: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:45 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:45 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EB44.
    case 0xC4EB46: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:45 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB47: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:46 LDA @LOCAL03
    case 0xC4EB49: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:47 ASL
    case 0xC4EB4B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:48 CLC
    case 0xC4EB4C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:49 ADC @VIRTUAL06
    case 0xC4EB4D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:50 STA @VIRTUAL06
    case 0xC4EB4F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:51 STA @LOCAL00
    case 0xC4EB51: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:52 LDA @VIRTUAL06+2
    case 0xC4EB53: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:53 STA @LOCAL00+2
    case 0xC4EB55: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:54 LDY @VIRTUAL04
    case 0xC4EB57: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:55 LDA @LOCAL04
    case 0xC4EB59: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:56 ASL
    case 0xC4EB5B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:57 TAX
    case 0xC4EB5C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EB5D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:59 LDA #0
    case 0xC4EB5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/copy_cast_name_tilemap.asm:60 JSL PREPARE_VRAM_COPY
    case 0xC4EB61: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/ending/copy_cast_name_tilemap.asm:60 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4EB5F.
    case 0xC4EB62: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:60 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4EB62.
    case 0xC4EB64: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0014A5, 3); return true;
    // src/ending/copy_cast_name_tilemap.asm:62 LDA @LOCAL02
    case 0xC4EB65: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:62 LDA @LOCAL02
    // Overlapping static entry reached from 0xC4EB64.
    case 0xC4EB66: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:63 STA @VIRTUAL02
    case 0xC4EB67: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:63 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4EB66.
    case 0xC4EB68: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:64 CMP #31
    case 0xC4EB69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/ending/copy_cast_name_tilemap.asm:64 CMP #31
    // Overlapping static entry reached from 0xC4EB69.
    case 0xC4EB6B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:65 BEQ @UNKNOWN0
    case 0xC4EB6C: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:66 LDA @VIRTUAL04
    case 0xC4EB6E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:67 CLC
    case 0xC4EB70: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:68 ADC #32
    case 0xC4EB71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/ending/copy_cast_name_tilemap.asm:68 ADC #32
    // Overlapping static entry reached from 0xC4EB71.
    case 0xC4EB73: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:69 STA @LOCAL01
    case 0xC4EB74: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:70 BRA @UNKNOWN1
    case 0xC4EB76: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:72 LDA @VIRTUAL04
    case 0xC4EB78: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:73 SEC
    case 0xC4EB7A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:74 SBC #$03E0
    case 0xC4EB7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000E0, 2); else cpu.execute_instruction<0xE9>(0x0003E0, 3); return true;
    // src/ending/copy_cast_name_tilemap.asm:74 SBC #$03E0
    // Overlapping static entry reached from 0xC4EB7B.
    case 0xC4EB7D: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:75 STA @LOCAL01
    case 0xC4EB7E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:75 STA @LOCAL01
    // Overlapping static entry reached from 0xC4EB7D.
    case 0xC4EB7F: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EB7F.
    case 0xC4EB81: cpu.execute_instruction<0x00>(0x000040, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EB80.
    case 0xC4EB82: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB83: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EB85.
    case 0xC4EB87: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:77 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EB88: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:78 LDA @LOCAL03
    case 0xC4EB8A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:79 ASL
    case 0xC4EB8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:80 CLC
    case 0xC4EB8D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:81 ADC #64
    case 0xC4EB8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/ending/copy_cast_name_tilemap.asm:81 ADC #64
    // Overlapping static entry reached from 0xC4EB8E.
    case 0xC4EB90: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:82 CLC
    case 0xC4EB91: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:83 ADC @VIRTUAL06
    case 0xC4EB92: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:84 STA @VIRTUAL06
    case 0xC4EB94: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:85 STA @LOCAL00
    case 0xC4EB96: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:86 LDA @VIRTUAL06+2
    case 0xC4EB98: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:87 STA @LOCAL00+2
    case 0xC4EB9A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:88 LDA @LOCAL01
    case 0xC4EB9C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:89 TAY
    case 0xC4EB9E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:90 LDA @LOCAL04
    case 0xC4EB9F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:91 ASL
    case 0xC4EBA1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:92 TAX
    case 0xC4EBA2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EBA3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:94 LDA #0
    case 0xC4EBA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/copy_cast_name_tilemap.asm:95 JSL PREPARE_VRAM_COPY
    case 0xC4EBA7: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/ending/copy_cast_name_tilemap.asm:95 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4EBA5.
    case 0xC4EBA8: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/ending/copy_cast_name_tilemap.asm:95 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4EBA8.
    case 0xC4EBAA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:96 END_C_FUNCTION
    case 0xC4EBAB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/copy_cast_name_tilemap.asm:96 END_C_FUNCTION
    case 0xC4EBAC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/count_photo_flags.asm (source_named).
bool execute_ending_count_photo_flags_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/count_photo_flags.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4F433: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4F435: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4F436: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4F437: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4F437.
    case 0xC4F439: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4F43A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/count_photo_flags.asm:9 LDY #0
    case 0xC4F43B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/count_photo_flags.asm:9 LDY #0
    // Overlapping static entry reached from 0xC4F43B.
    case 0xC4F43D: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/ending/count_photo_flags.asm:10 STY @LOCAL01
    case 0xC4F43E: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/ending/count_photo_flags.asm:11 TYX
    case 0xC4F440: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/ending/count_photo_flags.asm:12 STX @LOCAL00
    case 0xC4F441: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/ending/count_photo_flags.asm:13 BRA @LOOP_ENTRY
    case 0xC4F443: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/ending/count_photo_flags.asm:15 TXA
    case 0xC4F445: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/count_photo_flags.asm:16 LDY #.SIZEOF(photographer_config_entry)
    case 0xC4F446: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003E, 2); else cpu.execute_instruction<0xA0>(0x00003E, 3); return true;
    // src/ending/count_photo_flags.asm:16 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC4F446.
    case 0xC4F448: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/count_photo_flags.asm:17 JSL MULT168
    case 0xC4F449: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/ending/count_photo_flags.asm:18 TAX
    case 0xC4F44D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/count_photo_flags.asm:19 LDA f:PHOTOGRAPHER_CFG_TABLE,X
    case 0xC4F44E: cpu.execute_instruction<0xBF>(0xE12F8A, 4); return true;
    // src/ending/count_photo_flags.asm:20 JSL GET_EVENT_FLAG
    case 0xC4F452: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/ending/count_photo_flags.asm:21 CMP #0
    case 0xC4F456: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/ending/count_photo_flags.asm:21 CMP #0
    // Overlapping static entry reached from 0xC4F456.
    case 0xC4F458: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/count_photo_flags.asm:22 BEQ @EVENT_FLAG_UNSET
    case 0xC4F459: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/ending/count_photo_flags.asm:23 LDY @LOCAL01
    case 0xC4F45B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/ending/count_photo_flags.asm:24 INY
    case 0xC4F45D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/count_photo_flags.asm:25 STY @LOCAL01
    case 0xC4F45E: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/ending/count_photo_flags.asm:27 LDX @LOCAL00
    case 0xC4F460: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/ending/count_photo_flags.asm:28 INX
    case 0xC4F462: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/count_photo_flags.asm:29 STX @LOCAL00
    case 0xC4F463: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/ending/count_photo_flags.asm:31 CPX #NUM_PHOTOS
    case 0xC4F465: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/ending/count_photo_flags.asm:31 CPX #NUM_PHOTOS
    // Overlapping static entry reached from 0xC4F465.
    case 0xC4F467: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/ending/count_photo_flags.asm:32 BCC @LOOP_BEGIN
    case 0xC4F468: cpu.execute_instruction<0x90>(0x0000DB, 2); return true;
    // src/ending/count_photo_flags.asm:33 LDY @LOCAL01
    case 0xC4F46A: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/ending/count_photo_flags.asm:34 TYA
    case 0xC4F46C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/count_photo_flags.asm:35 END_C_FUNCTION
    case 0xC4F46D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/count_photo_flags.asm:35 END_C_FUNCTION
    case 0xC4F46E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/create_entity_at_v01_plus_bg3y.asm (source_named).
bool execute_ending_create_entity_at_v01_plus_bg3y_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4ECAD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4ECAF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4ECB0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4ECB1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4ECB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4ECB2.
    case 0xC4ECB4: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4ECB5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4ECB6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:12 STX @VIRTUAL02
    case 0xC4ECB7: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4ECB4.
    case 0xC4ECB8: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:13 STA @LOCAL02
    case 0xC4ECB9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:14 LDA INITIAL_CAST_ENTITY_SLEEP_FRAMES
    case 0xC4ECBB: cpu.execute_instruction<0xAD>(0x00B4D3, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:15 AND #$0003
    case 0xC4ECBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:15 AND #$0003
    // Overlapping static entry reached from 0xC4ECBE.
    case 0xC4ECC0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:16 STA NEW_ENTITY_VAR0
    case 0xC4ECC1: cpu.execute_instruction<0x8D>(0x000A38, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:17 INC INITIAL_CAST_ENTITY_SLEEP_FRAMES
    case 0xC4ECC4: cpu.execute_instruction<0xEE>(0x00B4D3, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:18 LDA CURRENT_ENTITY_SLOT
    case 0xC4ECC7: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:19 ASL
    case 0xC4ECCA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:20 TAX
    case 0xC4ECCB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:21 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4ECCC: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:22 STA @LOCAL00
    case 0xC4ECCF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:23 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC4ECD1: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:24 CLC
    case 0xC4ECD4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:25 ADC BG3_Y_POS
    case 0xC4ECD5: cpu.execute_instruction<0x6D>(0x00003B, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:26 STA @LOCAL01
    case 0xC4ECD8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:27 LDY #.LOWORD(-1)
    case 0xC4ECDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:27 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4ECDA.
    case 0xC4ECDC: cpu.execute_instruction<0xFF>(0xA502A6, 4); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:28 LDX @VIRTUAL02
    case 0xC4ECDD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:29 LDA @LOCAL02
    case 0xC4ECDF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:29 LDA @LOCAL02
    // Overlapping static entry reached from 0xC4ECDC.
    case 0xC4ECE0: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:30 JSL CREATE_ENTITY
    case 0xC4ECE1: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:30 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4ECE0.
    case 0xC4ECE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x00001E, 2); else cpu.execute_instruction<0x49>(0x00C01E, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:30 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4ECE2.
    case 0xC4ECE4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:31 END_C_FUNCTION
    case 0xC4ECE5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:31 END_C_FUNCTION
    case 0xC4ECE6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/credits_scroll_frame.asm (source_named).
bool execute_ending_credits_scroll_frame_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/credits_scroll_frame.asm:3 BEGIN_C_FUNCTION
    case 0xC0F41E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/credits_scroll_frame.asm:14 END_STACK_VARS
    case 0xC0F420: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/credits_scroll_frame.asm:14 END_STACK_VARS
    case 0xC0F421: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/credits_scroll_frame.asm:14 END_STACK_VARS
    case 0xC0F422: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DB, 2); else cpu.execute_instruction<0x69>(0x00FFDB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/credits_scroll_frame.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F422.
    case 0xC0F424: cpu.execute_instruction<0xFF>(0x3BAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/credits_scroll_frame.asm:14 END_STACK_VARS
    case 0xC0F425: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:15 LDA BG3_Y_POS
    case 0xC0F426: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/credits_scroll_frame.asm:15 LDA BG3_Y_POS
    // Overlapping static entry reached from 0xC0F424.
    case 0xC0F428: cpu.execute_instruction<0x00>(0x0000CD, 2); return true;
    // src/ending/credits_scroll_frame.asm:16 CMP CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F429: cpu.execute_instruction<0xCD>(0x00B4E3, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/ending/credits_scroll_frame.asm:17 BGT @UNKNOWN1
    case 0xC0F42C: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/ending/credits_scroll_frame.asm:17 BGT @UNKNOWN1
    case 0xC0F42E: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/ending/credits_scroll_frame.asm:18 JMP @UNKNOWN37
    case 0xC0F430: cpu.execute_instruction<0x4C>(0x00F85F, 3); return true;
    // src/ending/credits_scroll_frame.asm:20 LDA CREDITS_CURRENT_ROW
    case 0xC0F433: cpu.execute_instruction<0xAD>(0x00B4F7, 3); return true;
    // src/ending/credits_scroll_frame.asm:21 STA @LOCAL08
    case 0xC0F436: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/ending/credits_scroll_frame.asm:22 LDA CREDITS_CURRENT_ROW
    case 0xC0F438: cpu.execute_instruction<0xAD>(0x00B4F7, 3); return true;
    // src/ending/credits_scroll_frame.asm:23 INC
    case 0xC0F43B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:24 STA @LOCAL07
    case 0xC0F43C: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/ending/credits_scroll_frame.asm:25 LDA CREDITS_CURRENT_ROW
    case 0xC0F43E: cpu.execute_instruction<0xAD>(0x00B4F7, 3); return true;
    // src/ending/credits_scroll_frame.asm:26 INC
    case 0xC0F441: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:27 INC
    case 0xC0F442: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:28 AND #$000F
    case 0xC0F443: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/ending/credits_scroll_frame.asm:28 AND #$000F
    // Overlapping static entry reached from 0xC0F443.
    case 0xC0F445: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/credits_scroll_frame.asm:29 STA CREDITS_CURRENT_ROW
    case 0xC0F446: cpu.execute_instruction<0x8D>(0x00B4F7, 3); return true;
    // src/ending/credits_scroll_frame.asm:30 LDA BG3_Y_POS
    case 0xC0F449: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/credits_scroll_frame.asm:31 LSR
    case 0xC0F44C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:32 LSR
    case 0xC0F44D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:33 LSR
    case 0xC0F44E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:34 CLC
    case 0xC0F44F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:35 ADC #29
    case 0xC0F450: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001D, 2); else cpu.execute_instruction<0x69>(0x00001D, 3); return true;
    // src/ending/credits_scroll_frame.asm:35 ADC #29
    // Overlapping static entry reached from 0xC0F450.
    case 0xC0F452: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/ending/credits_scroll_frame.asm:36 AND #$001F
    case 0xC0F453: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/ending/credits_scroll_frame.asm:36 AND #$001F
    // Overlapping static entry reached from 0xC0F453.
    case 0xC0F455: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:37 STA @VIRTUAL04
    case 0xC0F456: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame.asm:38 LDA #0
    case 0xC0F458: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame.asm:38 LDA #0
    // Overlapping static entry reached from 0xC0F458.
    case 0xC0F45A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:39 STA @VIRTUAL02
    case 0xC0F45B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:40 STA @LOCAL06
    case 0xC0F45D: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:41 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0F45F: cpu.execute_instruction<0xAD>(0x00B4E7, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:41 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0F462: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:41 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0F464: cpu.execute_instruction<0xAD>(0x00B4E9, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:41 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0F467: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:42 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F469: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:42 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F46B: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:42 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F46D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:42 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F46F: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/ending/credits_scroll_frame.asm:43 LDA @LOCAL08
    case 0xC0F471: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/ending/credits_scroll_frame.asm:44 ASL
    case 0xC0F473: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:45 ASL
    case 0xC0F474: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:46 ASL
    case 0xC0F475: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:47 ASL
    case 0xC0F476: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:48 ASL
    case 0xC0F477: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:49 ASL
    case 0xC0F478: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:50 CLC
    case 0xC0F479: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:51 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F47A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x007DFE, 3); return true;
    // src/ending/credits_scroll_frame.asm:51 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F47A.
    case 0xC0F47C: cpu.execute_instruction<0x7D>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:52 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F47D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:52 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F47F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:52 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F480: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:52 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F482: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:52 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F483: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:52 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F485: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/credits_scroll_frame.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC0F487: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:54 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F489: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:54 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F48B: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:54 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F48D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:54 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F48F: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/ending/credits_scroll_frame.asm:55 LDA @LOCAL07
    case 0xC0F491: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/ending/credits_scroll_frame.asm:56 ASL
    case 0xC0F493: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:57 ASL
    case 0xC0F494: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:58 ASL
    case 0xC0F495: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:59 ASL
    case 0xC0F496: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:60 ASL
    case 0xC0F497: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:61 ASL
    case 0xC0F498: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:62 CLC
    case 0xC0F499: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:63 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F49A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x007DFE, 3); return true;
    // src/ending/credits_scroll_frame.asm:63 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F49A.
    case 0xC0F49C: cpu.execute_instruction<0x7D>(0x000A85, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:64 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0F49D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:64 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0F49F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:64 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0F4A0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:64 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0F4A2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:64 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0F4A3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:64 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0F4A5: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/ending/credits_scroll_frame.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC0F4A7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame.asm:66 LDA [@LOCAL05]
    case 0xC0F4A9: cpu.execute_instruction<0xA7>(0x00001B, 2); return true;
    // src/ending/credits_scroll_frame.asm:67 AND #$00FF
    case 0xC0F4AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC0F4AB.
    case 0xC0F4AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:68 STA @LOCAL03
    case 0xC0F4AE: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:69 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F4B0: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:69 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F4B2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:69 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F4B4: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:69 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F4B6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame.asm:70 INC @VIRTUAL06
    case 0xC0F4B8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:71 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F4BA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:71 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F4BC: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:71 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F4BE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:71 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F4C0: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/ending/credits_scroll_frame.asm:72 LDA @LOCAL03
    case 0xC0F4C2: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/ending/credits_scroll_frame.asm:73 CMP #1
    case 0xC0F4C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/ending/credits_scroll_frame.asm:73 CMP #1
    // Overlapping static entry reached from 0xC0F4C4.
    case 0xC0F4C6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/credits_scroll_frame.asm:74 BEQ @UNKNOWN6
    case 0xC0F4C7: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/ending/credits_scroll_frame.asm:75 CMP #2
    case 0xC0F4C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/ending/credits_scroll_frame.asm:75 CMP #2
    // Overlapping static entry reached from 0xC0F4C9.
    case 0xC0F4CB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame.asm:76 BEQL @UNKNOWN9
    case 0xC0F4CC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame.asm:76 BEQL @UNKNOWN9
    case 0xC0F4CE: cpu.execute_instruction<0x4C>(0x00F581, 3); return true;
    // src/ending/credits_scroll_frame.asm:77 CMP #3
    case 0xC0F4D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/ending/credits_scroll_frame.asm:77 CMP #3
    // Overlapping static entry reached from 0xC0F4D1.
    case 0xC0F4D3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame.asm:78 BEQL @UNKNOWN14
    case 0xC0F4D4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame.asm:78 BEQL @UNKNOWN14
    case 0xC0F4D6: cpu.execute_instruction<0x4C>(0x00F668, 3); return true;
    // src/ending/credits_scroll_frame.asm:79 CMP #4
    case 0xC0F4D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/ending/credits_scroll_frame.asm:79 CMP #4
    // Overlapping static entry reached from 0xC0F4D9.
    case 0xC0F4DB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame.asm:80 BEQL @UNKNOWN15
    case 0xC0F4DC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame.asm:80 BEQL @UNKNOWN15
    case 0xC0F4DE: cpu.execute_instruction<0x4C>(0x00F67A, 3); return true;
    // src/ending/credits_scroll_frame.asm:81 CMP #<-1
    case 0xC0F4E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:81 CMP #<-1
    // Overlapping static entry reached from 0xC0F4E1.
    case 0xC0F4E3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame.asm:82 BEQL @UNKNOWN35
    case 0xC0F4E4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame.asm:82 BEQL @UNKNOWN35
    case 0xC0F4E6: cpu.execute_instruction<0x4C>(0x00F845, 3); return true;
    // src/ending/credits_scroll_frame.asm:83 JMP @UNKNOWN36
    case 0xC0F4E9: cpu.execute_instruction<0x4C>(0x00F84B, 3); return true;
    // src/ending/credits_scroll_frame.asm:85 LDA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F4EC: cpu.execute_instruction<0xAD>(0x00B4E3, 3); return true;
    // src/ending/credits_scroll_frame.asm:86 CLC
    case 0xC0F4EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:87 ADC #8
    case 0xC0F4F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/ending/credits_scroll_frame.asm:87 ADC #8
    // Overlapping static entry reached from 0xC0F4F0.
    case 0xC0F4F2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/credits_scroll_frame.asm:88 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F4F3: cpu.execute_instruction<0x8D>(0x00B4E3, 3); return true;
    // src/ending/credits_scroll_frame.asm:89 BRA @UNKNOWN8
    case 0xC0F4F6: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/ending/credits_scroll_frame.asm:91 AND #$00FF
    case 0xC0F4F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:91 AND #$00FF
    // Overlapping static entry reached from 0xC0F4F8.
    case 0xC0F4FA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame.asm:92 CLC
    case 0xC0F4FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:93 ADC #$2000
    case 0xC0F4FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/ending/credits_scroll_frame.asm:93 ADC #$2000
    // Overlapping static entry reached from 0xC0F4FC.
    case 0xC0F4FE: cpu.execute_instruction<0x20>(0x0017A6, 3); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/credits_scroll_frame.asm:94 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F4FF: cpu.execute_instruction<0xA6>(0x000017, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/credits_scroll_frame.asm:94 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F501: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:94 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F503: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:94 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F505: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame.asm:95 STA [@VIRTUAL06]
    case 0xC0F507: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:96 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F509: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:96 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F50B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:96 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F50D: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:96 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F50F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame.asm:97 INC @VIRTUAL06
    case 0xC0F511: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:98 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F513: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:98 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F515: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:98 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F517: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:98 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F519: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:99 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F51B: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:99 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F51D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:99 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F51F: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:99 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F521: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame.asm:100 INC @VIRTUAL06
    case 0xC0F523: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame.asm:101 INC @VIRTUAL06
    case 0xC0F525: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:102 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F527: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:102 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F529: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:102 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F52B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:102 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F52D: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/ending/credits_scroll_frame.asm:103 INC @VIRTUAL02
    case 0xC0F52F: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:105 LDA [@LOCAL05]
    case 0xC0F531: cpu.execute_instruction<0xA7>(0x00001B, 2); return true;
    // src/ending/credits_scroll_frame.asm:106 AND #$00FF
    case 0xC0F533: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:106 AND #$00FF
    // Overlapping static entry reached from 0xC0F533.
    case 0xC0F535: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/ending/credits_scroll_frame.asm:107 BNE @UNKNOWN7
    case 0xC0F536: cpu.execute_instruction<0xD0>(0x0000C0, 2); return true;
    // src/ending/credits_scroll_frame.asm:108 LDA @VIRTUAL02
    case 0xC0F538: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:109 LSR
    case 0xC0F53A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:110 PHA
    case 0xC0F53B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:111 LDA @VIRTUAL04
    case 0xC0F53C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame.asm:112 ASL
    case 0xC0F53E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:113 ASL
    case 0xC0F53F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:114 ASL
    case 0xC0F540: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:115 ASL
    case 0xC0F541: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:116 ASL
    case 0xC0F542: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:117 CLC
    case 0xC0F543: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:118 ADC #$6C10
    case 0xC0F544: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x006C10, 3); return true;
    // src/ending/credits_scroll_frame.asm:118 ADC #$6C10
    // Overlapping static entry reached from 0xC0F544.
    case 0xC0F546: cpu.execute_instruction<0x6C>(0x00847A, 3); return true;
    // src/ending/credits_scroll_frame.asm:119 PLY
    case 0xC0F547: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:120 STY @VIRTUAL04
    case 0xC0F548: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame.asm:121 SEC
    case 0xC0F54A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:122 SBC @VIRTUAL04
    case 0xC0F54B: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame.asm:123 STA @LOCAL03
    case 0xC0F54D: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/ending/credits_scroll_frame.asm:124 LDA @LOCAL08
    case 0xC0F54F: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/ending/credits_scroll_frame.asm:125 ASL
    case 0xC0F551: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:126 ASL
    case 0xC0F552: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:127 ASL
    case 0xC0F553: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:128 ASL
    case 0xC0F554: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:129 ASL
    case 0xC0F555: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:130 ASL
    case 0xC0F556: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:131 CLC
    case 0xC0F557: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:132 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F558: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x007DFE, 3); return true;
    // src/ending/credits_scroll_frame.asm:132 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F558.
    case 0xC0F55A: cpu.execute_instruction<0x7D>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:133 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F55B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:133 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F55D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:133 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F55E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:133 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F560: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:133 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F561: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:133 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F563: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/credits_scroll_frame.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC0F565: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F567: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F569: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F56B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F56D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/credits_scroll_frame.asm:136 LDA @LOCAL03
    case 0xC0F56F: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/ending/credits_scroll_frame.asm:137 TAY
    case 0xC0F571: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:138 LDA @VIRTUAL02
    case 0xC0F572: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:139 ASL
    case 0xC0F574: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:140 TAX
    case 0xC0F575: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:141 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F576: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame.asm:142 LDA #0
    case 0xC0F578: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/credits_scroll_frame.asm:143 JSL ENQUEUE_CREDITS_DMA
    case 0xC0F57A: cpu.execute_instruction<0x22>(0xC4EFC4, 4); return true;
    // src/ending/credits_scroll_frame.asm:143 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F578.
    case 0xC0F57B: cpu.execute_instruction<0xC4>(0x0000EF, 2); return true;
    // src/ending/credits_scroll_frame.asm:143 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F57B.
    case 0xC0F57D: cpu.execute_instruction<0xC4>(0x00004C, 2); return true;
    // src/ending/credits_scroll_frame.asm:144 JMP @UNKNOWN36
    case 0xC0F57E: cpu.execute_instruction<0x4C>(0x00F84B, 3); return true;
    // src/ending/credits_scroll_frame.asm:144 JMP @UNKNOWN36
    // Overlapping static entry reached from 0xC0F57D.
    case 0xC0F57F: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:144 JMP @UNKNOWN36
    // Overlapping static entry reached from 0xC0F57F.
    case 0xC0F580: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:147 LDA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F581: cpu.execute_instruction<0xAD>(0x00B4E3, 3); return true;
    // src/ending/credits_scroll_frame.asm:148 CLC
    case 0xC0F584: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:149 ADC #16
    case 0xC0F585: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/ending/credits_scroll_frame.asm:149 ADC #16
    // Overlapping static entry reached from 0xC0F585.
    case 0xC0F587: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/credits_scroll_frame.asm:150 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F588: cpu.execute_instruction<0x8D>(0x00B4E3, 3); return true;
    // src/ending/credits_scroll_frame.asm:151 BRA @UNKNOWN11
    case 0xC0F58B: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/ending/credits_scroll_frame.asm:153 AND #$00FF
    case 0xC0F58D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:153 AND #$00FF
    // Overlapping static entry reached from 0xC0F58D.
    case 0xC0F58F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame.asm:154 CLC
    case 0xC0F590: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:155 ADC #$2400
    case 0xC0F591: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002400, 3); return true;
    // src/ending/credits_scroll_frame.asm:155 ADC #$2400
    // Overlapping static entry reached from 0xC0F591.
    case 0xC0F593: cpu.execute_instruction<0x24>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F594: cpu.execute_instruction<0xA6>(0x000017, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F593.
    case 0xC0F595: cpu.execute_instruction<0x17>(0x000086, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F596: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F595.
    case 0xC0F597: cpu.execute_instruction<0x06>(0x0000A6, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F598: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F597.
    case 0xC0F599: cpu.execute_instruction<0x19>(0x000886, 3); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F59A: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame.asm:157 STA [@VIRTUAL06]
    case 0xC0F59C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame.asm:158 INC @VIRTUAL06
    case 0xC0F59E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame.asm:159 INC @VIRTUAL06
    case 0xC0F5A0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:160 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F5A2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:160 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F5A4: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:160 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F5A6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:160 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F5A8: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/ending/credits_scroll_frame.asm:161 LDA [@LOCAL05]
    case 0xC0F5AA: cpu.execute_instruction<0xA7>(0x00001B, 2); return true;
    // src/ending/credits_scroll_frame.asm:162 AND #$00FF
    case 0xC0F5AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC0F5AC.
    case 0xC0F5AE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame.asm:163 CLC
    case 0xC0F5AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:164 ADC #$2410
    case 0xC0F5B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x002410, 3); return true;
    // src/ending/credits_scroll_frame.asm:164 ADC #$2410
    // Overlapping static entry reached from 0xC0F5B0.
    case 0xC0F5B2: cpu.execute_instruction<0x24>(0x000087, 2); return true;
    // src/ending/credits_scroll_frame.asm:165 STA [@VIRTUAL0A]
    case 0xC0F5B3: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame.asm:165 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC0F5B2.
    case 0xC0F5B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:166 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F5B5: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:166 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F5B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:166 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F5B9: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:166 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F5BB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame.asm:167 INC @VIRTUAL06
    case 0xC0F5BD: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:168 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F5BF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:168 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F5C1: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:168 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F5C3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:168 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F5C5: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/ending/credits_scroll_frame.asm:169 INC @VIRTUAL0A
    case 0xC0F5C7: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame.asm:170 INC @VIRTUAL0A
    case 0xC0F5C9: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame.asm:171 INC @VIRTUAL02
    case 0xC0F5CB: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:172 LDA @VIRTUAL02
    case 0xC0F5CD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:173 STA @LOCAL06
    case 0xC0F5CF: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/ending/credits_scroll_frame.asm:175 LDA [@LOCAL05]
    case 0xC0F5D1: cpu.execute_instruction<0xA7>(0x00001B, 2); return true;
    // src/ending/credits_scroll_frame.asm:176 AND #$00FF
    case 0xC0F5D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:176 AND #$00FF
    // Overlapping static entry reached from 0xC0F5D3.
    case 0xC0F5D5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/ending/credits_scroll_frame.asm:177 BNE @UNKNOWN10
    case 0xC0F5D6: cpu.execute_instruction<0xD0>(0x0000B5, 2); return true;
    // src/ending/credits_scroll_frame.asm:178 LDA @VIRTUAL02
    case 0xC0F5D8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:179 LSR
    case 0xC0F5DA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:180 STA @VIRTUAL02
    case 0xC0F5DB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:181 LDA @VIRTUAL04
    case 0xC0F5DD: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame.asm:182 ASL
    case 0xC0F5DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:183 ASL
    case 0xC0F5E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:184 ASL
    case 0xC0F5E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:185 ASL
    case 0xC0F5E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:186 ASL
    case 0xC0F5E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:187 CLC
    case 0xC0F5E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:188 ADC #$6C10
    case 0xC0F5E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x006C10, 3); return true;
    // src/ending/credits_scroll_frame.asm:188 ADC #$6C10
    // Overlapping static entry reached from 0xC0F5E5.
    case 0xC0F5E7: cpu.execute_instruction<0x6C>(0x00E538, 3); return true;
    // src/ending/credits_scroll_frame.asm:189 SEC
    case 0xC0F5E8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:190 SBC @VIRTUAL02
    case 0xC0F5E9: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:191 STA @LOCAL02
    case 0xC0F5EB: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:192 LDA @LOCAL08
    case 0xC0F5ED: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/ending/credits_scroll_frame.asm:193 ASL
    case 0xC0F5EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:194 ASL
    case 0xC0F5F0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:195 ASL
    case 0xC0F5F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:196 ASL
    case 0xC0F5F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:197 ASL
    case 0xC0F5F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:198 ASL
    case 0xC0F5F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:199 CLC
    case 0xC0F5F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:200 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F5F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x007DFE, 3); return true;
    // src/ending/credits_scroll_frame.asm:200 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F5F6.
    case 0xC0F5F8: cpu.execute_instruction<0x7D>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:201 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F5F9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:201 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F5FB: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:201 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F5FC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:201 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F5FE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:201 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F5FF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:201 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F601: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/credits_scroll_frame.asm:202 REP #PROC_FLAGS::ACCUM8
    case 0xC0F603: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:203 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F605: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:203 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F607: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:203 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F609: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:203 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F60B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/credits_scroll_frame.asm:204 LDY @LOCAL02
    case 0xC0F60D: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:205 LDA @LOCAL06
    case 0xC0F60F: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/ending/credits_scroll_frame.asm:206 STA @VIRTUAL02
    case 0xC0F611: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:207 ASL
    case 0xC0F613: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:208 TAX
    case 0xC0F614: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:209 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F615: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame.asm:210 LDA #0
    case 0xC0F617: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/credits_scroll_frame.asm:211 JSL ENQUEUE_CREDITS_DMA
    case 0xC0F619: cpu.execute_instruction<0x22>(0xC4EFC4, 4); return true;
    // src/ending/credits_scroll_frame.asm:211 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F617.
    case 0xC0F61A: cpu.execute_instruction<0xC4>(0x0000EF, 2); return true;
    // src/ending/credits_scroll_frame.asm:211 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F61A.
    case 0xC0F61C: cpu.execute_instruction<0xC4>(0x0000A5, 2); return true;
    // src/ending/credits_scroll_frame.asm:212 LDA @VIRTUAL04
    case 0xC0F61D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame.asm:212 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC0F61C.
    case 0xC0F61E: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/ending/credits_scroll_frame.asm:214 CMP #31
    case 0xC0F61F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/ending/credits_scroll_frame.asm:214 CMP #31
    // Overlapping static entry reached from 0xC0F61E.
    case 0xC0F620: cpu.execute_instruction<0x1F>(0x0AF000, 4); return true;
    // src/ending/credits_scroll_frame.asm:214 CMP #31
    // Overlapping static entry reached from 0xC0F61F.
    case 0xC0F621: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/credits_scroll_frame.asm:215 BEQ @UNKNOWN12
    case 0xC0F622: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame.asm:216 LDA @LOCAL02
    case 0xC0F624: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:217 CLC
    case 0xC0F626: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:218 ADC #32
    case 0xC0F627: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/ending/credits_scroll_frame.asm:218 ADC #32
    // Overlapping static entry reached from 0xC0F627.
    case 0xC0F629: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:219 STA @LOCAL08
    case 0xC0F62A: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/ending/credits_scroll_frame.asm:220 BRA @UNKNOWN13
    case 0xC0F62C: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame.asm:222 LDA @LOCAL02
    case 0xC0F62E: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:223 SEC
    case 0xC0F630: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:224 SBC #$03E0
    case 0xC0F631: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000E0, 2); else cpu.execute_instruction<0xE9>(0x0003E0, 3); return true;
    // src/ending/credits_scroll_frame.asm:224 SBC #$03E0
    // Overlapping static entry reached from 0xC0F631.
    case 0xC0F633: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:225 STA @LOCAL08
    case 0xC0F634: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/ending/credits_scroll_frame.asm:225 STA @LOCAL08
    // Overlapping static entry reached from 0xC0F633.
    case 0xC0F635: cpu.execute_instruction<0x23>(0x0000A5, 2); return true;
    // src/ending/credits_scroll_frame.asm:227 LDA @LOCAL07
    case 0xC0F636: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/ending/credits_scroll_frame.asm:227 LDA @LOCAL07
    // Overlapping static entry reached from 0xC0F635.
    case 0xC0F637: cpu.execute_instruction<0x21>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame.asm:228 ASL
    case 0xC0F638: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:229 ASL
    case 0xC0F639: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:230 ASL
    case 0xC0F63A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:231 ASL
    case 0xC0F63B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:232 ASL
    case 0xC0F63C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:233 ASL
    case 0xC0F63D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:234 CLC
    case 0xC0F63E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:235 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F63F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x007DFE, 3); return true;
    // src/ending/credits_scroll_frame.asm:235 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F63F.
    case 0xC0F641: cpu.execute_instruction<0x7D>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:236 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F642: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:236 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F644: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:236 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F645: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:236 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F647: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:236 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F648: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:236 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F64A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/credits_scroll_frame.asm:237 REP #PROC_FLAGS::ACCUM8
    case 0xC0F64C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:238 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F64E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:238 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F650: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:238 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F652: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:238 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F654: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/credits_scroll_frame.asm:239 LDA @LOCAL08
    case 0xC0F656: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/ending/credits_scroll_frame.asm:240 TAY
    case 0xC0F658: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:241 LDA @VIRTUAL02
    case 0xC0F659: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:242 ASL
    case 0xC0F65B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:243 TAX
    case 0xC0F65C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:244 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F65D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame.asm:245 LDA #0
    case 0xC0F65F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/credits_scroll_frame.asm:246 JSL ENQUEUE_CREDITS_DMA
    case 0xC0F661: cpu.execute_instruction<0x22>(0xC4EFC4, 4); return true;
    // src/ending/credits_scroll_frame.asm:246 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F65F.
    case 0xC0F662: cpu.execute_instruction<0xC4>(0x0000EF, 2); return true;
    // src/ending/credits_scroll_frame.asm:246 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F662.
    case 0xC0F664: cpu.execute_instruction<0xC4>(0x00004C, 2); return true;
    // src/ending/credits_scroll_frame.asm:247 JMP @UNKNOWN36
    case 0xC0F665: cpu.execute_instruction<0x4C>(0x00F84B, 3); return true;
    // src/ending/credits_scroll_frame.asm:247 JMP @UNKNOWN36
    // Overlapping static entry reached from 0xC0F664.
    case 0xC0F666: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:247 JMP @UNKNOWN36
    // Overlapping static entry reached from 0xC0F666.
    case 0xC0F667: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:250 LDA [@LOCAL05]
    case 0xC0F668: cpu.execute_instruction<0xA7>(0x00001B, 2); return true;
    // src/ending/credits_scroll_frame.asm:251 AND #$00FF
    case 0xC0F66A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:251 AND #$00FF
    // Overlapping static entry reached from 0xC0F66A.
    case 0xC0F66C: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame.asm:252 ASL
    case 0xC0F66D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:253 ASL
    case 0xC0F66E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:254 ASL
    case 0xC0F66F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:255 CLC
    case 0xC0F670: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:256 ADC CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F671: cpu.execute_instruction<0x6D>(0x00B4E3, 3); return true;
    // src/ending/credits_scroll_frame.asm:257 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F674: cpu.execute_instruction<0x8D>(0x00B4E3, 3); return true;
    // src/ending/credits_scroll_frame.asm:258 JMP @UNKNOWN36
    case 0xC0F677: cpu.execute_instruction<0x4C>(0x00F84B, 3); return true;
    // src/ending/credits_scroll_frame.asm:260 LDX #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    case 0xC0F67A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x009801, 3); return true;
    // src/ending/credits_scroll_frame.asm:260 LDX #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    // Overlapping static entry reached from 0xC0F67A.
    case 0xC0F67C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:261 STX @LOCAL03
    case 0xC0F67D: cpu.execute_instruction<0x86>(0x000015, 2); return true;
    // src/ending/credits_scroll_frame.asm:262 LDA __BSS_START__,X
    case 0xC0F67F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame.asm:263 AND #$00FF
    case 0xC0F682: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:263 AND #$00FF
    // Overlapping static entry reached from 0xC0F682.
    case 0xC0F684: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame.asm:264 BEQL @UNKNOWN34
    case 0xC0F685: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame.asm:264 BEQL @UNKNOWN34
    case 0xC0F687: cpu.execute_instruction<0x4C>(0x00F831, 3); return true;
    // src/ending/credits_scroll_frame.asm:265 LDY #.LOWORD(CREDITS_PLAYER_NAME_BUFFER)
    case 0xC0F68A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F9, 2); else cpu.execute_instruction<0xA0>(0x00B4F9, 3); return true;
    // src/ending/credits_scroll_frame.asm:265 LDY #.LOWORD(CREDITS_PLAYER_NAME_BUFFER)
    // Overlapping static entry reached from 0xC0F68A.
    case 0xC0F68C: cpu.execute_instruction<0xB4>(0x0000E2, 2); return true;
    // src/ending/credits_scroll_frame.asm:266 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F68D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame.asm:266 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F68C.
    case 0xC0F68E: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/ending/credits_scroll_frame.asm:267 LDA #0
    case 0xC0F68F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/ending/credits_scroll_frame.asm:268 STA @LOCAL01
    case 0xC0F691: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/credits_scroll_frame.asm:268 STA @LOCAL01
    // Overlapping static entry reached from 0xC0F68F.
    case 0xC0F692: cpu.execute_instruction<0x12>(0x00004C, 2); return true;
    // src/ending/credits_scroll_frame.asm:269 JMP @UNKNOWN27
    case 0xC0F693: cpu.execute_instruction<0x4C>(0x00F72A, 3); return true;
    // src/ending/credits_scroll_frame.asm:269 JMP @UNKNOWN27
    // Overlapping static entry reached from 0xC0F692.
    case 0xC0F694: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:269 JMP @UNKNOWN27
    // Overlapping static entry reached from 0xC0F694.
    case 0xC0F695: cpu.execute_instruction<0xF7>(0x0000A5, 2); return true;
    // src/ending/credits_scroll_frame.asm:272 LDA @VIRTUAL00
    case 0xC0F696: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/ending/credits_scroll_frame.asm:272 LDA @VIRTUAL00
    // Overlapping static entry reached from 0xC0F695.
    case 0xC0F697: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/ending/credits_scroll_frame.asm:273 AND #$00FF
    case 0xC0F698: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:273 AND #$00FF
    // Overlapping static entry reached from 0xC0F698.
    case 0xC0F69A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:274 STA @LOCAL02
    case 0xC0F69B: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:275 CMP #172
    case 0xC0F69D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000AC, 2); else cpu.execute_instruction<0xC9>(0x0000AC, 3); return true;
    // src/ending/credits_scroll_frame.asm:275 CMP #172
    // Overlapping static entry reached from 0xC0F69D.
    case 0xC0F69F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/credits_scroll_frame.asm:276 BEQ @UNKNOWN18
    case 0xC0F6A0: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/ending/credits_scroll_frame.asm:277 CMP #174
    case 0xC0F6A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000AE, 2); else cpu.execute_instruction<0xC9>(0x0000AE, 3); return true;
    // src/ending/credits_scroll_frame.asm:277 CMP #174
    // Overlapping static entry reached from 0xC0F6A2.
    case 0xC0F6A4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/credits_scroll_frame.asm:278 BEQ @UNKNOWN19
    case 0xC0F6A5: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/ending/credits_scroll_frame.asm:279 CMP #175
    case 0xC0F6A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000AF, 2); else cpu.execute_instruction<0xC9>(0x0000AF, 3); return true;
    // src/ending/credits_scroll_frame.asm:279 CMP #175
    // Overlapping static entry reached from 0xC0F6A7.
    case 0xC0F6A9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/credits_scroll_frame.asm:280 BEQ @UNKNOWN20
    case 0xC0F6AA: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/ending/credits_scroll_frame.asm:281 BRA @UNKNOWN21
    case 0xC0F6AC: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/ending/credits_scroll_frame.asm:284 LDA @LOCAL01
    case 0xC0F6AE: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/credits_scroll_frame.asm:285 AND #$00FF
    case 0xC0F6B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:285 AND #$00FF
    // Overlapping static entry reached from 0xC0F6B0.
    case 0xC0F6B2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:286 STA @VIRTUAL02
    case 0xC0F6B3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:287 TYA
    case 0xC0F6B5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:288 CLC
    case 0xC0F6B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:289 ADC @VIRTUAL02
    case 0xC0F6B7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:290 TAX
    case 0xC0F6B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:291 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F6BA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame.asm:292 LDA #124
    case 0xC0F6BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x009D7C, 3); return true;
    // src/ending/credits_scroll_frame.asm:293 STA __BSS_START__,X
    case 0xC0F6BE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame.asm:293 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0F6BC.
    case 0xC0F6BF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/credits_scroll_frame.asm:294 BRA @UNKNOWN26
    case 0xC0F6C1: cpu.execute_instruction<0x80>(0x00005D, 2); return true;
    // src/ending/credits_scroll_frame.asm:297 LDA @LOCAL01
    case 0xC0F6C3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/credits_scroll_frame.asm:298 AND #$00FF
    case 0xC0F6C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:298 AND #$00FF
    // Overlapping static entry reached from 0xC0F6C5.
    case 0xC0F6C7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:299 STA @VIRTUAL02
    case 0xC0F6C8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:300 TYA
    case 0xC0F6CA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:301 CLC
    case 0xC0F6CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:302 ADC @VIRTUAL02
    case 0xC0F6CC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:303 TAX
    case 0xC0F6CE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:304 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F6CF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame.asm:305 LDA #126
    case 0xC0F6D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x009D7E, 3); return true;
    // src/ending/credits_scroll_frame.asm:306 STA __BSS_START__,X
    case 0xC0F6D3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame.asm:306 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0F6D1.
    case 0xC0F6D4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/credits_scroll_frame.asm:307 BRA @UNKNOWN26
    case 0xC0F6D6: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/ending/credits_scroll_frame.asm:310 LDA @LOCAL01
    case 0xC0F6D8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/credits_scroll_frame.asm:311 AND #$00FF
    case 0xC0F6DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:311 AND #$00FF
    // Overlapping static entry reached from 0xC0F6DA.
    case 0xC0F6DC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:312 STA @VIRTUAL02
    case 0xC0F6DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:313 TYA
    case 0xC0F6DF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:314 CLC
    case 0xC0F6E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:315 ADC @VIRTUAL02
    case 0xC0F6E1: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:316 TAX
    case 0xC0F6E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:317 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F6E4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame.asm:318 LDA #127
    case 0xC0F6E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x009D7F, 3); return true;
    // src/ending/credits_scroll_frame.asm:319 STA __BSS_START__,X
    case 0xC0F6E8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame.asm:319 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0F6E6.
    case 0xC0F6E9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/credits_scroll_frame.asm:320 BRA @UNKNOWN26
    case 0xC0F6EB: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/ending/credits_scroll_frame.asm:323 LDA @LOCAL02
    case 0xC0F6ED: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:324 CLC
    case 0xC0F6EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:325 SBC #144
    case 0xC0F6F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000090, 2); else cpu.execute_instruction<0xE9>(0x000090, 3); return true;
    // src/ending/credits_scroll_frame.asm:325 SBC #144
    // Overlapping static entry reached from 0xC0F6F0.
    case 0xC0F6F2: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/ending/credits_scroll_frame.asm:326 BRANCHLTEQS @UNKNOWN24
    case 0xC0F6F3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/ending/credits_scroll_frame.asm:326 BRANCHLTEQS @UNKNOWN24
    case 0xC0F6F5: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/ending/credits_scroll_frame.asm:326 BRANCHLTEQS @UNKNOWN24
    case 0xC0F6F7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/ending/credits_scroll_frame.asm:326 BRANCHLTEQS @UNKNOWN24
    case 0xC0F6F9: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame.asm:327 LDA @LOCAL02
    case 0xC0F6FB: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:328 SEC
    case 0xC0F6FD: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:329 SBC #80
    case 0xC0F6FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/ending/credits_scroll_frame.asm:329 SBC #80
    // Overlapping static entry reached from 0xC0F6FE.
    case 0xC0F700: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:330 STA @LOCAL02
    case 0xC0F701: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:331 BRA @UNKNOWN25
    case 0xC0F703: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame.asm:333 LDA @LOCAL02
    case 0xC0F705: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:334 SEC
    case 0xC0F707: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:335 SBC #48
    case 0xC0F708: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000030, 2); else cpu.execute_instruction<0xE9>(0x000030, 3); return true;
    // src/ending/credits_scroll_frame.asm:335 SBC #48
    // Overlapping static entry reached from 0xC0F708.
    case 0xC0F70A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:336 STA @LOCAL02
    case 0xC0F70B: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:338 LDA @LOCAL01
    case 0xC0F70D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/credits_scroll_frame.asm:339 AND #$00FF
    case 0xC0F70F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:339 AND #$00FF
    // Overlapping static entry reached from 0xC0F70F.
    case 0xC0F711: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:340 STA @VIRTUAL02
    case 0xC0F712: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:341 TYA
    case 0xC0F714: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:342 CLC
    case 0xC0F715: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:343 ADC @VIRTUAL02
    case 0xC0F716: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:344 TAX
    case 0xC0F718: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:345 LDA @LOCAL02
    case 0xC0F719: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:346 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F71B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame.asm:347 STA __BSS_START__,X
    case 0xC0F71D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame.asm:349 LDX @LOCAL03
    case 0xC0F720: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/ending/credits_scroll_frame.asm:350 INX
    case 0xC0F722: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:351 STX @LOCAL03
    case 0xC0F723: cpu.execute_instruction<0x86>(0x000015, 2); return true;
    // src/ending/credits_scroll_frame.asm:352 LDA @LOCAL01
    case 0xC0F725: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/credits_scroll_frame.asm:353 INC
    case 0xC0F727: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:354 STA @LOCAL01
    case 0xC0F728: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/credits_scroll_frame.asm:356 LDA __BSS_START__,X
    case 0xC0F72A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame.asm:357 STA @VIRTUAL00
    case 0xC0F72D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/ending/credits_scroll_frame.asm:358 REP #PROC_FLAGS::ACCUM8
    case 0xC0F72F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame.asm:359 LDA @VIRTUAL00
    case 0xC0F731: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/ending/credits_scroll_frame.asm:360 AND #$00FF
    case 0xC0F733: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:360 AND #$00FF
    // Overlapping static entry reached from 0xC0F733.
    case 0xC0F735: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/ending/credits_scroll_frame.asm:361 BNEL @UNKNOWN17
    case 0xC0F736: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/ending/credits_scroll_frame.asm:361 BNEL @UNKNOWN17
    case 0xC0F738: cpu.execute_instruction<0x4C>(0x00F696, 3); return true;
    // src/ending/credits_scroll_frame.asm:362 LDA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F73B: cpu.execute_instruction<0xAD>(0x00B4E3, 3); return true;
    // src/ending/credits_scroll_frame.asm:363 CLC
    case 0xC0F73E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:364 ADC #16
    case 0xC0F73F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/ending/credits_scroll_frame.asm:364 ADC #16
    // Overlapping static entry reached from 0xC0F73F.
    case 0xC0F741: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/credits_scroll_frame.asm:365 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F742: cpu.execute_instruction<0x8D>(0x00B4E3, 3); return true;
    // src/ending/credits_scroll_frame.asm:366 LDX #0
    case 0xC0F745: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame.asm:366 LDX #0
    // Overlapping static entry reached from 0xC0F745.
    case 0xC0F747: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/ending/credits_scroll_frame.asm:367 BRA @UNKNOWN30
    case 0xC0F748: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // src/ending/credits_scroll_frame.asm:369 AND #$00FF
    case 0xC0F74A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:369 AND #$00FF
    // Overlapping static entry reached from 0xC0F74A.
    case 0xC0F74C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:370 STA @VIRTUAL02
    case 0xC0F74D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:371 AND #$00F0
    case 0xC0F74F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x0000F0, 3); return true;
    // src/ending/credits_scroll_frame.asm:371 AND #$00F0
    // Overlapping static entry reached from 0xC0F74F.
    case 0xC0F751: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame.asm:372 CLC
    case 0xC0F752: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:373 ADC @VIRTUAL02
    case 0xC0F753: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:374 CLC
    case 0xC0F755: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:375 ADC #$2400
    case 0xC0F756: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002400, 3); return true;
    // src/ending/credits_scroll_frame.asm:375 ADC #$2400
    // Overlapping static entry reached from 0xC0F756.
    case 0xC0F758: cpu.execute_instruction<0x24>(0x000048, 2); return true;
    // src/ending/credits_scroll_frame.asm:376 PHA
    case 0xC0F759: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:377 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F75A: cpu.execute_instruction<0xA5>(0x000017, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:377 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F75C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:377 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F75E: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:377 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F760: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame.asm:378 PLA
    case 0xC0F762: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:379 STA [@VIRTUAL06]
    case 0xC0F763: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame.asm:380 INC @VIRTUAL06
    case 0xC0F765: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame.asm:381 INC @VIRTUAL06
    case 0xC0F767: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:382 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F769: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:382 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F76B: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:382 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F76D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:382 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F76F: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/ending/credits_scroll_frame.asm:383 LDA __BSS_START__,Y
    case 0xC0F771: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame.asm:384 AND #$00FF
    case 0xC0F774: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:384 AND #$00FF
    // Overlapping static entry reached from 0xC0F774.
    case 0xC0F776: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:385 STA @VIRTUAL02
    case 0xC0F777: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:386 AND #$00F0
    case 0xC0F779: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x0000F0, 3); return true;
    // src/ending/credits_scroll_frame.asm:386 AND #$00F0
    // Overlapping static entry reached from 0xC0F779.
    case 0xC0F77B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame.asm:387 CLC
    case 0xC0F77C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:388 ADC @VIRTUAL02
    case 0xC0F77D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:389 CLC
    case 0xC0F77F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:390 ADC #$2410
    case 0xC0F780: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x002410, 3); return true;
    // src/ending/credits_scroll_frame.asm:390 ADC #$2410
    // Overlapping static entry reached from 0xC0F780.
    case 0xC0F782: cpu.execute_instruction<0x24>(0x000087, 2); return true;
    // src/ending/credits_scroll_frame.asm:391 STA [@VIRTUAL0A]
    case 0xC0F783: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame.asm:391 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC0F782.
    case 0xC0F784: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:392 INC @VIRTUAL0A
    case 0xC0F785: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame.asm:393 INC @VIRTUAL0A
    case 0xC0F787: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame.asm:394 INY
    case 0xC0F789: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:395 LDA @LOCAL06
    case 0xC0F78A: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/ending/credits_scroll_frame.asm:396 STA @VIRTUAL02
    case 0xC0F78C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:397 INC @VIRTUAL02
    case 0xC0F78E: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:398 LDA @VIRTUAL02
    case 0xC0F790: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:399 STA @LOCAL06
    case 0xC0F792: cpu.execute_instruction<0x85>(0x00001F, 2); return true;
    // src/ending/credits_scroll_frame.asm:400 INX
    case 0xC0F794: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:402 LDA __BSS_START__,Y
    case 0xC0F795: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame.asm:403 AND #$00FF
    case 0xC0F798: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame.asm:403 AND #$00FF
    // Overlapping static entry reached from 0xC0F798.
    case 0xC0F79A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/credits_scroll_frame.asm:404 BEQ @UNKNOWN31
    case 0xC0F79B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/ending/credits_scroll_frame.asm:405 CPX #24
    case 0xC0F79D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000018, 2); else cpu.execute_instruction<0xE0>(0x000018, 3); return true;
    // src/ending/credits_scroll_frame.asm:405 CPX #24
    // Overlapping static entry reached from 0xC0F79D.
    case 0xC0F79F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/ending/credits_scroll_frame.asm:406 BCC @UNKNOWN29
    case 0xC0F7A0: cpu.execute_instruction<0x90>(0x0000A8, 2); return true;
    // src/ending/credits_scroll_frame.asm:408 LDA @LOCAL06
    case 0xC0F7A2: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/ending/credits_scroll_frame.asm:409 STA @VIRTUAL02
    case 0xC0F7A4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:410 LSR
    case 0xC0F7A6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:411 STA @VIRTUAL02
    case 0xC0F7A7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:412 LDA @VIRTUAL04
    case 0xC0F7A9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame.asm:413 ASL
    case 0xC0F7AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:414 ASL
    case 0xC0F7AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:415 ASL
    case 0xC0F7AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:416 ASL
    case 0xC0F7AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:417 ASL
    case 0xC0F7AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:418 CLC
    case 0xC0F7B0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:419 ADC #$6C10
    case 0xC0F7B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x006C10, 3); return true;
    // src/ending/credits_scroll_frame.asm:419 ADC #$6C10
    // Overlapping static entry reached from 0xC0F7B1.
    case 0xC0F7B3: cpu.execute_instruction<0x6C>(0x00E538, 3); return true;
    // src/ending/credits_scroll_frame.asm:420 SEC
    case 0xC0F7B4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:421 SBC @VIRTUAL02
    case 0xC0F7B5: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:422 STA @LOCAL02
    case 0xC0F7B7: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:423 LDA @LOCAL08
    case 0xC0F7B9: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/ending/credits_scroll_frame.asm:424 ASL
    case 0xC0F7BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:425 ASL
    case 0xC0F7BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:426 ASL
    case 0xC0F7BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:427 ASL
    case 0xC0F7BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:428 ASL
    case 0xC0F7BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:429 ASL
    case 0xC0F7C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:430 CLC
    case 0xC0F7C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:431 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F7C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x007DFE, 3); return true;
    // src/ending/credits_scroll_frame.asm:431 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F7C2.
    case 0xC0F7C4: cpu.execute_instruction<0x7D>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:432 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F7C5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:432 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F7C7: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:432 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F7C8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:432 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F7CA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:432 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F7CB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:432 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F7CD: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/credits_scroll_frame.asm:433 REP #PROC_FLAGS::ACCUM8
    case 0xC0F7CF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:434 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F7D1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:434 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F7D3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:434 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F7D5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:434 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F7D7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/credits_scroll_frame.asm:435 LDY @LOCAL02
    case 0xC0F7D9: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:436 LDA @LOCAL06
    case 0xC0F7DB: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/ending/credits_scroll_frame.asm:437 STA @VIRTUAL02
    case 0xC0F7DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:438 ASL
    case 0xC0F7DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:439 TAX
    case 0xC0F7E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:440 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F7E1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame.asm:441 LDA #0
    case 0xC0F7E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/credits_scroll_frame.asm:442 JSL ENQUEUE_CREDITS_DMA
    case 0xC0F7E5: cpu.execute_instruction<0x22>(0xC4EFC4, 4); return true;
    // src/ending/credits_scroll_frame.asm:442 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F7E3.
    case 0xC0F7E6: cpu.execute_instruction<0xC4>(0x0000EF, 2); return true;
    // src/ending/credits_scroll_frame.asm:442 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F7E6.
    case 0xC0F7E8: cpu.execute_instruction<0xC4>(0x0000A5, 2); return true;
    // src/ending/credits_scroll_frame.asm:444 LDA @VIRTUAL04
    case 0xC0F7E9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame.asm:444 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC0F7E8.
    case 0xC0F7EA: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/ending/credits_scroll_frame.asm:445 CMP #31
    case 0xC0F7EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/ending/credits_scroll_frame.asm:445 CMP #31
    // Overlapping static entry reached from 0xC0F7EA.
    case 0xC0F7EC: cpu.execute_instruction<0x1F>(0x0AF000, 4); return true;
    // src/ending/credits_scroll_frame.asm:445 CMP #31
    // Overlapping static entry reached from 0xC0F7EB.
    case 0xC0F7ED: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/credits_scroll_frame.asm:446 BEQ @UNKNOWN32
    case 0xC0F7EE: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame.asm:447 LDA @LOCAL02
    case 0xC0F7F0: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:448 CLC
    case 0xC0F7F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:449 ADC #32
    case 0xC0F7F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/ending/credits_scroll_frame.asm:449 ADC #32
    // Overlapping static entry reached from 0xC0F7F3.
    case 0xC0F7F5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:450 STA @LOCAL08
    case 0xC0F7F6: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/ending/credits_scroll_frame.asm:451 BRA @UNKNOWN33
    case 0xC0F7F8: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame.asm:454 LDA @LOCAL02
    case 0xC0F7FA: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/ending/credits_scroll_frame.asm:455 SEC
    case 0xC0F7FC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:456 SBC #$03E0
    case 0xC0F7FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000E0, 2); else cpu.execute_instruction<0xE9>(0x0003E0, 3); return true;
    // src/ending/credits_scroll_frame.asm:456 SBC #$03E0
    // Overlapping static entry reached from 0xC0F7FD.
    case 0xC0F7FF: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame.asm:457 STA @LOCAL08
    case 0xC0F800: cpu.execute_instruction<0x85>(0x000023, 2); return true;
    // src/ending/credits_scroll_frame.asm:457 STA @LOCAL08
    // Overlapping static entry reached from 0xC0F7FF.
    case 0xC0F801: cpu.execute_instruction<0x23>(0x0000A5, 2); return true;
    // src/ending/credits_scroll_frame.asm:459 LDA @LOCAL07
    case 0xC0F802: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // src/ending/credits_scroll_frame.asm:459 LDA @LOCAL07
    // Overlapping static entry reached from 0xC0F801.
    case 0xC0F803: cpu.execute_instruction<0x21>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame.asm:460 ASL
    case 0xC0F804: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:461 ASL
    case 0xC0F805: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:462 ASL
    case 0xC0F806: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:463 ASL
    case 0xC0F807: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:464 ASL
    case 0xC0F808: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:465 ASL
    case 0xC0F809: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:466 CLC
    case 0xC0F80A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:467 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F80B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x007DFE, 3); return true;
    // src/ending/credits_scroll_frame.asm:467 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F80B.
    case 0xC0F80D: cpu.execute_instruction<0x7D>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:468 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F80E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:468 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F810: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:468 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F811: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:468 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F813: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:468 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F814: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:468 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F816: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/credits_scroll_frame.asm:469 REP #PROC_FLAGS::ACCUM8
    case 0xC0F818: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:470 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F81A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:470 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F81C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:470 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F81E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:470 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F820: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/credits_scroll_frame.asm:471 LDA @LOCAL08
    case 0xC0F822: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // src/ending/credits_scroll_frame.asm:472 TAY
    case 0xC0F824: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:473 LDA @VIRTUAL02
    case 0xC0F825: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:474 ASL
    case 0xC0F827: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:475 TAX
    case 0xC0F828: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:476 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F829: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame.asm:477 LDA #0
    case 0xC0F82B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/credits_scroll_frame.asm:478 JSL ENQUEUE_CREDITS_DMA
    case 0xC0F82D: cpu.execute_instruction<0x22>(0xC4EFC4, 4); return true;
    // src/ending/credits_scroll_frame.asm:478 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F82B.
    case 0xC0F82E: cpu.execute_instruction<0xC4>(0x0000EF, 2); return true;
    // src/ending/credits_scroll_frame.asm:478 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F82E.
    case 0xC0F830: cpu.execute_instruction<0xC4>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:480 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F831: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:480 MOVE_INT @LOCAL05, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F830.
    case 0xC0F832: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:480 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F833: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:480 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F835: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:480 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F837: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame.asm:481 DEC @VIRTUAL06
    case 0xC0F839: cpu.execute_instruction<0xC6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:482 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F83B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:482 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F83D: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:482 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F83F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:482 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F841: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/ending/credits_scroll_frame.asm:483 BRA @UNKNOWN36
    case 0xC0F843: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame.asm:486 LDA #.LOWORD(-1)
    case 0xC0F845: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/ending/credits_scroll_frame.asm:486 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0F845.
    case 0xC0F847: cpu.execute_instruction<0xFF>(0xB4E38D, 4); return true;
    // src/ending/credits_scroll_frame.asm:487 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F848: cpu.execute_instruction<0x8D>(0x00B4E3, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:489 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F84B: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:489 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F84D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:489 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F84F: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:489 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F851: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame.asm:490 INC @VIRTUAL06
    case 0xC0F853: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:491 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0F855: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:491 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0F857: cpu.execute_instruction<0x8D>(0x00B4E7, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:491 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0F85A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:491 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0F85C: cpu.execute_instruction<0x8D>(0x00B4E9, 3); return true;
    // src/ending/credits_scroll_frame.asm:493 LDA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC0F85F: cpu.execute_instruction<0xAD>(0x00B4E5, 3); return true;
    // src/ending/credits_scroll_frame.asm:494 CMP BG3_Y_POS
    case 0xC0F862: cpu.execute_instruction<0xCD>(0x00003B, 3); return true;
    // src/ending/credits_scroll_frame.asm:495 BCS @UNKNOWN38
    case 0xC0F865: cpu.execute_instruction<0xB0>(0x000033, 2); return true;
    // src/ending/credits_scroll_frame.asm:496 LDA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC0F867: cpu.execute_instruction<0xAD>(0x00B4E5, 3); return true;
    // src/ending/credits_scroll_frame.asm:497 CLC
    case 0xC0F86A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:498 ADC #8
    case 0xC0F86B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/ending/credits_scroll_frame.asm:498 ADC #8
    // Overlapping static entry reached from 0xC0F86B.
    case 0xC0F86D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/credits_scroll_frame.asm:499 STA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC0F86E: cpu.execute_instruction<0x8D>(0x00B4E5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/credits_scroll_frame.asm:500 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0F871: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x000BE8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/credits_scroll_frame.asm:500 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    // Overlapping static entry reached from 0xC0F871.
    case 0xC0F873: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/credits_scroll_frame.asm:500 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0F874: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/credits_scroll_frame.asm:500 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0F876: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/credits_scroll_frame.asm:500 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    // Overlapping static entry reached from 0xC0F876.
    case 0xC0F878: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/credits_scroll_frame.asm:500 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0F879: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/credits_scroll_frame.asm:501 LDA BG3_Y_POS
    case 0xC0F87B: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/credits_scroll_frame.asm:502 LSR
    case 0xC0F87E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:503 LSR
    case 0xC0F87F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:504 LSR
    case 0xC0F880: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:505 DEC
    case 0xC0F881: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:506 AND #$001F
    case 0xC0F882: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/ending/credits_scroll_frame.asm:506 AND #$001F
    // Overlapping static entry reached from 0xC0F882.
    case 0xC0F884: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame.asm:507 ASL
    case 0xC0F885: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:508 ASL
    case 0xC0F886: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:509 ASL
    case 0xC0F887: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:510 ASL
    case 0xC0F888: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:511 ASL
    case 0xC0F889: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:512 CLC
    case 0xC0F88A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:513 ADC #$6C00
    case 0xC0F88B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x006C00, 3); return true;
    // src/ending/credits_scroll_frame.asm:513 ADC #$6C00
    // Overlapping static entry reached from 0xC0F88B.
    case 0xC0F88D: cpu.execute_instruction<0x6C>(0x00A2A8, 3); return true;
    // src/ending/credits_scroll_frame.asm:514 TAY
    case 0xC0F88E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:515 LDX #64
    case 0xC0F88F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/ending/credits_scroll_frame.asm:515 LDX #64
    // Overlapping static entry reached from 0xC0F88F.
    case 0xC0F891: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/ending/credits_scroll_frame.asm:516 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F892: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame.asm:517 LDA #3
    case 0xC0F894: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // src/ending/credits_scroll_frame.asm:518 JSL ENQUEUE_CREDITS_DMA
    case 0xC0F896: cpu.execute_instruction<0x22>(0xC4EFC4, 4); return true;
    // src/ending/credits_scroll_frame.asm:518 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F894.
    case 0xC0F897: cpu.execute_instruction<0xC4>(0x0000EF, 2); return true;
    // src/ending/credits_scroll_frame.asm:518 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F897.
    case 0xC0F899: cpu.execute_instruction<0xC4>(0x0000AD, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0F89A: cpu.execute_instruction<0xAD>(0x00B4EB, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F899.
    case 0xC0F89B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F89B.
    case 0xC0F89C: cpu.execute_instruction<0xB4>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0F89D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F89C.
    case 0xC0F89E: cpu.execute_instruction<0x06>(0x0000AD, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0F89F: cpu.execute_instruction<0xAD>(0x00B4ED, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F89E.
    case 0xC0F8A0: cpu.execute_instruction<0xED>(0x0085B4, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0F8A2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F8A0.
    case 0xC0F8A3: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:522 CLC
    case 0xC0F8A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:523 LDA @VIRTUAL06 + fixed_point::fraction
    case 0xC0F8A5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame.asm:524 ADC #$4000
    case 0xC0F8A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x004000, 3); return true;
    // src/ending/credits_scroll_frame.asm:524 ADC #$4000
    // Overlapping static entry reached from 0xC0F8A7.
    case 0xC0F8A9: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame.asm:525 STA @VIRTUAL06 + fixed_point::fraction
    case 0xC0F8AA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame.asm:526 BCC @UNKNOWN39
    case 0xC0F8AC: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame.asm:527 INC @VIRTUAL06 + fixed_point::integer
    case 0xC0F8AE: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:529 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0F8B0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:529 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0F8B2: cpu.execute_instruction<0x8D>(0x00B4EB, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:529 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0F8B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:529 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0F8B7: cpu.execute_instruction<0x8D>(0x00B4ED, 3); return true;
    // src/ending/credits_scroll_frame.asm:530 STA BG3_Y_POS
    case 0xC0F8BA: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // src/ending/credits_scroll_frame.asm:531 JSR UNKNOWN_C0AD9F
    case 0xC0F8BD: cpu.execute_instruction<0x20>(0x00AD9F, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/credits_scroll_frame.asm:532 END_C_FUNCTION
    case 0xC0F8C0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/ending/credits_scroll_frame.asm:532 END_C_FUNCTION
    case 0xC0F8C1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/enqueue_credits_dma.asm (source_named).
bool execute_ending_enqueue_credits_dma_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/enqueue_credits_dma.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EFC4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4EFC6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4EFC7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4EFC8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4EFC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EFC9.
    case 0xC4EFCB: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4EFCC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4EFCD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:11 STY @VIRTUAL02
    case 0xC4EFCE: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/ending/enqueue_credits_dma.asm:11 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC4EFCB.
    case 0xC4EFCF: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/ending/enqueue_credits_dma.asm:12 TXY
    case 0xC4EFD0: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EFD1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/enqueue_credits_dma.asm:14 STA @LOCAL00
    case 0xC4EFD3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/enqueue_credits_dma.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC4EFD5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/enqueue_credits_dma.asm:16 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4EFD7: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/enqueue_credits_dma.asm:16 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4EFD9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/enqueue_credits_dma.asm:16 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4EFDB: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/enqueue_credits_dma.asm:16 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4EFDD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/enqueue_credits_dma.asm:17 LDA CREDITS_DMA_QUEUE_START
    case 0xC4EFDF: cpu.execute_instruction<0xAD>(0x00B4F5, 3); return true;
    // include/macros.asm:549 STA scratch
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4EFE2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:550 ASL
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4EFE4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:551 ASL
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4EFE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:552 ASL
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4EFE6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4EFE7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/ending/enqueue_credits_dma.asm:19 CLC
    case 0xC4EFE9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:20 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC4EFEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/ending/enqueue_credits_dma.asm:20 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC4EFEA.
    case 0xC4EFEC: cpu.execute_instruction<0x51>(0x0000AA, 2); return true;
    // src/ending/enqueue_credits_dma.asm:21 TAX
    case 0xC4EFED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EFEE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/enqueue_credits_dma.asm:23 LDA @LOCAL00
    case 0xC4EFF0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/ending/enqueue_credits_dma.asm:24 STA __BSS_START__,X
    case 0xC4EFF2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/enqueue_credits_dma.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC4EFF5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/enqueue_credits_dma.asm:26 TYA
    case 0xC4EFF7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:27 STA __BSS_START__+1,X
    case 0xC4EFF8: cpu.execute_instruction<0x9D>(0x000001, 3); return true;
    // src/ending/enqueue_credits_dma.asm:28 TXY
    case 0xC4EFFB: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:29 INY
    case 0xC4EFFC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:30 INY
    case 0xC4EFFD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:31 INY
    case 0xC4EFFE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/ending/enqueue_credits_dma.asm:32 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4EFFF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/ending/enqueue_credits_dma.asm:32 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4F001: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/ending/enqueue_credits_dma.asm:32 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4F004: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/ending/enqueue_credits_dma.asm:32 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4F006: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/ending/enqueue_credits_dma.asm:33 LDA @VIRTUAL02
    case 0xC4F009: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/enqueue_credits_dma.asm:34 STA __BSS_START__+7,X
    case 0xC4F00B: cpu.execute_instruction<0x9D>(0x000007, 3); return true;
    // src/ending/enqueue_credits_dma.asm:35 LDA CREDITS_DMA_QUEUE_START
    case 0xC4F00E: cpu.execute_instruction<0xAD>(0x00B4F5, 3); return true;
    // src/ending/enqueue_credits_dma.asm:36 INC
    case 0xC4F011: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:37 STA CREDITS_DMA_QUEUE_START
    case 0xC4F012: cpu.execute_instruction<0x8D>(0x00B4F5, 3); return true;
    // src/ending/enqueue_credits_dma.asm:38 AND #$007F
    case 0xC4F015: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/ending/enqueue_credits_dma.asm:38 AND #$007F
    // Overlapping static entry reached from 0xC4F015.
    case 0xC4F017: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/enqueue_credits_dma.asm:39 STA CREDITS_DMA_QUEUE_START
    case 0xC4F018: cpu.execute_instruction<0x8D>(0x00B4F5, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/enqueue_credits_dma.asm:40 END_C_FUNCTION
    case 0xC4F01B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/enqueue_credits_dma.asm:40 END_C_FUNCTION
    case 0xC4F01C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/handle_cast_scrolling.asm (source_named).
bool execute_ending_handle_cast_scrolling_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/handle_cast_scrolling.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4E51E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    case 0xC4E520: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    case 0xC4E521: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    case 0xC4E522: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E522.
    case 0xC4E524: cpu.execute_instruction<0xFF>(0xFEA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    case 0xC4E525: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    case 0xC4E526: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x007FFE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E526.
    case 0xC4E528: cpu.execute_instruction<0x7F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    case 0xC4E529: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    case 0xC4E52B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E528.
    case 0xC4E52C: cpu.execute_instruction<0x7F>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E52B.
    case 0xC4E52D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    case 0xC4E52E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/handle_cast_scrolling.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC4E530: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/ending/handle_cast_scrolling.asm:10 ASL
    case 0xC4E533: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:11 TAX
    case 0xC4E534: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:12 LDY ENTITY_ABS_Y_TABLE,X
    case 0xC4E535: cpu.execute_instruction<0xBC>(0x000BCA, 3); return true;
    // src/ending/handle_cast_scrolling.asm:13 STY BG3_Y_POS
    case 0xC4E538: cpu.execute_instruction<0x8C>(0x00003B, 3); return true;
    // src/ending/handle_cast_scrolling.asm:14 TXA
    case 0xC4E53B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:15 CLC
    case 0xC4E53C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:16 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC4E53D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/ending/handle_cast_scrolling.asm:16 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC4E53D.
    case 0xC4E53F: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/ending/handle_cast_scrolling.asm:17 TAX
    case 0xC4E540: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:18 LDA __BSS_START__,X
    case 0xC4E541: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/handle_cast_scrolling.asm:19 STY @VIRTUAL02
    case 0xC4E544: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/ending/handle_cast_scrolling.asm:20 CMP @VIRTUAL02
    case 0xC4E546: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/ending/handle_cast_scrolling.asm:21 BCS @UNKNOWN0
    case 0xC4E548: cpu.execute_instruction<0xB0>(0x000037, 2); return true;
    // src/ending/handle_cast_scrolling.asm:22 CLC
    case 0xC4E54A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:23 ADC #8
    case 0xC4E54B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/ending/handle_cast_scrolling.asm:23 ADC #8
    // Overlapping static entry reached from 0xC4E54B.
    case 0xC4E54D: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/ending/handle_cast_scrolling.asm:24 STA __BSS_START__,X
    case 0xC4E54E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/handle_cast_scrolling.asm:25 LDA BG3_Y_POS
    case 0xC4E551: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/handle_cast_scrolling.asm:26 LSR
    case 0xC4E554: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:27 LSR
    case 0xC4E555: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:28 LSR
    case 0xC4E556: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:29 DEC
    case 0xC4E557: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:30 AND #$001F
    case 0xC4E558: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/ending/handle_cast_scrolling.asm:30 AND #$001F
    // Overlapping static entry reached from 0xC4E558.
    case 0xC4E55A: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/ending/handle_cast_scrolling.asm:31 ASL
    case 0xC4E55B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:32 ASL
    case 0xC4E55C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:33 ASL
    case 0xC4E55D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:34 ASL
    case 0xC4E55E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:35 ASL
    case 0xC4E55F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:36 CLC
    case 0xC4E560: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:37 ADC #VRAM::CAST_TILEMAP
    case 0xC4E561: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/ending/handle_cast_scrolling.asm:37 ADC #VRAM::CAST_TILEMAP
    // Overlapping static entry reached from 0xC4E561.
    case 0xC4E563: cpu.execute_instruction<0x7C>(0x001285, 3); return true;
    // src/ending/handle_cast_scrolling.asm:38 STA @LOCAL01
    case 0xC4E564: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/handle_cast_scrolling.asm:39 LDA #0
    case 0xC4E566: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/handle_cast_scrolling.asm:39 LDA #0
    // Overlapping static entry reached from 0xC4E566.
    case 0xC4E568: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/ending/handle_cast_scrolling.asm:40 STA [@VIRTUAL06]
    case 0xC4E569: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/handle_cast_scrolling.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E56B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/handle_cast_scrolling.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E56D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/handle_cast_scrolling.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E56F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/handle_cast_scrolling.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E571: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/handle_cast_scrolling.asm:42 LDA @LOCAL01
    case 0xC4E573: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/handle_cast_scrolling.asm:43 TAY
    case 0xC4E575: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:44 LDX #64
    case 0xC4E576: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/ending/handle_cast_scrolling.asm:44 LDX #64
    // Overlapping static entry reached from 0xC4E576.
    case 0xC4E578: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/ending/handle_cast_scrolling.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E579: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/handle_cast_scrolling.asm:46 LDA #3
    case 0xC4E57B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // src/ending/handle_cast_scrolling.asm:47 JSL PREPARE_VRAM_COPY
    case 0xC4E57D: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/ending/handle_cast_scrolling.asm:47 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4E57B.
    case 0xC4E57E: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/ending/handle_cast_scrolling.asm:47 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4E57E.
    case 0xC4E580: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/handle_cast_scrolling.asm:49 END_C_FUNCTION
    case 0xC4E581: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/handle_cast_scrolling.asm:49 END_C_FUNCTION
    case 0xC4E582: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/initialize_credits_scene.asm (source_named).
bool execute_ending_initialize_credits_scene_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/initialize_credits_scene.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4F07D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4F07F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4F080: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4F081: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4F081.
    case 0xC4F083: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4F084: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4F085: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F085.
    case 0xC4F087: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4F088: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4F08A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F08A.
    case 0xC4F08C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4F08D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/initialize_credits_scene.asm:9 JSL UNKNOWN_C08726
    case 0xC4F08F: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/ending/initialize_credits_scene.asm:10 JSL UNKNOWN_C021E6
    case 0xC4F093: cpu.execute_instruction<0x22>(0xC021E6, 4); return true;
    // src/ending/initialize_credits_scene.asm:11 STZ CREDITS_CURRENT_ROW
    case 0xC4F097: cpu.execute_instruction<0x9C>(0x00B4F7, 3); return true;
    // src/ending/initialize_credits_scene.asm:12 STZ CREDITS_DMA_QUEUE_START
    case 0xC4F09A: cpu.execute_instruction<0x9C>(0x00B4F5, 3); return true;
    // src/ending/initialize_credits_scene.asm:13 STZ CREDITS_DMA_QUEUE_END
    case 0xC4F09D: cpu.execute_instruction<0x9C>(0x00B4F3, 3); return true;
    // src/ending/initialize_credits_scene.asm:14 LDY #VRAM::CREDITS_LAYER_1_TILES
    case 0xC4F0A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/initialize_credits_scene.asm:14 LDY #VRAM::CREDITS_LAYER_1_TILES
    // Overlapping static entry reached from 0xC4F0A0.
    case 0xC4F0A2: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/ending/initialize_credits_scene.asm:15 LDX #VRAM::CREDITS_LAYER_1_TILEMAP
    case 0xC4F0A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // src/ending/initialize_credits_scene.asm:15 LDX #VRAM::CREDITS_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xC4F0A3.
    case 0xC4F0A5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/initialize_credits_scene.asm:16 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC4F0A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/initialize_credits_scene.asm:16 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC4F0A6.
    case 0xC4F0A8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/initialize_credits_scene.asm:17 JSL SET_BG1_VRAM_LOCATION
    case 0xC4F0A9: cpu.execute_instruction<0x22>(0xC08D9E, 4); return true;
    // src/ending/initialize_credits_scene.asm:18 LDY #VRAM::CREDITS_LAYER_2_TILES
    case 0xC4F0AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/ending/initialize_credits_scene.asm:18 LDY #VRAM::CREDITS_LAYER_2_TILES
    // Overlapping static entry reached from 0xC4F0AD.
    case 0xC4F0AF: cpu.execute_instruction<0x20>(0x0000A2, 3); return true;
    // src/ending/initialize_credits_scene.asm:19 LDX #VRAM::CREDITS_LAYER_2_TILEMAP
    case 0xC4F0B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007000, 3); return true;
    // src/ending/initialize_credits_scene.asm:19 LDX #VRAM::CREDITS_LAYER_2_TILEMAP
    // Overlapping static entry reached from 0xC4F0B0.
    case 0xC4F0B2: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/ending/initialize_credits_scene.asm:20 LDA #BG_TILEMAP_SIZE::BOTH
    case 0xC4F0B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/ending/initialize_credits_scene.asm:20 LDA #BG_TILEMAP_SIZE::BOTH
    // Overlapping static entry reached from 0xC4F0B2.
    case 0xC4F0B4: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/ending/initialize_credits_scene.asm:20 LDA #BG_TILEMAP_SIZE::BOTH
    // Overlapping static entry reached from 0xC4F0B3.
    case 0xC4F0B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/initialize_credits_scene.asm:21 JSL SET_BG2_VRAM_LOCATION
    case 0xC4F0B6: cpu.execute_instruction<0x22>(0xC08DDE, 4); return true;
    // src/ending/initialize_credits_scene.asm:22 LDY #VRAM::CREDITS_LAYER_3_TILES
    case 0xC4F0BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/ending/initialize_credits_scene.asm:22 LDY #VRAM::CREDITS_LAYER_3_TILES
    // Overlapping static entry reached from 0xC4F0BA.
    case 0xC4F0BC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/ending/initialize_credits_scene.asm:23 LDX #VRAM::CREDITS_LAYER_3_TILEMAP
    case 0xC4F0BD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x006C00, 3); return true;
    // src/ending/initialize_credits_scene.asm:23 LDX #VRAM::CREDITS_LAYER_3_TILEMAP
    // Overlapping static entry reached from 0xC4F0BD.
    case 0xC4F0BF: cpu.execute_instruction<0x6C>(0x0000A9, 3); return true;
    // src/ending/initialize_credits_scene.asm:24 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC4F0C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/initialize_credits_scene.asm:24 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC4F0C0.
    case 0xC4F0C2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/initialize_credits_scene.asm:25 JSL SET_BG3_VRAM_LOCATION
    case 0xC4F0C3: cpu.execute_instruction<0x22>(0xC08E1C, 4); return true;
    // src/ending/initialize_credits_scene.asm:26 LDA #$62
    case 0xC4F0C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x000062, 3); return true;
    // src/ending/initialize_credits_scene.asm:26 LDA #$62
    // Overlapping static entry reached from 0xC4F0C7.
    case 0xC4F0C9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/initialize_credits_scene.asm:27 JSL SET_OAM_SIZE
    case 0xC4F0CA: cpu.execute_instruction<0x22>(0xC08D92, 4); return true;
    // src/ending/initialize_credits_scene.asm:28 STZ BG3_X_POS
    case 0xC4F0CE: cpu.execute_instruction<0x9C>(0x000039, 3); return true;
    // src/ending/initialize_credits_scene.asm:29 STZ BG3_Y_POS
    case 0xC4F0D1: cpu.execute_instruction<0x9C>(0x00003B, 3); return true;
    // src/ending/initialize_credits_scene.asm:30 STZ BG2_Y_POS
    case 0xC4F0D4: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/ending/initialize_credits_scene.asm:31 STZ BG2_X_POS
    case 0xC4F0D7: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/ending/initialize_credits_scene.asm:32 STZ BG1_Y_POS
    case 0xC4F0DA: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/ending/initialize_credits_scene.asm:33 STZ BG1_X_POS
    case 0xC4F0DD: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/ending/initialize_credits_scene.asm:34 JSL UPDATE_SCREEN
    case 0xC4F0E0: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/ending/initialize_credits_scene.asm:35 LDA #0
    case 0xC4F0E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/initialize_credits_scene.asm:35 LDA #0
    // Overlapping static entry reached from 0xC4F0E4.
    case 0xC4F0E6: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/ending/initialize_credits_scene.asm:36 STA [@VIRTUAL06]
    case 0xC4F0E7: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0E9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0EB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0ED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0EF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4F0F1.
    case 0xC4F0F3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4F111.
    case 0xC4F0F5: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4F0F4.
    case 0xC4F0F6: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0F7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4F0F6.
    case 0xC4F0F8: cpu.execute_instruction<0x20>(0x0003A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4F0FB: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4F0F9.
    case 0xC4F0FC: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4F0FC.
    case 0xC4F0FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x000CA9, 3); return true;
    // src/ending/initialize_credits_scene.asm:38 LDA #$240C
    case 0xC4F0FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00240C, 3); return true;
    // src/ending/initialize_credits_scene.asm:38 LDA #$240C
    // Overlapping static entry reached from 0xC4F0FE.
    case 0xC4F100: cpu.execute_instruction<0x0C>(0x008724, 3); return true;
    // src/ending/initialize_credits_scene.asm:38 LDA #$240C
    // Overlapping static entry reached from 0xC4F0FF.
    case 0xC4F101: cpu.execute_instruction<0x24>(0x000087, 2); return true;
    // src/ending/initialize_credits_scene.asm:39 STA [@VIRTUAL06]
    case 0xC4F102: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/ending/initialize_credits_scene.asm:39 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4F101.
    case 0xC4F103: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F104: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F103.
    case 0xC4F105: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F106: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F105.
    case 0xC4F107: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F108: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F10A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F10C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F129.
    case 0xC4F10D: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F10C.
    case 0xC4F10E: cpu.execute_instruction<0x70>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F10F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F10E.
    case 0xC4F110: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F10F.
    case 0xC4F111: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F112: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F111.
    case 0xC4F113: cpu.execute_instruction<0x20>(0x0009A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F114: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x002209, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4F116: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F114.
    case 0xC4F117: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4F117.
    case 0xC4F119: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0001A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F11A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F119.
    case 0xC4F11B: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F11A.
    case 0xC4F11C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F11D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F11F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F11F.
    case 0xC4F121: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F122: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F124: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F124.
    case 0xC4F126: cpu.execute_instruction<0x70>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F127: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F126.
    case 0xC4F128: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F127.
    case 0xC4F129: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F12A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F129.
    case 0xC4F12B: cpu.execute_instruction<0x20>(0x000FA9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F12C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00220F, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4F12E: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F12C.
    case 0xC4F12F: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4F12F.
    case 0xC4F131: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x004AA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4F132: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x00E94A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4F131.
    case 0xC4F133: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4F132.
    case 0xC4F134: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000085, 2); else cpu.execute_instruction<0xE9>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4F135: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4F134.
    case 0xC4F136: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4F137: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4F137.
    case 0xC4F139: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4F13A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F13C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F13E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F140: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F142: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/initialize_credits_scene.asm:44 JSL DECOMP
    case 0xC4F144: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/ending/initialize_credits_scene.asm:45 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC4F148: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000220, 3); return true;
    // src/ending/initialize_credits_scene.asm:45 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4F148.
    case 0xC4F14A: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/ending/initialize_credits_scene.asm:46 STA @VIRTUAL02
    case 0xC4F14B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F14D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x00E92A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4F14D.
    case 0xC4F14F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000085, 2); else cpu.execute_instruction<0xE9>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F150: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4F14F.
    case 0xC4F151: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F152: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4F152.
    case 0xC4F154: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F155: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/initialize_credits_scene.asm:48 LDX #BPP4PALETTE_SIZE * 1
    case 0xC4F157: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/ending/initialize_credits_scene.asm:48 LDX #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4F157.
    case 0xC4F159: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/ending/initialize_credits_scene.asm:49 LDA @VIRTUAL02
    case 0xC4F15A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/initialize_credits_scene.asm:50 JSL MEMCPY16
    case 0xC4F15C: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F160: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F162: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F164: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F166: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F168: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4F168.
    case 0xC4F16A: cpu.execute_instruction<0x70>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F16B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000700, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4F16A.
    case 0xC4F16C: cpu.execute_instruction<0x00>(0x000007, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4F16B.
    case 0xC4F16D: cpu.execute_instruction<0x07>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F16E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4F16D.
    case 0xC4F16F: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F170: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4F172: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4F170.
    case 0xC4F173: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4F173.
    case 0xC4F175: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F176: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000700, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F175.
    case 0xC4F177: cpu.execute_instruction<0x00>(0x000007, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F176.
    case 0xC4F178: cpu.execute_instruction<0x07>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F179: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F178.
    case 0xC4F17A: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F17B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F17B.
    case 0xC4F17D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F17E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F180: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F180.
    case 0xC4F182: cpu.execute_instruction<0x20>(0x00E2BB, 3); return true;
    // include/macros.asm:1155 TYX
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F183: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F184: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F182.
    case 0xC4F185: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F186: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4F188: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F186.
    case 0xC4F189: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4F189.
    case 0xC4F18B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // src/ending/initialize_credits_scene.asm:53 LDA #0
    case 0xC4F18C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/initialize_credits_scene.asm:53 LDA #0
    // Overlapping static entry reached from 0xC4F18B.
    case 0xC4F18D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/initialize_credits_scene.asm:53 LDA #0
    // Overlapping static entry reached from 0xC4F18C.
    case 0xC4F18E: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/ending/initialize_credits_scene.asm:54 STA [@VIRTUAL06]
    case 0xC4F18F: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F191: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F193: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F195: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F197: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F199: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4F199.
    case 0xC4F19B: cpu.execute_instruction<0x6C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F19C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4F19C.
    case 0xC4F19E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F19F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F1A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4F1A3: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4F1A1.
    case 0xC4F1A4: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4F1A4.
    case 0xC4F1A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0028A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4F1A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x00E528, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4F1A6.
    case 0xC4F1A8: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4F1A7.
    case 0xC4F1A9: cpu.execute_instruction<0xE5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4F1AA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4F1A9.
    case 0xC4F1AB: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4F1AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4F1AC.
    case 0xC4F1AE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4F1AF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F1B1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F1B3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F1B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4F1B7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/initialize_credits_scene.asm:58 JSL DECOMP
    case 0xC4F1B9: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1BD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1BF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1C1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1C3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006200, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4F1C5.
    case 0xC4F1C7: cpu.execute_instruction<0x62>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000C00, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4F1C8.
    case 0xC4F1CA: cpu.execute_instruction<0x0C>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1CB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4F1CF: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4F1CD.
    case 0xC4F1D0: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4F1D0.
    case 0xC4F1D2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0014A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4F1D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x00E914, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4F1D2.
    case 0xC4F1D4: cpu.execute_instruction<0x14>(0x0000E9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4F1D3.
    case 0xC4F1D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000085, 2); else cpu.execute_instruction<0xE9>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4F1D6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4F1D5.
    case 0xC4F1D7: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4F1D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4F1D8.
    case 0xC4F1DA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4F1DB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/initialize_credits_scene.asm:61 LDX #BPP2PALETTE_SIZE * 2
    case 0xC4F1DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/ending/initialize_credits_scene.asm:61 LDX #BPP2PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC4F1DD.
    case 0xC4F1DF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/initialize_credits_scene.asm:62 LDA #.LOWORD(PALETTES)
    case 0xC4F1E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/ending/initialize_credits_scene.asm:62 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4F1E0.
    case 0xC4F1E2: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/ending/initialize_credits_scene.asm:63 JSL MEMCPY16
    case 0xC4F1E3: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4F1E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4F1E7.
    case 0xC4F1E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4F1EA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4F1EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4F1EC.
    case 0xC4F1EE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4F1EF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/initialize_credits_scene.asm:65 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4F1F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/ending/initialize_credits_scene.asm:65 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4F1F1.
    case 0xC4F1F3: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/ending/initialize_credits_scene.asm:66 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4F1F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/ending/initialize_credits_scene.asm:66 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4F1F3.
    case 0xC4F1F5: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/ending/initialize_credits_scene.asm:66 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4F1F4.
    case 0xC4F1F6: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/ending/initialize_credits_scene.asm:67 JSL MEMCPY16
    case 0xC4F1F7: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/ending/initialize_credits_scene.asm:67 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4F1F6.
    case 0xC4F1F8: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/ending/initialize_credits_scene.asm:67 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4F1F8.
    case 0xC4F1FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/ending/initialize_credits_scene.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F1FB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/initialize_credits_scene.asm:68 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4F1FA.
    case 0xC4F1FC: cpu.execute_instruction<0x20>(0x000E64, 3); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/ending/initialize_credits_scene.asm:69 STZ_BADOPT @LOCAL00
    case 0xC4F1FD: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/ending/initialize_credits_scene.asm:70 LDX #BPP4PALETTE_SIZE * 15
    case 0xC4F1FF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0001E0, 3); return true;
    // src/ending/initialize_credits_scene.asm:70 LDX #BPP4PALETTE_SIZE * 15
    // Overlapping static entry reached from 0xC4F1FF.
    case 0xC4F201: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/ending/initialize_credits_scene.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC4F202: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/initialize_credits_scene.asm:71 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4F201.
    case 0xC4F203: cpu.execute_instruction<0x20>(0x0002A5, 3); return true;
    // src/ending/initialize_credits_scene.asm:72 LDA @VIRTUAL02
    case 0xC4F204: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/initialize_credits_scene.asm:73 JSL MEMSET16
    case 0xC4F206: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/ending/initialize_credits_scene.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F20A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/initialize_credits_scene.asm:75 LDA #PALETTE_UPLOAD::FULL
    case 0xC4F20C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/ending/initialize_credits_scene.asm:76 STA PALETTE_UPLOAD_MODE
    case 0xC4F20E: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/ending/initialize_credits_scene.asm:76 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4F20C.
    case 0xC4F20F: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/ending/initialize_credits_scene.asm:77 LDA #$17
    case 0xC4F211: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/ending/initialize_credits_scene.asm:78 STA TM_MIRROR
    case 0xC4F213: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/ending/initialize_credits_scene.asm:78 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4F211.
    case 0xC4F214: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/initialize_credits_scene.asm:78 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4F214.
    case 0xC4F215: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/ending/initialize_credits_scene.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC4F216: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/initialize_credits_scene.asm:80 STZ CREDITS_NEXT_CREDIT_POSITION
    case 0xC4F218: cpu.execute_instruction<0x9C>(0x00B4E3, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4F21B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    // Overlapping static entry reached from 0xC4F21B.
    case 0xC4F21D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4F21E: cpu.execute_instruction<0x8D>(0x00B4EB, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4F221: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    // Overlapping static entry reached from 0xC4F221.
    case 0xC4F223: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4F224: cpu.execute_instruction<0x8D>(0x00B4ED, 3); return true;
    // src/ending/initialize_credits_scene.asm:82 LDA #7
    case 0xC4F227: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/ending/initialize_credits_scene.asm:82 LDA #7
    // Overlapping static entry reached from 0xC4F227.
    case 0xC4F229: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/initialize_credits_scene.asm:83 STA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC4F22A: cpu.execute_instruction<0x8D>(0x00B4E5, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F22D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x007DFE, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F22D.
    case 0xC4F22F: cpu.execute_instruction<0x7D>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F230: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F232: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F233: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F235: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F236: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F238: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/initialize_credits_scene.asm:85 LDX #0
    case 0xC4F23A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/initialize_credits_scene.asm:85 LDX #0
    // Overlapping static entry reached from 0xC4F23A.
    case 0xC4F23C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/ending/initialize_credits_scene.asm:86 BRA @UNKNOWN1
    case 0xC4F23D: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/ending/initialize_credits_scene.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC4F23F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/initialize_credits_scene.asm:89 LDA #0
    case 0xC4F241: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/initialize_credits_scene.asm:89 LDA #0
    // Overlapping static entry reached from 0xC4F241.
    case 0xC4F243: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/ending/initialize_credits_scene.asm:90 STA [@VIRTUAL06]
    case 0xC4F244: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/ending/initialize_credits_scene.asm:91 INC @VIRTUAL06
    case 0xC4F246: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/initialize_credits_scene.asm:92 INC @VIRTUAL06
    case 0xC4F248: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/initialize_credits_scene.asm:93 INX
    case 0xC4F24A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/initialize_credits_scene.asm:95 CPX #512
    case 0xC4F24B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000200, 3); return true;
    // src/ending/initialize_credits_scene.asm:95 CPX #512
    // Overlapping static entry reached from 0xC4F24B.
    case 0xC4F24D: cpu.execute_instruction<0x02>(0x000090, 2); return true;
    // src/ending/initialize_credits_scene.asm:96 BCC @UNKNOWN0
    case 0xC4F24E: cpu.execute_instruction<0x90>(0x0000EF, 2); return true;
    // src/ending/initialize_credits_scene.asm:97 REP #PROC_FLAGS::ACCUM8
    case 0xC4F250: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4F252: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003F, 2); else cpu.execute_instruction<0xA9>(0x00413F, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    // Overlapping static entry reached from 0xC4F252.
    case 0xC4F254: cpu.execute_instruction<0x41>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4F255: cpu.execute_instruction<0x8D>(0x00B4E7, 3); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    // Overlapping static entry reached from 0xC4F254.
    case 0xC4F256: cpu.execute_instruction<0xE7>(0x0000B4, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4F258: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    // Overlapping static entry reached from 0xC4F258.
    case 0xC4F25A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4F25B: cpu.execute_instruction<0x8D>(0x00B4E9, 3); return true;
    // src/ending/initialize_credits_scene.asm:99 JSL UNKNOWN_C08744
    case 0xC4F25E: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/initialize_credits_scene.asm:100 END_C_FUNCTION
    case 0xC4F262: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/initialize_credits_scene.asm:100 END_C_FUNCTION
    case 0xC4F263: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/is_entity_still_on_cast_screen.asm (source_named).
bool execute_ending_is_entity_still_on_cast_screen_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4ECE7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    case 0xC4ECE9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    case 0xC4ECEA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    case 0xC4ECEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4ECEB.
    case 0xC4ECED: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    case 0xC4ECEE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:8 LDA #0
    case 0xC4ECEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:8 LDA #0
    // Overlapping static entry reached from 0xC4ECEF.
    case 0xC4ECF1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:9 STA @LOCAL00
    case 0xC4ECF2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC4ECF4: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:11 ASL
    case 0xC4ECF7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:12 TAX
    case 0xC4ECF8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:13 LDA BG3_Y_POS
    case 0xC4ECF9: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:14 SEC
    case 0xC4ECFC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:15 SBC #8
    case 0xC4ECFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:15 SBC #8
    // Overlapping static entry reached from 0xC4ECFD.
    case 0xC4ECFF: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:16 CMP ENTITY_ABS_Y_TABLE,X
    case 0xC4ED00: cpu.execute_instruction<0xDD>(0x000BCA, 3); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:17 BCS @UNKNOWN0
    case 0xC4ED03: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:18 LDA #1
    case 0xC4ED05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:18 LDA #1
    // Overlapping static entry reached from 0xC4ED05.
    case 0xC4ED07: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:19 STA @LOCAL00
    case 0xC4ED08: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:21 LDA @LOCAL00
    case 0xC4ED0A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:22 END_C_FUNCTION
    case 0xC4ED0C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:22 END_C_FUNCTION
    case 0xC4ED0D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/load_cast_scene.asm (source_named).
bool execute_ending_load_cast_scene_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/load_cast_scene.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4E369: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/load_cast_scene.asm:8 END_STACK_VARS
    case 0xC4E36B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/load_cast_scene.asm:8 END_STACK_VARS
    case 0xC4E36C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/load_cast_scene.asm:8 END_STACK_VARS
    case 0xC4E36D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/load_cast_scene.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E36D.
    case 0xC4E36F: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/load_cast_scene.asm:8 END_STACK_VARS
    case 0xC4E370: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E371: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:9 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E371.
    case 0xC4E373: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E374: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E376: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:9 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E376.
    case 0xC4E378: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E379: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/load_cast_scene.asm:10 STZ ITEM_TRANSFORMATIONS_LOADED
    case 0xC4E37B: cpu.execute_instruction<0x9C>(0x009F2A, 3); return true;
    // src/ending/load_cast_scene.asm:11 LDY #0
    case 0xC4E37E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/load_cast_scene.asm:11 LDY #0
    // Overlapping static entry reached from 0xC4E37E.
    case 0xC4E380: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/ending/load_cast_scene.asm:12 LDX #1
    case 0xC4E381: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/ending/load_cast_scene.asm:12 LDX #1
    // Overlapping static entry reached from 0xC4E381.
    case 0xC4E383: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/ending/load_cast_scene.asm:13 TXA
    case 0xC4E384: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/load_cast_scene.asm:14 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4E385: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/ending/load_cast_scene.asm:15 JSL UNKNOWN_C08726
    case 0xC4E389: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/ending/load_cast_scene.asm:16 JSL UNKNOWN_C021E6
    case 0xC4E38D: cpu.execute_instruction<0x22>(0xC021E6, 4); return true;
    // src/ending/load_cast_scene.asm:17 LDA #0
    case 0xC4E391: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/load_cast_scene.asm:17 LDA #0
    // Overlapping static entry reached from 0xC4E391.
    case 0xC4E393: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/load_cast_scene.asm:18 STA @LOCAL02
    case 0xC4E394: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/ending/load_cast_scene.asm:19 BRA @UNKNOWN2
    case 0xC4E396: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/ending/load_cast_scene.asm:21 ASL
    case 0xC4E398: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/load_cast_scene.asm:22 TAX
    case 0xC4E399: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/load_cast_scene.asm:23 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC4E39A: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/ending/load_cast_scene.asm:24 CMP #.LOWORD(-1)
    case 0xC4E39D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/ending/load_cast_scene.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4E39D.
    case 0xC4E39F: cpu.execute_instruction<0xFF>(0x8A0FF0, 4); return true;
    // src/ending/load_cast_scene.asm:25 BEQ @UNKNOWN1
    case 0xC4E3A0: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/ending/load_cast_scene.asm:26 TXA
    case 0xC4E3A2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/load_cast_scene.asm:27 CLC
    case 0xC4E3A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/load_cast_scene.asm:28 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC4E3A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/ending/load_cast_scene.asm:28 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC4E3A4.
    case 0xC4E3A6: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/ending/load_cast_scene.asm:29 TAX
    case 0xC4E3A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/load_cast_scene.asm:30 LDA __BSS_START__,X
    case 0xC4E3A8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/load_cast_scene.asm:31 ORA #$8000
    case 0xC4E3AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/ending/load_cast_scene.asm:31 ORA #$8000
    // Overlapping static entry reached from 0xC4E3AB.
    case 0xC4E3AD: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/ending/load_cast_scene.asm:32 STA __BSS_START__,X
    case 0xC4E3AE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/load_cast_scene.asm:34 LDA @LOCAL02
    case 0xC4E3B1: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/ending/load_cast_scene.asm:35 INC
    case 0xC4E3B3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/load_cast_scene.asm:36 STA @LOCAL02
    case 0xC4E3B4: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/ending/load_cast_scene.asm:38 CMP #MAX_ENTITIES
    case 0xC4E3B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/ending/load_cast_scene.asm:38 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4E3B6.
    case 0xC4E3B8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/ending/load_cast_scene.asm:39 BCC @UNKNOWN0
    case 0xC4E3B9: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // src/ending/load_cast_scene.asm:40 LDX #BATTLEBG_LAYER::NONE
    case 0xC4E3BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/load_cast_scene.asm:40 LDX #BATTLEBG_LAYER::NONE
    // Overlapping static entry reached from 0xC4E3BB.
    case 0xC4E3BD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/load_cast_scene.asm:41 LDA #BATTLEBG_LAYER::UNKNOWN279
    case 0xC4E3BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000117, 3); return true;
    // src/ending/load_cast_scene.asm:41 LDA #BATTLEBG_LAYER::UNKNOWN279
    // Overlapping static entry reached from 0xC4E3BE.
    case 0xC4E3C0: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/ending/load_cast_scene.asm:42 JSL LOAD_BACKGROUND_ANIMATION
    case 0xC4E3C1: cpu.execute_instruction<0x22>(0xC47370, 4); return true;
    // src/ending/load_cast_scene.asm:42 JSL LOAD_BACKGROUND_ANIMATION
    // Overlapping static entry reached from 0xC4E3C0.
    case 0xC4E3C2: cpu.execute_instruction<0x70>(0x000073, 2); return true;
    // src/ending/load_cast_scene.asm:42 JSL LOAD_BACKGROUND_ANIMATION
    // Overlapping static entry reached from 0xC4E3C2.
    case 0xC4E3C4: cpu.execute_instruction<0xC4>(0x0000A0, 2); return true;
    // src/ending/load_cast_scene.asm:43 LDY #VRAM::CAST_TILES
    case 0xC4E3C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/load_cast_scene.asm:43 LDY #VRAM::CAST_TILES
    // Overlapping static entry reached from 0xC4E3C4.
    case 0xC4E3C6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/load_cast_scene.asm:43 LDY #VRAM::CAST_TILES
    // Overlapping static entry reached from 0xC4E3C5.
    case 0xC4E3C7: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/ending/load_cast_scene.asm:44 LDX #VRAM::CAST_TILEMAP
    case 0xC4E3C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/ending/load_cast_scene.asm:44 LDX #VRAM::CAST_TILEMAP
    // Overlapping static entry reached from 0xC4E3C8.
    case 0xC4E3CA: cpu.execute_instruction<0x7C>(0x002298, 3); return true;
    // src/ending/load_cast_scene.asm:45 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC4E3CB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/load_cast_scene.asm:46 JSL SET_BG3_VRAM_LOCATION
    case 0xC4E3CC: cpu.execute_instruction<0x22>(0xC08E1C, 4); return true;
    // src/ending/load_cast_scene.asm:47 LDA #$62
    case 0xC4E3D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x000062, 3); return true;
    // src/ending/load_cast_scene.asm:47 LDA #$62
    // Overlapping static entry reached from 0xC4E3D0.
    case 0xC4E3D2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/load_cast_scene.asm:48 JSL SET_OAM_SIZE
    case 0xC4E3D3: cpu.execute_instruction<0x22>(0xC08D92, 4); return true;
    // src/ending/load_cast_scene.asm:49 STZ BG3_X_POS
    case 0xC4E3D7: cpu.execute_instruction<0x9C>(0x000039, 3); return true;
    // src/ending/load_cast_scene.asm:50 STZ BG3_Y_POS
    case 0xC4E3DA: cpu.execute_instruction<0x9C>(0x00003B, 3); return true;
    // src/ending/load_cast_scene.asm:51 STZ BG2_Y_POS
    case 0xC4E3DD: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/ending/load_cast_scene.asm:52 STZ BG2_X_POS
    case 0xC4E3E0: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/ending/load_cast_scene.asm:52 STZ BG2_X_POS
    // Overlapping static entry reached from 0xC4E437.
    case 0xC4E3E2: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/ending/load_cast_scene.asm:53 STZ BG1_Y_POS
    case 0xC4E3E3: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/ending/load_cast_scene.asm:54 STZ BG1_X_POS
    case 0xC4E3E6: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/ending/load_cast_scene.asm:55 JSL UPDATE_SCREEN
    case 0xC4E3E9: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/ending/load_cast_scene.asm:56 LDA #0
    case 0xC4E3ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/load_cast_scene.asm:56 LDA #0
    // Overlapping static entry reached from 0xC4E3ED.
    case 0xC4E3EF: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/ending/load_cast_scene.asm:57 STA [@VIRTUAL06]
    case 0xC4E3F0: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E3F2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E3F4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E3F6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E3F8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E3FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4E3FA.
    case 0xC4E3FC: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E3FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4E3FD.
    case 0xC4E3FF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E400: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E402: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4E404: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4E402.
    case 0xC4E405: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4E405.
    case 0xC4E407: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/ending/load_cast_scene.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E408: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/load_cast_scene.asm:59 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4E425.
    case 0xC4E409: cpu.execute_instruction<0x20>(0x00FFA9, 3); return true;
    // src/ending/load_cast_scene.asm:60 LDA #$00FF
    case 0xC4E40A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008DFF, 3); return true;
    // src/ending/load_cast_scene.asm:61 STA FORCE_NORMAL_FONT_FOR_LENGTH_CALCULATIONS
    case 0xC4E40C: cpu.execute_instruction<0x8D>(0x00B4CE, 3); return true;
    // src/ending/load_cast_scene.asm:61 STA FORCE_NORMAL_FONT_FOR_LENGTH_CALCULATIONS
    // Overlapping static entry reached from 0xC4E40A.
    case 0xC4E40D: cpu.execute_instruction<0xCE>(0x00C2B4, 3); return true;
    // src/ending/load_cast_scene.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC4E40F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/load_cast_scene.asm:62 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4E40D.
    case 0xC4E410: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:63 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E411: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:63 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E411.
    case 0xC4E413: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:63 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E414: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:63 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E416: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:63 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E416.
    case 0xC4E418: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:63 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E419: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/load_cast_scene.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E41B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/load_cast_scene.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E41D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/load_cast_scene.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E41F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/load_cast_scene.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E421: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/load_cast_scene.asm:65 LDX #4096
    case 0xC4E423: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // src/ending/load_cast_scene.asm:65 LDX #4096
    // Overlapping static entry reached from 0xC4E423.
    case 0xC4E425: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // src/ending/load_cast_scene.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E426: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/load_cast_scene.asm:66 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4E425.
    case 0xC4E427: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/ending/load_cast_scene.asm:67 LDA #0
    case 0xC4E428: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/load_cast_scene.asm:68 JSL MEMSET24
    case 0xC4E42A: cpu.execute_instruction<0x22>(0xC08F15, 4); return true;
    // src/ending/load_cast_scene.asm:68 JSL MEMSET24
    // Overlapping static entry reached from 0xC4E428.
    case 0xC4E42B: cpu.execute_instruction<0x15>(0x00008F, 2); return true;
    // src/ending/load_cast_scene.asm:68 JSL MEMSET24
    // Overlapping static entry reached from 0xC4E42B.
    case 0xC4E42D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00E1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    case 0xC4E42E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x00D6E1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    // Overlapping static entry reached from 0xC4E42D.
    case 0xC4E42F: cpu.execute_instruction<0xE1>(0x0000D6, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    // Overlapping static entry reached from 0xC4E42E.
    case 0xC4E430: cpu.execute_instruction<0xD6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    case 0xC4E431: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    // Overlapping static entry reached from 0xC4E430.
    case 0xC4E432: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    case 0xC4E433: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    // Overlapping static entry reached from 0xC4E433.
    case 0xC4E435: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    case 0xC4E436: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:70 LOADPTR UNKNOWN_E1D6E1, @LOCAL00
    // Overlapping static entry reached from 0xC4E3C2.
    case 0xC4E437: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4E438: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    // Overlapping static entry reached from 0xC4E437.
    case 0xC4E439: cpu.execute_instruction<0x00>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    // Overlapping static entry reached from 0xC4E438.
    case 0xC4E43A: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4E43B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4E43D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    // Overlapping static entry reached from 0xC4E43D.
    case 0xC4E43F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:71 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4E440: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/load_cast_scene.asm:72 JSL DECOMP
    case 0xC4E442: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:73 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4E446: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x00D835, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:73 LOADPTR CAST_NAMES_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4E446.
    case 0xC4E448: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:73 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4E449: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:73 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4E44B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:73 LOADPTR CAST_NAMES_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4E44B.
    case 0xC4E44D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:73 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4E44E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    case 0xC4E450: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000600, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    // Overlapping static entry reached from 0xC4E450.
    case 0xC4E452: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    case 0xC4E453: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    // Overlapping static entry reached from 0xC4E452.
    case 0xC4E454: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    case 0xC4E455: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    // Overlapping static entry reached from 0xC4E454.
    case 0xC4E456: cpu.execute_instruction<0x7F>(0x148500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    // Overlapping static entry reached from 0xC4E455.
    case 0xC4E457: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:74 LOADPTR BUFFER + $600, @LOCAL01
    case 0xC4E458: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/load_cast_scene.asm:75 JSL DECOMP
    case 0xC4E45A: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/ending/load_cast_scene.asm:76 JSL PREPARE_DYNAMIC_CAST_NAME_TEXT
    case 0xC4E45E: cpu.execute_instruction<0x22>(0xC4E7AE, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E462: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E464: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E466: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E468: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E46A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    // Overlapping static entry reached from 0xC4E46A.
    case 0xC4E46C: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E46D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x008000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    // Overlapping static entry reached from 0xC4E46D.
    case 0xC4E46F: cpu.execute_instruction<0x80>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E470: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E472: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene.asm:77 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 32768, 0
    case 0xC4E473: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/ending/load_cast_scene.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E477: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/load_cast_scene.asm:79 STZ FORCE_NORMAL_FONT_FOR_LENGTH_CALCULATIONS
    case 0xC4E479: cpu.execute_instruction<0x9C>(0x00B4CE, 3); return true;
    // src/ending/load_cast_scene.asm:80 JSL UNKNOWN_C47F87
    case 0xC4E47C: cpu.execute_instruction<0x22>(0xC47F87, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:82 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4E480: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x00D815, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:82 LOADPTR UNKNOWN_E1D815, @LOCAL00
    // Overlapping static entry reached from 0xC4E480.
    case 0xC4E482: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:82 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4E483: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:82 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4E485: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:82 LOADPTR UNKNOWN_E1D815, @LOCAL00
    // Overlapping static entry reached from 0xC4E485.
    case 0xC4E487: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:82 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4E488: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/load_cast_scene.asm:83 LDX #BPP2PALETTE_SIZE * 4
    case 0xC4E48A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/ending/load_cast_scene.asm:83 LDX #BPP2PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC4E48A.
    case 0xC4E48C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/load_cast_scene.asm:84 LDA #.LOWORD(PALETTES)
    case 0xC4E48D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/ending/load_cast_scene.asm:84 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4E48D.
    case 0xC4E48F: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/ending/load_cast_scene.asm:85 JSL MEMCPY16
    case 0xC4E490: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:86 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4E494: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:86 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4E494.
    case 0xC4E496: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:86 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4E497: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:86 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4E499: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:86 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4E499.
    case 0xC4E49B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:86 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4E49C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/load_cast_scene.asm:87 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4E49E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/ending/load_cast_scene.asm:87 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4E49E.
    case 0xC4E4A0: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/ending/load_cast_scene.asm:88 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4E4A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/ending/load_cast_scene.asm:88 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4E4A0.
    case 0xC4E4A2: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/ending/load_cast_scene.asm:88 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4E4A1.
    case 0xC4E4A3: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/ending/load_cast_scene.asm:89 JSL MEMCPY16
    case 0xC4E4A4: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/ending/load_cast_scene.asm:89 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4E4A3.
    case 0xC4E4A5: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/ending/load_cast_scene.asm:89 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4E4A5.
    case 0xC4E4A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00E6A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4E4A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x00E4E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4E4A7.
    case 0xC4E4A9: cpu.execute_instruction<0xE6>(0x0000E4, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4E4A8.
    case 0xC4E4AA: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4E4AB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4E4AA.
    case 0xC4E4AC: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4E4AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4E4AD.
    case 0xC4E4AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:90 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4E4B0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4E4B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4E4B2.
    case 0xC4E4B4: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4E4B5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4E4B4.
    case 0xC4E4B6: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4E4B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4E4B6.
    case 0xC4E4B8: cpu.execute_instruction<0x7F>(0x148500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4E4B7.
    case 0xC4E4B9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene.asm:91 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4E4BA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/load_cast_scene.asm:92 JSL DECOMP
    case 0xC4E4BC: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/ending/load_cast_scene.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E4C0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/load_cast_scene.asm:94 LDA #PALETTE_UPLOAD::FULL
    case 0xC4E4C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/ending/load_cast_scene.asm:95 STA PALETTE_UPLOAD_MODE
    case 0xC4E4C4: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/ending/load_cast_scene.asm:95 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4E4C2.
    case 0xC4E4C5: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/ending/load_cast_scene.asm:96 LDA #$14
    case 0xC4E4C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x008D14, 3); return true;
    // src/ending/load_cast_scene.asm:97 STA TM_MIRROR
    case 0xC4E4C9: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/ending/load_cast_scene.asm:97 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4E4C7.
    case 0xC4E4CA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/load_cast_scene.asm:97 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4E4CA.
    case 0xC4E4CB: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/ending/load_cast_scene.asm:98 REP #PROC_FLAGS::ACCUM8
    case 0xC4E4CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/load_cast_scene.asm:99 STZ UNKNOWN_7EB4CF
    case 0xC4E4CE: cpu.execute_instruction<0x9C>(0x00B4CF, 3); return true;
    // src/ending/load_cast_scene.asm:100 STZ CAST_TILE_OFFSET
    case 0xC4E4D1: cpu.execute_instruction<0x9C>(0x00B4D1, 3); return true;
    // src/ending/load_cast_scene.asm:101 JSL UNKNOWN_C08744
    case 0xC4E4D4: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/load_cast_scene.asm:102 END_C_FUNCTION
    case 0xC4E4D8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/load_cast_scene.asm:102 END_C_FUNCTION
    case 0xC4E4D9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/play_cast_scene.asm (source_named).
bool execute_ending_play_cast_scene_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/play_cast_scene.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4ED0E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4ED10: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4ED11: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4ED12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4ED12.
    case 0xC4ED14: cpu.execute_instruction<0xFF>(0x69225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4ED15: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:7 JSL LOAD_CAST_SCENE
    case 0xC4ED16: cpu.execute_instruction<0x22>(0xC4E369, 4); return true;
    // src/ending/play_cast_scene.asm:7 JSL LOAD_CAST_SCENE
    // Overlapping static entry reached from 0xC4ED14.
    case 0xC4ED18: cpu.execute_instruction<0xE3>(0x0000C4, 2); return true;
    // src/ending/play_cast_scene.asm:8 JSL OAM_CLEAR
    case 0xC4ED1A: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/ending/play_cast_scene.asm:9 LDX #1
    case 0xC4ED1E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/ending/play_cast_scene.asm:9 LDX #1
    // Overlapping static entry reached from 0xC4ED1E.
    case 0xC4ED20: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/ending/play_cast_scene.asm:10 TXA
    case 0xC4ED21: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:11 JSL FADE_IN
    case 0xC4ED22: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/ending/play_cast_scene.asm:12 LDY #0
    case 0xC4ED26: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/play_cast_scene.asm:12 LDY #0
    // Overlapping static entry reached from 0xC4ED26.
    case 0xC4ED28: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/ending/play_cast_scene.asm:13 TYX
    case 0xC4ED29: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:14 LDA #EVENT_SCRIPT::EVENT_801
    case 0xC4ED2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000021, 2); else cpu.execute_instruction<0xA9>(0x000321, 3); return true;
    // src/ending/play_cast_scene.asm:14 LDA #EVENT_SCRIPT::EVENT_801
    // Overlapping static entry reached from 0xC4ED2A.
    case 0xC4ED2C: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/ending/play_cast_scene.asm:15 JSL INIT_ENTITY_WIPE
    case 0xC4ED2D: cpu.execute_instruction<0x22>(0xC092F5, 4); return true;
    // src/ending/play_cast_scene.asm:15 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC4ED2C.
    case 0xC4ED2E: cpu.execute_instruction<0xF5>(0x000092, 2); return true;
    // src/ending/play_cast_scene.asm:15 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC4ED2E.
    case 0xC4ED30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009C, 2); else cpu.execute_instruction<0xC0>(0x00419C, 3); return true;
    // src/ending/play_cast_scene.asm:16 STZ ACTIONSCRIPT_STATE
    case 0xC4ED31: cpu.execute_instruction<0x9C>(0x009641, 3); return true;
    // src/ending/play_cast_scene.asm:16 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC4ED30.
    case 0xC4ED32: cpu.execute_instruction<0x41>(0x000096, 2); return true;
    // src/ending/play_cast_scene.asm:16 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC4ED30.
    case 0xC4ED33: cpu.execute_instruction<0x96>(0x000080, 2); return true;
    // src/ending/play_cast_scene.asm:17 BRA @UNKNOWN1
    case 0xC4ED34: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/ending/play_cast_scene.asm:17 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC4ED33.
    case 0xC4ED35: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:19 JSL UNKNOWN_C1004E
    case 0xC4ED36: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/ending/play_cast_scene.asm:20 JSL UNKNOWN_C2DB3F
    case 0xC4ED3A: cpu.execute_instruction<0x22>(0xC2DB3F, 4); return true;
    // src/ending/play_cast_scene.asm:22 LDA ACTIONSCRIPT_STATE
    case 0xC4ED3E: cpu.execute_instruction<0xAD>(0x009641, 3); return true;
    // src/ending/play_cast_scene.asm:22 LDA ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC4EDB8.
    case 0xC4ED3F: cpu.execute_instruction<0x41>(0x000096, 2); return true;
    // src/ending/play_cast_scene.asm:23 BEQ @UNKNOWN0
    case 0xC4ED41: cpu.execute_instruction<0xF0>(0x0000F3, 2); return true;
    // src/ending/play_cast_scene.asm:24 LDY #0
    case 0xC4ED43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/play_cast_scene.asm:24 LDY #0
    // Overlapping static entry reached from 0xC4ED43.
    case 0xC4ED45: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/ending/play_cast_scene.asm:25 LDX #1
    case 0xC4ED46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/ending/play_cast_scene.asm:25 LDX #1
    // Overlapping static entry reached from 0xC4ED46.
    case 0xC4ED48: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/ending/play_cast_scene.asm:26 TXA
    case 0xC4ED49: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:27 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4ED4A: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/ending/play_cast_scene.asm:28 LDX #0
    case 0xC4ED4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/play_cast_scene.asm:28 LDX #0
    // Overlapping static entry reached from 0xC4ED4E.
    case 0xC4ED50: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/ending/play_cast_scene.asm:29 STX @LOCAL00
    case 0xC4ED51: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/ending/play_cast_scene.asm:30 BRA @UNKNOWN4
    case 0xC4ED53: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/ending/play_cast_scene.asm:32 TXA
    case 0xC4ED55: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:33 ASL
    case 0xC4ED56: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:34 TAX
    case 0xC4ED57: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:35 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC4ED58: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/ending/play_cast_scene.asm:36 CMP #EVENT_SCRIPT::EVENT_801
    case 0xC4ED5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000021, 2); else cpu.execute_instruction<0xC9>(0x000321, 3); return true;
    // src/ending/play_cast_scene.asm:36 CMP #EVENT_SCRIPT::EVENT_801
    // Overlapping static entry reached from 0xC4ED5B.
    case 0xC4ED5D: cpu.execute_instruction<0x03>(0x0000D0, 2); return true;
    // src/ending/play_cast_scene.asm:37 BNE @UNKNOWN3
    case 0xC4ED5E: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/ending/play_cast_scene.asm:37 BNE @UNKNOWN3
    // Overlapping static entry reached from 0xC4ED5D.
    case 0xC4ED5F: cpu.execute_instruction<0x07>(0x0000A6, 2); return true;
    // src/ending/play_cast_scene.asm:38 LDX @LOCAL00
    case 0xC4ED60: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/ending/play_cast_scene.asm:38 LDX @LOCAL00
    // Overlapping static entry reached from 0xC4ED5F.
    case 0xC4ED61: cpu.execute_instruction<0x0E>(0x00228A, 3); return true;
    // src/ending/play_cast_scene.asm:39 TXA
    case 0xC4ED62: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:40 JSL UNKNOWN_C09C35
    case 0xC4ED63: cpu.execute_instruction<0x22>(0xC09C35, 4); return true;
    // src/ending/play_cast_scene.asm:40 JSL UNKNOWN_C09C35
    // Overlapping static entry reached from 0xC4ED61.
    case 0xC4ED64: cpu.execute_instruction<0x35>(0x00009C, 2); return true;
    // src/ending/play_cast_scene.asm:40 JSL UNKNOWN_C09C35
    // Overlapping static entry reached from 0xC4ED64.
    case 0xC4ED66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A6, 2); else cpu.execute_instruction<0xC0>(0x000EA6, 3); return true;
    // src/ending/play_cast_scene.asm:42 LDX @LOCAL00
    case 0xC4ED67: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/ending/play_cast_scene.asm:42 LDX @LOCAL00
    // Overlapping static entry reached from 0xC4ED66.
    case 0xC4ED68: cpu.execute_instruction<0x0E>(0x0086E8, 3); return true;
    // src/ending/play_cast_scene.asm:43 INX
    case 0xC4ED69: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:44 STX @LOCAL00
    case 0xC4ED6A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/ending/play_cast_scene.asm:44 STX @LOCAL00
    // Overlapping static entry reached from 0xC4ED68.
    case 0xC4ED6B: cpu.execute_instruction<0x0E>(0x001EE0, 3); return true;
    // src/ending/play_cast_scene.asm:46 CPX #MAX_ENTITIES
    case 0xC4ED6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/ending/play_cast_scene.asm:46 CPX #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4ED6C.
    case 0xC4ED6E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/ending/play_cast_scene.asm:47 BCC @UNKNOWN2
    case 0xC4ED6F: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/ending/play_cast_scene.asm:48 LDA #23
    case 0xC4ED71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/ending/play_cast_scene.asm:48 LDA #23
    // Overlapping static entry reached from 0xC4ED71.
    case 0xC4ED73: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/play_cast_scene.asm:49 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC4ED74: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/ending/play_cast_scene.asm:50 LDA #24
    case 0xC4ED77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/ending/play_cast_scene.asm:50 LDA #24
    // Overlapping static entry reached from 0xC4ED77.
    case 0xC4ED79: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/play_cast_scene.asm:51 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC4ED7A: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/ending/play_cast_scene.asm:52 LDY #0
    case 0xC4ED7D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/play_cast_scene.asm:52 LDY #0
    // Overlapping static entry reached from 0xC4ED7D.
    case 0xC4ED7F: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/ending/play_cast_scene.asm:53 TYX
    case 0xC4ED80: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:54 LDA #EVENT_SCRIPT::EVENT_001
    case 0xC4ED81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/play_cast_scene.asm:54 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xC4ED81.
    case 0xC4ED83: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_cast_scene.asm:55 JSL INIT_ENTITY
    case 0xC4ED84: cpu.execute_instruction<0x22>(0xC09321, 4); return true;
    // src/ending/play_cast_scene.asm:56 JSL UNKNOWN_C02D29
    case 0xC4ED88: cpu.execute_instruction<0x22>(0xC02D29, 4); return true;
    // src/ending/play_cast_scene.asm:57 JSL UNKNOWN_C03A24
    case 0xC4ED8C: cpu.execute_instruction<0x22>(0xC03A24, 4); return true;
    // src/ending/play_cast_scene.asm:58 JSL UNKNOWN_C08726
    case 0xC4ED90: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/ending/play_cast_scene.asm:59 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4ED94: cpu.execute_instruction<0x22>(0xC4800B, 4); return true;
    // src/ending/play_cast_scene.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC4ED98: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/play_cast_scene.asm:61 LDA #$17
    case 0xC4ED9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/ending/play_cast_scene.asm:62 STA TM_MIRROR
    case 0xC4ED9C: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/ending/play_cast_scene.asm:62 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4ED9A.
    case 0xC4ED9D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:62 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4ED9D.
    case 0xC4ED9E: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/ending/play_cast_scene.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC4ED9F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/play_cast_scene.asm:64 END_C_FUNCTION
    case 0xC4EDA1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/play_cast_scene.asm:64 END_C_FUNCTION
    case 0xC4EDA2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/play_credits.asm (source_named).
bool execute_ending_play_credits_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/play_credits.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4F554: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4F556: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4F557: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4F558: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4F558.
    case 0xC4F55A: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4F55B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/play_credits.asm:9 LDA #1
    case 0xC4F55C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/play_credits.asm:9 LDA #1
    // Overlapping static entry reached from 0xC4F55C.
    case 0xC4F55E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/play_credits.asm:10 STA DISABLED_TRANSITIONS
    case 0xC4F55F: cpu.execute_instruction<0x8D>(0x00B4B6, 3); return true;
    // src/ending/play_credits.asm:11 JSL INITIALIZE_CREDITS_SCENE
    case 0xC4F562: cpu.execute_instruction<0x22>(0xC4F07D, 4); return true;
    // src/ending/play_credits.asm:12 JSL OAM_CLEAR
    case 0xC4F566: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/ending/play_credits.asm:13 LDX #2
    case 0xC4F56A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/ending/play_credits.asm:13 LDX #2
    // Overlapping static entry reached from 0xC4F56A.
    case 0xC4F56C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/play_credits.asm:14 LDA #1
    case 0xC4F56D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/play_credits.asm:14 LDA #1
    // Overlapping static entry reached from 0xC4F56D.
    case 0xC4F56F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:15 JSL FADE_IN
    case 0xC4F570: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/ending/play_credits.asm:16 JSL COUNT_PHOTO_FLAGS
    case 0xC4F574: cpu.execute_instruction<0x22>(0xC4F433, 4); return true;
    // src/ending/play_credits.asm:17 CMP #0
    case 0xC4F578: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/ending/play_credits.asm:17 CMP #0
    // Overlapping static entry reached from 0xC4F578.
    case 0xC4F57A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/play_credits.asm:18 BEQ @UNKNOWN0
    case 0xC4F57B: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/ending/play_credits.asm:19 JSL COUNT_PHOTO_FLAGS
    case 0xC4F57D: cpu.execute_instruction<0x22>(0xC4F433, 4); return true;
    // src/ending/play_credits.asm:20 TAY
    case 0xC4F581: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/play_credits.asm:21 LDA #CREDITS_LENGTH
    case 0xC4F582: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B0, 2); else cpu.execute_instruction<0xA9>(0x0011B0, 3); return true;
    // src/ending/play_credits.asm:21 LDA #CREDITS_LENGTH
    // Overlapping static entry reached from 0xC4F582.
    case 0xC4F584: cpu.execute_instruction<0x11>(0x000022, 2); return true;
    // src/ending/play_credits.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC4F585: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/ending/play_credits.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC4F584.
    case 0xC4F586: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/play_credits.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC4F586.
    case 0xC4F587: cpu.execute_instruction<0x91>(0x0000C0, 2); return true;
    // src/ending/play_credits.asm:23 BRA @UNKNOWN1
    case 0xC4F589: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/ending/play_credits.asm:25 LDA #CREDITS_LENGTH
    case 0xC4F58B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B0, 2); else cpu.execute_instruction<0xA9>(0x0011B0, 3); return true;
    // src/ending/play_credits.asm:25 LDA #CREDITS_LENGTH
    // Overlapping static entry reached from 0xC4F58B.
    case 0xC4F58D: cpu.execute_instruction<0x11>(0x000085, 2); return true;
    // src/ending/play_credits.asm:27 STA @VIRTUAL04
    case 0xC4F58E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/play_credits.asm:27 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC4F58D.
    case 0xC4F58F: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/ending/play_credits.asm:28 STA @VIRTUAL02
    case 0xC4F590: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/play_credits.asm:28 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4F58F.
    case 0xC4F591: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/ending/play_credits.asm:29 LDA #.LOWORD(CREDITS_SCROLL_FRAME)
    case 0xC4F592: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00F41E, 3); return true;
    // src/ending/play_credits.asm:29 LDA #.LOWORD(CREDITS_SCROLL_FRAME)
    // Overlapping static entry reached from 0xC4F592.
    case 0xC4F594: cpu.execute_instruction<0xF4>(0x001C22, 3); return true;
    // src/ending/play_credits.asm:30 JSL SET_IRQ_CALLBACK
    case 0xC4F595: cpu.execute_instruction<0x22>(0xC0851C, 4); return true;
    // src/ending/play_credits.asm:30 JSL SET_IRQ_CALLBACK
    // Overlapping static entry reached from 0xC4F594.
    case 0xC4F597: cpu.execute_instruction<0x85>(0x0000C0, 2); return true;
    // src/ending/play_credits.asm:31 LDY #0
    case 0xC4F599: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/play_credits.asm:31 LDY #0
    // Overlapping static entry reached from 0xC4F599.
    case 0xC4F59B: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/ending/play_credits.asm:32 STY @LOCAL02
    case 0xC4F59C: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/ending/play_credits.asm:33 JMP @UNKNOWN12
    case 0xC4F59E: cpu.execute_instruction<0x4C>(0x00F657, 3); return true;
    // src/ending/play_credits.asm:35 TYA
    case 0xC4F5A1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/play_credits.asm:36 JSL TRY_RENDERING_PHOTOGRAPH
    case 0xC4F5A2: cpu.execute_instruction<0x22>(0xC4F264, 4); return true;
    // src/ending/play_credits.asm:37 CMP #0
    case 0xC4F5A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/ending/play_credits.asm:37 CMP #0
    // Overlapping static entry reached from 0xC4F5A6.
    case 0xC4F5A8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/play_credits.asm:38 BEQL @UNKNOWN11
    case 0xC4F5A9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/play_credits.asm:38 BEQL @UNKNOWN11
    case 0xC4F5AB: cpu.execute_instruction<0x4C>(0x00F652, 3); return true;
    // src/ending/play_credits.asm:39 LDX #$FFFF
    case 0xC4F5AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/ending/play_credits.asm:39 LDX #$FFFF
    // Overlapping static entry reached from 0xC4F5AE.
    case 0xC4F5B0: cpu.execute_instruction<0xFF>(0x0040A9, 4); return true;
    // src/ending/play_credits.asm:40 LDA #64
    case 0xC4F5B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/ending/play_credits.asm:40 LDA #64
    // Overlapping static entry reached from 0xC4F5B1.
    case 0xC4F5B3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:41 JSL UNKNOWN_C496E7
    case 0xC4F5B4: cpu.execute_instruction<0x22>(0xC496E7, 4); return true;
    // src/ending/play_credits.asm:43 LDX #64
    case 0xC4F5B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/ending/play_credits.asm:43 LDX #64
    // Overlapping static entry reached from 0xC4F5B8.
    case 0xC4F5BA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/ending/play_credits.asm:44 STX @LOCAL01
    case 0xC4F5BB: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/play_credits.asm:45 BRA @UNKNOWN5
    case 0xC4F5BD: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/ending/play_credits.asm:47 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC4F5BF: cpu.execute_instruction<0x22>(0xC426ED, 4); return true;
    // src/ending/play_credits.asm:48 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4F5C3: cpu.execute_instruction<0x22>(0xC4F01D, 4); return true;
    // src/ending/play_credits.asm:49 JSL UNKNOWN_C1004E
    case 0xC4F5C7: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/ending/play_credits.asm:50 LDX @LOCAL01
    case 0xC4F5CB: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/ending/play_credits.asm:51 DEX
    case 0xC4F5CD: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/ending/play_credits.asm:52 STX @LOCAL01
    case 0xC4F5CE: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/play_credits.asm:54 BNE @UNKNOWN4
    case 0xC4F5D0: cpu.execute_instruction<0xD0>(0x0000ED, 2); return true;
    // src/ending/play_credits.asm:55 JSL UNKNOWN_C49740
    case 0xC4F5D2: cpu.execute_instruction<0x22>(0xC49740, 4); return true;
    // src/ending/play_credits.asm:56 LDY @LOCAL02
    case 0xC4F5D6: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/ending/play_credits.asm:57 TYA
    case 0xC4F5D8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/play_credits.asm:58 JSL SLIDE_CREDITS_PHOTOGRAPH
    case 0xC4F5D9: cpu.execute_instruction<0x22>(0xC4F46F, 4); return true;
    // src/ending/play_credits.asm:59 BRA @UNKNOWN7
    case 0xC4F5DD: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/ending/play_credits.asm:61 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4F5DF: cpu.execute_instruction<0x22>(0xC4F01D, 4); return true;
    // src/ending/play_credits.asm:62 JSL UNKNOWN_C1004E
    case 0xC4F5E3: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/ending/play_credits.asm:64 LDA @VIRTUAL02
    case 0xC4F5E7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/play_credits.asm:65 CMP BG3_Y_POS
    case 0xC4F5E9: cpu.execute_instruction<0xCD>(0x00003B, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/ending/play_credits.asm:66 BGT @UNKNOWN6
    case 0xC4F5EC: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/ending/play_credits.asm:66 BGT @UNKNOWN6
    case 0xC4F5EE: cpu.execute_instruction<0xB0>(0x0000EF, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4F5F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    // Overlapping static entry reached from 0xC4F5F0.
    case 0xC4F5F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4F5F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4F5F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    // Overlapping static entry reached from 0xC4F5F5.
    case 0xC4F5F7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4F5F8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/play_credits.asm:68 LDX #480
    case 0xC4F5FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0001E0, 3); return true;
    // src/ending/play_credits.asm:68 LDX #480
    // Overlapping static entry reached from 0xC4F5FA.
    case 0xC4F5FC: cpu.execute_instruction<0x01>(0x0000E2, 2); return true;
    // src/ending/play_credits.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F5FD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/play_credits.asm:69 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4F5FC.
    case 0xC4F5FE: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/ending/play_credits.asm:70 LDA #0
    case 0xC4F5FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/play_credits.asm:71 JSL MEMSET24
    case 0xC4F601: cpu.execute_instruction<0x22>(0xC08F15, 4); return true;
    // src/ending/play_credits.asm:71 JSL MEMSET24
    // Overlapping static entry reached from 0xC4F5FF.
    case 0xC4F602: cpu.execute_instruction<0x15>(0x00008F, 2); return true;
    // src/ending/play_credits.asm:71 JSL MEMSET24
    // Overlapping static entry reached from 0xC4F602.
    case 0xC4F604: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x00FFA2, 3); return true;
    // src/ending/play_credits.asm:73 LDX #$FFFF
    case 0xC4F605: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/ending/play_credits.asm:73 LDX #$FFFF
    // Overlapping static entry reached from 0xC4F604.
    case 0xC4F606: cpu.execute_instruction<0xFF>(0x40A9FF, 4); return true;
    // src/ending/play_credits.asm:73 LDX #$FFFF
    // Overlapping static entry reached from 0xC4F605.
    case 0xC4F607: cpu.execute_instruction<0xFF>(0x0040A9, 4); return true;
    // src/ending/play_credits.asm:74 LDA #64
    case 0xC4F608: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/ending/play_credits.asm:74 LDA #64
    // Overlapping static entry reached from 0xC4F608.
    case 0xC4F60A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:75 JSL UNKNOWN_C496E7
    case 0xC4F60B: cpu.execute_instruction<0x22>(0xC496E7, 4); return true;
    // src/ending/play_credits.asm:76 LDX #0
    case 0xC4F60F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/play_credits.asm:76 LDX #0
    // Overlapping static entry reached from 0xC4F60F.
    case 0xC4F611: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/ending/play_credits.asm:77 STX @LOCAL01
    case 0xC4F612: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/play_credits.asm:78 BRA @UNKNOWN10
    case 0xC4F614: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/ending/play_credits.asm:80 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC4F616: cpu.execute_instruction<0x22>(0xC426ED, 4); return true;
    // src/ending/play_credits.asm:81 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4F61A: cpu.execute_instruction<0x22>(0xC4F01D, 4); return true;
    // src/ending/play_credits.asm:82 JSL UNKNOWN_C1004E
    case 0xC4F61E: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/ending/play_credits.asm:83 LDX @LOCAL01
    case 0xC4F622: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/ending/play_credits.asm:84 INX
    case 0xC4F624: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/play_credits.asm:85 STX @LOCAL01
    case 0xC4F625: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/play_credits.asm:87 CPX #64
    case 0xC4F627: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000040, 2); else cpu.execute_instruction<0xE0>(0x000040, 3); return true;
    // src/ending/play_credits.asm:87 CPX #64
    // Overlapping static entry reached from 0xC4F627.
    case 0xC4F629: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/ending/play_credits.asm:88 BCC @UNKNOWN9
    case 0xC4F62A: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/ending/play_credits.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F62C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/ending/play_credits.asm:90 STZ_BADOPT @LOCAL00
    case 0xC4F62E: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/ending/play_credits.asm:91 LDX #480
    case 0xC4F630: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0001E0, 3); return true;
    // src/ending/play_credits.asm:91 LDX #480
    // Overlapping static entry reached from 0xC4F630.
    case 0xC4F632: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/ending/play_credits.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC4F633: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/play_credits.asm:92 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4F632.
    case 0xC4F634: cpu.execute_instruction<0x20>(0x0020A9, 3); return true;
    // src/ending/play_credits.asm:93 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC4F635: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000220, 3); return true;
    // src/ending/play_credits.asm:93 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4F635.
    case 0xC4F637: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/ending/play_credits.asm:94 JSL MEMSET16
    case 0xC4F638: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/ending/play_credits.asm:95 LDA #24
    case 0xC4F63C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/ending/play_credits.asm:95 LDA #24
    // Overlapping static entry reached from 0xC4F63C.
    case 0xC4F63E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:96 JSL UNKNOWN_C0856B
    case 0xC4F63F: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/ending/play_credits.asm:97 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4F643: cpu.execute_instruction<0x22>(0xC4F01D, 4); return true;
    // src/ending/play_credits.asm:98 JSL UNKNOWN_C1004E
    case 0xC4F647: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/ending/play_credits.asm:99 LDA @VIRTUAL02
    case 0xC4F64B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/play_credits.asm:100 CLC
    case 0xC4F64D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/play_credits.asm:101 ADC @VIRTUAL04
    case 0xC4F64E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/ending/play_credits.asm:102 STA @VIRTUAL02
    case 0xC4F650: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/play_credits.asm:104 LDY @LOCAL02
    case 0xC4F652: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/ending/play_credits.asm:105 INY
    case 0xC4F654: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/play_credits.asm:106 STY @LOCAL02
    case 0xC4F655: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/ending/play_credits.asm:108 CPY #NUM_PHOTOS
    case 0xC4F657: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/ending/play_credits.asm:108 CPY #NUM_PHOTOS
    // Overlapping static entry reached from 0xC4F657.
    case 0xC4F659: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/play_credits.asm:109 BCCL @UNKNOWN2
    case 0xC4F65A: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/play_credits.asm:109 BCCL @UNKNOWN2
    case 0xC4F65C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/play_credits.asm:109 BCCL @UNKNOWN2
    case 0xC4F65E: cpu.execute_instruction<0x4C>(0x00F5A1, 3); return true;
    // src/ending/play_credits.asm:110 BRA @UNKNOWN15
    case 0xC4F661: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/ending/play_credits.asm:112 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4F663: cpu.execute_instruction<0x22>(0xC4F01D, 4); return true;
    // src/ending/play_credits.asm:113 JSL UNKNOWN_C1004E
    case 0xC4F667: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/ending/play_credits.asm:115 LDA BG3_Y_POS
    case 0xC4F66B: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/play_credits.asm:116 CMP #CREDITS_LENGTH
    case 0xC4F66E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000B0, 2); else cpu.execute_instruction<0xC9>(0x0011B0, 3); return true;
    // src/ending/play_credits.asm:116 CMP #CREDITS_LENGTH
    // Overlapping static entry reached from 0xC4F66E.
    case 0xC4F670: cpu.execute_instruction<0x11>(0x000090, 2); return true;
    // src/ending/play_credits.asm:117 BCC @UNKNOWN14
    case 0xC4F671: cpu.execute_instruction<0x90>(0x0000F0, 2); return true;
    // src/ending/play_credits.asm:117 BCC @UNKNOWN14
    // Overlapping static entry reached from 0xC4F670.
    case 0xC4F672: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/ending/play_credits.asm:118 JSL RESET_IRQ_CALLBACK
    case 0xC4F673: cpu.execute_instruction<0x22>(0xC08522, 4); return true;
    // src/ending/play_credits.asm:118 JSL RESET_IRQ_CALLBACK
    // Overlapping static entry reached from 0xC4F672.
    case 0xC4F674: cpu.execute_instruction<0x22>(0xA2C085, 4); return true;
    // src/ending/play_credits.asm:119 LDX #0
    case 0xC4F677: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/play_credits.asm:119 LDX #0
    // Overlapping static entry reached from 0xC4F674.
    case 0xC4F678: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/play_credits.asm:119 LDX #0
    // Overlapping static entry reached from 0xC4F677.
    case 0xC4F679: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/ending/play_credits.asm:120 STX @LOCAL01
    case 0xC4F67A: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/play_credits.asm:121 BRA @UNKNOWN17
    case 0xC4F67C: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/ending/play_credits.asm:123 JSL UNKNOWN_C1004E
    case 0xC4F67E: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/ending/play_credits.asm:124 LDX @LOCAL01
    case 0xC4F682: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/ending/play_credits.asm:125 INX
    case 0xC4F684: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/play_credits.asm:126 STX @LOCAL01
    case 0xC4F685: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/play_credits.asm:128 CPX #2000
    case 0xC4F687: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000D0, 2); else cpu.execute_instruction<0xE0>(0x0007D0, 3); return true;
    // src/ending/play_credits.asm:128 CPX #2000
    // Overlapping static entry reached from 0xC4F687.
    case 0xC4F689: cpu.execute_instruction<0x07>(0x000090, 2); return true;
    // src/ending/play_credits.asm:129 BCC @UNKNOWN16
    case 0xC4F68A: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // src/ending/play_credits.asm:129 BCC @UNKNOWN16
    // Overlapping static entry reached from 0xC4F689.
    case 0xC4F68B: cpu.execute_instruction<0xF2>(0x0000A0, 2); return true;
    // src/ending/play_credits.asm:130 LDY #0
    case 0xC4F68C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/play_credits.asm:130 LDY #0
    // Overlapping static entry reached from 0xC4F68B.
    case 0xC4F68D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/play_credits.asm:130 LDY #0
    // Overlapping static entry reached from 0xC4F68C.
    case 0xC4F68E: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/ending/play_credits.asm:131 LDX #2
    case 0xC4F68F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/ending/play_credits.asm:131 LDX #2
    // Overlapping static entry reached from 0xC4F68F.
    case 0xC4F691: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/play_credits.asm:132 LDA #1
    case 0xC4F692: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/play_credits.asm:132 LDA #1
    // Overlapping static entry reached from 0xC4F692.
    case 0xC4F694: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4F695: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    // Overlapping static entry reached from 0xC4F672.
    case 0xC4F696: cpu.execute_instruction<0x14>(0x000088, 2); return true;
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    // Overlapping static entry reached from 0xC4F696.
    case 0xC4F698: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x0000A2, 3); return true;
    // src/ending/play_credits.asm:134 LDX #0
    case 0xC4F699: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/play_credits.asm:134 LDX #0
    // Overlapping static entry reached from 0xC4F698.
    case 0xC4F69A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/play_credits.asm:134 LDX #0
    // Overlapping static entry reached from 0xC4F699.
    case 0xC4F69B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/play_credits.asm:135 LDA #$B3
    case 0xC4F69C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x0000B3, 3); return true;
    // src/ending/play_credits.asm:135 LDA #$B3
    // Overlapping static entry reached from 0xC4F69C.
    case 0xC4F69E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:136 JSL UNKNOWN_C4249A
    case 0xC4F69F: cpu.execute_instruction<0x22>(0xC4249A, 4); return true;
    // src/ending/play_credits.asm:137 JSL UNKNOWN_C08726
    case 0xC4F6A3: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/ending/play_credits.asm:138 JSL OVERWORLD_SETUP_VRAM
    case 0xC4F6A7: cpu.execute_instruction<0x22>(0xC00013, 4); return true;
    // src/ending/play_credits.asm:139 JSL UNKNOWN_C021E6
    case 0xC4F6AB: cpu.execute_instruction<0x22>(0xC021E6, 4); return true;
    // src/ending/play_credits.asm:140 LDA #23
    case 0xC4F6AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/ending/play_credits.asm:140 LDA #23
    // Overlapping static entry reached from 0xC4F6AF.
    case 0xC4F6B1: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/play_credits.asm:141 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC4F6B2: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/ending/play_credits.asm:142 LDA #24
    case 0xC4F6B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/ending/play_credits.asm:142 LDA #24
    // Overlapping static entry reached from 0xC4F6B5.
    case 0xC4F6B7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/play_credits.asm:143 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC4F6B8: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/ending/play_credits.asm:144 LDY #0
    case 0xC4F6BB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/play_credits.asm:144 LDY #0
    // Overlapping static entry reached from 0xC4F6BB.
    case 0xC4F6BD: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/ending/play_credits.asm:145 TYX
    case 0xC4F6BE: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/ending/play_credits.asm:146 LDA #EVENT_SCRIPT::EVENT_001
    case 0xC4F6BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/play_credits.asm:146 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xC4F6BF.
    case 0xC4F6C1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:147 JSL INIT_ENTITY
    case 0xC4F6C2: cpu.execute_instruction<0x22>(0xC09321, 4); return true;
    // src/ending/play_credits.asm:148 JSL UNKNOWN_C02D29
    case 0xC4F6C6: cpu.execute_instruction<0x22>(0xC02D29, 4); return true;
    // src/ending/play_credits.asm:149 JSL UNKNOWN_C03A24
    case 0xC4F6CA: cpu.execute_instruction<0x22>(0xC03A24, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x007DFE, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F6CE.
    case 0xC4F6D0: cpu.execute_instruction<0x7D>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6D3: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6D4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6D6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6D7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4F6D9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/play_credits.asm:151 LDX #0
    case 0xC4F6DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/play_credits.asm:151 LDX #0
    // Overlapping static entry reached from 0xC4F6DB.
    case 0xC4F6DD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/ending/play_credits.asm:152 BRA @UNKNOWN19
    case 0xC4F6DE: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/ending/play_credits.asm:154 REP #PROC_FLAGS::ACCUM8
    case 0xC4F6E0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/play_credits.asm:155 LDA #0
    case 0xC4F6E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/play_credits.asm:155 LDA #0
    // Overlapping static entry reached from 0xC4F6E2.
    case 0xC4F6E4: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/ending/play_credits.asm:156 STA [@VIRTUAL06]
    case 0xC4F6E5: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/ending/play_credits.asm:157 INC @VIRTUAL06
    case 0xC4F6E7: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/play_credits.asm:158 INC @VIRTUAL06
    case 0xC4F6E9: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/play_credits.asm:159 INX
    case 0xC4F6EB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/play_credits.asm:161 CPX #512
    case 0xC4F6EC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000200, 3); return true;
    // src/ending/play_credits.asm:161 CPX #512
    // Overlapping static entry reached from 0xC4F6EC.
    case 0xC4F6EE: cpu.execute_instruction<0x02>(0x000090, 2); return true;
    // src/ending/play_credits.asm:162 BCC @UNKNOWN18
    case 0xC4F6EF: cpu.execute_instruction<0x90>(0x0000EF, 2); return true;
    // src/ending/play_credits.asm:163 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4F6F1: cpu.execute_instruction<0x22>(0xC4800B, 4); return true;
    // src/ending/play_credits.asm:164 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F6F5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/play_credits.asm:165 LDA #$0017
    case 0xC4F6F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/ending/play_credits.asm:166 STA TM_MIRROR
    case 0xC4F6F9: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/ending/play_credits.asm:166 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4F6F7.
    case 0xC4F6FA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/play_credits.asm:166 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4F6FA.
    case 0xC4F6FB: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/ending/play_credits.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC4F6FC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/play_credits.asm:168 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    case 0xC4F6FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00DC4E, 3); return true;
    // src/ending/play_credits.asm:168 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC4F6FE.
    case 0xC4F700: cpu.execute_instruction<0xDC>(0x001C22, 3); return true;
    // src/ending/play_credits.asm:169 JSL SET_IRQ_CALLBACK
    case 0xC4F701: cpu.execute_instruction<0x22>(0xC0851C, 4); return true;
    // src/ending/play_credits.asm:170 STZ DISABLED_TRANSITIONS
    case 0xC4F705: cpu.execute_instruction<0x9C>(0x00B4B6, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/play_credits.asm:171 END_C_FUNCTION
    case 0xC4F708: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/play_credits.asm:171 END_C_FUNCTION
    case 0xC4F709: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/prepare_cast_name_tilemap.asm (source_named).
bool execute_ending_prepare_cast_name_tilemap_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EA9C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    case 0xC4EA9E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    case 0xC4EA9F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    case 0xC4EAA0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    case 0xC4EAA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EAA1.
    case 0xC4EAA3: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    case 0xC4EAA4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:8 END_STACK_VARS
    case 0xC4EAA5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap.asm:9 STX @VIRTUAL04
    case 0xC4EAA6: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:9 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC4EAA3.
    case 0xC4EAA7: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:10 STA @VIRTUAL02
    case 0xC4EAA8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4EAA7.
    case 0xC4EAA9: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:11 STA @LOCAL00
    case 0xC4EAAA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:12 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EAAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:12 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EAAC.
    case 0xC4EAAE: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:12 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EAAF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:12 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EAB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:12 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EAB1.
    case 0xC4EAB3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:12 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4EAB4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:13 TYA
    case 0xC4EAB6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap.asm:14 ASL
    case 0xC4EAB7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap.asm:15 CLC
    case 0xC4EAB8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap.asm:16 ADC @VIRTUAL06
    case 0xC4EAB9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:17 STA @VIRTUAL06
    case 0xC4EABB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:18 BRA @UNKNOWN1
    case 0xC4EABD: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:20 LDA @VIRTUAL02
    case 0xC4EABF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:21 AND #$000F
    case 0xC4EAC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/ending/prepare_cast_name_tilemap.asm:21 AND #$000F
    // Overlapping static entry reached from 0xC4EAC1.
    case 0xC4EAC3: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:22 PHA
    case 0xC4EAC4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap.asm:23 LDA @VIRTUAL02
    case 0xC4EAC5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:24 AND #$03F0
    case 0xC4EAC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x0003F0, 3); return true;
    // src/ending/prepare_cast_name_tilemap.asm:24 AND #$03F0
    // Overlapping static entry reached from 0xC4EAC7.
    case 0xC4EAC9: cpu.execute_instruction<0x03>(0x00000A, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:25 ASL
    case 0xC4EACA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap.asm:26 PLY
    case 0xC4EACB: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap.asm:27 STY @VIRTUAL02
    case 0xC4EACC: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:28 CLC
    case 0xC4EACE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap.asm:29 ADC @VIRTUAL02
    case 0xC4EACF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:29 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC454BC.
    case 0xC4EAD0: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:30 CLC
    case 0xC4EAD1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap.asm:31 ADC CAST_TILE_OFFSET
    case 0xC4EAD2: cpu.execute_instruction<0x6D>(0x00B4D1, 3); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:32 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4EAD5: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:32 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4EAD7: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:32 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4EAD9: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:32 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4EADB: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:33 STA [@VIRTUAL0A]
    case 0xC4EADD: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:34 CLC
    case 0xC4EADF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap.asm:35 ADC #16
    case 0xC4EAE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/ending/prepare_cast_name_tilemap.asm:35 ADC #16
    // Overlapping static entry reached from 0xC4EAE0.
    case 0xC4EAE2: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:36 LDY #64
    case 0xC4EAE3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000040, 3); return true;
    // src/ending/prepare_cast_name_tilemap.asm:36 LDY #64
    // Overlapping static entry reached from 0xC4EAE3.
    case 0xC4EAE5: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:37 STA [@VIRTUAL06],Y
    case 0xC4EAE6: cpu.execute_instruction<0x97>(0x000006, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:38 INC @VIRTUAL06
    case 0xC4EAE8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:39 INC @VIRTUAL06
    case 0xC4EAEA: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:40 LDA @LOCAL00
    case 0xC4EAEC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:41 STA @VIRTUAL02
    case 0xC4EAEE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:42 INC @VIRTUAL02
    case 0xC4EAF0: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:43 LDA @VIRTUAL02
    case 0xC4EAF2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:44 STA @LOCAL00
    case 0xC4EAF4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:46 LDX @VIRTUAL04
    case 0xC4EAF6: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:47 LDA @VIRTUAL04
    case 0xC4EAF8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:48 DEC
    case 0xC4EAFA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap.asm:49 STA @VIRTUAL04
    case 0xC4EAFB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:50 CPX #0
    case 0xC4EAFD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/ending/prepare_cast_name_tilemap.asm:50 CPX #0
    // Overlapping static entry reached from 0xC4EAFD.
    case 0xC4EAFF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/ending/prepare_cast_name_tilemap.asm:51 BNE @UNKNOWN0
    case 0xC4EB00: cpu.execute_instruction<0xD0>(0x0000BD, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:52 END_C_FUNCTION
    case 0xC4EB02: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/prepare_cast_name_tilemap.asm:52 END_C_FUNCTION
    case 0xC4EB03: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/prepare_dynamic_cast_name_text.asm (source_named).
bool execute_ending_prepare_dynamic_cast_name_text_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4E7AE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:13 END_STACK_VARS
    case 0xC4E7B0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:13 END_STACK_VARS
    case 0xC4E7B1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:13 END_STACK_VARS
    case 0xC4E7B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CA, 2); else cpu.execute_instruction<0x69>(0x00FFCA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E7B2.
    case 0xC4E7B4: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:13 END_STACK_VARS
    case 0xC4E7B5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:14 LDA #0
    case 0xC4E7B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:14 LDA #0
    // Overlapping static entry reached from 0xC4E7B6.
    case 0xC4E7B8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:15 STA @VIRTUAL02
    case 0xC4E7B9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:16 BRA @UNKNOWN1
    case 0xC4E7BB: cpu.execute_instruction<0x80>(0x000069, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E7BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:19 STZ @LOCAL00
    case 0xC4E7BF: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:20 LDX #16
    case 0xC4E7C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:20 LDX #16
    // Overlapping static entry reached from 0xC4E7C1.
    case 0xC4E7C3: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC4E7C4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:22 TDC
    case 0xC4E7C6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:23 CLC
    case 0xC4E7C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:24 ADC #@LOCAL02
    case 0xC4E7C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x000016, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:24 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E7C8.
    case 0xC4E7CA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:25 JSL MEMSET16
    case 0xC4E7CB: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:26 TDC
    case 0xC4E7CF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:27 CLC
    case 0xC4E7D0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:28 ADC #@LOCAL02
    case 0xC4E7D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x000016, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:28 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E7D1.
    case 0xC4E7D3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7D4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7D6: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7D7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7D9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7DA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:29 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7DC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC4E7DE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E7E0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E7E2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E7E4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E7E6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:32 LDA @VIRTUAL02
    case 0xC4E7E8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC4E7EA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4E7EA.
    case 0xC4E7EC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:34 JSL MULT168
    case 0xC4E7ED: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:35 CLC
    case 0xC4E7F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:36 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC4E7F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:36 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC4E7F2.
    case 0xC4E7F4: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7F5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7F7: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7F8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7FA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7FB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:37 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E7FD: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC4E7FF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E801: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E803: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E805: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E807: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:40 LDA #5
    case 0xC4E809: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:40 LDA #5
    // Overlapping static entry reached from 0xC4E809.
    case 0xC4E80B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:41 JSL MEMCPY24
    case 0xC4E80C: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:42 LDA @VIRTUAL02
    case 0xC4E810: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:43 ASL
    case 0xC4E812: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:44 TAX
    case 0xC4E813: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:45 LDA PARTY_MEMBER_CAST_TILE_IDS,X
    case 0xC4E814: cpu.execute_instruction<0xBF>(0xC3FDB5, 4); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:46 TAY
    case 0xC4E818: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:47 LDX #UNK_SIZE
    case 0xC4E819: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:47 LDX #UNK_SIZE
    // Overlapping static entry reached from 0xC4E819.
    case 0xC4E81B: cpu.execute_instruction<0x00>(0x00007B, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:48 TDC
    case 0xC4E81C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:49 CLC
    case 0xC4E81D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:50 ADC #@LOCAL02
    case 0xC4E81E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x000016, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:50 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E81E.
    case 0xC4E820: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:51 JSR RENDER_CAST_NAME_TEXT
    case 0xC4E821: cpu.execute_instruction<0x20>(0x00E583, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:52 INC @VIRTUAL02
    case 0xC4E824: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:54 LDA @VIRTUAL02
    case 0xC4E826: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:55 CMP #4
    case 0xC4E828: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:55 CMP #4
    // Overlapping static entry reached from 0xC4E828.
    case 0xC4E82A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:56 BCC @UNKNOWN0
    case 0xC4E82B: cpu.execute_instruction<0x90>(0x000090, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E82D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:58 STZ @LOCAL00
    case 0xC4E82F: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:59 LDX #16
    case 0xC4E831: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:59 LDX #16
    // Overlapping static entry reached from 0xC4E831.
    case 0xC4E833: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xC4E834: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:61 TDC
    case 0xC4E836: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:62 CLC
    case 0xC4E837: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:63 ADC #@LOCAL02
    case 0xC4E838: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x000016, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:63 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E838.
    case 0xC4E83A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:64 JSL MEMSET16
    case 0xC4E83B: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:65 TDC
    case 0xC4E83F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:66 CLC
    case 0xC4E840: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:67 ADC #@LOCAL02
    case 0xC4E841: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x000016, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:67 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E841.
    case 0xC4E843: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:68 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC4E844: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:68 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC4E846: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:68 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC4E847: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:68 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC4E849: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:68 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC4E84A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:68 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC4E84C: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC4E84E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:70 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E850: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:70 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E852: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:70 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E854: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:70 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E856: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E858: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E85A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E85C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E85E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E860: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x009819, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E860.
    case 0xC4E862: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E863: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E865: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E866: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E868: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E869: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:72 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4E86B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC4E86D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E86F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E871: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E873: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E875: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:75 LDA #6
    case 0xC4E877: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:75 LDA #6
    // Overlapping static entry reached from 0xC4E877.
    case 0xC4E879: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:76 JSL MEMCPY24
    case 0xC4E87A: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:77 LDY #448
    case 0xC4E87E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000C0, 2); else cpu.execute_instruction<0xA0>(0x0001C0, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:77 LDY #448
    // Overlapping static entry reached from 0xC4E87E.
    case 0xC4E880: cpu.execute_instruction<0x01>(0x0000A2, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:78 LDX #6
    case 0xC4E881: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:78 LDX #6
    // Overlapping static entry reached from 0xC4E880.
    case 0xC4E882: cpu.execute_instruction<0x06>(0x000000, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:78 LDX #6
    // Overlapping static entry reached from 0xC4E881.
    case 0xC4E883: cpu.execute_instruction<0x00>(0x00007B, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:79 TDC
    case 0xC4E884: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:80 CLC
    case 0xC4E885: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:81 ADC #@LOCAL02
    case 0xC4E886: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x000016, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:81 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E886.
    case 0xC4E888: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:82 JSR RENDER_CAST_NAME_TEXT
    case 0xC4E889: cpu.execute_instruction<0x20>(0x00E583, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:83 LOADPTR CAST_SEQUENCE_FORMATTING, @LOCAL07
    case 0xC4E88C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x002EFA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:83 LOADPTR CAST_SEQUENCE_FORMATTING, @LOCAL07
    // Overlapping static entry reached from 0xC4E88C.
    case 0xC4E88E: cpu.execute_instruction<0x2E>(0x003285, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:83 LOADPTR CAST_SEQUENCE_FORMATTING, @LOCAL07
    case 0xC4E88F: cpu.execute_instruction<0x85>(0x000032, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:83 LOADPTR CAST_SEQUENCE_FORMATTING, @LOCAL07
    case 0xC4E891: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:83 LOADPTR CAST_SEQUENCE_FORMATTING, @LOCAL07
    // Overlapping static entry reached from 0xC4E891.
    case 0xC4E893: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:83 LOADPTR CAST_SEQUENCE_FORMATTING, @LOCAL07
    case 0xC4E894: cpu.execute_instruction<0x85>(0x000034, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:84 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E896: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:84 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E898: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:84 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E89A: cpu.execute_instruction<0xA5>(0x000034, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:84 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E89C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:85 LDA #39
    case 0xC4E89E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x000027, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:85 LDA #39
    // Overlapping static entry reached from 0xC4E89E.
    case 0xC4E8A0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:86 CLC
    case 0xC4E8A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:87 ADC @VIRTUAL06
    case 0xC4E8A2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:88 STA @VIRTUAL06
    case 0xC4E8A4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:89 STA @LOCAL06
    case 0xC4E8A6: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:90 LDA @VIRTUAL06+2
    case 0xC4E8A8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:91 STA @LOCAL06+2
    case 0xC4E8AA: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:92 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8AC: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:92 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8AE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:92 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8B0: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:92 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8B2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8B4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8B6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8B8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8BA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:94 LDX #16
    case 0xC4E8BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:94 LDX #16
    // Overlapping static entry reached from 0xC4E8BC.
    case 0xC4E8BE: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:95 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E8BF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:96 LDA #0
    case 0xC4E8C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:97 JSL MEMSET24
    case 0xC4E8C3: cpu.execute_instruction<0x22>(0xC08F15, 4); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:97 JSL MEMSET24
    // Overlapping static entry reached from 0xC4E8C1.
    case 0xC4E8C4: cpu.execute_instruction<0x15>(0x00008F, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:97 JSL MEMSET24
    // Overlapping static entry reached from 0xC4E8C4.
    case 0xC4E8C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x002DA9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002D, 2); else cpu.execute_instruction<0xA9>(0x009A2D, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E8C6.
    case 0xC4E8C8: cpu.execute_instruction<0x2D>(0x00859A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E8C7.
    case 0xC4E8C9: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8CA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E8C8.
    case 0xC4E8CB: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8CC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8CD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8CF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8D0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:99 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * 1) + char_struct::name, @VIRTUAL06
    case 0xC4E8D2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC4E8D4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:101 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4E8D6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:101 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4E8D8: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:101 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4E8DA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:101 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4E8DC: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:102 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8DE: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:102 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8E0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:102 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8E2: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:102 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E8E4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8E6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8E8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8EA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E8EC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:104 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E8EE: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:104 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E8F0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:104 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E8F2: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:104 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E8F4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E8F6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E8F8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E8FA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E8FC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:106 LDA #5
    case 0xC4E8FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:106 LDA #5
    // Overlapping static entry reached from 0xC4E8FE.
    case 0xC4E900: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:107 JSL MEMCPY24
    case 0xC4E901: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E905: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E907: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E909: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E90B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E90D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E90F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E911: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E913: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    case 0xC4E915: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000096, 2); else cpu.execute_instruction<0xA9>(0x00E796, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    // Overlapping static entry reached from 0xC4E915.
    case 0xC4E917: cpu.execute_instruction<0xE7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    case 0xC4E918: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    // Overlapping static entry reached from 0xC4E917.
    case 0xC4E919: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    case 0xC4E91A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    // Overlapping static entry reached from 0xC4E919.
    case 0xC4E91B: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    // Overlapping static entry reached from 0xC4E91A.
    case 0xC4E91C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:110 LOADPTR CHARACTER_GUARDIAN_TEXT_1, @LOCAL01
    case 0xC4E91D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:111 JSL STRCAT
    case 0xC4E91F: cpu.execute_instruction<0x22>(0xC07C8A, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:112 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E923: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:112 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E925: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:112 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E927: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:112 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E929: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:113 LDA [@VIRTUAL06]
    case 0xC4E92B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:114 TAY
    case 0xC4E92D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:115 STY @LOCAL04
    case 0xC4E92E: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:116 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E930: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:116 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E932: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:116 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E934: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:116 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E936: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:117 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E938: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:118 LDY #2
    case 0xC4E93A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:118 LDY #2
    // Overlapping static entry reached from 0xC4E93A.
    case 0xC4E93C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:119 LDA [@VIRTUAL06],Y
    case 0xC4E93D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xC4E93F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:121 AND #$00FF
    case 0xC4E941: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:121 AND #$00FF
    // Overlapping static entry reached from 0xC4E941.
    case 0xC4E943: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:122 TAX
    case 0xC4E944: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:123 TDC
    case 0xC4E945: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:124 CLC
    case 0xC4E946: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:125 ADC #@LOCAL02
    case 0xC4E947: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x000016, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:125 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E947.
    case 0xC4E949: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:126 LDY @LOCAL04
    case 0xC4E94A: cpu.execute_instruction<0xA4>(0x000028, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:127 JSR RENDER_CAST_NAME_TEXT
    case 0xC4E94C: cpu.execute_instruction<0x20>(0x00E583, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:128 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E94F: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:128 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E951: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:128 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E953: cpu.execute_instruction<0xA5>(0x000034, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:128 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E955: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:129 LDA #36
    case 0xC4E957: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:129 LDA #36
    // Overlapping static entry reached from 0xC4E957.
    case 0xC4E959: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:130 CLC
    case 0xC4E95A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:131 ADC @VIRTUAL06
    case 0xC4E95B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:132 STA @VIRTUAL06
    case 0xC4E95D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:133 STA @LOCAL06
    case 0xC4E95F: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:134 LDA @VIRTUAL06+2
    case 0xC4E961: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:135 STA @LOCAL06+2
    case 0xC4E963: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:136 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E965: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:136 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E967: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:136 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E969: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:136 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E96B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:137 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E96D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:137 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E96F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:137 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E971: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:137 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E973: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:138 LDX #16
    case 0xC4E975: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:138 LDX #16
    // Overlapping static entry reached from 0xC4E975.
    case 0xC4E977: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:139 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E978: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:140 LDA #0
    case 0xC4E97A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:141 JSL MEMSET24
    case 0xC4E97C: cpu.execute_instruction<0x22>(0xC08F15, 4); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:141 JSL MEMSET24
    // Overlapping static entry reached from 0xC4E97A.
    case 0xC4E97D: cpu.execute_instruction<0x15>(0x00008F, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:141 JSL MEMSET24
    // Overlapping static entry reached from 0xC4E97D.
    case 0xC4E97F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x000AA5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:143 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E980: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:143 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E97F.
    case 0xC4E981: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:143 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E982: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:143 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E984: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:143 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E986: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E988: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E98A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E98C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:144 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E98E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:145 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E990: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:145 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E992: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:145 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E994: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:145 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4E996: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:146 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E998: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:146 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E99A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:146 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E99C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:146 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E99E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:147 LDA #5
    case 0xC4E9A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:147 LDA #5
    // Overlapping static entry reached from 0xC4E9A0.
    case 0xC4E9A2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:148 JSL MEMCPY24
    case 0xC4E9A3: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:150 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E9A7: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:150 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E9A9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:150 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E9AB: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:150 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E9AD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E9AF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E9B1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E9B3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E9B5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    case 0xC4E9B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x00E79D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    // Overlapping static entry reached from 0xC4E9B7.
    case 0xC4E9B9: cpu.execute_instruction<0xE7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    case 0xC4E9BA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    // Overlapping static entry reached from 0xC4E9B9.
    case 0xC4E9BB: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    case 0xC4E9BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    // Overlapping static entry reached from 0xC4E9BB.
    case 0xC4E9BD: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    // Overlapping static entry reached from 0xC4E9BC.
    case 0xC4E9BE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:152 LOADPTR CHARACTER_GUARDIAN_TEXT_2, @LOCAL01
    case 0xC4E9BF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:153 JSL STRCAT
    case 0xC4E9C1: cpu.execute_instruction<0x22>(0xC07C8A, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:154 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9C5: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:154 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9C7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:154 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9C9: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:154 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9CB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:155 LDA [@VIRTUAL06]
    case 0xC4E9CD: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:156 TAY
    case 0xC4E9CF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:157 STY @LOCAL04
    case 0xC4E9D0: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:158 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9D2: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:158 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9D4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:158 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9D6: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:158 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4E9D8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:159 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E9DA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:160 LDY #2
    case 0xC4E9DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:160 LDY #2
    // Overlapping static entry reached from 0xC4E9DC.
    case 0xC4E9DE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:161 LDA [@VIRTUAL06],Y
    case 0xC4E9DF: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:162 REP #PROC_FLAGS::ACCUM8
    case 0xC4E9E1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:163 AND #$00FF
    case 0xC4E9E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:163 AND #$00FF
    // Overlapping static entry reached from 0xC4E9E3.
    case 0xC4E9E5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:164 TAX
    case 0xC4E9E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:165 TDC
    case 0xC4E9E7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:166 CLC
    case 0xC4E9E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:167 ADC #@LOCAL02
    case 0xC4E9E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x000016, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:167 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4E9E9.
    case 0xC4E9EB: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:168 LDY @LOCAL04
    case 0xC4E9EC: cpu.execute_instruction<0xA4>(0x000028, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:169 JSR RENDER_CAST_NAME_TEXT
    case 0xC4E9EE: cpu.execute_instruction<0x20>(0x00E583, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:170 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E9F1: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:170 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E9F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:170 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E9F5: cpu.execute_instruction<0xA5>(0x000034, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:170 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E9F7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:171 LDA #108
    case 0xC4E9F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006C, 2); else cpu.execute_instruction<0xA9>(0x00006C, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:171 LDA #108
    // Overlapping static entry reached from 0xC4E9F9.
    case 0xC4E9FB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:172 CLC
    case 0xC4E9FC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:173 ADC @VIRTUAL06
    case 0xC4E9FD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:174 STA @VIRTUAL06
    case 0xC4E9FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:175 STA @LOCAL06
    case 0xC4EA01: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:176 LDA @VIRTUAL06+2
    case 0xC4EA03: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:177 STA @LOCAL06+2
    case 0xC4EA05: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:178 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA07: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:178 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA09: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:178 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA0B: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:178 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA0D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:179 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA0F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:179 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA11: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:179 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA13: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:179 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA15: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:180 LDX #16
    case 0xC4EA17: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:180 LDX #16
    // Overlapping static entry reached from 0xC4EA17.
    case 0xC4EA19: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EA1A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:182 LDA #0
    case 0xC4EA1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:183 JSL MEMSET24
    case 0xC4EA1E: cpu.execute_instruction<0x22>(0xC08F15, 4); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:183 JSL MEMSET24
    // Overlapping static entry reached from 0xC4EA1C.
    case 0xC4EA1F: cpu.execute_instruction<0x15>(0x00008F, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:183 JSL MEMSET24
    // Overlapping static entry reached from 0xC4EA1F.
    case 0xC4EA21: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x000AA5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:185 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA22: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:185 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EA21.
    case 0xC4EA23: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:185 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA24: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:185 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA26: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:185 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA28: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA2A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA2C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA2E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA30: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EB, 2); else cpu.execute_instruction<0xA9>(0x009AEB, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    // Overlapping static entry reached from 0xC4EA32.
    case 0xC4EA34: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA35: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA37: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA38: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA3A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA3B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:187 PROMOTENEARPTR PARTY_CHARACTERS + (.SIZEOF(char_struct) * (PARTY_MEMBER::POO - 1)), @VIRTUAL06
    case 0xC4EA3D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:188 REP #PROC_FLAGS::ACCUM8
    case 0xC4EA3F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:189 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4EA41: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:189 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4EA43: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:189 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4EA45: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:189 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4EA47: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:190 LDA #5
    case 0xC4EA49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:190 LDA #5
    // Overlapping static entry reached from 0xC4EA49.
    case 0xC4EA4B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:191 JSL MEMCPY24
    case 0xC4EA4C: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:192 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA50: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:192 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA52: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:192 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA54: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:192 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4EA56: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:193 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA58: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:193 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA5A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:193 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA5C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:193 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EA5E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    case 0xC4EA60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A4, 2); else cpu.execute_instruction<0xA9>(0x00E7A4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    // Overlapping static entry reached from 0xC4EA60.
    case 0xC4EA62: cpu.execute_instruction<0xE7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    case 0xC4EA63: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    // Overlapping static entry reached from 0xC4EA62.
    case 0xC4EA64: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    case 0xC4EA65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    // Overlapping static entry reached from 0xC4EA64.
    case 0xC4EA66: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    // Overlapping static entry reached from 0xC4EA65.
    case 0xC4EA67: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:194 LOADPTR CHARACTER_GUARDIAN_TEXT_3, @LOCAL01
    case 0xC4EA68: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:195 JSL STRCAT
    case 0xC4EA6A: cpu.execute_instruction<0x22>(0xC07C8A, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:196 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4EA6E: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:196 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4EA70: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:196 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4EA72: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:196 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4EA74: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:197 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4EA76: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:197 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4EA78: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:197 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4EA7A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:197 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4EA7C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:198 LDA [@VIRTUAL0A]
    case 0xC4EA7E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:199 TAY
    case 0xC4EA80: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:200 STY @LOCAL03
    case 0xC4EA81: cpu.execute_instruction<0x84>(0x000026, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:201 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EA83: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:202 LDY #2
    case 0xC4EA85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:202 LDY #2
    // Overlapping static entry reached from 0xC4EA85.
    case 0xC4EA87: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:203 LDA [@VIRTUAL06],Y
    case 0xC4EA88: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:204 REP #PROC_FLAGS::ACCUM8
    case 0xC4EA8A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:205 AND #$00FF
    case 0xC4EA8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:205 AND #$00FF
    // Overlapping static entry reached from 0xC4EA8C.
    case 0xC4EA8E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:206 TAX
    case 0xC4EA8F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:207 TDC
    case 0xC4EA90: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:208 CLC
    case 0xC4EA91: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:209 ADC #@LOCAL02
    case 0xC4EA92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000016, 2); else cpu.execute_instruction<0x69>(0x000016, 3); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:209 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC4EA92.
    case 0xC4EA94: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:210 LDY @LOCAL03
    case 0xC4EA95: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/ending/prepare_dynamic_cast_name_text.asm:211 JSR RENDER_CAST_NAME_TEXT
    case 0xC4EA97: cpu.execute_instruction<0x20>(0x00E583, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:212 END_C_FUNCTION
    case 0xC4EA9A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/prepare_dynamic_cast_name_text.asm:212 END_C_FUNCTION
    case 0xC4EA9B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/print_cast_name.asm (source_named).
bool execute_ending_print_cast_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/print_cast_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EBAD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    case 0xC4EBAF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    case 0xC4EBB0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    case 0xC4EBB1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    case 0xC4EBB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EBB2.
    case 0xC4EBB4: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    case 0xC4EBB5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    case 0xC4EBB6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/print_cast_name.asm:11 STY @VIRTUAL04
    case 0xC4EBB7: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/ending/print_cast_name.asm:11 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC4EBB4.
    case 0xC4EBB8: cpu.execute_instruction<0x04>(0x000048, 2); return true;
    // src/ending/print_cast_name.asm:12 PHA
    case 0xC4EBB9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/ending/print_cast_name.asm:13 LDA @VIRTUAL04
    case 0xC4EBBA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/print_cast_name.asm:14 STA @LOCAL01
    case 0xC4EBBC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/print_cast_name.asm:15 PLA
    case 0xC4EBBE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/print_cast_name.asm:16 STX @VIRTUAL02
    case 0xC4EBBF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/ending/print_cast_name.asm:17 STA @LOCAL00
    case 0xC4EBC1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/print_cast_name.asm:18 LOADPTR CAST_SEQUENCE_FORMATTING, @VIRTUAL06
    case 0xC4EBC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x002EFA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/print_cast_name.asm:18 LOADPTR CAST_SEQUENCE_FORMATTING, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EBC3.
    case 0xC4EBC5: cpu.execute_instruction<0x2E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/print_cast_name.asm:18 LOADPTR CAST_SEQUENCE_FORMATTING, @VIRTUAL06
    case 0xC4EBC6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name.asm:18 LOADPTR CAST_SEQUENCE_FORMATTING, @VIRTUAL06
    case 0xC4EBC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name.asm:18 LOADPTR CAST_SEQUENCE_FORMATTING, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EBC8.
    case 0xC4EBCA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/print_cast_name.asm:18 LOADPTR CAST_SEQUENCE_FORMATTING, @VIRTUAL06
    case 0xC4EBCB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/print_cast_name.asm:19 LDA @LOCAL00
    case 0xC4EBCD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/ending/print_cast_name.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4EBCF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/ending/print_cast_name.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4EBD1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/ending/print_cast_name.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4EBD2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/ending/print_cast_name.asm:21 CLC
    case 0xC4EBD4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/print_cast_name.asm:22 ADC @VIRTUAL06
    case 0xC4EBD5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/print_cast_name.asm:23 STA @VIRTUAL06
    case 0xC4EBD7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/print_cast_name.asm:24 STA @VIRTUAL0A
    case 0xC4EBD9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/ending/print_cast_name.asm:25 LDA @VIRTUAL06+2
    case 0xC4EBDB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/print_cast_name.asm:26 STA @VIRTUAL0A+2
    case 0xC4EBDD: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/ending/print_cast_name.asm:27 INC @VIRTUAL0A
    case 0xC4EBDF: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/ending/print_cast_name.asm:28 INC @VIRTUAL0A
    case 0xC4EBE1: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/ending/print_cast_name.asm:29 LDY @VIRTUAL02
    case 0xC4EBE3: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/ending/print_cast_name.asm:30 LDA [@VIRTUAL0A]
    case 0xC4EBE5: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/ending/print_cast_name.asm:31 AND #$00FF
    case 0xC4EBE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/print_cast_name.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC4EBE7.
    case 0xC4EBE9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/ending/print_cast_name.asm:32 TAX
    case 0xC4EBEA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/print_cast_name.asm:33 LDA [@VIRTUAL06]
    case 0xC4EBEB: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/print_cast_name.asm:34 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4EBED: cpu.execute_instruction<0x22>(0xC4EA9C, 4); return true;
    // src/ending/print_cast_name.asm:35 LDA [@VIRTUAL0A]
    case 0xC4EBF1: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/ending/print_cast_name.asm:36 AND #$00FF
    case 0xC4EBF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/print_cast_name.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC4EBF3.
    case 0xC4EBF5: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/ending/print_cast_name.asm:37 TAY
    case 0xC4EBF6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/print_cast_name.asm:38 LDA @LOCAL01
    case 0xC4EBF7: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/ending/print_cast_name.asm:39 STA @VIRTUAL04
    case 0xC4EBF9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/print_cast_name.asm:40 LDX @VIRTUAL04
    case 0xC4EBFB: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/ending/print_cast_name.asm:41 LDA @VIRTUAL02
    case 0xC4EBFD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/print_cast_name.asm:42 JSL COPY_CAST_NAME_TILEMAP
    case 0xC4EBFF: cpu.execute_instruction<0x22>(0xC4EB04, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/print_cast_name.asm:43 END_C_FUNCTION
    case 0xC4EC03: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/print_cast_name.asm:43 END_C_FUNCTION
    case 0xC4EC04: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/print_cast_name_entity_var0.asm (source_named).
bool execute_ending_print_cast_name_entity_var0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EC52: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4EC54: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4EC55: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4EC56: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4EC57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EC57.
    case 0xC4EC59: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4EC5A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4EC5B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:66 STX @LOCAL00
    case 0xC4EC5C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:66 STX @LOCAL00
    // Overlapping static entry reached from 0xC4EC59.
    case 0xC4EC5D: cpu.execute_instruction<0x0E>(0x0042AD, 3); return true;
    // src/ending/print_cast_name_entity_var0.asm:67 LDA CURRENT_ENTITY_SLOT
    case 0xC4EC5E: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/ending/print_cast_name_entity_var0.asm:67 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4EC5D.
    case 0xC4EC60: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:68 ASL
    case 0xC4EC61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:69 TAX
    case 0xC4EC62: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:70 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4EC63: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/ending/print_cast_name_entity_var0.asm:71 LDX @LOCAL00
    case 0xC4EC66: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:72 JSL PRINT_CAST_NAME
    case 0xC4EC68: cpu.execute_instruction<0x22>(0xC4EBAD, 4); return true;
    // src/ending/print_cast_name_entity_var0.asm:74 PLD
    case 0xC4EC6C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:75 RTL
    case 0xC4EC6D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/print_cast_name_party.asm (source_named).
bool execute_ending_print_cast_name_party_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/print_cast_name_party.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EC05: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4EC07: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4EC08: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4EC09: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4EC0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EC0A.
    case 0xC4EC0C: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4EC0D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4EC0E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/print_cast_name_party.asm:47 STY @VIRTUAL04
    case 0xC4EC0F: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/ending/print_cast_name_party.asm:47 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC4EC0C.
    case 0xC4EC10: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/ending/print_cast_name_party.asm:48 STX @VIRTUAL02
    case 0xC4EC11: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/ending/print_cast_name_party.asm:48 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4EC10.
    case 0xC4EC12: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/ending/print_cast_name_party.asm:49 CMP #7
    case 0xC4EC13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/ending/print_cast_name_party.asm:49 CMP #7
    // Overlapping static entry reached from 0xC4EC13.
    case 0xC4EC15: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/print_cast_name_party.asm:50 BEQ @UNKNOWN0
    case 0xC4EC16: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/ending/print_cast_name_party.asm:51 LDY @VIRTUAL02
    case 0xC4EC18: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/ending/print_cast_name_party.asm:52 LDX #UNK_SIZE
    case 0xC4EC1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/ending/print_cast_name_party.asm:52 LDX #UNK_SIZE
    // Overlapping static entry reached from 0xC4EC1A.
    case 0xC4EC1C: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/ending/print_cast_name_party.asm:53 STX @LOCAL00
    case 0xC4EC1D: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/ending/print_cast_name_party.asm:54 DEC
    case 0xC4EC1F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/ending/print_cast_name_party.asm:55 ASL
    case 0xC4EC20: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/print_cast_name_party.asm:56 TAX
    case 0xC4EC21: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/print_cast_name_party.asm:57 LDA PARTY_MEMBER_CAST_TILE_IDS,X
    case 0xC4EC22: cpu.execute_instruction<0xBF>(0xC3FDB5, 4); return true;
    // src/ending/print_cast_name_party.asm:58 LDX @LOCAL00
    case 0xC4EC26: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/ending/print_cast_name_party.asm:59 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4EC28: cpu.execute_instruction<0x22>(0xC4EA9C, 4); return true;
    // src/ending/print_cast_name_party.asm:60 LDY #UNK_SIZE
    case 0xC4EC2C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/ending/print_cast_name_party.asm:60 LDY #UNK_SIZE
    // Overlapping static entry reached from 0xC4EC2C.
    case 0xC4EC2E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/ending/print_cast_name_party.asm:61 LDX @VIRTUAL04
    case 0xC4EC2F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/ending/print_cast_name_party.asm:62 LDA @VIRTUAL02
    case 0xC4EC31: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/print_cast_name_party.asm:63 JSL COPY_CAST_NAME_TILEMAP
    case 0xC4EC33: cpu.execute_instruction<0x22>(0xC4EB04, 4); return true;
    // src/ending/print_cast_name_party.asm:64 BRA @UNKNOWN1
    case 0xC4EC37: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/ending/print_cast_name_party.asm:66 LDY @VIRTUAL02
    case 0xC4EC39: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/ending/print_cast_name_party.asm:67 LDX #6
    case 0xC4EC3B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/ending/print_cast_name_party.asm:67 LDX #6
    // Overlapping static entry reached from 0xC4EC3B.
    case 0xC4EC3D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/print_cast_name_party.asm:68 LDA #448
    case 0xC4EC3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0001C0, 3); return true;
    // src/ending/print_cast_name_party.asm:68 LDA #448
    // Overlapping static entry reached from 0xC4EC3E.
    case 0xC4EC40: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/ending/print_cast_name_party.asm:69 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4EC41: cpu.execute_instruction<0x22>(0xC4EA9C, 4); return true;
    // src/ending/print_cast_name_party.asm:69 JSL PREPARE_CAST_NAME_TILEMAP
    // Overlapping static entry reached from 0xC4EC40.
    case 0xC4EC42: cpu.execute_instruction<0x9C>(0x00C4EA, 3); return true;
    // src/ending/print_cast_name_party.asm:70 LDY #6
    case 0xC4EC45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/ending/print_cast_name_party.asm:70 LDY #6
    // Overlapping static entry reached from 0xC4EC45.
    case 0xC4EC47: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/ending/print_cast_name_party.asm:71 LDX @VIRTUAL04
    case 0xC4EC48: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/ending/print_cast_name_party.asm:72 LDA @VIRTUAL02
    case 0xC4EC4A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/print_cast_name_party.asm:73 JSL COPY_CAST_NAME_TILEMAP
    case 0xC4EC4C: cpu.execute_instruction<0x22>(0xC4EB04, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/print_cast_name_party.asm:76 END_C_FUNCTION
    case 0xC4EC50: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/print_cast_name_party.asm:76 END_C_FUNCTION
    case 0xC4EC51: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/process_credits_dma_queue.asm (source_named).
bool execute_ending_process_credits_dma_queue_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/process_credits_dma_queue.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4F01D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    case 0xC4F01F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    case 0xC4F020: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    case 0xC4F021: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4F021.
    case 0xC4F023: cpu.execute_instruction<0xFF>(0xF5AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    case 0xC4F024: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:9 LDA CREDITS_DMA_QUEUE_START
    case 0xC4F025: cpu.execute_instruction<0xAD>(0x00B4F5, 3); return true;
    // src/ending/process_credits_dma_queue.asm:9 LDA CREDITS_DMA_QUEUE_START
    // Overlapping static entry reached from 0xC4F023.
    case 0xC4F027: cpu.execute_instruction<0xB4>(0x0000CD, 2); return true;
    // src/ending/process_credits_dma_queue.asm:10 CMP CREDITS_DMA_QUEUE_END
    case 0xC4F028: cpu.execute_instruction<0xCD>(0x00B4F3, 3); return true;
    // src/ending/process_credits_dma_queue.asm:10 CMP CREDITS_DMA_QUEUE_END
    // Overlapping static entry reached from 0xC4F027.
    case 0xC4F029: cpu.execute_instruction<0xF3>(0x0000B4, 2); return true;
    // src/ending/process_credits_dma_queue.asm:11 BEQ @RETURN
    case 0xC4F02B: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/ending/process_credits_dma_queue.asm:12 LDA CREDITS_DMA_QUEUE_END
    case 0xC4F02D: cpu.execute_instruction<0xAD>(0x00B4F3, 3); return true;
    // include/macros.asm:549 STA scratch
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4F030: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:550 ASL
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4F032: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:551 ASL
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4F033: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:552 ASL
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4F034: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4F035: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/ending/process_credits_dma_queue.asm:14 CLC
    case 0xC4F037: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:15 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC4F038: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/ending/process_credits_dma_queue.asm:15 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC4F038.
    case 0xC4F03A: cpu.execute_instruction<0x51>(0x000085, 2); return true;
    // src/ending/process_credits_dma_queue.asm:16 STA @LOCAL02
    case 0xC4F03B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/process_credits_dma_queue.asm:16 STA @LOCAL02
    // Overlapping static entry reached from 0xC4F03A.
    case 0xC4F03C: cpu.execute_instruction<0x14>(0x0000A8, 2); return true;
    // src/ending/process_credits_dma_queue.asm:17 TAY
    case 0xC4F03D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:18 INY
    case 0xC4F03E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:19 INY
    case 0xC4F03F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:20 INY
    case 0xC4F040: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/ending/process_credits_dma_queue.asm:21 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4F041: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/ending/process_credits_dma_queue.asm:21 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4F044: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/ending/process_credits_dma_queue.asm:21 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4F046: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/ending/process_credits_dma_queue.asm:21 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4F049: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/process_credits_dma_queue.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F04B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/process_credits_dma_queue.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F04D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/process_credits_dma_queue.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F04F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/process_credits_dma_queue.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F051: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/process_credits_dma_queue.asm:23 LDA @LOCAL02
    case 0xC4F053: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/ending/process_credits_dma_queue.asm:24 TAX
    case 0xC4F055: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:25 LDY __BSS_START__+7,X
    case 0xC4F056: cpu.execute_instruction<0xBC>(0x000007, 3); return true;
    // src/ending/process_credits_dma_queue.asm:26 TAX
    case 0xC4F059: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:27 LDA __BSS_START__+1,X
    case 0xC4F05A: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/ending/process_credits_dma_queue.asm:28 TAX
    case 0xC4F05D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:29 STX @LOCAL01
    case 0xC4F05E: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/process_credits_dma_queue.asm:30 LDA @LOCAL02
    case 0xC4F060: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/ending/process_credits_dma_queue.asm:31 TAX
    case 0xC4F062: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F063: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/process_credits_dma_queue.asm:33 LDA __BSS_START__,X
    case 0xC4F065: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/process_credits_dma_queue.asm:34 LDX @LOCAL01
    case 0xC4F068: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/ending/process_credits_dma_queue.asm:35 JSL PREPARE_VRAM_COPY
    case 0xC4F06A: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/ending/process_credits_dma_queue.asm:37 LDA CREDITS_DMA_QUEUE_END
    case 0xC4F06E: cpu.execute_instruction<0xAD>(0x00B4F3, 3); return true;
    // src/ending/process_credits_dma_queue.asm:38 INC
    case 0xC4F071: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:39 STA CREDITS_DMA_QUEUE_END
    case 0xC4F072: cpu.execute_instruction<0x8D>(0x00B4F3, 3); return true;
    // src/ending/process_credits_dma_queue.asm:40 AND #$007F
    case 0xC4F075: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/ending/process_credits_dma_queue.asm:40 AND #$007F
    // Overlapping static entry reached from 0xC4F075.
    case 0xC4F077: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/process_credits_dma_queue.asm:41 STA CREDITS_DMA_QUEUE_END
    case 0xC4F078: cpu.execute_instruction<0x8D>(0x00B4F3, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/process_credits_dma_queue.asm:43 END_C_FUNCTION
    case 0xC4F07B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/process_credits_dma_queue.asm:43 END_C_FUNCTION
    case 0xC4F07C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/render_cast_name_text.asm (source_named).
bool execute_ending_render_cast_name_text_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/render_cast_name_text.asm:3 BEGIN_C_FUNCTION
    case 0xC4E583: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    case 0xC4E585: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    case 0xC4E586: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    case 0xC4E587: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    case 0xC4E588: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E588.
    case 0xC4E58A: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    case 0xC4E58B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    case 0xC4E58C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:19 STY @LOCAL09
    case 0xC4E58D: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // src/ending/render_cast_name_text.asm:19 STY @LOCAL09
    // Overlapping static entry reached from 0xC4E58A.
    case 0xC4E58E: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:20 STX @LOCAL08
    case 0xC4E58F: cpu.execute_instruction<0x86>(0x000026, 2); return true;
    // src/ending/render_cast_name_text.asm:21 STA @VIRTUAL02
    case 0xC4E591: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    case 0xC4E593: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x00F054, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    // Overlapping static entry reached from 0xC4E593.
    case 0xC4E595: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    case 0xC4E596: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    // Overlapping static entry reached from 0xC4E595.
    case 0xC4E597: cpu.execute_instruction<0x22>(0x00C3A9, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    case 0xC4E598: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    // Overlapping static entry reached from 0xC4E598.
    case 0xC4E59A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    case 0xC4E59B: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/ending/render_cast_name_text.asm:23 STZ VWF_TILE
    case 0xC4E59D: cpu.execute_instruction<0x9C>(0x009E25, 3); return true;
    // src/ending/render_cast_name_text.asm:24 STZ VWF_X
    case 0xC4E5A0: cpu.execute_instruction<0x9C>(0x009E23, 3); return true;
    // src/ending/render_cast_name_text.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E5A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/render_cast_name_text.asm:26 LDA #<-1
    case 0xC4E5A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/ending/render_cast_name_text.asm:27 STA @LOCAL00
    case 0xC4E5A7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/render_cast_name_text.asm:27 STA @LOCAL00
    // Overlapping static entry reached from 0xC4E5A5.
    case 0xC4E5A8: cpu.execute_instruction<0x0E>(0x0040A2, 3); return true;
    // src/ending/render_cast_name_text.asm:28 LDX #32 * 26
    case 0xC4E5A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000340, 3); return true;
    // src/ending/render_cast_name_text.asm:28 LDX #32 * 26
    // Overlapping static entry reached from 0xC4E5A9.
    case 0xC4E5AB: cpu.execute_instruction<0x03>(0x0000C2, 2); return true;
    // src/ending/render_cast_name_text.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC4E5AC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/render_cast_name_text.asm:29 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4E5AB.
    case 0xC4E5AD: cpu.execute_instruction<0x20>(0x0092A9, 3); return true;
    // src/ending/render_cast_name_text.asm:30 LDA #.LOWORD(VWF_BUFFER)
    case 0xC4E5AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // src/ending/render_cast_name_text.asm:30 LDA #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC4E5AE.
    case 0xC4E5B0: cpu.execute_instruction<0x34>(0x000022, 2); return true;
    // src/ending/render_cast_name_text.asm:31 JSL MEMSET16
    case 0xC4E5B1: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/ending/render_cast_name_text.asm:31 JSL MEMSET16
    // Overlapping static entry reached from 0xC4E5B0.
    case 0xC4E5B2: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/ending/render_cast_name_text.asm:32 STZ TEXT_RENDER_STATE + 2
    case 0xC4E5B5: cpu.execute_instruction<0x9C>(0x009654, 3); return true;
    // src/ending/render_cast_name_text.asm:33 STZ TEXT_RENDER_STATE
    case 0xC4E5B8: cpu.execute_instruction<0x9C>(0x009652, 3); return true;
    // src/ending/render_cast_name_text.asm:34 LDA @VIRTUAL02
    case 0xC4E5BB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E5BD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/render_cast_name_text.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E5BF: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/render_cast_name_text.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E5C0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/render_cast_name_text.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E5C2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E5C3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/render_cast_name_text.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E5C5: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/render_cast_name_text.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC4E5C7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E5C9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E5CB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E5CD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E5CF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/render_cast_name_text.asm:38 LDX @LOCAL08
    case 0xC4E5D1: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/ending/render_cast_name_text.asm:39 LDA #.LOWORD(-1)
    case 0xC4E5D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/ending/render_cast_name_text.asm:39 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4E5D3.
    case 0xC4E5D5: cpu.execute_instruction<0xFF>(0xFF9922, 4); return true;
    // src/ending/render_cast_name_text.asm:40 JSL UNKNOWN_C1FF99
    case 0xC4E5D6: cpu.execute_instruction<0x22>(0xC1FF99, 4); return true;
    // src/ending/render_cast_name_text.asm:40 JSL UNKNOWN_C1FF99
    // Overlapping static entry reached from 0xC4E5D5.
    case 0xC4E5D9: cpu.execute_instruction<0xC1>(0x0000A9, 2); return true;
    // src/ending/render_cast_name_text.asm:41 LDA #0
    case 0xC4E5DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/render_cast_name_text.asm:41 LDA #0
    // Overlapping static entry reached from 0xC4E5D9.
    case 0xC4E5DB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/render_cast_name_text.asm:41 LDA #0
    // Overlapping static entry reached from 0xC4E5DA.
    case 0xC4E5DC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/render_cast_name_text.asm:42 STA @VIRTUAL04
    case 0xC4E5DD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/render_cast_name_text.asm:43 JMP @UNKNOWN3
    case 0xC4E5DF: cpu.execute_instruction<0x4C>(0x00E6B8, 3); return true;
    // src/ending/render_cast_name_text.asm:45 AND #$00FF
    case 0xC4E5E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/render_cast_name_text.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC4E5E2.
    case 0xC4E5E4: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/ending/render_cast_name_text.asm:46 SEC
    case 0xC4E5E5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:47 SBC #$50
    case 0xC4E5E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/ending/render_cast_name_text.asm:47 SBC #$50
    // Overlapping static entry reached from 0xC4E5E6.
    case 0xC4E5E8: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/ending/render_cast_name_text.asm:48 AND #$007F
    case 0xC4E5E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/ending/render_cast_name_text.asm:48 AND #$007F
    // Overlapping static entry reached from 0xC4E5E9.
    case 0xC4E5EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/render_cast_name_text.asm:49 STA @LOCAL06
    case 0xC4E5EC: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:50 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E5EE: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:50 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E5F0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:50 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E5F2: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:50 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E5F4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/render_cast_name_text.asm:51 LDY #4
    case 0xC4E5F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/ending/render_cast_name_text.asm:51 LDY #4
    // Overlapping static entry reached from 0xC4E5F6.
    case 0xC4E5F8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/render_cast_name_text.asm:52 LDA [@VIRTUAL06],Y
    case 0xC4E5F9: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/ending/render_cast_name_text.asm:53 PHA
    case 0xC4E5FB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:54 INY
    case 0xC4E5FC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:55 INY
    case 0xC4E5FD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:56 LDA [@VIRTUAL06],Y
    case 0xC4E5FE: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/ending/render_cast_name_text.asm:57 STA @VIRTUAL0A+2
    case 0xC4E600: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/ending/render_cast_name_text.asm:58 PLA
    case 0xC4E602: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:59 STA @VIRTUAL0A
    case 0xC4E603: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/ending/render_cast_name_text.asm:60 LDA @LOCAL06
    case 0xC4E605: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/ending/render_cast_name_text.asm:61 PHA
    case 0xC4E607: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:62 LDY #8
    case 0xC4E608: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/ending/render_cast_name_text.asm:62 LDY #8
    // Overlapping static entry reached from 0xC4E608.
    case 0xC4E60A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/render_cast_name_text.asm:63 LDA [@LOCAL07],Y
    case 0xC4E60B: cpu.execute_instruction<0xB7>(0x000022, 2); return true;
    // src/ending/render_cast_name_text.asm:64 PLY
    case 0xC4E60D: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:65 JSL MULT16
    case 0xC4E60E: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/ending/render_cast_name_text.asm:66 CLC
    case 0xC4E612: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:67 ADC @VIRTUAL0A
    case 0xC4E613: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/ending/render_cast_name_text.asm:68 STA @VIRTUAL0A
    case 0xC4E615: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:69 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E617: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:69 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E619: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:69 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E61B: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:69 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E61D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E61F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E61F.
    case 0xC4E621: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E622: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E624: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E625: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E627: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E629: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/ending/render_cast_name_text.asm:71 LDA @LOCAL06
    case 0xC4E62B: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/ending/render_cast_name_text.asm:72 CLC
    case 0xC4E62D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:73 ADC @VIRTUAL06
    case 0xC4E62E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/render_cast_name_text.asm:74 STA @VIRTUAL06
    case 0xC4E630: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/render_cast_name_text.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E632: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/render_cast_name_text.asm:76 LDA [@VIRTUAL06]
    case 0xC4E634: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/render_cast_name_text.asm:77 CLC
    case 0xC4E636: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:78 ADC CHARACTER_PADDING
    case 0xC4E637: cpu.execute_instruction<0x6D>(0x005E6D, 3); return true;
    // src/ending/render_cast_name_text.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC4E63A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/render_cast_name_text.asm:80 AND #$00FF
    case 0xC4E63C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/render_cast_name_text.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC4E63C.
    case 0xC4E63E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/ending/render_cast_name_text.asm:81 TAY
    case 0xC4E63F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:82 STY @LOCAL05
    case 0xC4E640: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/ending/render_cast_name_text.asm:83 CPY #8
    case 0xC4E642: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/ending/render_cast_name_text.asm:83 CPY #8
    // Overlapping static entry reached from 0xC4E642.
    case 0xC4E644: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/ending/render_cast_name_text.asm:84 BLTEQ @UNKNOWN2
    case 0xC4E645: cpu.execute_instruction<0x90>(0x000050, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/ending/render_cast_name_text.asm:84 BLTEQ @UNKNOWN2
    case 0xC4E647: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:86 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E649: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:86 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E64B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:86 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E64D: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:86 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E64F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/render_cast_name_text.asm:87 LDA #10
    case 0xC4E651: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/ending/render_cast_name_text.asm:87 LDA #10
    // Overlapping static entry reached from 0xC4E651.
    case 0xC4E653: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/render_cast_name_text.asm:88 CLC
    case 0xC4E654: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:89 ADC @VIRTUAL06
    case 0xC4E655: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/render_cast_name_text.asm:90 STA @VIRTUAL06
    case 0xC4E657: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/render_cast_name_text.asm:91 STA @LOCAL04
    case 0xC4E659: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/ending/render_cast_name_text.asm:92 LDA @VIRTUAL06+2
    case 0xC4E65B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/render_cast_name_text.asm:93 STA @LOCAL04+2
    case 0xC4E65D: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:94 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E65F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:94 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E661: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:94 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E663: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:94 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E665: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:95 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E667: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:95 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E669: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:95 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E66B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:95 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E66D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:96 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4E66F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:96 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4E671: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:96 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4E673: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:96 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4E675: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/render_cast_name_text.asm:97 LDA [@VIRTUAL06]
    case 0xC4E677: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/render_cast_name_text.asm:98 TAX
    case 0xC4E679: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:99 TYA
    case 0xC4E67A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:100 JSL UNKNOWN_C44B3A
    case 0xC4E67B: cpu.execute_instruction<0x22>(0xC44B3A, 4); return true;
    // src/ending/render_cast_name_text.asm:101 LDY @LOCAL05
    case 0xC4E67F: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/ending/render_cast_name_text.asm:102 TYA
    case 0xC4E681: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:103 SEC
    case 0xC4E682: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:104 SBC #8
    case 0xC4E683: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/ending/render_cast_name_text.asm:104 SBC #8
    // Overlapping static entry reached from 0xC4E683.
    case 0xC4E685: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/ending/render_cast_name_text.asm:105 TAY
    case 0xC4E686: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:106 STY @LOCAL05
    case 0xC4E687: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/ending/render_cast_name_text.asm:107 LDA [@VIRTUAL06]
    case 0xC4E689: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/render_cast_name_text.asm:108 CLC
    case 0xC4E68B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:109 ADC @VIRTUAL0A
    case 0xC4E68C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/ending/render_cast_name_text.asm:110 STA @VIRTUAL0A
    case 0xC4E68E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/ending/render_cast_name_text.asm:111 CPY #8
    case 0xC4E690: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/ending/render_cast_name_text.asm:111 CPY #8
    // Overlapping static entry reached from 0xC4E690.
    case 0xC4E692: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/ending/render_cast_name_text.asm:112 BGT @UNKNOWN1
    case 0xC4E693: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/ending/render_cast_name_text.asm:112 BGT @UNKNOWN1
    case 0xC4E695: cpu.execute_instruction<0xB0>(0x0000B2, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:114 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E697: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:114 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E699: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:114 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E69B: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:114 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E69D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:115 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E69F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:115 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E6A1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:115 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E6A3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:115 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E6A5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/render_cast_name_text.asm:116 LDY #10
    case 0xC4E6A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/ending/render_cast_name_text.asm:116 LDY #10
    // Overlapping static entry reached from 0xC4E6A7.
    case 0xC4E6A9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/render_cast_name_text.asm:117 LDA [@LOCAL07],Y
    case 0xC4E6AA: cpu.execute_instruction<0xB7>(0x000022, 2); return true;
    // src/ending/render_cast_name_text.asm:118 TAX
    case 0xC4E6AC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:119 LDY @LOCAL05
    case 0xC4E6AD: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/ending/render_cast_name_text.asm:120 TYA
    case 0xC4E6AF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:121 JSL UNKNOWN_C44B3A
    case 0xC4E6B0: cpu.execute_instruction<0x22>(0xC44B3A, 4); return true;
    // src/ending/render_cast_name_text.asm:122 INC @VIRTUAL02
    case 0xC4E6B4: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/ending/render_cast_name_text.asm:123 INC @VIRTUAL04
    case 0xC4E6B6: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/ending/render_cast_name_text.asm:125 LDX @VIRTUAL02
    case 0xC4E6B8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/ending/render_cast_name_text.asm:126 LDA __BSS_START__,X
    case 0xC4E6BA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/render_cast_name_text.asm:127 AND #$00FF
    case 0xC4E6BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/render_cast_name_text.asm:127 AND #$00FF
    // Overlapping static entry reached from 0xC4E6BD.
    case 0xC4E6BF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/ending/render_cast_name_text.asm:128 BNEL @UNKNOWN0
    case 0xC4E6C0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/ending/render_cast_name_text.asm:128 BNEL @UNKNOWN0
    case 0xC4E6C2: cpu.execute_instruction<0x4C>(0x00E5E2, 3); return true;
    // src/ending/render_cast_name_text.asm:129 LDA @LOCAL08
    case 0xC4E6C5: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/ending/render_cast_name_text.asm:130 JSL CHANGE_VWF_2BPP_TO_3_COLOUR
    case 0xC4E6C7: cpu.execute_instruction<0x22>(0xC4EEE1, 4); return true;
    // src/ending/render_cast_name_text.asm:131 LDA @LOCAL09
    case 0xC4E6CB: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/ending/render_cast_name_text.asm:132 ASL
    case 0xC4E6CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:133 ASL
    case 0xC4E6CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:134 ASL
    case 0xC4E6CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:135 STA @VIRTUAL04
    case 0xC4E6D0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/render_cast_name_text.asm:136 LDA #0
    case 0xC4E6D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/render_cast_name_text.asm:136 LDA #0
    // Overlapping static entry reached from 0xC4E6D2.
    case 0xC4E6D4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/render_cast_name_text.asm:137 STA @VIRTUAL02
    case 0xC4E6D5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/render_cast_name_text.asm:138 STA @LOCAL03
    case 0xC4E6D7: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/ending/render_cast_name_text.asm:139 JMP @UNKNOWN6
    case 0xC4E6D9: cpu.execute_instruction<0x4C>(0x00E789, 3); return true;
    // src/ending/render_cast_name_text.asm:141 LDA @LOCAL09
    case 0xC4E6DC: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/ending/render_cast_name_text.asm:142 AND #$000F
    case 0xC4E6DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/ending/render_cast_name_text.asm:142 AND #$000F
    // Overlapping static entry reached from 0xC4E6DE.
    case 0xC4E6E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/render_cast_name_text.asm:143 STA @VIRTUAL02
    case 0xC4E6E1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/render_cast_name_text.asm:144 LDA @LOCAL09
    case 0xC4E6E3: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/ending/render_cast_name_text.asm:145 AND #$03F0
    case 0xC4E6E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x0003F0, 3); return true;
    // src/ending/render_cast_name_text.asm:145 AND #$03F0
    // Overlapping static entry reached from 0xC4E6E5.
    case 0xC4E6E7: cpu.execute_instruction<0x03>(0x00000A, 2); return true;
    // src/ending/render_cast_name_text.asm:146 ASL
    case 0xC4E6E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:147 CLC
    case 0xC4E6E9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:148 ADC @VIRTUAL02
    case 0xC4E6EA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/render_cast_name_text.asm:149 ASL
    case 0xC4E6EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:150 ASL
    case 0xC4E6ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:151 ASL
    case 0xC4E6EE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:152 ASL
    case 0xC4E6EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:153 TAY
    case 0xC4E6F0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:154 STY @LOCAL02
    case 0xC4E6F1: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:155 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E6F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:155 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E6F3.
    case 0xC4E6F5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/render_cast_name_text.asm:155 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E6F6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:155 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E6F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:155 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E6F8.
    case 0xC4E6FA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/render_cast_name_text.asm:155 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E6FB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:156 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC4E6FD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:156 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC4E6FF: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:156 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC4E701: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:156 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC4E703: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/ending/render_cast_name_text.asm:157 LDA @LOCAL03
    case 0xC4E705: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/ending/render_cast_name_text.asm:158 STA @VIRTUAL02
    case 0xC4E707: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/render_cast_name_text.asm:159 ASL
    case 0xC4E709: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:160 ASL
    case 0xC4E70A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:161 ASL
    case 0xC4E70B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:162 ASL
    case 0xC4E70C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:163 ASL
    case 0xC4E70D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:164 TAX
    case 0xC4E70E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:165 STX @LOCAL06
    case 0xC4E70F: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/ending/render_cast_name_text.asm:166 TYA
    case 0xC4E711: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:167 CLC
    case 0xC4E712: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:168 ADC @VIRTUAL06
    case 0xC4E713: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/render_cast_name_text.asm:169 STA @VIRTUAL06
    case 0xC4E715: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/render_cast_name_text.asm:170 STA @LOCAL00
    case 0xC4E717: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/render_cast_name_text.asm:171 LDA @VIRTUAL06+2
    case 0xC4E719: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/render_cast_name_text.asm:172 STA @LOCAL00+2
    case 0xC4E71B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/render_cast_name_text.asm:173 TXA
    case 0xC4E71D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:174 CLC
    case 0xC4E71E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:175 ADC #.LOWORD(VWF_BUFFER)
    case 0xC4E71F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000092, 2); else cpu.execute_instruction<0x69>(0x003492, 3); return true;
    // src/ending/render_cast_name_text.asm:175 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC4E71F.
    case 0xC4E721: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E722: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC4E721.
    case 0xC4E723: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E724: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E725: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E727: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E728: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E72A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/render_cast_name_text.asm:177 REP #PROC_FLAGS::ACCUM8
    case 0xC4E72C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:178 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E72E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:178 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E730: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:178 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E732: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:178 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E734: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/render_cast_name_text.asm:179 LDA #16
    case 0xC4E736: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/ending/render_cast_name_text.asm:179 LDA #16
    // Overlapping static entry reached from 0xC4E736.
    case 0xC4E738: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/render_cast_name_text.asm:180 JSL MEMCPY24
    case 0xC4E739: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/ending/render_cast_name_text.asm:181 LDY @LOCAL02
    case 0xC4E73D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/ending/render_cast_name_text.asm:182 TYA
    case 0xC4E73F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:183 CLC
    case 0xC4E740: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:184 ADC #256
    case 0xC4E741: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/ending/render_cast_name_text.asm:184 ADC #256
    // Overlapping static entry reached from 0xC4E741.
    case 0xC4E743: cpu.execute_instruction<0x01>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/render_cast_name_text.asm:185 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC4E744: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/render_cast_name_text.asm:185 MOVE_INTX @LOCAL04, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E743.
    case 0xC4E745: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/render_cast_name_text.asm:185 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC4E746: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/render_cast_name_text.asm:185 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC4E748: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:185 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC4E74A: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/ending/render_cast_name_text.asm:186 CLC
    case 0xC4E74C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:187 ADC @VIRTUAL06
    case 0xC4E74D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/render_cast_name_text.asm:188 STA @VIRTUAL06
    case 0xC4E74F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/render_cast_name_text.asm:189 STA @LOCAL00
    case 0xC4E751: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/render_cast_name_text.asm:190 LDA @VIRTUAL06+2
    case 0xC4E753: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/render_cast_name_text.asm:191 STA @LOCAL00+2
    case 0xC4E755: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/render_cast_name_text.asm:192 LDX @LOCAL06
    case 0xC4E757: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/ending/render_cast_name_text.asm:193 TXA
    case 0xC4E759: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:194 CLC
    case 0xC4E75A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:195 ADC #.LOWORD(VWF_BUFFER) + 16
    case 0xC4E75B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A2, 2); else cpu.execute_instruction<0x69>(0x0034A2, 3); return true;
    // src/ending/render_cast_name_text.asm:195 ADC #.LOWORD(VWF_BUFFER) + 16
    // Overlapping static entry reached from 0xC4E75B.
    case 0xC4E75D: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E75E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC4E75D.
    case 0xC4E75F: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E760: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E761: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E763: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E764: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E766: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/render_cast_name_text.asm:197 REP #PROC_FLAGS::ACCUM8
    case 0xC4E768: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:198 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E76A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:198 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E76C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:198 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E76E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:198 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E770: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/render_cast_name_text.asm:199 LDA #16
    case 0xC4E772: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/ending/render_cast_name_text.asm:199 LDA #16
    // Overlapping static entry reached from 0xC4E772.
    case 0xC4E774: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/render_cast_name_text.asm:200 JSL MEMCPY24
    case 0xC4E775: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/ending/render_cast_name_text.asm:201 INC @VIRTUAL02
    case 0xC4E779: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/ending/render_cast_name_text.asm:202 LDA @VIRTUAL02
    case 0xC4E77B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/render_cast_name_text.asm:203 STA @LOCAL03
    case 0xC4E77D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/ending/render_cast_name_text.asm:204 LDA @VIRTUAL04
    case 0xC4E77F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/render_cast_name_text.asm:205 CLC
    case 0xC4E781: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/render_cast_name_text.asm:206 ADC #8
    case 0xC4E782: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/ending/render_cast_name_text.asm:206 ADC #8
    // Overlapping static entry reached from 0xC4E782.
    case 0xC4E784: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/render_cast_name_text.asm:207 STA @VIRTUAL04
    case 0xC4E785: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/render_cast_name_text.asm:208 INC @LOCAL09
    case 0xC4E787: cpu.execute_instruction<0xE6>(0x000028, 2); return true;
    // src/ending/render_cast_name_text.asm:210 LDA @VIRTUAL02
    case 0xC4E789: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/render_cast_name_text.asm:211 CMP @LOCAL08
    case 0xC4E78B: cpu.execute_instruction<0xC5>(0x000026, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/render_cast_name_text.asm:212 BCCL @UNKNOWN5
    case 0xC4E78D: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/render_cast_name_text.asm:212 BCCL @UNKNOWN5
    case 0xC4E78F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/render_cast_name_text.asm:212 BCCL @UNKNOWN5
    case 0xC4E791: cpu.execute_instruction<0x4C>(0x00E6DC, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/render_cast_name_text.asm:213 END_C_FUNCTION
    case 0xC4E794: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/ending/render_cast_name_text.asm:213 END_C_FUNCTION
    case 0xC4E795: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/set_cast_scroll_threshold.asm (source_named).
bool execute_ending_set_cast_scroll_threshold_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4E4DA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4E4DC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4E4DD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4E4DE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4E4DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E4DF.
    case 0xC4E4E1: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4E4E2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4E4E3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:8 STA @LOCAL00
    case 0xC4E4E4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/set_cast_scroll_threshold.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC4E4E1.
    case 0xC4E4E5: cpu.execute_instruction<0x0E>(0x0042AD, 3); return true;
    // src/ending/set_cast_scroll_threshold.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC4E4E6: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/ending/set_cast_scroll_threshold.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4E4E5.
    case 0xC4E4E8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:10 ASL
    case 0xC4E4E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:11 TAX
    case 0xC4E4EA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:12 LDA @LOCAL00
    case 0xC4E4EB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/ending/set_cast_scroll_threshold.asm:13 ASL
    case 0xC4E4ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:14 ASL
    case 0xC4E4EE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:15 ASL
    case 0xC4E4EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:16 CLC
    case 0xC4E4F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:17 ADC BG3_Y_POS
    case 0xC4E4F1: cpu.execute_instruction<0x6D>(0x00003B, 3); return true;
    // src/ending/set_cast_scroll_threshold.asm:18 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4E4F4: cpu.execute_instruction<0x9D>(0x000E5E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:19 END_C_FUNCTION
    case 0xC4E4F7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:19 END_C_FUNCTION
    case 0xC4E4F8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/slide_credits_photograph.asm (source_named).
bool execute_ending_slide_credits_photograph_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/slide_credits_photograph.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4F46F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4F471: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4F472: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4F473: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4F474: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x00FFDC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC4F474.
    case 0xC4F476: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4F477: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4F478: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:16 STA @LOCAL08
    case 0xC4F479: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:16 STA @LOCAL08
    // Overlapping static entry reached from 0xC4F476.
    case 0xC4F47A: cpu.execute_instruction<0x22>(0x2F8AA9, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4F47B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x002F8A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F47B.
    case 0xC4F47D: cpu.execute_instruction<0x2F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4F47E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4F480: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F47D.
    case 0xC4F481: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F480.
    case 0xC4F482: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4F483: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/slide_credits_photograph.asm:18 LDA @LOCAL08
    case 0xC4F485: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:19 LDY #.SIZEOF(photographer_config_entry)
    case 0xC4F487: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003E, 2); else cpu.execute_instruction<0xA0>(0x00003E, 3); return true;
    // src/ending/slide_credits_photograph.asm:19 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC4F487.
    case 0xC4F489: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:20 JSL MULT168
    case 0xC4F48A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/ending/slide_credits_photograph.asm:21 CLC
    case 0xC4F48E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:22 ADC @VIRTUAL06
    case 0xC4F48F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/slide_credits_photograph.asm:23 STA @VIRTUAL06
    case 0xC4F491: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/slide_credits_photograph.asm:24 STA @LOCAL07
    case 0xC4F493: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/ending/slide_credits_photograph.asm:25 LDA @VIRTUAL06+2
    case 0xC4F495: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/slide_credits_photograph.asm:26 STA @LOCAL07+2
    case 0xC4F497: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/ending/slide_credits_photograph.asm:27 LDX #256
    case 0xC4F499: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/ending/slide_credits_photograph.asm:27 LDX #256
    // Overlapping static entry reached from 0xC4F499.
    case 0xC4F49B: cpu.execute_instruction<0x01>(0x0000E2, 2); return true;
    // src/ending/slide_credits_photograph.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F49C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/slide_credits_photograph.asm:28 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4F49B.
    case 0xC4F49D: cpu.execute_instruction<0x20>(0x0008A0, 3); return true;
    // src/ending/slide_credits_photograph.asm:29 LDY #photographer_config_entry::slide_direction
    case 0xC4F49E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/ending/slide_credits_photograph.asm:29 LDY #photographer_config_entry::slide_direction
    // Overlapping static entry reached from 0xC4F49E.
    case 0xC4F4A0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/slide_credits_photograph.asm:30 LDA [@VIRTUAL06],Y
    case 0xC4F4A1: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/ending/slide_credits_photograph.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC4F4A3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/slide_credits_photograph.asm:32 AND #$00FF
    case 0xC4F4A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/slide_credits_photograph.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC4F4A5.
    case 0xC4F4A7: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/ending/slide_credits_photograph.asm:33 LDY #1024
    case 0xC4F4A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/ending/slide_credits_photograph.asm:33 LDY #1024
    // Overlapping static entry reached from 0xC4F4A8.
    case 0xC4F4AA: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:34 JSL MULT16
    case 0xC4F4AB: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/ending/slide_credits_photograph.asm:34 JSL MULT16
    // Overlapping static entry reached from 0xC4F4AA.
    case 0xC4F4AC: cpu.execute_instruction<0x32>(0x000090, 2); return true;
    // src/ending/slide_credits_photograph.asm:34 JSL MULT16
    // Overlapping static entry reached from 0xC4F4AC.
    case 0xC4F4AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x00FF22, 3); return true;
    // src/ending/slide_credits_photograph.asm:35 JSL UNKNOWN_C41FFF
    case 0xC4F4AF: cpu.execute_instruction<0x22>(0xC41FFF, 4); return true;
    // src/ending/slide_credits_photograph.asm:35 JSL UNKNOWN_C41FFF
    // Overlapping static entry reached from 0xC4F4AE.
    case 0xC4F4B0: cpu.execute_instruction<0xFF>(0xA5C41F, 4); return true;
    // src/ending/slide_credits_photograph.asm:35 JSL UNKNOWN_C41FFF
    // Overlapping static entry reached from 0xC4F4AE.
    case 0xC4F4B1: cpu.execute_instruction<0x1F>(0x06A5C4, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4F4B3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4F4B0.
    case 0xC4F4B4: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4F4B5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4F4B4.
    case 0xC4F4B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4F4B7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4F4B9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4F4BB: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4F4BD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4F4BF: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4F4C1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F4C3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F4C5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F4C7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F4C9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4F4CB: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4F4CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4F4CF: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4F4D1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/slide_credits_photograph.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F4D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/slide_credits_photograph.asm:41 LDY #photographer_config_entry::slide_distance
    case 0xC4F4D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/ending/slide_credits_photograph.asm:41 LDY #photographer_config_entry::slide_distance
    // Overlapping static entry reached from 0xC4F4D5.
    case 0xC4F4D7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/slide_credits_photograph.asm:42 LDA [@VIRTUAL06],Y
    case 0xC4F4D8: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/ending/slide_credits_photograph.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC4F4DA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/slide_credits_photograph.asm:44 AND #$00FF
    case 0xC4F4DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/slide_credits_photograph.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC4F4DC.
    case 0xC4F4DE: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/ending/slide_credits_photograph.asm:45 XBA
    case 0xC4F4DF: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:46 AND #$FF00
    case 0xC4F4E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/ending/slide_credits_photograph.asm:46 AND #$FF00
    // Overlapping static entry reached from 0xC4F4E0.
    case 0xC4F4E2: cpu.execute_instruction<0xFF>(0x0100A0, 4); return true;
    // src/ending/slide_credits_photograph.asm:47 LDY #256
    case 0xC4F4E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/ending/slide_credits_photograph.asm:47 LDY #256
    // Overlapping static entry reached from 0xC4F4E3.
    case 0xC4F4E5: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:48 JSL DIVISION16
    case 0xC4F4E6: cpu.execute_instruction<0x22>(0xC090E6, 4); return true;
    // src/ending/slide_credits_photograph.asm:48 JSL DIVISION16
    // Overlapping static entry reached from 0xC4F4E5.
    case 0xC4F4E7: cpu.execute_instruction<0xE6>(0x000090, 2); return true;
    // src/ending/slide_credits_photograph.asm:48 JSL DIVISION16
    // Overlapping static entry reached from 0xC4F4E7.
    case 0xC4F4E9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x002285, 3); return true;
    // src/ending/slide_credits_photograph.asm:49 STA @LOCAL08
    case 0xC4F4EA: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:49 STA @LOCAL08
    // Overlapping static entry reached from 0xC4F4E9.
    case 0xC4F4EB: cpu.execute_instruction<0x22>(0x8510A5, 4); return true;
    // src/ending/slide_credits_photograph.asm:50 LDA @LOCAL00+2
    case 0xC4F4EC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/ending/slide_credits_photograph.asm:51 STA @LOCAL06
    case 0xC4F4EE: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/ending/slide_credits_photograph.asm:51 STA @LOCAL06
    // Overlapping static entry reached from 0xC4F4EB.
    case 0xC4F4EF: cpu.execute_instruction<0x1C>(0x000EA5, 3); return true;
    // src/ending/slide_credits_photograph.asm:52 LDA @LOCAL00
    case 0xC4F4F0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/ending/slide_credits_photograph.asm:53 STA @LOCAL05
    case 0xC4F4F2: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/ending/slide_credits_photograph.asm:54 LDA BG1_X_POS
    case 0xC4F4F4: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/ending/slide_credits_photograph.asm:55 STA @LOCAL04
    case 0xC4F4F7: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/ending/slide_credits_photograph.asm:56 LDA BG1_Y_POS
    case 0xC4F4F9: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/ending/slide_credits_photograph.asm:57 STA @LOCAL03
    case 0xC4F4FC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/ending/slide_credits_photograph.asm:58 LDA #0
    case 0xC4F4FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/slide_credits_photograph.asm:58 LDA #0
    // Overlapping static entry reached from 0xC4F4FE.
    case 0xC4F500: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/slide_credits_photograph.asm:59 STA @VIRTUAL04
    case 0xC4F501: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/slide_credits_photograph.asm:60 STA @VIRTUAL02
    case 0xC4F503: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/slide_credits_photograph.asm:61 TAY
    case 0xC4F505: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:62 STY @LOCAL02
    case 0xC4F506: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/ending/slide_credits_photograph.asm:63 BRA @UNKNOWN1
    case 0xC4F508: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/ending/slide_credits_photograph.asm:65 LDA @VIRTUAL02
    case 0xC4F50A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/slide_credits_photograph.asm:66 CLC
    case 0xC4F50C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:67 ADC @LOCAL06
    case 0xC4F50D: cpu.execute_instruction<0x65>(0x00001C, 2); return true;
    // src/ending/slide_credits_photograph.asm:68 STA @VIRTUAL02
    case 0xC4F50F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/slide_credits_photograph.asm:69 LDA @VIRTUAL04
    case 0xC4F511: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/slide_credits_photograph.asm:70 CLC
    case 0xC4F513: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:71 ADC @LOCAL05
    case 0xC4F514: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/ending/slide_credits_photograph.asm:72 STA @VIRTUAL04
    case 0xC4F516: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/slide_credits_photograph.asm:73 LDY #256
    case 0xC4F518: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/ending/slide_credits_photograph.asm:73 LDY #256
    // Overlapping static entry reached from 0xC4F518.
    case 0xC4F51A: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/ending/slide_credits_photograph.asm:74 LDA @VIRTUAL02
    case 0xC4F51B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/slide_credits_photograph.asm:74 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4F51A.
    case 0xC4F51C: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:75 JSL DIVISION16
    case 0xC4F51D: cpu.execute_instruction<0x22>(0xC090E6, 4); return true;
    // src/ending/slide_credits_photograph.asm:76 TAX
    case 0xC4F521: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:77 CLC
    case 0xC4F522: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:78 ADC @LOCAL04
    case 0xC4F523: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/ending/slide_credits_photograph.asm:79 STA BG1_X_POS
    case 0xC4F525: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/ending/slide_credits_photograph.asm:80 LDY #256
    case 0xC4F528: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/ending/slide_credits_photograph.asm:80 LDY #256
    // Overlapping static entry reached from 0xC4F528.
    case 0xC4F52A: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/ending/slide_credits_photograph.asm:81 LDA @VIRTUAL04
    case 0xC4F52B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/slide_credits_photograph.asm:81 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC4F52A.
    case 0xC4F52C: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:82 JSL DIVISION16
    case 0xC4F52D: cpu.execute_instruction<0x22>(0xC090E6, 4); return true;
    // src/ending/slide_credits_photograph.asm:82 JSL DIVISION16
    // Overlapping static entry reached from 0xC4F52C.
    case 0xC4F52E: cpu.execute_instruction<0xE6>(0x000090, 2); return true;
    // src/ending/slide_credits_photograph.asm:82 JSL DIVISION16
    // Overlapping static entry reached from 0xC4F52E.
    case 0xC4F530: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001285, 3); return true;
    // src/ending/slide_credits_photograph.asm:83 STA @LOCAL01
    case 0xC4F531: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/slide_credits_photograph.asm:83 STA @LOCAL01
    // Overlapping static entry reached from 0xC4F530.
    case 0xC4F532: cpu.execute_instruction<0x12>(0x000018, 2); return true;
    // src/ending/slide_credits_photograph.asm:84 CLC
    case 0xC4F533: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:85 ADC @LOCAL03
    case 0xC4F534: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/ending/slide_credits_photograph.asm:86 STA BG1_Y_POS
    case 0xC4F536: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/ending/slide_credits_photograph.asm:87 STX BG2_X_POS
    case 0xC4F539: cpu.execute_instruction<0x8E>(0x000035, 3); return true;
    // src/ending/slide_credits_photograph.asm:88 LDA @LOCAL01
    case 0xC4F53C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/slide_credits_photograph.asm:89 STA BG2_Y_POS
    case 0xC4F53E: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/ending/slide_credits_photograph.asm:90 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4F541: cpu.execute_instruction<0x22>(0xC4F01D, 4); return true;
    // src/ending/slide_credits_photograph.asm:91 JSL UNKNOWN_C1004E
    case 0xC4F545: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/ending/slide_credits_photograph.asm:92 LDY @LOCAL02
    case 0xC4F549: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/ending/slide_credits_photograph.asm:93 INY
    case 0xC4F54B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:94 STY @LOCAL02
    case 0xC4F54C: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/ending/slide_credits_photograph.asm:96 CPY @LOCAL08
    case 0xC4F54E: cpu.execute_instruction<0xC4>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:97 BCC @UNKNOWN0
    case 0xC4F550: cpu.execute_instruction<0x90>(0x0000B8, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/slide_credits_photograph.asm:98 END_C_FUNCTION
    case 0xC4F552: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/slide_credits_photograph.asm:98 END_C_FUNCTION
    case 0xC4F553: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/try_rendering_photograph.asm (source_named).
bool execute_ending_try_rendering_photograph_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/try_rendering_photograph.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4F264: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4F266: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4F267: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4F268: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4F269: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC4F269.
    case 0xC4F26B: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4F26C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4F26D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:15 STA @LOCAL06
    case 0xC4F26E: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/ending/try_rendering_photograph.asm:15 STA @LOCAL06
    // Overlapping static entry reached from 0xC4F26B.
    case 0xC4F26F: cpu.execute_instruction<0x1E>(0x0000A2, 3); return true;
    // src/ending/try_rendering_photograph.asm:16 LDX #0
    case 0xC4F270: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:16 LDX #0
    // Overlapping static entry reached from 0xC4F270.
    case 0xC4F272: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/ending/try_rendering_photograph.asm:17 STX @LOCAL05
    case 0xC4F273: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4F275: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x002F8A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4F275.
    case 0xC4F277: cpu.execute_instruction<0x2F>(0xA90A85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4F278: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4F27A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4F277.
    case 0xC4F27B: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4F27A.
    case 0xC4F27C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4F27D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/ending/try_rendering_photograph.asm:19 LDA @LOCAL06
    case 0xC4F27F: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/ending/try_rendering_photograph.asm:20 LDY #.SIZEOF(photographer_config_entry)
    case 0xC4F281: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003E, 2); else cpu.execute_instruction<0xA0>(0x00003E, 3); return true;
    // src/ending/try_rendering_photograph.asm:20 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC4F281.
    case 0xC4F283: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/try_rendering_photograph.asm:21 JSL MULT168
    case 0xC4F284: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/ending/try_rendering_photograph.asm:22 CLC
    case 0xC4F288: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:23 ADC @VIRTUAL0A
    case 0xC4F289: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/ending/try_rendering_photograph.asm:24 STA @VIRTUAL0A
    case 0xC4F28B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/ending/try_rendering_photograph.asm:25 STA @VIRTUAL06
    case 0xC4F28D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:26 LDA @VIRTUAL0A+2
    case 0xC4F28F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/ending/try_rendering_photograph.asm:27 STA @VIRTUAL06+2
    case 0xC4F291: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:28 LDA [@VIRTUAL06]
    case 0xC4F293: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:29 JSL GET_EVENT_FLAG
    case 0xC4F295: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/ending/try_rendering_photograph.asm:30 CMP #0
    case 0xC4F299: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:30 CMP #0
    // Overlapping static entry reached from 0xC4F299.
    case 0xC4F29B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/try_rendering_photograph.asm:31 BEQL @RETURN
    case 0xC4F29C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/try_rendering_photograph.asm:31 BEQL @RETURN
    case 0xC4F29E: cpu.execute_instruction<0x4C>(0x00F42E, 3); return true;
    // src/ending/try_rendering_photograph.asm:32 LDA #1
    case 0xC4F2A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/try_rendering_photograph.asm:32 LDA #1
    // Overlapping static entry reached from 0xC4F2A1.
    case 0xC4F2A3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/try_rendering_photograph.asm:33 STA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC4F2A4: cpu.execute_instruction<0x8D>(0x00B4EF, 3); return true;
    // src/ending/try_rendering_photograph.asm:34 LDA @LOCAL06
    case 0xC4F2A7: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/ending/try_rendering_photograph.asm:35 STA CUR_PHOTO_DISPLAY
    case 0xC4F2A9: cpu.execute_instruction<0x8D>(0x00B4F1, 3); return true;
    // src/ending/try_rendering_photograph.asm:36 LDA ENEMY_SPAWNS_ENABLED
    case 0xC4F2AC: cpu.execute_instruction<0xAD>(0x004A5A, 3); return true;
    // src/ending/try_rendering_photograph.asm:37 STA @VIRTUAL02
    case 0xC4F2AF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:38 STZ ENEMY_SPAWNS_ENABLED
    case 0xC4F2B1: cpu.execute_instruction<0x9C>(0x004A5A, 3); return true;
    // src/ending/try_rendering_photograph.asm:39 LDY #0
    case 0xC4F2B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:39 LDY #0
    // Overlapping static entry reached from 0xC4F2B4.
    case 0xC4F2B6: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/ending/try_rendering_photograph.asm:40 LDX #$2000
    case 0xC4F2B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // src/ending/try_rendering_photograph.asm:40 LDX #$2000
    // Overlapping static entry reached from 0xC4F2B7.
    case 0xC4F2B9: cpu.execute_instruction<0x20>(0x000980, 3); return true;
    // src/ending/try_rendering_photograph.asm:41 BRA @UNKNOWN2
    case 0xC4F2BA: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/ending/try_rendering_photograph.asm:43 LDA #0
    case 0xC4F2BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:43 LDA #0
    // Overlapping static entry reached from 0xC4F2BC.
    case 0xC4F2BE: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/ending/try_rendering_photograph.asm:44 STA __BSS_START__,X
    case 0xC4F2BF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:45 INX
    case 0xC4F2C2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:46 INX
    case 0xC4F2C3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:47 INY
    case 0xC4F2C4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:49 CPY #1024
    case 0xC4F2C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000400, 3); return true;
    // src/ending/try_rendering_photograph.asm:49 CPY #1024
    // Overlapping static entry reached from 0xC4F2C5.
    case 0xC4F2C7: cpu.execute_instruction<0x04>(0x000090, 2); return true;
    // src/ending/try_rendering_photograph.asm:50 BCC @UNKNOWN1
    case 0xC4F2C8: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // src/ending/try_rendering_photograph.asm:50 BCC @UNKNOWN1
    // Overlapping static entry reached from 0xC4F2C7.
    case 0xC4F2C9: cpu.execute_instruction<0xF2>(0x0000E2, 2); return true;
    // src/ending/try_rendering_photograph.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F2CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/try_rendering_photograph.asm:51 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4F2C9.
    case 0xC4F2CB: cpu.execute_instruction<0x20>(0x00309C, 3); return true;
    // src/ending/try_rendering_photograph.asm:52 STZ PALETTE_UPLOAD_MODE
    case 0xC4F2CC: cpu.execute_instruction<0x9C>(0x000030, 3); return true;
    // src/ending/try_rendering_photograph.asm:52 STZ PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4F2CB.
    case 0xC4F2CE: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/ending/try_rendering_photograph.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4F2CF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F2D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x00E92A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4F2D1.
    case 0xC4F2D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000085, 2); else cpu.execute_instruction<0xE9>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F2D4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4F2D3.
    case 0xC4F2D5: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F2D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4F2D6.
    case 0xC4F2D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4F2D9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/try_rendering_photograph.asm:55 LDX #BPP4PALETTE_SIZE * 1
    case 0xC4F2DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/ending/try_rendering_photograph.asm:55 LDX #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4F2DB.
    case 0xC4F2DD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/try_rendering_photograph.asm:56 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC4F2DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000220, 3); return true;
    // src/ending/try_rendering_photograph.asm:56 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4F2DE.
    case 0xC4F2E0: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/ending/try_rendering_photograph.asm:57 JSL MEMCPY16
    case 0xC4F2E1: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/ending/try_rendering_photograph.asm:58 LDY #4
    case 0xC4F2E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/ending/try_rendering_photograph.asm:58 LDY #4
    // Overlapping static entry reached from 0xC4F2E5.
    case 0xC4F2E7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/try_rendering_photograph.asm:59 LDA [@VIRTUAL0A],Y
    case 0xC4F2E8: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/ending/try_rendering_photograph.asm:60 ASL
    case 0xC4F2EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:61 ASL
    case 0xC4F2EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:62 ASL
    case 0xC4F2EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:63 TAX
    case 0xC4F2ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:64 LDY #2
    case 0xC4F2EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/ending/try_rendering_photograph.asm:64 LDY #2
    // Overlapping static entry reached from 0xC4F2EE.
    case 0xC4F2F0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/try_rendering_photograph.asm:65 LDA [@VIRTUAL0A],Y
    case 0xC4F2F1: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/ending/try_rendering_photograph.asm:66 ASL
    case 0xC4F2F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:67 ASL
    case 0xC4F2F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:68 ASL
    case 0xC4F2F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:69 JSL LOAD_MAP_AT_POSITION
    case 0xC4F2F6: cpu.execute_instruction<0x22>(0xC013F6, 4); return true;
    // src/ending/try_rendering_photograph.asm:70 LDA @VIRTUAL02
    case 0xC4F2FA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:71 STA ENEMY_SPAWNS_ENABLED
    case 0xC4F2FC: cpu.execute_instruction<0x8D>(0x004A5A, 3); return true;
    // src/ending/try_rendering_photograph.asm:72 STZ BG2_Y_POS
    case 0xC4F2FF: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/ending/try_rendering_photograph.asm:73 STZ BG2_X_POS
    case 0xC4F302: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/ending/try_rendering_photograph.asm:74 STZ PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC4F305: cpu.execute_instruction<0x9C>(0x00B4EF, 3); return true;
    // src/ending/try_rendering_photograph.asm:75 STZ @LOCAL04
    case 0xC4F308: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/ending/try_rendering_photograph.asm:76 LDA #0
    case 0xC4F30A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:76 LDA #0
    // Overlapping static entry reached from 0xC4F30A.
    case 0xC4F30C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/try_rendering_photograph.asm:77 STA @VIRTUAL02
    case 0xC4F30D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:78 BRA @UNKNOWN5
    case 0xC4F30F: cpu.execute_instruction<0x80>(0x000076, 2); return true;
    // src/ending/try_rendering_photograph.asm:80 LDA @VIRTUAL02
    case 0xC4F311: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4F313: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4F315: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4F316: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4F318: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:82 STA @LOCAL03
    case 0xC4F319: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/ending/try_rendering_photograph.asm:83 CLC
    case 0xC4F31B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:84 ADC #42
    case 0xC4F31C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002A, 2); else cpu.execute_instruction<0x69>(0x00002A, 3); return true;
    // src/ending/try_rendering_photograph.asm:84 ADC #42
    // Overlapping static entry reached from 0xC4F31C.
    case 0xC4F31E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F31F: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F321: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F323: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F325: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:86 CLC
    case 0xC4F327: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:87 ADC @VIRTUAL06
    case 0xC4F328: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:88 STA @VIRTUAL06
    case 0xC4F32A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:89 STA @LOCAL02
    case 0xC4F32C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/try_rendering_photograph.asm:90 LDA @VIRTUAL06+2
    case 0xC4F32E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:91 STA @LOCAL02+2
    case 0xC4F330: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/ending/try_rendering_photograph.asm:92 LDA [@VIRTUAL06]
    case 0xC4F332: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:93 BEQ @UNKNOWN4
    case 0xC4F334: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/ending/try_rendering_photograph.asm:94 LDA @LOCAL04
    case 0xC4F336: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/ending/try_rendering_photograph.asm:95 STA NEW_ENTITY_VAR0
    case 0xC4F338: cpu.execute_instruction<0x8D>(0x000A38, 3); return true;
    // src/ending/try_rendering_photograph.asm:96 INC @LOCAL04
    case 0xC4F33B: cpu.execute_instruction<0xE6>(0x00001A, 2); return true;
    // src/ending/try_rendering_photograph.asm:97 LDA @LOCAL03
    case 0xC4F33D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/ending/try_rendering_photograph.asm:98 CLC
    case 0xC4F33F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:99 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_x
    case 0xC4F340: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/ending/try_rendering_photograph.asm:99 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_x
    // Overlapping static entry reached from 0xC4F340.
    case 0xC4F342: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F343: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F345: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F347: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F349: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:101 CLC
    case 0xC4F34B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:102 ADC @VIRTUAL06
    case 0xC4F34C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:103 STA @VIRTUAL06
    case 0xC4F34E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:104 LDA [@VIRTUAL06]
    case 0xC4F350: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:105 ASL
    case 0xC4F352: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:106 ASL
    case 0xC4F353: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:107 ASL
    case 0xC4F354: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:108 STA @LOCAL00
    case 0xC4F355: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/try_rendering_photograph.asm:109 LDA @LOCAL03
    case 0xC4F357: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/ending/try_rendering_photograph.asm:110 CLC
    case 0xC4F359: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:111 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_y
    case 0xC4F35A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/ending/try_rendering_photograph.asm:111 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_y
    // Overlapping static entry reached from 0xC4F35A.
    case 0xC4F35C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F35D: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F35F: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F361: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F363: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:113 CLC
    case 0xC4F365: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:114 ADC @VIRTUAL06
    case 0xC4F366: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:115 STA @VIRTUAL06
    case 0xC4F368: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:116 LDA [@VIRTUAL06]
    case 0xC4F36A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:117 ASL
    case 0xC4F36C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:118 ASL
    case 0xC4F36D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:119 ASL
    case 0xC4F36E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:120 STA @LOCAL00+2
    case 0xC4F36F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/try_rendering_photograph.asm:121 LDY #.LOWORD(-1)
    case 0xC4F371: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/ending/try_rendering_photograph.asm:121 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4F371.
    case 0xC4F373: cpu.execute_instruction<0xFF>(0x031FA2, 4); return true;
    // src/ending/try_rendering_photograph.asm:122 LDX #EVENT_SCRIPT::EVENT_799
    case 0xC4F374: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001F, 2); else cpu.execute_instruction<0xA2>(0x00031F, 3); return true;
    // src/ending/try_rendering_photograph.asm:122 LDX #EVENT_SCRIPT::EVENT_799
    // Overlapping static entry reached from 0xC4F374.
    case 0xC4F376: cpu.execute_instruction<0x03>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4F377: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F376.
    case 0xC4F378: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4F379: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F378.
    case 0xC4F37A: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4F37B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F37A.
    case 0xC4F37C: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4F37D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F37C.
    case 0xC4F37E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:124 LDA [@VIRTUAL06]
    case 0xC4F37F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:125 JSL CREATE_ENTITY
    case 0xC4F381: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/ending/try_rendering_photograph.asm:127 INC @VIRTUAL02
    case 0xC4F385: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:129 LDA @VIRTUAL02
    case 0xC4F387: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:130 CMP #4
    case 0xC4F389: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/ending/try_rendering_photograph.asm:130 CMP #4
    // Overlapping static entry reached from 0xC4F389.
    case 0xC4F38B: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/try_rendering_photograph.asm:131 BCCL @UNKNOWN3
    case 0xC4F38C: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/try_rendering_photograph.asm:131 BCCL @UNKNOWN3
    case 0xC4F38E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/try_rendering_photograph.asm:131 BCCL @UNKNOWN3
    case 0xC4F390: cpu.execute_instruction<0x4C>(0x00F311, 3); return true;
    // src/ending/try_rendering_photograph.asm:132 LDA #0
    case 0xC4F393: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:132 LDA #0
    // Overlapping static entry reached from 0xC4F393.
    case 0xC4F395: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/try_rendering_photograph.asm:133 STA @VIRTUAL04
    case 0xC4F396: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/try_rendering_photograph.asm:134 JMP @UNKNOWN9
    case 0xC4F398: cpu.execute_instruction<0x4C>(0x00F41D, 3); return true;
    // src/ending/try_rendering_photograph.asm:136 LDA @LOCAL06
    case 0xC4F39B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/ending/try_rendering_photograph.asm:137 ASL
    case 0xC4F39D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:138 ASL
    case 0xC4F39E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:139 ASL
    case 0xC4F39F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:140 CLC
    case 0xC4F3A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:148 ADC @VIRTUAL04
    case 0xC4F3A1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/ending/try_rendering_photograph.asm:149 TAX
    case 0xC4F3A3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:150 LDA GAME_STATE + game_state::saved_photo_states + photo_state::party,X
    case 0xC4F3A4: cpu.execute_instruction<0xBD>(0x0098CB, 3); return true;
    // src/ending/try_rendering_photograph.asm:152 AND #$00FF
    case 0xC4F3A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/try_rendering_photograph.asm:152 AND #$00FF
    // Overlapping static entry reached from 0xC4F3A7.
    case 0xC4F3A9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/try_rendering_photograph.asm:153 STA @VIRTUAL02
    case 0xC4F3AA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:154 BEQ @UNKNOWN8
    case 0xC4F3AC: cpu.execute_instruction<0xF0>(0x00006D, 2); return true;
    // src/ending/try_rendering_photograph.asm:155 LDA @VIRTUAL02
    case 0xC4F3AE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:156 AND #$001F
    case 0xC4F3B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/ending/try_rendering_photograph.asm:156 AND #$001F
    // Overlapping static entry reached from 0xC4F3B0.
    case 0xC4F3B2: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/ending/try_rendering_photograph.asm:157 CMP #18
    case 0xC4F3B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/ending/try_rendering_photograph.asm:157 CMP #18
    // Overlapping static entry reached from 0xC4F3B3.
    case 0xC4F3B5: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/ending/try_rendering_photograph.asm:158 BCS @UNKNOWN8
    case 0xC4F3B6: cpu.execute_instruction<0xB0>(0x000063, 2); return true;
    // src/ending/try_rendering_photograph.asm:159 CMP #0
    case 0xC4F3B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:159 CMP #0
    // Overlapping static entry reached from 0xC4F3B8.
    case 0xC4F3BA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/try_rendering_photograph.asm:160 BEQ @UNKNOWN8
    case 0xC4F3BB: cpu.execute_instruction<0xF0>(0x00005E, 2); return true;
    // src/ending/try_rendering_photograph.asm:161 LDA @LOCAL04
    case 0xC4F3BD: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/ending/try_rendering_photograph.asm:162 STA NEW_ENTITY_VAR0
    case 0xC4F3BF: cpu.execute_instruction<0x8D>(0x000A38, 3); return true;
    // src/ending/try_rendering_photograph.asm:163 INC @LOCAL04
    case 0xC4F3C2: cpu.execute_instruction<0xE6>(0x00001A, 2); return true;
    // src/ending/try_rendering_photograph.asm:164 LDA @VIRTUAL04
    case 0xC4F3C4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/try_rendering_photograph.asm:165 ASL
    case 0xC4F3C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:166 ASL
    case 0xC4F3C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:167 TAX
    case 0xC4F3C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:168 STX @LOCAL05
    case 0xC4F3C9: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/ending/try_rendering_photograph.asm:169 LDA @VIRTUAL02
    case 0xC4F3CB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:170 JSL UNKNOWN_C079EC
    case 0xC4F3CD: cpu.execute_instruction<0x22>(0xC079EC, 4); return true;
    // src/ending/try_rendering_photograph.asm:171 STA @LOCAL01
    case 0xC4F3D1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/try_rendering_photograph.asm:172 LDX @LOCAL05
    case 0xC4F3D3: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/ending/try_rendering_photograph.asm:173 TXA
    case 0xC4F3D5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:174 CLC
    case 0xC4F3D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:175 ADC #14
    case 0xC4F3D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/ending/try_rendering_photograph.asm:175 ADC #14
    // Overlapping static entry reached from 0xC4F3D7.
    case 0xC4F3D9: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3DA: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3DC: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3DE: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3E0: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:177 CLC
    case 0xC4F3E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:178 ADC @VIRTUAL06
    case 0xC4F3E3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:179 STA @VIRTUAL06
    case 0xC4F3E5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:180 LDA [@VIRTUAL06]
    case 0xC4F3E7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:181 ASL
    case 0xC4F3E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:182 ASL
    case 0xC4F3EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:183 ASL
    case 0xC4F3EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:184 STA @LOCAL00
    case 0xC4F3EC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/try_rendering_photograph.asm:185 TXA
    case 0xC4F3EE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:186 CLC
    case 0xC4F3EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:187 ADC #16
    case 0xC4F3F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/ending/try_rendering_photograph.asm:187 ADC #16
    // Overlapping static entry reached from 0xC4F3F0.
    case 0xC4F3F2: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3F3: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3F5: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3F7: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4F3F9: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:189 CLC
    case 0xC4F3FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:190 ADC @VIRTUAL06
    case 0xC4F3FC: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:191 STA @VIRTUAL06
    case 0xC4F3FE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:192 LDA [@VIRTUAL06]
    case 0xC4F400: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:193 ASL
    case 0xC4F402: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:194 ASL
    case 0xC4F403: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:195 ASL
    case 0xC4F404: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:196 STA @LOCAL00+2
    case 0xC4F405: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/try_rendering_photograph.asm:197 LDY #.LOWORD(-1)
    case 0xC4F407: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/ending/try_rendering_photograph.asm:197 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4F407.
    case 0xC4F409: cpu.execute_instruction<0xFF>(0x0320A2, 4); return true;
    // src/ending/try_rendering_photograph.asm:198 LDX #EVENT_SCRIPT::EVENT_800
    case 0xC4F40A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000320, 3); return true;
    // src/ending/try_rendering_photograph.asm:198 LDX #EVENT_SCRIPT::EVENT_800
    // Overlapping static entry reached from 0xC4F40A.
    case 0xC4F40C: cpu.execute_instruction<0x03>(0x0000A5, 2); return true;
    // src/ending/try_rendering_photograph.asm:199 LDA @LOCAL01
    case 0xC4F40D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/try_rendering_photograph.asm:199 LDA @LOCAL01
    // Overlapping static entry reached from 0xC4F40C.
    case 0xC4F40E: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/ending/try_rendering_photograph.asm:200 JSL CREATE_ENTITY
    case 0xC4F40F: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/ending/try_rendering_photograph.asm:200 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4F40E.
    case 0xC4F410: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x00001E, 2); else cpu.execute_instruction<0x49>(0x00C01E, 3); return true;
    // src/ending/try_rendering_photograph.asm:200 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4F410.
    case 0xC4F412: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A8, 2); else cpu.execute_instruction<0xC0>(0x00A6A8, 3); return true;
    // src/ending/try_rendering_photograph.asm:201 TAY
    case 0xC4F413: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:202 LDX @VIRTUAL02
    case 0xC4F414: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:202 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC4F412.
    case 0xC4F415: cpu.execute_instruction<0x02>(0x000098, 2); return true;
    // src/ending/try_rendering_photograph.asm:203 TYA
    case 0xC4F416: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:204 JSL UNKNOWN_C07A31
    case 0xC4F417: cpu.execute_instruction<0x22>(0xC07A31, 4); return true;
    // src/ending/try_rendering_photograph.asm:206 INC @VIRTUAL04
    case 0xC4F41B: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/ending/try_rendering_photograph.asm:208 LDA @VIRTUAL04
    case 0xC4F41D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/try_rendering_photograph.asm:209 CMP #6
    case 0xC4F41F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/ending/try_rendering_photograph.asm:209 CMP #6
    // Overlapping static entry reached from 0xC4F41F.
    case 0xC4F421: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/try_rendering_photograph.asm:210 BCCL @UNKNOWN7
    case 0xC4F422: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/try_rendering_photograph.asm:210 BCCL @UNKNOWN7
    case 0xC4F424: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/try_rendering_photograph.asm:210 BCCL @UNKNOWN7
    case 0xC4F426: cpu.execute_instruction<0x4C>(0x00F39B, 3); return true;
    // src/ending/try_rendering_photograph.asm:211 LDX #1
    case 0xC4F429: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/ending/try_rendering_photograph.asm:211 LDX #1
    // Overlapping static entry reached from 0xC4F429.
    case 0xC4F42B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/ending/try_rendering_photograph.asm:212 STX @LOCAL05
    case 0xC4F42C: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/ending/try_rendering_photograph.asm:214 LDX @LOCAL05
    case 0xC4F42E: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/ending/try_rendering_photograph.asm:215 TXA
    case 0xC4F430: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/try_rendering_photograph.asm:216 END_C_FUNCTION
    case 0xC4F431: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/try_rendering_photograph.asm:216 END_C_FUNCTION
    case 0xC4F432: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/upload_special_cast_palette.asm (source_named).
bool execute_ending_upload_special_cast_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/upload_special_cast_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EC6E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4EC70: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4EC71: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4EC72: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4EC73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EC73.
    case 0xC4EC75: cpu.execute_instruction<0xFF>(0x0A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4EC76: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4EC77: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/upload_special_cast_palette.asm:8 ASL
    case 0xC4EC78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/upload_special_cast_palette.asm:9 ASL
    case 0xC4EC79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/upload_special_cast_palette.asm:10 ASL
    case 0xC4EC7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/upload_special_cast_palette.asm:11 ASL
    case 0xC4EC7B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/upload_special_cast_palette.asm:12 ASL
    case 0xC4EC7C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/ending/upload_special_cast_palette.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC4EC7D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC4EC7F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/ending/upload_special_cast_palette.asm:14 CLC
    case 0xC4EC81: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4EC82: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4EC84: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EC84.
    case 0xC4EC86: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4EC87: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EC86.
    case 0xC4EC88: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4EC89: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EC88.
    case 0xC4EC8A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4EC8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EC8B.
    case 0xC4EC8D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4EC8E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/upload_special_cast_palette.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EC90: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/upload_special_cast_palette.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EC92: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EC94: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4EC96: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/upload_special_cast_palette.asm:17 LDX #BPP4PALETTE_SIZE * 1
    case 0xC4EC98: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/ending/upload_special_cast_palette.asm:17 LDX #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4EC98.
    case 0xC4EC9A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/upload_special_cast_palette.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    case 0xC4EC9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000380, 3); return true;
    // src/ending/upload_special_cast_palette.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    // Overlapping static entry reached from 0xC4EC9B.
    case 0xC4EC9D: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/ending/upload_special_cast_palette.asm:19 JSL MEMCPY16
    case 0xC4EC9E: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/ending/upload_special_cast_palette.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4EC9D.
    case 0xC4EC9F: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/ending/upload_special_cast_palette.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4EC9F.
    case 0xC4ECA1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/ending/upload_special_cast_palette.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC4ECA2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/upload_special_cast_palette.asm:20 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4ECA1.
    case 0xC4ECA3: cpu.execute_instruction<0x20>(0x0010A9, 3); return true;
    // src/ending/upload_special_cast_palette.asm:21 LDA #PALETTE_UPLOAD::OBJ_ONLY
    case 0xC4ECA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x008D10, 3); return true;
    // src/ending/upload_special_cast_palette.asm:22 STA PALETTE_UPLOAD_MODE
    case 0xC4ECA6: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/ending/upload_special_cast_palette.asm:22 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4ECA4.
    case 0xC4ECA7: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/ending/upload_special_cast_palette.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC4ECA9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/upload_special_cast_palette.asm:24 END_C_FUNCTION
    case 0xC4ECAB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/upload_special_cast_palette.asm:24 END_C_FUNCTION
    case 0xC4ECAC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
