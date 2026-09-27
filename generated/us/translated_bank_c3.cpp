// Generated from ca65 instruction spans. Do not edit.
#include "eb/cpu.hpp"
#include <cstdint>

namespace eb::us {
bool translated_bank_c3(Cpu& c, std::uint16_t offset) {
    switch (offset) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0100: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0102: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0103: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0104: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC30104.
    case 0x0106: c.execute<0xFF>(0x51225B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0107: c.execute<0x5B>(0x000000, 1); return true;
    // src/system/display_antipiracy_screen.asm:8 JSL UNKNOWN_C40B51
    case 0x0108: c.execute<0x22>(0xC40B51, 4); return true;
    // src/system/display_antipiracy_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC30106.
    case 0x010A: c.execute<0x0B>(0x000000, 1); return true;
    // src/system/display_antipiracy_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC3010A.
    case 0x010B: c.execute<0xC4>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x010C: if (c.p & 0x20) c.execute<0xA9>(0x00000D, 2); else c.execute<0xA9>(0x00F20D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3010B.
    case 0x010D: c.execute<0x0D>(0x0085F2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3010C.
    case 0x010E: c.execute<0xF2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0x010F: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xC3010E.
    case 0x0110: c.execute<0x0E>(0x00D8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x0111: if (c.p & 0x20) c.execute<0xA9>(0x0000D8, 2); else c.execute<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC30111.
    case 0x0113: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x0114: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x0116: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC30116.
    case 0x0118: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0x0119: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x011B: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3011B.
    case 0x011D: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x011E: c.execute<0x85>(0x000014, 2); return true;
    // src/system/display_antipiracy_screen.asm:11 JSL DECOMP
    case 0x0120: c.execute<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x0124: if (c.p & 0x20) c.execute<0xA9>(0x00005E, 2); else c.execute<0xA9>(0x00F05E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC30124.
    case 0x0126: c.execute<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0x0127: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xC30126.
    case 0x0128: c.execute<0x0E>(0x00D8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x0129: if (c.p & 0x20) c.execute<0xA9>(0x0000D8, 2); else c.execute<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC30129.
    case 0x012B: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x012C: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x012E: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3012E.
    case 0x0130: c.execute<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0x0131: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x0133: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC30133.
    case 0x0135: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x0136: c.execute<0x85>(0x000014, 2); return true;
    // src/system/display_antipiracy_screen.asm:14 JSL DECOMP
    case 0x0138: c.execute<0x22>(0xC41A9E, 4); return true;
    // src/system/display_antipiracy_screen.asm:15 JSL UNKNOWN_C40B75
    case 0x013C: c.execute<0x22>(0xC40B75, 4); return true;
    // include/macros.asm:25 PLD
    case 0x0140: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0141: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0x0142: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0x0144: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0x0145: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0x0146: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC30146.
    case 0x0148: c.execute<0xFF>(0x51225B, 4); return true;
    // include/macros.asm:153 TCD
    case 0x0149: c.execute<0x5B>(0x000000, 1); return true;
    // src/system/display_faulty_gamepak_screen.asm:8 JSL UNKNOWN_C40B51
    case 0x014A: c.execute<0x22>(0xC40B51, 4); return true;
    // src/system/display_faulty_gamepak_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC30148.
    case 0x014C: c.execute<0x0B>(0x000000, 1); return true;
    // src/system/display_faulty_gamepak_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC3014C.
    case 0x014D: c.execute<0xC4>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x014E: if (c.p & 0x20) c.execute<0xA9>(0x0000C4, 2); else c.execute<0xA9>(0x00F5C4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3014D.
    case 0x014F: c.execute<0xC4>(0x0000F5, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3014E.
    case 0x0150: c.execute<0xF5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0x0151: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xC30150.
    case 0x0152: c.execute<0x0E>(0x00D8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x0153: if (c.p & 0x20) c.execute<0xA9>(0x0000D8, 2); else c.execute<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC30153.
    case 0x0155: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x0156: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x0158: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC30158.
    case 0x015A: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0x015B: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x015D: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3015D.
    case 0x015F: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x0160: c.execute<0x85>(0x000014, 2); return true;
    // src/system/display_faulty_gamepak_screen.asm:11 JSL DECOMP
    case 0x0162: c.execute<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x0166: if (c.p & 0x20) c.execute<0xA9>(0x0000C6, 2); else c.execute<0xA9>(0x00F3C6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC30166.
    case 0x0168: c.execute<0xF3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0x0169: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xC30168.
    case 0x016A: c.execute<0x0E>(0x00D8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x016B: if (c.p & 0x20) c.execute<0xA9>(0x0000D8, 2); else c.execute<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3016B.
    case 0x016D: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x016E: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0x0170: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC30170.
    case 0x0172: c.execute<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0x0173: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0x0175: if (c.p & 0x20) c.execute<0xA9>(0x00007F, 2); else c.execute<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC30175.
    case 0x0177: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0x0178: c.execute<0x85>(0x000014, 2); return true;
    // src/system/display_faulty_gamepak_screen.asm:14 JSL DECOMP
    case 0x017A: c.execute<0x22>(0xC41A9E, 4); return true;
    // src/system/display_faulty_gamepak_screen.asm:15 JSL UNKNOWN_C40B75
    case 0x017E: c.execute<0x22>(0xC40B75, 4); return true;
    // include/macros.asm:25 PLD
    case 0x0182: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0x0183: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE450: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE452: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE453: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE454: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E454.
    case 0xE456: c.execute<0xFF>(0x02AD5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE457: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:11 LDA FRAME_COUNTER
    case 0xE458: c.execute<0xAD>(0x000002, 3); return true;
    // src/unknown/C3/C3E450.asm:11 LDA FRAME_COUNTER
    // Overlapping static entry reached from 0xC3E456.
    case 0xE45A: c.execute<0x00>(0x000029, 2); return true;
    // src/unknown/C3/C3E450.asm:12 AND #$00FF
    case 0xE45B: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E450.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC3E45B.
    case 0xE45D: c.execute<0x00>(0x000029, 2); return true;
    // src/unknown/C3/C3E450.asm:13 AND #$0004
    case 0xE45E: if (c.p & 0x20) c.execute<0x29>(0x000004, 2); else c.execute<0x29>(0x000004, 3); return true;
    // src/unknown/C3/C3E450.asm:13 AND #$0004
    // Overlapping static entry reached from 0xC3E45E.
    case 0xE460: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E450.asm:14 BEQ @UNKNOWN0
    case 0xE461: c.execute<0xF0>(0x000026, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE463: if (c.p & 0x20) c.execute<0xA9>(0x0000C8, 2); else c.execute<0xA9>(0x001FC8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3E463.
    case 0xE465: c.execute<0x1F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    case 0xE466: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE468: if (c.p & 0x20) c.execute<0xA9>(0x0000E0, 2); else c.execute<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3E465.
    case 0xE469: if (c.p & 0x10) c.execute<0xE0>(0x000000, 2); else c.execute<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3E468.
    case 0xE46A: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE46B: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Overlapping static entry reached from 0xC3E469.
    case 0xE46C: c.execute<0x08>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:16 LDA GAME_STATE+game_state::text_flavour
    case 0xE46D: c.execute<0xAD>(0x0099CD, 3); return true;
    // src/unknown/C3/C3E450.asm:17 AND #$00FF
    case 0xE470: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E450.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC3E470.
    case 0xE472: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E450.asm:18 DEC
    case 0xE473: c.execute<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    case 0xE474: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    case 0xE476: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    case 0xE477: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E450.asm:20 TAX
    case 0xE479: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:21 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xE47A: c.execute<0xBF>(0xE01FB9, 4); return true;
    // src/unknown/C3/C3E450.asm:22 CLC
    case 0xE47E: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:23 ADC #8
    case 0xE47F: if (c.p & 0x20) c.execute<0x69>(0x000008, 2); else c.execute<0x69>(0x000008, 3); return true;
    // src/unknown/C3/C3E450.asm:23 ADC #8
    // Overlapping static entry reached from 0xC3E47F.
    case 0xE481: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3E450.asm:24 CLC
    case 0xE482: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:25 ADC @VIRTUAL06
    case 0xE483: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3E450.asm:26 STA @VIRTUAL06
    case 0xE485: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3E450.asm:27 BRA @UNKNOWN1
    case 0xE487: c.execute<0x80>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE489: if (c.p & 0x20) c.execute<0xA9>(0x0000C8, 2); else c.execute<0xA9>(0x001FC8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3E489.
    case 0xE48B: c.execute<0x1F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    case 0xE48C: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE48E: if (c.p & 0x20) c.execute<0xA9>(0x0000E0, 2); else c.execute<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3E48B.
    case 0xE48F: if (c.p & 0x10) c.execute<0xE0>(0x000000, 2); else c.execute<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3E48E.
    case 0xE490: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE491: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Overlapping static entry reached from 0xC3E48F.
    case 0xE492: c.execute<0x08>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:30 LDA GAME_STATE+game_state::text_flavour
    case 0xE493: c.execute<0xAD>(0x0099CD, 3); return true;
    // src/unknown/C3/C3E450.asm:31 AND #$00FF
    case 0xE496: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E450.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC3E496.
    case 0xE498: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E450.asm:32 DEC
    case 0xE499: c.execute<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    case 0xE49A: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    case 0xE49C: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    case 0xE49D: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E450.asm:34 TAX
    case 0xE49F: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:35 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xE4A0: c.execute<0xBF>(0xE01FB9, 4); return true;
    // src/unknown/C3/C3E450.asm:36 CLC
    case 0xE4A4: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:37 ADC #40
    case 0xE4A5: if (c.p & 0x20) c.execute<0x69>(0x000028, 2); else c.execute<0x69>(0x000028, 3); return true;
    // src/unknown/C3/C3E450.asm:37 ADC #40
    // Overlapping static entry reached from 0xC3E4A5.
    case 0xE4A7: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3E450.asm:38 CLC
    case 0xE4A8: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E450.asm:39 ADC @VIRTUAL06
    case 0xE4A9: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3E450.asm:40 STA @VIRTUAL06
    case 0xE4AB: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xE4AD: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xE4AF: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xE4B1: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xE4B3: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3E450.asm:43 LDX #BPP2PALETTE_SIZE
    case 0xE4B5: if (c.p & 0x10) c.execute<0xA2>(0x000008, 2); else c.execute<0xA2>(0x000008, 3); return true;
    // src/unknown/C3/C3E450.asm:43 LDX #BPP2PALETTE_SIZE
    // Overlapping static entry reached from 0xC3E4B5.
    case 0xE4B7: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3E450.asm:44 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 5
    case 0xE4B8: if (c.p & 0x20) c.execute<0xA9>(0x000028, 2); else c.execute<0xA9>(0x000228, 3); return true;
    // src/unknown/C3/C3E450.asm:44 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 5
    // Overlapping static entry reached from 0xC3E4B8.
    case 0xE4BA: c.execute<0x02>(0x000022, 2); return true;
    // src/unknown/C3/C3E450.asm:45 JSL MEMCPY16
    case 0xE4BB: c.execute<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C3/C3E450.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xE4BF: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3E450.asm:47 LDA #PALETTE_UPLOAD::FULL
    case 0xE4C1: if (c.p & 0x20) c.execute<0xA9>(0x000018, 2); else c.execute<0xA9>(0x008D18, 3); return true;
    // src/unknown/C3/C3E450.asm:48 STA PALETTE_UPLOAD_MODE
    case 0xE4C3: c.execute<0x8D>(0x000030, 3); return true;
    // src/unknown/C3/C3E450.asm:48 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC3E4C1.
    case 0xE4C4: c.execute<0x30>(0x000000, 2); return true;
    // src/unknown/C3/C3E450.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xE4C6: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    case 0xE4C8: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE4C9: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE4CA: c.execute<0xC2>(0x000031, 2); return true;
    // src/text/clear_instant_printing.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xE4CC: c.execute<0xE2>(0x000020, 2); return true;
    // src/text/clear_instant_printing.asm:10 STZ INSTANT_PRINTING
    case 0xE4CE: c.execute<0x9C>(0x009622, 3); return true;
    // src/text/clear_instant_printing.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xE4D1: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    case 0xE4D3: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE4D4: c.execute<0xC2>(0x000031, 2); return true;
    // src/text/set_instant_printing.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xE4D6: c.execute<0xE2>(0x000020, 2); return true;
    // src/text/set_instant_printing.asm:9 LDA #1
    case 0xE4D8: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x008D01, 3); return true;
    // src/text/set_instant_printing.asm:10 STA INSTANT_PRINTING
    case 0xE4DA: c.execute<0x8D>(0x009622, 3); return true;
    // src/text/set_instant_printing.asm:10 STA INSTANT_PRINTING
    // Overlapping static entry reached from 0xC3E4D8.
    case 0xE4DB: c.execute<0x22>(0x20C296, 4); return true;
    // src/text/set_instant_printing.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xE4DD: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    case 0xE4DF: c.execute<0x6B>(0x000000, 1); return true;
    // src/text/window_tick_without_instant_printing.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE4E0: c.execute<0xC2>(0x000031, 2); return true;
    // src/text/window_tick_without_instant_printing.asm:4 JSL CLEAR_INSTANT_PRINTING
    case 0xE4E2: c.execute<0x22>(0xC3E4CA, 4); return true;
    // src/text/window_tick_without_instant_printing.asm:5 JSL WINDOW_TICK
    case 0xE4E6: c.execute<0x22>(0xC12DD5, 4); return true;
    // src/text/window_tick_without_instant_printing.asm:6 JSL SET_INSTANT_PRINTING
    case 0xE4EA: c.execute<0x22>(0xC3E4D4, 4); return true;
    // src/text/window_tick_without_instant_printing.asm:7 RTL
    case 0xE4EE: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE4EF: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE4F1: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE4F2: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE4F3: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E4F3.
    case 0xE4F5: c.execute<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE4F6: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3E4EF.asm:12 LDA #0
    case 0xE4F7: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3E4EF.asm:12 LDA #0
    // Overlapping static entry reached from 0xC3E4F7.
    case 0xE4F9: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3E4EF.asm:13 STA @LOCAL00
    case 0xE4FA: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3E4EF.asm:14 BRA @UNKNOWN2
    case 0xE4FC: c.execute<0x80>(0x000019, 2); return true;
    // src/unknown/C3/C3E4EF.asm:16 LDY #.SIZEOF(window_stats)
    case 0xE4FE: if (c.p & 0x10) c.execute<0xA0>(0x000052, 2); else c.execute<0xA0>(0x000052, 3); return true;
    // src/unknown/C3/C3E4EF.asm:16 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E4FE.
    case 0xE500: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3E4EF.asm:17 JSL MULT168
    case 0xE501: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E4EF.asm:18 TAX
    case 0xE505: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E4EF.asm:19 LDA WINDOW_STATS + window_stats::id,X
    case 0xE506: c.execute<0xBD>(0x008654, 3); return true;
    // src/unknown/C3/C3E4EF.asm:20 CMP #.LOWORD(-1)
    case 0xE509: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E4EF.asm:20 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E509.
    case 0xE50B: c.execute<0xFF>(0xA504D0, 4); return true;
    // src/unknown/C3/C3E4EF.asm:21 BNE @UNKNOWN1
    case 0xE50C: c.execute<0xD0>(0x000004, 2); return true;
    // src/unknown/C3/C3E4EF.asm:22 LDA @LOCAL00
    case 0xE50E: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3E4EF.asm:22 LDA @LOCAL00
    // Overlapping static entry reached from 0xC3E50B.
    case 0xE50F: c.execute<0x0E>(0x000D80, 3); return true;
    // src/unknown/C3/C3E4EF.asm:23 BRA @UNKNOWN3
    case 0xE510: c.execute<0x80>(0x00000D, 2); return true;
    // src/unknown/C3/C3E4EF.asm:25 LDA @LOCAL00
    case 0xE512: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3E4EF.asm:26 INC
    case 0xE514: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3E4EF.asm:27 STA @LOCAL00
    case 0xE515: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3E4EF.asm:29 CMP #8
    case 0xE517: if (c.p & 0x20) c.execute<0xC9>(0x000008, 2); else c.execute<0xC9>(0x000008, 3); return true;
    // src/unknown/C3/C3E4EF.asm:29 CMP #8
    // Overlapping static entry reached from 0xC3E517.
    case 0xE519: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3E4EF.asm:30 BNE @UNKNOWN0
    case 0xE51A: c.execute<0xD0>(0x0000E2, 2); return true;
    // src/unknown/C3/C3E4EF.asm:31 LDA #.LOWORD(-1)
    case 0xE51C: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E4EF.asm:31 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E51C.
    case 0xE51E: c.execute<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    case 0xE51F: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE520: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE521: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Overlapping static entry reached from 0xC3E51E.
    case 0xE522: c.execute<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE523: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE524: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE525: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE526: if (c.p & 0x20) c.execute<0x69>(0x0000E8, 2); else c.execute<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E526.
    case 0xE528: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE529: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE52A: c.execute<0x68>(0x000000, 1); return true;
    // src/text/close_window.asm:16 STA @LOCAL04
    case 0xE52B: c.execute<0x85>(0x000016, 2); return true;
    // src/text/close_window.asm:16 STA @LOCAL04
    // Overlapping static entry reached from 0xC3E528.
    case 0xE52C: c.execute<0x16>(0x0000C9, 2); return true;
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    case 0xE52D: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E52C.
    case 0xE52E: c.execute<0xFF>(0x03D0FF, 4); return true;
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E52D.
    case 0xE52F: c.execute<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    case 0xE530: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xE532: c.execute<0x4C>(0x00E6F4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Overlapping static entry reached from 0xC3E52F.
    case 0xE533: c.execute<0xF4>(0x00A5E6, 3); return true;
    // src/text/close_window.asm:19 LDA @LOCAL04
    case 0xE535: c.execute<0xA5>(0x000016, 2); return true;
    // src/text/close_window.asm:19 LDA @LOCAL04
    // Overlapping static entry reached from 0xC3E533.
    case 0xE536: c.execute<0x16>(0x00000A, 2); return true;
    // src/text/close_window.asm:20 ASL
    case 0xE537: c.execute<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:21 TAX
    case 0xE538: c.execute<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:22 LDA OPEN_WINDOW_TABLE,X
    case 0xE539: c.execute<0xBD>(0x0088E4, 3); return true;
    // src/text/close_window.asm:23 STA @VIRTUAL04
    case 0xE53C: c.execute<0x85>(0x000004, 2); return true;
    // src/text/close_window.asm:24 CMP #.LOWORD(-1)
    case 0xE53E: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E53E.
    case 0xE540: c.execute<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    case 0xE541: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xE543: c.execute<0x4C>(0x00E6F4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Overlapping static entry reached from 0xC3E540.
    case 0xE544: c.execute<0xF4>(0x00ADE6, 3); return true;
    // src/text/close_window.asm:26 LDA CURRENT_FOCUS_WINDOW
    case 0xE546: c.execute<0xAD>(0x008958, 3); return true;
    // src/text/close_window.asm:26 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC3E544.
    case 0xE547: c.execute<0x58>(0x000000, 1); return true;
    // src/text/close_window.asm:26 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC3E547.
    case 0xE548: if (c.p & 0x20) c.execute<0x89>(0x0000C5, 2); else c.execute<0x89>(0x0016C5, 3); return true;
    // src/text/close_window.asm:27 CMP @LOCAL04
    case 0xE549: c.execute<0xC5>(0x000016, 2); return true;
    // src/text/close_window.asm:27 CMP @LOCAL04
    // Overlapping static entry reached from 0xC3E548.
    case 0xE54A: c.execute<0x16>(0x0000D0, 2); return true;
    // src/text/close_window.asm:28 BNE @UNKNOWN2
    case 0xE54B: c.execute<0xD0>(0x000006, 2); return true;
    // src/text/close_window.asm:28 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC3E54A.
    case 0xE54C: c.execute<0x06>(0x0000A9, 2); return true;
    // src/text/close_window.asm:29 LDA #.LOWORD(-1)
    case 0xE54D: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:29 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E54C.
    case 0xE54E: c.execute<0xFF>(0x588DFF, 4); return true;
    // src/text/close_window.asm:29 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E54D.
    case 0xE54F: c.execute<0xFF>(0x89588D, 4); return true;
    // src/text/close_window.asm:30 STA CURRENT_FOCUS_WINDOW
    case 0xE550: c.execute<0x8D>(0x008958, 3); return true;
    // src/text/close_window.asm:30 STA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC3E54E.
    case 0xE552: if (c.p & 0x20) c.execute<0x89>(0x0000A5, 2); else c.execute<0x89>(0x0016A5, 3); return true;
    // src/text/close_window.asm:32 LDA @LOCAL04
    case 0xE553: c.execute<0xA5>(0x000016, 2); return true;
    // src/text/close_window.asm:32 LDA @LOCAL04
    // Overlapping static entry reached from 0xC3E552.
    case 0xE554: c.execute<0x16>(0x000022, 2); return true;
    // src/text/close_window.asm:33 JSR UNKNOWN_C3E7E3
    case 0xE555: c.execute<0x22>(0xC3E7E3, 4); return true;
    // src/text/close_window.asm:33 JSR UNKNOWN_C3E7E3
    // Overlapping static entry reached from 0xC3E554.
    case 0xE556: c.execute<0xE3>(0x0000E7, 2); return true;
    // src/text/close_window.asm:33 JSR UNKNOWN_C3E7E3
    // Overlapping static entry reached from 0xC3E556.
    case 0xE558: c.execute<0xC3>(0x0000A5, 2); return true;
    // src/text/close_window.asm:34 LDA @VIRTUAL04
    case 0xE559: c.execute<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:34 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC3E558.
    case 0xE55A: c.execute<0x04>(0x0000A0, 2); return true;
    // src/text/close_window.asm:35 LDY #.SIZEOF(window_stats)
    case 0xE55B: if (c.p & 0x10) c.execute<0xA0>(0x000052, 2); else c.execute<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E55A.
    case 0xE55C: c.execute<0x52>(0x000000, 2); return true;
    // src/text/close_window.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E55B.
    case 0xE55D: c.execute<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:36 JSL MULT168
    case 0xE55E: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:37 TAX
    case 0xE562: c.execute<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:38 LDY WINDOW_STATS + window_stats::next,X
    case 0xE563: c.execute<0xBC>(0x008652, 3); return true;
    // src/text/close_window.asm:39 STY @LOCAL03
    case 0xE566: c.execute<0x84>(0x000014, 2); return true;
    // src/text/close_window.asm:40 LDA WINDOW_STATS + window_stats::prev,X
    case 0xE568: c.execute<0xBD>(0x008650, 3); return true;
    // src/text/close_window.asm:41 STA @LOCAL02
    case 0xE56B: c.execute<0x85>(0x000012, 2); return true;
    // src/text/close_window.asm:42 CPY #.LOWORD(-1)
    case 0xE56D: if (c.p & 0x10) c.execute<0xC0>(0x0000FF, 2); else c.execute<0xC0>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:42 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E56D.
    case 0xE56F: c.execute<0xFF>(0x8D05D0, 4); return true;
    // src/text/close_window.asm:43 BNE @UNKNOWN3
    case 0xE570: c.execute<0xD0>(0x000005, 2); return true;
    // src/text/close_window.asm:44 STA WINDOW_TAIL
    case 0xE572: c.execute<0x8D>(0x0088E2, 3); return true;
    // src/text/close_window.asm:44 STA WINDOW_TAIL
    // Overlapping static entry reached from 0xC3E56F.
    case 0xE573: c.execute<0xE2>(0x000088, 2); return true;
    // src/text/close_window.asm:45 BRA @UNKNOWN4
    case 0xE575: c.execute<0x80>(0x00000E, 2); return true;
    // src/text/close_window.asm:47 TYA
    case 0xE577: c.execute<0x98>(0x000000, 1); return true;
    // src/text/close_window.asm:48 LDY #.SIZEOF(window_stats)
    case 0xE578: if (c.p & 0x10) c.execute<0xA0>(0x000052, 2); else c.execute<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:48 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E578.
    case 0xE57A: c.execute<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:49 JSL MULT168
    case 0xE57B: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:50 TAX
    case 0xE57F: c.execute<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:51 LDA @LOCAL02
    case 0xE580: c.execute<0xA5>(0x000012, 2); return true;
    // src/text/close_window.asm:52 STA WINDOW_STATS + window_stats::prev,X
    case 0xE582: c.execute<0x9D>(0x008650, 3); return true;
    // src/text/close_window.asm:54 CMP #.LOWORD(-1)
    case 0xE585: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:54 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E585.
    case 0xE587: c.execute<0xFF>(0xA407D0, 4); return true;
    // src/text/close_window.asm:55 BNE @UNKNOWN5
    case 0xE588: c.execute<0xD0>(0x000007, 2); return true;
    // src/text/close_window.asm:56 LDY @LOCAL03
    case 0xE58A: c.execute<0xA4>(0x000014, 2); return true;
    // src/text/close_window.asm:56 LDY @LOCAL03
    // Overlapping static entry reached from 0xC3E587.
    case 0xE58B: c.execute<0x14>(0x00008C, 2); return true;
    // src/text/close_window.asm:57 STY WINDOW_HEAD
    case 0xE58C: c.execute<0x8C>(0x0088E0, 3); return true;
    // src/text/close_window.asm:57 STY WINDOW_HEAD
    // Overlapping static entry reached from 0xC3E58B.
    case 0xE58D: if (c.p & 0x10) c.execute<0xE0>(0x000088, 2); else c.execute<0xE0>(0x008088, 3); return true;
    // src/text/close_window.asm:58 BRA @UNKNOWN6
    case 0xE58F: c.execute<0x80>(0x00000E, 2); return true;
    // src/text/close_window.asm:58 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC3E58D.
    case 0xE590: c.execute<0x0E>(0x0052A0, 3); return true;
    // src/text/close_window.asm:60 LDY #.SIZEOF(window_stats)
    case 0xE591: if (c.p & 0x10) c.execute<0xA0>(0x000052, 2); else c.execute<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:60 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E591.
    case 0xE593: c.execute<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:61 JSL MULT168
    case 0xE594: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:62 TAX
    case 0xE598: c.execute<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:63 LDY @LOCAL03
    case 0xE599: c.execute<0xA4>(0x000014, 2); return true;
    // src/text/close_window.asm:64 TYA
    case 0xE59B: c.execute<0x98>(0x000000, 1); return true;
    // src/text/close_window.asm:65 STA WINDOW_STATS + window_stats::next,X
    case 0xE59C: c.execute<0x9D>(0x008652, 3); return true;
    // src/text/close_window.asm:67 LDA @VIRTUAL04
    case 0xE59F: c.execute<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:68 LDY #.SIZEOF(window_stats)
    case 0xE5A1: if (c.p & 0x10) c.execute<0xA0>(0x000052, 2); else c.execute<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:68 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E5A1.
    case 0xE5A3: c.execute<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:69 JSL MULT168
    case 0xE5A4: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:70 TAX
    case 0xE5A8: c.execute<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:71 STX @LOCAL01
    case 0xE5A9: c.execute<0x86>(0x000010, 2); return true;
    // src/text/close_window.asm:72 LDA #.LOWORD(-1)
    case 0xE5AB: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:72 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E5AB.
    case 0xE5AD: c.execute<0xFF>(0x86549D, 4); return true;
    // src/text/close_window.asm:73 STA WINDOW_STATS + window_stats::id,X
    case 0xE5AE: c.execute<0x9D>(0x008654, 3); return true;
    // src/text/close_window.asm:74 LDA @LOCAL04
    case 0xE5B1: c.execute<0xA5>(0x000016, 2); return true;
    // src/text/close_window.asm:75 ASL
    case 0xE5B3: c.execute<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:76 TAX
    case 0xE5B4: c.execute<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:77 LDA #.LOWORD(-1)
    case 0xE5B5: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:77 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E5B5.
    case 0xE5B7: c.execute<0xFF>(0x88E49D, 4); return true;
    // src/text/close_window.asm:78 STA OPEN_WINDOW_TABLE,X
    case 0xE5B8: c.execute<0x9D>(0x0088E4, 3); return true;
    // src/text/close_window.asm:79 LDX @LOCAL01
    case 0xE5BB: c.execute<0xA6>(0x000010, 2); return true;
    // src/text/close_window.asm:80 LDA WINDOW_STATS + window_stats::window_x,X
    case 0xE5BD: c.execute<0xBD>(0x008656, 3); return true;
    // src/text/close_window.asm:81 ASL
    case 0xE5C0: c.execute<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:82 STA @VIRTUAL02
    case 0xE5C1: c.execute<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:83 LDA WINDOW_STATS + window_stats::window_y,X
    case 0xE5C3: c.execute<0xBD>(0x008658, 3); return true;
    // include/macros.asm:696 ASL
    case 0xE5C6: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    case 0xE5C7: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    case 0xE5C8: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    case 0xE5C9: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    case 0xE5CA: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    case 0xE5CB: c.execute<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:85 CLC
    case 0xE5CC: c.execute<0x18>(0x000000, 1); return true;
    // src/text/close_window.asm:86 ADC @VIRTUAL02
    case 0xE5CD: c.execute<0x65>(0x000002, 2); return true;
    // src/text/close_window.asm:87 CLC
    case 0xE5CF: c.execute<0x18>(0x000000, 1); return true;
    // src/text/close_window.asm:88 ADC #.LOWORD(BG2_BUFFER)
    case 0xE5D0: if (c.p & 0x20) c.execute<0x69>(0x0000FE, 2); else c.execute<0x69>(0x007DFE, 3); return true;
    // src/text/close_window.asm:88 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC3E5D0.
    case 0xE5D2: c.execute<0x7D>(0x000285, 3); return true;
    // src/text/close_window.asm:96 STA @VIRTUAL02
    case 0xE5D3: c.execute<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:97 STA @LOCAL00
    case 0xE5D5: c.execute<0x85>(0x00000E, 2); return true;
    // src/text/close_window.asm:98 LDY WINDOW_STATS + window_stats::tilemap_address,X
    case 0xE5D7: c.execute<0xBC>(0x008685, 3); return true;
    // src/text/close_window.asm:99 STY @LOCAL03
    case 0xE5DA: c.execute<0x84>(0x000014, 2); return true;
    // src/text/close_window.asm:100 LDX #0
    case 0xE5DC: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/text/close_window.asm:100 LDX #0
    // Overlapping static entry reached from 0xC3E5DC.
    case 0xE5DE: c.execute<0x00>(0x000086, 2); return true;
    // src/text/close_window.asm:101 STX @LOCAL01
    case 0xE5DF: c.execute<0x86>(0x000010, 2); return true;
    // src/text/close_window.asm:102 BRA @UNKNOWN10
    case 0xE5E1: c.execute<0x80>(0x000027, 2); return true;
    // src/text/close_window.asm:104 LDY @LOCAL03
    case 0xE5E3: c.execute<0xA4>(0x000014, 2); return true;
    // src/text/close_window.asm:105 LDA __BSS_START__,Y
    case 0xE5E5: c.execute<0xB9>(0x000000, 3); return true;
    // src/text/close_window.asm:106 CMP #64
    case 0xE5E8: if (c.p & 0x20) c.execute<0xC9>(0x000040, 2); else c.execute<0xC9>(0x000040, 3); return true;
    // src/text/close_window.asm:106 CMP #64
    // Overlapping static entry reached from 0xC3E5E8.
    case 0xE5EA: c.execute<0x00>(0x0000D0, 2); return true;
    // src/text/close_window.asm:107 BNE @UNKNOWN8
    case 0xE5EB: c.execute<0xD0>(0x000005, 2); return true;
    // src/text/close_window.asm:108 CMP #0
    case 0xE5ED: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/text/close_window.asm:108 CMP #0
    // Overlapping static entry reached from 0xC3E5ED.
    case 0xE5EF: c.execute<0x00>(0x0000F0, 2); return true;
    // src/text/close_window.asm:109 BEQ @UNKNOWN9
    case 0xE5F0: c.execute<0xF0>(0x000007, 2); return true;
    // src/text/close_window.asm:111 LDA __BSS_START__,Y
    case 0xE5F2: c.execute<0xB9>(0x000000, 3); return true;
    // src/text/close_window.asm:112 JSL FREE_TILE
    case 0xE5F5: c.execute<0x22>(0xC44AF7, 4); return true;
    // src/text/close_window.asm:114 LDA #64
    case 0xE5F9: if (c.p & 0x20) c.execute<0xA9>(0x000040, 2); else c.execute<0xA9>(0x000040, 3); return true;
    // src/text/close_window.asm:114 LDA #64
    // Overlapping static entry reached from 0xC3E5F9.
    case 0xE5FB: c.execute<0x00>(0x0000A4, 2); return true;
    // src/text/close_window.asm:115 LDY @LOCAL03
    case 0xE5FC: c.execute<0xA4>(0x000014, 2); return true;
    // src/text/close_window.asm:116 STA __BSS_START__,Y
    case 0xE5FE: c.execute<0x99>(0x000000, 3); return true;
    // src/text/close_window.asm:117 INY
    case 0xE601: c.execute<0xC8>(0x000000, 1); return true;
    // src/text/close_window.asm:118 INY
    case 0xE602: c.execute<0xC8>(0x000000, 1); return true;
    // src/text/close_window.asm:119 STY @LOCAL03
    case 0xE603: c.execute<0x84>(0x000014, 2); return true;
    // src/text/close_window.asm:120 LDX @LOCAL01
    case 0xE605: c.execute<0xA6>(0x000010, 2); return true;
    // src/text/close_window.asm:121 INX
    case 0xE607: c.execute<0xE8>(0x000000, 1); return true;
    // src/text/close_window.asm:122 STX @LOCAL01
    case 0xE608: c.execute<0x86>(0x000010, 2); return true;
    // src/text/close_window.asm:124 LDA @VIRTUAL04
    case 0xE60A: c.execute<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:125 LDY #.SIZEOF(window_stats)
    case 0xE60C: if (c.p & 0x10) c.execute<0xA0>(0x000052, 2); else c.execute<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:125 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E60C.
    case 0xE60E: c.execute<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:126 JSL MULT168
    case 0xE60F: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:127 TAX
    case 0xE613: c.execute<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:128 LDY WINDOW_STATS + window_stats::width,X
    case 0xE614: c.execute<0xBC>(0x00865A, 3); return true;
    // src/text/close_window.asm:129 TAX
    case 0xE617: c.execute<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:130 LDA WINDOW_STATS + window_stats::height,X
    case 0xE618: c.execute<0xBD>(0x00865C, 3); return true;
    // src/text/close_window.asm:131 JSL MULT16
    case 0xE61B: c.execute<0x22>(0xC09032, 4); return true;
    // src/text/close_window.asm:132 STA @VIRTUAL02
    case 0xE61F: c.execute<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:133 LDX @LOCAL01
    case 0xE621: c.execute<0xA6>(0x000010, 2); return true;
    // src/text/close_window.asm:134 TXA
    case 0xE623: c.execute<0x8A>(0x000000, 1); return true;
    // src/text/close_window.asm:135 CMP @VIRTUAL02
    case 0xE624: c.execute<0xC5>(0x000002, 2); return true;
    // src/text/close_window.asm:136 BCC @UNKNOWN7
    case 0xE626: c.execute<0x90>(0x0000BB, 2); return true;
    // src/text/close_window.asm:137 LDY #0
    case 0xE628: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/text/close_window.asm:137 LDY #0
    // Overlapping static entry reached from 0xC3E628.
    case 0xE62A: c.execute<0x00>(0x000084, 2); return true;
    // src/text/close_window.asm:138 STY @LOCAL01
    case 0xE62B: c.execute<0x84>(0x000010, 2); return true;
    // src/text/close_window.asm:140 BRA @UNKNOWN14
    case 0xE62D: c.execute<0x80>(0x000057, 2); return true;
    // src/text/close_window.asm:146 LDA #0
    case 0xE62F: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/text/close_window.asm:146 LDA #0
    // Overlapping static entry reached from 0xC3E62F.
    case 0xE631: c.execute<0x00>(0x000085, 2); return true;
    // src/text/close_window.asm:147 STA @LOCAL02
    case 0xE632: c.execute<0x85>(0x000012, 2); return true;
    // src/text/close_window.asm:149 BRA @UNKNOWN13
    case 0xE634: c.execute<0x80>(0x000017, 2); return true;
    // src/text/close_window.asm:161 LDA #0
    case 0xE636: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/text/close_window.asm:161 LDA #0
    // Overlapping static entry reached from 0xC3E636.
    case 0xE638: c.execute<0x00>(0x0000A6, 2); return true;
    // src/text/close_window.asm:162 LDX @LOCAL00
    case 0xE639: c.execute<0xA6>(0x00000E, 2); return true;
    // src/text/close_window.asm:163 STX @VIRTUAL02
    case 0xE63B: c.execute<0x86>(0x000002, 2); return true;
    // src/text/close_window.asm:164 STA __BSS_START__,X
    case 0xE63D: c.execute<0x9D>(0x000000, 3); return true;
    // src/text/close_window.asm:165 INC @VIRTUAL02
    case 0xE640: c.execute<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:166 INC @VIRTUAL02
    case 0xE642: c.execute<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:167 LDA @VIRTUAL02
    case 0xE644: c.execute<0xA5>(0x000002, 2); return true;
    // src/text/close_window.asm:168 STA @LOCAL00
    case 0xE646: c.execute<0x85>(0x00000E, 2); return true;
    // src/text/close_window.asm:169 LDA @LOCAL02
    case 0xE648: c.execute<0xA5>(0x000012, 2); return true;
    // src/text/close_window.asm:170 INC
    case 0xE64A: c.execute<0x1A>(0x000000, 1); return true;
    // src/text/close_window.asm:171 STA @LOCAL02
    case 0xE64B: c.execute<0x85>(0x000012, 2); return true;
    // src/text/close_window.asm:174 LDA @VIRTUAL04
    case 0xE64D: c.execute<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:175 LDY #.SIZEOF(window_stats)
    case 0xE64F: if (c.p & 0x10) c.execute<0xA0>(0x000052, 2); else c.execute<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:175 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E64F.
    case 0xE651: c.execute<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:176 JSL MULT168
    case 0xE652: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:177 TAX
    case 0xE656: c.execute<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:178 LDA WINDOW_STATS + window_stats::width,X
    case 0xE657: c.execute<0xBD>(0x00865A, 3); return true;
    // src/text/close_window.asm:183 TAX
    case 0xE65A: c.execute<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:184 STX @VIRTUAL02
    case 0xE65B: c.execute<0x86>(0x000002, 2); return true;
    // src/text/close_window.asm:186 INC @VIRTUAL02
    case 0xE65D: c.execute<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:187 INC @VIRTUAL02
    case 0xE65F: c.execute<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:193 LDA @LOCAL02
    case 0xE661: c.execute<0xA5>(0x000012, 2); return true;
    // src/text/close_window.asm:194 CMP @VIRTUAL02
    case 0xE663: c.execute<0xC5>(0x000002, 2); return true;
    // src/text/close_window.asm:196 BNE @UNKNOWN12
    case 0xE665: c.execute<0xD0>(0x0000CF, 2); return true;
    // src/text/close_window.asm:201 STX @VIRTUAL02
    case 0xE667: c.execute<0x86>(0x000002, 2); return true;
    // src/text/close_window.asm:203 LDA #32
    case 0xE669: if (c.p & 0x20) c.execute<0xA9>(0x000020, 2); else c.execute<0xA9>(0x000020, 3); return true;
    // src/text/close_window.asm:203 LDA #32
    // Overlapping static entry reached from 0xC3E669.
    case 0xE66B: c.execute<0x00>(0x000038, 2); return true;
    // src/text/close_window.asm:204 SEC
    case 0xE66C: c.execute<0x38>(0x000000, 1); return true;
    // src/text/close_window.asm:205 SBC @VIRTUAL02
    case 0xE66D: c.execute<0xE5>(0x000002, 2); return true;
    // src/text/close_window.asm:206 DEC
    case 0xE66F: c.execute<0x3A>(0x000000, 1); return true;
    // src/text/close_window.asm:207 DEC
    case 0xE670: c.execute<0x3A>(0x000000, 1); return true;
    // src/text/close_window.asm:208 ASL
    case 0xE671: c.execute<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:214 PHA
    case 0xE672: c.execute<0x48>(0x000000, 1); return true;
    // src/text/close_window.asm:215 LDA @LOCAL00
    case 0xE673: c.execute<0xA5>(0x00000E, 2); return true;
    // src/text/close_window.asm:216 STA @VIRTUAL02
    case 0xE675: c.execute<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:217 PLY
    case 0xE677: c.execute<0x7A>(0x000000, 1); return true;
    // src/text/close_window.asm:218 STY @VIRTUAL02
    case 0xE678: c.execute<0x84>(0x000002, 2); return true;
    // src/text/close_window.asm:220 CLC
    case 0xE67A: c.execute<0x18>(0x000000, 1); return true;
    // src/text/close_window.asm:221 ADC @VIRTUAL02
    case 0xE67B: c.execute<0x65>(0x000002, 2); return true;
    // src/text/close_window.asm:231 STA @VIRTUAL02
    case 0xE67D: c.execute<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:232 STA @LOCAL00
    case 0xE67F: c.execute<0x85>(0x00000E, 2); return true;
    // src/text/close_window.asm:233 LDY @LOCAL01
    case 0xE681: c.execute<0xA4>(0x000010, 2); return true;
    // src/text/close_window.asm:234 INY
    case 0xE683: c.execute<0xC8>(0x000000, 1); return true;
    // src/text/close_window.asm:235 STY @LOCAL01
    case 0xE684: c.execute<0x84>(0x000010, 2); return true;
    // src/text/close_window.asm:238 LDA @VIRTUAL04
    case 0xE686: c.execute<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:239 LDY #.SIZEOF(window_stats)
    case 0xE688: if (c.p & 0x10) c.execute<0xA0>(0x000052, 2); else c.execute<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:239 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E688.
    case 0xE68A: c.execute<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:240 JSL MULT168
    case 0xE68B: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:241 TAX
    case 0xE68F: c.execute<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:246 STX @LOCAL02
    case 0xE690: c.execute<0x86>(0x000012, 2); return true;
    // src/text/close_window.asm:248 LDA WINDOW_STATS + window_stats::height,X
    case 0xE692: c.execute<0xBD>(0x00865C, 3); return true;
    // src/text/close_window.asm:249 STA @VIRTUAL02
    case 0xE695: c.execute<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:250 INC @VIRTUAL02
    case 0xE697: c.execute<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:251 INC @VIRTUAL02
    case 0xE699: c.execute<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:255 LDY @LOCAL01
    case 0xE69B: c.execute<0xA4>(0x000010, 2); return true;
    // src/text/close_window.asm:256 TYA
    case 0xE69D: c.execute<0x98>(0x000000, 1); return true;
    // src/text/close_window.asm:258 CMP @VIRTUAL02
    case 0xE69E: c.execute<0xC5>(0x000002, 2); return true;
    // src/text/close_window.asm:259 BNE @UNKNOWN11
    case 0xE6A0: c.execute<0xD0>(0x00008D, 2); return true;
    // src/text/close_window.asm:261 JSL UNKNOWN_C45E96
    case 0xE6A2: c.execute<0x22>(0xC45E96, 4); return true;
    // src/text/close_window.asm:262 LDX @LOCAL02
    case 0xE6A6: c.execute<0xA6>(0x000012, 2); return true;
    // src/text/close_window.asm:264 LDA WINDOW_STATS + window_stats::unknown59,X
    case 0xE6A8: c.execute<0xBD>(0x00868B, 3); return true;
    // src/text/close_window.asm:265 AND #$00FF
    case 0xE6AB: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/text/close_window.asm:265 AND #$00FF
    // Overlapping static entry reached from 0xC3E6AB.
    case 0xE6AD: c.execute<0x00>(0x0000F0, 2); return true;
    // src/text/close_window.asm:266 BEQ @UNKNOWN15
    case 0xE6AE: c.execute<0xF0>(0x00000C, 2); return true;
    // src/text/close_window.asm:267 AND #$00FF
    case 0xE6B0: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/text/close_window.asm:267 AND #$00FF
    // Overlapping static entry reached from 0xC3E6B0.
    case 0xE6B2: c.execute<0x00>(0x00003A, 2); return true;
    // src/text/close_window.asm:268 DEC
    case 0xE6B3: c.execute<0x3A>(0x000000, 1); return true;
    // src/text/close_window.asm:269 ASL
    case 0xE6B4: c.execute<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:270 TAX
    case 0xE6B5: c.execute<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:271 LDA #.LOWORD(-1)
    case 0xE6B6: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:271 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E6B6.
    case 0xE6B8: c.execute<0xFF>(0x894E9D, 4); return true;
    // src/text/close_window.asm:272 STA TITLED_WINDOWS,X
    case 0xE6B9: c.execute<0x9D>(0x00894E, 3); return true;
    // src/text/close_window.asm:274 LDA @VIRTUAL04
    case 0xE6BC: c.execute<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:275 LDY #.SIZEOF(window_stats)
    case 0xE6BE: if (c.p & 0x10) c.execute<0xA0>(0x000052, 2); else c.execute<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:275 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E6BE.
    case 0xE6C0: c.execute<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:276 JSL MULT168
    case 0xE6C1: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:277 TAX
    case 0xE6C5: c.execute<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:278 SEP #PROC_FLAGS::ACCUM8
    case 0xE6C6: c.execute<0xE2>(0x000020, 2); return true;
    // src/text/close_window.asm:279 STZ WINDOW_STATS + window_stats::unknown59,X
    case 0xE6C8: c.execute<0x9E>(0x00868B, 3); return true;
    // src/text/close_window.asm:280 LDA #1
    case 0xE6CB: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x008D01, 3); return true;
    // src/text/close_window.asm:281 STA REDRAW_ALL_WINDOWS
    case 0xE6CD: c.execute<0x8D>(0x009623, 3); return true;
    // src/text/close_window.asm:281 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC3E6CB.
    case 0xE6CE: c.execute<0x23>(0x000096, 2); return true;
    // src/text/close_window.asm:282 REP #PROC_FLAGS::ACCUM8
    case 0xE6D0: c.execute<0xC2>(0x000020, 2); return true;
    // src/text/close_window.asm:283 LDA PAGINATION_WINDOW
    case 0xE6D2: c.execute<0xAD>(0x005E7A, 3); return true;
    // src/text/close_window.asm:284 CMP @LOCAL04
    case 0xE6D5: c.execute<0xC5>(0x000016, 2); return true;
    // src/text/close_window.asm:285 BNE @UNKNOWN16
    case 0xE6D7: c.execute<0xD0>(0x000006, 2); return true;
    // src/text/close_window.asm:286 LDA #.LOWORD(-1)
    case 0xE6D9: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:286 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E6D9.
    case 0xE6DB: c.execute<0xFF>(0x5E7A8D, 4); return true;
    // src/text/close_window.asm:287 STA PAGINATION_WINDOW
    case 0xE6DC: c.execute<0x8D>(0x005E7A, 3); return true;
    // src/text/close_window.asm:290 LDA EXTRA_TICK_ON_WINDOW_CLOSE
    case 0xE6DF: c.execute<0xAD>(0x005E70, 3); return true;
    // src/text/close_window.asm:291 AND #$00FF
    case 0xE6E2: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/text/close_window.asm:291 AND #$00FF
    // Overlapping static entry reached from 0xC3E6E2.
    case 0xE6E4: c.execute<0x00>(0x0000D0, 2); return true;
    // src/text/close_window.asm:292 BNE @UNKNOWN17
    case 0xE6E5: c.execute<0xD0>(0x000008, 2); return true;
    // src/text/close_window.asm:293 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xE6E7: c.execute<0x22>(0xC3E4E0, 4); return true;
    // src/text/close_window.asm:294 JSL CLEAR_INSTANT_PRINTING
    case 0xE6EB: c.execute<0x22>(0xC3E4CA, 4); return true;
    // src/text/close_window.asm:297 SEP #PROC_FLAGS::ACCUM8
    case 0xE6EF: c.execute<0xE2>(0x000020, 2); return true;
    // src/text/close_window.asm:298 STZ VWF_INDENT_NEW_LINE
    case 0xE6F1: c.execute<0x9C>(0x005E75, 3); return true;
    // src/text/close_window.asm:303 REP #PROC_FLAGS::ACCUM8
    case 0xE6F4: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    case 0xE6F6: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE6F7: c.execute<0x6B>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE6F8: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE6FA: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE6FB: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE6FC: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E6FC.
    case 0xE6FE: c.execute<0xFF>(0xCAAD5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE6FF: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:6 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xE700: c.execute<0xAD>(0x0089CA, 3); return true;
    // src/unknown/C3/C3E6F8.asm:6 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC3E6FE.
    case 0xE702: if (c.p & 0x20) c.execute<0x89>(0x0000C9, 2); else c.execute<0x89>(0x00FFC9, 3); return true;
    // src/unknown/C3/C3E6F8.asm:7 CMP #$FFFF
    case 0xE703: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E6F8.asm:7 CMP #$FFFF
    // Overlapping static entry reached from 0xC3E702.
    case 0xE704: c.execute<0xFF>(0x51F0FF, 4); return true;
    // src/unknown/C3/C3E6F8.asm:7 CMP #$FFFF
    // Overlapping static entry reached from 0xC3E703.
    case 0xE705: c.execute<0xFF>(0x2251F0, 4); return true;
    // src/unknown/C3/C3E6F8.asm:8 BEQ @UNKNOWN2
    case 0xE706: c.execute<0xF0>(0x000051, 2); return true;
    // src/unknown/C3/C3E6F8.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xE708: c.execute<0x22>(0xC08756, 4); return true;
    // src/unknown/C3/C3E6F8.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC3E705.
    case 0xE709: c.execute<0x56>(0x000087, 2); return true;
    // src/unknown/C3/C3E6F8.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC3E709.
    case 0xE70B: if (c.p & 0x10) c.execute<0xC0>(0x0000AD, 2); else c.execute<0xC0>(0x00CAAD, 3); return true;
    // src/unknown/C3/C3E6F8.asm:10 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xE70C: c.execute<0xAD>(0x0089CA, 3); return true;
    // src/unknown/C3/C3E6F8.asm:10 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC3E70B.
    case 0xE70D: c.execute<0xCA>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:10 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC3E70B.
    case 0xE70E: if (c.p & 0x20) c.execute<0x89>(0x000085, 2); else c.execute<0x89>(0x000485, 3); return true;
    // include/macros.asm:539 STA scratch
    case 0xE70F: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:539 STA scratch
    // Overlapping static entry reached from 0xC3E70E.
    case 0xE710: c.execute<0x04>(0x00000A, 2); return true;
    // include/macros.asm:540 ASL
    case 0xE711: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    case 0xE712: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    case 0xE714: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    case 0xE715: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E6F8.asm:12 STA @VIRTUAL02
    case 0xE717: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3E6F8.asm:13 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xE719: c.execute<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C3/C3E6F8.asm:14 AND #$00FF
    case 0xE71C: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E6F8.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC3E71C.
    case 0xE71E: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:539 STA scratch
    case 0xE71F: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    case 0xE721: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    case 0xE722: c.execute<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    case 0xE724: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    case 0xE725: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E6F8.asm:16 PHA
    case 0xE727: c.execute<0x48>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:17 ASL
    case 0xE728: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:18 PLA
    case 0xE729: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:19 ROR
    case 0xE72A: c.execute<0x6A>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:20 STA @VIRTUAL04
    case 0xE72B: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E6F8.asm:21 LDA #$0010
    case 0xE72D: if (c.p & 0x20) c.execute<0xA9>(0x000010, 2); else c.execute<0xA9>(0x000010, 3); return true;
    // src/unknown/C3/C3E6F8.asm:21 LDA #$0010
    // Overlapping static entry reached from 0xC3E72D.
    case 0xE72F: c.execute<0x00>(0x000038, 2); return true;
    // src/unknown/C3/C3E6F8.asm:22 SEC
    case 0xE730: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:23 SBC @VIRTUAL04
    case 0xE731: c.execute<0xE5>(0x000004, 2); return true;
    // src/unknown/C3/C3E6F8.asm:24 CLC
    case 0xE733: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:25 ADC @VIRTUAL02
    case 0xE734: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3E6F8.asm:26 ASL
    case 0xE736: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:27 CLC
    case 0xE737: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:28 ADC #.LOWORD(BG2_BUFFER) + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2
    case 0xE738: if (c.p & 0x20) c.execute<0x69>(0x00007E, 2); else c.execute<0x69>(0x00827E, 3); return true;
    // src/unknown/C3/C3E6F8.asm:28 ADC #.LOWORD(BG2_BUFFER) + (ACTIVE_HPPP_WINDOW_Y_OFFSET * 32) * 2
    // Overlapping static entry reached from 0xC3E738.
    case 0xE73A: c.execute<0x82>(0x00A2A8, 3); return true;
    // src/unknown/C3/C3E6F8.asm:29 TAY
    case 0xE73B: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:30 LDX #$0007
    case 0xE73C: if (c.p & 0x10) c.execute<0xA2>(0x000007, 2); else c.execute<0xA2>(0x000007, 3); return true;
    // src/unknown/C3/C3E6F8.asm:30 LDX #$0007
    // Overlapping static entry reached from 0xC3E73C.
    case 0xE73E: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E6F8.asm:31 BRA @UNKNOWN1
    case 0xE73F: c.execute<0x80>(0x000009, 2); return true;
    // src/unknown/C3/C3E6F8.asm:33 LDA #$0000
    case 0xE741: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3E6F8.asm:33 LDA #$0000
    // Overlapping static entry reached from 0xC3E741.
    case 0xE743: c.execute<0x00>(0x000099, 2); return true;
    // src/unknown/C3/C3E6F8.asm:34 STA __BSS_START__,Y
    case 0xE744: c.execute<0x99>(0x000000, 3); return true;
    // src/unknown/C3/C3E6F8.asm:35 INY
    case 0xE747: c.execute<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:36 INY
    case 0xE748: c.execute<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:37 DEX
    case 0xE749: c.execute<0xCA>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:39 BNE @UNKNOWN0
    case 0xE74A: c.execute<0xD0>(0x0000F5, 2); return true;
    // src/unknown/C3/C3E6F8.asm:40 LDA #$FFFF
    case 0xE74C: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E6F8.asm:40 LDA #$FFFF
    // Overlapping static entry reached from 0xC3E74C.
    case 0xE74E: c.execute<0xFF>(0x89CA8D, 4); return true;
    // src/unknown/C3/C3E6F8.asm:41 STA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xE74F: c.execute<0x8D>(0x0089CA, 3); return true;
    // src/unknown/C3/C3E6F8.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xE752: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3E6F8.asm:43 LDA #$0001
    case 0xE754: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x008D01, 3); return true;
    // src/unknown/C3/C3E6F8.asm:44 STA REDRAW_ALL_WINDOWS
    case 0xE756: c.execute<0x8D>(0x009623, 3); return true;
    // src/unknown/C3/C3E6F8.asm:44 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC3E754.
    case 0xE757: c.execute<0x23>(0x000096, 2); return true;
    // src/unknown/C3/C3E6F8.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xE759: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3E6F8.asm:47 PLD
    case 0xE75B: c.execute<0x2B>(0x000000, 1); return true;
    // src/unknown/C3/C3E6F8.asm:48 RTL
    case 0xE75C: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE75D: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE75F: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE760: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE761: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE762: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E762.
    case 0xE764: c.execute<0xFF>(0xD0685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE765: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE766: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3E75D.asm:8 BNE @UNKNOWN1
    case 0xE767: c.execute<0xD0>(0x00001C, 2); return true;
    // src/unknown/C3/C3E75D.asm:8 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC3E764.
    case 0xE768: c.execute<0x1C>(0x0058AD, 3); return true;
    // src/unknown/C3/C3E75D.asm:9 LDA ATTACKER_ENEMY_ID
    case 0xE769: c.execute<0xAD>(0x009658, 3); return true;
    // src/unknown/C3/C3E75D.asm:9 LDA ATTACKER_ENEMY_ID
    // Overlapping static entry reached from 0xC3E768.
    case 0xE76B: c.execute<0x96>(0x0000C9, 2); return true;
    // src/unknown/C3/C3E75D.asm:10 CMP #.LOWORD(-1)
    case 0xE76C: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E75D.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E76B.
    case 0xE76D: c.execute<0xFF>(0x07D0FF, 4); return true;
    // src/unknown/C3/C3E75D.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E76C.
    case 0xE76E: c.execute<0xFF>(0xE207D0, 4); return true;
    // src/unknown/C3/C3E75D.asm:11 BNE @UNKNOWN0
    case 0xE76F: c.execute<0xD0>(0x000007, 2); return true;
    // src/unknown/C3/C3E75D.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xE771: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3E75D.asm:12 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3E76E.
    case 0xE772: c.execute<0x20>(0x00779C, 3); return true;
    // src/unknown/C3/C3E75D.asm:13 STZ PRINT_ATTACKER_ARTICLE
    case 0xE773: c.execute<0x9C>(0x005E77, 3); return true;
    // src/unknown/C3/C3E75D.asm:13 STZ PRINT_ATTACKER_ARTICLE
    // Overlapping static entry reached from 0xC3E772.
    case 0xE775: c.execute<0x5E>(0x006780, 3); return true;
    // src/unknown/C3/C3E75D.asm:14 BRA @RETURN
    case 0xE776: c.execute<0x80>(0x000067, 2); return true;
    // src/unknown/C3/C3E75D.asm:17 LDA PRINT_ATTACKER_ARTICLE
    case 0xE778: c.execute<0xAD>(0x005E77, 3); return true;
    // src/unknown/C3/C3E75D.asm:18 AND #$00FF
    case 0xE77B: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E75D.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC3E77B.
    case 0xE77D: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3E75D.asm:19 BNE @RETURN
    case 0xE77E: c.execute<0xD0>(0x00005F, 2); return true;
    // src/unknown/C3/C3E75D.asm:20 LDA ATTACKER_ENEMY_ID
    case 0xE780: c.execute<0xAD>(0x009658, 3); return true;
    // src/unknown/C3/C3E75D.asm:21 BRA @UNKNOWN3
    case 0xE783: c.execute<0x80>(0x00001A, 2); return true;
    // src/unknown/C3/C3E75D.asm:24 LDA TARGET_ENEMY_ID
    case 0xE785: c.execute<0xAD>(0x00965A, 3); return true;
    // src/unknown/C3/C3E75D.asm:25 CMP #.LOWORD(-1)
    case 0xE788: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E75D.asm:25 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E788.
    case 0xE78A: c.execute<0xFF>(0xE207D0, 4); return true;
    // src/unknown/C3/C3E75D.asm:26 BNE @UNKNOWN2
    case 0xE78B: c.execute<0xD0>(0x000007, 2); return true;
    // src/unknown/C3/C3E75D.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xE78D: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3E75D.asm:27 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3E78A.
    case 0xE78E: c.execute<0x20>(0x00789C, 3); return true;
    // src/unknown/C3/C3E75D.asm:28 STZ PRINT_TARGET_ARTICLE
    case 0xE78F: c.execute<0x9C>(0x005E78, 3); return true;
    // src/unknown/C3/C3E75D.asm:28 STZ PRINT_TARGET_ARTICLE
    // Overlapping static entry reached from 0xC3E78E.
    case 0xE791: c.execute<0x5E>(0x004B80, 3); return true;
    // src/unknown/C3/C3E75D.asm:29 BRA @RETURN
    case 0xE792: c.execute<0x80>(0x00004B, 2); return true;
    // src/unknown/C3/C3E75D.asm:32 LDA PRINT_TARGET_ARTICLE
    case 0xE794: c.execute<0xAD>(0x005E78, 3); return true;
    // src/unknown/C3/C3E75D.asm:33 AND #$00FF
    case 0xE797: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E75D.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC3E797.
    case 0xE799: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3E75D.asm:34 BNE @RETURN
    case 0xE79A: c.execute<0xD0>(0x000043, 2); return true;
    // src/unknown/C3/C3E75D.asm:35 LDA TARGET_ENEMY_ID
    case 0xE79C: c.execute<0xAD>(0x00965A, 3); return true;
    // include/macros.asm:729 LDY #amount
    case 0xE79F: if (c.p & 0x10) c.execute<0xA0>(0x00005E, 2); else c.execute<0xA0>(0x00005E, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3E79F.
    case 0xE7A1: c.execute<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    case 0xE7A2: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E75D.asm:39 TAX
    case 0xE7A6: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E75D.asm:40 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xE7A7: c.execute<0xBF>(0xD59589, 4); return true;
    // src/unknown/C3/C3E75D.asm:41 AND #$00FF
    case 0xE7AB: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E75D.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC3E7AB.
    case 0xE7AD: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E75D.asm:42 BEQ @RETURN
    case 0xE7AE: c.execute<0xF0>(0x00002F, 2); return true;
    // src/unknown/C3/C3E75D.asm:43 LDA LAST_PRINTED_CHARACTER
    case 0xE7B0: c.execute<0xAD>(0x005E76, 3); return true;
    // src/unknown/C3/C3E75D.asm:44 AND #$00FF
    case 0xE7B3: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E75D.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC3E7B3.
    case 0xE7B5: c.execute<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3E75D.asm:45 CMP #CHAR::BULLET
    case 0xE7B6: if (c.p & 0x20) c.execute<0xC9>(0x000070, 2); else c.execute<0xC9>(0x000070, 3); return true;
    // src/unknown/C3/C3E75D.asm:45 CMP #CHAR::BULLET
    // Overlapping static entry reached from 0xC3E7B6.
    case 0xE7B8: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3E75D.asm:46 BNE @LOWERCASE_THE
    case 0xE7B9: c.execute<0xD0>(0x000013, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE7BB: if (c.p & 0x20) c.execute<0xA9>(0x000098, 2); else c.execute<0xA9>(0x000998, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3E7BB.
    case 0xE7BD: if (c.p & 0x20) c.execute<0x09>(0x000085, 2); else c.execute<0x09>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    case 0xE7BE: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xC3E7BD.
    case 0xE7BF: c.execute<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE7C0: if (c.p & 0x20) c.execute<0xA9>(0x0000C2, 2); else c.execute<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3E7C0.
    case 0xE7C2: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE7C3: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3E75D.asm:48 LDA #4
    case 0xE7C5: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/C3/C3E75D.asm:48 LDA #4
    // Overlapping static entry reached from 0xC3E7C5.
    case 0xE7C7: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3E75D.asm:49 JSL UNKNOWN_C447FB
    case 0xE7C8: c.execute<0x22>(0xC447FB, 4); return true;
    // src/unknown/C3/C3E75D.asm:50 BRA @RETURN
    case 0xE7CC: c.execute<0x80>(0x000011, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xE7CE: if (c.p & 0x20) c.execute<0xA9>(0x00009C, 2); else c.execute<0xA9>(0x00099C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3E7CE.
    case 0xE7D0: if (c.p & 0x20) c.execute<0x09>(0x000085, 2); else c.execute<0x09>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    case 0xE7D1: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xC3E7D0.
    case 0xE7D2: c.execute<0x0E>(0x00C2A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xE7D3: if (c.p & 0x20) c.execute<0xA9>(0x0000C2, 2); else c.execute<0xA9>(0x0000C2, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3E7D3.
    case 0xE7D5: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xE7D6: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3E75D.asm:53 LDA #4
    case 0xE7D8: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/C3/C3E75D.asm:53 LDA #4
    // Overlapping static entry reached from 0xC3E7D8.
    case 0xE7DA: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3E75D.asm:54 JSL UNKNOWN_C447FB
    case 0xE7DB: c.execute<0x22>(0xC447FB, 4); return true;
    // src/unknown/C3/C3E75D.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xE7DF: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    case 0xE7E1: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE7E2: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE7E3: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE7E5: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE7E6: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE7E7: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE7E8: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E7E8.
    case 0xE7EA: c.execute<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE7EB: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE7EC: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    case 0xE7ED: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E7EA.
    case 0xE7EE: c.execute<0xFF>(0x5AF0FF, 4); return true;
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E7ED.
    case 0xE7EF: c.execute<0xFF>(0x0A5AF0, 4); return true;
    // src/unknown/C3/C3E7E3.asm:15 BEQ @UNKNOWN2
    case 0xE7F0: c.execute<0xF0>(0x00005A, 2); return true;
    // src/unknown/C3/C3E7E3.asm:16 ASL
    case 0xE7F2: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:17 TAX
    case 0xE7F3: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xE7F4: c.execute<0xBD>(0x0088E4, 3); return true;
    // src/unknown/C3/C3E7E3.asm:19 LDY #.SIZEOF(window_stats)
    case 0xE7F7: if (c.p & 0x10) c.execute<0xA0>(0x000052, 2); else c.execute<0xA0>(0x000052, 3); return true;
    // src/unknown/C3/C3E7E3.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E7F7.
    case 0xE7F9: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3E7E3.asm:20 JSL MULT168
    case 0xE7FA: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E7E3.asm:21 CLC
    case 0xE7FE: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:22 ADC #.LOWORD(WINDOW_STATS)
    case 0xE7FF: if (c.p & 0x20) c.execute<0x69>(0x000050, 2); else c.execute<0x69>(0x008650, 3); return true;
    // src/unknown/C3/C3E7E3.asm:22 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC3E7FF.
    case 0xE801: c.execute<0x86>(0x0000A8, 2); return true;
    // src/unknown/C3/C3E7E3.asm:23 TAY
    case 0xE802: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:25 STY @LOCAL00
    case 0xE803: c.execute<0x84>(0x00000E, 2); return true;
    // src/unknown/C3/C3E7E3.asm:27 LDA a:window_stats::current_option,Y
    case 0xE805: c.execute<0xB9>(0x00002B, 3); return true;
    // src/unknown/C3/C3E7E3.asm:28 CMP #.LOWORD(-1)
    case 0xE808: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E7E3.asm:28 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E808.
    case 0xE80A: c.execute<0xFF>(0xA03FF0, 4); return true;
    // src/unknown/C3/C3E7E3.asm:29 BEQ @UNKNOWN2
    case 0xE80B: c.execute<0xF0>(0x00003F, 2); return true;
    // include/macros.asm:729 LDY #amount
    case 0xE80D: if (c.p & 0x10) c.execute<0xA0>(0x00002D, 2); else c.execute<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3E80A.
    case 0xE80E: c.execute<0x2D>(0x002200, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3E80D.
    case 0xE80F: c.execute<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    case 0xE810: c.execute<0x22>(0xC08FF7, 4); return true;
    // include/macros.asm:730 JSL MULT168
    // Overlapping static entry reached from 0xC3E80E.
    case 0xE811: c.execute<0xF7>(0x00008F, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Overlapping static entry reached from 0xC3E811.
    case 0xE813: if (c.p & 0x10) c.execute<0xC0>(0x000018, 2); else c.execute<0xC0>(0x006918, 3); return true;
    // src/unknown/C3/C3E7E3.asm:31 CLC
    case 0xE814: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    case 0xE815: if (c.p & 0x20) c.execute<0x69>(0x0000D4, 2); else c.execute<0x69>(0x0089D4, 3); return true;
    // src/unknown/C3/C3E7E3.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC3E813.
    case 0xE816: c.execute<0xD4>(0x000089, 2); return true;
    // src/unknown/C3/C3E7E3.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC3E815.
    case 0xE817: if (c.p & 0x20) c.execute<0x89>(0x0000AA, 2); else c.execute<0x89>(0x00A9AA, 3); return true;
    // src/unknown/C3/C3E7E3.asm:33 TAX
    case 0xE818: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    case 0xE819: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    // Overlapping static entry reached from 0xC3E817.
    case 0xE81A: c.execute<0x00>(0x000000, 2); return true;
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    // Overlapping static entry reached from 0xC3E819.
    case 0xE81B: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3E7E3.asm:36 STA a:menu_option::unknown0,X
    case 0xE81C: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3E7E3.asm:37 LDA a:menu_option::next,X
    case 0xE81F: c.execute<0xBD>(0x000002, 3); return true;
    // src/unknown/C3/C3E7E3.asm:38 CMP #.LOWORD(-1)
    case 0xE822: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E7E3.asm:38 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E822.
    case 0xE824: c.execute<0xFF>(0xA00EF0, 4); return true;
    // src/unknown/C3/C3E7E3.asm:39 BEQ @UNKNOWN1
    case 0xE825: c.execute<0xF0>(0x00000E, 2); return true;
    // include/macros.asm:729 LDY #amount
    case 0xE827: if (c.p & 0x10) c.execute<0xA0>(0x00002D, 2); else c.execute<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3E824.
    case 0xE828: c.execute<0x2D>(0x002200, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3E827.
    case 0xE829: c.execute<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    case 0xE82A: c.execute<0x22>(0xC08FF7, 4); return true;
    // include/macros.asm:730 JSL MULT168
    // Overlapping static entry reached from 0xC3E828.
    case 0xE82B: c.execute<0xF7>(0x00008F, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Overlapping static entry reached from 0xC3E82B.
    case 0xE82D: if (c.p & 0x10) c.execute<0xC0>(0x000018, 2); else c.execute<0xC0>(0x006918, 3); return true;
    // src/unknown/C3/C3E7E3.asm:41 CLC
    case 0xE82E: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:42 ADC #.LOWORD(MENU_OPTIONS)
    case 0xE82F: if (c.p & 0x20) c.execute<0x69>(0x0000D4, 2); else c.execute<0x69>(0x0089D4, 3); return true;
    // src/unknown/C3/C3E7E3.asm:42 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC3E82D.
    case 0xE830: c.execute<0xD4>(0x000089, 2); return true;
    // src/unknown/C3/C3E7E3.asm:42 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC3E82F.
    case 0xE831: if (c.p & 0x20) c.execute<0x89>(0x0000AA, 2); else c.execute<0x89>(0x0080AA, 3); return true;
    // src/unknown/C3/C3E7E3.asm:43 TAX
    case 0xE832: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E7E3.asm:44 BRA @UNKNOWN0
    case 0xE833: c.execute<0x80>(0x0000E4, 2); return true;
    // src/unknown/C3/C3E7E3.asm:44 BRA @UNKNOWN0
    // Overlapping static entry reached from 0xC3E831.
    case 0xE834: c.execute<0xE4>(0x0000A9, 2); return true;
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    case 0xE835: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E834.
    case 0xE836: c.execute<0xFF>(0x0EA4FF, 4); return true;
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E835.
    case 0xE837: c.execute<0xFF>(0x990EA4, 4); return true;
    // src/unknown/C3/C3E7E3.asm:48 LDY @LOCAL00
    case 0xE838: c.execute<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E7E3.asm:50 STA a:window_stats::selected_option,Y
    case 0xE83A: c.execute<0x99>(0x00002F, 3); return true;
    // src/unknown/C3/C3E7E3.asm:50 STA a:window_stats::selected_option,Y
    // Overlapping static entry reached from 0xC3E837.
    case 0xE83B: c.execute<0x2F>(0x2D9900, 4); return true;
    // src/unknown/C3/C3E7E3.asm:51 STA a:window_stats::option_count,Y
    case 0xE83D: c.execute<0x99>(0x00002D, 3); return true;
    // src/unknown/C3/C3E7E3.asm:51 STA a:window_stats::option_count,Y
    // Overlapping static entry reached from 0xC3E83B.
    case 0xE83F: c.execute<0x00>(0x000099, 2); return true;
    // src/unknown/C3/C3E7E3.asm:52 STA a:window_stats::current_option,Y
    case 0xE840: c.execute<0x99>(0x00002B, 3); return true;
    // src/unknown/C3/C3E7E3.asm:53 LDA #1
    case 0xE843: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E7E3.asm:53 LDA #1
    // Overlapping static entry reached from 0xC3E843.
    case 0xE845: c.execute<0x00>(0x000099, 2); return true;
    // src/unknown/C3/C3E7E3.asm:54 STA a:window_stats::unknown49,Y
    case 0xE846: c.execute<0x99>(0x000031, 3); return true;
    // src/unknown/C3/C3E7E3.asm:55 STA a:window_stats::menu_page_number,Y
    case 0xE849: c.execute<0x99>(0x000033, 3); return true;
    // include/macros.asm:25 PLD
    case 0xE84C: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xE84D: c.execute<0x6B>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE977: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE979: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE97A: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE97B: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE97C: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E97C.
    case 0xE97E: c.execute<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE97F: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE980: c.execute<0x68>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:8 TXY
    case 0xE981: c.execute<0x9B>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:9 TAX
    case 0xE982: c.execute<0xAA>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:10 TYA
    case 0xE983: c.execute<0x98>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:11 DEC
    case 0xE984: c.execute<0x3A>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:12 STA @VIRTUAL02
    case 0xE985: c.execute<0x85>(0x000002, 2); return true;
    // src/misc/get_character_item.asm:13 TXA
    case 0xE987: c.execute<0x8A>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:14 DEC
    case 0xE988: c.execute<0x3A>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:15 LDY #.SIZEOF(char_struct)
    case 0xE989: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // src/misc/get_character_item.asm:15 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E989.
    case 0xE98B: c.execute<0x00>(0x000022, 2); return true;
    // src/misc/get_character_item.asm:16 JSL MULT168
    case 0xE98C: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/misc/get_character_item.asm:17 CLC
    case 0xE990: c.execute<0x18>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xE991: if (c.p & 0x20) c.execute<0x69>(0x0000F1, 2); else c.execute<0x69>(0x0099F1, 3); return true;
    // src/misc/get_character_item.asm:18 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3E991.
    case 0xE993: c.execute<0x99>(0x006518, 3); return true;
    // src/misc/get_character_item.asm:19 CLC
    case 0xE994: c.execute<0x18>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:20 ADC @VIRTUAL02
    case 0xE995: c.execute<0x65>(0x000002, 2); return true;
    // src/misc/get_character_item.asm:20 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC3E993.
    case 0xE996: c.execute<0x02>(0x0000AA, 2); return true;
    // src/misc/get_character_item.asm:21 TAX
    case 0xE997: c.execute<0xAA>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:22 LDA __BSS_START__,X
    case 0xE998: c.execute<0xBD>(0x000000, 3); return true;
    // src/misc/get_character_item.asm:23 AND #$00FF
    case 0xE99B: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/misc/get_character_item.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC3E99B.
    case 0xE99D: c.execute<0x00>(0x00002B, 2); return true;
    // src/misc/get_character_item.asm:24 PLD
    case 0xE99E: c.execute<0x2B>(0x000000, 1); return true;
    // src/misc/get_character_item.asm:25 RTL
    case 0xE99F: c.execute<0x6B>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE9A0: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE9A2: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE9A3: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE9A4: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE9A5: if (c.p & 0x20) c.execute<0x69>(0x0000F2, 2); else c.execute<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E9A5.
    case 0xE9A7: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE9A8: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xE9A9: c.execute<0x68>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:8 STX @VIRTUAL02
    case 0xE9AA: c.execute<0x86>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E9A7.
    case 0xE9AB: c.execute<0x02>(0x0000AA, 2); return true;
    // src/misc/check_item_equipped.asm:9 TAX
    case 0xE9AC: c.execute<0xAA>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:10 DEC
    case 0xE9AD: c.execute<0x3A>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:11 LDY #.SIZEOF(char_struct)
    case 0xE9AE: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // src/misc/check_item_equipped.asm:11 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3E9AE.
    case 0xE9B0: c.execute<0x00>(0x000022, 2); return true;
    // src/misc/check_item_equipped.asm:12 JSL MULT168
    case 0xE9B1: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/misc/check_item_equipped.asm:13 TAX
    case 0xE9B5: c.execute<0xAA>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:14 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xE9B6: c.execute<0xBD>(0x0099FF, 3); return true;
    // src/misc/check_item_equipped.asm:15 AND #$00FF
    case 0xE9B9: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC3E9B9.
    case 0xE9BB: c.execute<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:16 CMP @VIRTUAL02
    case 0xE9BC: c.execute<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:17 BNE @UNKNOWN0
    case 0xE9BE: c.execute<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:18 LDA #$0001
    case 0xE9C0: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:18 LDA #$0001
    // Overlapping static entry reached from 0xC3E9C0.
    case 0xE9C2: c.execute<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:19 BRA @UNKNOWN4
    case 0xE9C3: c.execute<0x80>(0x000030, 2); return true;
    // src/misc/check_item_equipped.asm:21 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xE9C5: c.execute<0xBD>(0x009A00, 3); return true;
    // src/misc/check_item_equipped.asm:22 AND #$00FF
    case 0xE9C8: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC3E9C8.
    case 0xE9CA: c.execute<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:23 CMP @VIRTUAL02
    case 0xE9CB: c.execute<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:24 BNE @UNKNOWN1
    case 0xE9CD: c.execute<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:25 LDA #$0001
    case 0xE9CF: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:25 LDA #$0001
    // Overlapping static entry reached from 0xC3E9CF.
    case 0xE9D1: c.execute<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:26 BRA @UNKNOWN4
    case 0xE9D2: c.execute<0x80>(0x000021, 2); return true;
    // src/misc/check_item_equipped.asm:28 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xE9D4: c.execute<0xBD>(0x009A01, 3); return true;
    // src/misc/check_item_equipped.asm:29 AND #$00FF
    case 0xE9D7: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC3E9D7.
    case 0xE9D9: c.execute<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:30 CMP @VIRTUAL02
    case 0xE9DA: c.execute<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:31 BNE @UNKNOWN2
    case 0xE9DC: c.execute<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:32 LDA #$0001
    case 0xE9DE: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:32 LDA #$0001
    // Overlapping static entry reached from 0xC3E9DE.
    case 0xE9E0: c.execute<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:33 BRA @UNKNOWN4
    case 0xE9E1: c.execute<0x80>(0x000012, 2); return true;
    // src/misc/check_item_equipped.asm:35 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xE9E3: c.execute<0xBD>(0x009A02, 3); return true;
    // src/misc/check_item_equipped.asm:36 AND #$00FF
    case 0xE9E6: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/misc/check_item_equipped.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC3E9E6.
    case 0xE9E8: c.execute<0x00>(0x0000C5, 2); return true;
    // src/misc/check_item_equipped.asm:37 CMP @VIRTUAL02
    case 0xE9E9: c.execute<0xC5>(0x000002, 2); return true;
    // src/misc/check_item_equipped.asm:38 BNE @UNKNOWN3
    case 0xE9EB: c.execute<0xD0>(0x000005, 2); return true;
    // src/misc/check_item_equipped.asm:39 LDA #$0001
    case 0xE9ED: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/misc/check_item_equipped.asm:39 LDA #$0001
    // Overlapping static entry reached from 0xC3E9ED.
    case 0xE9EF: c.execute<0x00>(0x000080, 2); return true;
    // src/misc/check_item_equipped.asm:40 BRA @UNKNOWN4
    case 0xE9F0: c.execute<0x80>(0x000003, 2); return true;
    // src/misc/check_item_equipped.asm:42 LDA #$0000
    case 0xE9F2: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/misc/check_item_equipped.asm:42 LDA #$0000
    // Overlapping static entry reached from 0xC3E9F2.
    case 0xE9F4: c.execute<0x00>(0x00002B, 2); return true;
    // src/misc/check_item_equipped.asm:44 PLD
    case 0xE9F5: c.execute<0x2B>(0x000000, 1); return true;
    // src/misc/check_item_equipped.asm:45 RTL
    case 0xE9F6: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xE9F7: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xE9F9: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xE9FA: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xE9FB: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xE9FC: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3E9FC.
    case 0xE9FE: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xE9FF: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xEA00: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:10 STX @VIRTUAL02
    case 0xEA01: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3E9FE.
    case 0xEA02: c.execute<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:11 TAX
    case 0xEA03: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:12 TXY
    case 0xEA04: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:13 DEY
    case 0xEA05: c.execute<0x88>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:14 STY @LOCAL00
    case 0xEA06: c.execute<0x84>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:15 TYA
    case 0xEA08: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    case 0xEA09: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3EA09.
    case 0xEA0B: c.execute<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    case 0xEA0C: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E9F7.asm:17 TAX
    case 0xEA10: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:18 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::WEAPON,X
    case 0xEA11: c.execute<0xBD>(0x0099FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:19 AND #$00FF
    case 0xEA14: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC3EA14.
    case 0xEA16: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:20 BEQ @UNKNOWN0
    case 0xEA17: c.execute<0xF0>(0x00001F, 2); return true;
    // src/unknown/C3/C3E9F7.asm:21 AND #$00FF
    case 0xEA19: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC3EA19.
    case 0xEA1B: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:22 DEC
    case 0xEA1C: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:23 STA @VIRTUAL04
    case 0xEA1D: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:24 TXA
    case 0xEA1F: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:25 CLC
    case 0xEA20: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:26 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xEA21: if (c.p & 0x20) c.execute<0x69>(0x0000F1, 2); else c.execute<0x69>(0x0099F1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:26 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3EA21.
    case 0xEA23: c.execute<0x99>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:27 CLC
    case 0xEA24: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:28 ADC @VIRTUAL04
    case 0xEA25: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:28 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3EA23.
    case 0xEA26: c.execute<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:29 TAX
    case 0xEA27: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:30 LDA __BSS_START__,X
    case 0xEA28: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:31 AND #$00FF
    case 0xEA2B: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC3EA2B.
    case 0xEA2D: c.execute<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:32 CMP @VIRTUAL02
    case 0xEA2E: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:33 BNE @UNKNOWN0
    case 0xEA30: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/C3/C3E9F7.asm:34 LDA #1
    case 0xEA32: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:34 LDA #1
    // Overlapping static entry reached from 0xC3EA32.
    case 0xEA34: c.execute<0x00>(0x00004C, 2); return true;
    // src/unknown/C3/C3E9F7.asm:35 JMP @UNKNOWN4
    case 0xEA35: c.execute<0x4C>(0x00EACE, 3); return true;
    // src/unknown/C3/C3E9F7.asm:37 LDY @LOCAL00
    case 0xEA38: c.execute<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:38 TYA
    case 0xEA3A: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    case 0xEA3B: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3EA3B.
    case 0xEA3D: c.execute<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    case 0xEA3E: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E9F7.asm:40 TAX
    case 0xEA42: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:41 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::BODY,X
    case 0xEA43: c.execute<0xBD>(0x009A00, 3); return true;
    // src/unknown/C3/C3E9F7.asm:42 AND #$00FF
    case 0xEA46: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC3EA46.
    case 0xEA48: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:43 BEQ @UNKNOWN1
    case 0xEA49: c.execute<0xF0>(0x00001E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:44 AND #$00FF
    case 0xEA4B: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC3EA4B.
    case 0xEA4D: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:45 DEC
    case 0xEA4E: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:46 STA @VIRTUAL04
    case 0xEA4F: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:47 TXA
    case 0xEA51: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:48 CLC
    case 0xEA52: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:49 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xEA53: if (c.p & 0x20) c.execute<0x69>(0x0000F1, 2); else c.execute<0x69>(0x0099F1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:49 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3EA53.
    case 0xEA55: c.execute<0x99>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:50 CLC
    case 0xEA56: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:51 ADC @VIRTUAL04
    case 0xEA57: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:51 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3EA55.
    case 0xEA58: c.execute<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:52 TAX
    case 0xEA59: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:53 LDA __BSS_START__,X
    case 0xEA5A: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:54 AND #$00FF
    case 0xEA5D: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC3EA5D.
    case 0xEA5F: c.execute<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:55 CMP @VIRTUAL02
    case 0xEA60: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:56 BNE @UNKNOWN1
    case 0xEA62: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3E9F7.asm:57 LDA #1
    case 0xEA64: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:57 LDA #1
    // Overlapping static entry reached from 0xC3EA64.
    case 0xEA66: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E9F7.asm:58 BRA @UNKNOWN4
    case 0xEA67: c.execute<0x80>(0x000065, 2); return true;
    // src/unknown/C3/C3E9F7.asm:60 LDY @LOCAL00
    case 0xEA69: c.execute<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:61 TYA
    case 0xEA6B: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    case 0xEA6C: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3EA6C.
    case 0xEA6E: c.execute<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    case 0xEA6F: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E9F7.asm:63 TAX
    case 0xEA73: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:64 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::ARMS,X
    case 0xEA74: c.execute<0xBD>(0x009A01, 3); return true;
    // src/unknown/C3/C3E9F7.asm:65 AND #$00FF
    case 0xEA77: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC3EA77.
    case 0xEA79: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:66 BEQ @UNKNOWN2
    case 0xEA7A: c.execute<0xF0>(0x00001E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:67 AND #$00FF
    case 0xEA7C: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC3EA7C.
    case 0xEA7E: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:68 DEC
    case 0xEA7F: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:69 STA @VIRTUAL04
    case 0xEA80: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:70 TXA
    case 0xEA82: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:71 CLC
    case 0xEA83: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:72 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xEA84: if (c.p & 0x20) c.execute<0x69>(0x0000F1, 2); else c.execute<0x69>(0x0099F1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:72 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3EA84.
    case 0xEA86: c.execute<0x99>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:73 CLC
    case 0xEA87: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:74 ADC @VIRTUAL04
    case 0xEA88: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:74 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3EA86.
    case 0xEA89: c.execute<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:75 TAX
    case 0xEA8A: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:76 LDA __BSS_START__,X
    case 0xEA8B: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:77 AND #$00FF
    case 0xEA8E: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC3EA8E.
    case 0xEA90: c.execute<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:78 CMP @VIRTUAL02
    case 0xEA91: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:79 BNE @UNKNOWN2
    case 0xEA93: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3E9F7.asm:80 LDA #1
    case 0xEA95: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:80 LDA #1
    // Overlapping static entry reached from 0xC3EA95.
    case 0xEA97: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E9F7.asm:81 BRA @UNKNOWN4
    case 0xEA98: c.execute<0x80>(0x000034, 2); return true;
    // src/unknown/C3/C3E9F7.asm:83 LDY @LOCAL00
    case 0xEA9A: c.execute<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:84 TYA
    case 0xEA9C: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    case 0xEA9D: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3EA9D.
    case 0xEA9F: c.execute<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    case 0xEAA0: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3E9F7.asm:86 TAX
    case 0xEAA4: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:87 LDA PARTY_CHARACTERS + char_struct::equipment + EQUIPMENT_SLOT::OTHER,X
    case 0xEAA5: c.execute<0xBD>(0x009A02, 3); return true;
    // src/unknown/C3/C3E9F7.asm:88 AND #$00FF
    case 0xEAA8: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC3EAA8.
    case 0xEAAA: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3E9F7.asm:89 BEQ @UNKNOWN3
    case 0xEAAB: c.execute<0xF0>(0x00001E, 2); return true;
    // src/unknown/C3/C3E9F7.asm:90 AND #$00FF
    case 0xEAAD: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC3EAAD.
    case 0xEAAF: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3E9F7.asm:91 DEC
    case 0xEAB0: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:92 STA @VIRTUAL04
    case 0xEAB1: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:93 TXA
    case 0xEAB3: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:94 CLC
    case 0xEAB4: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:95 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xEAB5: if (c.p & 0x20) c.execute<0x69>(0x0000F1, 2); else c.execute<0x69>(0x0099F1, 3); return true;
    // src/unknown/C3/C3E9F7.asm:95 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC3EAB5.
    case 0xEAB7: c.execute<0x99>(0x006518, 3); return true;
    // src/unknown/C3/C3E9F7.asm:96 CLC
    case 0xEAB8: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:97 ADC @VIRTUAL04
    case 0xEAB9: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3E9F7.asm:97 ADC @VIRTUAL04
    // Overlapping static entry reached from 0xC3EAB7.
    case 0xEABA: c.execute<0x04>(0x0000AA, 2); return true;
    // src/unknown/C3/C3E9F7.asm:98 TAX
    case 0xEABB: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3E9F7.asm:99 LDA __BSS_START__,X
    case 0xEABC: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:100 AND #$00FF
    case 0xEABF: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3E9F7.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC3EABF.
    case 0xEAC1: c.execute<0x00>(0x0000C5, 2); return true;
    // src/unknown/C3/C3E9F7.asm:101 CMP @VIRTUAL02
    case 0xEAC2: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3E9F7.asm:102 BNE @UNKNOWN3
    case 0xEAC4: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3E9F7.asm:103 LDA #1
    case 0xEAC6: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3E9F7.asm:103 LDA #1
    // Overlapping static entry reached from 0xC3EAC6.
    case 0xEAC8: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3E9F7.asm:104 BRA @UNKNOWN4
    case 0xEAC9: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3E9F7.asm:106 LDA #0
    case 0xEACB: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3E9F7.asm:106 LDA #0
    // Overlapping static entry reached from 0xC3EACB.
    case 0xEACD: c.execute<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xEACE: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEACF: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEAD0: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xEAD2: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xEAD3: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xEAD4: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xEAD5: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3EAD5.
    case 0xEAD7: c.execute<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xEAD8: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xEAD9: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xEADA: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:8 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3EAD7.
    case 0xEADB: c.execute<0x20>(0x000085, 3); return true;
    // src/unknown/C3/C3EAD0.asm:9 STA @VIRTUAL00
    case 0xEADC: c.execute<0x85>(0x000000, 2); return true;
    // src/unknown/C3/C3EAD0.asm:10 LDX #0
    case 0xEADE: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/C3/C3EAD0.asm:10 LDX #0
    // Overlapping static entry reached from 0xC3EADE.
    case 0xEAE0: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/C3/C3EAD0.asm:11 STX @LOCAL00
    case 0xEAE1: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:12 BRA @UNKNOWN2
    case 0xEAE3: c.execute<0x80>(0x000022, 2); return true;
    // src/unknown/C3/C3EAD0.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xEAE5: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:15 CMP @VIRTUAL00
    case 0xEAE7: c.execute<0xC5>(0x000000, 2); return true;
    // src/unknown/C3/C3EAD0.asm:16 BNE @UNKNOWN1
    case 0xEAE9: c.execute<0xD0>(0x000017, 2); return true;
    // src/unknown/C3/C3EAD0.asm:17 LDX @LOCAL00
    case 0xEAEB: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xEAED: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:19 TXA
    case 0xEAEF: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:20 JSL IS_VALID_ITEM_TRANSFORMATION
    case 0xEAF0: c.execute<0x22>(0xC48ECE, 4); return true;
    // src/unknown/C3/C3EAD0.asm:21 CMP #0
    case 0xEAF4: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/C3/C3EAD0.asm:21 CMP #0
    // Overlapping static entry reached from 0xC3EAF4.
    case 0xEAF6: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EAD0.asm:22 BNE @UNKNOWN3
    case 0xEAF7: c.execute<0xD0>(0x000021, 2); return true;
    // src/unknown/C3/C3EAD0.asm:23 LDX @LOCAL00
    case 0xEAF9: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:24 TXA
    case 0xEAFB: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:25 JSL INITIALIZE_ITEM_TRANSFORMATION
    case 0xEAFC: c.execute<0x22>(0xC48EEB, 4); return true;
    // src/unknown/C3/C3EAD0.asm:26 BRA @UNKNOWN3
    case 0xEB00: c.execute<0x80>(0x000018, 2); return true;
    // src/unknown/C3/C3EAD0.asm:28 LDX @LOCAL00
    case 0xEB02: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:29 INX
    case 0xEB04: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:30 STX @LOCAL00
    case 0xEB05: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EAD0.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xEB07: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EAD0.asm:33 TXA
    case 0xEB09: c.execute<0x8A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    case 0xEB0A: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    case 0xEB0C: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    case 0xEB0D: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    case 0xEB0E: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EAD0.asm:35 TAX
    case 0xEB10: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EAD0.asm:36 LDA f:TIMED_ITEM_TRANSFORMATION_TABLE + timed_item_transformation::item,X
    case 0xEB11: c.execute<0xBF>(0xD5F4BB, 4); return true;
    // src/unknown/C3/C3EAD0.asm:37 AND #$00FF
    case 0xEB15: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EAD0.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC3EB15.
    case 0xEB17: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EAD0.asm:38 BNE @UNKNOWN0
    case 0xEB18: c.execute<0xD0>(0x0000CB, 2); return true;
    // include/macros.asm:25 PLD
    case 0xEB1A: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEB1B: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEB1C: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xEB1E: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xEB1F: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xEB20: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xEB21: if (c.p & 0x20) c.execute<0x69>(0x0000EA, 2); else c.execute<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3EB21.
    case 0xEB23: c.execute<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xEB24: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xEB25: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xEB26: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:11 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3EB23.
    case 0xEB27: c.execute<0x20>(0x000085, 3); return true;
    // src/unknown/C3/C3EB1C.asm:12 STA @VIRTUAL00
    case 0xEB28: c.execute<0x85>(0x000000, 2); return true;
    // src/unknown/C3/C3EB1C.asm:13 LDY #0
    case 0xEB2A: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/C3/C3EB1C.asm:13 LDY #0
    // Overlapping static entry reached from 0xC3EB2A.
    case 0xEB2C: c.execute<0x00>(0x000084, 2); return true;
    // src/unknown/C3/C3EB1C.asm:14 STY @LOCAL03
    case 0xEB2D: c.execute<0x84>(0x000014, 2); return true;
    // src/unknown/C3/C3EB1C.asm:15 BRA @UNKNOWN1
    case 0xEB2F: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3EB1C.asm:17 INY
    case 0xEB31: c.execute<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:18 STY @LOCAL03
    case 0xEB32: c.execute<0x84>(0x000014, 2); return true;
    // src/unknown/C3/C3EB1C.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xEB34: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:21 TYA
    case 0xEB36: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    case 0xEB37: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    case 0xEB39: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    case 0xEB3A: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    case 0xEB3B: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EB1C.asm:23 TAX
    case 0xEB3D: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:24 LDA f:TIMED_ITEM_TRANSFORMATION_TABLE,X
    case 0xEB3E: c.execute<0xBF>(0xD5F4BB, 4); return true;
    // src/unknown/C3/C3EB1C.asm:25 AND #$00FF
    case 0xEB42: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC3EB42.
    case 0xEB44: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EB1C.asm:26 BEQ @UNKNOWN2
    case 0xEB45: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/C3/C3EB1C.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xEB47: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:28 CMP @VIRTUAL00
    case 0xEB49: c.execute<0xC5>(0x000000, 2); return true;
    // src/unknown/C3/C3EB1C.asm:29 BNE @UNKNOWN0
    case 0xEB4B: c.execute<0xD0>(0x0000E4, 2); return true;
    // src/unknown/C3/C3EB1C.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xEB4D: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:32 TYA
    case 0xEB4F: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:33 JSL UNKNOWN_C48F98
    case 0xEB50: c.execute<0x22>(0xC48F98, 4); return true;
    // src/unknown/C3/C3EB1C.asm:34 LDX #0
    case 0xEB54: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/unknown/C3/C3EB1C.asm:34 LDX #0
    // Overlapping static entry reached from 0xC3EB54.
    case 0xEB56: c.execute<0x00>(0x000086, 2); return true;
    // src/unknown/C3/C3EB1C.asm:35 STX @LOCAL02
    case 0xEB57: c.execute<0x86>(0x000012, 2); return true;
    // src/unknown/C3/C3EB1C.asm:36 BRA @UNKNOWN10
    case 0xEB59: c.execute<0x80>(0x000060, 2); return true;
    // src/unknown/C3/C3EB1C.asm:45 LDA GAME_STATE + game_state::party_members,X
    case 0xEB5B: c.execute<0xBD>(0x00986F, 3); return true;
    // src/unknown/C3/C3EB1C.asm:47 AND #$00FF
    case 0xEB5E: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC3EB5E.
    case 0xEB60: c.execute<0x00>(0x00003A, 2); return true;
    // src/unknown/C3/C3EB1C.asm:48 DEC
    case 0xEB61: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:49 LDY #.SIZEOF(char_struct)
    case 0xEB62: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3EB1C.asm:49 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EB62.
    case 0xEB64: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EB1C.asm:50 JSL MULT168
    case 0xEB65: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EB1C.asm:51 CLC
    case 0xEB69: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:52 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xEB6A: if (c.p & 0x20) c.execute<0x69>(0x0000CE, 2); else c.execute<0x69>(0x0099CE, 3); return true;
    // src/unknown/C3/C3EB1C.asm:52 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC3EB6A.
    case 0xEB6C: c.execute<0x99>(0x000485, 3); return true;
    // src/unknown/C3/C3EB1C.asm:53 STA @VIRTUAL04
    case 0xEB6D: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3EB1C.asm:54 LDA #0
    case 0xEB6F: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3EB1C.asm:54 LDA #0
    // Overlapping static entry reached from 0xC3EB6F.
    case 0xEB71: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:55 STA @VIRTUAL02
    case 0xEB72: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:56 STA @LOCAL01
    case 0xEB74: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:57 BRA @UNKNOWN6
    case 0xEB76: c.execute<0x80>(0x000020, 2); return true;
    // src/unknown/C3/C3EB1C.asm:59 LDA @VIRTUAL00
    case 0xEB78: c.execute<0xA5>(0x000000, 2); return true;
    // src/unknown/C3/C3EB1C.asm:60 AND #$00FF
    case 0xEB7A: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC3EB7A.
    case 0xEB7C: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:61 STA @VIRTUAL02
    case 0xEB7D: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:62 LDA @LOCAL00
    case 0xEB7F: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EB1C.asm:63 CMP @VIRTUAL02
    case 0xEB81: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:64 BNE @UNKNOWN5
    case 0xEB83: c.execute<0xD0>(0x000009, 2); return true;
    // src/unknown/C3/C3EB1C.asm:65 LDY @LOCAL03
    case 0xEB85: c.execute<0xA4>(0x000014, 2); return true;
    // src/unknown/C3/C3EB1C.asm:66 TYA
    case 0xEB87: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:67 JSL INITIALIZE_ITEM_TRANSFORMATION
    case 0xEB88: c.execute<0x22>(0xC48EEB, 4); return true;
    // src/unknown/C3/C3EB1C.asm:68 BRA @UNKNOWN11
    case 0xEB8C: c.execute<0x80>(0x00003A, 2); return true;
    // src/unknown/C3/C3EB1C.asm:70 LDA @LOCAL01
    case 0xEB8E: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:71 STA @VIRTUAL02
    case 0xEB90: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:72 INC @VIRTUAL02
    case 0xEB92: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:73 LDA @VIRTUAL02
    case 0xEB94: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:74 STA @LOCAL01
    case 0xEB96: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:76 LDA #.SIZEOF(char_struct::items)
    case 0xEB98: if (c.p & 0x20) c.execute<0xA9>(0x00000E, 2); else c.execute<0xA9>(0x00000E, 3); return true;
    // src/unknown/C3/C3EB1C.asm:76 LDA #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC3EB98.
    case 0xEB9A: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3EB1C.asm:77 CLC
    case 0xEB9B: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:78 SBC @VIRTUAL02
    case 0xEB9C: c.execute<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    case 0xEB9E: c.execute<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    case 0xEBA0: c.execute<0x10>(0x000014, 2); return true;
    // include/macros.asm:809 BRA :++
    case 0xEBA2: c.execute<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    case 0xEBA4: c.execute<0x30>(0x000010, 2); return true;
    // src/unknown/C3/C3EB1C.asm:80 LDA @VIRTUAL04
    case 0xEBA6: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EB1C.asm:81 CLC
    case 0xEBA8: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:82 ADC @VIRTUAL02
    case 0xEBA9: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:83 TAX
    case 0xEBAB: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:84 LDA a:char_struct::items,X
    case 0xEBAC: c.execute<0xBD>(0x000023, 3); return true;
    // src/unknown/C3/C3EB1C.asm:85 AND #$00FF
    case 0xEBAF: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC3EBAF.
    case 0xEBB1: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:86 STA @LOCAL00
    case 0xEBB2: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EB1C.asm:87 BNE @UNKNOWN4
    case 0xEBB4: c.execute<0xD0>(0x0000C2, 2); return true;
    // src/unknown/C3/C3EB1C.asm:89 LDX @LOCAL02
    case 0xEBB6: c.execute<0xA6>(0x000012, 2); return true;
    // src/unknown/C3/C3EB1C.asm:90 INX
    case 0xEBB8: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:91 STX @LOCAL02
    case 0xEBB9: c.execute<0x86>(0x000012, 2); return true;
    // src/unknown/C3/C3EB1C.asm:93 LDA GAME_STATE + game_state::player_controlled_party_count
    case 0xEBBB: c.execute<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C3/C3EB1C.asm:94 AND #$00FF
    case 0xEBBE: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EB1C.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC3EBBE.
    case 0xEBC0: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EB1C.asm:95 STA @VIRTUAL02
    case 0xEBC1: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:96 TXA
    case 0xEBC3: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EB1C.asm:97 CMP @VIRTUAL02
    case 0xEBC4: c.execute<0xC5>(0x000002, 2); return true;
    // src/unknown/C3/C3EB1C.asm:98 BCC @UNKNOWN3
    case 0xEBC6: c.execute<0x90>(0x000093, 2); return true;
    // include/macros.asm:25 PLD
    case 0xEBC8: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEBC9: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEBCA: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xEBCC: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xEBCD: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xEBCE: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3EBCE.
    case 0xEBD0: c.execute<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xEBD1: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:7 LDY #0
    case 0xEBD2: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/unknown/C3/C3EBCA.asm:7 LDY #0
    // Overlapping static entry reached from 0xC3EBD2.
    case 0xEBD4: c.execute<0x00>(0x000084, 2); return true;
    // src/unknown/C3/C3EBCA.asm:8 STY @LOCAL00
    case 0xEBD5: c.execute<0x84>(0x00000E, 2); return true;
    // src/unknown/C3/C3EBCA.asm:9 BRA @UNKNOWN3
    case 0xEBD7: c.execute<0x80>(0x000027, 2); return true;
    // src/unknown/C3/C3EBCA.asm:11 AND #$00FF
    case 0xEBD9: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EBCA.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC3EBD9.
    case 0xEBDB: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EBCA.asm:12 TAX
    case 0xEBDC: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:13 LDA #$00FF
    case 0xEBDD: if (c.p & 0x20) c.execute<0xA9>(0x0000FF, 2); else c.execute<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EBCA.asm:13 LDA #$00FF
    // Overlapping static entry reached from 0xC3EBDD.
    case 0xEBDF: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EBCA.asm:14 JSL FIND_ITEM_IN_INVENTORY2
    case 0xEBE0: c.execute<0x22>(0xC45683, 4); return true;
    // src/unknown/C3/C3EBCA.asm:15 CMP #0
    case 0xEBE4: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/C3/C3EBCA.asm:15 CMP #0
    // Overlapping static entry reached from 0xC3EBE4.
    case 0xEBE6: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EBCA.asm:16 BEQ @UNKNOWN1
    case 0xEBE7: c.execute<0xF0>(0x00000A, 2); return true;
    // src/unknown/C3/C3EBCA.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xEBE9: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EBCA.asm:18 LDA [@VIRTUAL06]
    case 0xEBEB: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:19 JSL UNKNOWN_C3EAD0
    case 0xEBED: c.execute<0x22>(0xC3EAD0, 4); return true;
    // src/unknown/C3/C3EBCA.asm:20 BRA @UNKNOWN2
    case 0xEBF1: c.execute<0x80>(0x000008, 2); return true;
    // src/unknown/C3/C3EBCA.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xEBF3: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EBCA.asm:23 LDA [@VIRTUAL06]
    case 0xEBF5: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:24 JSL UNKNOWN_C3EB1C
    case 0xEBF7: c.execute<0x22>(0xC3EB1C, 4); return true;
    // src/unknown/C3/C3EBCA.asm:27 LDY @LOCAL00
    case 0xEBFB: c.execute<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3EBCA.asm:28 INY
    case 0xEBFD: c.execute<0xC8>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:29 STY @LOCAL00
    case 0xEBFE: c.execute<0x84>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xEC00: if (c.p & 0x20) c.execute<0xA9>(0x0000BB, 2); else c.execute<0xA9>(0x00F4BB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3EC00.
    case 0xEC02: c.execute<0xF4>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    case 0xEC03: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xEC05: if (c.p & 0x20) c.execute<0xA9>(0x0000D5, 2); else c.execute<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3EC05.
    case 0xEC07: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xEC08: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3EBCA.asm:32 TYA
    case 0xEC0A: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    case 0xEC0B: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    case 0xEC0D: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    case 0xEC0E: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    case 0xEC0F: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EBCA.asm:34 CLC
    case 0xEC11: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EBCA.asm:35 ADC @VIRTUAL06
    case 0xEC12: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:36 STA @VIRTUAL06
    case 0xEC14: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:37 LDA [@VIRTUAL06]
    case 0xEC16: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EBCA.asm:38 AND #$00FF
    case 0xEC18: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EBCA.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC3EC18.
    case 0xEC1A: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EBCA.asm:39 BNE @UNKNOWN0
    case 0xEC1B: c.execute<0xD0>(0x0000BC, 2); return true;
    // include/macros.asm:25 PLD
    case 0xEC1D: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEC1E: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEC1F: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xEC21: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xEC22: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xEC23: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xEC24: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3EC24.
    case 0xEC26: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xEC27: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xEC28: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:9 STX @VIRTUAL02
    case 0xEC29: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3EC1F.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3EC26.
    case 0xEC2A: c.execute<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EC1F.asm:10 TAX
    case 0xEC2B: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:11 BEQ @UNKNOWN1
    case 0xEC2C: c.execute<0xF0>(0x00005B, 2); return true;
    // src/unknown/C3/C3EC1F.asm:12 TXA
    case 0xEC2E: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:13 DEC
    case 0xEC2F: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:14 STA @LOCAL00
    case 0xEC30: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC1F.asm:15 CPY #0
    case 0xEC32: if (c.p & 0x10) c.execute<0xC0>(0x000000, 2); else c.execute<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:15 CPY #0
    // Overlapping static entry reached from 0xC3EC32.
    case 0xEC34: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EC1F.asm:16 BNE @UNKNOWN0
    case 0xEC35: c.execute<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    case 0xEC37: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xEC39: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xEC3B: c.execute<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC1F.asm:18 LDA @LOCAL00
    case 0xEC3D: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC1F.asm:19 LDY #.SIZEOF(char_struct)
    case 0xEC3F: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3EC1F.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EC3F.
    case 0xEC41: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC1F.asm:20 JSL MULT168
    case 0xEC42: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EC1F.asm:21 TAX
    case 0xEC46: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:22 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xEC47: c.execute<0xBD>(0x0099D8, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xEC4A: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xEC4C: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3EC1F.asm:24 JSL MULT32
    case 0xEC4E: c.execute<0x22>(0xC09086, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    case 0xEC52: if (c.p & 0x20) c.execute<0xA9>(0x000064, 2); else c.execute<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Overlapping static entry reached from 0xC3EC52.
    case 0xEC54: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    case 0xEC55: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    case 0xEC57: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Overlapping static entry reached from 0xC3EC57.
    case 0xEC59: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    case 0xEC5A: c.execute<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC1F.asm:26 JSL DIVISION32
    case 0xEC5C: c.execute<0x22>(0xC090FF, 4); return true;
    // src/unknown/C3/C3EC1F.asm:27 LDA @VIRTUAL06
    case 0xEC60: c.execute<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3EC1F.asm:28 STA @VIRTUAL02
    case 0xEC62: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EC1F.asm:30 LDA @LOCAL00
    case 0xEC64: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC1F.asm:31 LDY #.SIZEOF(char_struct)
    case 0xEC66: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3EC1F.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EC66.
    case 0xEC68: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC1F.asm:32 JSL MULT168
    case 0xEC69: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EC1F.asm:33 TAY
    case 0xEC6D: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:34 CLC
    case 0xEC6E: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    case 0xEC6F: if (c.p & 0x20) c.execute<0x69>(0x000015, 2); else c.execute<0x69>(0x009A15, 3); return true;
    // src/unknown/C3/C3EC1F.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    // Overlapping static entry reached from 0xC3EC6F.
    case 0xEC71: c.execute<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:36 TAX
    case 0xEC72: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:37 LDA __BSS_START__,X
    case 0xEC73: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:38 SEC
    case 0xEC76: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3EC1F.asm:39 SBC @VIRTUAL02
    case 0xEC77: c.execute<0xE5>(0x000002, 2); return true;
    // src/unknown/C3/C3EC1F.asm:40 STA __BSS_START__,X
    case 0xEC79: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:41 CMP PARTY_CHARACTERS+char_struct::max_hp,Y
    case 0xEC7C: c.execute<0xD9>(0x0099D8, 3); return true;
    // include/macros.asm:761 BCC dest
    case 0xEC7F: c.execute<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    case 0xEC81: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/C3/C3EC1F.asm:43 LDA #0
    case 0xEC83: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3EC1F.asm:43 LDA #0
    // Overlapping static entry reached from 0xC3EC83.
    case 0xEC85: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3EC1F.asm:44 STA __BSS_START__,X
    case 0xEC86: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    case 0xEC89: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEC8A: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEC8B: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xEC8D: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xEC8E: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xEC8F: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xEC90: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3EC90.
    case 0xEC92: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xEC93: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xEC94: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:11 STX @VIRTUAL02
    case 0xEC95: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3EC92.
    case 0xEC96: c.execute<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EC8B.asm:12 TAX
    case 0xEC97: c.execute<0xAA>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    case 0xEC98: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xEC9A: c.execute<0x4C>(0x00ED2A, 3); return true;
    // src/unknown/C3/C3EC8B.asm:14 TXA
    case 0xEC9D: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:15 DEC
    case 0xEC9E: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:16 STA @VIRTUAL04
    case 0xEC9F: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:17 CPY #0
    case 0xECA1: if (c.p & 0x10) c.execute<0xC0>(0x000000, 2); else c.execute<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:17 CPY #0
    // Overlapping static entry reached from 0xC3ECA1.
    case 0xECA3: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3EC8B.asm:18 BNE @UNKNOWN1
    case 0xECA4: c.execute<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    case 0xECA6: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xECA8: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xECAA: c.execute<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC8B.asm:20 LDA @VIRTUAL04
    case 0xECAC: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:21 LDY #.SIZEOF(char_struct)
    case 0xECAE: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3EC8B.asm:21 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3ECAE.
    case 0xECB0: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC8B.asm:22 JSL MULT168
    case 0xECB1: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EC8B.asm:23 TAX
    case 0xECB5: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:24 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xECB6: c.execute<0xBD>(0x0099D8, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xECB9: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xECBB: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3EC8B.asm:26 JSL MULT32
    case 0xECBD: c.execute<0x22>(0xC09086, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    case 0xECC1: if (c.p & 0x20) c.execute<0xA9>(0x000064, 2); else c.execute<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Overlapping static entry reached from 0xC3ECC1.
    case 0xECC3: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    case 0xECC4: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    case 0xECC6: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Overlapping static entry reached from 0xC3ECC6.
    case 0xECC8: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    case 0xECC9: c.execute<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3EC8B.asm:28 JSL DIVISION32
    case 0xECCB: c.execute<0x22>(0xC090FF, 4); return true;
    // src/unknown/C3/C3EC8B.asm:29 LDA @VIRTUAL06
    case 0xECCF: c.execute<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3EC8B.asm:30 STA @VIRTUAL02
    case 0xECD1: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:32 LDA @VIRTUAL04
    case 0xECD3: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:33 LDY #.SIZEOF(char_struct)
    case 0xECD5: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3EC8B.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3ECD5.
    case 0xECD7: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC8B.asm:34 JSL MULT168
    case 0xECD8: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EC8B.asm:35 STA @LOCAL02
    case 0xECDC: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:36 CLC
    case 0xECDE: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:37 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    case 0xECDF: if (c.p & 0x20) c.execute<0x69>(0x000015, 2); else c.execute<0x69>(0x009A15, 3); return true;
    // src/unknown/C3/C3EC8B.asm:37 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    // Overlapping static entry reached from 0xC3ECDF.
    case 0xECE1: c.execute<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:38 TAX
    case 0xECE2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:39 LDA __BSS_START__,X
    case 0xECE3: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:40 CLC
    case 0xECE6: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:41 ADC @VIRTUAL02
    case 0xECE7: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:42 STA __BSS_START__,X
    case 0xECE9: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:43 LDA @LOCAL02
    case 0xECEC: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:44 CLC
    case 0xECEE: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:45 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp
    case 0xECEF: if (c.p & 0x20) c.execute<0x69>(0x000013, 2); else c.execute<0x69>(0x009A13, 3); return true;
    // src/unknown/C3/C3EC8B.asm:45 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp
    // Overlapping static entry reached from 0xC3ECEF.
    case 0xECF1: c.execute<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:46 TAX
    case 0xECF2: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:47 LDA __BSS_START__,X
    case 0xECF3: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:48 BNE @UNKNOWN2
    case 0xECF6: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/C3/C3EC8B.asm:49 LDA #1
    case 0xECF8: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3EC8B.asm:49 LDA #1
    // Overlapping static entry reached from 0xC3ECF8.
    case 0xECFA: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3EC8B.asm:50 STA __BSS_START__,X
    case 0xECFB: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:52 LDA @VIRTUAL04
    case 0xECFE: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3EC8B.asm:53 LDY #.SIZEOF(char_struct)
    case 0xED00: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3EC8B.asm:53 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3ED00.
    case 0xED02: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3EC8B.asm:54 JSL MULT168
    case 0xED03: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EC8B.asm:55 STA @LOCAL01
    case 0xED07: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3EC8B.asm:56 CLC
    case 0xED09: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:57 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    case 0xED0A: if (c.p & 0x20) c.execute<0x69>(0x000015, 2); else c.execute<0x69>(0x009A15, 3); return true;
    // src/unknown/C3/C3EC8B.asm:57 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_hp_target
    // Overlapping static entry reached from 0xC3ED0A.
    case 0xED0C: c.execute<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:58 TAX
    case 0xED0D: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:59 STX @LOCAL00
    case 0xED0E: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC8B.asm:60 LDA @LOCAL01
    case 0xED10: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3EC8B.asm:61 TAX
    case 0xED12: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EC8B.asm:62 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xED13: c.execute<0xBD>(0x0099D8, 3); return true;
    // src/unknown/C3/C3EC8B.asm:63 STA @LOCAL02
    case 0xED16: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:64 STA @VIRTUAL02
    case 0xED18: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3EC8B.asm:65 LDX @LOCAL00
    case 0xED1A: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EC8B.asm:66 LDA __BSS_START__,X
    case 0xED1C: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EC8B.asm:67 CMP @VIRTUAL02
    case 0xED1F: c.execute<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    case 0xED21: c.execute<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    case 0xED23: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3EC8B.asm:69 LDA @LOCAL02
    case 0xED25: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3EC8B.asm:70 STA __BSS_START__,X
    case 0xED27: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    case 0xED2A: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xED2B: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xED2C: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xED2E: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xED2F: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xED30: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xED31: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3ED31.
    case 0xED33: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xED34: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xED35: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:9 STX @VIRTUAL02
    case 0xED36: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3ED2C.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3ED33.
    case 0xED37: c.execute<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3ED2C.asm:10 TAX
    case 0xED38: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:11 BEQ @UNKNOWN1
    case 0xED39: c.execute<0xF0>(0x00005B, 2); return true;
    // src/unknown/C3/C3ED2C.asm:12 TXA
    case 0xED3B: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:13 DEC
    case 0xED3C: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:14 STA @LOCAL00
    case 0xED3D: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED2C.asm:15 CPY #0
    case 0xED3F: if (c.p & 0x10) c.execute<0xC0>(0x000000, 2); else c.execute<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:15 CPY #0
    // Overlapping static entry reached from 0xC3ED3F.
    case 0xED41: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3ED2C.asm:16 BNE @UNKNOWN0
    case 0xED42: c.execute<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    case 0xED44: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xED46: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xED48: c.execute<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED2C.asm:18 LDA @LOCAL00
    case 0xED4A: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED2C.asm:19 LDY #.SIZEOF(char_struct)
    case 0xED4C: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3ED2C.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3ED4C.
    case 0xED4E: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED2C.asm:20 JSL MULT168
    case 0xED4F: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3ED2C.asm:21 TAX
    case 0xED53: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:22 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xED54: c.execute<0xBD>(0x0099DA, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xED57: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xED59: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3ED2C.asm:24 JSL MULT32
    case 0xED5B: c.execute<0x22>(0xC09086, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    case 0xED5F: if (c.p & 0x20) c.execute<0xA9>(0x000064, 2); else c.execute<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Overlapping static entry reached from 0xC3ED5F.
    case 0xED61: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    case 0xED62: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    case 0xED64: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Overlapping static entry reached from 0xC3ED64.
    case 0xED66: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    case 0xED67: c.execute<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED2C.asm:26 JSL DIVISION32
    case 0xED69: c.execute<0x22>(0xC090FF, 4); return true;
    // src/unknown/C3/C3ED2C.asm:27 LDA @VIRTUAL06
    case 0xED6D: c.execute<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3ED2C.asm:28 STA @VIRTUAL02
    case 0xED6F: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3ED2C.asm:30 LDA @LOCAL00
    case 0xED71: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED2C.asm:31 LDY #.SIZEOF(char_struct)
    case 0xED73: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3ED2C.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3ED73.
    case 0xED75: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED2C.asm:32 JSL MULT168
    case 0xED76: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3ED2C.asm:33 TAY
    case 0xED7A: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:34 CLC
    case 0xED7B: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    case 0xED7C: if (c.p & 0x20) c.execute<0x69>(0x00001B, 2); else c.execute<0x69>(0x009A1B, 3); return true;
    // src/unknown/C3/C3ED2C.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    // Overlapping static entry reached from 0xC3ED7C.
    case 0xED7E: c.execute<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:36 TAX
    case 0xED7F: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:37 LDA __BSS_START__,X
    case 0xED80: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:38 SEC
    case 0xED83: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3ED2C.asm:39 SBC @VIRTUAL02
    case 0xED84: c.execute<0xE5>(0x000002, 2); return true;
    // src/unknown/C3/C3ED2C.asm:40 STA __BSS_START__,X
    case 0xED86: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:41 CMP PARTY_CHARACTERS+char_struct::max_pp,Y
    case 0xED89: c.execute<0xD9>(0x0099DA, 3); return true;
    // include/macros.asm:761 BCC dest
    case 0xED8C: c.execute<0x90>(0x000008, 2); return true;
    // include/macros.asm:762 BEQ dest
    case 0xED8E: c.execute<0xF0>(0x000006, 2); return true;
    // src/unknown/C3/C3ED2C.asm:43 LDA #0
    case 0xED90: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3ED2C.asm:43 LDA #0
    // Overlapping static entry reached from 0xC3ED90.
    case 0xED92: c.execute<0x00>(0x00009D, 2); return true;
    // src/unknown/C3/C3ED2C.asm:44 STA __BSS_START__,X
    case 0xED93: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    case 0xED96: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xED97: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xED98: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xED9A: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xED9B: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xED9C: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xED9D: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3ED9D.
    case 0xED9F: c.execute<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xEDA0: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xEDA1: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:10 STX @VIRTUAL02
    case 0xEDA2: c.execute<0x86>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC3ED9F.
    case 0xEDA3: c.execute<0x02>(0x0000AA, 2); return true;
    // src/unknown/C3/C3ED98.asm:11 TAX
    case 0xEDA4: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:12 BEQ @UNKNOWN1
    case 0xEDA5: c.execute<0xF0>(0x00006B, 2); return true;
    // src/unknown/C3/C3ED98.asm:13 TXA
    case 0xEDA7: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:14 DEC
    case 0xEDA8: c.execute<0x3A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:15 STA @LOCAL01
    case 0xEDA9: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:16 CPY #0
    case 0xEDAB: if (c.p & 0x10) c.execute<0xC0>(0x000000, 2); else c.execute<0xC0>(0x000000, 3); return true;
    // src/unknown/C3/C3ED98.asm:16 CPY #0
    // Overlapping static entry reached from 0xC3EDAB.
    case 0xEDAD: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3ED98.asm:17 BNE @UNKNOWN0
    case 0xEDAE: c.execute<0xD0>(0x00002D, 2); return true;
    // include/macros.asm:865 LDA src
    case 0xEDB0: c.execute<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    case 0xEDB2: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xEDB4: c.execute<0x64>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED98.asm:19 LDA @LOCAL01
    case 0xEDB6: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:20 LDY #.SIZEOF(char_struct)
    case 0xEDB8: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3ED98.asm:20 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EDB8.
    case 0xEDBA: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED98.asm:21 JSL MULT168
    case 0xEDBB: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3ED98.asm:22 TAX
    case 0xEDBF: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:23 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xEDC0: c.execute<0xBD>(0x0099DA, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xEDC3: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xEDC5: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3ED98.asm:25 JSL MULT32
    case 0xEDC7: c.execute<0x22>(0xC09086, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    case 0xEDCB: if (c.p & 0x20) c.execute<0xA9>(0x000064, 2); else c.execute<0xA9>(0x000064, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Overlapping static entry reached from 0xC3EDCB.
    case 0xEDCD: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    case 0xEDCE: c.execute<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    case 0xEDD0: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Overlapping static entry reached from 0xC3EDD0.
    case 0xEDD2: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    case 0xEDD3: c.execute<0x85>(0x00000C, 2); return true;
    // src/unknown/C3/C3ED98.asm:27 JSL DIVISION32
    case 0xEDD5: c.execute<0x22>(0xC090FF, 4); return true;
    // src/unknown/C3/C3ED98.asm:28 LDA @VIRTUAL06
    case 0xEDD9: c.execute<0xA5>(0x000006, 2); return true;
    // src/unknown/C3/C3ED98.asm:29 STA @VIRTUAL02
    case 0xEDDB: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:31 LDA @LOCAL01
    case 0xEDDD: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:32 LDY #.SIZEOF(char_struct)
    case 0xEDDF: if (c.p & 0x10) c.execute<0xA0>(0x00005F, 2); else c.execute<0xA0>(0x00005F, 3); return true;
    // src/unknown/C3/C3ED98.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EDDF.
    case 0xEDE1: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3ED98.asm:33 JSL MULT168
    case 0xEDE2: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3ED98.asm:34 STA @LOCAL01
    case 0xEDE6: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:35 CLC
    case 0xEDE8: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    case 0xEDE9: if (c.p & 0x20) c.execute<0x69>(0x00001B, 2); else c.execute<0x69>(0x009A1B, 3); return true;
    // src/unknown/C3/C3ED98.asm:36 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::current_pp_target
    // Overlapping static entry reached from 0xC3EDE9.
    case 0xEDEB: c.execute<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:37 TAY
    case 0xEDEC: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:38 LDA __BSS_START__,Y
    case 0xEDED: c.execute<0xB9>(0x000000, 3); return true;
    // src/unknown/C3/C3ED98.asm:39 CLC
    case 0xEDF0: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:40 ADC @VIRTUAL02
    case 0xEDF1: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:41 TAX
    case 0xEDF3: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:42 STX @LOCAL00
    case 0xEDF4: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED98.asm:43 TXA
    case 0xEDF6: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:44 STA __BSS_START__,Y
    case 0xEDF7: c.execute<0x99>(0x000000, 3); return true;
    // src/unknown/C3/C3ED98.asm:45 LDA @LOCAL01
    case 0xEDFA: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:46 TAX
    case 0xEDFC: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:47 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xEDFD: c.execute<0xBD>(0x0099DA, 3); return true;
    // src/unknown/C3/C3ED98.asm:48 STA @LOCAL01
    case 0xEE00: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:49 STA @VIRTUAL02
    case 0xEE02: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3ED98.asm:50 LDX @LOCAL00
    case 0xEE04: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3ED98.asm:51 TXA
    case 0xEE06: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3ED98.asm:52 CMP @VIRTUAL02
    case 0xEE07: c.execute<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    case 0xEE09: c.execute<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    case 0xEE0B: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3ED98.asm:54 LDA @LOCAL01
    case 0xEE0D: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3ED98.asm:55 STA __BSS_START__,Y
    case 0xEE0F: c.execute<0x99>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    case 0xEE12: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEE13: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEE14: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xEE16: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xEE17: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xEE18: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xEE19: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3EE6E.
    case 0xEE1A: c.execute<0xF0>(0x0000FF, 2); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3EE19.
    case 0xEE1B: c.execute<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xEE1C: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xEE1D: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:10 TXY
    case 0xEE1E: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:11 TAX
    case 0xEE1F: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:12 STX @LOCAL00
    case 0xEE20: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE14.asm:13 TYA
    case 0xEE22: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    case 0xEE23: if (c.p & 0x10) c.execute<0xA0>(0x000027, 2); else c.execute<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3EE23.
    case 0xEE25: c.execute<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    case 0xEE26: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3EE14.asm:15 CLC
    case 0xEE2A: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:16 ADC #item::flags
    case 0xEE2B: if (c.p & 0x20) c.execute<0x69>(0x00001C, 2); else c.execute<0x69>(0x00001C, 3); return true;
    // src/unknown/C3/C3EE14.asm:16 ADC #item::flags
    // Overlapping static entry reached from 0xC3EE2B.
    case 0xEE2D: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EE14.asm:17 TAX
    case 0xEE2E: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xEE2F: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EE14.asm:19 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xEE31: c.execute<0xBF>(0xD55000, 4); return true;
    // src/unknown/C3/C3EE14.asm:20 LDX @LOCAL00
    case 0xEE35: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE14.asm:21 DEX
    case 0xEE37: c.execute<0xCA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE14.asm:22 AND f:ITEM_USABLE_FLAGS,X
    case 0xEE38: c.execute<0x3F>(0xC458AB, 4); return true;
    // src/unknown/C3/C3EE14.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xEE3C: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3EE14.asm:24 AND #$00FF
    case 0xEE3E: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EE14.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC3EE3E.
    case 0xEE40: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE14.asm:25 BEQ @UNKNOWN0
    case 0xEE41: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3EE14.asm:26 LDA #TRUE
    case 0xEE43: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3EE14.asm:26 LDA #TRUE
    // Overlapping static entry reached from 0xC3EE43.
    case 0xEE45: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3EE14.asm:27 BRA @UNKNOWN1
    case 0xEE46: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3EE14.asm:29 LDA #FALSE
    case 0xEE48: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3EE14.asm:29 LDA #FALSE
    // Overlapping static entry reached from 0xC3EE48.
    case 0xEE4A: c.execute<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xEE4B: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEE4C: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEE4D: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/C3/C3EE4D.asm:5 JSL UPDATE_PARTY
    case 0xEE4F: c.execute<0x22>(0xC034D6, 4); return true;
    // src/unknown/C3/C3EE4D.asm:6 JSL UNKNOWN_C07B52
    case 0xEE53: c.execute<0x22>(0xC07B52, 4); return true;
    // src/unknown/C3/C3EE4D.asm:7 JSL UNKNOWN_C1004E
    case 0xEE57: c.execute<0x22>(0xC1004E, 4); return true;
    // src/unknown/C3/C3EE4D.asm:8 JSL UNKNOWN_C0943C
    case 0xEE5B: c.execute<0x22>(0xC0943C, 4); return true;
    // src/unknown/C3/C3EE4D.asm:9 LDA ENTITY_FADE_ENTITY
    case 0xEE5F: c.execute<0xAD>(0x00B4A8, 3); return true;
    // src/unknown/C3/C3EE4D.asm:10 CMP #.LOWORD(-1)
    case 0xEE62: if (c.p & 0x20) c.execute<0xC9>(0x0000FF, 2); else c.execute<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C3/C3EE4D.asm:10 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3EE62.
    case 0xEE64: c.execute<0xFF>(0xAD12F0, 4); return true;
    // src/unknown/C3/C3EE4D.asm:11 BEQ @UNKNOWN0
    case 0xEE65: c.execute<0xF0>(0x000012, 2); return true;
    // src/unknown/C3/C3EE4D.asm:12 LDA ENTITY_FADE_ENTITY
    case 0xEE67: c.execute<0xAD>(0x00B4A8, 3); return true;
    // src/unknown/C3/C3EE4D.asm:12 LDA ENTITY_FADE_ENTITY
    // Overlapping static entry reached from 0xC3EE64.
    case 0xEE68: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:12 LDA ENTITY_FADE_ENTITY
    // Overlapping static entry reached from 0xC3EE68.
    case 0xEE69: c.execute<0xB4>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE4D.asm:13 ASL
    case 0xEE6A: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:14 CLC
    case 0xEE6B: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:15 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xEE6C: if (c.p & 0x20) c.execute<0x69>(0x0000B6, 2); else c.execute<0x69>(0x0010B6, 3); return true;
    // src/unknown/C3/C3EE4D.asm:15 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC3EE6C.
    case 0xEE6E: c.execute<0x10>(0x0000AA, 2); return true;
    // src/unknown/C3/C3EE4D.asm:16 TAX
    case 0xEE6F: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE4D.asm:17 LDA __BSS_START__,X
    case 0xEE70: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3EE4D.asm:18 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xEE73: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x003FFF, 3); return true;
    // src/unknown/C3/C3EE4D.asm:18 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC3EE73.
    case 0xEE75: c.execute<0x3F>(0x00009D, 4); return true;
    // src/unknown/C3/C3EE4D.asm:19 STA __BSS_START__,X
    case 0xEE76: c.execute<0x9D>(0x000000, 3); return true;
    // include/macros.asm:30 RTL
    case 0xEE79: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEE7A: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xEE7C: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xEE7D: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xEE7E: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xEE7F: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3EE7F.
    case 0xEE81: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xEE82: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xEE83: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:9 STA @LOCAL00
    case 0xEE84: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE7A.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC3EE81.
    case 0xEE85: c.execute<0x0E>(0x000FA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xEE86: if (c.p & 0x20) c.execute<0xA9>(0x00000F, 2); else c.execute<0xA9>(0x00550F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3EE86.
    case 0xEE88: c.execute<0x55>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xEE89: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xC3EE88.
    case 0xEE8A: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xEE8B: if (c.p & 0x20) c.execute<0xA9>(0x0000C4, 2); else c.execute<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3EE8A.
    case 0xEE8C: c.execute<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3EE8B.
    case 0xEE8D: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xEE8E: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3EE7A.asm:11 LDA @LOCAL00
    case 0xEE90: c.execute<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:522 STA scratch
    case 0xEE92: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    case 0xEE94: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    case 0xEE95: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3EE7A.asm:13 TAX
    case 0xEE97: c.execute<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    case 0xEE98: c.execute<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    case 0xEE9A: c.execute<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    case 0xEE9C: c.execute<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    case 0xEE9E: c.execute<0x84>(0x00000C, 2); return true;
    // src/unknown/C3/C3EE7A.asm:15 CLC
    case 0xEEA0: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:16 ADC @VIRTUAL0A
    case 0xEEA1: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE7A.asm:17 STA @VIRTUAL0A
    case 0xEEA3: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE7A.asm:18 LDA [@VIRTUAL0A]
    case 0xEEA5: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3EE7A.asm:19 AND #$00FF
    case 0xEEA7: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3EE7A.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC3EEA7.
    case 0xEEA9: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3EE7A.asm:20 STA @LOCAL00
    case 0xEEAA: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE7A.asm:21 AND #$0080
    case 0xEEAC: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/unknown/C3/C3EE7A.asm:21 AND #$0080
    // Overlapping static entry reached from 0xC3EEAC.
    case 0xEEAE: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE7A.asm:22 BEQ @UNKNOWN3
    case 0xEEAF: c.execute<0xF0>(0x000053, 2); return true;
    // src/unknown/C3/C3EE7A.asm:23 LDA @LOCAL00
    case 0xEEB1: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3EE7A.asm:24 AND #$007F
    case 0xEEB3: if (c.p & 0x20) c.execute<0x29>(0x00007F, 2); else c.execute<0x29>(0x00007F, 3); return true;
    // src/unknown/C3/C3EE7A.asm:24 AND #$007F
    // Overlapping static entry reached from 0xC3EEB3.
    case 0xEEB5: c.execute<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3EE7A.asm:25 CMP #1
    case 0xEEB6: if (c.p & 0x20) c.execute<0xC9>(0x000001, 2); else c.execute<0xC9>(0x000001, 3); return true;
    // src/unknown/C3/C3EE7A.asm:25 CMP #1
    // Overlapping static entry reached from 0xC3EEB6.
    case 0xEEB8: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE7A.asm:26 BEQ @UNKNOWN0
    case 0xEEB9: c.execute<0xF0>(0x000007, 2); return true;
    // src/unknown/C3/C3EE7A.asm:27 CMP #2
    case 0xEEBB: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/unknown/C3/C3EE7A.asm:27 CMP #2
    // Overlapping static entry reached from 0xC3EEBB.
    case 0xEEBD: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3EE7A.asm:28 BEQ @UNKNOWN1
    case 0xEEBE: c.execute<0xF0>(0x00001B, 2); return true;
    // src/unknown/C3/C3EE7A.asm:29 BRA @UNKNOWN2
    case 0xEEC0: c.execute<0x80>(0x00002C, 2); return true;
    // src/unknown/C3/C3EE7A.asm:31 TXA
    case 0xEEC2: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:32 INC
    case 0xEEC3: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:33 CLC
    case 0xEEC4: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:34 ADC @VIRTUAL06
    case 0xEEC5: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:35 STA @VIRTUAL06
    case 0xEEC7: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:36 LDA [@VIRTUAL06]
    case 0xEEC9: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:37 TAX
    case 0xEECB: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xEECC: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3EE7A.asm:39 LDA __BSS_START__,X
    case 0xEECE: c.execute<0xBD>(0x000000, 3); return true;
    // include/macros.asm:858 STA dest
    case 0xEED1: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    case 0xEED3: c.execute<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    case 0xEED5: c.execute<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    case 0xEED7: c.execute<0x64>(0x000009, 2); return true;
    // src/unknown/C3/C3EE7A.asm:41 BRA @UNKNOWN4
    case 0xEED9: c.execute<0x80>(0x00003C, 2); return true;
    // src/unknown/C3/C3EE7A.asm:43 TXA
    case 0xEEDB: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:44 INC
    case 0xEEDC: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:45 CLC
    case 0xEEDD: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:46 ADC @VIRTUAL06
    case 0xEEDE: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:47 STA @VIRTUAL06
    case 0xEEE0: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:48 LDA [@VIRTUAL06]
    case 0xEEE2: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:49 TAX
    case 0xEEE4: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:50 LDA __BSS_START__,X
    case 0xEEE5: c.execute<0xBD>(0x000000, 3); return true;
    // include/macros.asm:870 STA dest
    case 0xEEE8: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    case 0xEEEA: c.execute<0x64>(0x000008, 2); return true;
    // src/unknown/C3/C3EE7A.asm:52 BRA @UNKNOWN4
    case 0xEEEC: c.execute<0x80>(0x000029, 2); return true;
    // src/unknown/C3/C3EE7A.asm:54 TXA
    case 0xEEEE: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:55 INC
    case 0xEEEF: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:56 CLC
    case 0xEEF0: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:57 ADC @VIRTUAL06
    case 0xEEF1: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:58 STA @VIRTUAL06
    case 0xEEF3: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:59 LDA [@VIRTUAL06]
    case 0xEEF5: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:60 TAY
    case 0xEEF7: c.execute<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    case 0xEEF8: c.execute<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    case 0xEEFB: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    case 0xEEFD: c.execute<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    case 0xEF00: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3EE7A.asm:62 BRA @UNKNOWN4
    case 0xEF02: c.execute<0x80>(0x000013, 2); return true;
    // src/unknown/C3/C3EE7A.asm:64 TXA
    case 0xEF04: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:65 INC
    case 0xEF05: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:66 CLC
    case 0xEF06: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3EE7A.asm:67 ADC @VIRTUAL06
    case 0xEF07: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:68 STA @VIRTUAL06
    case 0xEF09: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3EE7A.asm:69 LDA [@VIRTUAL06]
    case 0xEF0B: c.execute<0xA7>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    case 0xEF0D: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    case 0xEF0F: c.execute<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    case 0xEF10: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    case 0xEF12: c.execute<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    case 0xEF13: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    case 0xEF15: c.execute<0x64>(0x000009, 2); return true;
    // src/unknown/C3/C3EE7A.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xEF17: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xEF19: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xEF1B: c.execute<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xEF1D: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xEF1F: c.execute<0x85>(0x000018, 2); return true;
    // include/macros.asm:25 PLD
    case 0xEF21: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xEF22: c.execute<0x6B>(0x000000, 1); return true;
    // src/misc/null/C3EF23.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEF23: c.execute<0xC2>(0x000031, 2); return true;
    // src/misc/null/C3EF23.asm:4 RTL
    case 0xEF25: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF1EC: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xF1EE: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xF1EF: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xF1F0: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xF1F1: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3F1F1.
    case 0xF1F3: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xF1F4: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xF1F5: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:14 STA @LOCAL03
    case 0xF1F6: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3F1EC.asm:14 STA @LOCAL03
    // Overlapping static entry reached from 0xC3F1F3.
    case 0xF1F7: c.execute<0x12>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F1EC.asm:15 LDA #3
    case 0xF1F8: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x000003, 3); return true;
    // src/unknown/C3/C3F1EC.asm:15 LDA #3
    // Overlapping static entry reached from 0xC3F1F7.
    case 0xF1F9: c.execute<0x03>(0x000000, 2); return true;
    // src/unknown/C3/C3F1EC.asm:15 LDA #3
    // Overlapping static entry reached from 0xC3F1F8.
    case 0xF1FA: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F1EC.asm:16 JSL UNKNOWN_C2239D
    case 0xF1FB: c.execute<0x22>(0xC2239D, 4); return true;
    // src/unknown/C3/C3F1EC.asm:17 CMP #0
    case 0xF1FF: if (c.p & 0x20) c.execute<0xC9>(0x000000, 2); else c.execute<0xC9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:17 CMP #0
    // Overlapping static entry reached from 0xC3F1FF.
    case 0xF201: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F1EC.asm:18 BNE @UNKNOWN0
    case 0xF202: c.execute<0xD0>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:19 LDA #0
    case 0xF204: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:19 LDA #0
    // Overlapping static entry reached from 0xC3F204.
    case 0xF206: c.execute<0x00>(0x00004C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:20 JMP @UNKNOWN6
    case 0xF207: c.execute<0x4C>(0x00F2AF, 3); return true;
    // src/unknown/C3/C3F1EC.asm:22 LDA #0
    case 0xF20A: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:22 LDA #0
    // Overlapping static entry reached from 0xC3F20A.
    case 0xF20C: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F1EC.asm:23 STA @VIRTUAL02
    case 0xF20D: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:24 JMP @UNKNOWN4
    case 0xF20F: c.execute<0x4C>(0x00F28D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xF212: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3F212.
    case 0xF214: c.execute<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    case 0xF215: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Overlapping static entry reached from 0xC3F214.
    case 0xF216: c.execute<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xF217: if (c.p & 0x20) c.execute<0xA9>(0x0000D5, 2); else c.execute<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3F216.
    case 0xF218: c.execute<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3F217.
    case 0xF219: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xF21A: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F1EC.asm:27 TYA
    case 0xF21C: c.execute<0x98>(0x000000, 1); return true;
    // include/macros.asm:729 LDY #amount
    case 0xF21D: if (c.p & 0x10) c.execute<0xA0>(0x000027, 2); else c.execute<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Overlapping static entry reached from 0xC3F21D.
    case 0xF21F: c.execute<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    case 0xF220: c.execute<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C3/C3F1EC.asm:29 TAX
    case 0xF224: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:30 STX @LOCAL02
    case 0xF225: c.execute<0x86>(0x000010, 2); return true;
    // src/unknown/C3/C3F1EC.asm:31 TXA
    case 0xF227: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:32 CLC
    case 0xF228: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:33 ADC #item::type
    case 0xF229: if (c.p & 0x20) c.execute<0x69>(0x000019, 2); else c.execute<0x69>(0x000019, 3); return true;
    // src/unknown/C3/C3F1EC.asm:33 ADC #item::type
    // Overlapping static entry reached from 0xC3F229.
    case 0xF22B: c.execute<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    case 0xF22C: c.execute<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    case 0xF22E: c.execute<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    case 0xF230: c.execute<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    case 0xF232: c.execute<0x84>(0x00000C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:35 CLC
    case 0xF234: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:36 ADC @VIRTUAL0A
    case 0xF235: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:37 STA @VIRTUAL0A
    case 0xF237: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:38 LDA [@VIRTUAL0A]
    case 0xF239: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:39 AND #$00FF
    case 0xF23B: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F1EC.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC3F23B.
    case 0xF23D: c.execute<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3F1EC.asm:40 CMP #8
    case 0xF23E: if (c.p & 0x20) c.execute<0xC9>(0x000008, 2); else c.execute<0xC9>(0x000008, 3); return true;
    // src/unknown/C3/C3F1EC.asm:40 CMP #8
    // Overlapping static entry reached from 0xC3F23E.
    case 0xF240: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F1EC.asm:41 BNE @UNKNOWN3
    case 0xF241: c.execute<0xD0>(0x000046, 2); return true;
    // src/unknown/C3/C3F1EC.asm:42 TXA
    case 0xF243: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:43 CLC
    case 0xF244: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:44 ADC #item::params + item_parameters::epi
    case 0xF245: if (c.p & 0x20) c.execute<0x69>(0x000020, 2); else c.execute<0x69>(0x000020, 3); return true;
    // src/unknown/C3/C3F1EC.asm:44 ADC #item::params + item_parameters::epi
    // Overlapping static entry reached from 0xC3F245.
    case 0xF247: c.execute<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    case 0xF248: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xF24A: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xF24C: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xF24E: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:46 CLC
    case 0xF250: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:47 ADC @VIRTUAL0A
    case 0xF251: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:48 STA @VIRTUAL0A
    case 0xF253: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xF255: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:50 LDA [@VIRTUAL0A]
    case 0xF257: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F1EC.asm:51 CMP PARTY_CHARACTERS+(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::iq
    case 0xF259: c.execute<0xCD>(0x009AA7, 3); return true;
    // include/macros.asm:766 BEQ :+
    case 0xF25C: c.execute<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    case 0xF25E: c.execute<0xB0>(0x000029, 2); return true;
    // src/unknown/C3/C3F1EC.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xF260: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:54 LDA #99
    case 0xF262: if (c.p & 0x20) c.execute<0xA9>(0x000063, 2); else c.execute<0xA9>(0x000063, 3); return true;
    // src/unknown/C3/C3F1EC.asm:54 LDA #99
    // Overlapping static entry reached from 0xC3F262.
    case 0xF264: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F1EC.asm:55 JSL RAND_MOD
    case 0xF265: c.execute<0x22>(0xC45F7B, 4); return true;
    // src/unknown/C3/C3F1EC.asm:56 CMP @LOCAL03
    case 0xF269: c.execute<0xC5>(0x000012, 2); return true;
    // src/unknown/C3/C3F1EC.asm:57 BCS @UNKNOWN3
    case 0xF26B: c.execute<0xB0>(0x00001C, 2); return true;
    // src/unknown/C3/C3F1EC.asm:58 LDX @LOCAL02
    case 0xF26D: c.execute<0xA6>(0x000010, 2); return true;
    // src/unknown/C3/C3F1EC.asm:59 TXA
    case 0xF26F: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:60 CLC
    case 0xF270: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:61 ADC #item::params + item_parameters::ep
    case 0xF271: if (c.p & 0x20) c.execute<0x69>(0x000021, 2); else c.execute<0x69>(0x000021, 3); return true;
    // src/unknown/C3/C3F1EC.asm:61 ADC #item::params + item_parameters::ep
    // Overlapping static entry reached from 0xC3F271.
    case 0xF273: c.execute<0x00>(0x000018, 2); return true;
    // src/unknown/C3/C3F1EC.asm:62 CLC
    case 0xF274: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:63 ADC @VIRTUAL06
    case 0xF275: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:64 STA @VIRTUAL06
    case 0xF277: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xF279: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:66 LDA [@VIRTUAL06]
    case 0xF27B: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F1EC.asm:71 LDX @VIRTUAL04
    case 0xF27D: c.execute<0xA6>(0x000004, 2); return true;
    // src/unknown/C3/C3F1EC.asm:73 STA __BSS_START__,X
    case 0xF27F: c.execute<0x9D>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:74 LDY @LOCAL01
    case 0xF282: c.execute<0xA4>(0x00000E, 2); return true;
    // src/unknown/C3/C3F1EC.asm:75 REP #PROC_FLAGS::ACCUM8
    case 0xF284: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:76 TYA
    case 0xF286: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:77 BRA @UNKNOWN6
    case 0xF287: c.execute<0x80>(0x000026, 2); return true;
    // src/unknown/C3/C3F1EC.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xF289: c.execute<0xC2>(0x000020, 2); return true;
    // src/unknown/C3/C3F1EC.asm:80 INC @VIRTUAL02
    case 0xF28B: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:82 LDA @VIRTUAL02
    case 0xF28D: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:83 CMP #.SIZEOF(char_struct::items)
    case 0xF28F: if (c.p & 0x20) c.execute<0xC9>(0x00000E, 2); else c.execute<0xC9>(0x00000E, 3); return true;
    // src/unknown/C3/C3F1EC.asm:83 CMP #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC3F28F.
    case 0xF291: c.execute<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F1EC.asm:84 BCS @UNKNOWN5
    case 0xF292: c.execute<0xB0>(0x000018, 2); return true;
    // src/unknown/C3/C3F1EC.asm:85 LDA @VIRTUAL02
    case 0xF294: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F1EC.asm:86 CLC
    case 0xF296: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:92 ADC #.LOWORD(PARTY_CHARACTERS)+(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::items
    case 0xF297: if (c.p & 0x20) c.execute<0x69>(0x0000AF, 2); else c.execute<0x69>(0x009AAF, 3); return true;
    // src/unknown/C3/C3F1EC.asm:92 ADC #.LOWORD(PARTY_CHARACTERS)+(.SIZEOF(char_struct) * ITEM_FIXING_CHARACTER) + char_struct::items
    // Overlapping static entry reached from 0xC3F297.
    case 0xF299: c.execute<0x9A>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:94 STA @VIRTUAL04
    case 0xF29A: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F1EC.asm:98 LDX @VIRTUAL04
    case 0xF29C: c.execute<0xA6>(0x000004, 2); return true;
    // src/unknown/C3/C3F1EC.asm:99 LDA __BSS_START__,X
    case 0xF29E: c.execute<0xBD>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:100 AND #$00FF
    case 0xF2A1: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F1EC.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC3F2A1.
    case 0xF2A3: c.execute<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F1EC.asm:101 TAY
    case 0xF2A4: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F1EC.asm:102 STY @LOCAL01
    case 0xF2A5: c.execute<0x84>(0x00000E, 2); return true;
    // include/macros.asm:778 BEQ :+
    case 0xF2A7: c.execute<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    case 0xF2A9: c.execute<0x4C>(0x00F212, 3); return true;
    // src/unknown/C3/C3F1EC.asm:105 LDA #0
    case 0xF2AC: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F1EC.asm:105 LDA #0
    // Overlapping static entry reached from 0xC3F2AC.
    case 0xF2AE: c.execute<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xF2AF: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xF2B0: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF3C5: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xF3C7: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xF3C8: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xF3C9: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xF3CA: if (c.p & 0x20) c.execute<0x69>(0x0000E4, 2); else c.execute<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3F3CA.
    case 0xF3CC: c.execute<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xF3CD: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xF3CE: c.execute<0x68>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:12 TAX
    case 0xF3CF: c.execute<0xAA>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:13 STX TITLE_SCREEN_QUICK_MODE
    case 0xF3D0: c.execute<0x8E>(0x009F75, 3); return true;
    // src/intro/show_title_screen.asm:14 LDA #0
    case 0xF3D3: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:14 LDA #0
    // Overlapping static entry reached from 0xC3F3D3.
    case 0xF3D5: c.execute<0x00>(0x000085, 2); return true;
    // src/intro/show_title_screen.asm:15 STA @VIRTUAL04
    case 0xF3D6: c.execute<0x85>(0x000004, 2); return true;
    // src/intro/show_title_screen.asm:16 JSL UNKNOWN_C08726
    case 0xF3D8: c.execute<0x22>(0xC08726, 4); return true;
    // src/intro/show_title_screen.asm:17 JSL UNKNOWN_C0927C
    case 0xF3DC: c.execute<0x22>(0xC0927C, 4); return true;
    // src/intro/show_title_screen.asm:18 BRA @UNKNOWN1
    case 0xF3E0: c.execute<0x80>(0x000019, 2); return true;
    // src/intro/show_title_screen.asm:20 ASL
    case 0xF3E2: c.execute<0x0A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:21 CLC
    case 0xF3E3: c.execute<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:22 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xF3E4: if (c.p & 0x20) c.execute<0x69>(0x00006A, 2); else c.execute<0x69>(0x00116A, 3); return true;
    // src/intro/show_title_screen.asm:22 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC3F3E4.
    case 0xF3E6: c.execute<0x11>(0x0000AA, 2); return true;
    // src/intro/show_title_screen.asm:23 TAX
    case 0xF3E7: c.execute<0xAA>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:24 LDA __BSS_START__,X
    case 0xF3E8: c.execute<0xBD>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:25 ORA #$8000
    case 0xF3EB: if (c.p & 0x20) c.execute<0x09>(0x000000, 2); else c.execute<0x09>(0x008000, 3); return true;
    // src/intro/show_title_screen.asm:25 ORA #$8000
    // Overlapping static entry reached from 0xC3F3EB.
    case 0xF3ED: c.execute<0x80>(0x00009D, 2); return true;
    // src/intro/show_title_screen.asm:26 STA __BSS_START__,X
    case 0xF3EE: c.execute<0x9D>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:27 LDA @LOCAL04
    case 0xF3F1: c.execute<0xA5>(0x00001A, 2); return true;
    // src/intro/show_title_screen.asm:28 INC
    case 0xF3F3: c.execute<0x1A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:29 STA @LOCAL04
    case 0xF3F4: c.execute<0x85>(0x00001A, 2); return true;
    // src/intro/show_title_screen.asm:30 CMP #MAX_ENTITIES
    case 0xF3F6: if (c.p & 0x20) c.execute<0xC9>(0x00001E, 2); else c.execute<0xC9>(0x00001E, 3); return true;
    // src/intro/show_title_screen.asm:30 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC3F3F6.
    case 0xF3F8: c.execute<0x00>(0x000090, 2); return true;
    // src/intro/show_title_screen.asm:31 BCC @UNKNOWN0
    case 0xF3F9: c.execute<0x90>(0x0000E7, 2); return true;
    // src/intro/show_title_screen.asm:33 LDA #11
    case 0xF3FB: if (c.p & 0x20) c.execute<0xA9>(0x00000B, 2); else c.execute<0xA9>(0x00000B, 3); return true;
    // src/intro/show_title_screen.asm:33 LDA #11
    // Overlapping static entry reached from 0xC3F3FB.
    case 0xF3FD: c.execute<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:34 JSL UNKNOWN_C08D79
    case 0xF3FE: c.execute<0x22>(0xC08D79, 4); return true;
    // src/intro/show_title_screen.asm:35 LDA #3
    case 0xF402: if (c.p & 0x20) c.execute<0xA9>(0x000003, 2); else c.execute<0xA9>(0x000003, 3); return true;
    // src/intro/show_title_screen.asm:35 LDA #3
    // Overlapping static entry reached from 0xC3F402.
    case 0xF404: c.execute<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:36 JSL SET_OAM_SIZE
    case 0xF405: c.execute<0x22>(0xC08D92, 4); return true;
    // src/intro/show_title_screen.asm:37 LDY #$0000
    case 0xF409: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:37 LDY #$0000
    // Overlapping static entry reached from 0xC3F409.
    case 0xF40B: c.execute<0x00>(0x0000A2, 2); return true;
    // src/intro/show_title_screen.asm:38 LDX #$5800
    case 0xF40C: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x005800, 3); return true;
    // src/intro/show_title_screen.asm:38 LDX #$5800
    // Overlapping static entry reached from 0xC3F40C.
    case 0xF40E: c.execute<0x58>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:39 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xF40F: c.execute<0x98>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:40 JSL SET_BG1_VRAM_LOCATION
    case 0xF410: c.execute<0x22>(0xC08D9E, 4); return true;
    // src/intro/show_title_screen.asm:41 STZ BG3_X_POS
    case 0xF414: c.execute<0x9C>(0x000039, 3); return true;
    // src/intro/show_title_screen.asm:42 STZ BG3_Y_POS
    case 0xF417: c.execute<0x9C>(0x00003B, 3); return true;
    // src/intro/show_title_screen.asm:43 STZ BG2_Y_POS
    case 0xF41A: c.execute<0x9C>(0x000037, 3); return true;
    // src/intro/show_title_screen.asm:44 STZ BG2_X_POS
    case 0xF41D: c.execute<0x9C>(0x000035, 3); return true;
    // src/intro/show_title_screen.asm:45 STZ BG1_Y_POS
    case 0xF420: c.execute<0x9C>(0x000033, 3); return true;
    // src/intro/show_title_screen.asm:46 STZ BG1_X_POS
    case 0xF423: c.execute<0x9C>(0x000031, 3); return true;
    // src/intro/show_title_screen.asm:47 JSL UPDATE_SCREEN
    case 0xF426: c.execute<0x22>(0xC08B26, 4); return true;
    // src/intro/show_title_screen.asm:48 STZ BG3_X_POS
    case 0xF42A: c.execute<0x9C>(0x000039, 3); return true;
    // src/intro/show_title_screen.asm:49 STZ BG3_Y_POS
    case 0xF42D: c.execute<0x9C>(0x00003B, 3); return true;
    // src/intro/show_title_screen.asm:50 STZ BG2_Y_POS
    case 0xF430: c.execute<0x9C>(0x000037, 3); return true;
    // src/intro/show_title_screen.asm:51 STZ BG2_X_POS
    case 0xF433: c.execute<0x9C>(0x000035, 3); return true;
    // src/intro/show_title_screen.asm:52 STZ BG1_Y_POS
    case 0xF436: c.execute<0x9C>(0x000033, 3); return true;
    // src/intro/show_title_screen.asm:53 STZ BG1_X_POS
    case 0xF439: c.execute<0x9C>(0x000031, 3); return true;
    // src/intro/show_title_screen.asm:54 JSL UPDATE_SCREEN
    case 0xF43C: c.execute<0x22>(0xC08B26, 4); return true;
    // src/intro/show_title_screen.asm:55 JSL UNKNOWN_C0EBE0
    case 0xF440: c.execute<0x22>(0xC0EBE0, 4); return true;
    // src/intro/show_title_screen.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xF444: c.execute<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:57 LDA #$11
    case 0xF446: if (c.p & 0x20) c.execute<0xA9>(0x000011, 2); else c.execute<0xA9>(0x008D11, 3); return true;
    // src/intro/show_title_screen.asm:58 STA TM_MIRROR
    case 0xF448: c.execute<0x8D>(0x00001A, 3); return true;
    // src/intro/show_title_screen.asm:58 STA TM_MIRROR
    // Overlapping static entry reached from 0xC3F446.
    case 0xF449: c.execute<0x1A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:58 STA TM_MIRROR
    // Overlapping static entry reached from 0xC3F449.
    case 0xF44A: c.execute<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:59 JSL OAM_CLEAR
    case 0xF44B: c.execute<0x22>(0xC088B1, 4); return true;
    // src/intro/show_title_screen.asm:61 LDY #0
    case 0xF44F: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:61 LDY #0
    // Overlapping static entry reached from 0xC3F44F.
    case 0xF451: c.execute<0x00>(0x0000BB, 2); return true;
    // src/intro/show_title_screen.asm:62 TYX
    case 0xF452: c.execute<0xBB>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:63 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    case 0xF453: if (c.p & 0x20) c.execute<0xA9>(0x000014, 2); else c.execute<0xA9>(0x000314, 3); return true;
    // src/intro/show_title_screen.asm:63 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    // Overlapping static entry reached from 0xC3F453.
    case 0xF455: c.execute<0x03>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:64 JSL INIT_ENTITY_WIPE
    case 0xF456: c.execute<0x22>(0xC092F5, 4); return true;
    // src/intro/show_title_screen.asm:64 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC3F455.
    case 0xF457: c.execute<0xF5>(0x000092, 2); return true;
    // src/intro/show_title_screen.asm:64 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC3F457.
    case 0xF459: if (c.p & 0x10) c.execute<0xC0>(0x00009C, 2); else c.execute<0xC0>(0x00419C, 3); return true;
    // src/intro/show_title_screen.asm:65 STZ ACTIONSCRIPT_STATE
    case 0xF45A: c.execute<0x9C>(0x009641, 3); return true;
    // src/intro/show_title_screen.asm:65 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC3F459.
    case 0xF45B: c.execute<0x41>(0x000096, 2); return true;
    // src/intro/show_title_screen.asm:65 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC3F459.
    case 0xF45C: c.execute<0x96>(0x0000AD, 2); return true;
    // src/intro/show_title_screen.asm:66 LDA TITLE_SCREEN_QUICK_MODE
    case 0xF45D: c.execute<0xAD>(0x009F75, 3); return true;
    // src/intro/show_title_screen.asm:66 LDA TITLE_SCREEN_QUICK_MODE
    // Overlapping static entry reached from 0xC3F45C.
    case 0xF45E: c.execute<0x75>(0x00009F, 2); return true;
    // include/macros.asm:778 BEQ :+
    case 0xF460: c.execute<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    case 0xF462: c.execute<0x4C>(0x00F50A, 3); return true;
    // src/intro/show_title_screen.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xF465: c.execute<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:69 STZ @LOCAL00
    case 0xF467: c.execute<0x64>(0x00000E, 2); return true;
    // src/intro/show_title_screen.asm:70 LDX #.LOWORD(PALETTES)
    case 0xF469: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000200, 3); return true;
    // src/intro/show_title_screen.asm:70 LDX #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC3F469.
    case 0xF46B: c.execute<0x02>(0x0000C2, 2); return true;
    // src/intro/show_title_screen.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xF46C: c.execute<0xC2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:72 LDA #BPP4PALETTE_SIZE * 16
    case 0xF46E: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000200, 3); return true;
    // src/intro/show_title_screen.asm:72 LDA #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC3F46E.
    case 0xF470: c.execute<0x02>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:73 JSL MEMSET16
    case 0xF471: c.execute<0x22>(0xC08EFC, 4); return true;
    // src/intro/show_title_screen.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xF475: c.execute<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:75 LDA #PALETTE_UPLOAD::FULL
    case 0xF477: if (c.p & 0x20) c.execute<0xA9>(0x000018, 2); else c.execute<0xA9>(0x008D18, 3); return true;
    // src/intro/show_title_screen.asm:76 STA PALETTE_UPLOAD_MODE
    case 0xF479: c.execute<0x8D>(0x000030, 3); return true;
    // src/intro/show_title_screen.asm:76 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC3F477.
    case 0xF47A: c.execute<0x30>(0x000000, 2); return true;
    // src/intro/show_title_screen.asm:77 JSL UNKNOWN_C08744
    case 0xF47C: c.execute<0x22>(0xC08744, 4); return true;
    // src/intro/show_title_screen.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xF480: c.execute<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:79 LDA #$0F
    case 0xF482: if (c.p & 0x20) c.execute<0xA9>(0x00000F, 2); else c.execute<0xA9>(0x008D0F, 3); return true;
    // src/intro/show_title_screen.asm:80 STA INIDISP_MIRROR
    case 0xF484: c.execute<0x8D>(0x00000D, 3); return true;
    // src/intro/show_title_screen.asm:80 STA INIDISP_MIRROR
    // Overlapping static entry reached from 0xC3F482.
    case 0xF485: c.execute<0x0D>(0x002200, 3); return true;
    // src/intro/show_title_screen.asm:81 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xF487: c.execute<0x22>(0xC08756, 4); return true;
    // src/intro/show_title_screen.asm:81 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC3F485.
    case 0xF488: c.execute<0x56>(0x000087, 2); return true;
    // src/intro/show_title_screen.asm:81 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC3F488.
    case 0xF48A: if (c.p & 0x10) c.execute<0xC0>(0x0000E2, 2); else c.execute<0xC0>(0x0020E2, 3); return true;
    // src/intro/show_title_screen.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xF48B: c.execute<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:82 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3F48A.
    case 0xF48C: c.execute<0x20>(0x00309C, 3); return true;
    // src/intro/show_title_screen.asm:83 STZ PALETTE_UPLOAD_MODE
    case 0xF48D: c.execute<0x9C>(0x000030, 3); return true;
    // src/intro/show_title_screen.asm:83 STZ PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC3F48C.
    case 0xF48F: c.execute<0x00>(0x0000C2, 2); return true;
    // src/intro/show_title_screen.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xF490: c.execute<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xF492: if (c.p & 0x20) c.execute<0xA9>(0x00007C, 2); else c.execute<0xA9>(0x00AE7C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3F492.
    case 0xF494: c.execute<0xAE>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    case 0xF495: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xF497: if (c.p & 0x20) c.execute<0xA9>(0x0000E1, 2); else c.execute<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3F497.
    case 0xF499: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xF49A: c.execute<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    case 0xF49C: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Overlapping static entry reached from 0xC3F49C.
    case 0xF49E: c.execute<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    case 0xF49F: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    case 0xF4A1: c.execute<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    case 0xF4A2: c.execute<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    case 0xF4A4: c.execute<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    case 0xF4A5: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    case 0xF4A7: c.execute<0x64>(0x000009, 2); return true;
    // src/intro/show_title_screen.asm:87 REP #PROC_FLAGS::ACCUM8
    case 0xF4A9: c.execute<0xC2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:88 LDA #BPP4PALETTE_SIZE * 8
    case 0xF4AB: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000100, 3); return true;
    // src/intro/show_title_screen.asm:88 LDA #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC3F4AB.
    case 0xF4AD: c.execute<0x01>(0x000018, 2); return true;
    // src/intro/show_title_screen.asm:89 CLC
    case 0xF4AE: c.execute<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:90 ADC @VIRTUAL06
    case 0xF4AF: c.execute<0x65>(0x000006, 2); return true;
    // src/intro/show_title_screen.asm:91 STA @VIRTUAL06
    case 0xF4B1: c.execute<0x85>(0x000006, 2); return true;
    // src/intro/show_title_screen.asm:92 STA @LOCAL01
    case 0xF4B3: c.execute<0x85>(0x000012, 2); return true;
    // src/intro/show_title_screen.asm:93 LDA @VIRTUAL06+2
    case 0xF4B5: c.execute<0xA5>(0x000008, 2); return true;
    // src/intro/show_title_screen.asm:94 STA @LOCAL01+2
    case 0xF4B7: c.execute<0x85>(0x000014, 2); return true;
    // src/intro/show_title_screen.asm:95 JSL DECOMP
    case 0xF4B9: c.execute<0x22>(0xC41A9E, 4); return true;
    // src/intro/show_title_screen.asm:96 JSL UNKNOWN_C496F9
    case 0xF4BD: c.execute<0x22>(0xC496F9, 4); return true;
    // src/intro/show_title_screen.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xF4C1: c.execute<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:98 STZ @LOCAL00
    case 0xF4C3: c.execute<0x64>(0x00000E, 2); return true;
    // src/intro/show_title_screen.asm:99 LDX #.LOWORD(PALETTES)
    case 0xF4C5: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000200, 3); return true;
    // src/intro/show_title_screen.asm:99 LDX #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC3F4C5.
    case 0xF4C7: c.execute<0x02>(0x0000C2, 2); return true;
    // src/intro/show_title_screen.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xF4C8: c.execute<0xC2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:101 LDA #BPP4PALETTE_SIZE * 16
    case 0xF4CA: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000200, 3); return true;
    // src/intro/show_title_screen.asm:101 LDA #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC3F4CA.
    case 0xF4CC: c.execute<0x02>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:102 JSL MEMSET16
    case 0xF4CD: c.execute<0x22>(0xC08EFC, 4); return true;
    // src/intro/show_title_screen.asm:103 LDX #$0100
    case 0xF4D1: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000100, 3); return true;
    // src/intro/show_title_screen.asm:103 LDX #$0100
    // Overlapping static entry reached from 0xC3F4D1.
    case 0xF4D3: c.execute<0x01>(0x0000A9, 2); return true;
    // src/intro/show_title_screen.asm:104 LDA #60
    case 0xF4D4: if (c.p & 0x20) c.execute<0xA9>(0x00003C, 2); else c.execute<0xA9>(0x00003C, 3); return true;
    // src/intro/show_title_screen.asm:104 LDA #60
    // Overlapping static entry reached from 0xC3F4D3.
    case 0xF4D5: c.execute<0x3C>(0x002200, 3); return true;
    // src/intro/show_title_screen.asm:104 LDA #60
    // Overlapping static entry reached from 0xC3F4D4.
    case 0xF4D6: c.execute<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:105 JSL UNKNOWN_C496E7
    case 0xF4D7: c.execute<0x22>(0xC496E7, 4); return true;
    // src/intro/show_title_screen.asm:105 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC3F4D5.
    case 0xF4D8: c.execute<0xE7>(0x000096, 2); return true;
    // src/intro/show_title_screen.asm:105 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC3F4D8.
    case 0xF4DA: c.execute<0xC4>(0x0000E2, 2); return true;
    // src/intro/show_title_screen.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xF4DB: c.execute<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:106 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3F4DA.
    case 0xF4DC: c.execute<0x20>(0x0018A9, 3); return true;
    // src/intro/show_title_screen.asm:107 LDA #PALETTE_UPLOAD::FULL
    case 0xF4DD: if (c.p & 0x20) c.execute<0xA9>(0x000018, 2); else c.execute<0xA9>(0x008D18, 3); return true;
    // src/intro/show_title_screen.asm:108 STA PALETTE_UPLOAD_MODE
    case 0xF4DF: c.execute<0x8D>(0x000030, 3); return true;
    // src/intro/show_title_screen.asm:108 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC3F4DD.
    case 0xF4E0: c.execute<0x30>(0x000000, 2); return true;
    // src/intro/show_title_screen.asm:109 LDX #0
    case 0xF4E2: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:109 LDX #0
    // Overlapping static entry reached from 0xC3F4E2.
    case 0xF4E4: c.execute<0x00>(0x000086, 2); return true;
    // src/intro/show_title_screen.asm:110 STX @LOCAL03
    case 0xF4E5: c.execute<0x86>(0x000018, 2); return true;
    // src/intro/show_title_screen.asm:111 BRA @UNKNOWN4
    case 0xF4E7: c.execute<0x80>(0x00000D, 2); return true;
    // src/intro/show_title_screen.asm:113 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xF4E9: c.execute<0x22>(0xC426ED, 4); return true;
    // src/intro/show_title_screen.asm:114 JSL UNKNOWN_C1004E
    case 0xF4ED: c.execute<0x22>(0xC1004E, 4); return true;
    // src/intro/show_title_screen.asm:115 LDX @LOCAL03
    case 0xF4F1: c.execute<0xA6>(0x000018, 2); return true;
    // src/intro/show_title_screen.asm:116 INX
    case 0xF4F3: c.execute<0xE8>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:117 STX @LOCAL03
    case 0xF4F4: c.execute<0x86>(0x000018, 2); return true;
    // src/intro/show_title_screen.asm:117 STX @LOCAL03
    // Overlapping static entry reached from 0xC3F546.
    case 0xF4F5: c.execute<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:119 STX @VIRTUAL02
    case 0xF4F6: c.execute<0x86>(0x000002, 2); return true;
    // src/intro/show_title_screen.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xF4F8: c.execute<0xC2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:121 LDA #60
    case 0xF4FA: if (c.p & 0x20) c.execute<0xA9>(0x00003C, 2); else c.execute<0xA9>(0x00003C, 3); return true;
    // src/intro/show_title_screen.asm:121 LDA #60
    // Overlapping static entry reached from 0xC3F4FA.
    case 0xF4FC: c.execute<0x00>(0x000018, 2); return true;
    // src/intro/show_title_screen.asm:122 CLC
    case 0xF4FD: c.execute<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:123 SBC @VIRTUAL02
    case 0xF4FE: c.execute<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    case 0xF500: c.execute<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    case 0xF502: c.execute<0x10>(0x0000E5, 2); return true;
    // include/macros.asm:800 BRA :++
    case 0xF504: c.execute<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    case 0xF506: c.execute<0x30>(0x0000E1, 2); return true;
    // src/intro/show_title_screen.asm:125 BRA @UNKNOWN11
    case 0xF508: c.execute<0x80>(0x00002A, 2); return true;
    // src/intro/show_title_screen.asm:127 LDX #1
    case 0xF50A: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/intro/show_title_screen.asm:127 LDX #1
    // Overlapping static entry reached from 0xC3F50A.
    case 0xF50C: c.execute<0x00>(0x0000A9, 2); return true;
    // src/intro/show_title_screen.asm:128 LDA #4
    case 0xF50D: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/intro/show_title_screen.asm:128 LDA #4
    // Overlapping static entry reached from 0xC3F50D.
    case 0xF50F: c.execute<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:129 JSL FADE_IN
    case 0xF510: c.execute<0x22>(0xC0886C, 4); return true;
    // src/intro/show_title_screen.asm:130 LDX #0
    case 0xF514: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:130 LDX #0
    // Overlapping static entry reached from 0xC3F514.
    case 0xF516: c.execute<0x00>(0x000086, 2); return true;
    // src/intro/show_title_screen.asm:131 STX @LOCAL04
    case 0xF517: c.execute<0x86>(0x00001A, 2); return true;
    // src/intro/show_title_screen.asm:132 BRA @UNKNOWN9
    case 0xF519: c.execute<0x80>(0x000009, 2); return true;
    // src/intro/show_title_screen.asm:134 JSL UNKNOWN_C1004E
    case 0xF51B: c.execute<0x22>(0xC1004E, 4); return true;
    // src/intro/show_title_screen.asm:134 JSL UNKNOWN_C1004E
    // Overlapping static entry reached from 0xC3F54C.
    case 0xF51E: c.execute<0xC1>(0x0000A6, 2); return true;
    // src/intro/show_title_screen.asm:135 LDX @LOCAL04
    case 0xF51F: c.execute<0xA6>(0x00001A, 2); return true;
    // src/intro/show_title_screen.asm:135 LDX @LOCAL04
    // Overlapping static entry reached from 0xC3F51E.
    case 0xF520: c.execute<0x1A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:136 INX
    case 0xF521: c.execute<0xE8>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:137 STX @LOCAL04
    case 0xF522: c.execute<0x86>(0x00001A, 2); return true;
    // src/intro/show_title_screen.asm:139 STX @VIRTUAL02
    case 0xF524: c.execute<0x86>(0x000002, 2); return true;
    // src/intro/show_title_screen.asm:140 LDA #60
    case 0xF526: if (c.p & 0x20) c.execute<0xA9>(0x00003C, 2); else c.execute<0xA9>(0x00003C, 3); return true;
    // src/intro/show_title_screen.asm:140 LDA #60
    // Overlapping static entry reached from 0xC3F526.
    case 0xF528: c.execute<0x00>(0x000018, 2); return true;
    // src/intro/show_title_screen.asm:141 CLC
    case 0xF529: c.execute<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:142 SBC @VIRTUAL02
    case 0xF52A: c.execute<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    case 0xF52C: c.execute<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    case 0xF52E: c.execute<0x10>(0x0000EB, 2); return true;
    // include/macros.asm:800 BRA :++
    case 0xF530: c.execute<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    case 0xF532: c.execute<0x30>(0x0000E7, 2); return true;
    // src/intro/show_title_screen.asm:145 LDA #0
    case 0xF534: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:145 LDA #0
    // Overlapping static entry reached from 0xC3F534.
    case 0xF536: c.execute<0x00>(0x000085, 2); return true;
    // src/intro/show_title_screen.asm:146 STA @VIRTUAL02
    case 0xF537: c.execute<0x85>(0x000002, 2); return true;
    // src/intro/show_title_screen.asm:147 BRA @UNKNOWN15
    case 0xF539: c.execute<0x80>(0x000027, 2); return true;
    // src/intro/show_title_screen.asm:149 LDA @VIRTUAL04
    case 0xF53B: c.execute<0xA5>(0x000004, 2); return true;
    // src/intro/show_title_screen.asm:150 BNE @UNKNOWN14
    case 0xF53D: c.execute<0xD0>(0x00001F, 2); return true;
    // src/intro/show_title_screen.asm:151 LDA PAD_PRESS
    case 0xF53F: c.execute<0xAD>(0x00006D, 3); return true;
    // src/intro/show_title_screen.asm:152 AND #PAD::A_BUTTON
    case 0xF542: if (c.p & 0x20) c.execute<0x29>(0x000080, 2); else c.execute<0x29>(0x000080, 3); return true;
    // src/intro/show_title_screen.asm:152 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC3F542.
    case 0xF544: c.execute<0x00>(0x0000D0, 2); return true;
    // src/intro/show_title_screen.asm:153 BNE @UNKNOWN13
    case 0xF545: c.execute<0xD0>(0x000010, 2); return true;
    // src/intro/show_title_screen.asm:153 BNE @UNKNOWN13
    // Overlapping static entry reached from 0xC3F554.
    case 0xF546: c.execute<0x10>(0x0000AD, 2); return true;
    // src/intro/show_title_screen.asm:154 LDA PAD_PRESS
    case 0xF547: c.execute<0xAD>(0x00006D, 3); return true;
    // src/intro/show_title_screen.asm:154 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC3F546.
    case 0xF548: c.execute<0x6D>(0x002900, 3); return true;
    // src/intro/show_title_screen.asm:155 AND #PAD::B_BUTTON
    case 0xF54A: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x008000, 3); return true;
    // src/intro/show_title_screen.asm:155 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC3F548.
    case 0xF54B: c.execute<0x00>(0x000080, 2); return true;
    // src/intro/show_title_screen.asm:155 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC3F54A.
    case 0xF54C: c.execute<0x80>(0x0000D0, 2); return true;
    // src/intro/show_title_screen.asm:156 BNE @UNKNOWN13
    case 0xF54D: c.execute<0xD0>(0x000008, 2); return true;
    // src/intro/show_title_screen.asm:157 LDA PAD_PRESS
    case 0xF54F: c.execute<0xAD>(0x00006D, 3); return true;
    // src/intro/show_title_screen.asm:158 AND #PAD::START_BUTTON
    case 0xF552: if (c.p & 0x20) c.execute<0x29>(0x000000, 2); else c.execute<0x29>(0x001000, 3); return true;
    // src/intro/show_title_screen.asm:158 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC3F552.
    case 0xF554: c.execute<0x10>(0x0000F0, 2); return true;
    // src/intro/show_title_screen.asm:159 BEQ @UNKNOWN14
    case 0xF555: c.execute<0xF0>(0x000007, 2); return true;
    // src/intro/show_title_screen.asm:159 BEQ @UNKNOWN14
    // Overlapping static entry reached from 0xC3F554.
    case 0xF556: c.execute<0x07>(0x0000A9, 2); return true;
    // src/intro/show_title_screen.asm:161 LDA #1
    case 0xF557: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/intro/show_title_screen.asm:161 LDA #1
    // Overlapping static entry reached from 0xC3F556.
    case 0xF558: c.execute<0x01>(0x000000, 2); return true;
    // src/intro/show_title_screen.asm:161 LDA #1
    // Overlapping static entry reached from 0xC3F557.
    case 0xF559: c.execute<0x00>(0x000085, 2); return true;
    // src/intro/show_title_screen.asm:162 STA @VIRTUAL02
    case 0xF55A: c.execute<0x85>(0x000002, 2); return true;
    // src/intro/show_title_screen.asm:163 BRA @UNKNOWN16
    case 0xF55C: c.execute<0x80>(0x000011, 2); return true;
    // src/intro/show_title_screen.asm:165 JSL UNKNOWN_C1004E
    case 0xF55E: c.execute<0x22>(0xC1004E, 4); return true;
    // src/intro/show_title_screen.asm:167 LDA ACTIONSCRIPT_STATE
    case 0xF562: c.execute<0xAD>(0x009641, 3); return true;
    // src/intro/show_title_screen.asm:168 BEQ @UNKNOWN12
    case 0xF565: c.execute<0xF0>(0x0000D4, 2); return true;
    // src/intro/show_title_screen.asm:169 LDA ACTIONSCRIPT_STATE
    case 0xF567: c.execute<0xAD>(0x009641, 3); return true;
    // src/intro/show_title_screen.asm:170 CMP #2
    case 0xF56A: if (c.p & 0x20) c.execute<0xC9>(0x000002, 2); else c.execute<0xC9>(0x000002, 3); return true;
    // src/intro/show_title_screen.asm:170 CMP #2
    // Overlapping static entry reached from 0xC3F56A.
    case 0xF56C: c.execute<0x00>(0x0000F0, 2); return true;
    // src/intro/show_title_screen.asm:171 BEQ @UNKNOWN12
    case 0xF56D: c.execute<0xF0>(0x0000CC, 2); return true;
    // src/intro/show_title_screen.asm:173 LDA TITLE_SCREEN_QUICK_MODE
    case 0xF56F: c.execute<0xAD>(0x009F75, 3); return true;
    // src/intro/show_title_screen.asm:174 BNE @UNKNOWN17
    case 0xF572: c.execute<0xD0>(0x00000B, 2); return true;
    // src/intro/show_title_screen.asm:175 LDA ACTIONSCRIPT_STATE
    case 0xF574: c.execute<0xAD>(0x009641, 3); return true;
    // src/intro/show_title_screen.asm:176 BNE @UNKNOWN17
    case 0xF577: c.execute<0xD0>(0x000006, 2); return true;
    // src/intro/show_title_screen.asm:177 JSL UNKNOWN_EF04DC
    case 0xF579: c.execute<0x22>(0xEF04DC, 4); return true;
    // src/intro/show_title_screen.asm:178 STA @VIRTUAL02
    case 0xF57D: c.execute<0x85>(0x000002, 2); return true;
    // src/intro/show_title_screen.asm:180 LDY #0
    case 0xF57F: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:180 LDY #0
    // Overlapping static entry reached from 0xC3F57F.
    case 0xF581: c.execute<0x00>(0x0000A2, 2); return true;
    // src/intro/show_title_screen.asm:181 LDX #4
    case 0xF582: if (c.p & 0x10) c.execute<0xA2>(0x000004, 2); else c.execute<0xA2>(0x000004, 3); return true;
    // src/intro/show_title_screen.asm:181 LDX #4
    // Overlapping static entry reached from 0xC3F582.
    case 0xF584: c.execute<0x00>(0x0000A9, 2); return true;
    // src/intro/show_title_screen.asm:182 LDA #1
    case 0xF585: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/intro/show_title_screen.asm:182 LDA #1
    // Overlapping static entry reached from 0xC3F585.
    case 0xF587: c.execute<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:183 JSL FADE_OUT_WITH_MOSAIC
    case 0xF588: c.execute<0x22>(0xC08814, 4); return true;
    // src/intro/show_title_screen.asm:184 LDA @VIRTUAL04
    case 0xF58C: c.execute<0xA5>(0x000004, 2); return true;
    // src/intro/show_title_screen.asm:185 BNE @UNKNOWN18
    case 0xF58E: c.execute<0xD0>(0x000012, 2); return true;
    // src/intro/show_title_screen.asm:186 STZ ACTIONSCRIPT_STATE
    case 0xF590: c.execute<0x9C>(0x009641, 3); return true;
    // src/intro/show_title_screen.asm:187 LDA #0
    case 0xF593: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:187 LDA #0
    // Overlapping static entry reached from 0xC3F593.
    case 0xF595: c.execute<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:188 JSL UNKNOWN_C474A8
    case 0xF596: c.execute<0x22>(0xC474A8, 4); return true;
    // src/intro/show_title_screen.asm:189 JSL UNKNOWN_C0927C
    case 0xF59A: c.execute<0x22>(0xC0927C, 4); return true;
    // src/intro/show_title_screen.asm:190 LDA @VIRTUAL02
    case 0xF59E: c.execute<0xA5>(0x000002, 2); return true;
    // src/intro/show_title_screen.asm:191 BRA @UNKNOWN23
    case 0xF5A0: c.execute<0x80>(0x000055, 2); return true;
    // src/intro/show_title_screen.asm:193 LDY #0
    case 0xF5A2: if (c.p & 0x10) c.execute<0xA0>(0x000000, 2); else c.execute<0xA0>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:193 LDY #0
    // Overlapping static entry reached from 0xC3F5A2.
    case 0xF5A4: c.execute<0x00>(0x000084, 2); return true;
    // src/intro/show_title_screen.asm:194 STY @LOCAL02
    case 0xF5A5: c.execute<0x84>(0x000016, 2); return true;
    // src/intro/show_title_screen.asm:195 BRA @UNKNOWN22
    case 0xF5A7: c.execute<0x80>(0x00002C, 2); return true;
    // src/intro/show_title_screen.asm:197 TYA
    case 0xF5A9: c.execute<0x98>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:198 ASL
    case 0xF5AA: c.execute<0x0A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:199 TAX
    case 0xF5AB: c.execute<0xAA>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:200 LDA ENTITY_SCRIPT_TABLE,X
    case 0xF5AC: c.execute<0xBD>(0x000A62, 3); return true;
    // src/intro/show_title_screen.asm:201 CMP #EVENT_SCRIPT::TITLE_SCREEN_1
    case 0xF5AF: if (c.p & 0x20) c.execute<0xC9>(0x000014, 2); else c.execute<0xC9>(0x000314, 3); return true;
    // src/intro/show_title_screen.asm:201 CMP #EVENT_SCRIPT::TITLE_SCREEN_1
    // Overlapping static entry reached from 0xC3F5AF.
    case 0xF5B1: c.execute<0x03>(0x000090, 2); return true;
    // src/intro/show_title_screen.asm:202 BCC @UNKNOWN21
    case 0xF5B2: c.execute<0x90>(0x00000C, 2); return true;
    // src/intro/show_title_screen.asm:202 BCC @UNKNOWN21
    // Overlapping static entry reached from 0xC3F5B1.
    case 0xF5B3: c.execute<0x0C>(0x001EC9, 3); return true;
    // src/intro/show_title_screen.asm:203 CMP #EVENT_SCRIPT::TITLE_SCREEN_11
    case 0xF5B4: if (c.p & 0x20) c.execute<0xC9>(0x00001E, 2); else c.execute<0xC9>(0x00031E, 3); return true;
    // src/intro/show_title_screen.asm:203 CMP #EVENT_SCRIPT::TITLE_SCREEN_11
    // Overlapping static entry reached from 0xC3F5B4.
    case 0xF5B6: c.execute<0x03>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    case 0xF5B7: c.execute<0xF0>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Overlapping static entry reached from 0xC3F5B6.
    case 0xF5B8: c.execute<0x02>(0x0000B0, 2); return true;
    // include/macros.asm:767 BCS dest
    case 0xF5B9: c.execute<0xB0>(0x000005, 2); return true;
    // src/intro/show_title_screen.asm:205 TYA
    case 0xF5BB: c.execute<0x98>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:206 JSL UNKNOWN_C09C35
    case 0xF5BC: c.execute<0x22>(0xC09C35, 4); return true;
    // src/intro/show_title_screen.asm:208 LDY @LOCAL02
    case 0xF5C0: c.execute<0xA4>(0x000016, 2); return true;
    // src/intro/show_title_screen.asm:209 TYA
    case 0xF5C2: c.execute<0x98>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:210 ASL
    case 0xF5C3: c.execute<0x0A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:211 CLC
    case 0xF5C4: c.execute<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:212 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xF5C5: if (c.p & 0x20) c.execute<0x69>(0x00006A, 2); else c.execute<0x69>(0x00116A, 3); return true;
    // src/intro/show_title_screen.asm:212 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC3F5C5.
    case 0xF5C7: c.execute<0x11>(0x0000AA, 2); return true;
    // src/intro/show_title_screen.asm:213 TAX
    case 0xF5C8: c.execute<0xAA>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:214 LDA __BSS_START__,X
    case 0xF5C9: c.execute<0xBD>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:215 AND #$7FFF
    case 0xF5CC: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x007FFF, 3); return true;
    // src/intro/show_title_screen.asm:215 AND #$7FFF
    // Overlapping static entry reached from 0xC3F5CC.
    case 0xF5CE: c.execute<0x7F>(0x00009D, 4); return true;
    // src/intro/show_title_screen.asm:216 STA __BSS_START__,X
    case 0xF5CF: c.execute<0x9D>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:217 INY
    case 0xF5D2: c.execute<0xC8>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:218 STY @LOCAL02
    case 0xF5D3: c.execute<0x84>(0x000016, 2); return true;
    // src/intro/show_title_screen.asm:220 CPY #MAX_ENTITIES
    case 0xF5D5: if (c.p & 0x10) c.execute<0xC0>(0x00001E, 2); else c.execute<0xC0>(0x00001E, 3); return true;
    // src/intro/show_title_screen.asm:220 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC3F5D5.
    case 0xF5D7: c.execute<0x00>(0x000090, 2); return true;
    // src/intro/show_title_screen.asm:221 BCC @UNKNOWN19
    case 0xF5D8: c.execute<0x90>(0x0000CF, 2); return true;
    // src/intro/show_title_screen.asm:222 JSL UNKNOWN_C08726
    case 0xF5DA: c.execute<0x22>(0xC08726, 4); return true;
    // src/intro/show_title_screen.asm:223 JSL RELOAD_MAP
    case 0xF5DE: c.execute<0x22>(0xC018F3, 4); return true;
    // src/intro/show_title_screen.asm:224 JSL UNDRAW_FLYOVER_TEXT
    case 0xF5E2: c.execute<0x22>(0xC4800B, 4); return true;
    // src/intro/show_title_screen.asm:225 SEP #PROC_FLAGS::ACCUM8
    case 0xF5E6: c.execute<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:226 LDA #$17
    case 0xF5E8: if (c.p & 0x20) c.execute<0xA9>(0x000017, 2); else c.execute<0xA9>(0x008D17, 3); return true;
    // src/intro/show_title_screen.asm:227 STA TM_MIRROR
    case 0xF5EA: c.execute<0x8D>(0x00001A, 3); return true;
    // src/intro/show_title_screen.asm:227 STA TM_MIRROR
    // Overlapping static entry reached from 0xC3F5E8.
    case 0xF5EB: c.execute<0x1A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:227 STA TM_MIRROR
    // Overlapping static entry reached from 0xC3F5EB.
    case 0xF5EC: c.execute<0x00>(0x0000A2, 2); return true;
    // src/intro/show_title_screen.asm:228 LDX #1
    case 0xF5ED: if (c.p & 0x10) c.execute<0xA2>(0x000001, 2); else c.execute<0xA2>(0x000001, 3); return true;
    // src/intro/show_title_screen.asm:228 LDX #1
    // Overlapping static entry reached from 0xC3F5ED.
    case 0xF5EF: c.execute<0x00>(0x0000C2, 2); return true;
    // src/intro/show_title_screen.asm:229 REP #PROC_FLAGS::ACCUM8
    case 0xF5F0: c.execute<0xC2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:230 TXA
    case 0xF5F2: c.execute<0x8A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:231 JSL FADE_IN
    case 0xF5F3: c.execute<0x22>(0xC0886C, 4); return true;
    // include/macros.asm:25 PLD
    case 0xF5F7: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xF5F8: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF5F9: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xF5FB: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xF5FC: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xF5FD: if (c.p & 0x20) c.execute<0x69>(0x0000E8, 2); else c.execute<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3F5FD.
    case 0xF5FF: c.execute<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xF600: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:10 LDA #0
    case 0xF601: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F5F9.asm:10 LDA #0
    // Overlapping static entry reached from 0xC3F601.
    case 0xF603: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F5F9.asm:11 STA @VIRTUAL04
    case 0xF604: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:12 LDA TILEMAP_UPDATE_TILE_COUNT
    case 0xF606: c.execute<0xAD>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F5F9.asm:13 ASL
    case 0xF609: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:14 STA @LOCAL03
    case 0xF60A: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/C3/C3F5F9.asm:15 LDA #0
    case 0xF60C: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F5F9.asm:15 LDA #0
    // Overlapping static entry reached from 0xC3F60C.
    case 0xF60E: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F5F9.asm:16 STA @VIRTUAL02
    case 0xF60F: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:17 STA @LOCAL02
    case 0xF611: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/C3/C3F5F9.asm:18 BRA @UNKNOWN2
    case 0xF613: c.execute<0x80>(0x00005F, 2); return true;
    // src/unknown/C3/C3F5F9.asm:20 LDA TILEMAP_UPDATE_TILE_X
    case 0xF615: c.execute<0xAD>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F5F9.asm:21 AND #$001F
    case 0xF618: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/C3/C3F5F9.asm:21 AND #$001F
    // Overlapping static entry reached from 0xC3F618.
    case 0xF61A: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F5F9.asm:22 STA @VIRTUAL02
    case 0xF61B: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:23 LDA TILEMAP_UPDATE_TILE_Y
    case 0xF61D: c.execute<0xAD>(0x009F7C, 3); return true;
    // src/unknown/C3/C3F5F9.asm:24 ASL
    case 0xF620: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:25 ASL
    case 0xF621: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:26 ASL
    case 0xF622: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:27 ASL
    case 0xF623: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:28 ASL
    case 0xF624: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:29 CLC
    case 0xF625: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:30 ADC TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF626: c.execute<0x6D>(0x009F84, 3); return true;
    // src/unknown/C3/C3F5F9.asm:31 CLC
    case 0xF629: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:32 ADC @VIRTUAL02
    case 0xF62A: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:33 STA @LOCAL01
    case 0xF62C: c.execute<0x85>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xF62E: c.execute<0xAD>(0x009F86, 3); return true;
    // include/macros.asm:837 STA dest
    case 0xF631: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF633: c.execute<0xAD>(0x009F88, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF636: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F5F9.asm:35 LDA @VIRTUAL04
    case 0xF638: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:36 ASL
    case 0xF63A: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:37 CLC
    case 0xF63B: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:38 ADC @VIRTUAL06
    case 0xF63C: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F5F9.asm:39 STA @VIRTUAL06
    case 0xF63E: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F5F9.asm:40 STA @LOCAL00
    case 0xF640: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3F5F9.asm:41 LDA @VIRTUAL06+2
    case 0xF642: c.execute<0xA5>(0x000008, 2); return true;
    // src/unknown/C3/C3F5F9.asm:42 STA @LOCAL00+2
    case 0xF644: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F5F9.asm:43 LDA @LOCAL01
    case 0xF646: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3F5F9.asm:44 TAY
    case 0xF648: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:45 LDX @LOCAL03
    case 0xF649: c.execute<0xA6>(0x000016, 2); return true;
    // src/unknown/C3/C3F5F9.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xF64B: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F5F9.asm:47 LDA #0
    case 0xF64D: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/unknown/C3/C3F5F9.asm:48 JSL PREPARE_VRAM_COPY
    case 0xF64F: c.execute<0x22>(0xC08616, 4); return true;
    // src/unknown/C3/C3F5F9.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F64D.
    case 0xF650: c.execute<0x16>(0x000086, 2); return true;
    // src/unknown/C3/C3F5F9.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F650.
    case 0xF652: if (c.p & 0x10) c.execute<0xC0>(0x0000A5, 2); else c.execute<0xC0>(0x0004A5, 3); return true;
    // src/unknown/C3/C3F5F9.asm:49 LDA @VIRTUAL04
    case 0xF653: c.execute<0xA5>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:49 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC3F652.
    case 0xF654: c.execute<0x04>(0x000018, 2); return true;
    // src/unknown/C3/C3F5F9.asm:50 CLC
    case 0xF655: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:51 ADC TILEMAP_UPDATE_TILE_WIDTH
    case 0xF656: c.execute<0x6D>(0x009F82, 3); return true;
    // src/unknown/C3/C3F5F9.asm:52 STA @VIRTUAL04
    case 0xF659: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F5F9.asm:53 LDX TILEMAP_UPDATE_TILE_Y
    case 0xF65B: c.execute<0xAE>(0x009F7C, 3); return true;
    // src/unknown/C3/C3F5F9.asm:54 INX
    case 0xF65E: c.execute<0xE8>(0x000000, 1); return true;
    // src/unknown/C3/C3F5F9.asm:55 STX TILEMAP_UPDATE_TILE_Y
    case 0xF65F: c.execute<0x8E>(0x009F7C, 3); return true;
    // src/unknown/C3/C3F5F9.asm:56 CPX #32
    case 0xF662: if (c.p & 0x10) c.execute<0xE0>(0x000020, 2); else c.execute<0xE0>(0x000020, 3); return true;
    // src/unknown/C3/C3F5F9.asm:56 CPX #32
    // Overlapping static entry reached from 0xC3F662.
    case 0xF664: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F5F9.asm:57 BNE @UNKNOWN1
    case 0xF665: c.execute<0xD0>(0x000003, 2); return true;
    // src/unknown/C3/C3F5F9.asm:58 STZ TILEMAP_UPDATE_TILE_Y
    case 0xF667: c.execute<0x9C>(0x009F7C, 3); return true;
    // src/unknown/C3/C3F5F9.asm:60 LDA @LOCAL02
    case 0xF66A: c.execute<0xA5>(0x000014, 2); return true;
    // src/unknown/C3/C3F5F9.asm:61 STA @VIRTUAL02
    case 0xF66C: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:62 INC @VIRTUAL02
    case 0xF66E: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:63 LDA @VIRTUAL02
    case 0xF670: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:64 STA @LOCAL02
    case 0xF672: c.execute<0x85>(0x000014, 2); return true;
    // src/unknown/C3/C3F5F9.asm:66 LDA @VIRTUAL02
    case 0xF674: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F5F9.asm:67 CMP TILEMAP_UPDATE_TILE_HEIGHT
    case 0xF676: c.execute<0xCD>(0x009F80, 3); return true;
    // src/unknown/C3/C3F5F9.asm:68 BCC @UNKNOWN0
    case 0xF679: c.execute<0x90>(0x00009A, 2); return true;
    // include/macros.asm:25 PLD
    case 0xF67B: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xF67C: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF67D: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xF67F: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xF680: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xF681: if (c.p & 0x20) c.execute<0x69>(0x0000EC, 2); else c.execute<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3F681.
    case 0xF683: c.execute<0xFF>(0x80AD5B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xF684: c.execute<0x5B>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:8 LDA TILEMAP_UPDATE_TILE_HEIGHT
    case 0xF685: c.execute<0xAD>(0x009F80, 3); return true;
    // src/unknown/C3/C3F67D.asm:8 LDA TILEMAP_UPDATE_TILE_HEIGHT
    // Overlapping static entry reached from 0xC3F683.
    case 0xF687: c.execute<0x9F>(0x04850A, 4); return true;
    // src/unknown/C3/C3F67D.asm:9 ASL
    case 0xF688: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:10 STA @VIRTUAL04
    case 0xF689: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F67D.asm:11 LDA #0
    case 0xF68B: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3F67D.asm:11 LDA #0
    // Overlapping static entry reached from 0xC3F68B.
    case 0xF68D: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F67D.asm:12 STA @VIRTUAL02
    case 0xF68E: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F67D.asm:13 BRA @UNKNOWN3
    case 0xF690: c.execute<0x80>(0x00006A, 2); return true;
    // src/unknown/C3/C3F67D.asm:15 LDA TILEMAP_UPDATE_TILE_Y
    case 0xF692: c.execute<0xAD>(0x009F7C, 3); return true;
    // include/macros.asm:656 ASL
    case 0xF695: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    case 0xF696: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    case 0xF697: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    case 0xF698: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    case 0xF699: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:17 CLC
    case 0xF69A: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:18 ADC TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF69B: c.execute<0x6D>(0x009F84, 3); return true;
    // src/unknown/C3/C3F67D.asm:19 CLC
    case 0xF69E: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:20 ADC TILEMAP_UPDATE_TILE_X
    case 0xF69F: c.execute<0x6D>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F67D.asm:21 STA @LOCAL01
    case 0xF6A2: c.execute<0x85>(0x000012, 2); return true;
    // src/unknown/C3/C3F67D.asm:22 INC TILEMAP_UPDATE_TILE_X
    case 0xF6A4: c.execute<0xEE>(0x009F7A, 3); return true;
    // include/macros.asm:836 LDA src
    case 0xF6A7: c.execute<0xAD>(0x009F86, 3); return true;
    // include/macros.asm:837 STA dest
    case 0xF6AA: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF6AC: c.execute<0xAD>(0x009F88, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF6AF: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xF6B1: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xF6B3: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF6B5: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF6B7: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F67D.asm:25 LDA @LOCAL01
    case 0xF6B9: c.execute<0xA5>(0x000012, 2); return true;
    // src/unknown/C3/C3F67D.asm:26 TAY
    case 0xF6BB: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:27 LDX @VIRTUAL04
    case 0xF6BC: c.execute<0xA6>(0x000004, 2); return true;
    // src/unknown/C3/C3F67D.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xF6BE: c.execute<0xE2>(0x000020, 2); return true;
    // src/unknown/C3/C3F67D.asm:29 LDA #0
    case 0xF6C0: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x002200, 3); return true;
    // src/unknown/C3/C3F67D.asm:30 JSL PREPARE_VRAM_COPY
    case 0xF6C2: c.execute<0x22>(0xC08616, 4); return true;
    // src/unknown/C3/C3F67D.asm:30 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F6C0.
    case 0xF6C3: c.execute<0x16>(0x000086, 2); return true;
    // src/unknown/C3/C3F67D.asm:30 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC3F6C3.
    case 0xF6C5: if (c.p & 0x10) c.execute<0xC0>(0x0000AD, 2); else c.execute<0xC0>(0x0086AD, 3); return true;
    // include/macros.asm:836 LDA src
    case 0xF6C6: c.execute<0xAD>(0x009F86, 3); return true;
    // include/macros.asm:836 LDA src
    // Overlapping static entry reached from 0xC3F6C5.
    case 0xF6C7: c.execute<0x86>(0x00009F, 2); return true;
    // include/macros.asm:836 LDA src
    // Overlapping static entry reached from 0xC3F6C5.
    case 0xF6C8: c.execute<0x9F>(0xAD0685, 4); return true;
    // include/macros.asm:837 STA dest
    case 0xF6C9: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF6CB: c.execute<0xAD>(0x009F88, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Overlapping static entry reached from 0xC3F6C8.
    case 0xF6CC: c.execute<0x88>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Overlapping static entry reached from 0xC3F6CC.
    case 0xF6CD: c.execute<0x9F>(0xAD0885, 4); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF6CE: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F67D.asm:33 LDA TILEMAP_UPDATE_TILE_WIDTH
    case 0xF6D0: c.execute<0xAD>(0x009F82, 3); return true;
    // src/unknown/C3/C3F67D.asm:33 LDA TILEMAP_UPDATE_TILE_WIDTH
    // Overlapping static entry reached from 0xC3F6CD.
    case 0xF6D1: c.execute<0x82>(0x000A9F, 3); return true;
    // src/unknown/C3/C3F67D.asm:34 ASL
    case 0xF6D3: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:35 CLC
    case 0xF6D4: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F67D.asm:36 ADC @VIRTUAL06
    case 0xF6D5: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F67D.asm:37 STA @VIRTUAL06
    case 0xF6D7: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F67D.asm:38 STA TILEMAP_UPDATE_REMAINING_TILES
    case 0xF6D9: c.execute<0x8D>(0x009F86, 3); return true;
    // src/unknown/C3/C3F67D.asm:39 LDA @VIRTUAL06+2
    case 0xF6DC: c.execute<0xA5>(0x000008, 2); return true;
    // src/unknown/C3/C3F67D.asm:40 STA TILEMAP_UPDATE_REMAINING_TILES+2
    case 0xF6DE: c.execute<0x8D>(0x009F88, 3); return true;
    // src/unknown/C3/C3F67D.asm:41 LDA TILEMAP_UPDATE_TILE_X
    case 0xF6E1: c.execute<0xAD>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F67D.asm:42 CMP #32
    case 0xF6E4: if (c.p & 0x20) c.execute<0xC9>(0x000020, 2); else c.execute<0xC9>(0x000020, 3); return true;
    // src/unknown/C3/C3F67D.asm:42 CMP #32
    // Overlapping static entry reached from 0xC3F6E4.
    case 0xF6E6: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F67D.asm:43 BEQ @UNKNOWN1
    case 0xF6E7: c.execute<0xF0>(0x000008, 2); return true;
    // src/unknown/C3/C3F67D.asm:44 LDA TILEMAP_UPDATE_TILE_X
    case 0xF6E9: c.execute<0xAD>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F67D.asm:45 CMP #64
    case 0xF6EC: if (c.p & 0x20) c.execute<0xC9>(0x000040, 2); else c.execute<0xC9>(0x000040, 3); return true;
    // src/unknown/C3/C3F67D.asm:45 CMP #64
    // Overlapping static entry reached from 0xC3F6EC.
    case 0xF6EE: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3F67D.asm:46 BNE @UNKNOWN2
    case 0xF6EF: c.execute<0xD0>(0x000009, 2); return true;
    // src/unknown/C3/C3F67D.asm:48 LDA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF6F1: c.execute<0xAD>(0x009F84, 3); return true;
    // src/unknown/C3/C3F67D.asm:49 EOR #$0400
    case 0xF6F4: if (c.p & 0x20) c.execute<0x49>(0x000000, 2); else c.execute<0x49>(0x000400, 3); return true;
    // src/unknown/C3/C3F67D.asm:49 EOR #$0400
    // Overlapping static entry reached from 0xC3F6F4.
    case 0xF6F6: c.execute<0x04>(0x00008D, 2); return true;
    // src/unknown/C3/C3F67D.asm:50 STA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF6F7: c.execute<0x8D>(0x009F84, 3); return true;
    // src/unknown/C3/C3F67D.asm:50 STA TILEMAP_UPDATE_BASE_ADDRESS
    // Overlapping static entry reached from 0xC3F6F6.
    case 0xF6F8: c.execute<0x84>(0x00009F, 2); return true;
    // src/unknown/C3/C3F67D.asm:52 INC @VIRTUAL02
    case 0xF6FA: c.execute<0xE6>(0x000002, 2); return true;
    // src/unknown/C3/C3F67D.asm:54 LDA @VIRTUAL02
    case 0xF6FC: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F67D.asm:55 CMP TILEMAP_UPDATE_TILE_COUNT
    case 0xF6FE: c.execute<0xCD>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F67D.asm:56 BCC @UNKNOWN0
    case 0xF701: c.execute<0x90>(0x00008F, 2); return true;
    // include/macros.asm:25 PLD
    case 0xF703: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xF704: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF705: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xF707: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xF708: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xF709: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xF70A: if (c.p & 0x20) c.execute<0x69>(0x0000E6, 2); else c.execute<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3F70A.
    case 0xF70C: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xF70D: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xF70E: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:13 STA @LOCAL04
    case 0xF70F: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:13 STA @LOCAL04
    // Overlapping static entry reached from 0xC3F70C.
    case 0xF710: c.execute<0x18>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    case 0xF711: c.execute<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xF713: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF715: c.execute<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF717: c.execute<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xF719: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xF71B: c.execute<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF71D: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF71F: c.execute<0x85>(0x000016, 2); return true;
    // src/unknown/C3/C3F705.asm:16 INC @VIRTUAL06
    case 0xF721: c.execute<0xE6>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:17 INC @VIRTUAL06
    case 0xF723: c.execute<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xF725: c.execute<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xF727: c.execute<0x8D>(0x009F86, 3); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF72A: c.execute<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF72C: c.execute<0x8D>(0x009F88, 3); return true;
    // src/unknown/C3/C3F705.asm:19 LDA @LOCAL04
    case 0xF72F: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:20 AND #$003F
    case 0xF731: if (c.p & 0x20) c.execute<0x29>(0x00003F, 2); else c.execute<0x29>(0x00003F, 3); return true;
    // src/unknown/C3/C3F705.asm:20 AND #$003F
    // Overlapping static entry reached from 0xC3F731.
    case 0xF733: c.execute<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F705.asm:21 TAY
    case 0xF734: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:22 STY @LOCAL02
    case 0xF735: c.execute<0x84>(0x000012, 2); return true;
    // src/unknown/C3/C3F705.asm:23 STY TILEMAP_UPDATE_TILE_X
    case 0xF737: c.execute<0x8C>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F705.asm:24 TXA
    case 0xF73A: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:25 AND #$001F
    case 0xF73B: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/C3/C3F705.asm:25 AND #$001F
    // Overlapping static entry reached from 0xC3F73B.
    case 0xF73D: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F705.asm:26 STA @VIRTUAL02
    case 0xF73E: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:27 STA @LOCAL01
    case 0xF740: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F705.asm:28 LDA @VIRTUAL02
    case 0xF742: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:29 STA TILEMAP_UPDATE_TILE_Y
    case 0xF744: c.execute<0x8D>(0x009F7C, 3); return true;
    // src/unknown/C3/C3F705.asm:30 TYA
    case 0xF747: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:31 AND #$001F
    case 0xF748: if (c.p & 0x20) c.execute<0x29>(0x00001F, 2); else c.execute<0x29>(0x00001F, 3); return true;
    // src/unknown/C3/C3F705.asm:31 AND #$001F
    // Overlapping static entry reached from 0xC3F748.
    case 0xF74A: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F705.asm:32 BEQ @UNKNOWN0
    case 0xF74B: c.execute<0xF0>(0x000005, 2); return true;
    // src/unknown/C3/C3F705.asm:33 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE
    case 0xF74D: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x003C00, 3); return true;
    // src/unknown/C3/C3F705.asm:33 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP + TILEMAP_SIZE
    // Overlapping static entry reached from 0xC3F74D.
    case 0xF74F: c.execute<0x3C>(0x000380, 3); return true;
    // src/unknown/C3/C3F705.asm:34 BRA @UNKNOWN1
    case 0xF750: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3F705.asm:36 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    case 0xF752: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x003800, 3); return true;
    // src/unknown/C3/C3F705.asm:36 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xC3F752.
    case 0xF754: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:38 STX TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF755: c.execute<0x8E>(0x009F84, 3); return true;
    // include/macros.asm:836 LDA src
    case 0xF758: c.execute<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    case 0xF75A: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF75C: c.execute<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF75E: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F705.asm:40 LDA [@VIRTUAL06]
    case 0xF760: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:41 XBA
    case 0xF762: c.execute<0xEB>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:42 AND #$00FF
    case 0xF763: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F705.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC3F763.
    case 0xF765: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F705.asm:43 STA @LOCAL04
    case 0xF766: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:44 TAX
    case 0xF768: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:45 STX @LOCAL00
    case 0xF769: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3F705.asm:46 STX TILEMAP_UPDATE_TILE_COUNT
    case 0xF76B: c.execute<0x8E>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F705.asm:47 LDA [@VIRTUAL06]
    case 0xF76E: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:48 AND #$00FF
    case 0xF770: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F705.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC3F770.
    case 0xF772: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F705.asm:49 STA @VIRTUAL04
    case 0xF773: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:50 STA TILEMAP_UPDATE_TILE_HEIGHT
    case 0xF775: c.execute<0x8D>(0x009F80, 3); return true;
    // src/unknown/C3/C3F705.asm:51 LDA @LOCAL04
    case 0xF778: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:52 STA @VIRTUAL02
    case 0xF77A: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:53 TYA
    case 0xF77C: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:54 CLC
    case 0xF77D: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:55 ADC @VIRTUAL02
    case 0xF77E: c.execute<0x65>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:56 AND #$FFE0
    case 0xF780: if (c.p & 0x20) c.execute<0x29>(0x0000E0, 2); else c.execute<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C3/C3F705.asm:56 AND #$FFE0
    // Overlapping static entry reached from 0xC3F780.
    case 0xF782: c.execute<0xFF>(0x980485, 4); return true;
    // src/unknown/C3/C3F705.asm:57 STA @VIRTUAL04
    case 0xF783: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:58 TYA
    case 0xF785: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:59 AND #$FFE0
    case 0xF786: if (c.p & 0x20) c.execute<0x29>(0x0000E0, 2); else c.execute<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C3/C3F705.asm:59 AND #$FFE0
    // Overlapping static entry reached from 0xC3F786.
    case 0xF788: c.execute<0xFF>(0xD004C5, 4); return true;
    // src/unknown/C3/C3F705.asm:60 CMP @VIRTUAL04
    case 0xF789: c.execute<0xC5>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:61 BNE @UNKNOWN2
    case 0xF78B: c.execute<0xD0>(0x00000A, 2); return true;
    // src/unknown/C3/C3F705.asm:61 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC3F788.
    case 0xF78C: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:62 LDA @LOCAL04
    case 0xF78D: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:63 STA TILEMAP_UPDATE_TILE_WIDTH
    case 0xF78F: c.execute<0x8D>(0x009F82, 3); return true;
    // src/unknown/C3/C3F705.asm:64 JSR UNKNOWN_C3F5F9
    case 0xF792: c.execute<0x20>(0x00F5F9, 3); return true;
    // src/unknown/C3/C3F705.asm:65 BRA @UNKNOWN3
    case 0xF795: c.execute<0x80>(0x000062, 2); return true;
    // src/unknown/C3/C3F705.asm:67 LDA @LOCAL04
    case 0xF797: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:68 STA @VIRTUAL04
    case 0xF799: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:69 LDY @LOCAL02
    case 0xF79B: c.execute<0xA4>(0x000012, 2); return true;
    // src/unknown/C3/C3F705.asm:70 TYA
    case 0xF79D: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:71 CLC
    case 0xF79E: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:72 ADC @VIRTUAL04
    case 0xF79F: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3F705.asm:73 AND #$FFE0
    case 0xF7A1: if (c.p & 0x20) c.execute<0x29>(0x0000E0, 2); else c.execute<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C3/C3F705.asm:73 AND #$FFE0
    // Overlapping static entry reached from 0xC3F7A1.
    case 0xF7A3: c.execute<0xFF>(0x7AED38, 4); return true;
    // src/unknown/C3/C3F705.asm:74 SEC
    case 0xF7A4: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:75 SBC TILEMAP_UPDATE_TILE_X
    case 0xF7A5: c.execute<0xED>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F705.asm:75 SBC TILEMAP_UPDATE_TILE_X
    // Overlapping static entry reached from 0xC3F7A3.
    case 0xF7A7: c.execute<0x9F>(0x9F7E8D, 4); return true;
    // src/unknown/C3/C3F705.asm:76 STA TILEMAP_UPDATE_TILE_COUNT
    case 0xF7A8: c.execute<0x8D>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F705.asm:77 LDA @LOCAL04
    case 0xF7AB: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:78 STA TILEMAP_UPDATE_TILE_WIDTH
    case 0xF7AD: c.execute<0x8D>(0x009F82, 3); return true;
    // src/unknown/C3/C3F705.asm:79 JSR UNKNOWN_C3F5F9
    case 0xF7B0: c.execute<0x20>(0x00F5F9, 3); return true;
    // src/unknown/C3/C3F705.asm:80 LDA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF7B3: c.execute<0xAD>(0x009F84, 3); return true;
    // src/unknown/C3/C3F705.asm:81 EOR #$0400
    case 0xF7B6: if (c.p & 0x20) c.execute<0x49>(0x000000, 2); else c.execute<0x49>(0x000400, 3); return true;
    // src/unknown/C3/C3F705.asm:81 EOR #$0400
    // Overlapping static entry reached from 0xC3F7B6.
    case 0xF7B8: c.execute<0x04>(0x00008D, 2); return true;
    // src/unknown/C3/C3F705.asm:82 STA TILEMAP_UPDATE_BASE_ADDRESS
    case 0xF7B9: c.execute<0x8D>(0x009F84, 3); return true;
    // src/unknown/C3/C3F705.asm:82 STA TILEMAP_UPDATE_BASE_ADDRESS
    // Overlapping static entry reached from 0xC3F7B8.
    case 0xF7BA: c.execute<0x84>(0x00009F, 2); return true;
    // include/macros.asm:836 LDA src
    case 0xF7BC: c.execute<0xAD>(0x009F86, 3); return true;
    // include/macros.asm:837 STA dest
    case 0xF7BF: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    case 0xF7C1: c.execute<0xAD>(0x009F88, 3); return true;
    // include/macros.asm:839 STA dest+2
    case 0xF7C4: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F705.asm:84 LDA TILEMAP_UPDATE_TILE_COUNT
    case 0xF7C6: c.execute<0xAD>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F705.asm:85 ASL
    case 0xF7C9: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:86 CLC
    case 0xF7CA: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:87 ADC @VIRTUAL06
    case 0xF7CB: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:88 STA @VIRTUAL06
    case 0xF7CD: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F705.asm:89 STA TILEMAP_UPDATE_REMAINING_TILES
    case 0xF7CF: c.execute<0x8D>(0x009F86, 3); return true;
    // src/unknown/C3/C3F705.asm:90 LDA @VIRTUAL06+2
    case 0xF7D2: c.execute<0xA5>(0x000008, 2); return true;
    // src/unknown/C3/C3F705.asm:91 STA TILEMAP_UPDATE_REMAINING_TILES+2
    case 0xF7D4: c.execute<0x8D>(0x009F88, 3); return true;
    // src/unknown/C3/C3F705.asm:92 STZ TILEMAP_UPDATE_TILE_X
    case 0xF7D7: c.execute<0x9C>(0x009F7A, 3); return true;
    // src/unknown/C3/C3F705.asm:93 LDA @LOCAL01
    case 0xF7DA: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3F705.asm:94 STA @VIRTUAL02
    case 0xF7DC: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F705.asm:95 STA TILEMAP_UPDATE_TILE_Y
    case 0xF7DE: c.execute<0x8D>(0x009F7C, 3); return true;
    // src/unknown/C3/C3F705.asm:96 LDA @LOCAL04
    case 0xF7E1: c.execute<0xA5>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:97 SEC
    case 0xF7E3: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F705.asm:98 SBC TILEMAP_UPDATE_TILE_COUNT
    case 0xF7E4: c.execute<0xED>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F705.asm:99 STA @LOCAL04
    case 0xF7E7: c.execute<0x85>(0x000018, 2); return true;
    // src/unknown/C3/C3F705.asm:100 CMP #32
    case 0xF7E9: if (c.p & 0x20) c.execute<0xC9>(0x000020, 2); else c.execute<0xC9>(0x000020, 3); return true;
    // src/unknown/C3/C3F705.asm:100 CMP #32
    // Overlapping static entry reached from 0xC3F7E9.
    case 0xF7EB: c.execute<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F705.asm:101 BCS @UNKNOWN2
    case 0xF7EC: c.execute<0xB0>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F705.asm:102 STA TILEMAP_UPDATE_TILE_COUNT
    case 0xF7EE: c.execute<0x8D>(0x009F7E, 3); return true;
    // src/unknown/C3/C3F705.asm:103 LDX @LOCAL00
    case 0xF7F1: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3F705.asm:104 STX TILEMAP_UPDATE_TILE_WIDTH
    case 0xF7F3: c.execute<0x8E>(0x009F82, 3); return true;
    // src/unknown/C3/C3F705.asm:105 JSR UNKNOWN_C3F5F9
    case 0xF7F6: c.execute<0x20>(0x00F5F9, 3); return true;
    // include/macros.asm:25 PLD
    case 0xF7F9: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xF7FA: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF7FB: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xF7FD: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xF7FE: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xF7FF: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3F7FF.
    case 0xF801: c.execute<0xFF>(0x3DA95B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xF802: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xF803: if (c.p & 0x20) c.execute<0xA9>(0x00003D, 2); else c.execute<0xA9>(0x00EB3D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3F803.
    case 0xF805: c.execute<0xEB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    case 0xF806: c.execute<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xF808: if (c.p & 0x20) c.execute<0xA9>(0x0000EF, 2); else c.execute<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3F808.
    case 0xF80A: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xF80B: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F7FB.asm:9 LDX #31
    case 0xF80D: if (c.p & 0x10) c.execute<0xA2>(0x00001F, 2); else c.execute<0xA2>(0x00001F, 3); return true;
    // src/unknown/C3/C3F7FB.asm:9 LDX #31
    // Overlapping static entry reached from 0xC3F80D.
    case 0xF80F: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F7FB.asm:10 LDA #926
    case 0xF810: if (c.p & 0x20) c.execute<0xA9>(0x00009E, 2); else c.execute<0xA9>(0x00039E, 3); return true;
    // src/unknown/C3/C3F7FB.asm:10 LDA #926
    // Overlapping static entry reached from 0xC3F810.
    case 0xF812: c.execute<0x03>(0x000022, 2); return true;
    // src/unknown/C3/C3F7FB.asm:11 JSL UNKNOWN_C3F705
    case 0xF813: c.execute<0x22>(0xC3F705, 4); return true;
    // src/unknown/C3/C3F7FB.asm:11 JSL UNKNOWN_C3F705
    // Overlapping static entry reached from 0xC3F812.
    case 0xF814: c.execute<0x05>(0x0000F7, 2); return true;
    // src/unknown/C3/C3F7FB.asm:11 JSL UNKNOWN_C3F705
    // Overlapping static entry reached from 0xC3F814.
    case 0xF816: c.execute<0xC3>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xF817: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xF818: c.execute<0x6B>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xF981: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xF983: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xF984: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xF985: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xF986: if (c.p & 0x20) c.execute<0x69>(0x0000EE, 2); else c.execute<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3F986.
    case 0xF988: c.execute<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xF989: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xF98A: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:9 STA @VIRTUAL02
    case 0xF98B: c.execute<0x85>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC3F988.
    case 0xF98C: c.execute<0x02>(0x0000C9, 2); return true;
    // src/unknown/C3/C3F981.asm:10 CMP #35
    case 0xF98D: if (c.p & 0x20) c.execute<0xC9>(0x000023, 2); else c.execute<0xC9>(0x000023, 3); return true;
    // src/unknown/C3/C3F981.asm:10 CMP #35
    // Overlapping static entry reached from 0xC3F98D.
    case 0xF98F: c.execute<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:11 BCS @UNKNOWN0
    case 0xF990: c.execute<0xB0>(0x000009, 2); return true;
    // src/unknown/C3/C3F981.asm:12 LDA @VIRTUAL02
    case 0xF992: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:13 JSL SHOW_PSI_ANIMATION
    case 0xF994: c.execute<0x22>(0xC2E116, 4); return true;
    // src/unknown/C3/C3F981.asm:14 JMP @UNKNOWN8
    case 0xF998: c.execute<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:16 LDA @VIRTUAL02
    case 0xF99B: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:17 CMP #46
    case 0xF99D: if (c.p & 0x20) c.execute<0xC9>(0x00002E, 2); else c.execute<0xC9>(0x00002E, 3); return true;
    // src/unknown/C3/C3F981.asm:17 CMP #46
    // Overlapping static entry reached from 0xC3F99D.
    case 0xF99F: c.execute<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:18 BCS @UNKNOWN1
    case 0xF9A0: c.execute<0xB0>(0x00006D, 2); return true;
    // src/unknown/C3/C3F981.asm:19 JSL UNKNOWN_C2DE0F
    case 0xF9A2: c.execute<0x22>(0xC2DE0F, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xF9A6: if (c.p & 0x20) c.execute<0xA9>(0x000051, 2); else c.execute<0xA9>(0x00F951, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3F9A6.
    case 0xF9A8: c.execute<0xF9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    case 0xF9A9: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xF9AB: if (c.p & 0x20) c.execute<0xA9>(0x0000C3, 2); else c.execute<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3F9AB.
    case 0xF9AD: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xF9AE: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F981.asm:21 LDA @VIRTUAL02
    case 0xF9B0: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:22 SEC
    case 0xF9B2: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:23 SBC #35
    case 0xF9B3: if (c.p & 0x20) c.execute<0xE9>(0x000023, 2); else c.execute<0xE9>(0x000023, 3); return true;
    // src/unknown/C3/C3F981.asm:23 SBC #35
    // Overlapping static entry reached from 0xC3F9B3.
    case 0xF9B5: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    case 0xF9B6: c.execute<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    case 0xF9B8: c.execute<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    case 0xF9B9: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3F981.asm:25 STA @LOCAL01
    case 0xF9BB: c.execute<0x85>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:26 INC
    case 0xF9BD: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:27 INC
    case 0xF9BE: c.execute<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    case 0xF9BF: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xF9C1: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xF9C3: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xF9C5: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:29 CLC
    case 0xF9C7: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:30 ADC @VIRTUAL0A
    case 0xF9C8: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:31 STA @VIRTUAL0A
    case 0xF9CA: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:32 LDA [@VIRTUAL0A]
    case 0xF9CC: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:33 AND #$00FF
    case 0xF9CE: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC3F9CE.
    case 0xF9D0: c.execute<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F981.asm:34 TAY
    case 0xF9D1: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:35 LDA @LOCAL01
    case 0xF9D2: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:36 INC
    case 0xF9D4: c.execute<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    case 0xF9D5: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xF9D7: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xF9D9: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xF9DB: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:38 CLC
    case 0xF9DD: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:39 ADC @VIRTUAL0A
    case 0xF9DE: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:40 STA @VIRTUAL0A
    case 0xF9E0: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:41 LDA [@VIRTUAL0A]
    case 0xF9E2: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:42 AND #$00FF
    case 0xF9E4: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC3F9E4.
    case 0xF9E6: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3F981.asm:43 TAX
    case 0xF9E7: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:44 LDA @LOCAL01
    case 0xF9E8: c.execute<0xA5>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:45 CLC
    case 0xF9EA: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:46 ADC @VIRTUAL06
    case 0xF9EB: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:47 STA @VIRTUAL06
    case 0xF9ED: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:48 LDA [@VIRTUAL06]
    case 0xF9EF: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:49 AND #$00FF
    case 0xF9F1: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC3F9F1.
    case 0xF9F3: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:50 JSL SET_COLDATA
    case 0xF9F4: c.execute<0x22>(0xC0B01A, 4); return true;
    // src/unknown/C3/C3F981.asm:51 LDX #$3F
    case 0xF9F8: if (c.p & 0x10) c.execute<0xA2>(0x00003F, 2); else c.execute<0xA2>(0x00003F, 3); return true;
    // src/unknown/C3/C3F981.asm:51 LDX #$3F
    // Overlapping static entry reached from 0xC3F9F8.
    case 0xF9FA: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:52 LDA #$10
    case 0xF9FB: if (c.p & 0x20) c.execute<0xA9>(0x000010, 2); else c.execute<0xA9>(0x000010, 3); return true;
    // src/unknown/C3/C3F981.asm:52 LDA #$10
    // Overlapping static entry reached from 0xC3F9FB.
    case 0xF9FD: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:53 JSL SET_COLOUR_ADDSUB_MODE
    case 0xF9FE: c.execute<0x22>(0xC0B039, 4); return true;
    // src/unknown/C3/C3F981.asm:54 LDX #7
    case 0xFA02: if (c.p & 0x10) c.execute<0xA2>(0x000007, 2); else c.execute<0xA2>(0x000007, 3); return true;
    // src/unknown/C3/C3F981.asm:54 LDX #7
    // Overlapping static entry reached from 0xC3FA02.
    case 0xFA04: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:55 LDA #5
    case 0xFA05: if (c.p & 0x20) c.execute<0xA9>(0x000005, 2); else c.execute<0xA9>(0x000005, 3); return true;
    // src/unknown/C3/C3F981.asm:55 LDA #5
    // Overlapping static entry reached from 0xC3FA05.
    case 0xFA07: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:56 JSL UNKNOWN_C4A67E
    case 0xFA08: c.execute<0x22>(0xC4A67E, 4); return true;
    // src/unknown/C3/C3F981.asm:57 JMP @UNKNOWN8
    case 0xFA0C: c.execute<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:59 LDA @VIRTUAL02
    case 0xFA0F: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:60 CMP #49
    case 0xFA11: if (c.p & 0x20) c.execute<0xC9>(0x000031, 2); else c.execute<0xC9>(0x000031, 3); return true;
    // src/unknown/C3/C3F981.asm:60 CMP #49
    // Overlapping static entry reached from 0xC3FA11.
    case 0xFA13: c.execute<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:61 BCS @UNKNOWN5
    case 0xFA14: c.execute<0xB0>(0x00002A, 2); return true;
    // src/unknown/C3/C3F981.asm:62 LDA @VIRTUAL02
    case 0xFA16: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:63 INC
    case 0xFA18: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:64 CMP #47
    case 0xFA19: if (c.p & 0x20) c.execute<0xC9>(0x00002F, 2); else c.execute<0xC9>(0x00002F, 3); return true;
    // src/unknown/C3/C3F981.asm:64 CMP #47
    // Overlapping static entry reached from 0xC3FA19.
    case 0xFA1B: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F981.asm:65 BEQ @UNKNOWN3
    case 0xFA1C: c.execute<0xF0>(0x000010, 2); return true;
    // src/unknown/C3/C3F981.asm:66 CMP #48
    case 0xFA1E: if (c.p & 0x20) c.execute<0xC9>(0x000030, 2); else c.execute<0xC9>(0x000030, 3); return true;
    // src/unknown/C3/C3F981.asm:66 CMP #48
    // Overlapping static entry reached from 0xC3FA1E.
    case 0xFA20: c.execute<0x00>(0x0000F0, 2); return true;
    // src/unknown/C3/C3F981.asm:67 BEQ @UNKNOWN4
    case 0xFA21: c.execute<0xF0>(0x000014, 2); return true;
    // src/unknown/C3/C3F981.asm:68 CMP #49
    case 0xFA23: if (c.p & 0x20) c.execute<0xC9>(0x000031, 2); else c.execute<0xC9>(0x000031, 3); return true;
    // src/unknown/C3/C3F981.asm:68 CMP #49
    // Overlapping static entry reached from 0xC3FA23.
    case 0xFA25: c.execute<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    case 0xFA26: c.execute<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    case 0xFA28: c.execute<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:70 JMP @UNKNOWN8
    case 0xFA2B: c.execute<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:72 LDA #144
    case 0xFA2E: if (c.p & 0x20) c.execute<0xA9>(0x000090, 2); else c.execute<0xA9>(0x000090, 3); return true;
    // src/unknown/C3/C3F981.asm:72 LDA #144
    // Overlapping static entry reached from 0xC3FA2E.
    case 0xFA30: c.execute<0x00>(0x00008D, 2); return true;
    // src/unknown/C3/C3F981.asm:73 STA WOBBLE_DURATION
    case 0xFA31: c.execute<0x8D>(0x00AD92, 3); return true;
    // src/unknown/C3/C3F981.asm:74 JMP @UNKNOWN8
    case 0xFA34: c.execute<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:76 LDA #300
    case 0xFA37: if (c.p & 0x20) c.execute<0xA9>(0x00002C, 2); else c.execute<0xA9>(0x00012C, 3); return true;
    // src/unknown/C3/C3F981.asm:76 LDA #300
    // Overlapping static entry reached from 0xC3FA37.
    case 0xFA39: c.execute<0x01>(0x00008D, 2); return true;
    // src/unknown/C3/C3F981.asm:77 STA SHAKE_DURATION
    case 0xFA3A: c.execute<0x8D>(0x00AD94, 3); return true;
    // src/unknown/C3/C3F981.asm:77 STA SHAKE_DURATION
    // Overlapping static entry reached from 0xC3FA39.
    case 0xFA3B: c.execute<0x94>(0x0000AD, 2); return true;
    // src/unknown/C3/C3F981.asm:78 JMP @UNKNOWN8
    case 0xFA3D: c.execute<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:80 LDA @VIRTUAL02
    case 0xFA40: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:81 CMP #54
    case 0xFA42: if (c.p & 0x20) c.execute<0xC9>(0x000036, 2); else c.execute<0xC9>(0x000036, 3); return true;
    // src/unknown/C3/C3F981.asm:81 CMP #54
    // Overlapping static entry reached from 0xC3FA42.
    case 0xFA44: c.execute<0x00>(0x000090, 2); return true;
    // src/unknown/C3/C3F981.asm:82 BCC @UNKNOWN6
    case 0xFA45: c.execute<0x90>(0x000003, 2); return true;
    // src/unknown/C3/C3F981.asm:83 JMP @UNKNOWN8
    case 0xFA47: c.execute<0x4C>(0x00FAC7, 3); return true;
    // src/unknown/C3/C3F981.asm:85 JSL UNKNOWN_C2DE0F
    case 0xFA4A: c.execute<0x22>(0xC2DE0F, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    case 0xFA4E: if (c.p & 0x20) c.execute<0xA9>(0x000072, 2); else c.execute<0xA9>(0x00F972, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Overlapping static entry reached from 0xC3FA4E.
    case 0xFA50: c.execute<0xF9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    case 0xFA51: c.execute<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    case 0xFA53: if (c.p & 0x20) c.execute<0xA9>(0x0000C3, 2); else c.execute<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Overlapping static entry reached from 0xC3FA53.
    case 0xFA55: c.execute<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    case 0xFA56: c.execute<0x85>(0x000008, 2); return true;
    // src/unknown/C3/C3F981.asm:87 LDA @VIRTUAL02
    case 0xFA58: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:88 SEC
    case 0xFA5A: c.execute<0x38>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:89 SBC #49
    case 0xFA5B: if (c.p & 0x20) c.execute<0xE9>(0x000031, 2); else c.execute<0xE9>(0x000031, 3); return true;
    // src/unknown/C3/C3F981.asm:89 SBC #49
    // Overlapping static entry reached from 0xC3FA5B.
    case 0xFA5D: c.execute<0x00>(0x000085, 2); return true;
    // src/unknown/C3/C3F981.asm:90 STA @VIRTUAL04
    case 0xFA5E: c.execute<0x85>(0x000004, 2); return true;
    // src/unknown/C3/C3F981.asm:91 ASL
    case 0xFA60: c.execute<0x0A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:92 ADC @VIRTUAL04
    case 0xFA61: c.execute<0x65>(0x000004, 2); return true;
    // src/unknown/C3/C3F981.asm:93 STA @LOCAL00
    case 0xFA63: c.execute<0x85>(0x00000E, 2); return true;
    // src/unknown/C3/C3F981.asm:94 INC
    case 0xFA65: c.execute<0x1A>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:95 INC
    case 0xFA66: c.execute<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    case 0xFA67: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xFA69: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xFA6B: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xFA6D: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:97 CLC
    case 0xFA6F: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:98 ADC @VIRTUAL0A
    case 0xFA70: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:99 STA @VIRTUAL0A
    case 0xFA72: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:100 LDA [@VIRTUAL0A]
    case 0xFA74: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:101 AND #$00FF
    case 0xFA76: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC3FA76.
    case 0xFA78: c.execute<0x00>(0x0000A8, 2); return true;
    // src/unknown/C3/C3F981.asm:102 TAY
    case 0xFA79: c.execute<0xA8>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:103 LDA @LOCAL00
    case 0xFA7A: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3F981.asm:104 INC
    case 0xFA7C: c.execute<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    case 0xFA7D: c.execute<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    case 0xFA7F: c.execute<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    case 0xFA81: c.execute<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    case 0xFA83: c.execute<0x86>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:106 CLC
    case 0xFA85: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:107 ADC @VIRTUAL0A
    case 0xFA86: c.execute<0x65>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:108 STA @VIRTUAL0A
    case 0xFA88: c.execute<0x85>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:109 LDA [@VIRTUAL0A]
    case 0xFA8A: c.execute<0xA7>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:110 AND #$00FF
    case 0xFA8C: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xC3FA8C.
    case 0xFA8E: c.execute<0x00>(0x0000AA, 2); return true;
    // src/unknown/C3/C3F981.asm:111 TAX
    case 0xFA8F: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:112 LDA @LOCAL00
    case 0xFA90: c.execute<0xA5>(0x00000E, 2); return true;
    // src/unknown/C3/C3F981.asm:113 CLC
    case 0xFA92: c.execute<0x18>(0x000000, 1); return true;
    // src/unknown/C3/C3F981.asm:114 ADC @VIRTUAL06
    case 0xFA93: c.execute<0x65>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:115 STA @VIRTUAL06
    case 0xFA95: c.execute<0x85>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:116 LDA [@VIRTUAL06]
    case 0xFA97: c.execute<0xA7>(0x000006, 2); return true;
    // src/unknown/C3/C3F981.asm:117 AND #$00FF
    case 0xFA99: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3F981.asm:117 AND #$00FF
    // Overlapping static entry reached from 0xC3FA99.
    case 0xFA9B: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:118 JSL SET_COLDATA
    case 0xFA9C: c.execute<0x22>(0xC0B01A, 4); return true;
    // src/unknown/C3/C3F981.asm:119 LDX #$3F
    case 0xFAA0: if (c.p & 0x10) c.execute<0xA2>(0x00003F, 2); else c.execute<0xA2>(0x00003F, 3); return true;
    // src/unknown/C3/C3F981.asm:119 LDX #$3F
    // Overlapping static entry reached from 0xC3FAA0.
    case 0xFAA2: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:120 LDA #$10
    case 0xFAA3: if (c.p & 0x20) c.execute<0xA9>(0x000010, 2); else c.execute<0xA9>(0x000010, 3); return true;
    // src/unknown/C3/C3F981.asm:120 LDA #$10
    // Overlapping static entry reached from 0xC3FAA3.
    case 0xFAA5: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:121 JSL SET_COLOUR_ADDSUB_MODE
    case 0xFAA6: c.execute<0x22>(0xC0B039, 4); return true;
    // src/unknown/C3/C3F981.asm:122 LDA @VIRTUAL02
    case 0xFAAA: c.execute<0xA5>(0x000002, 2); return true;
    // src/unknown/C3/C3F981.asm:123 CMP #53
    case 0xFAAC: if (c.p & 0x20) c.execute<0xC9>(0x000035, 2); else c.execute<0xC9>(0x000035, 3); return true;
    // src/unknown/C3/C3F981.asm:123 CMP #53
    // Overlapping static entry reached from 0xC3FAAC.
    case 0xFAAE: c.execute<0x00>(0x0000B0, 2); return true;
    // src/unknown/C3/C3F981.asm:124 BCS @UNKNOWN7
    case 0xFAAF: c.execute<0xB0>(0x00000C, 2); return true;
    // src/unknown/C3/C3F981.asm:125 LDX #5
    case 0xFAB1: if (c.p & 0x10) c.execute<0xA2>(0x000005, 2); else c.execute<0xA2>(0x000005, 3); return true;
    // src/unknown/C3/C3F981.asm:125 LDX #5
    // Overlapping static entry reached from 0xC3FAB1.
    case 0xFAB3: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:126 LDA #4
    case 0xFAB4: if (c.p & 0x20) c.execute<0xA9>(0x000004, 2); else c.execute<0xA9>(0x000004, 3); return true;
    // src/unknown/C3/C3F981.asm:126 LDA #4
    // Overlapping static entry reached from 0xC3FAB4.
    case 0xFAB6: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:127 JSL UNKNOWN_C4A67E
    case 0xFAB7: c.execute<0x22>(0xC4A67E, 4); return true;
    // src/unknown/C3/C3F981.asm:128 BRA @UNKNOWN8
    case 0xFABB: c.execute<0x80>(0x00000A, 2); return true;
    // src/unknown/C3/C3F981.asm:130 LDX #4
    case 0xFABD: if (c.p & 0x10) c.execute<0xA2>(0x000004, 2); else c.execute<0xA2>(0x000004, 3); return true;
    // src/unknown/C3/C3F981.asm:130 LDX #4
    // Overlapping static entry reached from 0xC3FABD.
    case 0xFABF: c.execute<0x00>(0x0000A9, 2); return true;
    // src/unknown/C3/C3F981.asm:131 LDA #2
    case 0xFAC0: if (c.p & 0x20) c.execute<0xA9>(0x000002, 2); else c.execute<0xA9>(0x000002, 3); return true;
    // src/unknown/C3/C3F981.asm:131 LDA #2
    // Overlapping static entry reached from 0xC3FAC0.
    case 0xFAC2: c.execute<0x00>(0x000022, 2); return true;
    // src/unknown/C3/C3F981.asm:132 JSL UNKNOWN_C4A67E
    case 0xFAC3: c.execute<0x22>(0xC4A67E, 4); return true;
    // include/macros.asm:25 PLD
    case 0xFAC7: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    case 0xFAC8: c.execute<0x60>(0x000000, 1); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xFAC9: c.execute<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    case 0xFACB: c.execute<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    case 0xFACC: c.execute<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    case 0xFACD: c.execute<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    case 0xFACE: if (c.p & 0x20) c.execute<0x69>(0x0000F0, 2); else c.execute<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Overlapping static entry reached from 0xC3FACE.
    case 0xFAD0: c.execute<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    case 0xFAD1: c.execute<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    case 0xFAD2: c.execute<0x68>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:10 TXY
    case 0xFAD3: c.execute<0x9B>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:11 TAX
    case 0xFAD4: c.execute<0xAA>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:12 STX @LOCAL00
    case 0xFAD5: c.execute<0x86>(0x00000E, 2); return true;
    // src/unknown/C3/C3FAC9.asm:13 LDX CURRENT_TARGET
    case 0xFAD7: c.execute<0xAE>(0x00A972, 3); return true;
    // src/unknown/C3/C3FAC9.asm:14 LDA a:battler::npc_id,X
    case 0xFADA: c.execute<0xBD>(0x00000F, 3); return true;
    // src/unknown/C3/C3FAC9.asm:15 AND #$00FF
    case 0xFADD: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3FAC9.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC3FADD.
    case 0xFADF: c.execute<0x00>(0x0000C9, 2); return true;
    // src/unknown/C3/C3FAC9.asm:16 CMP #ENEMY::TINY_LIL_GHOST
    case 0xFAE0: if (c.p & 0x20) c.execute<0xC9>(0x0000D5, 2); else c.execute<0xC9>(0x0000D5, 3); return true;
    // src/unknown/C3/C3FAC9.asm:16 CMP #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC3FAE0.
    case 0xFAE2: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3FAC9.asm:17 BNE @UNKNOWN0
    case 0xFAE3: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3FAC9.asm:18 LDA #TRUE
    case 0xFAE5: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3FAC9.asm:18 LDA #TRUE
    // Overlapping static entry reached from 0xC3FAE5.
    case 0xFAE7: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3FAC9.asm:19 BRA @UNKNOWN2
    case 0xFAE8: c.execute<0x80>(0x00001D, 2); return true;
    // src/unknown/C3/C3FAC9.asm:21 LDX CURRENT_TARGET
    case 0xFAEA: c.execute<0xAE>(0x00A972, 3); return true;
    // src/unknown/C3/C3FAC9.asm:22 LDA a:battler::ally_or_enemy,X
    case 0xFAED: c.execute<0xBD>(0x00000E, 3); return true;
    // src/unknown/C3/C3FAC9.asm:23 AND #$00FF
    case 0xFAF0: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3FAC9.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC3FAF0.
    case 0xFAF2: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3FAC9.asm:24 BNE @UNKNOWN1
    case 0xFAF3: c.execute<0xD0>(0x00000B, 2); return true;
    // src/unknown/C3/C3FAC9.asm:25 LDX @LOCAL00
    case 0xFAF5: c.execute<0xA6>(0x00000E, 2); return true;
    // src/unknown/C3/C3FAC9.asm:26 TXA
    case 0xFAF7: c.execute<0x8A>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:27 JSR UNKNOWN_C3F981
    case 0xFAF8: c.execute<0x20>(0x00F981, 3); return true;
    // src/unknown/C3/C3FAC9.asm:28 LDA #FALSE
    case 0xFAFB: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3FAC9.asm:28 LDA #FALSE
    // Overlapping static entry reached from 0xC3FAFB.
    case 0xFAFD: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3FAC9.asm:29 BRA @UNKNOWN2
    case 0xFAFE: c.execute<0x80>(0x000007, 2); return true;
    // src/unknown/C3/C3FAC9.asm:31 TYA
    case 0xFB00: c.execute<0x98>(0x000000, 1); return true;
    // src/unknown/C3/C3FAC9.asm:32 JSR UNKNOWN_C3F981
    case 0xFB01: c.execute<0x20>(0x00F981, 3); return true;
    // src/unknown/C3/C3FAC9.asm:33 LDA #TRUE
    case 0xFB04: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3FAC9.asm:33 LDA #TRUE
    // Overlapping static entry reached from 0xC3FB04.
    case 0xFB06: c.execute<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    case 0xFB07: c.execute<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    case 0xFB08: c.execute<0x6B>(0x000000, 1); return true;
    // src/unknown/C3/C3FB09.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xFB09: c.execute<0xC2>(0x000031, 2); return true;
    // src/unknown/C3/C3FB09.asm:4 LDX CURRENT_ATTACKER
    case 0xFB0B: c.execute<0xAE>(0x00A970, 3); return true;
    // src/unknown/C3/C3FB09.asm:5 LDA __BSS_START__+14,X
    case 0xFB0E: c.execute<0xBD>(0x00000E, 3); return true;
    // src/unknown/C3/C3FB09.asm:6 AND #$00FF
    case 0xFB11: if (c.p & 0x20) c.execute<0x29>(0x0000FF, 2); else c.execute<0x29>(0x0000FF, 3); return true;
    // src/unknown/C3/C3FB09.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC3FB11.
    case 0xFB13: c.execute<0x00>(0x0000D0, 2); return true;
    // src/unknown/C3/C3FB09.asm:7 BNE @UNKNOWN0
    case 0xFB14: c.execute<0xD0>(0x000005, 2); return true;
    // src/unknown/C3/C3FB09.asm:8 LDA #$0000
    case 0xFB16: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/unknown/C3/C3FB09.asm:8 LDA #$0000
    // Overlapping static entry reached from 0xC3FB16.
    case 0xFB18: c.execute<0x00>(0x000080, 2); return true;
    // src/unknown/C3/C3FB09.asm:9 BRA @UNKNOWN1
    case 0xFB19: c.execute<0x80>(0x000003, 2); return true;
    // src/unknown/C3/C3FB09.asm:11 LDA #$0001
    case 0xFB1B: if (c.p & 0x20) c.execute<0xA9>(0x000001, 2); else c.execute<0xA9>(0x000001, 3); return true;
    // src/unknown/C3/C3FB09.asm:11 LDA #$0001
    // Overlapping static entry reached from 0xC3FB1B.
    case 0xFB1D: c.execute<0x00>(0x00006B, 2); return true;
    // src/unknown/C3/C3FB09.asm:13 RTL
    case 0xFB1E: c.execute<0x6B>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xFDC5: c.execute<0xC2>(0x000020, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:4 LDX #$0033
    case 0xFDC7: if (c.p & 0x10) c.execute<0xA2>(0x000033, 2); else c.execute<0xA2>(0x000033, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:4 LDX #$0033
    // Overlapping static entry reached from 0xC3FDC7.
    case 0xFDC9: c.execute<0x00>(0x0000A9, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:5 LDA #$0000
    case 0xFDCA: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x000000, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:5 LDA #$0000
    // Overlapping static entry reached from 0xC3FDCA.
    case 0xFDCC: c.execute<0x00>(0x000018, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:7 CLC
    case 0xFDCD: c.execute<0x18>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:8 ADC f:CHECK_HARDWARE,X
    case 0xFDCE: c.execute<0x7F>(0xC0A11C, 4); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:9 DEX
    case 0xFDD2: c.execute<0xCA>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:10 BPL @UNKNOWN0
    case 0xFDD3: c.execute<0x10>(0x0000F8, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:11 SEC
    case 0xFDD5: c.execute<0x38>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:12 SBC f:ANTIPIRACY_CHECKSUM_2
    case 0xFDD6: c.execute<0xEF>(0xC3FDF2, 4); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:13 BEQ @UNKNOWN3
    case 0xFDDA: c.execute<0xF0>(0x000015, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xFDDC: c.execute<0xE2>(0x000020, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:16 LDX #$0000
    case 0xFDDE: if (c.p & 0x10) c.execute<0xA2>(0x000000, 2); else c.execute<0xA2>(0x006000, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:17 RTS
    case 0xFDE0: c.execute<0x60>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:18 LDA #$0000
    case 0xFDE1: if (c.p & 0x20) c.execute<0xA9>(0x000000, 2); else c.execute<0xA9>(0x009F00, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:20 STA f:SRAM,X
    case 0xFDE3: c.execute<0x9F>(0x300000, 4); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:20 STA f:SRAM,X
    // Overlapping static entry reached from 0xC3FDE1.
    case 0xFDE4: c.execute<0x00>(0x000000, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:21 INX
    case 0xFDE7: c.execute<0xE8>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:22 BPL @UNKNOWN1
    case 0xFDE8: c.execute<0x10>(0x0000F9, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:23 LDA #$0034
    case 0xFDEA: if (c.p & 0x20) c.execute<0xA9>(0x000034, 2); else c.execute<0xA9>(0x008D34, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:24 STA DMA_QUEUE_INDEX
    case 0xFDEC: c.execute<0x8D>(0x000000, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:24 STA DMA_QUEUE_INDEX
    // Overlapping static entry reached from 0xC3FDEA.
    case 0xFDED: c.execute<0x00>(0x000000, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:26 BRA @UNKNOWN2
    case 0xFDEF: c.execute<0x80>(0x0000FE, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:28 RTL
    case 0xFDF1: c.execute<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}
} // namespace eb
