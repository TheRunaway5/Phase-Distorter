// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C3/C3E450.asm (unresolved).
bool execute_unresolved_c3_c3e450_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E450.asm:4 BEGIN_C_FUNCTION
    case 0xC1004A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC1004C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC1004D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC1004E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1004E.
    case 0xC10050: cpu.execute_instruction<0xFF>(0x02AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC10051: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:11 LDA FRAME_COUNTER
    case 0xC10052: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/unknown/C3/C3E450.asm:11 LDA FRAME_COUNTER
    // Overlapping static entry reached from 0xC10050.
    case 0xC10054: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C3/C3E450.asm:12 AND #$00FF
    case 0xC10055: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E450.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC10055.
    case 0xC10057: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C3/C3E450.asm:13 AND #$0004
    case 0xC10058: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/unknown/C3/C3E450.asm:13 AND #$0004
    // Overlapping static entry reached from 0xC10058.
    case 0xC1005A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E450.asm:14 BEQ @UNKNOWN0
    case 0xC1005B: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC1005D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x001F1D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1005D.
    case 0xC1005F: cpu.execute_instruction<0x1F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC10060: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC10062: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC1005F.
    case 0xC10063: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC10062.
    case 0xC10064: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC10065: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC10063.
    case 0xC10066: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:16 LDA GAME_STATE+game_state::text_flavour
    case 0xC10067: cpu.execute_instruction<0xAD>(0x009C7E, 3); return true;
    // src/unknown/C3/C3E450.asm:17 AND #$00FF
    case 0xC1006A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E450.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC1006A.
    case 0xC1006C: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E450.asm:18 DEC
    case 0xC1006D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C3/C3E450.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC1006E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C3/C3E450.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC10070: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C3/C3E450.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC10071: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E450.asm:20 TAX
    case 0xC10073: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:21 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC10074: cpu.execute_instruction<0xBF>(0xE01F0E, 4); return true;
    // src/unknown/C3/C3E450.asm:22 CLC
    case 0xC10078: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:23 ADC #8
    case 0xC10079: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C3/C3E450.asm:23 ADC #8
    // Overlapping static entry reached from 0xC10079.
    case 0xC1007B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3E450.asm:24 CLC
    case 0xC1007C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:25 ADC @VIRTUAL06
    case 0xC1007D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3E450.asm:26 STA @VIRTUAL06
    case 0xC1007F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3E450.asm:27 BRA @UNKNOWN1
    case 0xC10081: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC10083: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x001F1D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC10083.
    case 0xC10085: cpu.execute_instruction<0x1F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC10086: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC10088: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC10085.
    case 0xC10089: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC10088.
    case 0xC1008A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC1008B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC10089.
    case 0xC1008C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:30 LDA GAME_STATE+game_state::text_flavour
    case 0xC1008D: cpu.execute_instruction<0xAD>(0x009C7E, 3); return true;
    // src/unknown/C3/C3E450.asm:31 AND #$00FF
    case 0xC10090: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E450.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC10090.
    case 0xC10092: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E450.asm:32 DEC
    case 0xC10093: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C3/C3E450.asm:33 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC10094: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C3/C3E450.asm:33 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC10096: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C3/C3E450.asm:33 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC10097: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E450.asm:34 TAX
    case 0xC10099: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:35 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC1009A: cpu.execute_instruction<0xBF>(0xE01F0E, 4); return true;
    // src/unknown/C3/C3E450.asm:35 LDA f:TEXT_WINDOW_PROPERTIES,X
    // Overlapping static entry reached from 0xC10B64.
    case 0xC1009D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000018, 2); else cpu.execute_instruction<0xE0>(0x006918, 3); return true;
    // src/unknown/C3/C3E450.asm:36 CLC
    case 0xC1009E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:37 ADC #40
    case 0xC1009F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/unknown/C3/C3E450.asm:37 ADC #40
    // Overlapping static entry reached from 0xC1009D.
    case 0xC100A0: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:37 ADC #40
    // Overlapping static entry reached from 0xC1009F.
    case 0xC100A1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3E450.asm:38 CLC
    case 0xC100A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:39 ADC @VIRTUAL06
    case 0xC100A3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3E450.asm:40 STA @VIRTUAL06
    case 0xC100A5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC100A7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC100A9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC100AB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC100AD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3E450.asm:43 LDX #BPP2PALETTE_SIZE
    case 0xC100AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C3/C3E450.asm:43 LDX #BPP2PALETTE_SIZE
    // Overlapping static entry reached from 0xC100AF.
    case 0xC100B1: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3E450.asm:44 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 5
    case 0xC100B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000228, 3); return true;
    // src/unknown/C3/C3E450.asm:44 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 5
    // Overlapping static entry reached from 0xC100B2.
    case 0xC100B4: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C3/C3E450.asm:45 JSL MEMCPY16
    case 0xC100B5: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C3/C3E450.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC100B9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3E450.asm:47 LDA #PALETTE_UPLOAD::FULL
    case 0xC100BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C3/C3E450.asm:48 STA PALETTE_UPLOAD_MODE
    case 0xC100BD: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C3/C3E450.asm:48 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC100BB.
    case 0xC100BE: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C3/C3E450.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC100C0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3E450.asm:50 END_C_FUNCTION
    case 0xC100C2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C3/C3E450.asm:50 END_C_FUNCTION
    case 0xC100C3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3E4EF.asm (unresolved).
bool execute_unresolved_c3_c3e4ef_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E4EF.asm:4 BEGIN_C_FUNCTION
    case 0xC10103: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E4EF.asm:11 END_STACK_VARS
    case 0xC10105: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E4EF.asm:11 END_STACK_VARS
    case 0xC10106: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E4EF.asm:11 END_STACK_VARS
    case 0xC10107: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E4EF.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC10107.
    case 0xC10109: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E4EF.asm:11 END_STACK_VARS
    case 0xC1010A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3E4EF.asm:12 LDA #0
    case 0xC1010B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3E4EF.asm:12 LDA #0
    // Overlapping static entry reached from 0xC1010B.
    case 0xC1010D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3E4EF.asm:13 STA @LOCAL00
    case 0xC1010E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3E4EF.asm:14 BRA @UNKNOWN2
    case 0xC10110: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C3/C3E4EF.asm:16 LDY #.SIZEOF(window_stats)
    case 0xC10112: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C3/C3E4EF.asm:16 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10112.
    case 0xC10114: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3E4EF.asm:17 JSL MULT168
    case 0xC10115: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3E4EF.asm:18 TAX
    case 0xC10119: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E4EF.asm:19 LDA WINDOW_STATS + window_stats::id,X
    case 0xC1011A: cpu.execute_instruction<0xBD>(0x0089C6, 3); return true;
    // src/unknown/C3/C3E4EF.asm:20 CMP #.LOWORD(-1)
    case 0xC1011D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E4EF.asm:20 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1011D.
    case 0xC1011F: cpu.execute_instruction<0xFF>(0xA504D0, 4); return true;
    // src/unknown/C3/C3E4EF.asm:21 BNE @UNKNOWN1
    case 0xC10120: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C3/C3E4EF.asm:22 LDA @LOCAL00
    case 0xC10122: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3E4EF.asm:22 LDA @LOCAL00
    // Overlapping static entry reached from 0xC1011F.
    case 0xC10123: cpu.execute_instruction<0x0E>(0x000D80, 3); return true;
    // src/unknown/C3/C3E4EF.asm:23 BRA @UNKNOWN3
    case 0xC10124: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C3/C3E4EF.asm:25 LDA @LOCAL00
    case 0xC10126: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3E4EF.asm:26 INC
    case 0xC10128: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3E4EF.asm:27 STA @LOCAL00
    case 0xC10129: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3E4EF.asm:29 CMP #8
    case 0xC1012B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C3/C3E4EF.asm:29 CMP #8
    // Overlapping static entry reached from 0xC1012B.
    case 0xC1012D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3E4EF.asm:30 BNE @UNKNOWN0
    case 0xC1012E: cpu.execute_instruction<0xD0>(0x0000E2, 2); return true;
    // src/unknown/C3/C3E4EF.asm:31 LDA #.LOWORD(-1)
    case 0xC10130: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E4EF.asm:31 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10130.
    case 0xC10132: cpu.execute_instruction<0xFF>(0xC2602B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3E4EF.asm:33 END_C_FUNCTION
    case 0xC10133: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C3/C3E4EF.asm:33 END_C_FUNCTION
    case 0xC10134: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3E6F8-jp.asm (unresolved).
bool execute_unresolved_c3_c3e6f8_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C3/C3E6F8-jp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC10BDB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:5 END_STACK_VARS
    case 0xC10BDD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:5 END_STACK_VARS
    case 0xC10BDE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:5 END_STACK_VARS
    case 0xC10BDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC10BDF.
    case 0xC10BE1: cpu.execute_instruction<0xFF>(0x08AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:5 END_STACK_VARS
    case 0xC10BE2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:6 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC10BE3: cpu.execute_instruction<0xAD>(0x008D08, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:6 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC10BE1.
    case 0xC10BE5: cpu.execute_instruction<0x8D>(0x00FFC9, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:7 CMP #$FFFF
    case 0xC10BE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:7 CMP #$FFFF
    // Overlapping static entry reached from 0xC10BE6.
    case 0xC10BE8: cpu.execute_instruction<0xFF>(0xAD51F0, 4); return true;
    // src/unknown/C3/C3E6F8-jp.asm:8 BEQ @RETURN
    case 0xC10BE9: cpu.execute_instruction<0xF0>(0x000051, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:9 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC10BEB: cpu.execute_instruction<0xAD>(0x008D08, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:9 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC10BE8.
    case 0xC10BEC: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:9 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC10BEC.
    case 0xC10BED: cpu.execute_instruction<0x8D>(0x000485, 3); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:10 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10BEE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:10 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10BF0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:10 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10BF1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:10 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10BF3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:10 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10BF4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:11 STA @VIRTUAL02
    case 0xC10BF6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:12 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC10BF8: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:13 AND #$00FF
    case 0xC10BFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC10BFB.
    case 0xC10BFD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:14 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10BFE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:14 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:14 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C01: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:14 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/unknown/C3/C3E6F8-jp.asm:14 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C04: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:15 PHA
    case 0xC10C06: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:16 ASL
    case 0xC10C07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:17 PLA
    case 0xC10C08: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:18 ROR
    case 0xC10C09: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:19 STA @VIRTUAL04
    case 0xC10C0A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:20 LDA #$0010
    case 0xC10C0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:20 LDA #$0010
    // Overlapping static entry reached from 0xC10C0C.
    case 0xC10C0E: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:21 SEC
    case 0xC10C0F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:22 SBC @VIRTUAL04
    case 0xC10C10: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:23 CLC
    case 0xC10C12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:24 ADC @VIRTUAL02
    case 0xC10C13: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:25 ASL
    case 0xC10C15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:26 CLC
    case 0xC10C16: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:27 ADC #.LOWORD(BG2_BUFFER)
    case 0xC10C17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:27 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC10C17.
    case 0xC10C19: cpu.execute_instruction<0x81>(0x000018, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:28 CLC
    case 0xC10C1A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:29 ADC #(ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2
    case 0xC10C1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000480, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:29 ADC #(ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2
    // Overlapping static entry reached from 0xC10C1B.
    case 0xC10C1D: cpu.execute_instruction<0x04>(0x0000A8, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:30 TAY
    case 0xC10C1E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:31 LDX #$0007
    case 0xC10C1F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000007, 2); else cpu.execute_instruction<0xA2>(0x000007, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:31 LDX #$0007
    // Overlapping static entry reached from 0xC10C1F.
    case 0xC10C21: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:32 BRA @UNKNOWN2
    case 0xC10C22: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:34 LDA #$0000
    case 0xC10C24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:34 LDA #$0000
    // Overlapping static entry reached from 0xC10C24.
    case 0xC10C26: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:35 STA __BSS_START__,Y
    case 0xC10C27: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:36 INY
    case 0xC10C2A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:37 INY
    case 0xC10C2B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:38 DEX
    case 0xC10C2C: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:40 BNE @UNKNOWN1
    case 0xC10C2D: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:41 LDA #$FFFF
    case 0xC10C2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:41 LDA #$FFFF
    // Overlapping static entry reached from 0xC10C2F.
    case 0xC10C31: cpu.execute_instruction<0xFF>(0x8D088D, 4); return true;
    // src/unknown/C3/C3E6F8-jp.asm:42 STA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC10C32: cpu.execute_instruction<0x8D>(0x008D08, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC10C35: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:44 LDA #$0001
    case 0xC10C37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:45 STA REDRAW_ALL_WINDOWS
    case 0xC10C39: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:45 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10C37.
    case 0xC10C3A: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:45 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10C3A.
    case 0xC10C3B: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/unknown/C3/C3E6F8-jp.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC10C3C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3E6F8-jp.asm:48 PLD
    case 0xC10C3E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8-jp.asm:49 RTS
    case 0xC10C3F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3E6F8_redirect-jp.asm (unresolved).
bool execute_unresolved_c3_c3e6f8_redirect_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C3/C3E6F8_redirect-jp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1DBAF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C3/C3E6F8_redirect-jp.asm:4 JSR UNKNOWN_C3E6F8
    case 0xC1DBB1: cpu.execute_instruction<0x20>(0x000BDB, 3); return true;
    // src/unknown/C3/C3E6F8_redirect-jp.asm:5 RTL
    case 0xC1DBB4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3E7E3.asm (unresolved).
bool execute_unresolved_c3_c3e7e3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E7E3.asm:4 BEGIN_C_FUNCTION
    case 0xC1193C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E7E3.asm:4 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC11939.
    case 0xC1193D: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC1193E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC1193F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC11940: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC11941: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC11941.
    case 0xC11943: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC11944: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC11945: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    case 0xC11946: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11943.
    case 0xC11947: cpu.execute_instruction<0xFF>(0x5EF0FF, 4); return true;
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11946.
    case 0xC11948: cpu.execute_instruction<0xFF>(0x0A5EF0, 4); return true;
    // src/unknown/C3/C3E7E3.asm:15 BEQ @UNKNOWN2
    case 0xC11949: cpu.execute_instruction<0xF0>(0x00005E, 2); return true;
    // src/unknown/C3/C3E7E3.asm:16 ASL
    case 0xC1194B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:17 TAX
    case 0xC1194C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC1194D: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C3/C3E7E3.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC11950: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C3/C3E7E3.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11950.
    case 0xC11952: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3E7E3.asm:20 JSL MULT168
    case 0xC11953: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3E7E3.asm:21 CLC
    case 0xC11957: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:22 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11958: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/unknown/C3/C3E7E3.asm:22 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11958.
    case 0xC1195A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x00B9A8, 3); return true;
    // src/unknown/C3/C3E7E3.asm:23 TAY
    case 0xC1195B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:27 LDA a:window_stats::current_option,Y
    case 0xC1195C: cpu.execute_instruction<0xB9>(0x00002B, 3); return true;
    // src/unknown/C3/C3E7E3.asm:27 LDA a:window_stats::current_option,Y
    // Overlapping static entry reached from 0xC1195A.
    case 0xC1195D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:27 LDA a:window_stats::current_option,Y
    // Overlapping static entry reached from 0xC1195D.
    case 0xC1195E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3E7E3.asm:28 CMP #.LOWORD(-1)
    case 0xC1195F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E7E3.asm:28 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1195F.
    case 0xC11961: cpu.execute_instruction<0xFF>(0x8545F0, 4); return true;
    // src/unknown/C3/C3E7E3.asm:29 BEQ @UNKNOWN2
    case 0xC11962: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11964: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11961.
    case 0xC11965: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11966: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11967: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11968: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1196A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1196B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1196D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1196E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:31 CLC
    case 0xC1196F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11970: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/unknown/C3/C3E7E3.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11970.
    case 0xC11972: cpu.execute_instruction<0x8D>(0x00A9AA, 3); return true;
    // src/unknown/C3/C3E7E3.asm:33 TAX
    case 0xC11973: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    case 0xC11974: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    // Overlapping static entry reached from 0xC11972.
    case 0xC11975: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    // Overlapping static entry reached from 0xC11974.
    case 0xC11976: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3E7E3.asm:36 STA a:menu_option::unknown0,X
    case 0xC11977: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3E7E3.asm:37 LDA a:menu_option::next,X
    case 0xC1197A: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C3/C3E7E3.asm:38 CMP #.LOWORD(-1)
    case 0xC1197D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E7E3.asm:38 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1197D.
    case 0xC1197F: cpu.execute_instruction<0xFF>(0x8512F0, 4); return true;
    // src/unknown/C3/C3E7E3.asm:39 BEQ @UNKNOWN1
    case 0xC11980: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11982: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1197F.
    case 0xC11983: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11984: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11985: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11986: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11988: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11989: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1198B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1198C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:41 CLC
    case 0xC1198D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:42 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1198E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/unknown/C3/C3E7E3.asm:42 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1198E.
    case 0xC11990: cpu.execute_instruction<0x8D>(0x0080AA, 3); return true;
    // src/unknown/C3/C3E7E3.asm:43 TAX
    case 0xC11991: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:44 BRA @UNKNOWN0
    case 0xC11992: cpu.execute_instruction<0x80>(0x0000E0, 2); return true;
    // src/unknown/C3/C3E7E3.asm:44 BRA @UNKNOWN0
    // Overlapping static entry reached from 0xC11990.
    case 0xC11993: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000A9, 2); else cpu.execute_instruction<0xE0>(0x00FFA9, 3); return true;
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    case 0xC11994: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11993.
    case 0xC11995: cpu.execute_instruction<0xFF>(0x2F99FF, 4); return true;
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11994.
    case 0xC11996: cpu.execute_instruction<0xFF>(0x002F99, 4); return true;
    // src/unknown/C3/C3E7E3.asm:50 STA a:window_stats::selected_option,Y
    case 0xC11997: cpu.execute_instruction<0x99>(0x00002F, 3); return true;
    // src/unknown/C3/C3E7E3.asm:50 STA a:window_stats::selected_option,Y
    // Overlapping static entry reached from 0xC11995.
    case 0xC11999: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C3/C3E7E3.asm:51 STA a:window_stats::option_count,Y
    case 0xC1199A: cpu.execute_instruction<0x99>(0x00002D, 3); return true;
    // src/unknown/C3/C3E7E3.asm:52 STA a:window_stats::current_option,Y
    case 0xC1199D: cpu.execute_instruction<0x99>(0x00002B, 3); return true;
    // src/unknown/C3/C3E7E3.asm:53 LDA #1
    case 0xC119A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E7E3.asm:53 LDA #1
    // Overlapping static entry reached from 0xC119A0.
    case 0xC119A2: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C3/C3E7E3.asm:54 STA a:window_stats::unknown49,Y
    case 0xC119A3: cpu.execute_instruction<0x99>(0x000031, 3); return true;
    // src/unknown/C3/C3E7E3.asm:55 STA a:window_stats::menu_page_number,Y
    case 0xC119A6: cpu.execute_instruction<0x99>(0x000033, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3E7E3.asm:57 END_C_FUNCTION
    case 0xC119A9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C3/C3E7E3.asm:57 END_C_FUNCTION
    case 0xC119AA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3E9F7.asm (unresolved).
bool execute_unresolved_c3_c3e9f7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E9F7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3E5B7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    case 0xC3E5B9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    case 0xC3E5BA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    case 0xC3E5BB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    case 0xC3E5BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E5BC.
    case 0xC3E5BE: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    case 0xC3E5BF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    case 0xC3E5C0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:10 STX @VIRTUAL02
    case 0xC3E5C1: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E5BE.
    case 0xC3E5C2: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:11 TAX
    case 0xC3E5C3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:12 TXY
    case 0xC3E5C4: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:13 DEY
    case 0xC3E5C5: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:14 STY @LOCAL00
    case 0xC3E5C6: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:15 TYA
    case 0xC3E5C8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3E5C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E5C9.
    case 0xC3E5CB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E9F7.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3E5CC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3E9F7.asm:17 TAX
    case 0xC3E5D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:18 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::WEAPON,X
    case 0xC3E5D1: cpu.execute_instruction<0xBD>(0x009CAF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:19 AND #$00FF
    case 0xC3E5D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC3E5D4.
    case 0xC3E5D6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:20 BEQ @UNKNOWN0
    case 0xC3E5D7: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C3/C3E9F7.asm:21 AND #$00FF
    case 0xC3E5D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC3E5D9.
    case 0xC3E5DB: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:22 DEC
    case 0xC3E5DC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:23 STA @VIRTUAL04
    case 0xC3E5DD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:24 TXA
    case 0xC3E5DF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:25 CLC
    case 0xC3E5E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:26 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC3E5E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:26 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3E5E1.
    case 0xC3E5E3: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:27 CLC
    case 0xC3E5E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:28 ADC @VIRTUAL04
    case 0xC3E5E5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:28 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3E5E3.
    case 0xC3E5E6: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:29 TAX
    case 0xC3E5E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:30 LDA __BSS_START__,X
    case 0xC3E5E8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:31 AND #$00FF
    case 0xC3E5EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC3E5EB.
    case 0xC3E5ED: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:32 CMP @VIRTUAL02
    case 0xC3E5EE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:33 BNE @UNKNOWN0
    case 0xC3E5F0: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C3/C3E9F7.asm:34 LDA #1
    case 0xC3E5F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:34 LDA #1
    // Overlapping static entry reached from 0xC3E5F2.
    case 0xC3E5F4: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C3/C3E9F7.asm:35 JMP @UNKNOWN4
    case 0xC3E5F5: cpu.execute_instruction<0x4C>(0x00E68E, 3); return true;
    // src/unknown/C3/C3E9F7.asm:37 LDY @LOCAL00
    case 0xC3E5F8: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:38 TYA
    case 0xC3E5FA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3E5FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E5FB.
    case 0xC3E5FD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E9F7.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3E5FE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3E9F7.asm:40 TAX
    case 0xC3E602: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:41 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::BODY,X
    case 0xC3E603: cpu.execute_instruction<0xBD>(0x009CB0, 3); return true;
    // src/unknown/C3/C3E9F7.asm:42 AND #$00FF
    case 0xC3E606: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC3E606.
    case 0xC3E608: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:43 BEQ @UNKNOWN1
    case 0xC3E609: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:44 AND #$00FF
    case 0xC3E60B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC3E60B.
    case 0xC3E60D: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:45 DEC
    case 0xC3E60E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:46 STA @VIRTUAL04
    case 0xC3E60F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:47 TXA
    case 0xC3E611: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:48 CLC
    case 0xC3E612: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:49 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC3E613: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:49 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3E613.
    case 0xC3E615: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:50 CLC
    case 0xC3E616: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:51 ADC @VIRTUAL04
    case 0xC3E617: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:51 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3E615.
    case 0xC3E618: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:52 TAX
    case 0xC3E619: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:53 LDA __BSS_START__,X
    case 0xC3E61A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:54 AND #$00FF
    case 0xC3E61D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC3E61D.
    case 0xC3E61F: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:55 CMP @VIRTUAL02
    case 0xC3E620: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:56 BNE @UNKNOWN1
    case 0xC3E622: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3E9F7.asm:57 LDA #1
    case 0xC3E624: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:57 LDA #1
    // Overlapping static entry reached from 0xC3E624.
    case 0xC3E626: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E9F7.asm:58 BRA @UNKNOWN4
    case 0xC3E627: cpu.execute_instruction<0x80>(0x000065, 2); return true;
    // src/unknown/C3/C3E9F7.asm:60 LDY @LOCAL00
    case 0xC3E629: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:61 TYA
    case 0xC3E62B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3E62C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E62C.
    case 0xC3E62E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E9F7.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3E62F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3E9F7.asm:63 TAX
    case 0xC3E633: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:64 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::ARMS,X
    case 0xC3E634: cpu.execute_instruction<0xBD>(0x009CB1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:65 AND #$00FF
    case 0xC3E637: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC3E637.
    case 0xC3E639: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:66 BEQ @UNKNOWN2
    case 0xC3E63A: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:67 AND #$00FF
    case 0xC3E63C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC3E63C.
    case 0xC3E63E: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:68 DEC
    case 0xC3E63F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:69 STA @VIRTUAL04
    case 0xC3E640: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:70 TXA
    case 0xC3E642: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:71 CLC
    case 0xC3E643: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:72 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC3E644: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:72 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3E644.
    case 0xC3E646: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:73 CLC
    case 0xC3E647: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:74 ADC @VIRTUAL04
    case 0xC3E648: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:74 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3E646.
    case 0xC3E649: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:75 TAX
    case 0xC3E64A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:76 LDA __BSS_START__,X
    case 0xC3E64B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:77 AND #$00FF
    case 0xC3E64E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC3E64E.
    case 0xC3E650: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:78 CMP @VIRTUAL02
    case 0xC3E651: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:79 BNE @UNKNOWN2
    case 0xC3E653: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3E9F7.asm:80 LDA #1
    case 0xC3E655: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:80 LDA #1
    // Overlapping static entry reached from 0xC3E655.
    case 0xC3E657: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E9F7.asm:81 BRA @UNKNOWN4
    case 0xC3E658: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C3/C3E9F7.asm:83 LDY @LOCAL00
    case 0xC3E65A: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:84 TYA
    case 0xC3E65C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3E65D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E65D.
    case 0xC3E65F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E9F7.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3E660: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3E9F7.asm:86 TAX
    case 0xC3E664: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:87 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::OTHER,X
    case 0xC3E665: cpu.execute_instruction<0xBD>(0x009CB2, 3); return true;
    // src/unknown/C3/C3E9F7.asm:88 AND #$00FF
    case 0xC3E668: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC3E668.
    case 0xC3E66A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:89 BEQ @UNKNOWN3
    case 0xC3E66B: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:90 AND #$00FF
    case 0xC3E66D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC3E66D.
    case 0xC3E66F: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:91 DEC
    case 0xC3E670: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:92 STA @VIRTUAL04
    case 0xC3E671: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:93 TXA
    case 0xC3E673: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:94 CLC
    case 0xC3E674: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:95 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC3E675: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:95 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3E675.
    case 0xC3E677: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:96 CLC
    case 0xC3E678: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:97 ADC @VIRTUAL04
    case 0xC3E679: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:97 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3E677.
    case 0xC3E67A: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:98 TAX
    case 0xC3E67B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:99 LDA __BSS_START__,X
    case 0xC3E67C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:100 AND #$00FF
    case 0xC3E67F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC3E67F.
    case 0xC3E681: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:101 CMP @VIRTUAL02
    case 0xC3E682: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:102 BNE @UNKNOWN3
    case 0xC3E684: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3E9F7.asm:103 LDA #1
    case 0xC3E686: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:103 LDA #1
    // Overlapping static entry reached from 0xC3E686.
    case 0xC3E688: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E9F7.asm:104 BRA @UNKNOWN4
    case 0xC3E689: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3E9F7.asm:106 LDA #0
    case 0xC3E68B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:106 LDA #0
    // Overlapping static entry reached from 0xC3E68B.
    case 0xC3E68D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3E9F7.asm:108 END_C_FUNCTION
    case 0xC3E68E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3E9F7.asm:108 END_C_FUNCTION
    case 0xC3E68F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EAD0.asm (unresolved).
bool execute_unresolved_c3_c3ead0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EAD0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3E690: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    case 0xC3E692: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    case 0xC3E693: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    case 0xC3E694: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    case 0xC3E695: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E695.
    case 0xC3E697: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    case 0xC3E698: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    case 0xC3E699: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E69A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:8 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3E697.
    case 0xC3E69B: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/unknown/C3/C3EAD0.asm:9 STA @VIRTUAL00
    case 0xC3E69C: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C3/C3EAD0.asm:10 LDX #0
    case 0xC3E69E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C3/C3EAD0.asm:10 LDX #0
    // Overlapping static entry reached from 0xC3E69E.
    case 0xC3E6A0: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C3/C3EAD0.asm:11 STX @LOCAL00
    case 0xC3E6A1: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:12 BRA @UNKNOWN2
    case 0xC3E6A3: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C3/C3EAD0.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E6A5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:15 CMP @VIRTUAL00
    case 0xC3E6A7: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C3/C3EAD0.asm:16 BNE @UNKNOWN1
    case 0xC3E6A9: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C3/C3EAD0.asm:17 LDX @LOCAL00
    case 0xC3E6AB: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC3E6AD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:19 TXA
    case 0xC3E6AF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:20 JSL IS_VALID_ITEM_TRANSFORMATION
    case 0xC3E6B0: cpu.execute_instruction<0x22>(0xC46518, 4); return true;
    // src/unknown/C3/C3EAD0.asm:21 CMP #0
    case 0xC3E6B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C3/C3EAD0.asm:21 CMP #0
    // Overlapping static entry reached from 0xC3E6B4.
    case 0xC3E6B6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EAD0.asm:22 BNE @UNKNOWN3
    case 0xC3E6B7: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // src/unknown/C3/C3EAD0.asm:23 LDX @LOCAL00
    case 0xC3E6B9: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:24 TXA
    case 0xC3E6BB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:25 JSL INITIALIZE_ITEM_TRANSFORMATION
    case 0xC3E6BC: cpu.execute_instruction<0x22>(0xC46535, 4); return true;
    // src/unknown/C3/C3EAD0.asm:26 BRA @UNKNOWN3
    case 0xC3E6C0: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C3/C3EAD0.asm:28 LDX @LOCAL00
    case 0xC3E6C2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:29 INX
    case 0xC3E6C4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:30 STX @LOCAL00
    case 0xC3E6C5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC3E6C7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:33 TXA
    case 0xC3E6C9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/unknown/C3/C3EAD0.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3E6CA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/unknown/C3/C3EAD0.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3E6CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/unknown/C3/C3EAD0.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3E6CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/unknown/C3/C3EAD0.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3E6CE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EAD0.asm:35 TAX
    case 0xC3E6D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:36 LDA f:TIMED_ITEM_TRANSFORMATION_TABLE + timed_item_transformation::item,X
    case 0xC3E6D1: cpu.execute_instruction<0xBF>(0xD5F41B, 4); return true;
    // src/unknown/C3/C3EAD0.asm:37 AND #$00FF
    case 0xC3E6D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EAD0.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC3E6D5.
    case 0xC3E6D7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EAD0.asm:38 BNE @UNKNOWN0
    case 0xC3E6D8: cpu.execute_instruction<0xD0>(0x0000CB, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EAD0.asm:40 END_C_FUNCTION
    case 0xC3E6DA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EAD0.asm:40 END_C_FUNCTION
    case 0xC3E6DB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EB1C.asm (unresolved).
bool execute_unresolved_c3_c3eb1c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EB1C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3E6DC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    case 0xC3E6DE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    case 0xC3E6DF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    case 0xC3E6E0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    case 0xC3E6E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E6E1.
    case 0xC3E6E3: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    case 0xC3E6E4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    case 0xC3E6E5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E6E6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:11 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3E6E3.
    case 0xC3E6E7: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/unknown/C3/C3EB1C.asm:12 STA @VIRTUAL00
    case 0xC3E6E8: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C3/C3EB1C.asm:13 LDY #0
    case 0xC3E6EA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C3/C3EB1C.asm:13 LDY #0
    // Overlapping static entry reached from 0xC3E6EA.
    case 0xC3E6EC: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C3/C3EB1C.asm:14 STY @LOCAL03
    case 0xC3E6ED: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C3/C3EB1C.asm:15 BRA @UNKNOWN1
    case 0xC3E6EF: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3EB1C.asm:17 INY
    case 0xC3E6F1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:18 STY @LOCAL03
    case 0xC3E6F2: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C3/C3EB1C.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC3E6F4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:21 TYA
    case 0xC3E6F6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/unknown/C3/C3EB1C.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3E6F7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/unknown/C3/C3EB1C.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3E6F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/unknown/C3/C3EB1C.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3E6FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/unknown/C3/C3EB1C.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3E6FB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EB1C.asm:23 TAX
    case 0xC3E6FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:24 LDA f:TIMED_ITEM_TRANSFORMATION_TABLE,X
    case 0xC3E6FE: cpu.execute_instruction<0xBF>(0xD5F41B, 4); return true;
    // src/unknown/C3/C3EB1C.asm:25 AND #$00FF
    case 0xC3E702: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC3E702.
    case 0xC3E704: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EB1C.asm:26 BEQ @UNKNOWN2
    case 0xC3E705: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C3/C3EB1C.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E707: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:28 CMP @VIRTUAL00
    case 0xC3E709: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C3/C3EB1C.asm:29 BNE @UNKNOWN0
    case 0xC3E70B: cpu.execute_instruction<0xD0>(0x0000E4, 2); return true;
    // src/unknown/C3/C3EB1C.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC3E70D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:32 TYA
    case 0xC3E70F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:33 JSL UNKNOWN_C48F98
    case 0xC3E710: cpu.execute_instruction<0x22>(0xC465E2, 4); return true;
    // src/unknown/C3/C3EB1C.asm:34 LDX #0
    case 0xC3E714: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C3/C3EB1C.asm:34 LDX #0
    // Overlapping static entry reached from 0xC3E714.
    case 0xC3E716: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C3/C3EB1C.asm:35 STX @LOCAL02
    case 0xC3E717: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C3/C3EB1C.asm:36 BRA @UNKNOWN10
    case 0xC3E719: cpu.execute_instruction<0x80>(0x000066, 2); return true;
    // src/unknown/C3/C3EB1C.asm:39 TXA
    case 0xC3E71B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:40 CLC
    case 0xC3E71C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:41 ADC #.LOWORD(GAME_STATE)
    case 0xC3E71D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C3/C3EB1C.asm:41 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC3E71D.
    case 0xC3E71F: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:42 TAX
    case 0xC3E720: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:43 LDA a:game_state::party_members,X
    case 0xC3E721: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/unknown/C3/C3EB1C.asm:47 AND #$00FF
    case 0xC3E724: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC3E724.
    case 0xC3E726: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3EB1C.asm:48 DEC
    case 0xC3E727: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:49 LDY #.SIZEOF(char_struct)
    case 0xC3E728: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3EB1C.asm:49 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E728.
    case 0xC3E72A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EB1C.asm:50 JSL MULT168
    case 0xC3E72B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3EB1C.asm:51 CLC
    case 0xC3E72F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:52 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC3E730: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C3/C3EB1C.asm:52 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC3E730.
    case 0xC3E732: cpu.execute_instruction<0x9C>(0x000485, 3); return true;
    // src/unknown/C3/C3EB1C.asm:53 STA @VIRTUAL04
    case 0xC3E733: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3EB1C.asm:54 LDA #0
    case 0xC3E735: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3EB1C.asm:54 LDA #0
    // Overlapping static entry reached from 0xC3E735.
    case 0xC3E737: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:55 STA @VIRTUAL02
    case 0xC3E738: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:56 STA @LOCAL01
    case 0xC3E73A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:57 BRA @UNKNOWN6
    case 0xC3E73C: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:59 LDA @VIRTUAL00
    case 0xC3E73E: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C3/C3EB1C.asm:60 AND #$00FF
    case 0xC3E740: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC3E740.
    case 0xC3E742: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:61 STA @VIRTUAL02
    case 0xC3E743: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:62 LDA @LOCAL00
    case 0xC3E745: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EB1C.asm:63 CMP @VIRTUAL02
    case 0xC3E747: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:64 BNE @UNKNOWN5
    case 0xC3E749: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C3/C3EB1C.asm:65 LDY @LOCAL03
    case 0xC3E74B: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C3/C3EB1C.asm:66 TYA
    case 0xC3E74D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:67 JSL INITIALIZE_ITEM_TRANSFORMATION
    case 0xC3E74E: cpu.execute_instruction<0x22>(0xC46535, 4); return true;
    // src/unknown/C3/C3EB1C.asm:68 BRA @UNKNOWN11
    case 0xC3E752: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C3/C3EB1C.asm:70 LDA @LOCAL01
    case 0xC3E754: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:71 STA @VIRTUAL02
    case 0xC3E756: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:72 INC @VIRTUAL02
    case 0xC3E758: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:73 LDA @VIRTUAL02
    case 0xC3E75A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:74 STA @LOCAL01
    case 0xC3E75C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:76 LDA #.SIZEOF(char_struct::items)
    case 0xC3E75E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C3/C3EB1C.asm:76 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC3E75E.
    case 0xC3E760: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3EB1C.asm:77 CLC
    case 0xC3E761: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:78 SBC @VIRTUAL02
    case 0xC3E762: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C3/C3EB1C.asm:79 BRANCHLTEQS @UNKNOWN9
    case 0xC3E764: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C3/C3EB1C.asm:79 BRANCHLTEQS @UNKNOWN9
    case 0xC3E766: cpu.execute_instruction<0x10>(0x000014, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C3/C3EB1C.asm:79 BRANCHLTEQS @UNKNOWN9
    case 0xC3E768: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C3/C3EB1C.asm:79 BRANCHLTEQS @UNKNOWN9
    case 0xC3E76A: cpu.execute_instruction<0x30>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:80 LDA @VIRTUAL04
    case 0xC3E76C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EB1C.asm:81 CLC
    case 0xC3E76E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:82 ADC @VIRTUAL02
    case 0xC3E76F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:83 TAX
    case 0xC3E771: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:84 LDA a:char_struct::items,X
    case 0xC3E772: cpu.execute_instruction<0xBD>(0x000022, 3); return true;
    // src/unknown/C3/C3EB1C.asm:85 AND #$00FF
    case 0xC3E775: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC3E775.
    case 0xC3E777: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:86 STA @LOCAL00
    case 0xC3E778: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EB1C.asm:87 BNE @UNKNOWN4
    case 0xC3E77A: cpu.execute_instruction<0xD0>(0x0000C2, 2); return true;
    // src/unknown/C3/C3EB1C.asm:89 LDX @LOCAL02
    case 0xC3E77C: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C3/C3EB1C.asm:90 INX
    case 0xC3E77E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:91 STX @LOCAL02
    case 0xC3E77F: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C3/C3EB1C.asm:93 LDA GAME_STATE + game_state::player_controlled_party_count
    case 0xC3E781: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C3/C3EB1C.asm:94 AND #$00FF
    case 0xC3E784: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC3E784.
    case 0xC3E786: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:95 STA @VIRTUAL02
    case 0xC3E787: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:96 TXA
    case 0xC3E789: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:97 CMP @VIRTUAL02
    case 0xC3E78A: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:98 BCC @UNKNOWN3
    case 0xC3E78C: cpu.execute_instruction<0x90>(0x00008D, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EB1C.asm:100 END_C_FUNCTION
    case 0xC3E78E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EB1C.asm:100 END_C_FUNCTION
    case 0xC3E78F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EBCA.asm (unresolved).
bool execute_unresolved_c3_c3ebca_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EBCA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3E790: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EBCA.asm:6 END_STACK_VARS
    case 0xC3E792: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EBCA.asm:6 END_STACK_VARS
    case 0xC3E793: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EBCA.asm:6 END_STACK_VARS
    case 0xC3E794: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EBCA.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E794.
    case 0xC3E796: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EBCA.asm:6 END_STACK_VARS
    case 0xC3E797: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:7 LDY #0
    case 0xC3E798: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C3/C3EBCA.asm:7 LDY #0
    // Overlapping static entry reached from 0xC3E798.
    case 0xC3E79A: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C3/C3EBCA.asm:8 STY @LOCAL00
    case 0xC3E79B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C3/C3EBCA.asm:9 BRA @UNKNOWN3
    case 0xC3E79D: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/unknown/C3/C3EBCA.asm:11 AND #$00FF
    case 0xC3E79F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EBCA.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC3E79F.
    case 0xC3E7A1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EBCA.asm:12 TAX
    case 0xC3E7A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:13 LDA #$00FF
    case 0xC3E7A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EBCA.asm:13 LDA #$00FF
    // Overlapping static entry reached from 0xC3E7A3.
    case 0xC3E7A5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EBCA.asm:14 JSL FIND_ITEM_IN_INVENTORY2
    case 0xC3E7A6: cpu.execute_instruction<0x22>(0xC43479, 4); return true;
    // src/unknown/C3/C3EBCA.asm:15 CMP #0
    case 0xC3E7AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C3/C3EBCA.asm:15 CMP #0
    // Overlapping static entry reached from 0xC3E7AA.
    case 0xC3E7AC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EBCA.asm:16 BEQ @UNKNOWN1
    case 0xC3E7AD: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C3/C3EBCA.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E7AF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EBCA.asm:18 LDA [@VIRTUAL06]
    case 0xC3E7B1: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:19 JSL UNKNOWN_C3EAD0
    case 0xC3E7B3: cpu.execute_instruction<0x22>(0xC3E690, 4); return true;
    // src/unknown/C3/C3EBCA.asm:20 BRA @UNKNOWN2
    case 0xC3E7B7: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C3/C3EBCA.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E7B9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EBCA.asm:23 LDA [@VIRTUAL06]
    case 0xC3E7BB: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:24 JSL UNKNOWN_C3EB1C
    case 0xC3E7BD: cpu.execute_instruction<0x22>(0xC3E6DC, 4); return true;
    // src/unknown/C3/C3EBCA.asm:27 LDY @LOCAL00
    case 0xC3E7C1: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3EBCA.asm:28 INY
    case 0xC3E7C3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:29 STY @LOCAL00
    case 0xC3E7C4: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3EBCA.asm:31 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC3E7C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00F41B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3EBCA.asm:31 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E7C6.
    case 0xC3E7C8: cpu.execute_instruction<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3EBCA.asm:31 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC3E7C9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3EBCA.asm:31 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC3E7CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3EBCA.asm:31 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E7CB.
    case 0xC3E7CD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3EBCA.asm:31 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC3E7CE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3EBCA.asm:32 TYA
    case 0xC3E7D0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/unknown/C3/C3EBCA.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3E7D1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/unknown/C3/C3EBCA.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3E7D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/unknown/C3/C3EBCA.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3E7D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/unknown/C3/C3EBCA.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3E7D5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EBCA.asm:34 CLC
    case 0xC3E7D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:35 ADC @VIRTUAL06
    case 0xC3E7D8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:36 STA @VIRTUAL06
    case 0xC3E7DA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:37 LDA [@VIRTUAL06]
    case 0xC3E7DC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:38 AND #$00FF
    case 0xC3E7DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EBCA.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC3E7DE.
    case 0xC3E7E0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EBCA.asm:39 BNE @UNKNOWN0
    case 0xC3E7E1: cpu.execute_instruction<0xD0>(0x0000BC, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EBCA.asm:40 END_C_FUNCTION
    case 0xC3E7E3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EBCA.asm:40 END_C_FUNCTION
    case 0xC3E7E4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EC1F.asm (unresolved).
bool execute_unresolved_c3_c3ec1f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EC1F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3E7E5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    case 0xC3E7E7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    case 0xC3E7E8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    case 0xC3E7E9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    case 0xC3E7EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E7EA.
    case 0xC3E7EC: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    case 0xC3E7ED: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    case 0xC3E7EE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:9 STX @VIRTUAL02
    case 0xC3E7EF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3EC1F.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E7EC.
    case 0xC3E7F0: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EC1F.asm:10 TAX
    case 0xC3E7F1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:11 BEQ @UNKNOWN1
    case 0xC3E7F2: cpu.execute_instruction<0xF0>(0x00005B, 2); return true;
    // src/unknown/C3/C3EC1F.asm:12 TXA
    case 0xC3E7F4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:13 DEC
    case 0xC3E7F5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:14 STA @LOCAL00
    case 0xC3E7F6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC1F.asm:15 CPY #0
    case 0xC3E7F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:15 CPY #0
    // Overlapping static entry reached from 0xC3E7F8.
    case 0xC3E7FA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EC1F.asm:16 BNE @UNKNOWN0
    case 0xC3E7FB: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C3/C3EC1F.asm:17 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3E7FD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3EC1F.asm:17 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3E7FF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3EC1F.asm:17 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3E801: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC1F.asm:18 LDA @LOCAL00
    case 0xC3E803: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC1F.asm:19 LDY #.SIZEOF(char_struct)
    case 0xC3E805: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3EC1F.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E805.
    case 0xC3E807: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC1F.asm:20 JSL MULT168
    case 0xC3E808: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3EC1F.asm:21 TAX
    case 0xC3E80C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:22 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC3E80D: cpu.execute_instruction<0xBD>(0x009C88, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3EC1F.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC3E810: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3EC1F.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC3E812: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3EC1F.asm:24 JSL MULT32
    case 0xC3E814: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3EC1F.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E818: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3EC1F.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3E818.
    case 0xC3E81A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C3/C3EC1F.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E81B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3EC1F.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E81D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3EC1F.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3E81D.
    case 0xC3E81F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C3/C3EC1F.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E820: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC1F.asm:26 JSL DIVISION32
    case 0xC3E822: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // src/unknown/C3/C3EC1F.asm:27 LDA @VIRTUAL06
    case 0xC3E826: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3EC1F.asm:28 STA @VIRTUAL02
    case 0xC3E828: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EC1F.asm:30 LDA @LOCAL00
    case 0xC3E82A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC1F.asm:31 LDY #.SIZEOF(char_struct)
    case 0xC3E82C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3EC1F.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E82C.
    case 0xC3E82E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC1F.asm:32 JSL MULT168
    case 0xC3E82F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3EC1F.asm:33 TAY
    case 0xC3E833: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:34 CLC
    case 0xC3E834: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    case 0xC3E835: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C5, 2); else cpu.execute_instruction<0x69>(0x009CC5, 3); return true;
    // src/unknown/C3/C3EC1F.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    // Overlapping static entry reached from 0xC3E835.
    case 0xC3E837: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/unknown/C3/C3EC1F.asm:36 TAX
    case 0xC3E838: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:37 LDA __BSS_START__,X
    case 0xC3E839: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:37 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3E837.
    case 0xC3E83A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C3/C3EC1F.asm:38 SEC
    case 0xC3E83C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:39 SBC @VIRTUAL02
    case 0xC3E83D: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C3/C3EC1F.asm:40 STA __BSS_START__,X
    case 0xC3E83F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:41 CMP PARTY_CHARACTERS+char_struct::max_hp,Y
    case 0xC3E842: cpu.execute_instruction<0xD9>(0x009C88, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C3/C3EC1F.asm:42 BLTEQ @UNKNOWN1
    case 0xC3E845: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C3/C3EC1F.asm:42 BLTEQ @UNKNOWN1
    case 0xC3E847: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C3/C3EC1F.asm:43 LDA #0
    case 0xC3E849: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:43 LDA #0
    // Overlapping static entry reached from 0xC3E849.
    case 0xC3E84B: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3EC1F.asm:44 STA __BSS_START__,X
    case 0xC3E84C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EC1F.asm:46 END_C_FUNCTION
    case 0xC3E84F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EC1F.asm:46 END_C_FUNCTION
    case 0xC3E850: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EC8B.asm (unresolved).
bool execute_unresolved_c3_c3ec8b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EC8B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3E851: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    case 0xC3E853: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    case 0xC3E854: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    case 0xC3E855: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    case 0xC3E856: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E856.
    case 0xC3E858: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    case 0xC3E859: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    case 0xC3E85A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:11 STX @VIRTUAL02
    case 0xC3E85B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E858.
    case 0xC3E85C: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EC8B.asm:12 TAX
    case 0xC3E85D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C3/C3EC8B.asm:13 BEQL @UNKNOWN3
    case 0xC3E85E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C3/C3EC8B.asm:13 BEQL @UNKNOWN3
    case 0xC3E860: cpu.execute_instruction<0x4C>(0x00E8F0, 3); return true;
    // src/unknown/C3/C3EC8B.asm:14 TXA
    case 0xC3E863: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:15 DEC
    case 0xC3E864: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:16 STA @VIRTUAL04
    case 0xC3E865: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:17 CPY #0
    case 0xC3E867: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:17 CPY #0
    // Overlapping static entry reached from 0xC3E867.
    case 0xC3E869: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EC8B.asm:18 BNE @UNKNOWN1
    case 0xC3E86A: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C3/C3EC8B.asm:19 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3E86C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3EC8B.asm:19 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3E86E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3EC8B.asm:19 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3E870: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC8B.asm:20 LDA @VIRTUAL04
    case 0xC3E872: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:21 LDY #.SIZEOF(char_struct)
    case 0xC3E874: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3EC8B.asm:21 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E874.
    case 0xC3E876: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC8B.asm:22 JSL MULT168
    case 0xC3E877: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3EC8B.asm:23 TAX
    case 0xC3E87B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:24 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC3E87C: cpu.execute_instruction<0xBD>(0x009C88, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3EC8B.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC3E87F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3EC8B.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC3E881: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3EC8B.asm:26 JSL MULT32
    case 0xC3E883: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3EC8B.asm:27 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E887: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3EC8B.asm:27 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3E887.
    case 0xC3E889: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C3/C3EC8B.asm:27 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E88A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3EC8B.asm:27 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E88C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3EC8B.asm:27 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3E88C.
    case 0xC3E88E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C3/C3EC8B.asm:27 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E88F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC8B.asm:28 JSL DIVISION32
    case 0xC3E891: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // src/unknown/C3/C3EC8B.asm:29 LDA @VIRTUAL06
    case 0xC3E895: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3EC8B.asm:30 STA @VIRTUAL02
    case 0xC3E897: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:32 LDA @VIRTUAL04
    case 0xC3E899: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC3E89B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3EC8B.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E89B.
    case 0xC3E89D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC8B.asm:34 JSL MULT168
    case 0xC3E89E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3EC8B.asm:35 STA @LOCAL02
    case 0xC3E8A2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:36 CLC
    case 0xC3E8A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:37 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    case 0xC3E8A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C5, 2); else cpu.execute_instruction<0x69>(0x009CC5, 3); return true;
    // src/unknown/C3/C3EC8B.asm:37 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    // Overlapping static entry reached from 0xC3E8A5.
    case 0xC3E8A7: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/unknown/C3/C3EC8B.asm:38 TAX
    case 0xC3E8A8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:39 LDA __BSS_START__,X
    case 0xC3E8A9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:39 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3E8A7.
    case 0xC3E8AA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C3/C3EC8B.asm:40 CLC
    case 0xC3E8AC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:41 ADC @VIRTUAL02
    case 0xC3E8AD: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:42 STA __BSS_START__,X
    case 0xC3E8AF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:43 LDA @LOCAL02
    case 0xC3E8B2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:44 CLC
    case 0xC3E8B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:45 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp
    case 0xC3E8B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C3, 2); else cpu.execute_instruction<0x69>(0x009CC3, 3); return true;
    // src/unknown/C3/C3EC8B.asm:45 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp
    // Overlapping static entry reached from 0xC3E8B5.
    case 0xC3E8B7: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/unknown/C3/C3EC8B.asm:46 TAX
    case 0xC3E8B8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:47 LDA __BSS_START__,X
    case 0xC3E8B9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:47 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3E8B7.
    case 0xC3E8BA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C3/C3EC8B.asm:48 BNE @UNKNOWN2
    case 0xC3E8BC: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C3/C3EC8B.asm:49 LDA #1
    case 0xC3E8BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3EC8B.asm:49 LDA #1
    // Overlapping static entry reached from 0xC3E8BE.
    case 0xC3E8C0: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3EC8B.asm:50 STA __BSS_START__,X
    case 0xC3E8C1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:52 LDA @VIRTUAL04
    case 0xC3E8C4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:53 LDY #.SIZEOF(char_struct)
    case 0xC3E8C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3EC8B.asm:53 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E8C6.
    case 0xC3E8C8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC8B.asm:54 JSL MULT168
    case 0xC3E8C9: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3EC8B.asm:55 STA @LOCAL01
    case 0xC3E8CD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3EC8B.asm:56 CLC
    case 0xC3E8CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:57 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    case 0xC3E8D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C5, 2); else cpu.execute_instruction<0x69>(0x009CC5, 3); return true;
    // src/unknown/C3/C3EC8B.asm:57 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    // Overlapping static entry reached from 0xC3E8D0.
    case 0xC3E8D2: cpu.execute_instruction<0x9C>(0x0086AA, 3); return true;
    // src/unknown/C3/C3EC8B.asm:58 TAX
    case 0xC3E8D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:59 STX @LOCAL00
    case 0xC3E8D4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC8B.asm:59 STX @LOCAL00
    // Overlapping static entry reached from 0xC3E8D2.
    case 0xC3E8D5: cpu.execute_instruction<0x0E>(0x0010A5, 3); return true;
    // src/unknown/C3/C3EC8B.asm:60 LDA @LOCAL01
    case 0xC3E8D6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3EC8B.asm:61 TAX
    case 0xC3E8D8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:62 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC3E8D9: cpu.execute_instruction<0xBD>(0x009C88, 3); return true;
    // src/unknown/C3/C3EC8B.asm:63 STA @LOCAL02
    case 0xC3E8DC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:64 STA @VIRTUAL02
    case 0xC3E8DE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:65 LDX @LOCAL00
    case 0xC3E8E0: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC8B.asm:66 LDA __BSS_START__,X
    case 0xC3E8E2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:67 CMP @VIRTUAL02
    case 0xC3E8E5: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C3/C3EC8B.asm:68 BLTEQ @UNKNOWN3
    case 0xC3E8E7: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C3/C3EC8B.asm:68 BLTEQ @UNKNOWN3
    case 0xC3E8E9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3EC8B.asm:69 LDA @LOCAL02
    case 0xC3E8EB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:70 STA __BSS_START__,X
    case 0xC3E8ED: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EC8B.asm:72 END_C_FUNCTION
    case 0xC3E8F0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EC8B.asm:72 END_C_FUNCTION
    case 0xC3E8F1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3ED2C.asm (unresolved).
bool execute_unresolved_c3_c3ed2c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3ED2C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3E8F2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    case 0xC3E8F4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    case 0xC3E8F5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    case 0xC3E8F6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    case 0xC3E8F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E8F7.
    case 0xC3E8F9: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    case 0xC3E8FA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    case 0xC3E8FB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:9 STX @VIRTUAL02
    case 0xC3E8FC: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3ED2C.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E8F9.
    case 0xC3E8FD: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3ED2C.asm:10 TAX
    case 0xC3E8FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:11 BEQ @UNKNOWN1
    case 0xC3E8FF: cpu.execute_instruction<0xF0>(0x00005B, 2); return true;
    // src/unknown/C3/C3ED2C.asm:12 TXA
    case 0xC3E901: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:13 DEC
    case 0xC3E902: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:14 STA @LOCAL00
    case 0xC3E903: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED2C.asm:15 CPY #0
    case 0xC3E905: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:15 CPY #0
    // Overlapping static entry reached from 0xC3E905.
    case 0xC3E907: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3ED2C.asm:16 BNE @UNKNOWN0
    case 0xC3E908: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C3/C3ED2C.asm:17 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3E90A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3ED2C.asm:17 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3E90C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3ED2C.asm:17 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3E90E: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED2C.asm:18 LDA @LOCAL00
    case 0xC3E910: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED2C.asm:19 LDY #.SIZEOF(char_struct)
    case 0xC3E912: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3ED2C.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E912.
    case 0xC3E914: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED2C.asm:20 JSL MULT168
    case 0xC3E915: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3ED2C.asm:21 TAX
    case 0xC3E919: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:22 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC3E91A: cpu.execute_instruction<0xBD>(0x009C8A, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3ED2C.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC3E91D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3ED2C.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC3E91F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3ED2C.asm:24 JSL MULT32
    case 0xC3E921: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3ED2C.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E925: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3ED2C.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3E925.
    case 0xC3E927: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C3/C3ED2C.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E928: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3ED2C.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E92A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3ED2C.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3E92A.
    case 0xC3E92C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C3/C3ED2C.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E92D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED2C.asm:26 JSL DIVISION32
    case 0xC3E92F: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // src/unknown/C3/C3ED2C.asm:27 LDA @VIRTUAL06
    case 0xC3E933: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3ED2C.asm:28 STA @VIRTUAL02
    case 0xC3E935: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3ED2C.asm:30 LDA @LOCAL00
    case 0xC3E937: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED2C.asm:31 LDY #.SIZEOF(char_struct)
    case 0xC3E939: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3ED2C.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E939.
    case 0xC3E93B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED2C.asm:32 JSL MULT168
    case 0xC3E93C: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3ED2C.asm:33 TAY
    case 0xC3E940: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:34 CLC
    case 0xC3E941: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    case 0xC3E942: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CB, 2); else cpu.execute_instruction<0x69>(0x009CCB, 3); return true;
    // src/unknown/C3/C3ED2C.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    // Overlapping static entry reached from 0xC3E942.
    case 0xC3E944: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/unknown/C3/C3ED2C.asm:36 TAX
    case 0xC3E945: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:37 LDA __BSS_START__,X
    case 0xC3E946: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:37 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3E944.
    case 0xC3E947: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C3/C3ED2C.asm:38 SEC
    case 0xC3E949: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:39 SBC @VIRTUAL02
    case 0xC3E94A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C3/C3ED2C.asm:40 STA __BSS_START__,X
    case 0xC3E94C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:41 CMP PARTY_CHARACTERS+char_struct::max_pp,Y
    case 0xC3E94F: cpu.execute_instruction<0xD9>(0x009C8A, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C3/C3ED2C.asm:42 BLTEQ @UNKNOWN1
    case 0xC3E952: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C3/C3ED2C.asm:42 BLTEQ @UNKNOWN1
    case 0xC3E954: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C3/C3ED2C.asm:43 LDA #0
    case 0xC3E956: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:43 LDA #0
    // Overlapping static entry reached from 0xC3E956.
    case 0xC3E958: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3ED2C.asm:44 STA __BSS_START__,X
    case 0xC3E959: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3ED2C.asm:46 END_C_FUNCTION
    case 0xC3E95C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3ED2C.asm:46 END_C_FUNCTION
    case 0xC3E95D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3ED98.asm (unresolved).
bool execute_unresolved_c3_c3ed98_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3ED98.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3E95E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    case 0xC3E960: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    case 0xC3E961: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    case 0xC3E962: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    case 0xC3E963: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E963.
    case 0xC3E965: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    case 0xC3E966: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    case 0xC3E967: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:10 STX @VIRTUAL02
    case 0xC3E968: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E965.
    case 0xC3E969: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3ED98.asm:11 TAX
    case 0xC3E96A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:12 BEQ @UNKNOWN1
    case 0xC3E96B: cpu.execute_instruction<0xF0>(0x00006B, 2); return true;
    // src/unknown/C3/C3ED98.asm:13 TXA
    case 0xC3E96D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:14 DEC
    case 0xC3E96E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:15 STA @LOCAL01
    case 0xC3E96F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:16 CPY #0
    case 0xC3E971: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3ED98.asm:16 CPY #0
    // Overlapping static entry reached from 0xC3E971.
    case 0xC3E973: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3ED98.asm:17 BNE @UNKNOWN0
    case 0xC3E974: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C3/C3ED98.asm:18 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3E976: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3ED98.asm:18 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3E978: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3ED98.asm:18 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3E97A: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED98.asm:19 LDA @LOCAL01
    case 0xC3E97C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:20 LDY #.SIZEOF(char_struct)
    case 0xC3E97E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3ED98.asm:20 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E97E.
    case 0xC3E980: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED98.asm:21 JSL MULT168
    case 0xC3E981: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3ED98.asm:22 TAX
    case 0xC3E985: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:23 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC3E986: cpu.execute_instruction<0xBD>(0x009C8A, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3ED98.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xC3E989: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3ED98.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xC3E98B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3ED98.asm:25 JSL MULT32
    case 0xC3E98D: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3ED98.asm:26 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E991: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3ED98.asm:26 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3E991.
    case 0xC3E993: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C3/C3ED98.asm:26 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E994: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3ED98.asm:26 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E996: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3ED98.asm:26 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3E996.
    case 0xC3E998: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C3/C3ED98.asm:26 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3E999: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED98.asm:27 JSL DIVISION32
    case 0xC3E99B: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // src/unknown/C3/C3ED98.asm:28 LDA @VIRTUAL06
    case 0xC3E99F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3ED98.asm:29 STA @VIRTUAL02
    case 0xC3E9A1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:31 LDA @LOCAL01
    case 0xC3E9A3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC3E9A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C3/C3ED98.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E9A5.
    case 0xC3E9A7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED98.asm:33 JSL MULT168
    case 0xC3E9A8: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C3/C3ED98.asm:34 STA @LOCAL01
    case 0xC3E9AC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:35 CLC
    case 0xC3E9AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    case 0xC3E9AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CB, 2); else cpu.execute_instruction<0x69>(0x009CCB, 3); return true;
    // src/unknown/C3/C3ED98.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    // Overlapping static entry reached from 0xC3E9AF.
    case 0xC3E9B1: cpu.execute_instruction<0x9C>(0x00B9A8, 3); return true;
    // src/unknown/C3/C3ED98.asm:37 TAY
    case 0xC3E9B2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:38 LDA __BSS_START__,Y
    case 0xC3E9B3: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C3/C3ED98.asm:38 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC3E9B1.
    case 0xC3E9B4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C3/C3ED98.asm:39 CLC
    case 0xC3E9B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:40 ADC @VIRTUAL02
    case 0xC3E9B7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:41 TAX
    case 0xC3E9B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:42 STX @LOCAL00
    case 0xC3E9BA: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED98.asm:43 TXA
    case 0xC3E9BC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:44 STA __BSS_START__,Y
    case 0xC3E9BD: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C3/C3ED98.asm:45 LDA @LOCAL01
    case 0xC3E9C0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:46 TAX
    case 0xC3E9C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:47 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC3E9C3: cpu.execute_instruction<0xBD>(0x009C8A, 3); return true;
    // src/unknown/C3/C3ED98.asm:48 STA @LOCAL01
    case 0xC3E9C6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:49 STA @VIRTUAL02
    case 0xC3E9C8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:50 LDX @LOCAL00
    case 0xC3E9CA: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED98.asm:51 TXA
    case 0xC3E9CC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:52 CMP @VIRTUAL02
    case 0xC3E9CD: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C3/C3ED98.asm:53 BLTEQ @UNKNOWN1
    case 0xC3E9CF: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C3/C3ED98.asm:53 BLTEQ @UNKNOWN1
    case 0xC3E9D1: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3ED98.asm:54 LDA @LOCAL01
    case 0xC3E9D3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:55 STA __BSS_START__,Y
    case 0xC3E9D5: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3ED98.asm:57 END_C_FUNCTION
    case 0xC3E9D8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3ED98.asm:57 END_C_FUNCTION
    case 0xC3E9D9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EE14.asm (unresolved).
bool execute_unresolved_c3_c3ee14_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EE14.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3E9DA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    case 0xC3E9DC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    case 0xC3E9DD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    case 0xC3E9DE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    case 0xC3E9DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E9DF.
    case 0xC3E9E1: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    case 0xC3E9E2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    case 0xC3E9E3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:10 TXY
    case 0xC3E9E4: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:11 TAX
    case 0xC3E9E5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:12 STX @LOCAL00
    case 0xC3E9E6: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE14.asm:13 TYA
    case 0xC3E9E8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C3/C3EE14.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3E9E9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C3/C3EE14.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3E9EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C3/C3EE14.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3E9EC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C3/C3EE14.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3E9EE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C3/C3EE14.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3E9EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C3/C3EE14.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3E9F0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:15 CLC
    case 0xC3E9F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:16 ADC #item::flags
    case 0xC3E9F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/unknown/C3/C3EE14.asm:16 ADC #item::flags
    // Overlapping static entry reached from 0xC3E9F2.
    case 0xC3E9F4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EE14.asm:17 TAX
    case 0xC3E9F5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E9F6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EE14.asm:19 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC3E9F8: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/unknown/C3/C3EE14.asm:20 LDX @LOCAL00
    case 0xC3E9FC: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE14.asm:21 DEX
    case 0xC3E9FE: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:22 AND f:ITEM_USABLE_FLAGS,X
    case 0xC3E9FF: cpu.execute_instruction<0x3F>(0xC436A9, 4); return true;
    // src/unknown/C3/C3EE14.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC3EA03: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EE14.asm:24 AND #$00FF
    case 0xC3EA05: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EE14.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC3EA05.
    case 0xC3EA07: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE14.asm:25 BEQ @UNKNOWN0
    case 0xC3EA08: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3EE14.asm:26 LDA #TRUE
    case 0xC3EA0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3EE14.asm:26 LDA #TRUE
    // Overlapping static entry reached from 0xC3EA0A.
    case 0xC3EA0C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3EE14.asm:27 BRA @UNKNOWN1
    case 0xC3EA0D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3EE14.asm:29 LDA #FALSE
    case 0xC3EA0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3EE14.asm:29 LDA #FALSE
    // Overlapping static entry reached from 0xC3EA0F.
    case 0xC3EA11: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EE14.asm:31 END_C_FUNCTION
    case 0xC3EA12: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EE14.asm:31 END_C_FUNCTION
    case 0xC3EA13: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EE4D.asm (unresolved).
bool execute_unresolved_c3_c3ee4d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EE4D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3EA14: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C3/C3EE4D.asm:5 JSL UPDATE_PARTY
    case 0xC3EA16: cpu.execute_instruction<0x22>(0xC036C7, 4); return true;
    // src/unknown/C3/C3EE4D.asm:6 JSL UNKNOWN_C07B52
    case 0xC3EA1A: cpu.execute_instruction<0x22>(0xC07DA2, 4); return true;
    // src/unknown/C3/C3EE4D.asm:7 JSL UNKNOWN_C1004E
    case 0xC3EA1E: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/unknown/C3/C3EE4D.asm:8 JSL UNKNOWN_C0943C
    case 0xC3EA22: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // src/unknown/C3/C3EE4D.asm:9 LDA ENTITY_FADE_ENTITY
    case 0xC3EA26: cpu.execute_instruction<0xAD>(0x00B67C, 3); return true;
    // src/unknown/C3/C3EE4D.asm:10 CMP #.LOWORD(-1)
    case 0xC3EA29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3EE4D.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3EA29.
    case 0xC3EA2B: cpu.execute_instruction<0xFF>(0xAD12F0, 4); return true;
    // src/unknown/C3/C3EE4D.asm:11 BEQ @UNKNOWN0
    case 0xC3EA2C: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C3/C3EE4D.asm:12 LDA ENTITY_FADE_ENTITY
    case 0xC3EA2E: cpu.execute_instruction<0xAD>(0x00B67C, 3); return true;
    // src/unknown/C3/C3EE4D.asm:12 LDA ENTITY_FADE_ENTITY
    // Overlapping static entry reached from 0xC3EA2B.
    case 0xC3EA2F: cpu.execute_instruction<0x7C>(0x000AB6, 3); return true;
    // src/unknown/C3/C3EE4D.asm:13 ASL
    case 0xC3EA31: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:14 CLC
    case 0xC3EA32: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:15 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC3EA33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C3/C3EE4D.asm:15 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC3EA33.
    case 0xC3EA35: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EE4D.asm:16 TAX
    case 0xC3EA36: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:17 LDA __BSS_START__,X
    case 0xC3EA37: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EE4D.asm:18 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC3EA3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C3/C3EE4D.asm:18 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC3EA3A.
    case 0xC3EA3C: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C3/C3EE4D.asm:19 STA __BSS_START__,X
    case 0xC3EA3D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EE4D.asm:21 END_C_FUNCTION
    case 0xC3EA40: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EE7A.asm (unresolved).
bool execute_unresolved_c3_c3ee7a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EE7A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3EA41: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    case 0xC3EA43: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    case 0xC3EA44: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    case 0xC3EA45: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    case 0xC3EA46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC3EA46.
    case 0xC3EA48: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    case 0xC3EA49: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    case 0xC3EA4A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:9 STA @LOCAL00
    case 0xC3EA4B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE7A.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC3EA48.
    case 0xC3EA4C: cpu.execute_instruction<0x0E>(0x0005A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC3EA4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x003305, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3EA4D.
    case 0xC3EA4F: cpu.execute_instruction<0x33>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC3EA50: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3EA4F.
    case 0xC3EA51: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC3EA52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3EA51.
    case 0xC3EA53: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3EA52.
    case 0xC3EA54: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC3EA55: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3EE7A.asm:11 LDA @LOCAL00
    case 0xC3EA57: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C3/C3EE7A.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3EA59: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C3/C3EE7A.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3EA5B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C3/C3EE7A.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3EA5C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EE7A.asm:13 TAX
    case 0xC3EA5E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C3/C3EE7A.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3EA5F: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3EA61: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3EA63: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3EA65: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C3/C3EE7A.asm:15 CLC
    case 0xC3EA67: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:16 ADC @VIRTUAL0A
    case 0xC3EA68: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE7A.asm:17 STA @VIRTUAL0A
    case 0xC3EA6A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE7A.asm:18 LDA [@VIRTUAL0A]
    case 0xC3EA6C: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE7A.asm:19 AND #$00FF
    case 0xC3EA6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EE7A.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC3EA6E.
    case 0xC3EA70: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EE7A.asm:20 STA @LOCAL00
    case 0xC3EA71: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE7A.asm:21 AND #$0080
    case 0xC3EA73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C3/C3EE7A.asm:21 AND #$0080
    // Overlapping static entry reached from 0xC3EA73.
    case 0xC3EA75: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE7A.asm:22 BEQ @UNKNOWN3
    case 0xC3EA76: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/unknown/C3/C3EE7A.asm:23 LDA @LOCAL00
    case 0xC3EA78: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE7A.asm:24 AND #$007F
    case 0xC3EA7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/C3/C3EE7A.asm:24 AND #$007F
    // Overlapping static entry reached from 0xC3EA7A.
    case 0xC3EA7C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3EE7A.asm:25 CMP #1
    case 0xC3EA7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C3/C3EE7A.asm:25 CMP #1
    // Overlapping static entry reached from 0xC3EA7D.
    case 0xC3EA7F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE7A.asm:26 BEQ @UNKNOWN0
    case 0xC3EA80: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C3/C3EE7A.asm:27 CMP #2
    case 0xC3EA82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C3/C3EE7A.asm:27 CMP #2
    // Overlapping static entry reached from 0xC3EA82.
    case 0xC3EA84: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE7A.asm:28 BEQ @UNKNOWN1
    case 0xC3EA85: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C3/C3EE7A.asm:29 BRA @UNKNOWN2
    case 0xC3EA87: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C3/C3EE7A.asm:31 TXA
    case 0xC3EA89: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:32 INC
    case 0xC3EA8A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:33 CLC
    case 0xC3EA8B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:34 ADC @VIRTUAL06
    case 0xC3EA8C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:35 STA @VIRTUAL06
    case 0xC3EA8E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:36 LDA [@VIRTUAL06]
    case 0xC3EA90: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:37 TAX
    case 0xC3EA92: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC3EA93: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EE7A.asm:39 LDA __BSS_START__,X
    case 0xC3EA95: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC3EA98: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C3/C3EE7A.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC3EA9A: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC3EA9C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C3/C3EE7A.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC3EA9E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C3/C3EE7A.asm:41 BRA @UNKNOWN4
    case 0xC3EAA0: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/unknown/C3/C3EE7A.asm:43 TXA
    case 0xC3EAA2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:44 INC
    case 0xC3EAA3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:45 CLC
    case 0xC3EAA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:46 ADC @VIRTUAL06
    case 0xC3EAA5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:47 STA @VIRTUAL06
    case 0xC3EAA7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:48 LDA [@VIRTUAL06]
    case 0xC3EAA9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:49 TAX
    case 0xC3EAAB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:50 LDA __BSS_START__,X
    case 0xC3EAAC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:51 STORE_INT1632 @VIRTUAL06
    case 0xC3EAAF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:51 STORE_INT1632 @VIRTUAL06
    case 0xC3EAB1: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3EE7A.asm:52 BRA @UNKNOWN4
    case 0xC3EAB3: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C3/C3EE7A.asm:54 TXA
    case 0xC3EAB5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:55 INC
    case 0xC3EAB6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:56 CLC
    case 0xC3EAB7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:57 ADC @VIRTUAL06
    case 0xC3EAB8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:58 STA @VIRTUAL06
    case 0xC3EABA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:59 LDA [@VIRTUAL06]
    case 0xC3EABC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:60 TAY
    case 0xC3EABE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C3/C3EE7A.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC3EABF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC3EAC2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C3/C3EE7A.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC3EAC4: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC3EAC7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3EE7A.asm:62 BRA @UNKNOWN4
    case 0xC3EAC9: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C3/C3EE7A.asm:64 TXA
    case 0xC3EACB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:65 INC
    case 0xC3EACC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:66 CLC
    case 0xC3EACD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:67 ADC @VIRTUAL06
    case 0xC3EACE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:68 STA @VIRTUAL06
    case 0xC3EAD0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:69 LDA [@VIRTUAL06]
    case 0xC3EAD2: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:70 PROMOTENEARPTRA @VIRTUAL06
    case 0xC3EAD4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C3/C3EE7A.asm:70 PROMOTENEARPTRA @VIRTUAL06
    case 0xC3EAD6: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C3/C3EE7A.asm:70 PROMOTENEARPTRA @VIRTUAL06
    case 0xC3EAD7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C3/C3EE7A.asm:70 PROMOTENEARPTRA @VIRTUAL06
    case 0xC3EAD9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:70 PROMOTENEARPTRA @VIRTUAL06
    case 0xC3EADA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C3/C3EE7A.asm:70 PROMOTENEARPTRA @VIRTUAL06
    case 0xC3EADC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C3/C3EE7A.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC3EADE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3EE7A.asm:73 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC3EAE0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:73 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC3EAE2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:73 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC3EAE4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:73 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC3EAE6: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EE7A.asm:74 END_C_FUNCTION
    case 0xC3EAE8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EE7A.asm:74 END_C_FUNCTION
    case 0xC3EAE9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3F1EC.asm (unresolved).
bool execute_unresolved_c3_c3f1ec_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3F1EC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3ECFD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    case 0xC3ECFF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    case 0xC3ED00: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    case 0xC3ED01: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    case 0xC3ED02: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC3ED02.
    case 0xC3ED04: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    case 0xC3ED05: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    case 0xC3ED06: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:14 STA @LOCAL03
    case 0xC3ED07: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C3/C3F1EC.asm:14 STA @LOCAL03
    // Overlapping static entry reached from 0xC3ED04.
    case 0xC3ED08: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F1EC.asm:15 LDA #3
    case 0xC3ED09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C3/C3F1EC.asm:15 LDA #3
    // Overlapping static entry reached from 0xC3ED08.
    case 0xC3ED0A: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/unknown/C3/C3F1EC.asm:15 LDA #3
    // Overlapping static entry reached from 0xC3ED09.
    case 0xC3ED0B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F1EC.asm:16 JSL UNKNOWN_C2239D
    case 0xC3ED0C: cpu.execute_instruction<0x22>(0xC2223B, 4); return true;
    // src/unknown/C3/C3F1EC.asm:17 CMP #0
    case 0xC3ED10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:17 CMP #0
    // Overlapping static entry reached from 0xC3ED10.
    case 0xC3ED12: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F1EC.asm:18 BNE @UNKNOWN0
    case 0xC3ED13: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:19 LDA #0
    case 0xC3ED15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:19 LDA #0
    // Overlapping static entry reached from 0xC3ED15.
    case 0xC3ED17: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:20 JMP @UNKNOWN6
    case 0xC3ED18: cpu.execute_instruction<0x4C>(0x00EDC9, 3); return true;
    // src/unknown/C3/C3F1EC.asm:22 LDA #0
    case 0xC3ED1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:22 LDA #0
    // Overlapping static entry reached from 0xC3ED1B.
    case 0xC3ED1D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F1EC.asm:23 STA @VIRTUAL02
    case 0xC3ED1E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:24 JMP @UNKNOWN4
    case 0xC3ED20: cpu.execute_instruction<0x4C>(0x00EDA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC3ED23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3ED23.
    case 0xC3ED25: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC3ED26: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3ED25.
    case 0xC3ED27: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC3ED28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3ED27.
    case 0xC3ED29: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3ED28.
    case 0xC3ED2A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC3ED2B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F1EC.asm:27 TYA
    case 0xC3ED2D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/unknown/C3/C3F1EC.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3ED2E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/unknown/C3/C3F1EC.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3ED30: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/unknown/C3/C3F1EC.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3ED31: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/unknown/C3/C3F1EC.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3ED33: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/unknown/C3/C3F1EC.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3ED34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/unknown/C3/C3F1EC.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3ED35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:29 TAX
    case 0xC3ED36: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:30 STX @LOCAL02
    case 0xC3ED37: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C3/C3F1EC.asm:31 TXA
    case 0xC3ED39: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:32 CLC
    case 0xC3ED3A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:33 ADC #item::type
    case 0xC3ED3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/C3/C3F1EC.asm:33 ADC #item::type
    // Overlapping static entry reached from 0xC3ED3B.
    case 0xC3ED3D: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C3/C3F1EC.asm:34 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3ED3E: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C3/C3F1EC.asm:34 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3ED40: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C3/C3F1EC.asm:34 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3ED42: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C3/C3F1EC.asm:34 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3ED44: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:35 CLC
    case 0xC3ED46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:36 ADC @VIRTUAL0A
    case 0xC3ED47: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:37 STA @VIRTUAL0A
    case 0xC3ED49: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:38 LDA [@VIRTUAL0A]
    case 0xC3ED4B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:39 AND #$00FF
    case 0xC3ED4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F1EC.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC3ED4D.
    case 0xC3ED4F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3F1EC.asm:40 CMP #8
    case 0xC3ED50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C3/C3F1EC.asm:40 CMP #8
    // Overlapping static entry reached from 0xC3ED50.
    case 0xC3ED52: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F1EC.asm:41 BNE @UNKNOWN3
    case 0xC3ED53: cpu.execute_instruction<0xD0>(0x000048, 2); return true;
    // src/unknown/C3/C3F1EC.asm:42 TXA
    case 0xC3ED55: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:43 CLC
    case 0xC3ED56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:44 ADC #item::params + item_parameters::epi
    case 0xC3ED57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000011, 2); else cpu.execute_instruction<0x69>(0x000011, 3); return true;
    // src/unknown/C3/C3F1EC.asm:44 ADC #item::params + item_parameters::epi
    // Overlapping static entry reached from 0xC3ED57.
    case 0xC3ED59: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C3/C3F1EC.asm:45 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3ED5A: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C3/C3F1EC.asm:45 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3ED5C: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C3/C3F1EC.asm:45 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3ED5E: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C3/C3F1EC.asm:45 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3ED60: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:46 CLC
    case 0xC3ED62: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:47 ADC @VIRTUAL0A
    case 0xC3ED63: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:48 STA @VIRTUAL0A
    case 0xC3ED65: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC3ED67: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:50 LDA [@VIRTUAL0A]
    case 0xC3ED69: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:51 CMP PARTY_CHARACTERS+(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::iq
    case 0xC3ED6B: cpu.execute_instruction<0xCD>(0x009D55, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C3/C3F1EC.asm:52 BGT @UNKNOWN3
    case 0xC3ED6E: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C3/C3F1EC.asm:52 BGT @UNKNOWN3
    case 0xC3ED70: cpu.execute_instruction<0xB0>(0x00002B, 2); return true;
    // src/unknown/C3/C3F1EC.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC3ED72: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:54 LDA #99
    case 0xC3ED74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000063, 2); else cpu.execute_instruction<0xA9>(0x000063, 3); return true;
    // src/unknown/C3/C3F1EC.asm:54 LDA #99
    // Overlapping static entry reached from 0xC3ED74.
    case 0xC3ED76: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F1EC.asm:55 JSL RAND_MOD
    case 0xC3ED77: cpu.execute_instruction<0x22>(0xC43CC9, 4); return true;
    // src/unknown/C3/C3F1EC.asm:56 CMP @LOCAL03
    case 0xC3ED7B: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C3/C3F1EC.asm:57 BCS @UNKNOWN3
    case 0xC3ED7D: cpu.execute_instruction<0xB0>(0x00001E, 2); return true;
    // src/unknown/C3/C3F1EC.asm:58 LDX @LOCAL02
    case 0xC3ED7F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C3/C3F1EC.asm:59 TXA
    case 0xC3ED81: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:60 CLC
    case 0xC3ED82: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:61 ADC #item::params + item_parameters::ep
    case 0xC3ED83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/unknown/C3/C3F1EC.asm:61 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC3ED83.
    case 0xC3ED85: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3F1EC.asm:62 CLC
    case 0xC3ED86: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:63 ADC @VIRTUAL06
    case 0xC3ED87: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:64 STA @VIRTUAL06
    case 0xC3ED89: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC3ED8B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:66 LDA [@VIRTUAL06]
    case 0xC3ED8D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:68 LDX @LOCAL00
    case 0xC3ED8F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3F1EC.asm:69 STX @VIRTUAL04
    case 0xC3ED91: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C3/C3F1EC.asm:73 STA __BSS_START__,X
    case 0xC3ED93: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:74 LDY @LOCAL01
    case 0xC3ED96: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C3/C3F1EC.asm:75 REP #PROC_FLAGS::ACCUM8
    case 0xC3ED98: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:76 TYA
    case 0xC3ED9A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:77 BRA @UNKNOWN6
    case 0xC3ED9B: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC3ED9D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:80 INC @VIRTUAL02
    case 0xC3ED9F: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:82 LDA @VIRTUAL02
    case 0xC3EDA1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:83 CMP #.SIZEOF(char_struct::items)
    case 0xC3EDA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/unknown/C3/C3F1EC.asm:83 CMP #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC3EDA3.
    case 0xC3EDA5: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F1EC.asm:84 BCS @UNKNOWN5
    case 0xC3EDA6: cpu.execute_instruction<0xB0>(0x00001E, 2); return true;
    // src/unknown/C3/C3F1EC.asm:85 LDA @VIRTUAL02
    case 0xC3EDA8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:86 CLC
    case 0xC3EDAA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:88 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC3EDAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C3/C3F1EC.asm:88 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC3EDAB.
    case 0xC3EDAD: cpu.execute_instruction<0x9C>(0x006918, 3); return true;
    // src/unknown/C3/C3F1EC.asm:89 CLC
    case 0xC3EDAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:90 ADC #(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::items
    case 0xC3EDAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x0000DE, 3); return true;
    // src/unknown/C3/C3F1EC.asm:90 ADC #(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::items
    // Overlapping static entry reached from 0xC3EDAD.
    case 0xC3EDB0: cpu.execute_instruction<0xDE>(0x008500, 3); return true;
    // src/unknown/C3/C3F1EC.asm:90 ADC #(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::items
    // Overlapping static entry reached from 0xC3EDAF.
    case 0xC3EDB1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F1EC.asm:94 STA @VIRTUAL04
    case 0xC3EDB2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F1EC.asm:94 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC3EDB0.
    case 0xC3EDB3: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C3/C3F1EC.asm:96 STA @LOCAL00
    case 0xC3EDB4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3F1EC.asm:96 STA @LOCAL00
    // Overlapping static entry reached from 0xC3EDB3.
    case 0xC3EDB5: cpu.execute_instruction<0x0E>(0x0004A6, 3); return true;
    // src/unknown/C3/C3F1EC.asm:98 LDX @VIRTUAL04
    case 0xC3EDB6: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C3/C3F1EC.asm:99 LDA __BSS_START__,X
    case 0xC3EDB8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:100 AND #$00FF
    case 0xC3EDBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F1EC.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC3EDBB.
    case 0xC3EDBD: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F1EC.asm:101 TAY
    case 0xC3EDBE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:102 STY @LOCAL01
    case 0xC3EDBF: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C3/C3F1EC.asm:103 BNEL @UNKNOWN1
    case 0xC3EDC1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C3/C3F1EC.asm:103 BNEL @UNKNOWN1
    case 0xC3EDC3: cpu.execute_instruction<0x4C>(0x00ED23, 3); return true;
    // src/unknown/C3/C3F1EC.asm:105 LDA #0
    case 0xC3EDC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:105 LDA #0
    // Overlapping static entry reached from 0xC3EDC6.
    case 0xC3EDC8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3F1EC.asm:107 END_C_FUNCTION
    case 0xC3EDC9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3F1EC.asm:107 END_C_FUNCTION
    case 0xC3EDCA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3F5F9.asm (unresolved).
bool execute_unresolved_c3_c3f5f9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3F5F9.asm:3 BEGIN_C_FUNCTION
    case 0xC3F13E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3F5F9.asm:9 END_STACK_VARS
    case 0xC3F140: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3F5F9.asm:9 END_STACK_VARS
    case 0xC3F141: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F5F9.asm:9 END_STACK_VARS
    case 0xC3F142: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F5F9.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F142.
    case 0xC3F144: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3F5F9.asm:9 END_STACK_VARS
    case 0xC3F145: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:10 LDA #0
    case 0xC3F146: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F5F9.asm:10 LDA #0
    // Overlapping static entry reached from 0xC3F146.
    case 0xC3F148: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F5F9.asm:11 STA @VIRTUAL04
    case 0xC3F149: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:12 LDA TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F14B: cpu.execute_instruction<0xAD>(0x00A180, 3); return true;
    // src/unknown/C3/C3F5F9.asm:13 ASL
    case 0xC3F14E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:14 STA @LOCAL03
    case 0xC3F14F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C3/C3F5F9.asm:15 LDA #0
    case 0xC3F151: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F5F9.asm:15 LDA #0
    // Overlapping static entry reached from 0xC3F151.
    case 0xC3F153: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F5F9.asm:16 STA @VIRTUAL02
    case 0xC3F154: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:17 STA @LOCAL02
    case 0xC3F156: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C3/C3F5F9.asm:18 BRA @UNKNOWN2
    case 0xC3F158: cpu.execute_instruction<0x80>(0x00005F, 2); return true;
    // src/unknown/C3/C3F5F9.asm:20 LDA TILEMAP_UPDATE_TILE_X
    case 0xC3F15A: cpu.execute_instruction<0xAD>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F5F9.asm:21 AND #$001F
    case 0xC3F15D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C3/C3F5F9.asm:21 AND #$001F
    // Overlapping static entry reached from 0xC3F15D.
    case 0xC3F15F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F5F9.asm:22 STA @VIRTUAL02
    case 0xC3F160: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:23 LDA TILEMAP_UPDATE_TILE_Y
    case 0xC3F162: cpu.execute_instruction<0xAD>(0x00A17E, 3); return true;
    // src/unknown/C3/C3F5F9.asm:24 ASL
    case 0xC3F165: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:25 ASL
    case 0xC3F166: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:26 ASL
    case 0xC3F167: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:27 ASL
    case 0xC3F168: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:28 ASL
    case 0xC3F169: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:29 CLC
    case 0xC3F16A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:30 ADC TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F16B: cpu.execute_instruction<0x6D>(0x00A186, 3); return true;
    // src/unknown/C3/C3F5F9.asm:31 CLC
    case 0xC3F16E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:32 ADC @VIRTUAL02
    case 0xC3F16F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:33 STA @LOCAL01
    case 0xC3F171: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F5F9.asm:34 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F173: cpu.execute_instruction<0xAD>(0x00A188, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F5F9.asm:34 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F176: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F5F9.asm:34 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F178: cpu.execute_instruction<0xAD>(0x00A18A, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F5F9.asm:34 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F17B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F5F9.asm:35 LDA @VIRTUAL04
    case 0xC3F17D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:36 ASL
    case 0xC3F17F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:37 CLC
    case 0xC3F180: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:38 ADC @VIRTUAL06
    case 0xC3F181: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F5F9.asm:39 STA @VIRTUAL06
    case 0xC3F183: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F5F9.asm:40 STA @LOCAL00
    case 0xC3F185: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3F5F9.asm:41 LDA @VIRTUAL06+2
    case 0xC3F187: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C3/C3F5F9.asm:42 STA @LOCAL00+2
    case 0xC3F189: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F5F9.asm:43 LDA @LOCAL01
    case 0xC3F18B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3F5F9.asm:44 TAY
    case 0xC3F18D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:45 LDX @LOCAL03
    case 0xC3F18E: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C3/C3F5F9.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F190: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F5F9.asm:47 LDA #0
    case 0xC3F192: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C3/C3F5F9.asm:48 JSL PREPARE_VRAM_COPY
    case 0xC3F194: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C3/C3F5F9.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F192.
    case 0xC3F195: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C3/C3F5F9.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F195.
    case 0xC3F197: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0004A5, 3); return true;
    // src/unknown/C3/C3F5F9.asm:49 LDA @VIRTUAL04
    case 0xC3F198: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:49 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC3F197.
    case 0xC3F199: cpu.execute_instruction<0x04>(0x000018, 2); return true;
    // src/unknown/C3/C3F5F9.asm:50 CLC
    case 0xC3F19A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:51 ADC TILEMAP_UPDATE_TILE_WIDTH
    case 0xC3F19B: cpu.execute_instruction<0x6D>(0x00A184, 3); return true;
    // src/unknown/C3/C3F5F9.asm:52 STA @VIRTUAL04
    case 0xC3F19E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:53 LDX TILEMAP_UPDATE_TILE_Y
    case 0xC3F1A0: cpu.execute_instruction<0xAE>(0x00A17E, 3); return true;
    // src/unknown/C3/C3F5F9.asm:54 INX
    case 0xC3F1A3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:55 STX TILEMAP_UPDATE_TILE_Y
    case 0xC3F1A4: cpu.execute_instruction<0x8E>(0x00A17E, 3); return true;
    // src/unknown/C3/C3F5F9.asm:56 CPX #32
    case 0xC3F1A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C3/C3F5F9.asm:56 CPX #32
    // Overlapping static entry reached from 0xC3F1A7.
    case 0xC3F1A9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F5F9.asm:57 BNE @UNKNOWN1
    case 0xC3F1AA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C3/C3F5F9.asm:58 STZ TILEMAP_UPDATE_TILE_Y
    case 0xC3F1AC: cpu.execute_instruction<0x9C>(0x00A17E, 3); return true;
    // src/unknown/C3/C3F5F9.asm:60 LDA @LOCAL02
    case 0xC3F1AF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C3/C3F5F9.asm:61 STA @VIRTUAL02
    case 0xC3F1B1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:62 INC @VIRTUAL02
    case 0xC3F1B3: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:63 LDA @VIRTUAL02
    case 0xC3F1B5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:64 STA @LOCAL02
    case 0xC3F1B7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C3/C3F5F9.asm:66 LDA @VIRTUAL02
    case 0xC3F1B9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:67 CMP TILEMAP_UPDATE_TILE_HEIGHT
    case 0xC3F1BB: cpu.execute_instruction<0xCD>(0x00A182, 3); return true;
    // src/unknown/C3/C3F5F9.asm:68 BCC @UNKNOWN0
    case 0xC3F1BE: cpu.execute_instruction<0x90>(0x00009A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3F5F9.asm:69 END_C_FUNCTION
    case 0xC3F1C0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C3/C3F5F9.asm:69 END_C_FUNCTION
    case 0xC3F1C1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3F67D.asm (unresolved).
bool execute_unresolved_c3_c3f67d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3F67D.asm:3 BEGIN_C_FUNCTION
    case 0xC3F1C2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3F67D.asm:7 END_STACK_VARS
    case 0xC3F1C4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3F67D.asm:7 END_STACK_VARS
    case 0xC3F1C5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F67D.asm:7 END_STACK_VARS
    case 0xC3F1C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F67D.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F1C6.
    case 0xC3F1C8: cpu.execute_instruction<0xFF>(0x82AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3F67D.asm:7 END_STACK_VARS
    case 0xC3F1C9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:8 LDA TILEMAP_UPDATE_TILE_HEIGHT
    case 0xC3F1CA: cpu.execute_instruction<0xAD>(0x00A182, 3); return true;
    // src/unknown/C3/C3F67D.asm:8 LDA TILEMAP_UPDATE_TILE_HEIGHT
    // Overlapping static entry reached from 0xC3F1C8.
    case 0xC3F1CC: cpu.execute_instruction<0xA1>(0x00000A, 2); return true;
    // src/unknown/C3/C3F67D.asm:9 ASL
    case 0xC3F1CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:10 STA @VIRTUAL04
    case 0xC3F1CE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F67D.asm:11 LDA #0
    case 0xC3F1D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F67D.asm:11 LDA #0
    // Overlapping static entry reached from 0xC3F1D0.
    case 0xC3F1D2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F67D.asm:12 STA @VIRTUAL02
    case 0xC3F1D3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F67D.asm:13 BRA @UNKNOWN3
    case 0xC3F1D5: cpu.execute_instruction<0x80>(0x00006A, 2); return true;
    // src/unknown/C3/C3F67D.asm:15 LDA TILEMAP_UPDATE_TILE_Y
    case 0xC3F1D7: cpu.execute_instruction<0xAD>(0x00A17E, 3); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C3/C3F67D.asm:16 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC3F1DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C3/C3F67D.asm:16 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC3F1DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C3/C3F67D.asm:16 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC3F1DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C3/C3F67D.asm:16 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC3F1DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C3/C3F67D.asm:16 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC3F1DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:17 CLC
    case 0xC3F1DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:18 ADC TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F1E0: cpu.execute_instruction<0x6D>(0x00A186, 3); return true;
    // src/unknown/C3/C3F67D.asm:19 CLC
    case 0xC3F1E3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:20 ADC TILEMAP_UPDATE_TILE_X
    case 0xC3F1E4: cpu.execute_instruction<0x6D>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F67D.asm:21 STA @LOCAL01
    case 0xC3F1E7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3F67D.asm:22 INC TILEMAP_UPDATE_TILE_X
    case 0xC3F1E9: cpu.execute_instruction<0xEE>(0x00A17C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F67D.asm:23 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F1EC: cpu.execute_instruction<0xAD>(0x00A188, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F67D.asm:23 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F1EF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F67D.asm:23 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F1F1: cpu.execute_instruction<0xAD>(0x00A18A, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F67D.asm:23 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F1F4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F67D.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3F1F6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F67D.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3F1F8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F67D.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3F1FA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F67D.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3F1FC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F67D.asm:25 LDA @LOCAL01
    case 0xC3F1FE: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3F67D.asm:26 TAY
    case 0xC3F200: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:27 LDX @VIRTUAL04
    case 0xC3F201: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C3/C3F67D.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F203: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F67D.asm:29 LDA #0
    case 0xC3F205: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C3/C3F67D.asm:30 JSL PREPARE_VRAM_COPY
    case 0xC3F207: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C3/C3F67D.asm:30 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F205.
    case 0xC3F208: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C3/C3F67D.asm:30 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F208.
    case 0xC3F20A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x0088AD, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F20B: cpu.execute_instruction<0xAD>(0x00A188, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F20A.
    case 0xC3F20C: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F20A.
    case 0xC3F20D: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F20E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F20D.
    case 0xC3F20F: cpu.execute_instruction<0x06>(0x0000AD, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F210: cpu.execute_instruction<0xAD>(0x00A18A, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F20F.
    case 0xC3F211: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F211.
    case 0xC3F212: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F213: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F212.
    case 0xC3F214: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:33 LDA TILEMAP_UPDATE_TILE_WIDTH
    case 0xC3F215: cpu.execute_instruction<0xAD>(0x00A184, 3); return true;
    // src/unknown/C3/C3F67D.asm:34 ASL
    case 0xC3F218: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:35 CLC
    case 0xC3F219: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:36 ADC @VIRTUAL06
    case 0xC3F21A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F67D.asm:37 STA @VIRTUAL06
    case 0xC3F21C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F67D.asm:38 STA TILEMAP_UPDATE_REMAINING_TILES
    case 0xC3F21E: cpu.execute_instruction<0x8D>(0x00A188, 3); return true;
    // src/unknown/C3/C3F67D.asm:39 LDA @VIRTUAL06+2
    case 0xC3F221: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C3/C3F67D.asm:40 STA TILEMAP_UPDATE_REMAINING_TILES+2
    case 0xC3F223: cpu.execute_instruction<0x8D>(0x00A18A, 3); return true;
    // src/unknown/C3/C3F67D.asm:41 LDA TILEMAP_UPDATE_TILE_X
    case 0xC3F226: cpu.execute_instruction<0xAD>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F67D.asm:42 CMP #32
    case 0xC3F229: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C3/C3F67D.asm:42 CMP #32
    // Overlapping static entry reached from 0xC3F229.
    case 0xC3F22B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F67D.asm:43 BEQ @UNKNOWN1
    case 0xC3F22C: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C3/C3F67D.asm:44 LDA TILEMAP_UPDATE_TILE_X
    case 0xC3F22E: cpu.execute_instruction<0xAD>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F67D.asm:45 CMP #64
    case 0xC3F231: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C3/C3F67D.asm:45 CMP #64
    // Overlapping static entry reached from 0xC3F231.
    case 0xC3F233: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F67D.asm:46 BNE @UNKNOWN2
    case 0xC3F234: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C3/C3F67D.asm:48 LDA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F236: cpu.execute_instruction<0xAD>(0x00A186, 3); return true;
    // src/unknown/C3/C3F67D.asm:49 EOR #$0400
    case 0xC3F239: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000000, 2); else cpu.execute_instruction<0x49>(0x000400, 3); return true;
    // src/unknown/C3/C3F67D.asm:49 EOR #$0400
    // Overlapping static entry reached from 0xC3F239.
    case 0xC3F23B: cpu.execute_instruction<0x04>(0x00008D, 2); return true;
    // src/unknown/C3/C3F67D.asm:50 STA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F23C: cpu.execute_instruction<0x8D>(0x00A186, 3); return true;
    // src/unknown/C3/C3F67D.asm:50 STA TILEMAP_UPDATE_BASE_ADDRESS
    // Overlapping static entry reached from 0xC3F23B.
    case 0xC3F23D: cpu.execute_instruction<0x86>(0x0000A1, 2); return true;
    // src/unknown/C3/C3F67D.asm:52 INC @VIRTUAL02
    case 0xC3F23F: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3F67D.asm:54 LDA @VIRTUAL02
    case 0xC3F241: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F67D.asm:55 CMP TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F243: cpu.execute_instruction<0xCD>(0x00A180, 3); return true;
    // src/unknown/C3/C3F67D.asm:56 BCC @UNKNOWN0
    case 0xC3F246: cpu.execute_instruction<0x90>(0x00008F, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3F67D.asm:57 END_C_FUNCTION
    case 0xC3F248: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C3/C3F67D.asm:57 END_C_FUNCTION
    case 0xC3F249: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3F705.asm (unresolved).
bool execute_unresolved_c3_c3f705_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3F705.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3F24A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    case 0xC3F24C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    case 0xC3F24D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    case 0xC3F24E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    case 0xC3F24F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F24F.
    case 0xC3F251: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    case 0xC3F252: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    case 0xC3F253: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:13 STA @LOCAL04
    case 0xC3F254: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:13 STA @LOCAL04
    // Overlapping static entry reached from 0xC3F251.
    case 0xC3F255: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F705.asm:14 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC3F256: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F705.asm:14 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC3F258: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F705.asm:14 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC3F25A: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F705.asm:14 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC3F25C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F705.asm:15 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC3F25E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F705.asm:15 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC3F260: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F705.asm:15 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC3F262: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F705.asm:15 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC3F264: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C3/C3F705.asm:16 INC @VIRTUAL06
    case 0xC3F266: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:17 INC @VIRTUAL06
    case 0xC3F268: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F705.asm:18 MOVE_INT @VIRTUAL06, TILEMAP_UPDATE_REMAINING_TILES
    case 0xC3F26A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F705.asm:18 MOVE_INT @VIRTUAL06, TILEMAP_UPDATE_REMAINING_TILES
    case 0xC3F26C: cpu.execute_instruction<0x8D>(0x00A188, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F705.asm:18 MOVE_INT @VIRTUAL06, TILEMAP_UPDATE_REMAINING_TILES
    case 0xC3F26F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F705.asm:18 MOVE_INT @VIRTUAL06, TILEMAP_UPDATE_REMAINING_TILES
    case 0xC3F271: cpu.execute_instruction<0x8D>(0x00A18A, 3); return true;
    // src/unknown/C3/C3F705.asm:19 LDA @LOCAL04
    case 0xC3F274: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:20 AND #$003F
    case 0xC3F276: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C3/C3F705.asm:20 AND #$003F
    // Overlapping static entry reached from 0xC3F276.
    case 0xC3F278: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F705.asm:21 TAY
    case 0xC3F279: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:22 STY @LOCAL02
    case 0xC3F27A: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C3/C3F705.asm:23 STY TILEMAP_UPDATE_TILE_X
    case 0xC3F27C: cpu.execute_instruction<0x8C>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F705.asm:24 TXA
    case 0xC3F27F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:25 AND #$001F
    case 0xC3F280: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C3/C3F705.asm:25 AND #$001F
    // Overlapping static entry reached from 0xC3F280.
    case 0xC3F282: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F705.asm:26 STA @VIRTUAL02
    case 0xC3F283: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:27 STA @LOCAL01
    case 0xC3F285: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F705.asm:28 LDA @VIRTUAL02
    case 0xC3F287: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:29 STA TILEMAP_UPDATE_TILE_Y
    case 0xC3F289: cpu.execute_instruction<0x8D>(0x00A17E, 3); return true;
    // src/unknown/C3/C3F705.asm:30 TYA
    case 0xC3F28C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:31 AND #$001F
    case 0xC3F28D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C3/C3F705.asm:31 AND #$001F
    // Overlapping static entry reached from 0xC3F28D.
    case 0xC3F28F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F705.asm:32 BEQ @UNKNOWN0
    case 0xC3F290: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3F705.asm:32 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC3F2EE.
    case 0xC3F291: cpu.execute_instruction<0x05>(0x0000A2, 2); return true;
    // src/unknown/C3/C3F705.asm:33 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE
    case 0xC3F292: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003C00, 3); return true;
    // src/unknown/C3/C3F705.asm:33 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE
    // Overlapping static entry reached from 0xC3F291.
    case 0xC3F293: cpu.execute_instruction<0x00>(0x00003C, 2); return true;
    // src/unknown/C3/C3F705.asm:33 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE
    // Overlapping static entry reached from 0xC3F292.
    case 0xC3F294: cpu.execute_instruction<0x3C>(0x000380, 3); return true;
    // src/unknown/C3/C3F705.asm:34 BRA @UNKNOWN1
    case 0xC3F295: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3F705.asm:36 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    case 0xC3F297: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // src/unknown/C3/C3F705.asm:36 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xC3F297.
    case 0xC3F299: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:38 STX TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F29A: cpu.execute_instruction<0x8E>(0x00A186, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F705.asm:39 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC3F29D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F705.asm:39 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC3F29F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F705.asm:39 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC3F2A1: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F705.asm:39 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC3F2A3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F705.asm:40 LDA [@VIRTUAL06]
    case 0xC3F2A5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:41 XBA
    case 0xC3F2A7: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:42 AND #$00FF
    case 0xC3F2A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F705.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC3F2A8.
    case 0xC3F2AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F705.asm:43 STA @LOCAL04
    case 0xC3F2AB: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:44 TAX
    case 0xC3F2AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:45 STX @LOCAL00
    case 0xC3F2AE: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3F705.asm:46 STX TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F2B0: cpu.execute_instruction<0x8E>(0x00A180, 3); return true;
    // src/unknown/C3/C3F705.asm:47 LDA [@VIRTUAL06]
    case 0xC3F2B3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:48 AND #$00FF
    case 0xC3F2B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F705.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC3F2B5.
    case 0xC3F2B7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F705.asm:49 STA @VIRTUAL04
    case 0xC3F2B8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:50 STA TILEMAP_UPDATE_TILE_HEIGHT
    case 0xC3F2BA: cpu.execute_instruction<0x8D>(0x00A182, 3); return true;
    // src/unknown/C3/C3F705.asm:51 LDA @LOCAL04
    case 0xC3F2BD: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:52 STA @VIRTUAL02
    case 0xC3F2BF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:53 TYA
    case 0xC3F2C1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:54 CLC
    case 0xC3F2C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:55 ADC @VIRTUAL02
    case 0xC3F2C3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:56 AND #$FFE0
    case 0xC3F2C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C3/C3F705.asm:56 AND #$FFE0
    // Overlapping static entry reached from 0xC3F2C5.
    case 0xC3F2C7: cpu.execute_instruction<0xFF>(0x980485, 4); return true;
    // src/unknown/C3/C3F705.asm:57 STA @VIRTUAL04
    case 0xC3F2C8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:58 TYA
    case 0xC3F2CA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:59 AND #$FFE0
    case 0xC3F2CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C3/C3F705.asm:59 AND #$FFE0
    // Overlapping static entry reached from 0xC3F2CB.
    case 0xC3F2CD: cpu.execute_instruction<0xFF>(0xD004C5, 4); return true;
    // src/unknown/C3/C3F705.asm:60 CMP @VIRTUAL04
    case 0xC3F2CE: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:61 BNE @UNKNOWN2
    case 0xC3F2D0: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C3/C3F705.asm:61 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC3F2CD.
    case 0xC3F2D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:62 LDA @LOCAL04
    case 0xC3F2D2: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:63 STA TILEMAP_UPDATE_TILE_WIDTH
    case 0xC3F2D4: cpu.execute_instruction<0x8D>(0x00A184, 3); return true;
    // src/unknown/C3/C3F705.asm:64 JSR UNKNOWN_C3F5F9
    case 0xC3F2D7: cpu.execute_instruction<0x20>(0x00F13E, 3); return true;
    // src/unknown/C3/C3F705.asm:65 BRA @UNKNOWN3
    case 0xC3F2DA: cpu.execute_instruction<0x80>(0x000062, 2); return true;
    // src/unknown/C3/C3F705.asm:67 LDA @LOCAL04
    case 0xC3F2DC: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:68 STA @VIRTUAL04
    case 0xC3F2DE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:69 LDY @LOCAL02
    case 0xC3F2E0: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C3/C3F705.asm:70 TYA
    case 0xC3F2E2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:71 CLC
    case 0xC3F2E3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:72 ADC @VIRTUAL04
    case 0xC3F2E4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:73 AND #$FFE0
    case 0xC3F2E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C3/C3F705.asm:73 AND #$FFE0
    // Overlapping static entry reached from 0xC3F2E6.
    case 0xC3F2E8: cpu.execute_instruction<0xFF>(0x7CED38, 4); return true;
    // src/unknown/C3/C3F705.asm:74 SEC
    case 0xC3F2E9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:75 SBC TILEMAP_UPDATE_TILE_X
    case 0xC3F2EA: cpu.execute_instruction<0xED>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F705.asm:75 SBC TILEMAP_UPDATE_TILE_X
    // Overlapping static entry reached from 0xC3F2E8.
    case 0xC3F2EC: cpu.execute_instruction<0xA1>(0x00008D, 2); return true;
    // src/unknown/C3/C3F705.asm:76 STA TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F2ED: cpu.execute_instruction<0x8D>(0x00A180, 3); return true;
    // src/unknown/C3/C3F705.asm:76 STA TILEMAP_UPDATE_TILE_COUNT
    // Overlapping static entry reached from 0xC3F2EC.
    case 0xC3F2EE: cpu.execute_instruction<0x80>(0x0000A1, 2); return true;
    // src/unknown/C3/C3F705.asm:77 LDA @LOCAL04
    case 0xC3F2F0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:78 STA TILEMAP_UPDATE_TILE_WIDTH
    case 0xC3F2F2: cpu.execute_instruction<0x8D>(0x00A184, 3); return true;
    // src/unknown/C3/C3F705.asm:79 JSR UNKNOWN_C3F5F9
    case 0xC3F2F5: cpu.execute_instruction<0x20>(0x00F13E, 3); return true;
    // src/unknown/C3/C3F705.asm:80 LDA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F2F8: cpu.execute_instruction<0xAD>(0x00A186, 3); return true;
    // src/unknown/C3/C3F705.asm:81 EOR #$0400
    case 0xC3F2FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000000, 2); else cpu.execute_instruction<0x49>(0x000400, 3); return true;
    // src/unknown/C3/C3F705.asm:81 EOR #$0400
    // Overlapping static entry reached from 0xC3F2FB.
    case 0xC3F2FD: cpu.execute_instruction<0x04>(0x00008D, 2); return true;
    // src/unknown/C3/C3F705.asm:82 STA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F2FE: cpu.execute_instruction<0x8D>(0x00A186, 3); return true;
    // src/unknown/C3/C3F705.asm:82 STA TILEMAP_UPDATE_BASE_ADDRESS
    // Overlapping static entry reached from 0xC3F2FD.
    case 0xC3F2FF: cpu.execute_instruction<0x86>(0x0000A1, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F705.asm:83 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F301: cpu.execute_instruction<0xAD>(0x00A188, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F705.asm:83 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F304: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F705.asm:83 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F306: cpu.execute_instruction<0xAD>(0x00A18A, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F705.asm:83 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F309: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F705.asm:84 LDA TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F30B: cpu.execute_instruction<0xAD>(0x00A180, 3); return true;
    // src/unknown/C3/C3F705.asm:85 ASL
    case 0xC3F30E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:86 CLC
    case 0xC3F30F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:87 ADC @VIRTUAL06
    case 0xC3F310: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:88 STA @VIRTUAL06
    case 0xC3F312: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:89 STA TILEMAP_UPDATE_REMAINING_TILES
    case 0xC3F314: cpu.execute_instruction<0x8D>(0x00A188, 3); return true;
    // src/unknown/C3/C3F705.asm:90 LDA @VIRTUAL06+2
    case 0xC3F317: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C3/C3F705.asm:91 STA TILEMAP_UPDATE_REMAINING_TILES+2
    case 0xC3F319: cpu.execute_instruction<0x8D>(0x00A18A, 3); return true;
    // src/unknown/C3/C3F705.asm:92 STZ TILEMAP_UPDATE_TILE_X
    case 0xC3F31C: cpu.execute_instruction<0x9C>(0x00A17C, 3); return true;
    // src/unknown/C3/C3F705.asm:93 LDA @LOCAL01
    case 0xC3F31F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3F705.asm:94 STA @VIRTUAL02
    case 0xC3F321: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:95 STA TILEMAP_UPDATE_TILE_Y
    case 0xC3F323: cpu.execute_instruction<0x8D>(0x00A17E, 3); return true;
    // src/unknown/C3/C3F705.asm:96 LDA @LOCAL04
    case 0xC3F326: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:97 SEC
    case 0xC3F328: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:98 SBC TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F329: cpu.execute_instruction<0xED>(0x00A180, 3); return true;
    // src/unknown/C3/C3F705.asm:99 STA @LOCAL04
    case 0xC3F32C: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:100 CMP #32
    case 0xC3F32E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C3/C3F705.asm:100 CMP #32
    // Overlapping static entry reached from 0xC3F32E.
    case 0xC3F330: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F705.asm:101 BCS @UNKNOWN2
    case 0xC3F331: cpu.execute_instruction<0xB0>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F705.asm:102 STA TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F333: cpu.execute_instruction<0x8D>(0x00A180, 3); return true;
    // src/unknown/C3/C3F705.asm:103 LDX @LOCAL00
    case 0xC3F336: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3F705.asm:104 STX TILEMAP_UPDATE_TILE_WIDTH
    case 0xC3F338: cpu.execute_instruction<0x8E>(0x00A184, 3); return true;
    // src/unknown/C3/C3F705.asm:105 JSR UNKNOWN_C3F5F9
    case 0xC3F33B: cpu.execute_instruction<0x20>(0x00F13E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3F705.asm:107 END_C_FUNCTION
    case 0xC3F33E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3F705.asm:107 END_C_FUNCTION
    case 0xC3F33F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3F7FB.asm (unresolved).
bool execute_unresolved_c3_c3f7fb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3F7FB.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC3F340: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3F7FB.asm:7 END_STACK_VARS
    case 0xC3F342: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3F7FB.asm:7 END_STACK_VARS
    case 0xC3F343: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F7FB.asm:7 END_STACK_VARS
    case 0xC3F344: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F7FB.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F344.
    case 0xC3F346: cpu.execute_instruction<0xFF>(0x68A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3F7FB.asm:7 END_STACK_VARS
    case 0xC3F347: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F7FB.asm:8 LOADPTR UNKNOWN_EFEB3D, @LOCAL00
    case 0xC3F348: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x00D468, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F7FB.asm:8 LOADPTR UNKNOWN_EFEB3D, @LOCAL00
    // Overlapping static entry reached from 0xC3F348.
    case 0xC3F34A: cpu.execute_instruction<0xD4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3F7FB.asm:8 LOADPTR UNKNOWN_EFEB3D, @LOCAL00
    case 0xC3F34B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3F7FB.asm:8 LOADPTR UNKNOWN_EFEB3D, @LOCAL00
    // Overlapping static entry reached from 0xC3F34A.
    case 0xC3F34C: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F7FB.asm:8 LOADPTR UNKNOWN_EFEB3D, @LOCAL00
    case 0xC3F34D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F7FB.asm:8 LOADPTR UNKNOWN_EFEB3D, @LOCAL00
    // Overlapping static entry reached from 0xC3F34D.
    case 0xC3F34F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3F7FB.asm:8 LOADPTR UNKNOWN_EFEB3D, @LOCAL00
    case 0xC3F350: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F7FB.asm:9 LDX #31
    case 0xC3F352: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001F, 2); else cpu.execute_instruction<0xA2>(0x00001F, 3); return true;
    // src/unknown/C3/C3F7FB.asm:9 LDX #31
    // Overlapping static entry reached from 0xC3F352.
    case 0xC3F354: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F7FB.asm:10 LDA #926
    case 0xC3F355: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00039E, 3); return true;
    // src/unknown/C3/C3F7FB.asm:10 LDA #926
    // Overlapping static entry reached from 0xC3F355.
    case 0xC3F357: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C3/C3F7FB.asm:11 JSL UNKNOWN_C3F705
    case 0xC3F358: cpu.execute_instruction<0x22>(0xC3F24A, 4); return true;
    // src/unknown/C3/C3F7FB.asm:11 JSL UNKNOWN_C3F705
    // Overlapping static entry reached from 0xC3F357.
    case 0xC3F359: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C3/C3F7FB.asm:11 JSL UNKNOWN_C3F705
    // Overlapping static entry reached from 0xC3F359.
    case 0xC3F35A: cpu.execute_instruction<0xF2>(0x0000C3, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3F7FB.asm:12 END_C_FUNCTION
    case 0xC3F35C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3F7FB.asm:12 END_C_FUNCTION
    case 0xC3F35D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3F981.asm (unresolved).
bool execute_unresolved_c3_c3f981_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3F981.asm:3 BEGIN_C_FUNCTION
    case 0xC3F4C6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    case 0xC3F4C8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    case 0xC3F4C9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    case 0xC3F4CA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    case 0xC3F4CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F4CB.
    case 0xC3F4CD: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    case 0xC3F4CE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    case 0xC3F4CF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:9 STA @VIRTUAL02
    case 0xC3F4D0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC3F4CD.
    case 0xC3F4D1: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C3/C3F981.asm:10 CMP #35
    case 0xC3F4D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000023, 2); else cpu.execute_instruction<0xC9>(0x000023, 3); return true;
    // src/unknown/C3/C3F981.asm:10 CMP #35
    // Overlapping static entry reached from 0xC3F4D2.
    case 0xC3F4D4: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:11 BCS @UNKNOWN0
    case 0xC3F4D5: cpu.execute_instruction<0xB0>(0x000009, 2); return true;
    // src/unknown/C3/C3F981.asm:12 LDA @VIRTUAL02
    case 0xC3F4D7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:13 JSL SHOW_PSI_ANIMATION
    case 0xC3F4D9: cpu.execute_instruction<0x22>(0xC2E06B, 4); return true;
    // src/unknown/C3/C3F981.asm:14 JMP @UNKNOWN8
    case 0xC3F4DD: cpu.execute_instruction<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:16 LDA @VIRTUAL02
    case 0xC3F4E0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:17 CMP #46
    case 0xC3F4E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002E, 2); else cpu.execute_instruction<0xC9>(0x00002E, 3); return true;
    // src/unknown/C3/C3F981.asm:17 CMP #46
    // Overlapping static entry reached from 0xC3F4E2.
    case 0xC3F4E4: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:18 BCS @UNKNOWN1
    case 0xC3F4E5: cpu.execute_instruction<0xB0>(0x00006D, 2); return true;
    // src/unknown/C3/C3F981.asm:19 JSL UNKNOWN_C2DE0F
    case 0xC3F4E7: cpu.execute_instruction<0x22>(0xC2DD84, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:20 LOADPTR ENEMY_PSI_COLOURS, @VIRTUAL06
    case 0xC3F4EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000096, 2); else cpu.execute_instruction<0xA9>(0x00F496, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:20 LOADPTR ENEMY_PSI_COLOURS, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F4EB.
    case 0xC3F4ED: cpu.execute_instruction<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3F981.asm:20 LOADPTR ENEMY_PSI_COLOURS, @VIRTUAL06
    case 0xC3F4EE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:20 LOADPTR ENEMY_PSI_COLOURS, @VIRTUAL06
    case 0xC3F4F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:20 LOADPTR ENEMY_PSI_COLOURS, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F4F0.
    case 0xC3F4F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3F981.asm:20 LOADPTR ENEMY_PSI_COLOURS, @VIRTUAL06
    case 0xC3F4F3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F981.asm:21 LDA @VIRTUAL02
    case 0xC3F4F5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:22 SEC
    case 0xC3F4F7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:23 SBC #35
    case 0xC3F4F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000023, 2); else cpu.execute_instruction<0xE9>(0x000023, 3); return true;
    // src/unknown/C3/C3F981.asm:23 SBC #35
    // Overlapping static entry reached from 0xC3F4F8.
    case 0xC3F4FA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C3/C3F981.asm:24 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3F4FB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C3/C3F981.asm:24 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3F4FD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C3/C3F981.asm:24 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3F4FE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3F981.asm:25 STA @LOCAL01
    case 0xC3F500: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:26 INC
    case 0xC3F502: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:27 INC
    case 0xC3F503: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C3/C3F981.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F504: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C3/C3F981.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F506: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C3/C3F981.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F508: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C3/C3F981.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F50A: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:29 CLC
    case 0xC3F50C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:30 ADC @VIRTUAL0A
    case 0xC3F50D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:31 STA @VIRTUAL0A
    case 0xC3F50F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:32 LDA [@VIRTUAL0A]
    case 0xC3F511: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:33 AND #$00FF
    case 0xC3F513: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC3F513.
    case 0xC3F515: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F981.asm:34 TAY
    case 0xC3F516: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:35 LDA @LOCAL01
    case 0xC3F517: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:36 INC
    case 0xC3F519: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C3/C3F981.asm:37 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F51A: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C3/C3F981.asm:37 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F51C: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C3/C3F981.asm:37 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F51E: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C3/C3F981.asm:37 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F520: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:38 CLC
    case 0xC3F522: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:39 ADC @VIRTUAL0A
    case 0xC3F523: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:40 STA @VIRTUAL0A
    case 0xC3F525: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:41 LDA [@VIRTUAL0A]
    case 0xC3F527: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:42 AND #$00FF
    case 0xC3F529: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC3F529.
    case 0xC3F52B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3F981.asm:43 TAX
    case 0xC3F52C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:44 LDA @LOCAL01
    case 0xC3F52D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:45 CLC
    case 0xC3F52F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:46 ADC @VIRTUAL06
    case 0xC3F530: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:47 STA @VIRTUAL06
    case 0xC3F532: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:48 LDA [@VIRTUAL06]
    case 0xC3F534: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:49 AND #$00FF
    case 0xC3F536: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC3F536.
    case 0xC3F538: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:50 JSL SET_COLDATA
    case 0xC3F539: cpu.execute_instruction<0x22>(0xC0AFF9, 4); return true;
    // src/unknown/C3/C3F981.asm:51 LDX #$3F
    case 0xC3F53D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003F, 2); else cpu.execute_instruction<0xA2>(0x00003F, 3); return true;
    // src/unknown/C3/C3F981.asm:51 LDX #$3F
    // Overlapping static entry reached from 0xC3F53D.
    case 0xC3F53F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:52 LDA #$10
    case 0xC3F540: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C3/C3F981.asm:52 LDA #$10
    // Overlapping static entry reached from 0xC3F540.
    case 0xC3F542: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:53 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC3F543: cpu.execute_instruction<0x22>(0xC0B018, 4); return true;
    // src/unknown/C3/C3F981.asm:54 LDX #7
    case 0xC3F547: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000007, 2); else cpu.execute_instruction<0xA2>(0x000007, 3); return true;
    // src/unknown/C3/C3F981.asm:54 LDX #7
    // Overlapping static entry reached from 0xC3F547.
    case 0xC3F549: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:55 LDA #5
    case 0xC3F54A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C3/C3F981.asm:55 LDA #5
    // Overlapping static entry reached from 0xC3F54A.
    case 0xC3F54C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:56 JSL UNKNOWN_C4A67E
    case 0xC3F54D: cpu.execute_instruction<0x22>(0xC47AE7, 4); return true;
    // src/unknown/C3/C3F981.asm:57 JMP @UNKNOWN8
    case 0xC3F551: cpu.execute_instruction<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:59 LDA @VIRTUAL02
    case 0xC3F554: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:60 CMP #49
    case 0xC3F556: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000031, 2); else cpu.execute_instruction<0xC9>(0x000031, 3); return true;
    // src/unknown/C3/C3F981.asm:60 CMP #49
    // Overlapping static entry reached from 0xC3F556.
    case 0xC3F558: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:61 BCS @UNKNOWN5
    case 0xC3F559: cpu.execute_instruction<0xB0>(0x00002A, 2); return true;
    // src/unknown/C3/C3F981.asm:62 LDA @VIRTUAL02
    case 0xC3F55B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:63 INC
    case 0xC3F55D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:64 CMP #47
    case 0xC3F55E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C3/C3F981.asm:64 CMP #47
    // Overlapping static entry reached from 0xC3F55E.
    case 0xC3F560: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F981.asm:65 BEQ @UNKNOWN3
    case 0xC3F561: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:66 CMP #48
    case 0xC3F563: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/unknown/C3/C3F981.asm:66 CMP #48
    // Overlapping static entry reached from 0xC3F563.
    case 0xC3F565: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F981.asm:67 BEQ @UNKNOWN4
    case 0xC3F566: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C3/C3F981.asm:68 CMP #49
    case 0xC3F568: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000031, 2); else cpu.execute_instruction<0xC9>(0x000031, 3); return true;
    // src/unknown/C3/C3F981.asm:68 CMP #49
    // Overlapping static entry reached from 0xC3F568.
    case 0xC3F56A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C3/C3F981.asm:69 BEQL @UNKNOWN8
    case 0xC3F56B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C3/C3F981.asm:69 BEQL @UNKNOWN8
    case 0xC3F56D: cpu.execute_instruction<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:70 JMP @UNKNOWN8
    case 0xC3F570: cpu.execute_instruction<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:72 LDA #144
    case 0xC3F573: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x000090, 3); return true;
    // src/unknown/C3/C3F981.asm:72 LDA #144
    // Overlapping static entry reached from 0xC3F573.
    case 0xC3F575: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C3/C3F981.asm:73 STA WOBBLE_DURATION
    case 0xC3F576: cpu.execute_instruction<0x8D>(0x00AF67, 3); return true;
    // src/unknown/C3/C3F981.asm:74 JMP @UNKNOWN8
    case 0xC3F579: cpu.execute_instruction<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:76 LDA #300
    case 0xC3F57C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x00012C, 3); return true;
    // src/unknown/C3/C3F981.asm:76 LDA #300
    // Overlapping static entry reached from 0xC3F57C.
    case 0xC3F57E: cpu.execute_instruction<0x01>(0x00008D, 2); return true;
    // src/unknown/C3/C3F981.asm:77 STA SHAKE_DURATION
    case 0xC3F57F: cpu.execute_instruction<0x8D>(0x00AF69, 3); return true;
    // src/unknown/C3/C3F981.asm:77 STA SHAKE_DURATION
    // Overlapping static entry reached from 0xC3F57E.
    case 0xC3F580: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AF, 2); else cpu.execute_instruction<0x69>(0x004CAF, 3); return true;
    // src/unknown/C3/C3F981.asm:78 JMP @UNKNOWN8
    case 0xC3F582: cpu.execute_instruction<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:78 JMP @UNKNOWN8
    // Overlapping static entry reached from 0xC3F580.
    case 0xC3F583: cpu.execute_instruction<0x0C>(0x00A5F6, 3); return true;
    // src/unknown/C3/C3F981.asm:80 LDA @VIRTUAL02
    case 0xC3F585: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:80 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC3F583.
    case 0xC3F586: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C3/C3F981.asm:81 CMP #54
    case 0xC3F587: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000036, 2); else cpu.execute_instruction<0xC9>(0x000036, 3); return true;
    // src/unknown/C3/C3F981.asm:81 CMP #54
    // Overlapping static entry reached from 0xC3F587.
    case 0xC3F589: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C3/C3F981.asm:82 BCC @UNKNOWN6
    case 0xC3F58A: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C3/C3F981.asm:83 JMP @UNKNOWN8
    case 0xC3F58C: cpu.execute_instruction<0x4C>(0x00F60C, 3); return true;
    // src/unknown/C3/C3F981.asm:85 JSL UNKNOWN_C2DE0F
    case 0xC3F58F: cpu.execute_instruction<0x22>(0xC2DD84, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:86 LOADPTR MISC_SWIRL_COLOURS, @VIRTUAL06
    case 0xC3F593: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B7, 2); else cpu.execute_instruction<0xA9>(0x00F4B7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:86 LOADPTR MISC_SWIRL_COLOURS, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F593.
    case 0xC3F595: cpu.execute_instruction<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3F981.asm:86 LOADPTR MISC_SWIRL_COLOURS, @VIRTUAL06
    case 0xC3F596: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:86 LOADPTR MISC_SWIRL_COLOURS, @VIRTUAL06
    case 0xC3F598: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:86 LOADPTR MISC_SWIRL_COLOURS, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F598.
    case 0xC3F59A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3F981.asm:86 LOADPTR MISC_SWIRL_COLOURS, @VIRTUAL06
    case 0xC3F59B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F981.asm:87 LDA @VIRTUAL02
    case 0xC3F59D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:88 SEC
    case 0xC3F59F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:89 SBC #49
    case 0xC3F5A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000031, 2); else cpu.execute_instruction<0xE9>(0x000031, 3); return true;
    // src/unknown/C3/C3F981.asm:89 SBC #49
    // Overlapping static entry reached from 0xC3F5A0.
    case 0xC3F5A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F981.asm:90 STA @VIRTUAL04
    case 0xC3F5A3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F981.asm:91 ASL
    case 0xC3F5A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:92 ADC @VIRTUAL04
    case 0xC3F5A6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3F981.asm:93 STA @LOCAL00
    case 0xC3F5A8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3F981.asm:94 INC
    case 0xC3F5AA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:95 INC
    case 0xC3F5AB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C3/C3F981.asm:96 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F5AC: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C3/C3F981.asm:96 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F5AE: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C3/C3F981.asm:96 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F5B0: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C3/C3F981.asm:96 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F5B2: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:97 CLC
    case 0xC3F5B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:98 ADC @VIRTUAL0A
    case 0xC3F5B5: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:99 STA @VIRTUAL0A
    case 0xC3F5B7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:100 LDA [@VIRTUAL0A]
    case 0xC3F5B9: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:101 AND #$00FF
    case 0xC3F5BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC3F5BB.
    case 0xC3F5BD: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F981.asm:102 TAY
    case 0xC3F5BE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:103 LDA @LOCAL00
    case 0xC3F5BF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3F981.asm:104 INC
    case 0xC3F5C1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C3/C3F981.asm:105 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F5C2: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C3/C3F981.asm:105 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F5C4: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C3/C3F981.asm:105 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F5C6: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C3/C3F981.asm:105 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F5C8: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:106 CLC
    case 0xC3F5CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:107 ADC @VIRTUAL0A
    case 0xC3F5CB: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:108 STA @VIRTUAL0A
    case 0xC3F5CD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:109 LDA [@VIRTUAL0A]
    case 0xC3F5CF: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:110 AND #$00FF
    case 0xC3F5D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xC3F5D1.
    case 0xC3F5D3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3F981.asm:111 TAX
    case 0xC3F5D4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:112 LDA @LOCAL00
    case 0xC3F5D5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3F981.asm:113 CLC
    case 0xC3F5D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:114 ADC @VIRTUAL06
    case 0xC3F5D8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:115 STA @VIRTUAL06
    case 0xC3F5DA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:116 LDA [@VIRTUAL06]
    case 0xC3F5DC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:117 AND #$00FF
    case 0xC3F5DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC3F5DE.
    case 0xC3F5E0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:118 JSL SET_COLDATA
    case 0xC3F5E1: cpu.execute_instruction<0x22>(0xC0AFF9, 4); return true;
    // src/unknown/C3/C3F981.asm:119 LDX #$3F
    case 0xC3F5E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003F, 2); else cpu.execute_instruction<0xA2>(0x00003F, 3); return true;
    // src/unknown/C3/C3F981.asm:119 LDX #$3F
    // Overlapping static entry reached from 0xC3F5E5.
    case 0xC3F5E7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:120 LDA #$10
    case 0xC3F5E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C3/C3F981.asm:120 LDA #$10
    // Overlapping static entry reached from 0xC3F5E8.
    case 0xC3F5EA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:121 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC3F5EB: cpu.execute_instruction<0x22>(0xC0B018, 4); return true;
    // src/unknown/C3/C3F981.asm:122 LDA @VIRTUAL02
    case 0xC3F5EF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:123 CMP #53
    case 0xC3F5F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000035, 2); else cpu.execute_instruction<0xC9>(0x000035, 3); return true;
    // src/unknown/C3/C3F981.asm:123 CMP #53
    // Overlapping static entry reached from 0xC3F5F1.
    case 0xC3F5F3: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:124 BCS @UNKNOWN7
    case 0xC3F5F4: cpu.execute_instruction<0xB0>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:125 LDX #5
    case 0xC3F5F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C3/C3F981.asm:125 LDX #5
    // Overlapping static entry reached from 0xC3F5F6.
    case 0xC3F5F8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:126 LDA #4
    case 0xC3F5F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C3/C3F981.asm:126 LDA #4
    // Overlapping static entry reached from 0xC3F5F9.
    case 0xC3F5FB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:127 JSL UNKNOWN_C4A67E
    case 0xC3F5FC: cpu.execute_instruction<0x22>(0xC47AE7, 4); return true;
    // src/unknown/C3/C3F981.asm:128 BRA @UNKNOWN8
    case 0xC3F600: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:130 LDX #4
    case 0xC3F602: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C3/C3F981.asm:130 LDX #4
    // Overlapping static entry reached from 0xC3F602.
    case 0xC3F604: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:131 LDA #2
    case 0xC3F605: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C3/C3F981.asm:131 LDA #2
    // Overlapping static entry reached from 0xC3F605.
    case 0xC3F607: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:132 JSL UNKNOWN_C4A67E
    case 0xC3F608: cpu.execute_instruction<0x22>(0xC47AE7, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3F981.asm:134 END_C_FUNCTION
    case 0xC3F60C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C3/C3F981.asm:134 END_C_FUNCTION
    case 0xC3F60D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3FAC9.asm (unresolved).
bool execute_unresolved_c3_c3fac9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3FAC9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3F60E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    case 0xC3F610: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    case 0xC3F611: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    case 0xC3F612: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    case 0xC3F613: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F613.
    case 0xC3F615: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    case 0xC3F616: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    case 0xC3F617: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:10 TXY
    case 0xC3F618: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:11 TAX
    case 0xC3F619: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:12 STX @LOCAL00
    case 0xC3F61A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3FAC9.asm:13 LDX CURRENT_TARGET
    case 0xC3F61C: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/unknown/C3/C3FAC9.asm:14 LDA a:battler::npc_id,X
    case 0xC3F61F: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/unknown/C3/C3FAC9.asm:15 AND #$00FF
    case 0xC3F622: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3FAC9.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC3F622.
    case 0xC3F624: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3FAC9.asm:16 CMP #ENEMY::TINY_LIL_GHOST
    case 0xC3F625: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D5, 2); else cpu.execute_instruction<0xC9>(0x0000D5, 3); return true;
    // src/unknown/C3/C3FAC9.asm:16 CMP #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC3F625.
    case 0xC3F627: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3FAC9.asm:17 BNE @UNKNOWN0
    case 0xC3F628: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3FAC9.asm:18 LDA #TRUE
    case 0xC3F62A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3FAC9.asm:18 LDA #TRUE
    // Overlapping static entry reached from 0xC3F62A.
    case 0xC3F62C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3FAC9.asm:19 BRA @UNKNOWN2
    case 0xC3F62D: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C3/C3FAC9.asm:21 LDX CURRENT_TARGET
    case 0xC3F62F: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/unknown/C3/C3FAC9.asm:22 LDA a:battler::ally_or_enemy,X
    case 0xC3F632: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C3/C3FAC9.asm:23 AND #$00FF
    case 0xC3F635: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3FAC9.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC3F635.
    case 0xC3F637: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3FAC9.asm:24 BNE @UNKNOWN1
    case 0xC3F638: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C3/C3FAC9.asm:25 LDX @LOCAL00
    case 0xC3F63A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3FAC9.asm:26 TXA
    case 0xC3F63C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:27 JSR UNKNOWN_C3F981
    case 0xC3F63D: cpu.execute_instruction<0x20>(0x00F4C6, 3); return true;
    // src/unknown/C3/C3FAC9.asm:28 LDA #FALSE
    case 0xC3F640: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3FAC9.asm:28 LDA #FALSE
    // Overlapping static entry reached from 0xC3F640.
    case 0xC3F642: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3FAC9.asm:29 BRA @UNKNOWN2
    case 0xC3F643: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C3/C3FAC9.asm:31 TYA
    case 0xC3F645: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:32 JSR UNKNOWN_C3F981
    case 0xC3F646: cpu.execute_instruction<0x20>(0x00F4C6, 3); return true;
    // src/unknown/C3/C3FAC9.asm:33 LDA #TRUE
    case 0xC3F649: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3FAC9.asm:33 LDA #TRUE
    // Overlapping static entry reached from 0xC3F649.
    case 0xC3F64B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3FAC9.asm:35 END_C_FUNCTION
    case 0xC3F64C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3FAC9.asm:35 END_C_FUNCTION
    case 0xC3F64D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3FB09.asm (unresolved).
bool execute_unresolved_c3_c3fb09_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C3/C3FB09.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC3F64E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C3/C3FB09.asm:4 LDX CURRENT_ATTACKER
    case 0xC3F650: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/unknown/C3/C3FB09.asm:5 LDA __BSS_START__+14,X
    case 0xC3F653: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C3/C3FB09.asm:6 AND #$00FF
    case 0xC3F656: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3FB09.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC3F656.
    case 0xC3F658: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3FB09.asm:7 BNE @UNKNOWN0
    case 0xC3F659: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3FB09.asm:8 LDA #$0000
    case 0xC3F65B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3FB09.asm:8 LDA #$0000
    // Overlapping static entry reached from 0xC3F65B.
    case 0xC3F65D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3FB09.asm:9 BRA @UNKNOWN1
    case 0xC3F65E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3FB09.asm:11 LDA #$0001
    case 0xC3F660: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3FB09.asm:11 LDA #$0001
    // Overlapping static entry reached from 0xC3F660.
    case 0xC3F662: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C3/C3FB09.asm:13 RTL
    case 0xC3F663: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
