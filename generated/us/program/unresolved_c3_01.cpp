// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C3/C3E450.asm (unresolved).
bool execute_unresolved_c3_c3e450_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E450.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC3E450: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC3E452: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC3E453: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC3E454: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E454.
    case 0xC3E456: cpu.execute_instruction<0xFF>(0x02AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC3E457: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:11 LDA FRAME_COUNTER
    case 0xC3E458: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/unknown/C3/C3E450.asm:11 LDA FRAME_COUNTER
    // Overlapping static entry reached from 0xC3E456.
    case 0xC3E45A: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C3/C3E450.asm:12 AND #$00FF
    case 0xC3E45B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E450.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC3E45B.
    case 0xC3E45D: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C3/C3E450.asm:13 AND #$0004
    case 0xC3E45E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/unknown/C3/C3E450.asm:13 AND #$0004
    // Overlapping static entry reached from 0xC3E45E.
    case 0xC3E460: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E450.asm:14 BEQ @UNKNOWN0
    case 0xC3E461: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E463: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x001FC8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E463.
    case 0xC3E465: cpu.execute_instruction<0x1F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E466: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E468: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E465.
    case 0xC3E469: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E468.
    case 0xC3E46A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E46B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E469.
    case 0xC3E46C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:16 LDA GAME_STATE+game_state::text_flavour
    case 0xC3E46D: cpu.execute_instruction<0xAD>(0x0099CD, 3); return true;
    // src/unknown/C3/C3E450.asm:17 AND #$00FF
    case 0xC3E470: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E450.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC3E470.
    case 0xC3E472: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E450.asm:18 DEC
    case 0xC3E473: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C3/C3E450.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3E474: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C3/C3E450.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3E476: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C3/C3E450.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3E477: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E450.asm:20 TAX
    case 0xC3E479: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:21 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC3E47A: cpu.execute_instruction<0xBF>(0xE01FB9, 4); return true;
    // src/unknown/C3/C3E450.asm:22 CLC
    case 0xC3E47E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:23 ADC #8
    case 0xC3E47F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C3/C3E450.asm:23 ADC #8
    // Overlapping static entry reached from 0xC3E47F.
    case 0xC3E481: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3E450.asm:24 CLC
    case 0xC3E482: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:25 ADC @VIRTUAL06
    case 0xC3E483: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3E450.asm:26 STA @VIRTUAL06
    case 0xC3E485: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3E450.asm:27 BRA @UNKNOWN1
    case 0xC3E487: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E489: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x001FC8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E489.
    case 0xC3E48B: cpu.execute_instruction<0x1F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E48C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E48E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E48B.
    case 0xC3E48F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E48E.
    case 0xC3E490: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E491: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E48F.
    case 0xC3E492: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:30 LDA GAME_STATE+game_state::text_flavour
    case 0xC3E493: cpu.execute_instruction<0xAD>(0x0099CD, 3); return true;
    // src/unknown/C3/C3E450.asm:31 AND #$00FF
    case 0xC3E496: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E450.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC3E496.
    case 0xC3E498: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E450.asm:32 DEC
    case 0xC3E499: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C3/C3E450.asm:33 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3E49A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C3/C3E450.asm:33 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3E49C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C3/C3E450.asm:33 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3E49D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E450.asm:34 TAX
    case 0xC3E49F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:35 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC3E4A0: cpu.execute_instruction<0xBF>(0xE01FB9, 4); return true;
    // src/unknown/C3/C3E450.asm:36 CLC
    case 0xC3E4A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:37 ADC #40
    case 0xC3E4A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/unknown/C3/C3E450.asm:37 ADC #40
    // Overlapping static entry reached from 0xC3E4A5.
    case 0xC3E4A7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3E450.asm:38 CLC
    case 0xC3E4A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:39 ADC @VIRTUAL06
    case 0xC3E4A9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3E450.asm:40 STA @VIRTUAL06
    case 0xC3E4AB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3E4AD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3E4AF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3E4B1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3E4B3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3E450.asm:43 LDX #BPP2PALETTE_SIZE
    case 0xC3E4B5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C3/C3E450.asm:43 LDX #BPP2PALETTE_SIZE
    // Overlapping static entry reached from 0xC3E4B5.
    case 0xC3E4B7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3E450.asm:44 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 5
    case 0xC3E4B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000228, 3); return true;
    // src/unknown/C3/C3E450.asm:44 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 5
    // Overlapping static entry reached from 0xC3E4B8.
    case 0xC3E4BA: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C3/C3E450.asm:45 JSL MEMCPY16
    case 0xC3E4BB: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C3/C3E450.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E4BF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3E450.asm:47 LDA #PALETTE_UPLOAD::FULL
    case 0xC3E4C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C3/C3E450.asm:48 STA PALETTE_UPLOAD_MODE
    case 0xC3E4C3: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C3/C3E450.asm:48 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC3E4C1.
    case 0xC3E4C4: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C3/C3E450.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC3E4C6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3E450.asm:50 END_C_FUNCTION
    case 0xC3E4C8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3E450.asm:50 END_C_FUNCTION
    case 0xC3E4C9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3E4EF.asm (unresolved).
bool execute_unresolved_c3_c3e4ef_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E4EF.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC3E4EF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E4EF.asm:11 END_STACK_VARS
    case 0xC3E4F1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E4EF.asm:11 END_STACK_VARS
    case 0xC3E4F2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E4EF.asm:11 END_STACK_VARS
    case 0xC3E4F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E4EF.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E4F3.
    case 0xC3E4F5: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E4EF.asm:11 END_STACK_VARS
    case 0xC3E4F6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3E4EF.asm:12 LDA #0
    case 0xC3E4F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3E4EF.asm:12 LDA #0
    // Overlapping static entry reached from 0xC3E4F7.
    case 0xC3E4F9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3E4EF.asm:13 STA @LOCAL00
    case 0xC3E4FA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3E4EF.asm:14 BRA @UNKNOWN2
    case 0xC3E4FC: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C3/C3E4EF.asm:16 LDY #.SIZEOF(window_stats)
    case 0xC3E4FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C3/C3E4EF.asm:16 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E4FE.
    case 0xC3E500: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3E4EF.asm:17 JSL MULT168
    case 0xC3E501: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E4EF.asm:18 TAX
    case 0xC3E505: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E4EF.asm:19 LDA WINDOW_STATS + window_stats::id,X
    case 0xC3E506: cpu.execute_instruction<0xBD>(0x008654, 3); return true;
    // src/unknown/C3/C3E4EF.asm:20 CMP #.LOWORD(-1)
    case 0xC3E509: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E4EF.asm:20 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E509.
    case 0xC3E50B: cpu.execute_instruction<0xFF>(0xA504D0, 4); return true;
    // src/unknown/C3/C3E4EF.asm:21 BNE @UNKNOWN1
    case 0xC3E50C: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C3/C3E4EF.asm:22 LDA @LOCAL00
    case 0xC3E50E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3E4EF.asm:22 LDA @LOCAL00
    // Overlapping static entry reached from 0xC3E50B.
    case 0xC3E50F: cpu.execute_instruction<0x0E>(0x000D80, 3); return true;
    // src/unknown/C3/C3E4EF.asm:23 BRA @UNKNOWN3
    case 0xC3E510: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C3/C3E4EF.asm:25 LDA @LOCAL00
    case 0xC3E512: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3E4EF.asm:26 INC
    case 0xC3E514: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3E4EF.asm:27 STA @LOCAL00
    case 0xC3E515: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3E4EF.asm:29 CMP #8
    case 0xC3E517: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C3/C3E4EF.asm:29 CMP #8
    // Overlapping static entry reached from 0xC3E517.
    case 0xC3E519: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3E4EF.asm:30 BNE @UNKNOWN0
    case 0xC3E51A: cpu.execute_instruction<0xD0>(0x0000E2, 2); return true;
    // src/unknown/C3/C3E4EF.asm:31 LDA #.LOWORD(-1)
    case 0xC3E51C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E4EF.asm:31 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E51C.
    case 0xC3E51E: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3E4EF.asm:33 END_C_FUNCTION
    case 0xC3E51F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3E4EF.asm:33 END_C_FUNCTION
    case 0xC3E520: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3E6F8.asm (unresolved).
bool execute_unresolved_c3_c3e6f8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C3/C3E6F8.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC3E6F8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E6F8.asm:5 END_STACK_VARS
    case 0xC3E6FA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E6F8.asm:5 END_STACK_VARS
    case 0xC3E6FB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E6F8.asm:5 END_STACK_VARS
    case 0xC3E6FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E6F8.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E6FC.
    case 0xC3E6FE: cpu.execute_instruction<0xFF>(0xCAAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E6F8.asm:5 END_STACK_VARS
    case 0xC3E6FF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:6 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC3E700: cpu.execute_instruction<0xAD>(0x0089CA, 3); return true;
    // src/unknown/C3/C3E6F8.asm:6 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC3E6FE.
    case 0xC3E702: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000C9, 2); else cpu.execute_instruction<0x89>(0x00FFC9, 3); return true;
    // src/unknown/C3/C3E6F8.asm:7 CMP #$FFFF
    case 0xC3E703: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E6F8.asm:7 CMP #$FFFF
    // Overlapping static entry reached from 0xC3E702.
    case 0xC3E704: cpu.execute_instruction<0xFF>(0x51F0FF, 4); return true;
    // src/unknown/C3/C3E6F8.asm:7 CMP #$FFFF
    // Overlapping static entry reached from 0xC3E703.
    case 0xC3E705: cpu.execute_instruction<0xFF>(0x2251F0, 4); return true;
    // src/unknown/C3/C3E6F8.asm:8 BEQ @UNKNOWN2
    case 0xC3E706: cpu.execute_instruction<0xF0>(0x000051, 2); return true;
    // src/unknown/C3/C3E6F8.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC3E708: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C3/C3E6F8.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC3E705.
    case 0xC3E709: cpu.execute_instruction<0x56>(0x000087, 2); return true;
    // src/unknown/C3/C3E6F8.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC3E709.
    case 0xC3E70B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x00CAAD, 3); return true;
    // src/unknown/C3/C3E6F8.asm:10 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC3E70C: cpu.execute_instruction<0xAD>(0x0089CA, 3); return true;
    // src/unknown/C3/C3E6F8.asm:10 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC3E70B.
    case 0xC3E70D: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:10 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC3E70B.
    case 0xC3E70E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000485, 3); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/unknown/C3/C3E6F8.asm:11 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC3E70F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/unknown/C3/C3E6F8.asm:11 OPTIMIZED_MULT @VIRTUAL04, 7
    // Overlapping static entry reached from 0xC3E70E.
    case 0xC3E710: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/unknown/C3/C3E6F8.asm:11 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC3E711: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/unknown/C3/C3E6F8.asm:11 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC3E712: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/unknown/C3/C3E6F8.asm:11 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC3E714: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/unknown/C3/C3E6F8.asm:11 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC3E715: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E6F8.asm:12 STA @VIRTUAL02
    case 0xC3E717: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3E6F8.asm:13 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC3E719: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C3/C3E6F8.asm:14 AND #$00FF
    case 0xC3E71C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E6F8.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC3E71C.
    case 0xC3E71E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/unknown/C3/C3E6F8.asm:15 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC3E71F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/unknown/C3/C3E6F8.asm:15 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC3E721: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/unknown/C3/C3E6F8.asm:15 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC3E722: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/unknown/C3/C3E6F8.asm:15 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC3E724: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/unknown/C3/C3E6F8.asm:15 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC3E725: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E6F8.asm:16 PHA
    case 0xC3E727: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:17 ASL
    case 0xC3E728: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:18 PLA
    case 0xC3E729: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:19 ROR
    case 0xC3E72A: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:20 STA @VIRTUAL04
    case 0xC3E72B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E6F8.asm:21 LDA #$0010
    case 0xC3E72D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C3/C3E6F8.asm:21 LDA #$0010
    // Overlapping static entry reached from 0xC3E72D.
    case 0xC3E72F: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C3/C3E6F8.asm:22 SEC
    case 0xC3E730: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:23 SBC @VIRTUAL04
    case 0xC3E731: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C3/C3E6F8.asm:24 CLC
    case 0xC3E733: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:25 ADC @VIRTUAL02
    case 0xC3E734: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3E6F8.asm:26 ASL
    case 0xC3E736: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:27 CLC
    case 0xC3E737: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:28 ADC #.LOWORD(BG2_BUFFER) + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2
    case 0xC3E738: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007E, 2); else cpu.execute_instruction<0x69>(0x00827E, 3); return true;
    // src/unknown/C3/C3E6F8.asm:28 ADC #.LOWORD(BG2_BUFFER) + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2
    // Overlapping static entry reached from 0xC3E738.
    case 0xC3E73A: cpu.execute_instruction<0x82>(0x00A2A8, 3); return true;
    // src/unknown/C3/C3E6F8.asm:29 TAY
    case 0xC3E73B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:30 LDX #$0007
    case 0xC3E73C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000007, 2); else cpu.execute_instruction<0xA2>(0x000007, 3); return true;
    // src/unknown/C3/C3E6F8.asm:30 LDX #$0007
    // Overlapping static entry reached from 0xC3E73C.
    case 0xC3E73E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E6F8.asm:31 BRA @UNKNOWN1
    case 0xC3E73F: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C3/C3E6F8.asm:33 LDA #$0000
    case 0xC3E741: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3E6F8.asm:33 LDA #$0000
    // Overlapping static entry reached from 0xC3E741.
    case 0xC3E743: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C3/C3E6F8.asm:34 STA __BSS_START__,Y
    case 0xC3E744: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C3/C3E6F8.asm:35 INY
    case 0xC3E747: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:36 INY
    case 0xC3E748: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:37 DEX
    case 0xC3E749: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:39 BNE @UNKNOWN0
    case 0xC3E74A: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // src/unknown/C3/C3E6F8.asm:40 LDA #$FFFF
    case 0xC3E74C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E6F8.asm:40 LDA #$FFFF
    // Overlapping static entry reached from 0xC3E74C.
    case 0xC3E74E: cpu.execute_instruction<0xFF>(0x89CA8D, 4); return true;
    // src/unknown/C3/C3E6F8.asm:41 STA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC3E74F: cpu.execute_instruction<0x8D>(0x0089CA, 3); return true;
    // src/unknown/C3/C3E6F8.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E752: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3E6F8.asm:43 LDA #$0001
    case 0xC3E754: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C3/C3E6F8.asm:44 STA REDRAW_ALL_WINDOWS
    case 0xC3E756: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/unknown/C3/C3E6F8.asm:44 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC3E754.
    case 0xC3E757: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/unknown/C3/C3E6F8.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC3E759: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3E6F8.asm:47 PLD
    case 0xC3E75B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:48 RTL
    case 0xC3E75C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3E6F8_redirect.asm (unresolved).
bool execute_unresolved_c3_c3e6f8_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C3/C3E6F8_redirect.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1DDD3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C3/C3E6F8_redirect.asm:4 JSL UNKNOWN_C3E6F8
    case 0xC1DDD5: cpu.execute_instruction<0x22>(0xC3E6F8, 4); return true;
    // src/unknown/C3/C3E6F8_redirect.asm:5 RTL
    case 0xC1DDD9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3E75D.asm (unresolved).
bool execute_unresolved_c3_c3e75d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E75D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3E75D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E75D.asm:7 END_STACK_VARS
    case 0xC3E75F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3E75D.asm:7 END_STACK_VARS
    case 0xC3E760: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E75D.asm:7 END_STACK_VARS
    case 0xC3E761: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E75D.asm:7 END_STACK_VARS
    case 0xC3E762: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E75D.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E762.
    case 0xC3E764: cpu.execute_instruction<0xFF>(0xD0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E75D.asm:7 END_STACK_VARS
    case 0xC3E765: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3E75D.asm:7 END_STACK_VARS
    case 0xC3E766: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3E75D.asm:8 BNE @UNKNOWN1
    case 0xC3E767: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/unknown/C3/C3E75D.asm:8 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC3E764.
    case 0xC3E768: cpu.execute_instruction<0x1C>(0x0058AD, 3); return true;
    // src/unknown/C3/C3E75D.asm:9 LDA ATTACKER_ENEMY_ID
    case 0xC3E769: cpu.execute_instruction<0xAD>(0x009658, 3); return true;
    // src/unknown/C3/C3E75D.asm:9 LDA ATTACKER_ENEMY_ID
    // Overlapping static entry reached from 0xC3E768.
    case 0xC3E76B: cpu.execute_instruction<0x96>(0x0000C9, 2); return true;
    // src/unknown/C3/C3E75D.asm:10 CMP #.LOWORD(-1)
    case 0xC3E76C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E75D.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E76B.
    case 0xC3E76D: cpu.execute_instruction<0xFF>(0x07D0FF, 4); return true;
    // src/unknown/C3/C3E75D.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E76C.
    case 0xC3E76E: cpu.execute_instruction<0xFF>(0xE207D0, 4); return true;
    // src/unknown/C3/C3E75D.asm:11 BNE @UNKNOWN0
    case 0xC3E76F: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C3/C3E75D.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E771: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3E75D.asm:12 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3E76E.
    case 0xC3E772: cpu.execute_instruction<0x20>(0x00779C, 3); return true;
    // src/unknown/C3/C3E75D.asm:13 STZ PRINT_ATTACKER_ARTICLE
    case 0xC3E773: cpu.execute_instruction<0x9C>(0x005E77, 3); return true;
    // src/unknown/C3/C3E75D.asm:13 STZ PRINT_ATTACKER_ARTICLE
    // Overlapping static entry reached from 0xC3E772.
    case 0xC3E775: cpu.execute_instruction<0x5E>(0x006780, 3); return true;
    // src/unknown/C3/C3E75D.asm:14 BRA @RETURN
    case 0xC3E776: cpu.execute_instruction<0x80>(0x000067, 2); return true;
    // src/unknown/C3/C3E75D.asm:17 LDA PRINT_ATTACKER_ARTICLE
    case 0xC3E778: cpu.execute_instruction<0xAD>(0x005E77, 3); return true;
    // src/unknown/C3/C3E75D.asm:18 AND #$00FF
    case 0xC3E77B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E75D.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC3E77B.
    case 0xC3E77D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3E75D.asm:19 BNE @RETURN
    case 0xC3E77E: cpu.execute_instruction<0xD0>(0x00005F, 2); return true;
    // src/unknown/C3/C3E75D.asm:20 LDA ATTACKER_ENEMY_ID
    case 0xC3E780: cpu.execute_instruction<0xAD>(0x009658, 3); return true;
    // src/unknown/C3/C3E75D.asm:21 BRA @UNKNOWN3
    case 0xC3E783: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C3/C3E75D.asm:24 LDA TARGET_ENEMY_ID
    case 0xC3E785: cpu.execute_instruction<0xAD>(0x00965A, 3); return true;
    // src/unknown/C3/C3E75D.asm:25 CMP #.LOWORD(-1)
    case 0xC3E788: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E75D.asm:25 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E788.
    case 0xC3E78A: cpu.execute_instruction<0xFF>(0xE207D0, 4); return true;
    // src/unknown/C3/C3E75D.asm:26 BNE @UNKNOWN2
    case 0xC3E78B: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/unknown/C3/C3E75D.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E78D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3E75D.asm:27 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3E78A.
    case 0xC3E78E: cpu.execute_instruction<0x20>(0x00789C, 3); return true;
    // src/unknown/C3/C3E75D.asm:28 STZ PRINT_TARGET_ARTICLE
    case 0xC3E78F: cpu.execute_instruction<0x9C>(0x005E78, 3); return true;
    // src/unknown/C3/C3E75D.asm:28 STZ PRINT_TARGET_ARTICLE
    // Overlapping static entry reached from 0xC3E78E.
    case 0xC3E791: cpu.execute_instruction<0x5E>(0x004B80, 3); return true;
    // src/unknown/C3/C3E75D.asm:29 BRA @RETURN
    case 0xC3E792: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // src/unknown/C3/C3E75D.asm:32 LDA PRINT_TARGET_ARTICLE
    case 0xC3E794: cpu.execute_instruction<0xAD>(0x005E78, 3); return true;
    // src/unknown/C3/C3E75D.asm:33 AND #$00FF
    case 0xC3E797: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E75D.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC3E797.
    case 0xC3E799: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3E75D.asm:34 BNE @RETURN
    case 0xC3E79A: cpu.execute_instruction<0xD0>(0x000043, 2); return true;
    // src/unknown/C3/C3E75D.asm:35 LDA TARGET_ENEMY_ID
    case 0xC3E79C: cpu.execute_instruction<0xAD>(0x00965A, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E75D.asm:37 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(enemy_data)
    case 0xC3E79F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E75D.asm:37 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC3E79F.
    case 0xC3E7A1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E75D.asm:37 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(enemy_data)
    case 0xC3E7A2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E75D.asm:39 TAX
    case 0xC3E7A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E75D.asm:40 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC3E7A7: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/unknown/C3/C3E75D.asm:41 AND #$00FF
    case 0xC3E7AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E75D.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC3E7AB.
    case 0xC3E7AD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E75D.asm:42 BEQ @RETURN
    case 0xC3E7AE: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/unknown/C3/C3E75D.asm:43 LDA LAST_PRINTED_CHARACTER
    case 0xC3E7B0: cpu.execute_instruction<0xAD>(0x005E76, 3); return true;
    // src/unknown/C3/C3E75D.asm:44 AND #$00FF
    case 0xC3E7B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E75D.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC3E7B3.
    case 0xC3E7B5: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3E75D.asm:45 CMP #CHAR::BULLET
    case 0xC3E7B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000070, 2); else cpu.execute_instruction<0xC9>(0x000070, 3); return true;
    // src/unknown/C3/C3E75D.asm:45 CMP #CHAR::BULLET
    // Overlapping static entry reached from 0xC3E7B6.
    case 0xC3E7B8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3E75D.asm:46 BNE @LOWERCASE_THE
    case 0xC3E7B9: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E75D.asm:47 LOADPTR THETHE, @LOCAL00
    case 0xC3E7BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000098, 2); else cpu.execute_instruction<0xA9>(0x000998, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E75D.asm:47 LOADPTR THETHE, @LOCAL00
    // Overlapping static entry reached from 0xC3E7BB.
    case 0xC3E7BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000085, 2); else cpu.execute_instruction<0x09>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3E75D.asm:47 LOADPTR THETHE, @LOCAL00
    case 0xC3E7BE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3E75D.asm:47 LOADPTR THETHE, @LOCAL00
    // Overlapping static entry reached from 0xC3E7BD.
    case 0xC3E7BF: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E75D.asm:47 LOADPTR THETHE, @LOCAL00
    case 0xC3E7C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E75D.asm:47 LOADPTR THETHE, @LOCAL00
    // Overlapping static entry reached from 0xC3E7C0.
    case 0xC3E7C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E75D.asm:47 LOADPTR THETHE, @LOCAL00
    case 0xC3E7C3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3E75D.asm:48 LDA #4
    case 0xC3E7C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C3/C3E75D.asm:48 LDA #4
    // Overlapping static entry reached from 0xC3E7C5.
    case 0xC3E7C7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3E75D.asm:49 JSL UNKNOWN_C447FB
    case 0xC3E7C8: cpu.execute_instruction<0x22>(0xC447FB, 4); return true;
    // src/unknown/C3/C3E75D.asm:50 BRA @RETURN
    case 0xC3E7CC: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E75D.asm:52 LOADPTR THETHE+4, @LOCAL00
    case 0xC3E7CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009C, 2); else cpu.execute_instruction<0xA9>(0x00099C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E75D.asm:52 LOADPTR THETHE+4, @LOCAL00
    // Overlapping static entry reached from 0xC3E7CE.
    case 0xC3E7D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000085, 2); else cpu.execute_instruction<0x09>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3E75D.asm:52 LOADPTR THETHE+4, @LOCAL00
    case 0xC3E7D1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3E75D.asm:52 LOADPTR THETHE+4, @LOCAL00
    // Overlapping static entry reached from 0xC3E7D0.
    case 0xC3E7D2: cpu.execute_instruction<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E75D.asm:52 LOADPTR THETHE+4, @LOCAL00
    case 0xC3E7D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E75D.asm:52 LOADPTR THETHE+4, @LOCAL00
    // Overlapping static entry reached from 0xC3E7D3.
    case 0xC3E7D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E75D.asm:52 LOADPTR THETHE+4, @LOCAL00
    case 0xC3E7D6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3E75D.asm:53 LDA #4
    case 0xC3E7D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C3/C3E75D.asm:53 LDA #4
    // Overlapping static entry reached from 0xC3E7D8.
    case 0xC3E7DA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3E75D.asm:54 JSL UNKNOWN_C447FB
    case 0xC3E7DB: cpu.execute_instruction<0x22>(0xC447FB, 4); return true;
    // src/unknown/C3/C3E75D.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC3E7DF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3E75D.asm:57 END_C_FUNCTION
    case 0xC3E7E1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3E75D.asm:57 END_C_FUNCTION
    case 0xC3E7E2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3E7E3.asm (unresolved).
bool execute_unresolved_c3_c3e7e3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E7E3.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC3E7E3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC3E7E5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC3E7E6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC3E7E7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC3E7E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E7E8.
    case 0xC3E7EA: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC3E7EB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC3E7EC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    case 0xC3E7ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E7EA.
    case 0xC3E7EE: cpu.execute_instruction<0xFF>(0x5AF0FF, 4); return true;
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E7ED.
    case 0xC3E7EF: cpu.execute_instruction<0xFF>(0x0A5AF0, 4); return true;
    // src/unknown/C3/C3E7E3.asm:15 BEQ @UNKNOWN2
    case 0xC3E7F0: cpu.execute_instruction<0xF0>(0x00005A, 2); return true;
    // src/unknown/C3/C3E7E3.asm:16 ASL
    case 0xC3E7F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:17 TAX
    case 0xC3E7F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC3E7F4: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C3/C3E7E3.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC3E7F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/unknown/C3/C3E7E3.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E7F7.
    case 0xC3E7F9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3E7E3.asm:20 JSL MULT168
    case 0xC3E7FA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E7E3.asm:21 CLC
    case 0xC3E7FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:22 ADC #.LOWORD(WINDOW_STATS)
    case 0xC3E7FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/unknown/C3/C3E7E3.asm:22 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC3E7FF.
    case 0xC3E801: cpu.execute_instruction<0x86>(0x0000A8, 2); return true;
    // src/unknown/C3/C3E7E3.asm:23 TAY
    case 0xC3E802: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:25 STY @LOCAL00
    case 0xC3E803: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C3/C3E7E3.asm:27 LDA a:window_stats::current_option,Y
    case 0xC3E805: cpu.execute_instruction<0xB9>(0x00002B, 3); return true;
    // src/unknown/C3/C3E7E3.asm:28 CMP #.LOWORD(-1)
    case 0xC3E808: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E7E3.asm:28 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E808.
    case 0xC3E80A: cpu.execute_instruction<0xFF>(0xA03FF0, 4); return true;
    // src/unknown/C3/C3E7E3.asm:29 BEQ @UNKNOWN2
    case 0xC3E80B: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC3E80D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E80A.
    case 0xC3E80E: cpu.execute_instruction<0x2D>(0x002200, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E80D.
    case 0xC3E80F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC3E810: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E80E.
    case 0xC3E811: cpu.execute_instruction<0xF7>(0x00008F, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E811.
    case 0xC3E813: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006918, 3); return true;
    // src/unknown/C3/C3E7E3.asm:31 CLC
    case 0xC3E814: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC3E815: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C3/C3E7E3.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC3E813.
    case 0xC3E816: cpu.execute_instruction<0xD4>(0x000089, 2); return true;
    // src/unknown/C3/C3E7E3.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC3E815.
    case 0xC3E817: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x00A9AA, 3); return true;
    // src/unknown/C3/C3E7E3.asm:33 TAX
    case 0xC3E818: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    case 0xC3E819: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    // Overlapping static entry reached from 0xC3E817.
    case 0xC3E81A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    // Overlapping static entry reached from 0xC3E819.
    case 0xC3E81B: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3E7E3.asm:36 STA a:menu_option::unknown0,X
    case 0xC3E81C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3E7E3.asm:37 LDA a:menu_option::next,X
    case 0xC3E81F: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C3/C3E7E3.asm:38 CMP #.LOWORD(-1)
    case 0xC3E822: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E7E3.asm:38 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E822.
    case 0xC3E824: cpu.execute_instruction<0xFF>(0xA00EF0, 4); return true;
    // src/unknown/C3/C3E7E3.asm:39 BEQ @UNKNOWN1
    case 0xC3E825: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC3E827: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E824.
    case 0xC3E828: cpu.execute_instruction<0x2D>(0x002200, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E827.
    case 0xC3E829: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC3E82A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E828.
    case 0xC3E82B: cpu.execute_instruction<0xF7>(0x00008F, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E82B.
    case 0xC3E82D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006918, 3); return true;
    // src/unknown/C3/C3E7E3.asm:41 CLC
    case 0xC3E82E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:42 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC3E82F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/unknown/C3/C3E7E3.asm:42 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC3E82D.
    case 0xC3E830: cpu.execute_instruction<0xD4>(0x000089, 2); return true;
    // src/unknown/C3/C3E7E3.asm:42 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC3E82F.
    case 0xC3E831: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x0080AA, 3); return true;
    // src/unknown/C3/C3E7E3.asm:43 TAX
    case 0xC3E832: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:44 BRA @UNKNOWN0
    case 0xC3E833: cpu.execute_instruction<0x80>(0x0000E4, 2); return true;
    // src/unknown/C3/C3E7E3.asm:44 BRA @UNKNOWN0
    // Overlapping static entry reached from 0xC3E831.
    case 0xC3E834: cpu.execute_instruction<0xE4>(0x0000A9, 2); return true;
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    case 0xC3E835: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E834.
    case 0xC3E836: cpu.execute_instruction<0xFF>(0x0EA4FF, 4); return true;
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E835.
    case 0xC3E837: cpu.execute_instruction<0xFF>(0x990EA4, 4); return true;
    // src/unknown/C3/C3E7E3.asm:48 LDY @LOCAL00
    case 0xC3E838: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E7E3.asm:50 STA a:window_stats::selected_option,Y
    case 0xC3E83A: cpu.execute_instruction<0x99>(0x00002F, 3); return true;
    // src/unknown/C3/C3E7E3.asm:50 STA a:window_stats::selected_option,Y
    // Overlapping static entry reached from 0xC3E837.
    case 0xC3E83B: cpu.execute_instruction<0x2F>(0x2D9900, 4); return true;
    // src/unknown/C3/C3E7E3.asm:51 STA a:window_stats::option_count,Y
    case 0xC3E83D: cpu.execute_instruction<0x99>(0x00002D, 3); return true;
    // src/unknown/C3/C3E7E3.asm:51 STA a:window_stats::option_count,Y
    // Overlapping static entry reached from 0xC3E83B.
    case 0xC3E83F: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C3/C3E7E3.asm:52 STA a:window_stats::current_option,Y
    case 0xC3E840: cpu.execute_instruction<0x99>(0x00002B, 3); return true;
    // src/unknown/C3/C3E7E3.asm:53 LDA #1
    case 0xC3E843: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E7E3.asm:53 LDA #1
    // Overlapping static entry reached from 0xC3E843.
    case 0xC3E845: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C3/C3E7E3.asm:54 STA a:window_stats::unknown49,Y
    case 0xC3E846: cpu.execute_instruction<0x99>(0x000031, 3); return true;
    // src/unknown/C3/C3E7E3.asm:55 STA a:window_stats::menu_page_number,Y
    case 0xC3E849: cpu.execute_instruction<0x99>(0x000033, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3E7E3.asm:57 END_C_FUNCTION
    case 0xC3E84C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3E7E3.asm:57 END_C_FUNCTION
    case 0xC3E84D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3E9F7.asm (unresolved).
bool execute_unresolved_c3_c3e9f7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E9F7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3E9F7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    case 0xC3E9F9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    case 0xC3E9FA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    case 0xC3E9FB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    case 0xC3E9FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E9FC.
    case 0xC3E9FE: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    case 0xC3E9FF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3E9F7.asm:9 END_STACK_VARS
    case 0xC3EA00: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:10 STX @VIRTUAL02
    case 0xC3EA01: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E9FE.
    case 0xC3EA02: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:11 TAX
    case 0xC3EA03: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:12 TXY
    case 0xC3EA04: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:13 DEY
    case 0xC3EA05: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:14 STY @LOCAL00
    case 0xC3EA06: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:15 TYA
    case 0xC3EA08: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3EA09: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EA09.
    case 0xC3EA0B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E9F7.asm:16 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3EA0C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E9F7.asm:17 TAX
    case 0xC3EA10: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:18 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::WEAPON,X
    case 0xC3EA11: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:19 AND #$00FF
    case 0xC3EA14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC3EA14.
    case 0xC3EA16: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:20 BEQ @UNKNOWN0
    case 0xC3EA17: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/unknown/C3/C3E9F7.asm:21 AND #$00FF
    case 0xC3EA19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC3EA19.
    case 0xC3EA1B: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:22 DEC
    case 0xC3EA1C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:23 STA @VIRTUAL04
    case 0xC3EA1D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:24 TXA
    case 0xC3EA1F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:25 CLC
    case 0xC3EA20: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:26 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC3EA21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:26 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3EA21.
    case 0xC3EA23: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:27 CLC
    case 0xC3EA24: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:28 ADC @VIRTUAL04
    case 0xC3EA25: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:28 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3EA23.
    case 0xC3EA26: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:29 TAX
    case 0xC3EA27: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:30 LDA __BSS_START__,X
    case 0xC3EA28: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:31 AND #$00FF
    case 0xC3EA2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC3EA2B.
    case 0xC3EA2D: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:32 CMP @VIRTUAL02
    case 0xC3EA2E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:33 BNE @UNKNOWN0
    case 0xC3EA30: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C3/C3E9F7.asm:34 LDA #1
    case 0xC3EA32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:34 LDA #1
    // Overlapping static entry reached from 0xC3EA32.
    case 0xC3EA34: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C3/C3E9F7.asm:35 JMP @UNKNOWN4
    case 0xC3EA35: cpu.execute_instruction<0x4C>(0x00EACE, 3); return true;
    // src/unknown/C3/C3E9F7.asm:37 LDY @LOCAL00
    case 0xC3EA38: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:38 TYA
    case 0xC3EA3A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3EA3B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EA3B.
    case 0xC3EA3D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E9F7.asm:39 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3EA3E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E9F7.asm:40 TAX
    case 0xC3EA42: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:41 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::BODY,X
    case 0xC3EA43: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/unknown/C3/C3E9F7.asm:42 AND #$00FF
    case 0xC3EA46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC3EA46.
    case 0xC3EA48: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:43 BEQ @UNKNOWN1
    case 0xC3EA49: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:44 AND #$00FF
    case 0xC3EA4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC3EA4B.
    case 0xC3EA4D: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:45 DEC
    case 0xC3EA4E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:46 STA @VIRTUAL04
    case 0xC3EA4F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:47 TXA
    case 0xC3EA51: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:48 CLC
    case 0xC3EA52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:49 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC3EA53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:49 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3EA53.
    case 0xC3EA55: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:50 CLC
    case 0xC3EA56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:51 ADC @VIRTUAL04
    case 0xC3EA57: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:51 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3EA55.
    case 0xC3EA58: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:52 TAX
    case 0xC3EA59: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:53 LDA __BSS_START__,X
    case 0xC3EA5A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:54 AND #$00FF
    case 0xC3EA5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC3EA5D.
    case 0xC3EA5F: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:55 CMP @VIRTUAL02
    case 0xC3EA60: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:56 BNE @UNKNOWN1
    case 0xC3EA62: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3E9F7.asm:57 LDA #1
    case 0xC3EA64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:57 LDA #1
    // Overlapping static entry reached from 0xC3EA64.
    case 0xC3EA66: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E9F7.asm:58 BRA @UNKNOWN4
    case 0xC3EA67: cpu.execute_instruction<0x80>(0x000065, 2); return true;
    // src/unknown/C3/C3E9F7.asm:60 LDY @LOCAL00
    case 0xC3EA69: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:61 TYA
    case 0xC3EA6B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3EA6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EA6C.
    case 0xC3EA6E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E9F7.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3EA6F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E9F7.asm:63 TAX
    case 0xC3EA73: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:64 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::ARMS,X
    case 0xC3EA74: cpu.execute_instruction<0xBD>(0x009A01, 3); return true;
    // src/unknown/C3/C3E9F7.asm:65 AND #$00FF
    case 0xC3EA77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC3EA77.
    case 0xC3EA79: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:66 BEQ @UNKNOWN2
    case 0xC3EA7A: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:67 AND #$00FF
    case 0xC3EA7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC3EA7C.
    case 0xC3EA7E: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:68 DEC
    case 0xC3EA7F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:69 STA @VIRTUAL04
    case 0xC3EA80: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:70 TXA
    case 0xC3EA82: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:71 CLC
    case 0xC3EA83: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:72 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC3EA84: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:72 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3EA84.
    case 0xC3EA86: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:73 CLC
    case 0xC3EA87: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:74 ADC @VIRTUAL04
    case 0xC3EA88: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:74 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3EA86.
    case 0xC3EA89: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:75 TAX
    case 0xC3EA8A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:76 LDA __BSS_START__,X
    case 0xC3EA8B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:77 AND #$00FF
    case 0xC3EA8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC3EA8E.
    case 0xC3EA90: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:78 CMP @VIRTUAL02
    case 0xC3EA91: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:79 BNE @UNKNOWN2
    case 0xC3EA93: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3E9F7.asm:80 LDA #1
    case 0xC3EA95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:80 LDA #1
    // Overlapping static entry reached from 0xC3EA95.
    case 0xC3EA97: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E9F7.asm:81 BRA @UNKNOWN4
    case 0xC3EA98: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C3/C3E9F7.asm:83 LDY @LOCAL00
    case 0xC3EA9A: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:84 TYA
    case 0xC3EA9C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3EA9D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E9F7.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EA9D.
    case 0xC3EA9F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E9F7.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC3EAA0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E9F7.asm:86 TAX
    case 0xC3EAA4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:87 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::OTHER,X
    case 0xC3EAA5: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/unknown/C3/C3E9F7.asm:88 AND #$00FF
    case 0xC3EAA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC3EAA8.
    case 0xC3EAAA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:89 BEQ @UNKNOWN3
    case 0xC3EAAB: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:90 AND #$00FF
    case 0xC3EAAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC3EAAD.
    case 0xC3EAAF: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:91 DEC
    case 0xC3EAB0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:92 STA @VIRTUAL04
    case 0xC3EAB1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:93 TXA
    case 0xC3EAB3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:94 CLC
    case 0xC3EAB4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:95 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC3EAB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:95 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3EAB5.
    case 0xC3EAB7: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:96 CLC
    case 0xC3EAB8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:97 ADC @VIRTUAL04
    case 0xC3EAB9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:97 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3EAB7.
    case 0xC3EABA: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:98 TAX
    case 0xC3EABB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:99 LDA __BSS_START__,X
    case 0xC3EABC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:100 AND #$00FF
    case 0xC3EABF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC3EABF.
    case 0xC3EAC1: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:101 CMP @VIRTUAL02
    case 0xC3EAC2: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:102 BNE @UNKNOWN3
    case 0xC3EAC4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3E9F7.asm:103 LDA #1
    case 0xC3EAC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:103 LDA #1
    // Overlapping static entry reached from 0xC3EAC6.
    case 0xC3EAC8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E9F7.asm:104 BRA @UNKNOWN4
    case 0xC3EAC9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3E9F7.asm:106 LDA #0
    case 0xC3EACB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:106 LDA #0
    // Overlapping static entry reached from 0xC3EACB.
    case 0xC3EACD: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3E9F7.asm:108 END_C_FUNCTION
    case 0xC3EACE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3E9F7.asm:108 END_C_FUNCTION
    case 0xC3EACF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EAD0.asm (unresolved).
bool execute_unresolved_c3_c3ead0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EAD0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3EAD0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    case 0xC3EAD2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    case 0xC3EAD3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    case 0xC3EAD4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    case 0xC3EAD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC3EAD5.
    case 0xC3EAD7: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    case 0xC3EAD8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3EAD0.asm:7 END_STACK_VARS
    case 0xC3EAD9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC3EADA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:8 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3EAD7.
    case 0xC3EADB: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/unknown/C3/C3EAD0.asm:9 STA @VIRTUAL00
    case 0xC3EADC: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C3/C3EAD0.asm:10 LDX #0
    case 0xC3EADE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C3/C3EAD0.asm:10 LDX #0
    // Overlapping static entry reached from 0xC3EADE.
    case 0xC3EAE0: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C3/C3EAD0.asm:11 STX @LOCAL00
    case 0xC3EAE1: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:12 BRA @UNKNOWN2
    case 0xC3EAE3: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C3/C3EAD0.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC3EAE5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:15 CMP @VIRTUAL00
    case 0xC3EAE7: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C3/C3EAD0.asm:16 BNE @UNKNOWN1
    case 0xC3EAE9: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C3/C3EAD0.asm:17 LDX @LOCAL00
    case 0xC3EAEB: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC3EAED: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:19 TXA
    case 0xC3EAEF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:20 JSL IS_VALID_ITEM_TRANSFORMATION
    case 0xC3EAF0: cpu.execute_instruction<0x22>(0xC48ECE, 4); return true;
    // src/unknown/C3/C3EAD0.asm:21 CMP #0
    case 0xC3EAF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C3/C3EAD0.asm:21 CMP #0
    // Overlapping static entry reached from 0xC3EAF4.
    case 0xC3EAF6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EAD0.asm:22 BNE @UNKNOWN3
    case 0xC3EAF7: cpu.execute_instruction<0xD0>(0x000021, 2); return true;
    // src/unknown/C3/C3EAD0.asm:23 LDX @LOCAL00
    case 0xC3EAF9: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:24 TXA
    case 0xC3EAFB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:25 JSL INITIALIZE_ITEM_TRANSFORMATION
    case 0xC3EAFC: cpu.execute_instruction<0x22>(0xC48EEB, 4); return true;
    // src/unknown/C3/C3EAD0.asm:26 BRA @UNKNOWN3
    case 0xC3EB00: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C3/C3EAD0.asm:28 LDX @LOCAL00
    case 0xC3EB02: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:29 INX
    case 0xC3EB04: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:30 STX @LOCAL00
    case 0xC3EB05: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC3EB07: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:33 TXA
    case 0xC3EB09: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/unknown/C3/C3EAD0.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3EB0A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/unknown/C3/C3EAD0.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3EB0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/unknown/C3/C3EAD0.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3EB0D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/unknown/C3/C3EAD0.asm:34 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3EB0E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EAD0.asm:35 TAX
    case 0xC3EB10: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:36 LDA f:TIMED_ITEM_TRANSFORMATION_TABLE + timed_item_transformation::item,X
    case 0xC3EB11: cpu.execute_instruction<0xBF>(0xD5F4BB, 4); return true;
    // src/unknown/C3/C3EAD0.asm:37 AND #$00FF
    case 0xC3EB15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EAD0.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC3EB15.
    case 0xC3EB17: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EAD0.asm:38 BNE @UNKNOWN0
    case 0xC3EB18: cpu.execute_instruction<0xD0>(0x0000CB, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EAD0.asm:40 END_C_FUNCTION
    case 0xC3EB1A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EAD0.asm:40 END_C_FUNCTION
    case 0xC3EB1B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EB1C.asm (unresolved).
bool execute_unresolved_c3_c3eb1c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EB1C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3EB1C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    case 0xC3EB1E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    case 0xC3EB1F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    case 0xC3EB20: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    case 0xC3EB21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC3EB21.
    case 0xC3EB23: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    case 0xC3EB24: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3EB1C.asm:10 END_STACK_VARS
    case 0xC3EB25: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC3EB26: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:11 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3EB23.
    case 0xC3EB27: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/unknown/C3/C3EB1C.asm:12 STA @VIRTUAL00
    case 0xC3EB28: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C3/C3EB1C.asm:13 LDY #0
    case 0xC3EB2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C3/C3EB1C.asm:13 LDY #0
    // Overlapping static entry reached from 0xC3EB2A.
    case 0xC3EB2C: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C3/C3EB1C.asm:14 STY @LOCAL03
    case 0xC3EB2D: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C3/C3EB1C.asm:15 BRA @UNKNOWN1
    case 0xC3EB2F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3EB1C.asm:17 INY
    case 0xC3EB31: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:18 STY @LOCAL03
    case 0xC3EB32: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C3/C3EB1C.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC3EB34: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:21 TYA
    case 0xC3EB36: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/unknown/C3/C3EB1C.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3EB37: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/unknown/C3/C3EB1C.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3EB39: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/unknown/C3/C3EB1C.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3EB3A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/unknown/C3/C3EB1C.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3EB3B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EB1C.asm:23 TAX
    case 0xC3EB3D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:24 LDA f:TIMED_ITEM_TRANSFORMATION_TABLE,X
    case 0xC3EB3E: cpu.execute_instruction<0xBF>(0xD5F4BB, 4); return true;
    // src/unknown/C3/C3EB1C.asm:25 AND #$00FF
    case 0xC3EB42: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC3EB42.
    case 0xC3EB44: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EB1C.asm:26 BEQ @UNKNOWN2
    case 0xC3EB45: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C3/C3EB1C.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC3EB47: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:28 CMP @VIRTUAL00
    case 0xC3EB49: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C3/C3EB1C.asm:29 BNE @UNKNOWN0
    case 0xC3EB4B: cpu.execute_instruction<0xD0>(0x0000E4, 2); return true;
    // src/unknown/C3/C3EB1C.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC3EB4D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:32 TYA
    case 0xC3EB4F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:33 JSL UNKNOWN_C48F98
    case 0xC3EB50: cpu.execute_instruction<0x22>(0xC48F98, 4); return true;
    // src/unknown/C3/C3EB1C.asm:34 LDX #0
    case 0xC3EB54: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C3/C3EB1C.asm:34 LDX #0
    // Overlapping static entry reached from 0xC3EB54.
    case 0xC3EB56: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C3/C3EB1C.asm:35 STX @LOCAL02
    case 0xC3EB57: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C3/C3EB1C.asm:36 BRA @UNKNOWN10
    case 0xC3EB59: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/unknown/C3/C3EB1C.asm:45 LDA GAME_STATE + game_state::party_members,X
    case 0xC3EB5B: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/unknown/C3/C3EB1C.asm:47 AND #$00FF
    case 0xC3EB5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC3EB5E.
    case 0xC3EB60: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3EB1C.asm:48 DEC
    case 0xC3EB61: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:49 LDY #.SIZEOF(char_struct)
    case 0xC3EB62: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3EB1C.asm:49 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EB62.
    case 0xC3EB64: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EB1C.asm:50 JSL MULT168
    case 0xC3EB65: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EB1C.asm:51 CLC
    case 0xC3EB69: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:52 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC3EB6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C3/C3EB1C.asm:52 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC3EB6A.
    case 0xC3EB6C: cpu.execute_instruction<0x99>(0x000485, 3); return true;
    // src/unknown/C3/C3EB1C.asm:53 STA @VIRTUAL04
    case 0xC3EB6D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3EB1C.asm:54 LDA #0
    case 0xC3EB6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3EB1C.asm:54 LDA #0
    // Overlapping static entry reached from 0xC3EB6F.
    case 0xC3EB71: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:55 STA @VIRTUAL02
    case 0xC3EB72: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:56 STA @LOCAL01
    case 0xC3EB74: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:57 BRA @UNKNOWN6
    case 0xC3EB76: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:59 LDA @VIRTUAL00
    case 0xC3EB78: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C3/C3EB1C.asm:60 AND #$00FF
    case 0xC3EB7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC3EB7A.
    case 0xC3EB7C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:61 STA @VIRTUAL02
    case 0xC3EB7D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:62 LDA @LOCAL00
    case 0xC3EB7F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EB1C.asm:63 CMP @VIRTUAL02
    case 0xC3EB81: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:64 BNE @UNKNOWN5
    case 0xC3EB83: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C3/C3EB1C.asm:65 LDY @LOCAL03
    case 0xC3EB85: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C3/C3EB1C.asm:66 TYA
    case 0xC3EB87: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:67 JSL INITIALIZE_ITEM_TRANSFORMATION
    case 0xC3EB88: cpu.execute_instruction<0x22>(0xC48EEB, 4); return true;
    // src/unknown/C3/C3EB1C.asm:68 BRA @UNKNOWN11
    case 0xC3EB8C: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/unknown/C3/C3EB1C.asm:70 LDA @LOCAL01
    case 0xC3EB8E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:71 STA @VIRTUAL02
    case 0xC3EB90: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:72 INC @VIRTUAL02
    case 0xC3EB92: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:73 LDA @VIRTUAL02
    case 0xC3EB94: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:74 STA @LOCAL01
    case 0xC3EB96: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:76 LDA #.SIZEOF(char_struct::items)
    case 0xC3EB98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C3/C3EB1C.asm:76 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC3EB98.
    case 0xC3EB9A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3EB1C.asm:77 CLC
    case 0xC3EB9B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:78 SBC @VIRTUAL02
    case 0xC3EB9C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C3/C3EB1C.asm:79 BRANCHLTEQS @UNKNOWN9
    case 0xC3EB9E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C3/C3EB1C.asm:79 BRANCHLTEQS @UNKNOWN9
    case 0xC3EBA0: cpu.execute_instruction<0x10>(0x000014, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C3/C3EB1C.asm:79 BRANCHLTEQS @UNKNOWN9
    case 0xC3EBA2: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C3/C3EB1C.asm:79 BRANCHLTEQS @UNKNOWN9
    case 0xC3EBA4: cpu.execute_instruction<0x30>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:80 LDA @VIRTUAL04
    case 0xC3EBA6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EB1C.asm:81 CLC
    case 0xC3EBA8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:82 ADC @VIRTUAL02
    case 0xC3EBA9: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:83 TAX
    case 0xC3EBAB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:84 LDA a:char_struct::items,X
    case 0xC3EBAC: cpu.execute_instruction<0xBD>(0x000023, 3); return true;
    // src/unknown/C3/C3EB1C.asm:85 AND #$00FF
    case 0xC3EBAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC3EBAF.
    case 0xC3EBB1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:86 STA @LOCAL00
    case 0xC3EBB2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EB1C.asm:87 BNE @UNKNOWN4
    case 0xC3EBB4: cpu.execute_instruction<0xD0>(0x0000C2, 2); return true;
    // src/unknown/C3/C3EB1C.asm:89 LDX @LOCAL02
    case 0xC3EBB6: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C3/C3EB1C.asm:90 INX
    case 0xC3EBB8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:91 STX @LOCAL02
    case 0xC3EBB9: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C3/C3EB1C.asm:93 LDA GAME_STATE + game_state::player_controlled_party_count
    case 0xC3EBBB: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C3/C3EB1C.asm:94 AND #$00FF
    case 0xC3EBBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC3EBBE.
    case 0xC3EBC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:95 STA @VIRTUAL02
    case 0xC3EBC1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:96 TXA
    case 0xC3EBC3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:97 CMP @VIRTUAL02
    case 0xC3EBC4: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:98 BCC @UNKNOWN3
    case 0xC3EBC6: cpu.execute_instruction<0x90>(0x000093, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EB1C.asm:100 END_C_FUNCTION
    case 0xC3EBC8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EB1C.asm:100 END_C_FUNCTION
    case 0xC3EBC9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EBCA.asm (unresolved).
bool execute_unresolved_c3_c3ebca_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EBCA.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3EBCA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EBCA.asm:6 END_STACK_VARS
    case 0xC3EBCC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EBCA.asm:6 END_STACK_VARS
    case 0xC3EBCD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EBCA.asm:6 END_STACK_VARS
    case 0xC3EBCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EBCA.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC3EBCE.
    case 0xC3EBD0: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EBCA.asm:6 END_STACK_VARS
    case 0xC3EBD1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:7 LDY #0
    case 0xC3EBD2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C3/C3EBCA.asm:7 LDY #0
    // Overlapping static entry reached from 0xC3EBD2.
    case 0xC3EBD4: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C3/C3EBCA.asm:8 STY @LOCAL00
    case 0xC3EBD5: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C3/C3EBCA.asm:9 BRA @UNKNOWN3
    case 0xC3EBD7: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/unknown/C3/C3EBCA.asm:11 AND #$00FF
    case 0xC3EBD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EBCA.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC3EBD9.
    case 0xC3EBDB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EBCA.asm:12 TAX
    case 0xC3EBDC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:13 LDA #$00FF
    case 0xC3EBDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EBCA.asm:13 LDA #$00FF
    // Overlapping static entry reached from 0xC3EBDD.
    case 0xC3EBDF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EBCA.asm:14 JSL FIND_ITEM_IN_INVENTORY2
    case 0xC3EBE0: cpu.execute_instruction<0x22>(0xC45683, 4); return true;
    // src/unknown/C3/C3EBCA.asm:15 CMP #0
    case 0xC3EBE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C3/C3EBCA.asm:15 CMP #0
    // Overlapping static entry reached from 0xC3EBE4.
    case 0xC3EBE6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EBCA.asm:16 BEQ @UNKNOWN1
    case 0xC3EBE7: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C3/C3EBCA.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC3EBE9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EBCA.asm:18 LDA [@VIRTUAL06]
    case 0xC3EBEB: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:19 JSL UNKNOWN_C3EAD0
    case 0xC3EBED: cpu.execute_instruction<0x22>(0xC3EAD0, 4); return true;
    // src/unknown/C3/C3EBCA.asm:20 BRA @UNKNOWN2
    case 0xC3EBF1: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C3/C3EBCA.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC3EBF3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EBCA.asm:23 LDA [@VIRTUAL06]
    case 0xC3EBF5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:24 JSL UNKNOWN_C3EB1C
    case 0xC3EBF7: cpu.execute_instruction<0x22>(0xC3EB1C, 4); return true;
    // src/unknown/C3/C3EBCA.asm:27 LDY @LOCAL00
    case 0xC3EBFB: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3EBCA.asm:28 INY
    case 0xC3EBFD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:29 STY @LOCAL00
    case 0xC3EBFE: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3EBCA.asm:31 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC3EC00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BB, 2); else cpu.execute_instruction<0xA9>(0x00F4BB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3EBCA.asm:31 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3EC00.
    case 0xC3EC02: cpu.execute_instruction<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3EBCA.asm:31 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC3EC03: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3EBCA.asm:31 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC3EC05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3EBCA.asm:31 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3EC05.
    case 0xC3EC07: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3EBCA.asm:31 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC3EC08: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3EBCA.asm:32 TYA
    case 0xC3EC0A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/unknown/C3/C3EBCA.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3EC0B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/unknown/C3/C3EBCA.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3EC0D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/unknown/C3/C3EBCA.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3EC0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/unknown/C3/C3EBCA.asm:33 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC3EC0F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EBCA.asm:34 CLC
    case 0xC3EC11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:35 ADC @VIRTUAL06
    case 0xC3EC12: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:36 STA @VIRTUAL06
    case 0xC3EC14: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:37 LDA [@VIRTUAL06]
    case 0xC3EC16: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:38 AND #$00FF
    case 0xC3EC18: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EBCA.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC3EC18.
    case 0xC3EC1A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EBCA.asm:39 BNE @UNKNOWN0
    case 0xC3EC1B: cpu.execute_instruction<0xD0>(0x0000BC, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EBCA.asm:40 END_C_FUNCTION
    case 0xC3EC1D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EBCA.asm:40 END_C_FUNCTION
    case 0xC3EC1E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EC1F.asm (unresolved).
bool execute_unresolved_c3_c3ec1f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EC1F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3EC1F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    case 0xC3EC21: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    case 0xC3EC22: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    case 0xC3EC23: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    case 0xC3EC24: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC3EC24.
    case 0xC3EC26: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    case 0xC3EC27: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3EC1F.asm:8 END_STACK_VARS
    case 0xC3EC28: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:9 STX @VIRTUAL02
    case 0xC3EC29: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3EC1F.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3EC26.
    case 0xC3EC2A: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EC1F.asm:10 TAX
    case 0xC3EC2B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:11 BEQ @UNKNOWN1
    case 0xC3EC2C: cpu.execute_instruction<0xF0>(0x00005B, 2); return true;
    // src/unknown/C3/C3EC1F.asm:12 TXA
    case 0xC3EC2E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:13 DEC
    case 0xC3EC2F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:14 STA @LOCAL00
    case 0xC3EC30: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC1F.asm:15 CPY #0
    case 0xC3EC32: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:15 CPY #0
    // Overlapping static entry reached from 0xC3EC32.
    case 0xC3EC34: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EC1F.asm:16 BNE @UNKNOWN0
    case 0xC3EC35: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C3/C3EC1F.asm:17 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3EC37: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3EC1F.asm:17 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3EC39: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3EC1F.asm:17 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3EC3B: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC1F.asm:18 LDA @LOCAL00
    case 0xC3EC3D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC1F.asm:19 LDY #.SIZEOF(char_struct)
    case 0xC3EC3F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3EC1F.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EC3F.
    case 0xC3EC41: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC1F.asm:20 JSL MULT168
    case 0xC3EC42: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EC1F.asm:21 TAX
    case 0xC3EC46: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:22 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC3EC47: cpu.execute_instruction<0xBD>(0x0099D8, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3EC1F.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC3EC4A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3EC1F.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC3EC4C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3EC1F.asm:24 JSL MULT32
    case 0xC3EC4E: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3EC1F.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3EC52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3EC1F.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3EC52.
    case 0xC3EC54: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C3/C3EC1F.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3EC55: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3EC1F.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3EC57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3EC1F.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3EC57.
    case 0xC3EC59: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C3/C3EC1F.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3EC5A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC1F.asm:26 JSL DIVISION32
    case 0xC3EC5C: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // src/unknown/C3/C3EC1F.asm:27 LDA @VIRTUAL06
    case 0xC3EC60: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3EC1F.asm:28 STA @VIRTUAL02
    case 0xC3EC62: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EC1F.asm:30 LDA @LOCAL00
    case 0xC3EC64: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC1F.asm:31 LDY #.SIZEOF(char_struct)
    case 0xC3EC66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3EC1F.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EC66.
    case 0xC3EC68: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC1F.asm:32 JSL MULT168
    case 0xC3EC69: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EC1F.asm:33 TAY
    case 0xC3EC6D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:34 CLC
    case 0xC3EC6E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    case 0xC3EC6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000015, 2); else cpu.execute_instruction<0x69>(0x009A15, 3); return true;
    // src/unknown/C3/C3EC1F.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    // Overlapping static entry reached from 0xC3EC6F.
    case 0xC3EC71: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:36 TAX
    case 0xC3EC72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:37 LDA __BSS_START__,X
    case 0xC3EC73: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:38 SEC
    case 0xC3EC76: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:39 SBC @VIRTUAL02
    case 0xC3EC77: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C3/C3EC1F.asm:40 STA __BSS_START__,X
    case 0xC3EC79: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:41 CMP PARTY_CHARACTERS+char_struct::max_hp,Y
    case 0xC3EC7C: cpu.execute_instruction<0xD9>(0x0099D8, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C3/C3EC1F.asm:42 BLTEQ @UNKNOWN1
    case 0xC3EC7F: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C3/C3EC1F.asm:42 BLTEQ @UNKNOWN1
    case 0xC3EC81: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C3/C3EC1F.asm:43 LDA #0
    case 0xC3EC83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:43 LDA #0
    // Overlapping static entry reached from 0xC3EC83.
    case 0xC3EC85: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3EC1F.asm:44 STA __BSS_START__,X
    case 0xC3EC86: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EC1F.asm:46 END_C_FUNCTION
    case 0xC3EC89: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EC1F.asm:46 END_C_FUNCTION
    case 0xC3EC8A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EC8B.asm (unresolved).
bool execute_unresolved_c3_c3ec8b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EC8B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3EC8B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    case 0xC3EC8D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    case 0xC3EC8E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    case 0xC3EC8F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    case 0xC3EC90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC3EC90.
    case 0xC3EC92: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    case 0xC3EC93: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3EC8B.asm:10 END_STACK_VARS
    case 0xC3EC94: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:11 STX @VIRTUAL02
    case 0xC3EC95: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3EC92.
    case 0xC3EC96: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EC8B.asm:12 TAX
    case 0xC3EC97: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C3/C3EC8B.asm:13 BEQL @UNKNOWN3
    case 0xC3EC98: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C3/C3EC8B.asm:13 BEQL @UNKNOWN3
    case 0xC3EC9A: cpu.execute_instruction<0x4C>(0x00ED2A, 3); return true;
    // src/unknown/C3/C3EC8B.asm:14 TXA
    case 0xC3EC9D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:15 DEC
    case 0xC3EC9E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:16 STA @VIRTUAL04
    case 0xC3EC9F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:17 CPY #0
    case 0xC3ECA1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:17 CPY #0
    // Overlapping static entry reached from 0xC3ECA1.
    case 0xC3ECA3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EC8B.asm:18 BNE @UNKNOWN1
    case 0xC3ECA4: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C3/C3EC8B.asm:19 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3ECA6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3EC8B.asm:19 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3ECA8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3EC8B.asm:19 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3ECAA: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC8B.asm:20 LDA @VIRTUAL04
    case 0xC3ECAC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:21 LDY #.SIZEOF(char_struct)
    case 0xC3ECAE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3EC8B.asm:21 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3ECAE.
    case 0xC3ECB0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC8B.asm:22 JSL MULT168
    case 0xC3ECB1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EC8B.asm:23 TAX
    case 0xC3ECB5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:24 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC3ECB6: cpu.execute_instruction<0xBD>(0x0099D8, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3EC8B.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC3ECB9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3EC8B.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC3ECBB: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3EC8B.asm:26 JSL MULT32
    case 0xC3ECBD: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3EC8B.asm:27 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3ECC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3EC8B.asm:27 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3ECC1.
    case 0xC3ECC3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C3/C3EC8B.asm:27 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3ECC4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3EC8B.asm:27 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3ECC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3EC8B.asm:27 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3ECC6.
    case 0xC3ECC8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C3/C3EC8B.asm:27 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3ECC9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC8B.asm:28 JSL DIVISION32
    case 0xC3ECCB: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // src/unknown/C3/C3EC8B.asm:29 LDA @VIRTUAL06
    case 0xC3ECCF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3EC8B.asm:30 STA @VIRTUAL02
    case 0xC3ECD1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:32 LDA @VIRTUAL04
    case 0xC3ECD3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC3ECD5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3EC8B.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3ECD5.
    case 0xC3ECD7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC8B.asm:34 JSL MULT168
    case 0xC3ECD8: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EC8B.asm:35 STA @LOCAL02
    case 0xC3ECDC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:36 CLC
    case 0xC3ECDE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:37 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    case 0xC3ECDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000015, 2); else cpu.execute_instruction<0x69>(0x009A15, 3); return true;
    // src/unknown/C3/C3EC8B.asm:37 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    // Overlapping static entry reached from 0xC3ECDF.
    case 0xC3ECE1: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:38 TAX
    case 0xC3ECE2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:39 LDA __BSS_START__,X
    case 0xC3ECE3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:40 CLC
    case 0xC3ECE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:41 ADC @VIRTUAL02
    case 0xC3ECE7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:42 STA __BSS_START__,X
    case 0xC3ECE9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:43 LDA @LOCAL02
    case 0xC3ECEC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:44 CLC
    case 0xC3ECEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:45 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp
    case 0xC3ECEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x009A13, 3); return true;
    // src/unknown/C3/C3EC8B.asm:45 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp
    // Overlapping static entry reached from 0xC3ECEF.
    case 0xC3ECF1: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:46 TAX
    case 0xC3ECF2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:47 LDA __BSS_START__,X
    case 0xC3ECF3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:48 BNE @UNKNOWN2
    case 0xC3ECF6: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C3/C3EC8B.asm:49 LDA #1
    case 0xC3ECF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3EC8B.asm:49 LDA #1
    // Overlapping static entry reached from 0xC3ECF8.
    case 0xC3ECFA: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3EC8B.asm:50 STA __BSS_START__,X
    case 0xC3ECFB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:52 LDA @VIRTUAL04
    case 0xC3ECFE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:53 LDY #.SIZEOF(char_struct)
    case 0xC3ED00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3EC8B.asm:53 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3ED00.
    case 0xC3ED02: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC8B.asm:54 JSL MULT168
    case 0xC3ED03: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EC8B.asm:55 STA @LOCAL01
    case 0xC3ED07: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3EC8B.asm:56 CLC
    case 0xC3ED09: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:57 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    case 0xC3ED0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000015, 2); else cpu.execute_instruction<0x69>(0x009A15, 3); return true;
    // src/unknown/C3/C3EC8B.asm:57 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    // Overlapping static entry reached from 0xC3ED0A.
    case 0xC3ED0C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:58 TAX
    case 0xC3ED0D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:59 STX @LOCAL00
    case 0xC3ED0E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC8B.asm:60 LDA @LOCAL01
    case 0xC3ED10: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3EC8B.asm:61 TAX
    case 0xC3ED12: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:62 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC3ED13: cpu.execute_instruction<0xBD>(0x0099D8, 3); return true;
    // src/unknown/C3/C3EC8B.asm:63 STA @LOCAL02
    case 0xC3ED16: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:64 STA @VIRTUAL02
    case 0xC3ED18: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:65 LDX @LOCAL00
    case 0xC3ED1A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC8B.asm:66 LDA __BSS_START__,X
    case 0xC3ED1C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:67 CMP @VIRTUAL02
    case 0xC3ED1F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C3/C3EC8B.asm:68 BLTEQ @UNKNOWN3
    case 0xC3ED21: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C3/C3EC8B.asm:68 BLTEQ @UNKNOWN3
    case 0xC3ED23: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3EC8B.asm:69 LDA @LOCAL02
    case 0xC3ED25: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:70 STA __BSS_START__,X
    case 0xC3ED27: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EC8B.asm:72 END_C_FUNCTION
    case 0xC3ED2A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EC8B.asm:72 END_C_FUNCTION
    case 0xC3ED2B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3ED2C.asm (unresolved).
bool execute_unresolved_c3_c3ed2c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3ED2C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3ED2C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    case 0xC3ED2E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    case 0xC3ED2F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    case 0xC3ED30: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    case 0xC3ED31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC3ED31.
    case 0xC3ED33: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    case 0xC3ED34: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3ED2C.asm:8 END_STACK_VARS
    case 0xC3ED35: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:9 STX @VIRTUAL02
    case 0xC3ED36: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3ED2C.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3ED33.
    case 0xC3ED37: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3ED2C.asm:10 TAX
    case 0xC3ED38: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:11 BEQ @UNKNOWN1
    case 0xC3ED39: cpu.execute_instruction<0xF0>(0x00005B, 2); return true;
    // src/unknown/C3/C3ED2C.asm:12 TXA
    case 0xC3ED3B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:13 DEC
    case 0xC3ED3C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:14 STA @LOCAL00
    case 0xC3ED3D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED2C.asm:15 CPY #0
    case 0xC3ED3F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:15 CPY #0
    // Overlapping static entry reached from 0xC3ED3F.
    case 0xC3ED41: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3ED2C.asm:16 BNE @UNKNOWN0
    case 0xC3ED42: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C3/C3ED2C.asm:17 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3ED44: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3ED2C.asm:17 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3ED46: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3ED2C.asm:17 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3ED48: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED2C.asm:18 LDA @LOCAL00
    case 0xC3ED4A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED2C.asm:19 LDY #.SIZEOF(char_struct)
    case 0xC3ED4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3ED2C.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3ED4C.
    case 0xC3ED4E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED2C.asm:20 JSL MULT168
    case 0xC3ED4F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3ED2C.asm:21 TAX
    case 0xC3ED53: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:22 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC3ED54: cpu.execute_instruction<0xBD>(0x0099DA, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3ED2C.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC3ED57: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3ED2C.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC3ED59: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3ED2C.asm:24 JSL MULT32
    case 0xC3ED5B: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3ED2C.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3ED5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3ED2C.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3ED5F.
    case 0xC3ED61: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C3/C3ED2C.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3ED62: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3ED2C.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3ED64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3ED2C.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3ED64.
    case 0xC3ED66: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C3/C3ED2C.asm:25 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3ED67: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED2C.asm:26 JSL DIVISION32
    case 0xC3ED69: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // src/unknown/C3/C3ED2C.asm:27 LDA @VIRTUAL06
    case 0xC3ED6D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3ED2C.asm:28 STA @VIRTUAL02
    case 0xC3ED6F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3ED2C.asm:30 LDA @LOCAL00
    case 0xC3ED71: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED2C.asm:31 LDY #.SIZEOF(char_struct)
    case 0xC3ED73: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3ED2C.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3ED73.
    case 0xC3ED75: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED2C.asm:32 JSL MULT168
    case 0xC3ED76: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3ED2C.asm:33 TAY
    case 0xC3ED7A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:34 CLC
    case 0xC3ED7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    case 0xC3ED7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x009A1B, 3); return true;
    // src/unknown/C3/C3ED2C.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    // Overlapping static entry reached from 0xC3ED7C.
    case 0xC3ED7E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:36 TAX
    case 0xC3ED7F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:37 LDA __BSS_START__,X
    case 0xC3ED80: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:38 SEC
    case 0xC3ED83: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:39 SBC @VIRTUAL02
    case 0xC3ED84: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C3/C3ED2C.asm:40 STA __BSS_START__,X
    case 0xC3ED86: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:41 CMP PARTY_CHARACTERS+char_struct::max_pp,Y
    case 0xC3ED89: cpu.execute_instruction<0xD9>(0x0099DA, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C3/C3ED2C.asm:42 BLTEQ @UNKNOWN1
    case 0xC3ED8C: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C3/C3ED2C.asm:42 BLTEQ @UNKNOWN1
    case 0xC3ED8E: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C3/C3ED2C.asm:43 LDA #0
    case 0xC3ED90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:43 LDA #0
    // Overlapping static entry reached from 0xC3ED90.
    case 0xC3ED92: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3ED2C.asm:44 STA __BSS_START__,X
    case 0xC3ED93: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3ED2C.asm:46 END_C_FUNCTION
    case 0xC3ED96: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3ED2C.asm:46 END_C_FUNCTION
    case 0xC3ED97: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3ED98.asm (unresolved).
bool execute_unresolved_c3_c3ed98_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3ED98.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3ED98: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    case 0xC3ED9A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    case 0xC3ED9B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    case 0xC3ED9C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    case 0xC3ED9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC3ED9D.
    case 0xC3ED9F: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    case 0xC3EDA0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3ED98.asm:9 END_STACK_VARS
    case 0xC3EDA1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:10 STX @VIRTUAL02
    case 0xC3EDA2: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3ED9F.
    case 0xC3EDA3: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3ED98.asm:11 TAX
    case 0xC3EDA4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:12 BEQ @UNKNOWN1
    case 0xC3EDA5: cpu.execute_instruction<0xF0>(0x00006B, 2); return true;
    // src/unknown/C3/C3ED98.asm:13 TXA
    case 0xC3EDA7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:14 DEC
    case 0xC3EDA8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:15 STA @LOCAL01
    case 0xC3EDA9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:16 CPY #0
    case 0xC3EDAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3ED98.asm:16 CPY #0
    // Overlapping static entry reached from 0xC3EDAB.
    case 0xC3EDAD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3ED98.asm:17 BNE @UNKNOWN0
    case 0xC3EDAE: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/unknown/C3/C3ED98.asm:18 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3EDB0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3ED98.asm:18 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3EDB2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3ED98.asm:18 MOVE_INT1632 @VIRTUAL02, @VIRTUAL0A
    case 0xC3EDB4: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED98.asm:19 LDA @LOCAL01
    case 0xC3EDB6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:20 LDY #.SIZEOF(char_struct)
    case 0xC3EDB8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3ED98.asm:20 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EDB8.
    case 0xC3EDBA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED98.asm:21 JSL MULT168
    case 0xC3EDBB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3ED98.asm:22 TAX
    case 0xC3EDBF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:23 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC3EDC0: cpu.execute_instruction<0xBD>(0x0099DA, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3ED98.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xC3EDC3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3ED98.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xC3EDC5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3ED98.asm:25 JSL MULT32
    case 0xC3EDC7: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3ED98.asm:26 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3EDCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C3/C3ED98.asm:26 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3EDCB.
    case 0xC3EDCD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C3/C3ED98.asm:26 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3EDCE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3ED98.asm:26 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3EDD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C3/C3ED98.asm:26 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    // Overlapping static entry reached from 0xC3EDD0.
    case 0xC3EDD2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C3/C3ED98.asm:26 MOVE_INT_CONSTANT 100, @VIRTUAL0A
    case 0xC3EDD3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED98.asm:27 JSL DIVISION32
    case 0xC3EDD5: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // src/unknown/C3/C3ED98.asm:28 LDA @VIRTUAL06
    case 0xC3EDD9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3ED98.asm:29 STA @VIRTUAL02
    case 0xC3EDDB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:31 LDA @LOCAL01
    case 0xC3EDDD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC3EDDF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3ED98.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EDDF.
    case 0xC3EDE1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED98.asm:33 JSL MULT168
    case 0xC3EDE2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3ED98.asm:34 STA @LOCAL01
    case 0xC3EDE6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:35 CLC
    case 0xC3EDE8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    case 0xC3EDE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x009A1B, 3); return true;
    // src/unknown/C3/C3ED98.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    // Overlapping static entry reached from 0xC3EDE9.
    case 0xC3EDEB: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:37 TAY
    case 0xC3EDEC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:38 LDA __BSS_START__,Y
    case 0xC3EDED: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C3/C3ED98.asm:39 CLC
    case 0xC3EDF0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:40 ADC @VIRTUAL02
    case 0xC3EDF1: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:41 TAX
    case 0xC3EDF3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:42 STX @LOCAL00
    case 0xC3EDF4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED98.asm:43 TXA
    case 0xC3EDF6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:44 STA __BSS_START__,Y
    case 0xC3EDF7: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C3/C3ED98.asm:45 LDA @LOCAL01
    case 0xC3EDFA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:46 TAX
    case 0xC3EDFC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:47 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC3EDFD: cpu.execute_instruction<0xBD>(0x0099DA, 3); return true;
    // src/unknown/C3/C3ED98.asm:48 STA @LOCAL01
    case 0xC3EE00: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:49 STA @VIRTUAL02
    case 0xC3EE02: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:50 LDX @LOCAL00
    case 0xC3EE04: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED98.asm:51 TXA
    case 0xC3EE06: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:52 CMP @VIRTUAL02
    case 0xC3EE07: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C3/C3ED98.asm:53 BLTEQ @UNKNOWN1
    case 0xC3EE09: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C3/C3ED98.asm:53 BLTEQ @UNKNOWN1
    case 0xC3EE0B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3ED98.asm:54 LDA @LOCAL01
    case 0xC3EE0D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:55 STA __BSS_START__,Y
    case 0xC3EE0F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3ED98.asm:57 END_C_FUNCTION
    case 0xC3EE12: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3ED98.asm:57 END_C_FUNCTION
    case 0xC3EE13: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EE14.asm (unresolved).
bool execute_unresolved_c3_c3ee14_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EE14.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3EE14: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    case 0xC3EE16: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    case 0xC3EE17: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    case 0xC3EE18: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    case 0xC3EE19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC3EE6E.
    case 0xC3EE1A: cpu.execute_instruction<0xF0>(0x0000FF, 2); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC3EE19.
    case 0xC3EE1B: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    case 0xC3EE1C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3EE14.asm:9 END_STACK_VARS
    case 0xC3EE1D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:10 TXY
    case 0xC3EE1E: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:11 TAX
    case 0xC3EE1F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:12 STX @LOCAL00
    case 0xC3EE20: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE14.asm:13 TYA
    case 0xC3EE22: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3EE14.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3EE23: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3EE14.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC3EE23.
    case 0xC3EE25: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3EE14.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3EE26: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EE14.asm:15 CLC
    case 0xC3EE2A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:16 ADC #item::flags
    case 0xC3EE2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/unknown/C3/C3EE14.asm:16 ADC #item::flags
    // Overlapping static entry reached from 0xC3EE2B.
    case 0xC3EE2D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EE14.asm:17 TAX
    case 0xC3EE2E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC3EE2F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EE14.asm:19 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC3EE31: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/unknown/C3/C3EE14.asm:20 LDX @LOCAL00
    case 0xC3EE35: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE14.asm:21 DEX
    case 0xC3EE37: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:22 AND f:ITEM_USABLE_FLAGS,X
    case 0xC3EE38: cpu.execute_instruction<0x3F>(0xC458AB, 4); return true;
    // src/unknown/C3/C3EE14.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC3EE3C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EE14.asm:24 AND #$00FF
    case 0xC3EE3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EE14.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC3EE3E.
    case 0xC3EE40: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE14.asm:25 BEQ @UNKNOWN0
    case 0xC3EE41: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3EE14.asm:26 LDA #TRUE
    case 0xC3EE43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3EE14.asm:26 LDA #TRUE
    // Overlapping static entry reached from 0xC3EE43.
    case 0xC3EE45: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3EE14.asm:27 BRA @UNKNOWN1
    case 0xC3EE46: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3EE14.asm:29 LDA #FALSE
    case 0xC3EE48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3EE14.asm:29 LDA #FALSE
    // Overlapping static entry reached from 0xC3EE48.
    case 0xC3EE4A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EE14.asm:31 END_C_FUNCTION
    case 0xC3EE4B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EE14.asm:31 END_C_FUNCTION
    case 0xC3EE4C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EE4D.asm (unresolved).
bool execute_unresolved_c3_c3ee4d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EE4D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3EE4D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C3/C3EE4D.asm:5 JSL UPDATE_PARTY
    case 0xC3EE4F: cpu.execute_instruction<0x22>(0xC034D6, 4); return true;
    // src/unknown/C3/C3EE4D.asm:6 JSL UNKNOWN_C07B52
    case 0xC3EE53: cpu.execute_instruction<0x22>(0xC07B52, 4); return true;
    // src/unknown/C3/C3EE4D.asm:7 JSL UNKNOWN_C1004E
    case 0xC3EE57: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/unknown/C3/C3EE4D.asm:8 JSL UNKNOWN_C0943C
    case 0xC3EE5B: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // src/unknown/C3/C3EE4D.asm:9 LDA ENTITY_FADE_ENTITY
    case 0xC3EE5F: cpu.execute_instruction<0xAD>(0x00B4A8, 3); return true;
    // src/unknown/C3/C3EE4D.asm:10 CMP #.LOWORD(-1)
    case 0xC3EE62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3EE4D.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3EE62.
    case 0xC3EE64: cpu.execute_instruction<0xFF>(0xAD12F0, 4); return true;
    // src/unknown/C3/C3EE4D.asm:11 BEQ @UNKNOWN0
    case 0xC3EE65: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/C3/C3EE4D.asm:12 LDA ENTITY_FADE_ENTITY
    case 0xC3EE67: cpu.execute_instruction<0xAD>(0x00B4A8, 3); return true;
    // src/unknown/C3/C3EE4D.asm:12 LDA ENTITY_FADE_ENTITY
    // Overlapping static entry reached from 0xC3EE64.
    case 0xC3EE68: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:12 LDA ENTITY_FADE_ENTITY
    // Overlapping static entry reached from 0xC3EE68.
    case 0xC3EE69: cpu.execute_instruction<0xB4>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE4D.asm:13 ASL
    case 0xC3EE6A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:14 CLC
    case 0xC3EE6B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:15 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC3EE6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C3/C3EE4D.asm:15 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC3EE6C.
    case 0xC3EE6E: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EE4D.asm:16 TAX
    case 0xC3EE6F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:17 LDA __BSS_START__,X
    case 0xC3EE70: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EE4D.asm:18 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC3EE73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C3/C3EE4D.asm:18 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC3EE73.
    case 0xC3EE75: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C3/C3EE4D.asm:19 STA __BSS_START__,X
    case 0xC3EE76: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EE4D.asm:21 END_C_FUNCTION
    case 0xC3EE79: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3EE7A.asm (unresolved).
bool execute_unresolved_c3_c3ee7a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3EE7A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3EE7A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    case 0xC3EE7C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    case 0xC3EE7D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    case 0xC3EE7E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    case 0xC3EE7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC3EE7F.
    case 0xC3EE81: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    case 0xC3EE82: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3EE7A.asm:8 END_STACK_VARS
    case 0xC3EE83: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:9 STA @LOCAL00
    case 0xC3EE84: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE7A.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC3EE81.
    case 0xC3EE85: cpu.execute_instruction<0x0E>(0x000FA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC3EE86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00550F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3EE86.
    case 0xC3EE88: cpu.execute_instruction<0x55>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC3EE89: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3EE88.
    case 0xC3EE8A: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC3EE8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3EE8A.
    case 0xC3EE8C: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3EE8B.
    case 0xC3EE8D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:10 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC3EE8E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3EE7A.asm:11 LDA @LOCAL00
    case 0xC3EE90: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C3/C3EE7A.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3EE92: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C3/C3EE7A.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3EE94: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C3/C3EE7A.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3EE95: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EE7A.asm:13 TAX
    case 0xC3EE97: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C3/C3EE7A.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3EE98: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3EE9A: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3EE9C: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:14 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3EE9E: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C3/C3EE7A.asm:15 CLC
    case 0xC3EEA0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:16 ADC @VIRTUAL0A
    case 0xC3EEA1: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE7A.asm:17 STA @VIRTUAL0A
    case 0xC3EEA3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE7A.asm:18 LDA [@VIRTUAL0A]
    case 0xC3EEA5: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE7A.asm:19 AND #$00FF
    case 0xC3EEA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EE7A.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC3EEA7.
    case 0xC3EEA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EE7A.asm:20 STA @LOCAL00
    case 0xC3EEAA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE7A.asm:21 AND #$0080
    case 0xC3EEAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C3/C3EE7A.asm:21 AND #$0080
    // Overlapping static entry reached from 0xC3EEAC.
    case 0xC3EEAE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE7A.asm:22 BEQ @UNKNOWN3
    case 0xC3EEAF: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/unknown/C3/C3EE7A.asm:23 LDA @LOCAL00
    case 0xC3EEB1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE7A.asm:24 AND #$007F
    case 0xC3EEB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/C3/C3EE7A.asm:24 AND #$007F
    // Overlapping static entry reached from 0xC3EEB3.
    case 0xC3EEB5: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3EE7A.asm:25 CMP #1
    case 0xC3EEB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C3/C3EE7A.asm:25 CMP #1
    // Overlapping static entry reached from 0xC3EEB6.
    case 0xC3EEB8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE7A.asm:26 BEQ @UNKNOWN0
    case 0xC3EEB9: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C3/C3EE7A.asm:27 CMP #2
    case 0xC3EEBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C3/C3EE7A.asm:27 CMP #2
    // Overlapping static entry reached from 0xC3EEBB.
    case 0xC3EEBD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE7A.asm:28 BEQ @UNKNOWN1
    case 0xC3EEBE: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C3/C3EE7A.asm:29 BRA @UNKNOWN2
    case 0xC3EEC0: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C3/C3EE7A.asm:31 TXA
    case 0xC3EEC2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:32 INC
    case 0xC3EEC3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:33 CLC
    case 0xC3EEC4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:34 ADC @VIRTUAL06
    case 0xC3EEC5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:35 STA @VIRTUAL06
    case 0xC3EEC7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:36 LDA [@VIRTUAL06]
    case 0xC3EEC9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:37 TAX
    case 0xC3EECB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC3EECC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EE7A.asm:39 LDA __BSS_START__,X
    case 0xC3EECE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC3EED1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/unknown/C3/C3EE7A.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC3EED3: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC3EED5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/unknown/C3/C3EE7A.asm:40 STORE_INT832 @VIRTUAL06
    case 0xC3EED7: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C3/C3EE7A.asm:41 BRA @UNKNOWN4
    case 0xC3EED9: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/unknown/C3/C3EE7A.asm:43 TXA
    case 0xC3EEDB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:44 INC
    case 0xC3EEDC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:45 CLC
    case 0xC3EEDD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:46 ADC @VIRTUAL06
    case 0xC3EEDE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:47 STA @VIRTUAL06
    case 0xC3EEE0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:48 LDA [@VIRTUAL06]
    case 0xC3EEE2: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:49 TAX
    case 0xC3EEE4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:50 LDA __BSS_START__,X
    case 0xC3EEE5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:51 STORE_INT1632 @VIRTUAL06
    case 0xC3EEE8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:51 STORE_INT1632 @VIRTUAL06
    case 0xC3EEEA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3EE7A.asm:52 BRA @UNKNOWN4
    case 0xC3EEEC: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C3/C3EE7A.asm:54 TXA
    case 0xC3EEEE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:55 INC
    case 0xC3EEEF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:56 CLC
    case 0xC3EEF0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:57 ADC @VIRTUAL06
    case 0xC3EEF1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:58 STA @VIRTUAL06
    case 0xC3EEF3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:59 LDA [@VIRTUAL06]
    case 0xC3EEF5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:60 TAY
    case 0xC3EEF7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C3/C3EE7A.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC3EEF8: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC3EEFB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C3/C3EE7A.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC3EEFD: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:61 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC3EF00: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3EE7A.asm:62 BRA @UNKNOWN4
    case 0xC3EF02: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C3/C3EE7A.asm:64 TXA
    case 0xC3EF04: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:65 INC
    case 0xC3EF05: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:66 CLC
    case 0xC3EF06: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:67 ADC @VIRTUAL06
    case 0xC3EF07: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:68 STA @VIRTUAL06
    case 0xC3EF09: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:69 LDA [@VIRTUAL06]
    case 0xC3EF0B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:70 PROMOTENEARPTRA @VIRTUAL06
    case 0xC3EF0D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C3/C3EE7A.asm:70 PROMOTENEARPTRA @VIRTUAL06
    case 0xC3EF0F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C3/C3EE7A.asm:70 PROMOTENEARPTRA @VIRTUAL06
    case 0xC3EF10: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C3/C3EE7A.asm:70 PROMOTENEARPTRA @VIRTUAL06
    case 0xC3EF12: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:70 PROMOTENEARPTRA @VIRTUAL06
    case 0xC3EF13: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C3/C3EE7A.asm:70 PROMOTENEARPTRA @VIRTUAL06
    case 0xC3EF15: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C3/C3EE7A.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC3EF17: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3EE7A.asm:73 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC3EF19: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3EE7A.asm:73 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC3EF1B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:73 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC3EF1D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3EE7A.asm:73 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC3EF1F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3EE7A.asm:74 END_C_FUNCTION
    case 0xC3EF21: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3EE7A.asm:74 END_C_FUNCTION
    case 0xC3EF22: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3F1EC.asm (unresolved).
bool execute_unresolved_c3_c3f1ec_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3F1EC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3F1EC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    case 0xC3F1EE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    case 0xC3F1EF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    case 0xC3F1F0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    case 0xC3F1F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F1F1.
    case 0xC3F1F3: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    case 0xC3F1F4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3F1EC.asm:13 END_STACK_VARS
    case 0xC3F1F5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:14 STA @LOCAL03
    case 0xC3F1F6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3F1EC.asm:14 STA @LOCAL03
    // Overlapping static entry reached from 0xC3F1F3.
    case 0xC3F1F7: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F1EC.asm:15 LDA #3
    case 0xC3F1F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C3/C3F1EC.asm:15 LDA #3
    // Overlapping static entry reached from 0xC3F1F7.
    case 0xC3F1F9: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/unknown/C3/C3F1EC.asm:15 LDA #3
    // Overlapping static entry reached from 0xC3F1F8.
    case 0xC3F1FA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F1EC.asm:16 JSL UNKNOWN_C2239D
    case 0xC3F1FB: cpu.execute_instruction<0x22>(0xC2239D, 4); return true;
    // src/unknown/C3/C3F1EC.asm:17 CMP #0
    case 0xC3F1FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:17 CMP #0
    // Overlapping static entry reached from 0xC3F1FF.
    case 0xC3F201: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F1EC.asm:18 BNE @UNKNOWN0
    case 0xC3F202: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:19 LDA #0
    case 0xC3F204: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:19 LDA #0
    // Overlapping static entry reached from 0xC3F204.
    case 0xC3F206: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:20 JMP @UNKNOWN6
    case 0xC3F207: cpu.execute_instruction<0x4C>(0x00F2AF, 3); return true;
    // src/unknown/C3/C3F1EC.asm:22 LDA #0
    case 0xC3F20A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:22 LDA #0
    // Overlapping static entry reached from 0xC3F20A.
    case 0xC3F20C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F1EC.asm:23 STA @VIRTUAL02
    case 0xC3F20D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:24 JMP @UNKNOWN4
    case 0xC3F20F: cpu.execute_instruction<0x4C>(0x00F28D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC3F212: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F212.
    case 0xC3F214: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC3F215: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F214.
    case 0xC3F216: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC3F217: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F216.
    case 0xC3F218: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F217.
    case 0xC3F219: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3F1EC.asm:26 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC3F21A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F1EC.asm:27 TYA
    case 0xC3F21C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3F1EC.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3F21D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3F1EC.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC3F21D.
    case 0xC3F21F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3F1EC.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC3F220: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3F1EC.asm:29 TAX
    case 0xC3F224: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:30 STX @LOCAL02
    case 0xC3F225: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C3/C3F1EC.asm:31 TXA
    case 0xC3F227: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:32 CLC
    case 0xC3F228: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:33 ADC #item::type
    case 0xC3F229: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/unknown/C3/C3F1EC.asm:33 ADC #item::type
    // Overlapping static entry reached from 0xC3F229.
    case 0xC3F22B: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C3/C3F1EC.asm:34 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3F22C: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C3/C3F1EC.asm:34 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3F22E: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C3/C3F1EC.asm:34 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3F230: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C3/C3F1EC.asm:34 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC3F232: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:35 CLC
    case 0xC3F234: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:36 ADC @VIRTUAL0A
    case 0xC3F235: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:37 STA @VIRTUAL0A
    case 0xC3F237: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:38 LDA [@VIRTUAL0A]
    case 0xC3F239: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:39 AND #$00FF
    case 0xC3F23B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F1EC.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC3F23B.
    case 0xC3F23D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3F1EC.asm:40 CMP #8
    case 0xC3F23E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C3/C3F1EC.asm:40 CMP #8
    // Overlapping static entry reached from 0xC3F23E.
    case 0xC3F240: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F1EC.asm:41 BNE @UNKNOWN3
    case 0xC3F241: cpu.execute_instruction<0xD0>(0x000046, 2); return true;
    // src/unknown/C3/C3F1EC.asm:42 TXA
    case 0xC3F243: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:43 CLC
    case 0xC3F244: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:44 ADC #item::params + item_parameters::epi
    case 0xC3F245: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/C3/C3F1EC.asm:44 ADC #item::params + item_parameters::epi
    // Overlapping static entry reached from 0xC3F245.
    case 0xC3F247: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C3/C3F1EC.asm:45 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F248: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C3/C3F1EC.asm:45 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F24A: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C3/C3F1EC.asm:45 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F24C: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C3/C3F1EC.asm:45 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F24E: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:46 CLC
    case 0xC3F250: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:47 ADC @VIRTUAL0A
    case 0xC3F251: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:48 STA @VIRTUAL0A
    case 0xC3F253: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F255: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:50 LDA [@VIRTUAL0A]
    case 0xC3F257: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:51 CMP PARTY_CHARACTERS+(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::iq
    case 0xC3F259: cpu.execute_instruction<0xCD>(0x009AA7, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C3/C3F1EC.asm:52 BGT @UNKNOWN3
    case 0xC3F25C: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C3/C3F1EC.asm:52 BGT @UNKNOWN3
    case 0xC3F25E: cpu.execute_instruction<0xB0>(0x000029, 2); return true;
    // src/unknown/C3/C3F1EC.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC3F260: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:54 LDA #99
    case 0xC3F262: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000063, 2); else cpu.execute_instruction<0xA9>(0x000063, 3); return true;
    // src/unknown/C3/C3F1EC.asm:54 LDA #99
    // Overlapping static entry reached from 0xC3F262.
    case 0xC3F264: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F1EC.asm:55 JSL RAND_MOD
    case 0xC3F265: cpu.execute_instruction<0x22>(0xC45F7B, 4); return true;
    // src/unknown/C3/C3F1EC.asm:56 CMP @LOCAL03
    case 0xC3F269: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // src/unknown/C3/C3F1EC.asm:57 BCS @UNKNOWN3
    case 0xC3F26B: cpu.execute_instruction<0xB0>(0x00001C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:58 LDX @LOCAL02
    case 0xC3F26D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C3/C3F1EC.asm:59 TXA
    case 0xC3F26F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:60 CLC
    case 0xC3F270: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:61 ADC #item::params + item_parameters::ep
    case 0xC3F271: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/unknown/C3/C3F1EC.asm:61 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC3F271.
    case 0xC3F273: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3F1EC.asm:62 CLC
    case 0xC3F274: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:63 ADC @VIRTUAL06
    case 0xC3F275: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:64 STA @VIRTUAL06
    case 0xC3F277: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F279: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:66 LDA [@VIRTUAL06]
    case 0xC3F27B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:71 LDX @VIRTUAL04
    case 0xC3F27D: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C3/C3F1EC.asm:73 STA __BSS_START__,X
    case 0xC3F27F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:74 LDY @LOCAL01
    case 0xC3F282: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3F1EC.asm:75 REP #PROC_FLAGS::ACCUM8
    case 0xC3F284: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:76 TYA
    case 0xC3F286: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:77 BRA @UNKNOWN6
    case 0xC3F287: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C3/C3F1EC.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC3F289: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:80 INC @VIRTUAL02
    case 0xC3F28B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:82 LDA @VIRTUAL02
    case 0xC3F28D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:83 CMP #.SIZEOF(char_struct::items)
    case 0xC3F28F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/unknown/C3/C3F1EC.asm:83 CMP #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC3F28F.
    case 0xC3F291: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F1EC.asm:84 BCS @UNKNOWN5
    case 0xC3F292: cpu.execute_instruction<0xB0>(0x000018, 2); return true;
    // src/unknown/C3/C3F1EC.asm:85 LDA @VIRTUAL02
    case 0xC3F294: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:86 CLC
    case 0xC3F296: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:92 ADC #.LOWORD(PARTY_CHARACTERS)+(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::items
    case 0xC3F297: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AF, 2); else cpu.execute_instruction<0x69>(0x009AAF, 3); return true;
    // src/unknown/C3/C3F1EC.asm:92 ADC #.LOWORD(PARTY_CHARACTERS)+(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::items
    // Overlapping static entry reached from 0xC3F297.
    case 0xC3F299: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:94 STA @VIRTUAL04
    case 0xC3F29A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F1EC.asm:98 LDX @VIRTUAL04
    case 0xC3F29C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C3/C3F1EC.asm:99 LDA __BSS_START__,X
    case 0xC3F29E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:100 AND #$00FF
    case 0xC3F2A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F1EC.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC3F2A1.
    case 0xC3F2A3: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F1EC.asm:101 TAY
    case 0xC3F2A4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:102 STY @LOCAL01
    case 0xC3F2A5: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C3/C3F1EC.asm:103 BNEL @UNKNOWN1
    case 0xC3F2A7: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C3/C3F1EC.asm:103 BNEL @UNKNOWN1
    case 0xC3F2A9: cpu.execute_instruction<0x4C>(0x00F212, 3); return true;
    // src/unknown/C3/C3F1EC.asm:105 LDA #0
    case 0xC3F2AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:105 LDA #0
    // Overlapping static entry reached from 0xC3F2AC.
    case 0xC3F2AE: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3F1EC.asm:107 END_C_FUNCTION
    case 0xC3F2AF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3F1EC.asm:107 END_C_FUNCTION
    case 0xC3F2B0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3F5F9.asm (unresolved).
bool execute_unresolved_c3_c3f5f9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3F5F9.asm:3 BEGIN_C_FUNCTION
    case 0xC3F5F9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3F5F9.asm:9 END_STACK_VARS
    case 0xC3F5FB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3F5F9.asm:9 END_STACK_VARS
    case 0xC3F5FC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F5F9.asm:9 END_STACK_VARS
    case 0xC3F5FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F5F9.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F5FD.
    case 0xC3F5FF: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3F5F9.asm:9 END_STACK_VARS
    case 0xC3F600: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:10 LDA #0
    case 0xC3F601: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F5F9.asm:10 LDA #0
    // Overlapping static entry reached from 0xC3F601.
    case 0xC3F603: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F5F9.asm:11 STA @VIRTUAL04
    case 0xC3F604: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:12 LDA TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F606: cpu.execute_instruction<0xAD>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F5F9.asm:13 ASL
    case 0xC3F609: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:14 STA @LOCAL03
    case 0xC3F60A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C3/C3F5F9.asm:15 LDA #0
    case 0xC3F60C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F5F9.asm:15 LDA #0
    // Overlapping static entry reached from 0xC3F60C.
    case 0xC3F60E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F5F9.asm:16 STA @VIRTUAL02
    case 0xC3F60F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:17 STA @LOCAL02
    case 0xC3F611: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C3/C3F5F9.asm:18 BRA @UNKNOWN2
    case 0xC3F613: cpu.execute_instruction<0x80>(0x00005F, 2); return true;
    // src/unknown/C3/C3F5F9.asm:20 LDA TILEMAP_UPDATE_TILE_X
    case 0xC3F615: cpu.execute_instruction<0xAD>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F5F9.asm:21 AND #$001F
    case 0xC3F618: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C3/C3F5F9.asm:21 AND #$001F
    // Overlapping static entry reached from 0xC3F618.
    case 0xC3F61A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F5F9.asm:22 STA @VIRTUAL02
    case 0xC3F61B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:23 LDA TILEMAP_UPDATE_TILE_Y
    case 0xC3F61D: cpu.execute_instruction<0xAD>(0x009F7C, 3); return true;
    // src/unknown/C3/C3F5F9.asm:24 ASL
    case 0xC3F620: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:25 ASL
    case 0xC3F621: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:26 ASL
    case 0xC3F622: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:27 ASL
    case 0xC3F623: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:28 ASL
    case 0xC3F624: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:29 CLC
    case 0xC3F625: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:30 ADC TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F626: cpu.execute_instruction<0x6D>(0x009F84, 3); return true;
    // src/unknown/C3/C3F5F9.asm:31 CLC
    case 0xC3F629: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:32 ADC @VIRTUAL02
    case 0xC3F62A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:33 STA @LOCAL01
    case 0xC3F62C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F5F9.asm:34 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F62E: cpu.execute_instruction<0xAD>(0x009F86, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F5F9.asm:34 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F631: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F5F9.asm:34 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F633: cpu.execute_instruction<0xAD>(0x009F88, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F5F9.asm:34 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F636: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F5F9.asm:35 LDA @VIRTUAL04
    case 0xC3F638: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:36 ASL
    case 0xC3F63A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:37 CLC
    case 0xC3F63B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:38 ADC @VIRTUAL06
    case 0xC3F63C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F5F9.asm:39 STA @VIRTUAL06
    case 0xC3F63E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F5F9.asm:40 STA @LOCAL00
    case 0xC3F640: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3F5F9.asm:41 LDA @VIRTUAL06+2
    case 0xC3F642: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C3/C3F5F9.asm:42 STA @LOCAL00+2
    case 0xC3F644: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F5F9.asm:43 LDA @LOCAL01
    case 0xC3F646: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3F5F9.asm:44 TAY
    case 0xC3F648: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:45 LDX @LOCAL03
    case 0xC3F649: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C3/C3F5F9.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F64B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F5F9.asm:47 LDA #0
    case 0xC3F64D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C3/C3F5F9.asm:48 JSL PREPARE_VRAM_COPY
    case 0xC3F64F: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C3/C3F5F9.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F64D.
    case 0xC3F650: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C3/C3F5F9.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F650.
    case 0xC3F652: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0004A5, 3); return true;
    // src/unknown/C3/C3F5F9.asm:49 LDA @VIRTUAL04
    case 0xC3F653: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:49 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC3F652.
    case 0xC3F654: cpu.execute_instruction<0x04>(0x000018, 2); return true;
    // src/unknown/C3/C3F5F9.asm:50 CLC
    case 0xC3F655: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:51 ADC TILEMAP_UPDATE_TILE_WIDTH
    case 0xC3F656: cpu.execute_instruction<0x6D>(0x009F82, 3); return true;
    // src/unknown/C3/C3F5F9.asm:52 STA @VIRTUAL04
    case 0xC3F659: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:53 LDX TILEMAP_UPDATE_TILE_Y
    case 0xC3F65B: cpu.execute_instruction<0xAE>(0x009F7C, 3); return true;
    // src/unknown/C3/C3F5F9.asm:54 INX
    case 0xC3F65E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:55 STX TILEMAP_UPDATE_TILE_Y
    case 0xC3F65F: cpu.execute_instruction<0x8E>(0x009F7C, 3); return true;
    // src/unknown/C3/C3F5F9.asm:56 CPX #32
    case 0xC3F662: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C3/C3F5F9.asm:56 CPX #32
    // Overlapping static entry reached from 0xC3F662.
    case 0xC3F664: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F5F9.asm:57 BNE @UNKNOWN1
    case 0xC3F665: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C3/C3F5F9.asm:58 STZ TILEMAP_UPDATE_TILE_Y
    case 0xC3F667: cpu.execute_instruction<0x9C>(0x009F7C, 3); return true;
    // src/unknown/C3/C3F5F9.asm:60 LDA @LOCAL02
    case 0xC3F66A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C3/C3F5F9.asm:61 STA @VIRTUAL02
    case 0xC3F66C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:62 INC @VIRTUAL02
    case 0xC3F66E: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:63 LDA @VIRTUAL02
    case 0xC3F670: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:64 STA @LOCAL02
    case 0xC3F672: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C3/C3F5F9.asm:66 LDA @VIRTUAL02
    case 0xC3F674: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:67 CMP TILEMAP_UPDATE_TILE_HEIGHT
    case 0xC3F676: cpu.execute_instruction<0xCD>(0x009F80, 3); return true;
    // src/unknown/C3/C3F5F9.asm:68 BCC @UNKNOWN0
    case 0xC3F679: cpu.execute_instruction<0x90>(0x00009A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3F5F9.asm:69 END_C_FUNCTION
    case 0xC3F67B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C3/C3F5F9.asm:69 END_C_FUNCTION
    case 0xC3F67C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3F67D.asm (unresolved).
bool execute_unresolved_c3_c3f67d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3F67D.asm:3 BEGIN_C_FUNCTION
    case 0xC3F67D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3F67D.asm:7 END_STACK_VARS
    case 0xC3F67F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3F67D.asm:7 END_STACK_VARS
    case 0xC3F680: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F67D.asm:7 END_STACK_VARS
    case 0xC3F681: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F67D.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F681.
    case 0xC3F683: cpu.execute_instruction<0xFF>(0x80AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3F67D.asm:7 END_STACK_VARS
    case 0xC3F684: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:8 LDA TILEMAP_UPDATE_TILE_HEIGHT
    case 0xC3F685: cpu.execute_instruction<0xAD>(0x009F80, 3); return true;
    // src/unknown/C3/C3F67D.asm:8 LDA TILEMAP_UPDATE_TILE_HEIGHT
    // Overlapping static entry reached from 0xC3F683.
    case 0xC3F687: cpu.execute_instruction<0x9F>(0x04850A, 4); return true;
    // src/unknown/C3/C3F67D.asm:9 ASL
    case 0xC3F688: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:10 STA @VIRTUAL04
    case 0xC3F689: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F67D.asm:11 LDA #0
    case 0xC3F68B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F67D.asm:11 LDA #0
    // Overlapping static entry reached from 0xC3F68B.
    case 0xC3F68D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F67D.asm:12 STA @VIRTUAL02
    case 0xC3F68E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F67D.asm:13 BRA @UNKNOWN3
    case 0xC3F690: cpu.execute_instruction<0x80>(0x00006A, 2); return true;
    // src/unknown/C3/C3F67D.asm:15 LDA TILEMAP_UPDATE_TILE_Y
    case 0xC3F692: cpu.execute_instruction<0xAD>(0x009F7C, 3); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unknown/C3/C3F67D.asm:16 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC3F695: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unknown/C3/C3F67D.asm:16 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC3F696: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unknown/C3/C3F67D.asm:16 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC3F697: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unknown/C3/C3F67D.asm:16 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC3F698: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unknown/C3/C3F67D.asm:16 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC3F699: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:17 CLC
    case 0xC3F69A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:18 ADC TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F69B: cpu.execute_instruction<0x6D>(0x009F84, 3); return true;
    // src/unknown/C3/C3F67D.asm:19 CLC
    case 0xC3F69E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:20 ADC TILEMAP_UPDATE_TILE_X
    case 0xC3F69F: cpu.execute_instruction<0x6D>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F67D.asm:21 STA @LOCAL01
    case 0xC3F6A2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3F67D.asm:22 INC TILEMAP_UPDATE_TILE_X
    case 0xC3F6A4: cpu.execute_instruction<0xEE>(0x009F7A, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F67D.asm:23 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F6A7: cpu.execute_instruction<0xAD>(0x009F86, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F67D.asm:23 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F6AA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F67D.asm:23 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F6AC: cpu.execute_instruction<0xAD>(0x009F88, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F67D.asm:23 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F6AF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F67D.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3F6B1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F67D.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3F6B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F67D.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3F6B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F67D.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3F6B7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F67D.asm:25 LDA @LOCAL01
    case 0xC3F6B9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3F67D.asm:26 TAY
    case 0xC3F6BB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:27 LDX @VIRTUAL04
    case 0xC3F6BC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C3/C3F67D.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F6BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F67D.asm:29 LDA #0
    case 0xC3F6C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C3/C3F67D.asm:30 JSL PREPARE_VRAM_COPY
    case 0xC3F6C2: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C3/C3F67D.asm:30 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F6C0.
    case 0xC3F6C3: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C3/C3F67D.asm:30 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F6C3.
    case 0xC3F6C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x0086AD, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F6C6: cpu.execute_instruction<0xAD>(0x009F86, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F6C5.
    case 0xC3F6C7: cpu.execute_instruction<0x86>(0x00009F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F6C5.
    case 0xC3F6C8: cpu.execute_instruction<0x9F>(0xAD0685, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F6C9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F6CB: cpu.execute_instruction<0xAD>(0x009F88, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F6C8.
    case 0xC3F6CC: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F6CC.
    case 0xC3F6CD: cpu.execute_instruction<0x9F>(0xAD0885, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F67D.asm:32 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F6CE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F67D.asm:33 LDA TILEMAP_UPDATE_TILE_WIDTH
    case 0xC3F6D0: cpu.execute_instruction<0xAD>(0x009F82, 3); return true;
    // src/unknown/C3/C3F67D.asm:33 LDA TILEMAP_UPDATE_TILE_WIDTH
    // Overlapping static entry reached from 0xC3F6CD.
    case 0xC3F6D1: cpu.execute_instruction<0x82>(0x000A9F, 3); return true;
    // src/unknown/C3/C3F67D.asm:34 ASL
    case 0xC3F6D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:35 CLC
    case 0xC3F6D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:36 ADC @VIRTUAL06
    case 0xC3F6D5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F67D.asm:37 STA @VIRTUAL06
    case 0xC3F6D7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F67D.asm:38 STA TILEMAP_UPDATE_REMAINING_TILES
    case 0xC3F6D9: cpu.execute_instruction<0x8D>(0x009F86, 3); return true;
    // src/unknown/C3/C3F67D.asm:39 LDA @VIRTUAL06+2
    case 0xC3F6DC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C3/C3F67D.asm:40 STA TILEMAP_UPDATE_REMAINING_TILES+2
    case 0xC3F6DE: cpu.execute_instruction<0x8D>(0x009F88, 3); return true;
    // src/unknown/C3/C3F67D.asm:41 LDA TILEMAP_UPDATE_TILE_X
    case 0xC3F6E1: cpu.execute_instruction<0xAD>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F67D.asm:42 CMP #32
    case 0xC3F6E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C3/C3F67D.asm:42 CMP #32
    // Overlapping static entry reached from 0xC3F6E4.
    case 0xC3F6E6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F67D.asm:43 BEQ @UNKNOWN1
    case 0xC3F6E7: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C3/C3F67D.asm:44 LDA TILEMAP_UPDATE_TILE_X
    case 0xC3F6E9: cpu.execute_instruction<0xAD>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F67D.asm:45 CMP #64
    case 0xC3F6EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C3/C3F67D.asm:45 CMP #64
    // Overlapping static entry reached from 0xC3F6EC.
    case 0xC3F6EE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F67D.asm:46 BNE @UNKNOWN2
    case 0xC3F6EF: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C3/C3F67D.asm:48 LDA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F6F1: cpu.execute_instruction<0xAD>(0x009F84, 3); return true;
    // src/unknown/C3/C3F67D.asm:49 EOR #$0400
    case 0xC3F6F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000000, 2); else cpu.execute_instruction<0x49>(0x000400, 3); return true;
    // src/unknown/C3/C3F67D.asm:49 EOR #$0400
    // Overlapping static entry reached from 0xC3F6F4.
    case 0xC3F6F6: cpu.execute_instruction<0x04>(0x00008D, 2); return true;
    // src/unknown/C3/C3F67D.asm:50 STA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F6F7: cpu.execute_instruction<0x8D>(0x009F84, 3); return true;
    // src/unknown/C3/C3F67D.asm:50 STA TILEMAP_UPDATE_BASE_ADDRESS
    // Overlapping static entry reached from 0xC3F6F6.
    case 0xC3F6F8: cpu.execute_instruction<0x84>(0x00009F, 2); return true;
    // src/unknown/C3/C3F67D.asm:52 INC @VIRTUAL02
    case 0xC3F6FA: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3F67D.asm:54 LDA @VIRTUAL02
    case 0xC3F6FC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F67D.asm:55 CMP TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F6FE: cpu.execute_instruction<0xCD>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F67D.asm:56 BCC @UNKNOWN0
    case 0xC3F701: cpu.execute_instruction<0x90>(0x00008F, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3F67D.asm:57 END_C_FUNCTION
    case 0xC3F703: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C3/C3F67D.asm:57 END_C_FUNCTION
    case 0xC3F704: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3F705.asm (unresolved).
bool execute_unresolved_c3_c3f705_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3F705.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3F705: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    case 0xC3F707: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    case 0xC3F708: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    case 0xC3F709: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    case 0xC3F70A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F70A.
    case 0xC3F70C: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    case 0xC3F70D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3F705.asm:12 END_STACK_VARS
    case 0xC3F70E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:13 STA @LOCAL04
    case 0xC3F70F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:13 STA @LOCAL04
    // Overlapping static entry reached from 0xC3F70C.
    case 0xC3F710: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F705.asm:14 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC3F711: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F705.asm:14 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC3F713: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F705.asm:14 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC3F715: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F705.asm:14 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC3F717: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F705.asm:15 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC3F719: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F705.asm:15 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC3F71B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F705.asm:15 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC3F71D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F705.asm:15 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC3F71F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C3/C3F705.asm:16 INC @VIRTUAL06
    case 0xC3F721: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:17 INC @VIRTUAL06
    case 0xC3F723: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F705.asm:18 MOVE_INT @VIRTUAL06, TILEMAP_UPDATE_REMAINING_TILES
    case 0xC3F725: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F705.asm:18 MOVE_INT @VIRTUAL06, TILEMAP_UPDATE_REMAINING_TILES
    case 0xC3F727: cpu.execute_instruction<0x8D>(0x009F86, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F705.asm:18 MOVE_INT @VIRTUAL06, TILEMAP_UPDATE_REMAINING_TILES
    case 0xC3F72A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F705.asm:18 MOVE_INT @VIRTUAL06, TILEMAP_UPDATE_REMAINING_TILES
    case 0xC3F72C: cpu.execute_instruction<0x8D>(0x009F88, 3); return true;
    // src/unknown/C3/C3F705.asm:19 LDA @LOCAL04
    case 0xC3F72F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:20 AND #$003F
    case 0xC3F731: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C3/C3F705.asm:20 AND #$003F
    // Overlapping static entry reached from 0xC3F731.
    case 0xC3F733: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F705.asm:21 TAY
    case 0xC3F734: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:22 STY @LOCAL02
    case 0xC3F735: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C3/C3F705.asm:23 STY TILEMAP_UPDATE_TILE_X
    case 0xC3F737: cpu.execute_instruction<0x8C>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F705.asm:24 TXA
    case 0xC3F73A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:25 AND #$001F
    case 0xC3F73B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C3/C3F705.asm:25 AND #$001F
    // Overlapping static entry reached from 0xC3F73B.
    case 0xC3F73D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F705.asm:26 STA @VIRTUAL02
    case 0xC3F73E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:27 STA @LOCAL01
    case 0xC3F740: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F705.asm:28 LDA @VIRTUAL02
    case 0xC3F742: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:29 STA TILEMAP_UPDATE_TILE_Y
    case 0xC3F744: cpu.execute_instruction<0x8D>(0x009F7C, 3); return true;
    // src/unknown/C3/C3F705.asm:30 TYA
    case 0xC3F747: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:31 AND #$001F
    case 0xC3F748: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C3/C3F705.asm:31 AND #$001F
    // Overlapping static entry reached from 0xC3F748.
    case 0xC3F74A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F705.asm:32 BEQ @UNKNOWN0
    case 0xC3F74B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3F705.asm:33 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE
    case 0xC3F74D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003C00, 3); return true;
    // src/unknown/C3/C3F705.asm:33 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE
    // Overlapping static entry reached from 0xC3F74D.
    case 0xC3F74F: cpu.execute_instruction<0x3C>(0x000380, 3); return true;
    // src/unknown/C3/C3F705.asm:34 BRA @UNKNOWN1
    case 0xC3F750: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3F705.asm:36 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    case 0xC3F752: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // src/unknown/C3/C3F705.asm:36 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xC3F752.
    case 0xC3F754: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:38 STX TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F755: cpu.execute_instruction<0x8E>(0x009F84, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F705.asm:39 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC3F758: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F705.asm:39 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC3F75A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F705.asm:39 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC3F75C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F705.asm:39 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC3F75E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F705.asm:40 LDA [@VIRTUAL06]
    case 0xC3F760: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:41 XBA
    case 0xC3F762: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:42 AND #$00FF
    case 0xC3F763: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F705.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC3F763.
    case 0xC3F765: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F705.asm:43 STA @LOCAL04
    case 0xC3F766: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:44 TAX
    case 0xC3F768: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:45 STX @LOCAL00
    case 0xC3F769: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3F705.asm:46 STX TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F76B: cpu.execute_instruction<0x8E>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F705.asm:47 LDA [@VIRTUAL06]
    case 0xC3F76E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:48 AND #$00FF
    case 0xC3F770: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F705.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC3F770.
    case 0xC3F772: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F705.asm:49 STA @VIRTUAL04
    case 0xC3F773: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:50 STA TILEMAP_UPDATE_TILE_HEIGHT
    case 0xC3F775: cpu.execute_instruction<0x8D>(0x009F80, 3); return true;
    // src/unknown/C3/C3F705.asm:51 LDA @LOCAL04
    case 0xC3F778: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:52 STA @VIRTUAL02
    case 0xC3F77A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:53 TYA
    case 0xC3F77C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:54 CLC
    case 0xC3F77D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:55 ADC @VIRTUAL02
    case 0xC3F77E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:56 AND #$FFE0
    case 0xC3F780: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C3/C3F705.asm:56 AND #$FFE0
    // Overlapping static entry reached from 0xC3F780.
    case 0xC3F782: cpu.execute_instruction<0xFF>(0x980485, 4); return true;
    // src/unknown/C3/C3F705.asm:57 STA @VIRTUAL04
    case 0xC3F783: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:58 TYA
    case 0xC3F785: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:59 AND #$FFE0
    case 0xC3F786: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C3/C3F705.asm:59 AND #$FFE0
    // Overlapping static entry reached from 0xC3F786.
    case 0xC3F788: cpu.execute_instruction<0xFF>(0xD004C5, 4); return true;
    // src/unknown/C3/C3F705.asm:60 CMP @VIRTUAL04
    case 0xC3F789: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:61 BNE @UNKNOWN2
    case 0xC3F78B: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C3/C3F705.asm:61 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC3F788.
    case 0xC3F78C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:62 LDA @LOCAL04
    case 0xC3F78D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:63 STA TILEMAP_UPDATE_TILE_WIDTH
    case 0xC3F78F: cpu.execute_instruction<0x8D>(0x009F82, 3); return true;
    // src/unknown/C3/C3F705.asm:64 JSR UNKNOWN_C3F5F9
    case 0xC3F792: cpu.execute_instruction<0x20>(0x00F5F9, 3); return true;
    // src/unknown/C3/C3F705.asm:65 BRA @UNKNOWN3
    case 0xC3F795: cpu.execute_instruction<0x80>(0x000062, 2); return true;
    // src/unknown/C3/C3F705.asm:67 LDA @LOCAL04
    case 0xC3F797: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:68 STA @VIRTUAL04
    case 0xC3F799: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:69 LDY @LOCAL02
    case 0xC3F79B: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C3/C3F705.asm:70 TYA
    case 0xC3F79D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:71 CLC
    case 0xC3F79E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:72 ADC @VIRTUAL04
    case 0xC3F79F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:73 AND #$FFE0
    case 0xC3F7A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C3/C3F705.asm:73 AND #$FFE0
    // Overlapping static entry reached from 0xC3F7A1.
    case 0xC3F7A3: cpu.execute_instruction<0xFF>(0x7AED38, 4); return true;
    // src/unknown/C3/C3F705.asm:74 SEC
    case 0xC3F7A4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:75 SBC TILEMAP_UPDATE_TILE_X
    case 0xC3F7A5: cpu.execute_instruction<0xED>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F705.asm:75 SBC TILEMAP_UPDATE_TILE_X
    // Overlapping static entry reached from 0xC3F7A3.
    case 0xC3F7A7: cpu.execute_instruction<0x9F>(0x9F7E8D, 4); return true;
    // src/unknown/C3/C3F705.asm:76 STA TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F7A8: cpu.execute_instruction<0x8D>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F705.asm:77 LDA @LOCAL04
    case 0xC3F7AB: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:78 STA TILEMAP_UPDATE_TILE_WIDTH
    case 0xC3F7AD: cpu.execute_instruction<0x8D>(0x009F82, 3); return true;
    // src/unknown/C3/C3F705.asm:79 JSR UNKNOWN_C3F5F9
    case 0xC3F7B0: cpu.execute_instruction<0x20>(0x00F5F9, 3); return true;
    // src/unknown/C3/C3F705.asm:80 LDA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F7B3: cpu.execute_instruction<0xAD>(0x009F84, 3); return true;
    // src/unknown/C3/C3F705.asm:81 EOR #$0400
    case 0xC3F7B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000000, 2); else cpu.execute_instruction<0x49>(0x000400, 3); return true;
    // src/unknown/C3/C3F705.asm:81 EOR #$0400
    // Overlapping static entry reached from 0xC3F7B6.
    case 0xC3F7B8: cpu.execute_instruction<0x04>(0x00008D, 2); return true;
    // src/unknown/C3/C3F705.asm:82 STA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xC3F7B9: cpu.execute_instruction<0x8D>(0x009F84, 3); return true;
    // src/unknown/C3/C3F705.asm:82 STA TILEMAP_UPDATE_BASE_ADDRESS
    // Overlapping static entry reached from 0xC3F7B8.
    case 0xC3F7BA: cpu.execute_instruction<0x84>(0x00009F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3F705.asm:83 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F7BC: cpu.execute_instruction<0xAD>(0x009F86, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3F705.asm:83 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F7BF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3F705.asm:83 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F7C1: cpu.execute_instruction<0xAD>(0x009F88, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3F705.asm:83 MOVE_INT TILEMAP_UPDATE_REMAINING_TILES, @VIRTUAL06
    case 0xC3F7C4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F705.asm:84 LDA TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F7C6: cpu.execute_instruction<0xAD>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F705.asm:85 ASL
    case 0xC3F7C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:86 CLC
    case 0xC3F7CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:87 ADC @VIRTUAL06
    case 0xC3F7CB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:88 STA @VIRTUAL06
    case 0xC3F7CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:89 STA TILEMAP_UPDATE_REMAINING_TILES
    case 0xC3F7CF: cpu.execute_instruction<0x8D>(0x009F86, 3); return true;
    // src/unknown/C3/C3F705.asm:90 LDA @VIRTUAL06+2
    case 0xC3F7D2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C3/C3F705.asm:91 STA TILEMAP_UPDATE_REMAINING_TILES+2
    case 0xC3F7D4: cpu.execute_instruction<0x8D>(0x009F88, 3); return true;
    // src/unknown/C3/C3F705.asm:92 STZ TILEMAP_UPDATE_TILE_X
    case 0xC3F7D7: cpu.execute_instruction<0x9C>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F705.asm:93 LDA @LOCAL01
    case 0xC3F7DA: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3F705.asm:94 STA @VIRTUAL02
    case 0xC3F7DC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:95 STA TILEMAP_UPDATE_TILE_Y
    case 0xC3F7DE: cpu.execute_instruction<0x8D>(0x009F7C, 3); return true;
    // src/unknown/C3/C3F705.asm:96 LDA @LOCAL04
    case 0xC3F7E1: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:97 SEC
    case 0xC3F7E3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:98 SBC TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F7E4: cpu.execute_instruction<0xED>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F705.asm:99 STA @LOCAL04
    case 0xC3F7E7: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:100 CMP #32
    case 0xC3F7E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C3/C3F705.asm:100 CMP #32
    // Overlapping static entry reached from 0xC3F7E9.
    case 0xC3F7EB: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F705.asm:101 BCS @UNKNOWN2
    case 0xC3F7EC: cpu.execute_instruction<0xB0>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F705.asm:102 STA TILEMAP_UPDATE_TILE_COUNT
    case 0xC3F7EE: cpu.execute_instruction<0x8D>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F705.asm:103 LDX @LOCAL00
    case 0xC3F7F1: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3F705.asm:104 STX TILEMAP_UPDATE_TILE_WIDTH
    case 0xC3F7F3: cpu.execute_instruction<0x8E>(0x009F82, 3); return true;
    // src/unknown/C3/C3F705.asm:105 JSR UNKNOWN_C3F5F9
    case 0xC3F7F6: cpu.execute_instruction<0x20>(0x00F5F9, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3F705.asm:107 END_C_FUNCTION
    case 0xC3F7F9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3F705.asm:107 END_C_FUNCTION
    case 0xC3F7FA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3F7FB.asm (unresolved).
bool execute_unresolved_c3_c3f7fb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3F7FB.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC3F7FB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3F7FB.asm:7 END_STACK_VARS
    case 0xC3F7FD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3F7FB.asm:7 END_STACK_VARS
    case 0xC3F7FE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F7FB.asm:7 END_STACK_VARS
    case 0xC3F7FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F7FB.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F7FF.
    case 0xC3F801: cpu.execute_instruction<0xFF>(0x3DA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3F7FB.asm:7 END_STACK_VARS
    case 0xC3F802: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F7FB.asm:8 LOADPTR UNKNOWN_EFEB3D, @LOCAL00
    case 0xC3F803: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003D, 2); else cpu.execute_instruction<0xA9>(0x00EB3D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F7FB.asm:8 LOADPTR UNKNOWN_EFEB3D, @LOCAL00
    // Overlapping static entry reached from 0xC3F803.
    case 0xC3F805: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3F7FB.asm:8 LOADPTR UNKNOWN_EFEB3D, @LOCAL00
    case 0xC3F806: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F7FB.asm:8 LOADPTR UNKNOWN_EFEB3D, @LOCAL00
    case 0xC3F808: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F7FB.asm:8 LOADPTR UNKNOWN_EFEB3D, @LOCAL00
    // Overlapping static entry reached from 0xC3F808.
    case 0xC3F80A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3F7FB.asm:8 LOADPTR UNKNOWN_EFEB3D, @LOCAL00
    case 0xC3F80B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F7FB.asm:9 LDX #31
    case 0xC3F80D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001F, 2); else cpu.execute_instruction<0xA2>(0x00001F, 3); return true;
    // src/unknown/C3/C3F7FB.asm:9 LDX #31
    // Overlapping static entry reached from 0xC3F80D.
    case 0xC3F80F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F7FB.asm:10 LDA #926
    case 0xC3F810: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00039E, 3); return true;
    // src/unknown/C3/C3F7FB.asm:10 LDA #926
    // Overlapping static entry reached from 0xC3F810.
    case 0xC3F812: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C3/C3F7FB.asm:11 JSL UNKNOWN_C3F705
    case 0xC3F813: cpu.execute_instruction<0x22>(0xC3F705, 4); return true;
    // src/unknown/C3/C3F7FB.asm:11 JSL UNKNOWN_C3F705
    // Overlapping static entry reached from 0xC3F812.
    case 0xC3F814: cpu.execute_instruction<0x05>(0x0000F7, 2); return true;
    // src/unknown/C3/C3F7FB.asm:11 JSL UNKNOWN_C3F705
    // Overlapping static entry reached from 0xC3F814.
    case 0xC3F816: cpu.execute_instruction<0xC3>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3F7FB.asm:12 END_C_FUNCTION
    case 0xC3F817: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3F7FB.asm:12 END_C_FUNCTION
    case 0xC3F818: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3F981.asm (unresolved).
bool execute_unresolved_c3_c3f981_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3F981.asm:3 BEGIN_C_FUNCTION
    case 0xC3F981: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    case 0xC3F983: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    case 0xC3F984: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    case 0xC3F985: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    case 0xC3F986: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F986.
    case 0xC3F988: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    case 0xC3F989: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3F981.asm:8 END_STACK_VARS
    case 0xC3F98A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:9 STA @VIRTUAL02
    case 0xC3F98B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC3F988.
    case 0xC3F98C: cpu.execute_instruction<0x02>(0x0000C9, 2); return true;
    // src/unknown/C3/C3F981.asm:10 CMP #35
    case 0xC3F98D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000023, 2); else cpu.execute_instruction<0xC9>(0x000023, 3); return true;
    // src/unknown/C3/C3F981.asm:10 CMP #35
    // Overlapping static entry reached from 0xC3F98D.
    case 0xC3F98F: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:11 BCS @UNKNOWN0
    case 0xC3F990: cpu.execute_instruction<0xB0>(0x000009, 2); return true;
    // src/unknown/C3/C3F981.asm:12 LDA @VIRTUAL02
    case 0xC3F992: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:13 JSL SHOW_PSI_ANIMATION
    case 0xC3F994: cpu.execute_instruction<0x22>(0xC2E116, 4); return true;
    // src/unknown/C3/C3F981.asm:14 JMP @UNKNOWN8
    case 0xC3F998: cpu.execute_instruction<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:16 LDA @VIRTUAL02
    case 0xC3F99B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:17 CMP #46
    case 0xC3F99D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002E, 2); else cpu.execute_instruction<0xC9>(0x00002E, 3); return true;
    // src/unknown/C3/C3F981.asm:17 CMP #46
    // Overlapping static entry reached from 0xC3F99D.
    case 0xC3F99F: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:18 BCS @UNKNOWN1
    case 0xC3F9A0: cpu.execute_instruction<0xB0>(0x00006D, 2); return true;
    // src/unknown/C3/C3F981.asm:19 JSL UNKNOWN_C2DE0F
    case 0xC3F9A2: cpu.execute_instruction<0x22>(0xC2DE0F, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:20 LOADPTR ENEMY_PSI_COLOURS, @VIRTUAL06
    case 0xC3F9A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000051, 2); else cpu.execute_instruction<0xA9>(0x00F951, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:20 LOADPTR ENEMY_PSI_COLOURS, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F9A6.
    case 0xC3F9A8: cpu.execute_instruction<0xF9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3F981.asm:20 LOADPTR ENEMY_PSI_COLOURS, @VIRTUAL06
    case 0xC3F9A9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:20 LOADPTR ENEMY_PSI_COLOURS, @VIRTUAL06
    case 0xC3F9AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:20 LOADPTR ENEMY_PSI_COLOURS, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F9AB.
    case 0xC3F9AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3F981.asm:20 LOADPTR ENEMY_PSI_COLOURS, @VIRTUAL06
    case 0xC3F9AE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F981.asm:21 LDA @VIRTUAL02
    case 0xC3F9B0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:22 SEC
    case 0xC3F9B2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:23 SBC #35
    case 0xC3F9B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000023, 2); else cpu.execute_instruction<0xE9>(0x000023, 3); return true;
    // src/unknown/C3/C3F981.asm:23 SBC #35
    // Overlapping static entry reached from 0xC3F9B3.
    case 0xC3F9B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C3/C3F981.asm:24 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3F9B6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C3/C3F981.asm:24 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3F9B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C3/C3F981.asm:24 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3F9B9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3F981.asm:25 STA @LOCAL01
    case 0xC3F9BB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:26 INC
    case 0xC3F9BD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:27 INC
    case 0xC3F9BE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C3/C3F981.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F9BF: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C3/C3F981.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F9C1: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C3/C3F981.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F9C3: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C3/C3F981.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F9C5: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:29 CLC
    case 0xC3F9C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:30 ADC @VIRTUAL0A
    case 0xC3F9C8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:31 STA @VIRTUAL0A
    case 0xC3F9CA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:32 LDA [@VIRTUAL0A]
    case 0xC3F9CC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:33 AND #$00FF
    case 0xC3F9CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC3F9CE.
    case 0xC3F9D0: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F981.asm:34 TAY
    case 0xC3F9D1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:35 LDA @LOCAL01
    case 0xC3F9D2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:36 INC
    case 0xC3F9D4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C3/C3F981.asm:37 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F9D5: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C3/C3F981.asm:37 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F9D7: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C3/C3F981.asm:37 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F9D9: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C3/C3F981.asm:37 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3F9DB: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:38 CLC
    case 0xC3F9DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:39 ADC @VIRTUAL0A
    case 0xC3F9DE: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:40 STA @VIRTUAL0A
    case 0xC3F9E0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:41 LDA [@VIRTUAL0A]
    case 0xC3F9E2: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:42 AND #$00FF
    case 0xC3F9E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC3F9E4.
    case 0xC3F9E6: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3F981.asm:43 TAX
    case 0xC3F9E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:44 LDA @LOCAL01
    case 0xC3F9E8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:45 CLC
    case 0xC3F9EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:46 ADC @VIRTUAL06
    case 0xC3F9EB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:47 STA @VIRTUAL06
    case 0xC3F9ED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:48 LDA [@VIRTUAL06]
    case 0xC3F9EF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:49 AND #$00FF
    case 0xC3F9F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC3F9F1.
    case 0xC3F9F3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:50 JSL SET_COLDATA
    case 0xC3F9F4: cpu.execute_instruction<0x22>(0xC0B01A, 4); return true;
    // src/unknown/C3/C3F981.asm:51 LDX #$3F
    case 0xC3F9F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003F, 2); else cpu.execute_instruction<0xA2>(0x00003F, 3); return true;
    // src/unknown/C3/C3F981.asm:51 LDX #$3F
    // Overlapping static entry reached from 0xC3F9F8.
    case 0xC3F9FA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:52 LDA #$10
    case 0xC3F9FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C3/C3F981.asm:52 LDA #$10
    // Overlapping static entry reached from 0xC3F9FB.
    case 0xC3F9FD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:53 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC3F9FE: cpu.execute_instruction<0x22>(0xC0B039, 4); return true;
    // src/unknown/C3/C3F981.asm:54 LDX #7
    case 0xC3FA02: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000007, 2); else cpu.execute_instruction<0xA2>(0x000007, 3); return true;
    // src/unknown/C3/C3F981.asm:54 LDX #7
    // Overlapping static entry reached from 0xC3FA02.
    case 0xC3FA04: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:55 LDA #5
    case 0xC3FA05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C3/C3F981.asm:55 LDA #5
    // Overlapping static entry reached from 0xC3FA05.
    case 0xC3FA07: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:56 JSL UNKNOWN_C4A67E
    case 0xC3FA08: cpu.execute_instruction<0x22>(0xC4A67E, 4); return true;
    // src/unknown/C3/C3F981.asm:57 JMP @UNKNOWN8
    case 0xC3FA0C: cpu.execute_instruction<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:59 LDA @VIRTUAL02
    case 0xC3FA0F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:60 CMP #49
    case 0xC3FA11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000031, 2); else cpu.execute_instruction<0xC9>(0x000031, 3); return true;
    // src/unknown/C3/C3F981.asm:60 CMP #49
    // Overlapping static entry reached from 0xC3FA11.
    case 0xC3FA13: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:61 BCS @UNKNOWN5
    case 0xC3FA14: cpu.execute_instruction<0xB0>(0x00002A, 2); return true;
    // src/unknown/C3/C3F981.asm:62 LDA @VIRTUAL02
    case 0xC3FA16: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:63 INC
    case 0xC3FA18: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:64 CMP #47
    case 0xC3FA19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002F, 2); else cpu.execute_instruction<0xC9>(0x00002F, 3); return true;
    // src/unknown/C3/C3F981.asm:64 CMP #47
    // Overlapping static entry reached from 0xC3FA19.
    case 0xC3FA1B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F981.asm:65 BEQ @UNKNOWN3
    case 0xC3FA1C: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:66 CMP #48
    case 0xC3FA1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/unknown/C3/C3F981.asm:66 CMP #48
    // Overlapping static entry reached from 0xC3FA1E.
    case 0xC3FA20: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F981.asm:67 BEQ @UNKNOWN4
    case 0xC3FA21: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C3/C3F981.asm:68 CMP #49
    case 0xC3FA23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000031, 2); else cpu.execute_instruction<0xC9>(0x000031, 3); return true;
    // src/unknown/C3/C3F981.asm:68 CMP #49
    // Overlapping static entry reached from 0xC3FA23.
    case 0xC3FA25: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C3/C3F981.asm:69 BEQL @UNKNOWN8
    case 0xC3FA26: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C3/C3F981.asm:69 BEQL @UNKNOWN8
    case 0xC3FA28: cpu.execute_instruction<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:70 JMP @UNKNOWN8
    case 0xC3FA2B: cpu.execute_instruction<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:72 LDA #144
    case 0xC3FA2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x000090, 3); return true;
    // src/unknown/C3/C3F981.asm:72 LDA #144
    // Overlapping static entry reached from 0xC3FA2E.
    case 0xC3FA30: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C3/C3F981.asm:73 STA WOBBLE_DURATION
    case 0xC3FA31: cpu.execute_instruction<0x8D>(0x00AD92, 3); return true;
    // src/unknown/C3/C3F981.asm:74 JMP @UNKNOWN8
    case 0xC3FA34: cpu.execute_instruction<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:76 LDA #300
    case 0xC3FA37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x00012C, 3); return true;
    // src/unknown/C3/C3F981.asm:76 LDA #300
    // Overlapping static entry reached from 0xC3FA37.
    case 0xC3FA39: cpu.execute_instruction<0x01>(0x00008D, 2); return true;
    // src/unknown/C3/C3F981.asm:77 STA SHAKE_DURATION
    case 0xC3FA3A: cpu.execute_instruction<0x8D>(0x00AD94, 3); return true;
    // src/unknown/C3/C3F981.asm:77 STA SHAKE_DURATION
    // Overlapping static entry reached from 0xC3FA39.
    case 0xC3FA3B: cpu.execute_instruction<0x94>(0x0000AD, 2); return true;
    // src/unknown/C3/C3F981.asm:78 JMP @UNKNOWN8
    case 0xC3FA3D: cpu.execute_instruction<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:80 LDA @VIRTUAL02
    case 0xC3FA40: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:81 CMP #54
    case 0xC3FA42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000036, 2); else cpu.execute_instruction<0xC9>(0x000036, 3); return true;
    // src/unknown/C3/C3F981.asm:81 CMP #54
    // Overlapping static entry reached from 0xC3FA42.
    case 0xC3FA44: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C3/C3F981.asm:82 BCC @UNKNOWN6
    case 0xC3FA45: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C3/C3F981.asm:83 JMP @UNKNOWN8
    case 0xC3FA47: cpu.execute_instruction<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:85 JSL UNKNOWN_C2DE0F
    case 0xC3FA4A: cpu.execute_instruction<0x22>(0xC2DE0F, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:86 LOADPTR MISC_SWIRL_COLOURS, @VIRTUAL06
    case 0xC3FA4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000072, 2); else cpu.execute_instruction<0xA9>(0x00F972, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:86 LOADPTR MISC_SWIRL_COLOURS, @VIRTUAL06
    // Overlapping static entry reached from 0xC3FA4E.
    case 0xC3FA50: cpu.execute_instruction<0xF9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3F981.asm:86 LOADPTR MISC_SWIRL_COLOURS, @VIRTUAL06
    case 0xC3FA51: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:86 LOADPTR MISC_SWIRL_COLOURS, @VIRTUAL06
    case 0xC3FA53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3F981.asm:86 LOADPTR MISC_SWIRL_COLOURS, @VIRTUAL06
    // Overlapping static entry reached from 0xC3FA53.
    case 0xC3FA55: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3F981.asm:86 LOADPTR MISC_SWIRL_COLOURS, @VIRTUAL06
    case 0xC3FA56: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F981.asm:87 LDA @VIRTUAL02
    case 0xC3FA58: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:88 SEC
    case 0xC3FA5A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:89 SBC #49
    case 0xC3FA5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000031, 2); else cpu.execute_instruction<0xE9>(0x000031, 3); return true;
    // src/unknown/C3/C3F981.asm:89 SBC #49
    // Overlapping static entry reached from 0xC3FA5B.
    case 0xC3FA5D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F981.asm:90 STA @VIRTUAL04
    case 0xC3FA5E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F981.asm:91 ASL
    case 0xC3FA60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:92 ADC @VIRTUAL04
    case 0xC3FA61: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3F981.asm:93 STA @LOCAL00
    case 0xC3FA63: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3F981.asm:94 INC
    case 0xC3FA65: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:95 INC
    case 0xC3FA66: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C3/C3F981.asm:96 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3FA67: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C3/C3F981.asm:96 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3FA69: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C3/C3F981.asm:96 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3FA6B: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C3/C3F981.asm:96 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3FA6D: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:97 CLC
    case 0xC3FA6F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:98 ADC @VIRTUAL0A
    case 0xC3FA70: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:99 STA @VIRTUAL0A
    case 0xC3FA72: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:100 LDA [@VIRTUAL0A]
    case 0xC3FA74: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:101 AND #$00FF
    case 0xC3FA76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC3FA76.
    case 0xC3FA78: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F981.asm:102 TAY
    case 0xC3FA79: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:103 LDA @LOCAL00
    case 0xC3FA7A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3F981.asm:104 INC
    case 0xC3FA7C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C3/C3F981.asm:105 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3FA7D: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C3/C3F981.asm:105 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3FA7F: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C3/C3F981.asm:105 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3FA81: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C3/C3F981.asm:105 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC3FA83: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:106 CLC
    case 0xC3FA85: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:107 ADC @VIRTUAL0A
    case 0xC3FA86: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:108 STA @VIRTUAL0A
    case 0xC3FA88: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:109 LDA [@VIRTUAL0A]
    case 0xC3FA8A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:110 AND #$00FF
    case 0xC3FA8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xC3FA8C.
    case 0xC3FA8E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3F981.asm:111 TAX
    case 0xC3FA8F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:112 LDA @LOCAL00
    case 0xC3FA90: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3F981.asm:113 CLC
    case 0xC3FA92: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:114 ADC @VIRTUAL06
    case 0xC3FA93: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:115 STA @VIRTUAL06
    case 0xC3FA95: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:116 LDA [@VIRTUAL06]
    case 0xC3FA97: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:117 AND #$00FF
    case 0xC3FA99: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC3FA99.
    case 0xC3FA9B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:118 JSL SET_COLDATA
    case 0xC3FA9C: cpu.execute_instruction<0x22>(0xC0B01A, 4); return true;
    // src/unknown/C3/C3F981.asm:119 LDX #$3F
    case 0xC3FAA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003F, 2); else cpu.execute_instruction<0xA2>(0x00003F, 3); return true;
    // src/unknown/C3/C3F981.asm:119 LDX #$3F
    // Overlapping static entry reached from 0xC3FAA0.
    case 0xC3FAA2: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:120 LDA #$10
    case 0xC3FAA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C3/C3F981.asm:120 LDA #$10
    // Overlapping static entry reached from 0xC3FAA3.
    case 0xC3FAA5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:121 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC3FAA6: cpu.execute_instruction<0x22>(0xC0B039, 4); return true;
    // src/unknown/C3/C3F981.asm:122 LDA @VIRTUAL02
    case 0xC3FAAA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:123 CMP #53
    case 0xC3FAAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000035, 2); else cpu.execute_instruction<0xC9>(0x000035, 3); return true;
    // src/unknown/C3/C3F981.asm:123 CMP #53
    // Overlapping static entry reached from 0xC3FAAC.
    case 0xC3FAAE: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:124 BCS @UNKNOWN7
    case 0xC3FAAF: cpu.execute_instruction<0xB0>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:125 LDX #5
    case 0xC3FAB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C3/C3F981.asm:125 LDX #5
    // Overlapping static entry reached from 0xC3FAB1.
    case 0xC3FAB3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:126 LDA #4
    case 0xC3FAB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C3/C3F981.asm:126 LDA #4
    // Overlapping static entry reached from 0xC3FAB4.
    case 0xC3FAB6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:127 JSL UNKNOWN_C4A67E
    case 0xC3FAB7: cpu.execute_instruction<0x22>(0xC4A67E, 4); return true;
    // src/unknown/C3/C3F981.asm:128 BRA @UNKNOWN8
    case 0xC3FABB: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:130 LDX #4
    case 0xC3FABD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C3/C3F981.asm:130 LDX #4
    // Overlapping static entry reached from 0xC3FABD.
    case 0xC3FABF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:131 LDA #2
    case 0xC3FAC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C3/C3F981.asm:131 LDA #2
    // Overlapping static entry reached from 0xC3FAC0.
    case 0xC3FAC2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:132 JSL UNKNOWN_C4A67E
    case 0xC3FAC3: cpu.execute_instruction<0x22>(0xC4A67E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3F981.asm:134 END_C_FUNCTION
    case 0xC3FAC7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C3/C3F981.asm:134 END_C_FUNCTION
    case 0xC3FAC8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3FAC9.asm (unresolved).
bool execute_unresolved_c3_c3fac9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3FAC9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3FAC9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    case 0xC3FACB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    case 0xC3FACC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    case 0xC3FACD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    case 0xC3FACE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC3FACE.
    case 0xC3FAD0: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    case 0xC3FAD1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3FAC9.asm:9 END_STACK_VARS
    case 0xC3FAD2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:10 TXY
    case 0xC3FAD3: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:11 TAX
    case 0xC3FAD4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:12 STX @LOCAL00
    case 0xC3FAD5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3FAC9.asm:13 LDX CURRENT_TARGET
    case 0xC3FAD7: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/unknown/C3/C3FAC9.asm:14 LDA a:battler::npc_id,X
    case 0xC3FADA: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/unknown/C3/C3FAC9.asm:15 AND #$00FF
    case 0xC3FADD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3FAC9.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC3FADD.
    case 0xC3FADF: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3FAC9.asm:16 CMP #ENEMY::TINY_LIL_GHOST
    case 0xC3FAE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D5, 2); else cpu.execute_instruction<0xC9>(0x0000D5, 3); return true;
    // src/unknown/C3/C3FAC9.asm:16 CMP #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC3FAE0.
    case 0xC3FAE2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3FAC9.asm:17 BNE @UNKNOWN0
    case 0xC3FAE3: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3FAC9.asm:18 LDA #TRUE
    case 0xC3FAE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3FAC9.asm:18 LDA #TRUE
    // Overlapping static entry reached from 0xC3FAE5.
    case 0xC3FAE7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3FAC9.asm:19 BRA @UNKNOWN2
    case 0xC3FAE8: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C3/C3FAC9.asm:21 LDX CURRENT_TARGET
    case 0xC3FAEA: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/unknown/C3/C3FAC9.asm:22 LDA a:battler::ally_or_enemy,X
    case 0xC3FAED: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C3/C3FAC9.asm:23 AND #$00FF
    case 0xC3FAF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3FAC9.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC3FAF0.
    case 0xC3FAF2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3FAC9.asm:24 BNE @UNKNOWN1
    case 0xC3FAF3: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C3/C3FAC9.asm:25 LDX @LOCAL00
    case 0xC3FAF5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3FAC9.asm:26 TXA
    case 0xC3FAF7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:27 JSR UNKNOWN_C3F981
    case 0xC3FAF8: cpu.execute_instruction<0x20>(0x00F981, 3); return true;
    // src/unknown/C3/C3FAC9.asm:28 LDA #FALSE
    case 0xC3FAFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3FAC9.asm:28 LDA #FALSE
    // Overlapping static entry reached from 0xC3FAFB.
    case 0xC3FAFD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3FAC9.asm:29 BRA @UNKNOWN2
    case 0xC3FAFE: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C3/C3FAC9.asm:31 TYA
    case 0xC3FB00: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:32 JSR UNKNOWN_C3F981
    case 0xC3FB01: cpu.execute_instruction<0x20>(0x00F981, 3); return true;
    // src/unknown/C3/C3FAC9.asm:33 LDA #TRUE
    case 0xC3FB04: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3FAC9.asm:33 LDA #TRUE
    // Overlapping static entry reached from 0xC3FB04.
    case 0xC3FB06: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3FAC9.asm:35 END_C_FUNCTION
    case 0xC3FB07: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3FAC9.asm:35 END_C_FUNCTION
    case 0xC3FB08: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C3/C3FB09.asm (unresolved).
bool execute_unresolved_c3_c3fb09_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C3/C3FB09.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC3FB09: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C3/C3FB09.asm:4 LDX CURRENT_ATTACKER
    case 0xC3FB0B: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/unknown/C3/C3FB09.asm:5 LDA __BSS_START__+14,X
    case 0xC3FB0E: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C3/C3FB09.asm:6 AND #$00FF
    case 0xC3FB11: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3FB09.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC3FB11.
    case 0xC3FB13: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3FB09.asm:7 BNE @UNKNOWN0
    case 0xC3FB14: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3FB09.asm:8 LDA #$0000
    case 0xC3FB16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3FB09.asm:8 LDA #$0000
    // Overlapping static entry reached from 0xC3FB16.
    case 0xC3FB18: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3FB09.asm:9 BRA @UNKNOWN1
    case 0xC3FB19: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3FB09.asm:11 LDA #$0001
    case 0xC3FB1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3FB09.asm:11 LDA #$0001
    // Overlapping static entry reached from 0xC3FB1B.
    case 0xC3FB1D: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C3/C3FB09.asm:13 RTL
    case 0xC3FB1E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
